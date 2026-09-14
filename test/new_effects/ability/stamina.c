#include "global.h"
#include "test/battle.h"

// New Stamina: instead of raising Defense when hit, Stamina now resists incoming stat drops.
// Any stat drop is reduced in magnitude by 1 stage. A drop of exactly -1 stage is fully
// nullified. If every stat drop from a move is reduced to nothing (i.e. every targeted stat
// was only being dropped by 1 stage), the whole move's stat changes are blocked with a single
// ability pop-up instead of being silently absorbed stat-by-stat.

SINGLE_BATTLE_TEST("gStamina reduces the magnitude of a stat drop greater than 1 stage by 1 stage")
{
    enum Move move;
    enum Stat stat;

    PARAMETRIZE { move = MOVE_CHARM; stat = STAT_ATK; }
    PARAMETRIZE { move = MOVE_FAKE_TEARS; stat = STAT_SPATK; }
    PARAMETRIZE { move = MOVE_SCARY_FACE; stat = STAT_SPEED; }

    GIVEN {
        ASSUME_STAT_CHANGE(MOVE_CHARM, attack: -2);
        ASSUME_STAT_CHANGE(MOVE_FAKE_TEARS, spAtk: -2);
        ASSUME_STAT_CHANGE(MOVE_SCARY_FACE, speed: -2);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_STAMINA); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        NOT ABILITY_POPUP(player, ABILITY_STAMINA);
        if (move == MOVE_CHARM)
            MESSAGE("Wobbuffet's Attack fell!");
        else if (move == MOVE_FAKE_TEARS)
            MESSAGE("Wobbuffet's Sp. Atk fell!");
        else
            MESSAGE("Wobbuffet's Speed fell!");
    } THEN {
        EXPECT_EQ(player->statStages[stat], DEFAULT_STAT_STAGE - 1);
    }
}

SINGLE_BATTLE_TEST("gStamina fully nullifies a stat drop of exactly 1 stage, with an ability pop-up")
{
    enum Move move;
    enum Stat stat;
    enum Stat stat2;

    PARAMETRIZE { move = MOVE_LEER; stat = STAT_SPEED; stat2 = STAT_SPEED; }
    PARAMETRIZE { move = MOVE_TICKLE; stat = STAT_ATK; stat2 = STAT_DEF; }
    GIVEN {
        ASSUME_STAT_CHANGE(MOVE_LEER, speed: -1);
        ASSUME_STAT_CHANGE(MOVE_TICKLE, attack: -1, defense: 1);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_STAMINA); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        }
        ABILITY_POPUP(player, ABILITY_STAMINA);
        MESSAGE("Wobbuffet's stats were not lowered!");
    } THEN {
        EXPECT_EQ(player->statStages[stat], DEFAULT_STAT_STAGE);
        EXPECT_EQ(player->statStages[stat2], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("gStamina nullifies every stat change from a move when all of its drops are 1 stage, with a single ability pop-up")
{
    GIVEN {
        ASSUME_STAT_CHANGE(MOVE_TICKLE, attack: -1, defense: -1);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_STAMINA); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TICKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TICKLE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        }
        ABILITY_POPUP(player, ABILITY_STAMINA);
        MESSAGE("Wobbuffet's stats were not lowered!");
        NONE_OF {
            ABILITY_POPUP(player, ABILITY_STAMINA);
            MESSAGE("Wobbuffet's stats were not lowered!");
        }
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("gStamina doesn't affect stat increases on its own battler")
{
    GIVEN {
        ASSUME_STAT_CHANGE(MOVE_SWORDS_DANCE, attack: +2);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_STAMINA); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SWORDS_DANCE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SWORDS_DANCE, player);
        NOT ABILITY_POPUP(player, ABILITY_STAMINA);
        MESSAGE("Wobbuffet's Attack rose sharply!");
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 2);
    }
}
