#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Filter reduces damage to Super Effective moves by 0.75", s16 damage)
{
    enum Ability ability;
    PARAMETRIZE { ability = ABILITY_SOUNDPROOF; }
    PARAMETRIZE { ability = ABILITY_FILTER; }
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_MR_MIME].types[0] == TYPE_PSYCHIC);
        ASSUME(gSpeciesInfo[SPECIES_MR_MIME].types[1] == TYPE_FAIRY);
        ASSUME(GetMoveType(MOVE_IRON_HEAD) == TYPE_STEEL);
        ASSUME(gTypeEffectivenessTable[TYPE_STEEL][TYPE_FAIRY] > UQ_4_12(1.0));
        ASSUME(gTypeEffectivenessTable[TYPE_STEEL][TYPE_PSYCHIC] == UQ_4_12(1.0));
        PLAYER(SPECIES_MR_MIME) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_IRON_HEAD); }
    } SCENE {
        HP_BAR(player, captureDamage: &results[i].damage);
        MESSAGE("It's super effective!");
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.75), results[1].damage);
    }
}
