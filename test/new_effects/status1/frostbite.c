#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("PROMISE: Frostbite increases damage taken by 33 percent")
{
    s16 increasedDamage;
    s16 normaleDamage;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_FROST_TURN(1)); };
        OPPONENT(SPECIES_GRUMPIG);
    } WHEN {
        TURN { MOVE(opponent, MOVE_PSYCHIC); MOVE(player, MOVE_SPLASH); }
        TURN { MOVE(opponent, MOVE_PSYCHIC); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PSYCHIC, opponent);
        HP_BAR(player, captureDamage: &increasedDamage);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLASH, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PSYCHIC, opponent);
        HP_BAR(player, captureDamage: &normaleDamage);
   } THEN { EXPECT_EQ(4 * normaleDamage / 3, increasedDamage); }
}

SINGLE_BATTLE_TEST("PROMISE: Frostbite prevents the battler from using a move on first status turn")
{
    u32 turns, j, counter;
    PARAMETRIZE { turns = 5; }
    PARAMETRIZE { turns = 7; } // Potency
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_FROST_TURN(turns)); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        for (j = 0; j < turns; j++)
            TURN { MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        for (j = 0; j < turns - 1; j++)
        {
            counter = turns - j - 1;
            if (counter == 4 || counter == 6)
                MESSAGE("Wobbuffet couldn't move because it's frostbitten!");
            else
                MESSAGE("Wobbuffet used Celebrate!");
        }
        MESSAGE("Wobbuffet's frostbite got better!");
        STATUS_ICON(player, none: TRUE);
        MESSAGE("Wobbuffet used Celebrate!");
    }
}

SINGLE_BATTLE_TEST("Frostbite is healed if hit with a thawing move")
{
    enum Move move;

    PARAMETRIZE { move = MOVE_FLAME_WHEEL; }
    PARAMETRIZE { move = MOVE_SACRED_FIRE; }
    PARAMETRIZE { move = MOVE_FLARE_BLITZ; }
    PARAMETRIZE { move = MOVE_FUSION_FLARE; }
    PARAMETRIZE { move = MOVE_EMBER; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Status1(STATUS1_FROSTBITE); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        if (move == MOVE_EMBER) {
            NONE_OF {
                MESSAGE("The opposing Wobbuffet's frostbite was cured!");
            }
        } else {
            MESSAGE("The opposing Wobbuffet's frostbite was cured!");
        }
   }
}

SINGLE_BATTLE_TEST("Frostbite is healed when the user uses a thawing move")
{
    enum Move move;

    PARAMETRIZE { move = MOVE_FLAME_WHEEL; }
    PARAMETRIZE { move = MOVE_SACRED_FIRE; }
    PARAMETRIZE { move = MOVE_FLARE_BLITZ; }
    PARAMETRIZE { move = MOVE_FUSION_FLARE; }
    PARAMETRIZE { move = MOVE_EMBER; }

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_FROSTBITE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent);
        if (move == MOVE_EMBER) {
            MESSAGE("Wobbuffet was hurt by its frostbite!");
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRB, player);
        } else {
            NONE_OF {
                MESSAGE("Wobbuffet was hurt by its frostbite!");
                ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRB, player);
            }
        }
   }
}
