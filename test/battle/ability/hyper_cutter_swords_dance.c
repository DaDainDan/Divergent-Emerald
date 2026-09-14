#include "global.h"
#include "test/battle.h"

// Repro attempt for a reported freeze: double battle, Servine (Hyper Cutter) already
// at +3 Attack, ally Braixen gets KO'd by a faster move earlier in the same turn, then
// Servine uses Swords Dance again (already maxed) while the ally's battler slot is empty.
DOUBLE_BATTLE_TEST("Swords Dance + Hyper Cutter doesn't hang when the ally faints earlier in the turn")
{
    GIVEN {
        PLAYER(SPECIES_BRAIXEN) { Level(20); MaxHP(1); HP(1); Speed(50); }
        PLAYER(SPECIES_SERVINE) { Level(20); Ability(ABILITY_HYPER_CUTTER); Speed(40); Moves(MOVE_SWORDS_DANCE); }
        OPPONENT(SPECIES_BLISSEY) { Level(100); Ability(ABILITY_NATURAL_CURE); Speed(100); }
        OPPONENT(SPECIES_BLISSEY) { Level(100); Ability(ABILITY_NATURAL_CURE); Speed(90); Moves(MOVE_DOUBLE_EDGE); }
    } WHEN {
        TURN { MOVE(playerRight, MOVE_SWORDS_DANCE); }
        TURN {
            MOVE(opponentRight, MOVE_DOUBLE_EDGE, target: playerLeft);
            MOVE(playerRight, MOVE_SWORDS_DANCE);
        }
    } SCENE {
        MESSAGE("Servine used Swords Dance!");
        MESSAGE("Servine's Attack rose drastically!");
        MESSAGE("The opposing Blissey used Double-Edge!");
        MESSAGE("Braixen fainted!");
        MESSAGE("Servine used Swords Dance!");
    } THEN {
        EXPECT_EQ(playerRight->statStages[STAT_ATK], MAX_STAT_STAGE);
        EXPECT_EQ(opponentLeft->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponentRight->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
    }
}

// Repro attempt: Hyper Cutter lets a single Swords Dance jump straight from neutral to
// MAX_STAT_STAGE (a +3 delta that was previously impossible in one move, max used to be +2).
// Opportunist/Competitive copy an opponent's stat rise via gQueuedStatBoosts, which was only
// ever fed deltas of at most 2 before. Two opposing battlers react at once in this double battle.
DOUBLE_BATTLE_TEST("Swords Dance + Hyper Cutter doesn't hang when Opportunist/Competitive mirror the instant max jump")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(30); }
        PLAYER(SPECIES_SERVINE) { Ability(ABILITY_HYPER_CUTTER); Speed(40); Moves(MOVE_SWORDS_DANCE); }
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_OPPORTUNIST); Speed(20); }
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ABILITY_COMPETITIVE); Speed(10); }
    } WHEN {
        TURN { MOVE(playerRight, MOVE_SWORDS_DANCE); }
    } SCENE {
        MESSAGE("Servine used Swords Dance!");
        MESSAGE("Servine's Attack rose drastically!");
    } THEN {
        EXPECT_EQ(playerRight->statStages[STAT_ATK], MAX_STAT_STAGE);
    }
}

// Same shape as the ally-faint repro, but with a *foe* battler slot going empty mid-turn
// instead of an ally slot, since LEFT_FOE/RIGHT_FOE resolve differently than BATTLE_PARTNER
// in GetTargetFromSlotId.
DOUBLE_BATTLE_TEST("Swords Dance + Hyper Cutter doesn't hang when a foe faints earlier in the turn")
{
    GIVEN {
        PLAYER(SPECIES_SERVINE) { Ability(ABILITY_HYPER_CUTTER); Speed(40); Moves(MOVE_SWORDS_DANCE); }
        PLAYER(SPECIES_BRAIXEN) { Speed(90); Moves(MOVE_EMBER); }
        OPPONENT(SPECIES_WYNAUT) { MaxHP(1); HP(1); Speed(50); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(20); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SWORDS_DANCE); }
        TURN {
            MOVE(playerRight, MOVE_EMBER, target: opponentLeft);
            MOVE(playerLeft, MOVE_SWORDS_DANCE);
        }
    } SCENE {
        MESSAGE("Servine used Swords Dance!");
        MESSAGE("Servine's Attack rose drastically!");
        MESSAGE("Braixen used Ember!");
        MESSAGE("The opposing Wynaut fainted!");
        MESSAGE("Servine used Swords Dance!");
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_ATK], MAX_STAT_STAGE);
        EXPECT_EQ(opponentRight->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
    }
}
