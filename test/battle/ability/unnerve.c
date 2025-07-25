#include "global.h"
#include "test/battle.h"

// Remember to add a PARAMETRIZE for As One in the following tests:
SINGLE_BATTLE_TEST("Unnerve prevents opposing Pokémon from eating their own berries")
{
    u16 mon;
    u16 ability;
    PARAMETRIZE { mon = SPECIES_JOLTIK, ability = ABILITY_MY_LIEGE; }
    PARAMETRIZE { mon = SPECIES_CALYREX_ICE, ability = ABILITY_AS_ONE_ICE_RIDER; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_RAWST_BERRY].holdEffect == HOLD_EFFECT_CURE_BRN);
        PLAYER(mon) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_RAWST_BERRY); Status1(STATUS1_BURN); }
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(player, ability);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Unnerve doesn't prevent opposing Pokémon from using Natural Gift")
{
    u16 mon;
    u16 ability;
    PARAMETRIZE { mon = SPECIES_JOLTIK, ability = ABILITY_MY_LIEGE; }
    PARAMETRIZE { mon = SPECIES_CALYREX_ICE, ability = ABILITY_AS_ONE_ICE_RIDER; }
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_NATURAL_GIFT) == EFFECT_NATURAL_GIFT);
        PLAYER(mon) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_ORAN_BERRY); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_NATURAL_GIFT); }
    } SCENE {
        ABILITY_POPUP(player, ability);
        HP_BAR(player);
    }
}

SINGLE_BATTLE_TEST("Unnerve prints the correct string (player)")
{
    u16 mon;
    u16 ability;
    PARAMETRIZE { mon = SPECIES_JOLTIK, ability = ABILITY_MY_LIEGE; }
    PARAMETRIZE { mon = SPECIES_CALYREX_ICE, ability = ABILITY_AS_ONE_ICE_RIDER; }
    GIVEN {
        PLAYER(mon) { Ability(ability); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(player, ability);
        MESSAGE("The opposing team is too nervous to eat Berries!");
    }
}

SINGLE_BATTLE_TEST("Unnerve prints the correct string (opponent)")
{
    u16 mon;
    u16 ability;
    PARAMETRIZE { mon = SPECIES_JOLTIK, ability = ABILITY_MY_LIEGE; }
    PARAMETRIZE { mon = SPECIES_CALYREX_ICE, ability = ABILITY_AS_ONE_ICE_RIDER; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(mon) { Ability(ability); }
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        MESSAGE("Your team is too nervous to eat Berries!");
    }
}

SINGLE_BATTLE_TEST("Unnerve activates only once per switch-in")
{
    u16 mon;
    u16 ability;
    PARAMETRIZE { mon = SPECIES_JOLTIK, ability = ABILITY_MY_LIEGE; }
    PARAMETRIZE { mon = SPECIES_CALYREX_ICE, ability = ABILITY_AS_ONE_ICE_RIDER; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WEEZING) { Ability(ABILITY_NEUTRALIZING_GAS); }
        OPPONENT(mon) { Ability(ability); }
        OPPONENT(mon) { Ability(ability); }
    } WHEN {
        TURN { SWITCH(player, 1); }
        TURN { SWITCH(player, 0); }
        TURN { SWITCH(player, 1); }
        TURN { SWITCH(player, 0); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_NEUTRALIZING_GAS);
        NOT ABILITY_POPUP(opponent, ability);
        ABILITY_POPUP(player, ABILITY_NEUTRALIZING_GAS);
        ABILITY_POPUP(opponent, ability);

    }
}
