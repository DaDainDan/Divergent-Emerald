#if BATTLE_PYRAMID_RANDOM_ENCOUNTERS == TRUE

#include "constants/abilities.h"
#include "constants/battle_move_effects.h"

struct BattlePyramidRequirement {
    const u16 *moves; /* use moves instead of effects so we don't need to find moves with said effect in our loop */
    enum Ability abilities[10];
    u8 nAbilities;
    enum Type type;
    u8 nMoves;
    const enum Item *evoItems;
    u8 nEvoItems;
};

// MOVE_EFFECT_PARALYZE (30% or more)
static const enum Move sParalyzingMoves[] = {
    // MOVE_THUNDER_PUNCH,
    // MOVE_BODY_SLAM,
    MOVE_STUN_SPORE,
    // MOVE_THUNDER_SHOCK,
    // MOVE_THUNDERBOLT,
    MOVE_THUNDER_WAVE,
    MOVE_THUNDER,
    // MOVE_LICK,
    MOVE_GLARE,
    // MOVE_TRI_ATTACK,
    MOVE_ZAP_CANNON,
    // MOVE_SPARK,
    // MOVE_DRAGON_BREATH,
    MOVE_FORCE_PALM,
    // MOVE_THUNDER_FANG,
    // MOVE_DISCHARGE,
    // MOVE_WILD_CHARGE,
    // MOVE_BOLT_STRIKE,
    // MOVE_FREEZE_SHOCK,
    MOVE_NUZZLE,
    // MOVE_SPLISHY_SPLASH,
    // MOVE_BUZZY_BUZZ,
    // MOVE_DIRE_CLAW,
    // MOVE_WILDBOLT_STORM,
    // MOVE_COMBAT_TORQUE,
    // MOVE_OVERLOAD,
    // MOVE_LIGHTNING_TAIL,
    // MOVE_CIRCUIT_KICKS,
    // MOVE_LIGHTNING_GRASP,
    MOVE_NEUROTOXIN,
    MOVE_PRESSURE_POINTS,
    MOVE_LIGHTNING_STORM,
    MOVE_GALVANC_FIELD,
};

// MOVE_EFFECT_POISON (30% or more), MOVE_EFFECT_TOXIC, EFFECT_TOXIC_THREAD
static const u16 sPoisoningMoves[] = {
    MOVE_POISON_STING,
    // MOVE_TWINEEDLE,
    MOVE_POISON_POWDER,
    // MOVE_SMOG,
    // MOVE_SLUDGE,
    MOVE_POISON_GAS,
    // MOVE_SLUDGE_BOMB,
    // MOVE_POISON_TAIL,
    MOVE_POISON_JAB,
    // MOVE_CROSS_POISON,
    MOVE_GUNK_SHOT,
    MOVE_VENOSHOCK,
    // MOVE_SLUDGE_WAVE,
    MOVE_VENOM_DRENCH,
    // MOVE_SHELL_SIDE_ARM,
    // MOVE_DIRE_CLAW,
    MOVE_BARB_BARRAGE,
    // MOVE_MORTAL_SPIN,
    // MOVE_NOXIOUS_TORQUE,
    MOVE_PUTRID_GRASP,
    MOVE_TOXIC,
    MOVE_POISON_FANG,
    MOVE_TOXIC_SPIKES,
    MOVE_TOXIC_THREAD,
    MOVE_BANEFUL_BUNKER,
};

// MOVE_EFFECT_BURN
static const enum Move sBurningMoves[] = {
    // MOVE_FIRE_PUNCH,
    // MOVE_EMBER,
    // MOVE_FLAMETHROWER,
    MOVE_FIRE_BLAST,
    // MOVE_TRI_ATTACK,
    // MOVE_FLAME_WHEEL,
    MOVE_SACRED_FIRE,
    // MOVE_DRAGON_BREATH,
    MOVE_WILL_O_WISP,
    // MOVE_BLAZE_KICK,
    // MOVE_OVERHEAT,
    // MOVE_FLARE_BLITZ,
    // MOVE_EARTH_POWER,
    // MOVE_FIRE_FANG,
    // MOVE_LAVA_PLUME,
    MOVE_INFERNO,
    // MOVE_SEARING_SHOT,
    // MOVE_BLUE_FLARE,
    MOVE_ICE_BURN,
    MOVE_STEAM_ERUPTION,
    // MOVE_SIZZLY_SLIDE,
    // MOVE_PYRO_BALL,
    // MOVE_BURNING_JEALOUSY,
    // MOVE_SCORCHING_SANDS,
    // MOVE_SANDSEAR_STORM,
    // MOVE_BLAZING_TORQUE,
    // MOVE_MATCH_GOTCHA,
    MOVE_BURNING_BULWARK,
    // MOVE_TORCH_TAIL,
    // MOVE_BURNING_GRASP,
};

// EFFECT_FREEZE, MOVE_EFFECT_FREEZE_OR_FROSTBITE
static const enum Move sFrostbiteMoves[] = {
    // MOVE_ICE_PUNCH,
    // MOVE_ICE_BEAM,
    // MOVE_TRI_ATTACK,
    MOVE_BLIZZARD,
    // MOVE_ICE_FANG,
    // MOVE_POWDER_SNOW,
    // MOVE_FREEZE_DRY,
    // MOVE_FREEZING_GLARE,
    MOVE_SHEER_COLD,
    MOVE_FROST_BREATH,
    MOVE_BITTER_COLD,
    // MOVE_FROST_CHARGE,
    // MOVE_SICKLE_CLAW,
    // MOVE_GLACIAL_GRASP,
};

// EFFECT_GRUDGE, EFFECT_SPITE, EFFECT_EERIE_SPELL
static const enum Move sPPReducingMoves[] = {
    MOVE_GRUDGE,
    MOVE_SPITE,
    MOVE_EERIE_SPELL,
};

// EFFECT_EXPLOSION
static const enum Move sExplosionMoves[] = {
    MOVE_SELF_DESTRUCT,
    MOVE_EXPLOSION,
    MOVE_MISTY_EXPLOSION,
    MOVE_CHLOROBLAST,
    MOVE_SUPERNOVA,
    MOVE_OSMOTIC_BURST,
    MOVE_ARC_BLAST,
    MOVE_BRUMAL_BURST,
    MOVE_NOXIOUS_BLOWOUT,
    MOVE_SAND_BURST,
    MOVE_WITS_END,
    MOVE_ROCK_RUPTURE,
    MOVE_BLAST_SHELL,
    MOVE_SHATTER,
    MOVE_BUG_BURST,
    MOVE_RECKLESS_UPHEAVAL,
    MOVE_SOUL_SHATTER,
};

// EFFECT_RAIN_DANCE, EFFECT_SANDSTORM, EFFECT_HAIL, EFFECT_SUNNY_DAY,
static const enum Move sWeatherChangingMoves[] = {
    MOVE_RAIN_DANCE,
    MOVE_SANDSTORM,
    MOVE_HAIL,
    MOVE_SUNNY_DAY,
    MOVE_SNOWSCAPE,
    MOVE_STORM_CALL,
    MOVE_HEAT_WAVE,
    MOVE_MONSOON,
};

// MOVE_EFFECT_RECHARGE, recoil
static const enum Move sPowerfulNormalMoves[] = {
    MOVE_BELLY_FLOP,
    MOVE_GIGA_IMPACT,
    MOVE_THRASH,
    MOVE_TAKE_DOWN,
    MOVE_DOUBLE_EDGE,
};

static const enum Item sEvoItems[] = {ITEM_FIRE_STONE, ITEM_WATER_STONE, ITEM_THUNDER_STONE};

static const struct BattlePyramidRequirement sBattlePyramidRequirementsByRound[] = {
    [0] = /* pokemon with moves that paraylze */
    {
        .type = TYPE_MYSTERY, // no type limitation
        .moves = sParalyzingMoves,
        .nMoves = NELEMS(sParalyzingMoves),
        .abilities = { ABILITY_STATIC },
        .nAbilities = 1,
    },
    [1] = /* pokemon with moves that poison */
    {
        .type = TYPE_MYSTERY,
        .moves = sPoisoningMoves,
        .nMoves = NELEMS(sPoisoningMoves),
        .abilities = { ABILITY_POISON_POINT },
    },
    [2] = /* Pokemon with moves that burn */
    {
        .type = TYPE_MYSTERY,
        .moves = sBurningMoves,
        .nMoves = NELEMS(sBurningMoves),
        .abilities = { ABILITY_FLAME_BODY },
        .nAbilities = 1,
    },
    [3] = /* pokemon with moves that waste PP */
    {
        .type = TYPE_MYSTERY,
        .moves = sPPReducingMoves,
        .nMoves = NELEMS(sPPReducingMoves),
        .abilities = { ABILITY_PRESSURE },
        .nAbilities = 1,
    },
    [4] = /* pokemon with Levitate */
    {
        .type = TYPE_MYSTERY,
        .abilities = { ABILITY_LEVITATE },
        .nAbilities = 1,
    },
    [5] = /* pokemon with trapping abilities */
    {
        .type = TYPE_MYSTERY,
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_ARENA_TRAP }, // TODO magnet pull?
        .nAbilities = 2,
    },
    [6] = /* ice types */
    {
        .type = TYPE_ICE,
    },

    [7] = /* pokemon with explosion effects */
    {
        .type = TYPE_MYSTERY,
        .moves = sExplosionMoves,
        .nMoves = NELEMS(sExplosionMoves),
    },
    [8] = /* psychic types */
    {
        .type = TYPE_PSYCHIC,
    },
    [9] = /* rock types */
    {
        .type = TYPE_ROCK,
    },
    [10] = /* fighting types */
    {
        .type = TYPE_FIGHTING,
    },
    [11] = /* pokemon with weather-altering effects */
    {
        .type = TYPE_MYSTERY,
        .moves = sWeatherChangingMoves,
        .nMoves = NELEMS(sWeatherChangingMoves),
        .abilities = { ABILITY_SAND_SPIT, ABILITY_DRIZZLE, ABILITY_SNOW_WARNING, ABILITY_DROUGHT, ABILITY_SAND_STREAM },
        .nAbilities = 5,
    },
    [12] = /* bug types */
    {
        .type = TYPE_BUG,
    },
    [13] = /* dark types */
    {
        .type = TYPE_DARK,
    },
    [14] = /* water types */
    {
        .type = TYPE_WATER,
    },
    [15] = /* ghost types */
    {
        .type = TYPE_GHOST,
    },
    [16] = /* steel types */
    {
        .type = TYPE_STEEL,
    },
    [17] = /* flying/dragon types */
    {
        .type = TYPE_DRAGON,
    },
    [18] = /* evolve via water/thunder/fire stone */
    {
        .type = TYPE_MYSTERY,
        .evoItems = sEvoItems,
        .nEvoItems = 3,
    },
    [19] = /* normal with powerful moves */
    {
        .type = TYPE_NORMAL,
        .moves = sPowerfulNormalMoves,
        .nMoves = NELEMS(sPowerfulNormalMoves),
    },
};

#endif
