#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("PROMISE: Curse reduces the special attack by 50 percent")
{
    s16 reducedDamage;
    s16 normaleDamage;

    GIVEN {
        ASSUME(GetMoveCategory(MOVE_PSYCHIC) == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Status1(STATUS1_CURSE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_PSYCHIC); MOVE(player, MOVE_PURIFY); }
        TURN { MOVE(opponent, MOVE_PSYCHIC); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PSYCHIC, opponent);
        HP_BAR(player, captureDamage: &reducedDamage);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PURIFY, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PSYCHIC, opponent);
        HP_BAR(player, captureDamage: &normaleDamage);
   } THEN { EXPECT_MUL_EQ(normaleDamage, Q_4_12(0.5), reducedDamage); }
}

SINGLE_BATTLE_TEST("PROMISE: Curse deals 1/8th damage (Gen1-6) or 1/16th (Gen7+) per turn")
{
    s16 curseDamage;
    u32 config, value;
    PARAMETRIZE { config = GEN_7; value = 16; }
    PARAMETRIZE { config = GEN_6; value = 8; }
    GIVEN {
        WITH_CONFIG(B_BURN_DAMAGE, config);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Status1(STATUS1_CURSE); }
    } WHEN {
        TURN {}
    } SCENE {
        MESSAGE("The opposing Wobbuffet is afflicted by the curse!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_CURSED, opponent);
        HP_BAR(opponent, captureDamage: &curseDamage);
    } THEN {
        EXPECT_EQ(curseDamage, opponent->maxHP / value);
    }
}
