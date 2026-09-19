#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gTypesInfo[TYPE_NONE].isHiddenPowerType == FALSE);
    ASSUME(gTypesInfo[TYPE_NORMAL].isHiddenPowerType == FALSE);
    ASSUME(gTypesInfo[TYPE_FIGHTING].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_WIND].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_POISON].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_TERRA].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_ROCK].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_BUG].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_GHOST].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_STEEL].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_MYSTERY].isHiddenPowerType == FALSE);
    ASSUME(gTypesInfo[TYPE_FIRE].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_WATER].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_GRASS].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_ELECTRIC].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_PSYCHIC].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_ICE].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_DRAGON].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_DARK].isHiddenPowerType == TRUE);
    ASSUME(gTypesInfo[TYPE_FAIRY].isHiddenPowerType == TRUE);
    // Any type after Fairy shouldn't be part of Hidden Power.
    for (enum Type j = TYPE_FAIRY + 1; j < NUMBER_OF_MON_TYPES; j++) {
        if (j == TYPE_WIND || j == TYPE_TERRA)
            continue;
        ASSUME(gTypesInfo[j].isHiddenPowerType == FALSE);
    }
}

// IV combinations sourced from https://www.smogon.com/forums/threads/hidden-power-iv-combinations.78083/
SINGLE_BATTLE_TEST("Hidden Power's type is determined by IVs")
{
    enum Type type, foeType, j;
    enum Species foeSpecies;
    enum Item foeItem;
    u32 hp, atk, def, spAtk, spDef, speed;
    bool32 hidden;
    bool32 resisted;

    PARAMETRIZE { type = TYPE_NONE;     hidden = FALSE; }
    PARAMETRIZE { type = TYPE_NORMAL;   hidden = FALSE; }
    PARAMETRIZE { type = TYPE_MYSTERY;  hidden = FALSE; }
    PARAMETRIZE { type = TYPE_FIGHTING;    hidden = TRUE;  resisted = FALSE; foeType = TYPE_DARK; foeSpecies = SPECIES_UMBREON; foeItem = ITEM_CHOPLE_BERRY; hp = 14; atk =  0; def = 14; spAtk = 14; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_FIGHTING;    hidden = TRUE;  resisted = FALSE; foeType = TYPE_DARK; foeSpecies = SPECIES_UMBREON; foeItem = ITEM_CHOPLE_BERRY; hp = 14; atk =  6; def = 14; spAtk = 14; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_FIGHTING;    hidden = TRUE;  resisted = FALSE; foeType = TYPE_DARK; foeSpecies = SPECIES_UMBREON; foeItem = ITEM_CHOPLE_BERRY; hp = 14; atk = 14; def = 14; spAtk = 14; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_FIGHTING;    hidden = TRUE;  resisted = FALSE; foeType = TYPE_DARK; foeSpecies = SPECIES_UMBREON; foeItem = ITEM_CHOPLE_BERRY; hp = 15; atk =  1; def = 14; spAtk = 14; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_FIGHTING;    hidden = TRUE;  resisted = FALSE; foeType = TYPE_DARK; foeSpecies = SPECIES_UMBREON; foeItem = ITEM_CHOPLE_BERRY; hp = 15; atk =  9; def = 14; spAtk = 14; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_FIGHTING;    hidden = TRUE;  resisted = FALSE; foeType = TYPE_DARK; foeSpecies = SPECIES_UMBREON; foeItem = ITEM_CHOPLE_BERRY; hp = 15; atk = 15; def = 14; spAtk = 14; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_POISON;      hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_KEBIA_BERRY; hp = 14; atk =  0; def = 15; spAtk = 14; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_POISON;      hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_KEBIA_BERRY; hp = 14; atk =  6; def = 15; spAtk = 14; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_POISON;      hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_KEBIA_BERRY; hp = 14; atk = 14; def = 15; spAtk = 14; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_POISON;      hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_KEBIA_BERRY; hp = 15; atk =  1; def = 15; spAtk = 14; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_POISON;      hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_KEBIA_BERRY; hp = 15; atk =  9; def = 15; spAtk = 14; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_POISON;      hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_KEBIA_BERRY; hp = 15; atk = 15; def = 15; spAtk = 14; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_ROCK;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_FIRE; foeSpecies = SPECIES_VULPIX; foeItem = ITEM_CHARTI_BERRY; hp = 14; atk =  0; def = 14; spAtk = 14; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_ROCK;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_FIRE; foeSpecies = SPECIES_VULPIX; foeItem = ITEM_CHARTI_BERRY; hp = 14; atk =  6; def = 14; spAtk = 14; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_ROCK;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_FIRE; foeSpecies = SPECIES_VULPIX; foeItem = ITEM_CHARTI_BERRY; hp = 14; atk = 14; def = 14; spAtk = 14; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_ROCK;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_FIRE; foeSpecies = SPECIES_VULPIX; foeItem = ITEM_CHARTI_BERRY; hp = 15; atk =  1; def = 14; spAtk = 14; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_ROCK;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_FIRE; foeSpecies = SPECIES_VULPIX; foeItem = ITEM_CHARTI_BERRY; hp = 15; atk =  9; def = 14; spAtk = 14; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_ROCK;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_FIRE; foeSpecies = SPECIES_VULPIX; foeItem = ITEM_CHARTI_BERRY; hp = 15; atk = 15; def = 14; spAtk = 14; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_BUG;         hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_TANGA_BERRY; hp = 14; atk =  0; def = 15; spAtk = 14; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_BUG;         hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_TANGA_BERRY; hp = 14; atk =  6; def = 15; spAtk = 14; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_BUG;         hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_TANGA_BERRY; hp = 14; atk = 14; def = 15; spAtk = 14; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_BUG;         hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_TANGA_BERRY; hp = 15; atk =  1; def = 15; spAtk = 14; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_BUG;         hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_TANGA_BERRY; hp = 15; atk =  9; def = 15; spAtk = 14; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_BUG;         hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_TANGA_BERRY; hp = 15; atk = 15; def = 15; spAtk = 14; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_GHOST;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_KASIB_BERRY; hp = 14; atk =  0; def = 14; spAtk = 15; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_GHOST;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_KASIB_BERRY; hp = 14; atk =  6; def = 14; spAtk = 15; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_GHOST;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_KASIB_BERRY; hp = 14; atk = 14; def = 14; spAtk = 15; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_GHOST;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_KASIB_BERRY; hp = 15; atk =  1; def = 14; spAtk = 15; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_GHOST;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_KASIB_BERRY; hp = 15; atk =  9; def = 14; spAtk = 15; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_GHOST;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_KASIB_BERRY; hp = 15; atk = 15; def = 14; spAtk = 15; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_STEEL;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_ICE; foeSpecies = SPECIES_SNORUNT; foeItem = ITEM_BABIRI_BERRY; hp = 14; atk =  0; def = 15; spAtk = 15; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_STEEL;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_ICE; foeSpecies = SPECIES_SNORUNT; foeItem = ITEM_BABIRI_BERRY; hp = 14; atk =  6; def = 15; spAtk = 15; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_STEEL;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_ICE; foeSpecies = SPECIES_SNORUNT; foeItem = ITEM_BABIRI_BERRY; hp = 14; atk = 14; def = 15; spAtk = 15; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_STEEL;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_ICE; foeSpecies = SPECIES_SNORUNT; foeItem = ITEM_BABIRI_BERRY; hp = 15; atk =  1; def = 15; spAtk = 15; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_STEEL;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_ICE; foeSpecies = SPECIES_SNORUNT; foeItem = ITEM_BABIRI_BERRY; hp = 15; atk =  9; def = 15; spAtk = 15; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_STEEL;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_ICE; foeSpecies = SPECIES_SNORUNT; foeItem = ITEM_BABIRI_BERRY; hp = 15; atk = 15; def = 15; spAtk = 15; spDef = 14; speed = 14; }
    PARAMETRIZE { type = TYPE_FIRE;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_OCCA_BERRY; hp = 14; atk =  0; def = 14; spAtk = 15; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_FIRE;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_OCCA_BERRY; hp = 14; atk =  6; def = 14; spAtk = 15; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_FIRE;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_OCCA_BERRY; hp = 14; atk = 14; def = 14; spAtk = 15; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_FIRE;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_OCCA_BERRY; hp = 15; atk =  1; def = 14; spAtk = 15; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_FIRE;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_OCCA_BERRY; hp = 15; atk =  9; def = 14; spAtk = 15; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_FIRE;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_OCCA_BERRY; hp = 15; atk = 15; def = 14; spAtk = 15; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_WATER;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_ROCK; foeSpecies = SPECIES_NOSEPASS; foeItem = ITEM_PASSHO_BERRY; hp = 14; atk =  0; def = 15; spAtk = 15; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_WATER;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_ROCK; foeSpecies = SPECIES_NOSEPASS; foeItem = ITEM_PASSHO_BERRY; hp = 14; atk =  6; def = 15; spAtk = 15; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_WATER;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_ROCK; foeSpecies = SPECIES_NOSEPASS; foeItem = ITEM_PASSHO_BERRY; hp = 14; atk = 14; def = 15; spAtk = 15; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_WATER;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_ROCK; foeSpecies = SPECIES_NOSEPASS; foeItem = ITEM_PASSHO_BERRY; hp = 15; atk =  1; def = 15; spAtk = 15; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_WATER;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_ROCK; foeSpecies = SPECIES_NOSEPASS; foeItem = ITEM_PASSHO_BERRY; hp = 15; atk =  9; def = 15; spAtk = 15; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_WATER;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_ROCK; foeSpecies = SPECIES_NOSEPASS; foeItem = ITEM_PASSHO_BERRY; hp = 15; atk = 15; def = 15; spAtk = 15; spDef = 14; speed = 15; }
    PARAMETRIZE { type = TYPE_GRASS;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_WATER; foeSpecies = SPECIES_SQUIRTLE; foeItem = ITEM_RINDO_BERRY; hp = 14; atk =  0; def = 14; spAtk = 14; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_GRASS;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_WATER; foeSpecies = SPECIES_SQUIRTLE; foeItem = ITEM_RINDO_BERRY; hp = 14; atk =  6; def = 14; spAtk = 14; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_GRASS;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_WATER; foeSpecies = SPECIES_SQUIRTLE; foeItem = ITEM_RINDO_BERRY; hp = 14; atk = 14; def = 14; spAtk = 14; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_GRASS;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_WATER; foeSpecies = SPECIES_SQUIRTLE; foeItem = ITEM_RINDO_BERRY; hp = 15; atk =  1; def = 14; spAtk = 14; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_GRASS;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_WATER; foeSpecies = SPECIES_SQUIRTLE; foeItem = ITEM_RINDO_BERRY; hp = 15; atk =  9; def = 14; spAtk = 14; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_GRASS;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_WATER; foeSpecies = SPECIES_SQUIRTLE; foeItem = ITEM_RINDO_BERRY; hp = 15; atk = 15; def = 14; spAtk = 14; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_ELECTRIC;    hidden = TRUE;  resisted = FALSE; foeType = TYPE_WATER; foeSpecies = SPECIES_SQUIRTLE; foeItem = ITEM_WACAN_BERRY; hp = 14; atk =  0; def = 15; spAtk = 14; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_ELECTRIC;    hidden = TRUE;  resisted = FALSE; foeType = TYPE_WATER; foeSpecies = SPECIES_SQUIRTLE; foeItem = ITEM_WACAN_BERRY; hp = 14; atk =  6; def = 15; spAtk = 14; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_ELECTRIC;    hidden = TRUE;  resisted = FALSE; foeType = TYPE_WATER; foeSpecies = SPECIES_SQUIRTLE; foeItem = ITEM_WACAN_BERRY; hp = 14; atk = 14; def = 15; spAtk = 14; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_ELECTRIC;    hidden = TRUE;  resisted = FALSE; foeType = TYPE_WATER; foeSpecies = SPECIES_SQUIRTLE; foeItem = ITEM_WACAN_BERRY; hp = 15; atk =  1; def = 15; spAtk = 14; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_ELECTRIC;    hidden = TRUE;  resisted = FALSE; foeType = TYPE_WATER; foeSpecies = SPECIES_SQUIRTLE; foeItem = ITEM_WACAN_BERRY; hp = 15; atk =  9; def = 15; spAtk = 14; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_ELECTRIC;    hidden = TRUE;  resisted = FALSE; foeType = TYPE_WATER; foeSpecies = SPECIES_SQUIRTLE; foeItem = ITEM_WACAN_BERRY; hp = 15; atk = 15; def = 15; spAtk = 14; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_PSYCHIC;     hidden = TRUE;  resisted = FALSE; foeType = TYPE_POISON; foeSpecies = SPECIES_KOFFING; foeItem = ITEM_PAYAPA_BERRY; hp = 14; atk =  0; def = 14; spAtk = 14; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_PSYCHIC;     hidden = TRUE;  resisted = FALSE; foeType = TYPE_POISON; foeSpecies = SPECIES_KOFFING; foeItem = ITEM_PAYAPA_BERRY; hp = 14; atk =  6; def = 14; spAtk = 14; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_PSYCHIC;     hidden = TRUE;  resisted = FALSE; foeType = TYPE_POISON; foeSpecies = SPECIES_KOFFING; foeItem = ITEM_PAYAPA_BERRY; hp = 14; atk = 14; def = 14; spAtk = 14; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_PSYCHIC;     hidden = TRUE;  resisted = FALSE; foeType = TYPE_POISON; foeSpecies = SPECIES_KOFFING; foeItem = ITEM_PAYAPA_BERRY; hp = 15; atk =  1; def = 14; spAtk = 14; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_PSYCHIC;     hidden = TRUE;  resisted = FALSE; foeType = TYPE_POISON; foeSpecies = SPECIES_KOFFING; foeItem = ITEM_PAYAPA_BERRY; hp = 15; atk =  9; def = 14; spAtk = 14; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_PSYCHIC;     hidden = TRUE;  resisted = FALSE; foeType = TYPE_POISON; foeSpecies = SPECIES_KOFFING; foeItem = ITEM_PAYAPA_BERRY; hp = 15; atk = 15; def = 14; spAtk = 14; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_ICE;         hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_YACHE_BERRY; hp = 14; atk =  0; def = 15; spAtk = 14; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_ICE;         hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_YACHE_BERRY; hp = 14; atk =  6; def = 15; spAtk = 14; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_ICE;         hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_YACHE_BERRY; hp = 14; atk = 14; def = 15; spAtk = 14; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_ICE;         hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_YACHE_BERRY; hp = 15; atk =  1; def = 15; spAtk = 14; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_ICE;         hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_YACHE_BERRY; hp = 15; atk =  9; def = 15; spAtk = 14; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_ICE;         hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_YACHE_BERRY; hp = 15; atk = 15; def = 15; spAtk = 14; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_DRAGON;      hidden = TRUE;  resisted = TRUE;  foeType = TYPE_DRAGON; foeSpecies = SPECIES_DRATINI; foeItem = ITEM_NONE; hp = 14; atk =  0; def = 14; spAtk = 15; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_DRAGON;      hidden = TRUE;  resisted = TRUE;  foeType = TYPE_DRAGON; foeSpecies = SPECIES_DRATINI; foeItem = ITEM_NONE; hp = 14; atk =  6; def = 14; spAtk = 15; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_DRAGON;      hidden = TRUE;  resisted = TRUE;  foeType = TYPE_DRAGON; foeSpecies = SPECIES_DRATINI; foeItem = ITEM_NONE; hp = 14; atk = 14; def = 14; spAtk = 15; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_DRAGON;      hidden = TRUE;  resisted = TRUE;  foeType = TYPE_DRAGON; foeSpecies = SPECIES_DRATINI; foeItem = ITEM_NONE; hp = 15; atk =  1; def = 14; spAtk = 15; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_DRAGON;      hidden = TRUE;  resisted = TRUE;  foeType = TYPE_DRAGON; foeSpecies = SPECIES_DRATINI; foeItem = ITEM_NONE; hp = 15; atk =  9; def = 14; spAtk = 15; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_DRAGON;      hidden = TRUE;  resisted = TRUE;  foeType = TYPE_DRAGON; foeSpecies = SPECIES_DRATINI; foeItem = ITEM_NONE; hp = 15; atk = 15; def = 14; spAtk = 15; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_DARK;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_COLBUR_BERRY; hp = 14; atk =  0; def = 15; spAtk = 15; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_DARK;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_COLBUR_BERRY; hp = 14; atk =  6; def = 15; spAtk = 15; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_DARK;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_COLBUR_BERRY; hp = 14; atk = 14; def = 15; spAtk = 15; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_DARK;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_COLBUR_BERRY; hp = 15; atk =  1; def = 15; spAtk = 15; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_DARK;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_COLBUR_BERRY; hp = 15; atk =  9; def = 15; spAtk = 15; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_DARK;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_PSYCHIC; foeSpecies = SPECIES_WOBBUFFET; foeItem = ITEM_COLBUR_BERRY; hp = 15; atk = 15; def = 15; spAtk = 15; spDef = 15; speed = 14; }
    PARAMETRIZE { type = TYPE_FAIRY;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_DARK; foeSpecies = SPECIES_UMBREON; foeItem = ITEM_ROSELI_BERRY; hp = 14; atk =  0; def = 14; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_FAIRY;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_DARK; foeSpecies = SPECIES_UMBREON; foeItem = ITEM_ROSELI_BERRY; hp = 14; atk =  6; def = 14; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_FAIRY;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_DARK; foeSpecies = SPECIES_UMBREON; foeItem = ITEM_ROSELI_BERRY; hp = 14; atk = 14; def = 14; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_FAIRY;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_DARK; foeSpecies = SPECIES_UMBREON; foeItem = ITEM_ROSELI_BERRY; hp = 15; atk =  1; def = 14; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_FAIRY;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_DARK; foeSpecies = SPECIES_UMBREON; foeItem = ITEM_ROSELI_BERRY; hp = 15; atk =  9; def = 14; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_FAIRY;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_DARK; foeSpecies = SPECIES_UMBREON; foeItem = ITEM_ROSELI_BERRY; hp = 15; atk = 15; def = 14; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_TERRA;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_STEEL; foeSpecies = SPECIES_KLINK; foeItem = ITEM_SHUCA_BERRY; hp = 14; atk =  0; def = 15; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_TERRA;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_STEEL; foeSpecies = SPECIES_KLINK; foeItem = ITEM_SHUCA_BERRY; hp = 14; atk =  6; def = 15; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_TERRA;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_STEEL; foeSpecies = SPECIES_KLINK; foeItem = ITEM_SHUCA_BERRY; hp = 14; atk = 14; def = 15; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_TERRA;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_STEEL; foeSpecies = SPECIES_KLINK; foeItem = ITEM_SHUCA_BERRY; hp = 14; atk =  1; def = 15; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_TERRA;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_STEEL; foeSpecies = SPECIES_KLINK; foeItem = ITEM_SHUCA_BERRY; hp = 14; atk =  9; def = 15; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_TERRA;       hidden = TRUE;  resisted = FALSE; foeType = TYPE_STEEL; foeSpecies = SPECIES_KLINK; foeItem = ITEM_SHUCA_BERRY; hp = 14; atk = 15; def = 15; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_WIND;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_COBA_BERRY; hp = 15; atk =  1; def = 15; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_WIND;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_COBA_BERRY; hp = 15; atk =  3; def = 15; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_WIND;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_COBA_BERRY; hp = 15; atk =  5; def = 15; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_WIND;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_COBA_BERRY; hp = 15; atk =  7; def = 15; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_WIND;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_COBA_BERRY; hp = 15; atk =  9; def = 15; spAtk = 15; spDef = 15; speed = 15; }
    PARAMETRIZE { type = TYPE_WIND;        hidden = TRUE;  resisted = FALSE; foeType = TYPE_GRASS; foeSpecies = SPECIES_TANGELA; foeItem = ITEM_COBA_BERRY; hp = 15; atk = 11; def = 15; spAtk = 15; spDef = 15; speed = 15; }

    // Any type after Fairy shouldn't be part of Hidden Power officially.
    for (j = TYPE_FAIRY + 1; j < NUMBER_OF_MON_TYPES; j++) {
        if (j == TYPE_WIND || j == TYPE_TERRA)
            continue;
        PARAMETRIZE { type = j; hidden = FALSE; }
    }

    GIVEN {
        if (hidden) {
            if (resisted)
                ASSUME(gTypeEffectivenessTable[type][foeType] == UQ_4_12(0.625));           // Foe's Type resists it (Dragon has no super-effective matchups)
            else
                ASSUME(gTypeEffectivenessTable[type][foeType] == UQ_4_12(1.6));                 // Foe's Type is weak to it
            ASSUME(GetSpeciesType(foeSpecies, 0) == GetSpeciesType(foeSpecies, 1)); // Foe's pure type
            ASSUME(GetSpeciesType(foeSpecies, 0) == foeType);                           // Foe is the target type
            if (!resisted) {
                ASSUME(GetItemHoldEffect(foeItem) == HOLD_EFFECT_RESIST_BERRY);              // Item is resist berry
                ASSUME(GetItemHoldEffectParam(foeItem) == type                                  // Resist berry of type
                    || (type == TYPE_TERRA && GetItemHoldEffectParam(foeItem) == TYPE_GROUND)   // Ground-resist berries also resist Terra
                    || (type == TYPE_WIND && GetItemHoldEffectParam(foeItem) == TYPE_FLYING));   // Flying-resist berries also resist Wind
            }
            PLAYER(SPECIES_DUNSPARCE) { HPIV(hp); AttackIV(atk); DefenseIV(def); SpAttackIV(spAtk); SpDefenseIV(spDef); SpeedIV(speed); }
        } else {
            PLAYER(SPECIES_DUNSPARCE);
        }
        OPPONENT(foeSpecies) { Item(foeItem); }
    } WHEN {
        TURN { MOVE(player, MOVE_HIDDEN_POWER); }
    } SCENE {
        // Only test valid Hidden Power types
        if (hidden) {
            if (resisted) {
                ANIMATION(ANIM_TYPE_MOVE, MOVE_HIDDEN_POWER, player);
                HP_BAR(opponent);
                MESSAGE("It's not very effective…");
            } else {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_BERRY, opponent); // Check that the resist berry is triggered
                ANIMATION(ANIM_TYPE_MOVE, MOVE_HIDDEN_POWER, player);
                HP_BAR(opponent);
                MESSAGE("It's super effective!");
            }
        }
    }
}

TO_DO_BATTLE_TEST("Hidden Power's power is determined by IVs before Gen6");

SINGLE_BATTLE_TEST("Hidden Power always triggers Counter instead of Mirror Coat (Gen 1-3)")
{
    u8 hp, atk, def, spa, spd, spe;

    PARAMETRIZE { hp = 15; atk = 14; def = 14; spa = 14; spd = 14; spe = 14; } // TYPE_FIGHTING
    PARAMETRIZE { hp = 15; atk = 14; def = 15; spa = 14; spd = 14; spe = 14; } // TYPE_WIND
    PARAMETRIZE { hp = 15; atk = 14; def = 14; spa = 14; spd = 14; spe = 15; } // TYPE_POISON
    PARAMETRIZE { hp = 15; atk = 14; def = 15; spa = 14; spd = 14; spe = 15; } // TYPE_TERRA
    PARAMETRIZE { hp = 15; atk = 14; def = 14; spa = 15; spd = 14; spe = 14; } // TYPE_ROCK
    PARAMETRIZE { hp = 15; atk = 14; def = 15; spa = 15; spd = 14; spe = 14; } // TYPE_BUG
    PARAMETRIZE { hp = 15; atk = 15; def = 14; spa = 15; spd = 14; spe = 15; } // TYPE_GHOST
    PARAMETRIZE { hp = 15; atk = 15; def = 15; spa = 15; spd = 14; spe = 15; } // TYPE_STEEL
    PARAMETRIZE { hp = 15; atk = 15; def = 14; spa = 14; spd = 15; spe = 14; } // TYPE_FIRE
    PARAMETRIZE { hp = 15; atk = 15; def = 15; spa = 14; spd = 15; spe = 14; } // TYPE_WATER
    PARAMETRIZE { hp = 15; atk = 15; def = 14; spa = 14; spd = 15; spe = 15; } // TYPE_GRASS
    PARAMETRIZE { hp = 15; atk = 15; def = 15; spa = 14; spd = 15; spe = 15; } // TYPE_ELECTRIC
    PARAMETRIZE { hp = 15; atk = 15; def = 14; spa = 15; spd = 15; spe = 14; } // TYPE_PSYCHIC
    PARAMETRIZE { hp = 15; atk = 15; def = 15; spa = 15; spd = 15; spe = 14; } // TYPE_ICE
    PARAMETRIZE { hp = 15; atk = 15; def = 14; spa = 15; spd = 15; spe = 15; } // TYPE_DRAGON
    PARAMETRIZE { hp = 15; atk = 15; def = 15; spa = 15; spd = 15; spe = 15; } // TYPE_DARK

    GIVEN {
        WITH_CONFIG(B_HIDDEN_POWER_COUNTER, GEN_3);
        ASSUME(GetMoveEffect(MOVE_COUNTER) == EFFECT_REFLECT_DAMAGE );
        ASSUME(GetMoveEffect(MOVE_MIRROR_COAT) == EFFECT_REFLECT_DAMAGE);
        ASSUME(GetMoveReflectDamage_DamageCategories(MOVE_COUNTER) == 1u << DAMAGE_CATEGORY_PHYSICAL );
        ASSUME(GetMoveReflectDamage_DamageCategories(MOVE_MIRROR_COAT) == 1u << DAMAGE_CATEGORY_SPECIAL );
        PLAYER(SPECIES_WOBBUFFET) { HPIV(hp); AttackIV(atk); DefenseIV(def); SpAttackIV(spa); SpDefenseIV(spd); SpeedIV(spe); }
        OPPONENT(SPECIES_WOBBUFFET);
    }
    WHEN {
        TURN { MOVE(player, MOVE_HIDDEN_POWER); MOVE(opponent, MOVE_MIRROR_COAT); }
        TURN { MOVE(player, MOVE_HIDDEN_POWER); MOVE(opponent, MOVE_COUNTER); }
    }
    SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HIDDEN_POWER, player);
        MESSAGE("The opposing Wobbuffet used Mirror Coat!");
        MESSAGE("But it failed!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HIDDEN_POWER, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_COUNTER, opponent);
    }
}
