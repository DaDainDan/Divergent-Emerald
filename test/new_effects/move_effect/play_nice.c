#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveEffect(MOVE_PLAY_NICE) == EFFECT_STAT_CHANGE);
    ASSUME_STAT_CHANGE(MOVE_PLAY_NICE, attack: -3, spAtk: -3);
}

SINGLE_BATTLE_TEST("Play Nice lowers Attack and Sp. Atk of both the user and the target")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_PLAY_NICE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PLAY_NICE, player);
    } THEN {
        EXPECT_EQ(opponent->statStages[STAT_ATK], MIN_STAT_STAGE);
        EXPECT_EQ(opponent->statStages[STAT_SPATK], MIN_STAT_STAGE);
        EXPECT_EQ(player->statStages[STAT_ATK], MIN_STAT_STAGE);
        EXPECT_EQ(player->statStages[STAT_SPATK], MIN_STAT_STAGE);
    }
}

DOUBLE_BATTLE_TEST("Play Nice does not affect the user's ally, only the user and its chosen target")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_PLAY_NICE, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PLAY_NICE, playerLeft);
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_ATK], MIN_STAT_STAGE);
        EXPECT_EQ(playerLeft->statStages[STAT_SPATK], MIN_STAT_STAGE);
        EXPECT_EQ(opponentLeft->statStages[STAT_ATK], MIN_STAT_STAGE);
        EXPECT_EQ(opponentLeft->statStages[STAT_SPATK], MIN_STAT_STAGE);
        // Doesn't effect partner
        EXPECT_EQ(playerRight->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
        EXPECT_EQ(playerRight->statStages[STAT_SPATK], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponentRight->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponentRight->statStages[STAT_SPATK], DEFAULT_STAT_STAGE);
    }
}
