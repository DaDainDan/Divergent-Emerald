#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Howl raises the user's Attack by 1 stage when used alone")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_HOWL) == EFFECT_HOWL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_HOWL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HOWL, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Wobbuffet's Attack rose!");
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("Howl's Attack boost does not stack across separate turns")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_HOWL) == EFFECT_HOWL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_HOWL); }
        TURN { MOVE(player, MOVE_HOWL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HOWL, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Wobbuffet's Attack rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HOWL, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Wobbuffet's Attack rose!");
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 2);
    }
}

DOUBLE_BATTLE_TEST("Howl from two allies on the same turn raises Attack by 2")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_HOWL) == EFFECT_HOWL);
        ASSUME(GetMoveTarget(MOVE_HOWL) == TARGET_USER_AND_ALLY);
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_HOWL); MOVE(playerRight, MOVE_HOWL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HOWL, playerLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Wynaut's Attack rose!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        MESSAGE("Wynaut's Attack rose!");
        // 2nd Howl
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HOWL, playerRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        MESSAGE("Wynaut's Attack rose sharply!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Wynaut's Attack rose sharply!");
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_ATK], MAX_STAT_STAGE);
        EXPECT_EQ(playerRight->statStages[STAT_ATK], MAX_STAT_STAGE);
    }
}
