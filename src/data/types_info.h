#include "constants/battle.h"
#include "constants/pokemon.h"

#define X UQ_4_12
#define resist X(0.625) // Basic resistance
#define twores X(0.390625) // Double resistance
#define ______ X(1.0) // Regular effectiveness.

// Type matchup updates.                                                Attacker      Defender
#define STL_RS (B_UPDATED_TYPE_MATCHUPS >= GEN_6 ? X(1.0) : resist)  // Ghost/Dark -> Steel
#define PSN_RS (B_UPDATED_TYPE_MATCHUPS >= GEN_2 ? X(1.0) : X(1.6))  // Bug        -> Poison
#define BUG_RS (B_UPDATED_TYPE_MATCHUPS >= GEN_2 ? X(1.0) : X(1.6))  // Poison     -> Bug
#define PSY_RS (B_UPDATED_TYPE_MATCHUPS >= GEN_2 ? X(1.6) : X(0.0))  // Ghost      -> Psychic
#define FIR_RS (B_UPDATED_TYPE_MATCHUPS >= GEN_2 ? resist : X(1.0))  // Ice        -> Fire

const uq4_12_t gTypeEffectivenessTable[NUMBER_OF_MON_TYPES][NUMBER_OF_MON_TYPES] =
{//                   Defender -->
 //  Attacker           None   Normal Fighting Flying  Poison  Ground   Rock    Bug     Ghost   Steel  Mystery  Fire   Water   Grass  Electric Psychic   Ice   Dragon   Dark   Fairy   Stellar  Terra   Frost   Ocean  Flame   Undead   Wind    Mud     Sand
    [TYPE_NONE]     = {______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______},
    [TYPE_NORMAL]   = {______, ______, ______, ______, ______, ______, resist, ______, X(0.0), resist, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, resist, ______, ______, resist},
    [TYPE_FIGHTING] = {______, ______, resist, ______, ______, ______, X(1.6), X(1.6), X(0.0), X(1.6), ______, ______, ______, ______, ______, ______, X(1.6), ______, X(1.6), resist, ______, ______, ______, ______, ______, resist, ______, ______, resist},
    [TYPE_FLYING]   = {______, ______, ______, ______, ______, resist, resist, X(1.6), ______, resist, ______, ______, ______, X(1.6), ______, ______, ______, resist, ______, ______, ______, resist, ______, ______, ______, ______, ______, ______, X(1.6)},
    [TYPE_POISON]   = {______, ______, ______, ______, twores, resist, resist, ______, resist, resist, ______, ______, ______, X(1.6), ______, resist, ______, ______, resist, X(1.6), ______, ______, ______, X(1.6), ______, resist, ______, resist, resist},
    [TYPE_GROUND]   = {______, ______, ______, ______, ______, resist, X(1.6), ______, ______, X(1.6), ______, X(1.6), ______, resist, X(1.6), ______, X(1.6), resist, ______, ______, ______, resist, ______, ______, X(1.6), ______, ______, resist, resist},
    [TYPE_ROCK]     = {______, ______, ______, X(1.6), ______, resist, resist, X(1.6), ______, resist, ______, X(1.6), ______, ______, ______, ______, X(1.6), resist, ______, ______, ______, resist, ______, ______, ______, ______, ______, resist, resist},
    [TYPE_BUG]      = {______, ______, ______, resist, ______, resist, resist, ______, X(1.6), resist, ______, ______, ______, X(1.6), ______, X(1.6), ______, ______, ______, X(1.6), ______, resist, ______, ______, ______, X(1.6), ______, resist, resist},
    [TYPE_GHOST]    = {______, ______, ______, ______, ______, ______, ______, resist, X(1.6), ______, ______, ______, ______, ______, ______, X(1.6), ______, ______, resist, X(0.0), ______, ______, ______, ______, ______, X(1.6), ______, ______, ______},
    [TYPE_STEEL]    = {______, ______, ______, ______, ______, resist, ______, ______, ______, resist, ______, ______, ______, ______, ______, ______, X(1.6), resist, ______, X(1.6), ______, resist, ______, ______, ______, ______, ______, resist, resist},
    [TYPE_MYSTERY]  = {______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______},
    [TYPE_FIRE]     = {______, ______, ______, ______, ______, resist, resist, X(1.6), ______, X(1.6), ______, twores, resist, X(1.6), ______, ______, X(1.6), resist, ______, ______, ______, ______, X(1.6), resist, resist, ______, ______, resist, resist},
    [TYPE_WATER]    = {______, ______, ______, ______, ______, ______, X(1.6), ______, ______, resist, ______, X(1.6), resist, resist, ______, ______, resist, resist, ______, ______, ______, ______, ______, twores, X(1.6), ______, ______, resist, X(1.6)},
    [TYPE_GRASS]    = {______, ______, ______, resist, resist, X(1.6), ______, resist, ______, resist, ______, resist, X(1.6), twores, ______, ______, resist, resist, ______, ______, ______, X(1.6), ______, X(1.6), ______, ______, ______, X(1.6), X(1.6)},
    [TYPE_ELECTRIC] = {______, ______, ______, ______, ______, resist, resist, ______, ______, resist, ______, ______, X(1.6), ______, twores, ______, ______, resist, ______, ______, ______, ______, ______, X(1.6), ______, ______, ______, resist, resist},
    [TYPE_PSYCHIC]  = {______, ______, X(1.6), ______, X(1.6), ______, ______, resist, resist, ______, ______, ______, ______, ______, ______, twores, ______, ______, resist, X(1.6), ______, ______, ______, ______, ______, resist, ______, ______, ______},
    [TYPE_ICE]      = {______, ______, ______, ______, ______, X(1.6), resist, X(1.6), ______, resist, ______, resist, resist, X(1.6), ______, ______, twores, X(1.6), ______, ______, ______, X(1.6), twores, resist, resist, ______, ______, X(1.6), X(1.6)},
    [TYPE_DRAGON]   = {______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, resist, ______, resist, ______, ______, ______, ______, ______, ______, ______, ______, ______},
    [TYPE_DARK]     = {______, ______, resist, ______, ______, ______, resist, ______, X(1.6), resist, ______, ______, ______, ______, ______, X(1.6), ______, ______, resist, resist, ______, ______, ______, ______, ______, X(1.6), ______, ______, ______},
    [TYPE_FAIRY]    = {______, ______, X(1.6), ______, resist, ______, ______, resist, X(1.6), ______, ______, ______, ______, resist, ______, resist, ______, X(1.6), X(1.6), twores, ______, ______, ______, ______, ______, X(1.6), ______, ______, ______},
    [TYPE_STELLAR]  = {______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______},
    [TYPE_TERRA]    = {______, ______, ______, ______, ______, resist, X(1.6), ______, ______, X(1.6), ______, ______, ______, ______, ______, ______, X(1.6), resist, ______, ______, ______, resist, ______, ______, ______, ______, ______, resist, resist},
    [TYPE_FROST]    = {______, ______, ______, ______, ______, X(1.6), resist, X(1.6), ______, resist, ______, resist, resist, X(1.6), ______, ______, twores, X(1.6), ______, ______, ______, X(1.6), twores, resist, resist, ______, ______, X(1.6), X(1.6)},
    [TYPE_OCEAN]    = {______, ______, ______, ______, ______, ______, X(1.6), ______, ______, resist, ______, X(1.6), resist, resist, ______, ______, resist, resist, ______, ______, ______, ______, ______, twores, X(1.6), ______, ______, resist, X(1.6)},
    [TYPE_FLAME]    = {______, ______, ______, ______, ______, resist, resist, X(1.6), ______, X(1.6), ______, twores, resist, X(1.6), ______, ______, X(1.6), resist, ______, ______, ______, ______, X(1.6), resist, resist, ______, ______, resist, resist},
    [TYPE_UNDEAD]   = {______, ______, ______, ______, ______, ______, ______, resist, X(1.6), ______, ______, ______, ______, ______, ______, X(1.6), ______, ______, resist, X(0.0), ______, ______, ______, ______, ______, ______, ______, ______, ______},
    [TYPE_WIND]     = {______, ______, ______, ______, ______, resist, resist, X(1.6), ______, resist, ______, ______, ______, X(1.6), ______, ______, ______, resist, ______, ______, ______, resist, ______, ______, ______, ______, resist, ______, X(1.6)},
    [TYPE_MUD]      = {______, ______, ______, ______, ______, resist, ______, ______, ______, resist, ______, X(1.6), resist, resist, X(1.6), ______, ______, resist, ______, ______, ______, resist, ______, resist, X(1.6), ______, ______, resist, ______},
    [TYPE_SAND]     = {______, ______, ______, ______, ______, resist, resist, ______, ______, resist, ______, X(1.6), ______, ______, X(1.6), ______, ______, resist, ______, ______, ______, resist, ______, ______, ______, ______, ______, resist, resist},
};

#undef ______
#undef twores
#undef resist
#undef X

// Notes regarding custom data:
// - The "generic" field is large enough that the text for TYPE_ELECTRIC will exceed TEXT_BUFF_ARRAY_COUNT.
// - In this array there's commented-out data such as references to type-resist berries that would otherwise would go unused.
//   However, we figured this information would be useful for users that want to add their own types as a reminder of
//   what data would they need to add in order to have their new types be fully fledged like official types.
// - Changing "isHiddenPowerType" for any type will change the distribution of all Hidden Power types from vanilla.
const struct TypeInfo gTypesInfo[NUMBER_OF_MON_TYPES] =
{
    [TYPE_NONE] =
    {
        .name = _("None"),
        .generic = _("a move"),
        .palette = 15, // Uses TYPE_MYSTERY's icon
        .teraTypeRGBValue = RGB_WHITE,
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_NormalTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = TRUE,
        .isHiddenPowerType = FALSE,
    },
    [TYPE_NORMAL] =
    {
        .name = _("Normal"),
        .generic = _("a NORMAL move"),
        .palette = 13,
        .zMove = MOVE_BREAKNECK_BLITZ,
        .maxMove = MOVE_MAX_STRIKE,
        .teraTypeRGBValue = RGB_WHITE, // custom
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_NormalTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_SILK_SCARF,
        //.berry = ITEM_CHILAN_BERRY,
        //.gem = ITEM_NORMAL_GEM,
        //.zCrystal = ITEM_NORMALIUM_Z,
        //.teraShard = ITEM_NORMAL_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_NORMAL,
    },
    [TYPE_FIGHTING] =
    {
        .name = _("Fighting"),
        .generic = _("a FIGHTING move"),
        .palette = 13,
        .zMove = MOVE_ALL_OUT_PUMMELING,
        .maxMove = MOVE_MAX_KNUCKLE,
        .teraTypeRGBValue = RGB(26, 8, 14),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_FightingTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_BLACK_BELT,
        //.berry = ITEM_CHOPLE_BERRY,
        //.gem = ITEM_FIGHTING_GEM,
        //.zCrystal = ITEM_FIGHTINIUM_Z,
        //.plate = ITEM_FIST_PLATE,
        //.memory = ITEM_FIGHTING_MEMORY,
        //.teraShard = ITEM_FIGHTING_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_FIGHTING,
    },
    [TYPE_FLYING] =
    {
        .name = _("Flying"),
        .generic = _("a FLYING move"),
        .palette = 14,
        .zMove = MOVE_SUPERSONIC_SKYSTRIKE,
        .maxMove = MOVE_MAX_AIRSTREAM,
        .teraTypeRGBValue = RGB(31, 26, 7),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_FlyingTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = FALSE,
        //.enhanceItem = ITEM_SHARP_BEAK,
        //.berry = ITEM_COBA_BERRY,
        //.gem = ITEM_FLYING_GEM,
        //.zCrystal = ITEM_FLYINIUM_Z,
        //.plate = ITEM_SKY_PLATE,
        //.memory = ITEM_FLYING_MEMORY,
        //.teraShard = ITEM_FLYING_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_FLYING,
    },
    [TYPE_POISON] =
    {
        .name = _("Poison"),
        .generic = _("a POISON move"),
        .palette = 14,
        .zMove = MOVE_ACID_DOWNPOUR,
        .maxMove = MOVE_MAX_OOZE,
        .teraTypeRGBValue = RGB(26, 10, 25), // custom
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_PoisonTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_POISON_BARB,
        //.berry = ITEM_KEBIA_BERRY,
        //.gem = ITEM_POISON_GEM,
        //.zCrystal = ITEM_POISONIUM_Z,
        //.plate = ITEM_TOXIC_PLATE,
        //.memory = ITEM_POISON_MEMORY,
        //.teraShard = ITEM_POISON_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_POISON,
    },
    [TYPE_GROUND] =
    {
        .name = _("Ground"),
        .generic = _("a GROUND move"),
        .palette = 13,
        .zMove = MOVE_TECTONIC_RAGE,
        .maxMove = MOVE_MAX_QUAKE,
        .teraTypeRGBValue = RGB(25, 23, 18),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_GroundTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_SOFT_SAND,
        //.berry = ITEM_SHUCA_BERRY,
        //.gem = ITEM_GROUND_GEM,
        //.zCrystal = ITEM_GROUNDIUM_Z,
        //.plate = ITEM_EARTH_PLATE,
        //.memory = ITEM_GROUND_MEMORY,
        //.teraShard = ITEM_GROUND_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_GROUND,
    },
    [TYPE_ROCK] =
    {
        .name = _("Rock"),
        .generic = _("a ROCK move"),
        .palette = 13,
        .zMove = MOVE_CONTINENTAL_CRUSH,
        .maxMove = MOVE_MAX_ROCKFALL,
        .teraTypeRGBValue = RGB(18, 16, 8), // custom
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_RockTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_HARD_STONE,
        //.berry = ITEM_CHARTI_BERRY,
        //.gem = ITEM_ROCK_GEM,
        //.zCrystal = ITEM_ROCKIUM_Z,
        //.plate = ITEM_STONE_PLATE,
        //.memory = ITEM_ROCK_MEMORY,
        //.teraShard = ITEM_ROCK_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_ROCK,
    },
    [TYPE_BUG] =
    {
        .name = _("Bug"),
        .generic = _("a BUG move"),
        .palette = 15,
        .zMove = MOVE_SAVAGE_SPIN_OUT,
        .maxMove = MOVE_MAX_FLUTTERBY,
        .teraTypeRGBValue = RGB(18, 24, 6),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_BugTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_SILVER_POWDER,
        //.berry = ITEM_TANGA_BERRY,
        //.gem = ITEM_BUG_GEM,
        //.zCrystal = ITEM_BUGINIUM_Z,
        //.plate = ITEM_INSECT_PLATE,
        //.memory = ITEM_BUG_MEMORY,
        //.teraShard = ITEM_BUG_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_BUG,
    },
    [TYPE_GHOST] =
    {
        .name = _("Ghost"),
        .generic = _("a GHOST move"),
        .palette = 14,
        .zMove = MOVE_NEVER_ENDING_NIGHTMARE,
        .maxMove = MOVE_MAX_PHANTASM,
        .teraTypeRGBValue = RGB(12, 10, 16),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_GhostTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_SPELL_TAG,
        //.berry = ITEM_KASIB_BERRY,
        //.gem = ITEM_GHOST_GEM,
        //.zCrystal = ITEM_GHOSTIUM_Z,
        //.plate = ITEM_SPOOKY_PLATE,
        //.memory = ITEM_GHOST_MEMORY,
        //.teraShard = ITEM_GHOST_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_GHOST,
    },
    [TYPE_STEEL] =
    {
        .name = _("Steel"),
        .generic = _("a STEEL move"),
        .palette = 13,
        .zMove = MOVE_CORKSCREW_CRASH,
        .maxMove = MOVE_MAX_STEELSPIKE,
        .teraTypeRGBValue = RGB(19, 19, 20),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_SteelTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_METAL_COAT,
        //.berry = ITEM_BABIRI_BERRY,
        //.gem = ITEM_STEEL_GEM,
        //.zCrystal = ITEM_STEELIUM_Z,
        //.plate = ITEM_IRON_PLATE,
        //.memory = ITEM_STEEL_MEMORY,
        //.teraShard = ITEM_STEEL_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_STEEL,
    },
    [TYPE_MYSTERY] =
    {
        .name = _("???"),
        .generic = _("a ??? move"),
        .palette = 15,
        .teraTypeRGBValue = RGB_WHITE,
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = TRUE,
        .isHiddenPowerType = FALSE,
    },
    [TYPE_FIRE] =
    {
        .name = _("Fire"),
        .generic = _("a FIRE move"),
        .palette = 13,
        .zMove = MOVE_INFERNO_OVERDRIVE,
        .maxMove = MOVE_MAX_FLARE,
        .teraTypeRGBValue = RGB(31, 20, 11),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_FireTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_CHARCOAL,
        //.berry = ITEM_OCCA_BERRY,
        //.gem = ITEM_FIRE_GEM,
        //.zCrystal = ITEM_FIRIUM_Z,
        //.plate = ITEM_FLAME_PLATE,
        //.memory = ITEM_FIRE_MEMORY,
        //.teraShard = ITEM_FIRE_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_FIRE,
    },
    [TYPE_WATER] =
    {
        .name = _("Water"),
        .generic = _("a WATER move"),
        .palette = 14,
        .zMove = MOVE_HYDRO_VORTEX,
        .maxMove = MOVE_MAX_GEYSER,
        .teraTypeRGBValue = RGB(10, 18, 27),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_WaterTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_MYSTIC_WATER,
        //.berry = ITEM_PASSHO_BERRY,
        //.gem = ITEM_WATER_GEM,
        //.zCrystal = ITEM_WATERIUM_Z,
        //.plate = ITEM_SPLASH_PLATE,
        //.memory = ITEM_WATER_MEMORY,
        //.teraShard = ITEM_WATER_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_WATER,
    },
    [TYPE_GRASS] =
    {
        .name = _("Grass"),
        .generic = _("a GRASS move"),
        .palette = 15,
        .zMove = MOVE_BLOOM_DOOM,
        .maxMove = MOVE_MAX_OVERGROWTH,
        .teraTypeRGBValue = RGB(12, 24, 11),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_GrassTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_MIRACLE_SEED,
        //.berry = ITEM_RINDO_BERRY,
        //.gem = ITEM_GRASS_GEM,
        //.zCrystal = ITEM_GRASSIUM_Z,
        //.plate = ITEM_MEADOW_PLATE,
        //.memory = ITEM_GRASS_MEMORY,
        //.teraShard = ITEM_GRASS_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_GRASS,
    },
    [TYPE_ELECTRIC] =
    {
        .name = _("Electric"),
        .generic = _("an ELECTRIC move"),
        .palette = 13,
        .zMove = MOVE_GIGAVOLT_HAVOC,
        .maxMove = MOVE_MAX_LIGHTNING,
        .teraTypeRGBValue = RGB(30, 26, 7),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_ElectricTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_MAGNET,
        //.berry = ITEM_WACAN_BERRY,
        //.gem = ITEM_ELECTRIC_GEM,
        //.zCrystal = ITEM_ELECTRIUM_Z,
        //.plate = ITEM_ZAP_PLATE,
        //.memory = ITEM_ELECTRIC_MEMORY,
        //.teraShard = ITEM_ELECTRIC_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_ELECTRIC,
    },
    [TYPE_PSYCHIC] =
    {
        .name = _("Psychic"),
        .generic = _("a PSYCHIC move"),
        .palette = 14,
        .zMove = MOVE_SHATTERED_PSYCHE,
        .maxMove = MOVE_MAX_MINDSTORM,
        .teraTypeRGBValue = RGB(31, 14, 15),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_PsychicTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_TWISTED_SPOON,
        //.berry = ITEM_PAYAPA_BERRY,
        //.gem = ITEM_PSYCHIC_GEM,
        //.zCrystal = ITEM_PSYCHIUM_Z,
        //.plate = ITEM_MIND_PLATE,
        //.memory = ITEM_PSYCHIC_MEMORY,
        //.teraShard = ITEM_PSYCHIC_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_PSYCHIC,
    },
    [TYPE_ICE] =
    {
        .name = _("Ice"),
        .generic = _("an ICE move"),
        .palette = 14,
        .zMove = MOVE_SUBZERO_SLAMMER,
        .maxMove = MOVE_MAX_HAILSTORM,
        .teraTypeRGBValue = RGB(14, 26, 25),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_IceTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_NEVER_MELT_ICE,
        //.berry = ITEM_YACHE_BERRY,
        //.gem = ITEM_ICE_GEM,
        //.zCrystal = ITEM_ICIUM_Z,
        //.plate = ITEM_ICICLE_PLATE,
        //.memory = ITEM_ICE_MEMORY,
        //.teraShard = ITEM_ICE_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_ICE,
    },
    [TYPE_DRAGON] =
    {
        .name = _("Dragon"),
        .generic = _("a DRAGON move"),
        .palette = 15,
        .zMove = MOVE_DEVASTATING_DRAKE,
        .maxMove = MOVE_MAX_WYRMWIND,
        .teraTypeRGBValue = RGB(10, 18, 27),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_DragonTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_DRAGON_FANG,
        //.berry = ITEM_HABAN_BERRY,
        //.gem = ITEM_DRAGON_GEM,
        //.zCrystal = ITEM_DRAGONIUM_Z,
        //.plate = ITEM_DRACO_PLATE,
        //.memory = ITEM_DRAGON_MEMORY,
        //.teraShard = ITEM_DRAGON_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_DRAGON,
    },
    [TYPE_DARK] =
    {
        .name = _("Dark"),
        .generic = _("a DARK move"),
        .palette = 13,
        .zMove = MOVE_BLACK_HOLE_ECLIPSE,
        .maxMove = MOVE_MAX_DARKNESS,
        .teraTypeRGBValue = RGB(6, 5, 8),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_DarkTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_BLACK_GLASSES,
        //.berry = ITEM_COLBUR_BERRY,
        //.gem = ITEM_DARK_GEM,
        //.zCrystal = ITEM_DARKINIUM_Z,
        //.plate = ITEM_DREAD_PLATE,
        //.memory = ITEM_DARK_MEMORY,
        //.teraShard = ITEM_DARK_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_DARK,
    },
    [TYPE_FAIRY] =
    {
        .name = _("Fairy"),
        .generic = _("a FAIRY move"),
        .palette = 14,
        .zMove = MOVE_TWINKLE_TACKLE,
        .maxMove = MOVE_MAX_STARFALL,
        .teraTypeRGBValue = RGB(31, 15, 21),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_FairyTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_FAIRY_FEATHER,
        //.berry = ITEM_ROSELI_BERRY,
        //.gem = ITEM_FAIRY_GEM,
        //.zCrystal = ITEM_FAIRIUM_Z,
        //.plate = ITEM_PIXIE_PLATE,
        //.memory = ITEM_FAIRY_MEMORY,
        //.teraShard = ITEM_FAIRY_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_FAIRY,
    },
    [TYPE_STELLAR] =
    {
        .name = _("Stellar"),
        .generic = _("a STELLAR move"),
        .palette = 15,
        .zMove = MOVE_BREAKNECK_BLITZ,
        .maxMove = MOVE_MAX_STRIKE,
        .teraTypeRGBValue = RGB(10, 18, 27),
        .paletteTMHM = gItemIconPalette_NormalTMHM, // failsafe
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = TRUE,
        .isHiddenPowerType = FALSE,
        // .teraShard = ITEM_STELLAR_TERA_SHARD,
    },
    [TYPE_TERRA] =
    {
        .name = _("Terra"),
        .generic = _("a Terra move"),
        .palette = 13,
        .zMove = MOVE_TECTONIC_RAGE,
        .maxMove = MOVE_MAX_QUAKE,
        .teraTypeRGBValue = RGB(25, 23, 18),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_GroundTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = FALSE,
        //.enhanceItem = ITEM_SOFT_SAND,
        //.berry = ITEM_SHUCA_BERRY,
        //.gem = ITEM_GROUND_GEM,
        //.zCrystal = ITEM_GROUNDIUM_Z,
        //.plate = ITEM_EARTH_PLATE,
        //.memory = ITEM_GROUND_MEMORY,
        //.teraShard = ITEM_GROUND_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_GROUND,
    },
    [TYPE_FROST] =
    {
        .name = _("Frost"),
        .generic = _("a FROST move"),
        .palette = 14,
        .zMove = MOVE_SUBZERO_SLAMMER,
        .maxMove = MOVE_MAX_HAILSTORM,
        .teraTypeRGBValue = RGB(14, 26, 25),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_IceTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = FALSE,
        //.enhanceItem = ITEM_NEVER_MELT_ICE,
        //.berry = ITEM_YACHE_BERRY,
        //.gem = ITEM_ICE_GEM,
        //.zCrystal = ITEM_ICIUM_Z,
        //.plate = ITEM_ICICLE_PLATE,
        //.memory = ITEM_ICE_MEMORY,
        //.teraShard = ITEM_ICE_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_ICE,
    },
    [TYPE_OCEAN] =
    {
        .name = _("Ocean"),
        .generic = _("an OCEAN move"),
        .palette = 14,
        .zMove = MOVE_HYDRO_VORTEX,
        .maxMove = MOVE_MAX_GEYSER,
        .teraTypeRGBValue = RGB(10, 18, 27),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_WaterTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = FALSE,
        //.enhanceItem = ITEM_MYSTIC_WATER,
        //.berry = ITEM_PASSHO_BERRY,
        //.gem = ITEM_WATER_GEM,
        //.zCrystal = ITEM_WATERIUM_Z,
        //.plate = ITEM_SPLASH_PLATE,
        //.memory = ITEM_WATER_MEMORY,
        //.teraShard = ITEM_WATER_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_WATER,
    },
    [TYPE_FLAME] =
    {
        .name = _("Flame"),
        .generic = _("a FLAME move"),
        .palette = 13,
        .zMove = MOVE_INFERNO_OVERDRIVE,
        .maxMove = MOVE_MAX_FLARE,
        .teraTypeRGBValue = RGB(31, 20, 11),
        .damageCategory = DAMAGE_CATEGORY_SPECIAL,
        .paletteTMHM = gItemIconPalette_FireTMHM,
        .useSecondTypeIconPalette = TRUE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = FALSE,
        //.enhanceItem = ITEM_CHARCOAL,
        //.berry = ITEM_OCCA_BERRY,
        //.gem = ITEM_FIRE_GEM,
        //.zCrystal = ITEM_FIRIUM_Z,
        //.plate = ITEM_FLAME_PLATE,
        //.memory = ITEM_FIRE_MEMORY,
        //.teraShard = ITEM_FIRE_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_FIRE,
    },
    [TYPE_UNDEAD] =
    {
        .name = _("Undead"),
        .generic = _("a UNDEAD move"),
        .palette = 14,
        .zMove = MOVE_NEVER_ENDING_NIGHTMARE,
        .maxMove = MOVE_MAX_PHANTASM,
        .teraTypeRGBValue = RGB(12, 10, 16),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_GhostTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = FALSE,
        //.enhanceItem = ITEM_SPELL_TAG,
        //.berry = ITEM_KASIB_BERRY,
        //.gem = ITEM_GHOST_GEM,
        //.zCrystal = ITEM_GHOSTIUM_Z,
        //.plate = ITEM_SPOOKY_PLATE,
        //.memory = ITEM_GHOST_MEMORY,
        //.teraShard = ITEM_GHOST_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_GHOST,
    },
    [TYPE_WIND] =
    {
        .name = _("Wind"),
        .generic = _("a WIND move"),
        .palette = 14,
        .zMove = MOVE_SUPERSONIC_SKYSTRIKE,
        .maxMove = MOVE_MAX_AIRSTREAM,
        .teraTypeRGBValue = RGB(31, 26, 7),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_FlyingTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = TRUE,
        //.enhanceItem = ITEM_SHARP_BEAK,
        //.berry = ITEM_COBA_BERRY,
        //.gem = ITEM_FLYING_GEM,
        //.zCrystal = ITEM_FLYINIUM_Z,
        //.plate = ITEM_SKY_PLATE,
        //.memory = ITEM_FLYING_MEMORY,
        //.teraShard = ITEM_FLYING_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_FLYING,
    },
    [TYPE_MUD] =
    {
        .name = _("Mud"),
        .generic = _("a MUD move"),
        .palette = 13,
        .zMove = MOVE_TECTONIC_RAGE,
        .maxMove = MOVE_MAX_QUAKE,
        .teraTypeRGBValue = RGB(25, 23, 18),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_GroundTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = FALSE,
        //.enhanceItem = ITEM_SOFT_SAND,
        //.berry = ITEM_SHUCA_BERRY,
        //.gem = ITEM_GROUND_GEM,
        //.zCrystal = ITEM_GROUNDIUM_Z,
        //.plate = ITEM_EARTH_PLATE,
        //.memory = ITEM_GROUND_MEMORY,
        //.teraShard = ITEM_GROUND_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_GROUND,
    },
    [TYPE_SAND] =
    {
        .name = _("Sand"),
        .generic = _("a SAND move"),
        .palette = 13,
        .zMove = MOVE_TECTONIC_RAGE,
        .maxMove = MOVE_MAX_QUAKE,
        .teraTypeRGBValue = RGB(25, 23, 18),
        .damageCategory = DAMAGE_CATEGORY_PHYSICAL,
        .paletteTMHM = gItemIconPalette_GroundTMHM,
        .useSecondTypeIconPalette = FALSE,
        .isSpecialCaseType = FALSE,
        .isHiddenPowerType = FALSE,
        //.enhanceItem = ITEM_SOFT_SAND,
        //.berry = ITEM_SHUCA_BERRY,
        //.gem = ITEM_GROUND_GEM,
        //.zCrystal = ITEM_GROUNDIUM_Z,
        //.plate = ITEM_EARTH_PLATE,
        //.memory = ITEM_GROUND_MEMORY,
        //.teraShard = ITEM_GROUND_TERA_SHARD,
        //.arceusForm = SPECIES_ARCEUS_GROUND,
    },
};
