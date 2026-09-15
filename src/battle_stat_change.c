#include "global.h"
#include "battle.h"
#include "battle_scripts.h"
#include "battle_util.h"
#include "battle_stat_change.h"
#include "battle_ai_record.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_ai_util.h"
#include "item.h"
#include "move.h"

// Stat change
static enum StatChangeResult CanDecreaseStat(struct BattleCalcValues *cv, struct StatChange *st);
static enum StatChangeResult CanIncreaseStat(struct BattleCalcValues *cv, struct StatChange *st);
static enum StatChangeResult DecreaseStat(struct BattleCalcValues *cv, struct StatChange *st);
static enum StatChangeResult IncreaseStat(struct BattleCalcValues *cv, struct StatChange *st);
static void StatChanged(struct BattleCalcValues *cv, struct StatChange *st, bool32 isMaxStage);
static void TryPlayStatChangeAnimation(struct BattleCalcValues *cv, struct StatChange *st);

// Failure handling
static bool32 IsSubstituteBlocked(struct BattleCalcValues *cv, struct StatChange *st);
static bool32 IsMistProtected(struct BattleCalcValues *cv, struct StatChange *st);
static bool32 IsHazePreventingIncrease(struct BattleCalcValues *cv, struct StatChange *st);
// static bool32 IsFlowerVeilBlocked(struct BattleCalcValues *cv, struct StatChange *st);
static bool32 IsClearAmuletBlocked(struct BattleCalcValues *cv, struct StatChange *st);
static bool32 IsIntimidateBlocked(struct BattleCalcValues *cv, struct StatChange *st);
static bool32 IsAbilityBlocked(struct BattleCalcValues *cv, struct StatChange *st);
static bool32 IsMirrorArmorReflected(struct BattleCalcValues *cv, struct StatChange *st);
static bool32 AreAllStatChangesPrevented(struct BattleCalcValues *cv, struct StatChange *st);
static bool32 IsStaminaBlocked(struct BattleCalcValues *cv, struct StatChange *st);

// Utitily
static void AdjustStatStage(struct BattleCalcValues *cv, struct StatChange *st);
static bool32 CanAbilityPreventStatLoss(enum Ability ability);
static bool32 AbilityPreventsSpecificStatDrop(u32 ability, u32 stat);
static u32 GetNumPositiveStats(struct StatChange *st);
static u32 GetNumNegativeStats(struct StatChange *st);
static bool32 IsFullyAbsorbedByStamina(enum BattlerId battler, enum Ability ability, bool32 currentEntryAbsorbed);
static void SetAdditionalEffectsOnStatChange(struct BattleCalcValues *cv, struct StatChange *st);
static void MarkStatsAsDone(struct StatChange *st, u32 stat);

u32 const sAccurateStatOrder[NUM_BATTLE_STATS] =
{
    STAT_HP,
    STAT_ATK,
    STAT_DEF,
    STAT_SPATK,
    STAT_SPDEF,
    STAT_SPEED,
    STAT_ACC,
    STAT_EVASION,
};

// Needs same way to factor stat change adjustments like Contrary or Electric Terrain
static void SetStrengthSapHealing(enum BattlerId battlerAtk, enum BattlerId battlerDef, enum Stat stat)
{
    u32 unscaledStat;
    u8 initStatStage = gBattleMons[battlerDef].statStages[stat];
    u8 finalStatStage;
    u32 initStat, finalStat, healAmount;

    switch (stat)
    {
    case STAT_ATK:
        unscaledStat = gBattleMons[battlerDef].attack;
        break;
    case STAT_DEF:
        unscaledStat = gBattleMons[battlerDef].defense;
        break;
    case STAT_SPATK:
        unscaledStat = gBattleMons[battlerDef].spAttack;
        break;
    case STAT_SPDEF:
        unscaledStat = gBattleMons[battlerDef].spDefense;
        break;
    case STAT_SPEED:
        unscaledStat = gBattleMons[battlerDef].speed;
        break;
    default:
        errorf("Illegal stat requested");
        return;
    }

    initStat = unscaledStat * gStatStageRatios[initStatStage][0] / gStatStageRatios[initStatStage][1];

    finalStatStage = (initStatStage > MIN_STAT_STAGE + 1) ? initStatStage - 2 : MIN_STAT_STAGE;
    finalStat = unscaledStat * gStatStageRatios[finalStatStage][0] / gStatStageRatios[finalStatStage][1];

    healAmount = initStat - finalStat;
    if (healAmount < unscaledStat / 10)
        healAmount = max(1, unscaledStat / 10);

    gBattleStruct->passiveHpUpdate[battlerAtk] = healAmount;
}

// Not the most elegant implementation but it guarantees that everything works for single and multi targets
static bool32 CheckSpecificMoveCondition(struct BattleCalcValues *cv, struct StatChange *st)
{
    switch (cv->moveEffect)
    {
    case EFFECT_CAPTIVATE:
        if (cv->abilities[cv->battlerDef] == ABILITY_OBLIVIOUS || cv->abilities[cv->battlerDef] == ABILITY_INNER_FOCUS)
        {
            if (!st->onlyChecking)
            {
                st->script = BattleScript_AbilityProtectedTarget;
                gBattlerAbility = gBattleScripting.battler = cv->battlerDef;
                gLastUsedAbility = cv->abilities[cv->battlerDef];
                RecordAbilityBattle(cv->battlerDef, cv->abilities[cv->battlerDef]);
            }
            return TRUE;
        }
        break;
    case EFFECT_STRENGTH_SAP:
    {
        const struct AdditionalEffect *additionalEffect = GetMoveAdditionalEffectById(cv->move, 0);
        enum Stat stat;

        for (stat = STAT_ATK; stat < NUM_STATS; stat++)
        {
            if (GetStatStage(stat, additionalEffect) != 0)
                break;
        }

        if (CompareStat(cv->battlerDef, stat, MIN_STAT_STAGE, CMP_EQUAL, ABILITY_NONE))
        {
            if (!st->onlyChecking)
            {
                PREPARE_STAT_BUFFER(gBattleTextBuff1, stat);
                gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_STAT_WONT_CHANGE;
                st->script = BattleScript_DecreaseStatChangeMessage;
                gBattleScripting.battler = cv->battlerDef;
            }
            return TRUE;
        }
        else
        {
            SetStrengthSapHealing(cv->battlerAtk, cv->battlerDef, stat);
            st->additionalEffectTriggers = TRUE;
        }
        break;
    }
    case EFFECT_ROTOTILLER:
        if (!IsBattlerGrounded(cv->battlerDef, cv->abilities[cv->battlerDef], cv->holdEffects[cv->battlerDef])
         || !IS_BATTLER_OF_TYPE(cv->battlerDef, TYPE_GRASS))
        {
            if (!st->onlyChecking)
            {
                st->script = BattleScript_ItDoesntAffectScrTarget;
                gBattleScripting.battler = cv->battlerDef;
            }
            return TRUE;
        }
        break;
    case EFFECT_FLOWER_SHIELD:
        if (!IS_BATTLER_OF_TYPE(cv->battlerDef, TYPE_GRASS))
        {
            if (!st->onlyChecking)
            {
                st->script = BattleScript_ItDoesntAffectScrTarget;
                gBattleScripting.battler = cv->battlerDef;
            }
            return TRUE;
        }
        break;
    case EFFECT_TOXIC_THREAD:
        if (CanBePoisoned(cv->battlerAtk, cv->battlerDef, cv->abilities[cv->battlerAtk], cv->abilities[cv->battlerDef]))
        {
            st->additionalEffectTriggers = TRUE;
            if (!st->onlyChecking)
                st->moveScript = BattleScript_ToxicThread;
        }
        break;
    case EFFECT_ULTRASONIC:
        if (cv->abilities[cv->battlerDef] == ABILITY_INNER_FOCUS) // OWN TEMPO
        {
            if (!st->onlyChecking)
            {
                st->moveScript = BattleScript_OwnTempoPrevents;
                gBattlerAbility = cv->battlerDef;
                gLastUsedAbility = ABILITY_INNER_FOCUS;
                RecordAbilityBattle(cv->battlerDef, ABILITY_INNER_FOCUS);
            }
        }
        else if (CanBeConfused(cv->battlerAtk, cv->battlerDef))
        {
            st->additionalEffectTriggers = TRUE;
            if (!st->onlyChecking)
                st->moveScript = BattleScript_UltrasonicConfusion;
        }
        break;
    case EFFECT_SING:
        if (CanBeSlept(cv->battlerAtk, cv->battlerDef, cv->abilities[cv->battlerAtk], cv->abilities[cv->battlerDef], NOT_BLOCKED_BY_SLEEP_CLAUSE)
        && ((Random() % 2) || IsSecondaryEffectBonusActive(cv->battlerAtk, cv->abilities[cv->battlerAtk])))
        {
            st->additionalEffectTriggers = TRUE;
            if (!st->onlyChecking)
                st->moveScript = BattleScript_Sing;
        }
        break;
    case EFFECT_WHIRLPOOL:
        if (!IsBattlerGrounded(cv->battlerDef, cv->abilities[cv->battlerDef], cv->holdEffects[cv->battlerDef]))
        {
            if (!st->onlyChecking)
            {
                st->script = BattleScript_ItDoesntAffectScrTarget;
                gBattleScripting.battler = cv->battlerDef;
            }
            return TRUE;
        }
    case EFFECT_SPIDER_WEB:
        if (!gBattleMons[cv->battlerDef].volatiles.escapePrevention
                 && GetConfig(B_GHOSTS_ESCAPE) >= GEN_6 && IS_BATTLER_OF_TYPE(cv->battlerDef, TYPE_GHOST))
        {
            st->additionalEffectTriggers = TRUE;
            if (!st->onlyChecking)
                st->moveScript = BattleScript_TrapTarget;
        }
        break;
    case EFFECT_TAR_SHOT:
        if (!gBattleMons[cv->battlerDef].volatiles.tarShot && GetActiveGimmick(cv->battlerDef) != GIMMICK_TERA)
        {
            st->additionalEffectTriggers = TRUE;
            if (!st->onlyChecking)
            {
                gBattleMons[cv->battlerDef].volatiles.tarShot = TRUE;
                st->moveScript = BattleScript_TarShotMessage;
            }
        }
        break;
    default:
        break;
    }

    return FALSE;

}

bool32 CanAnyStatChange(struct BattleCalcValues *cv, struct StatChange *st)
{
    u32 numAdditionalEffects = GetMoveAdditionalEffectCount(cv->move);
    bool32 canAnyStatChange = FALSE;
    bool32 statChangeBlockedOnBattler = FALSE;

    if (CheckSpecificMoveCondition(cv, st) || IsSubstituteBlocked(cv, st))
        statChangeBlockedOnBattler = TRUE;

    for (u32 i = 0; i < numAdditionalEffects; i++)
    {
        const struct AdditionalEffect *additionalEffect = GetMoveAdditionalEffectById(cv->move, i);
        bool32 isDynamicStat = additionalEffect->random || additionalEffect->highest || additionalEffect->lowest;
        enum Stat dynamicStat = NUM_BATTLE_STATS;

        if (isDynamicStat)
            ResolveDynamicStat(cv->battlerDef, cv->abilities[cv->battlerDef], additionalEffect, &dynamicStat);

        for (enum Stat j = STAT_ATK; j < NUM_BATTLE_STATS; j++)
        {
            st->stat = sAccurateStatOrder[j];

            if (isDynamicStat)
            {
                if (st->stat != dynamicStat)
                    continue;
                st->stage = GetDynamicStatValue(additionalEffect);
            }
            else
            {
                st->stage = GetStatStage(st->stat, additionalEffect);
            }

            if (st->stage == 0)
                continue;

            if (additionalEffect->moveEffect == STAT_CHANGE_EFFECT_MINUS)
                st->stage = -1 * st->stage;

            AdjustStatStage(cv, st);
            SetStatChange(cv->battlerDef, st->stat, st->stage);

            if (st->stage == 0) // for Stamina
                continue;

            if (statChangeBlockedOnBattler) // Still need to collect stats for proper failure
                continue;

            // Workaround for contrary
            if (cv->moveEffect == EFFECT_BELLY_DRUM && !CompareStat(cv->battlerDef, st->stat, MAX_STAT_STAGE, CMP_EQUAL, ABILITY_NONE))
            {
                canAnyStatChange = TRUE;
                continue;
            }

            if (st->stage < 0)
            {
                if (CompareStat(cv->battlerDef, st->stat, MIN_STAT_STAGE, CMP_EQUAL, ABILITY_NONE))
                    continue;
            }
            else
            {
                if (CompareStat(cv->battlerDef, st->stat, MAX_STAT_STAGE, CMP_EQUAL, ABILITY_NONE))
                    continue;
            }

            if (st->stage < 0 && CanDecreaseStat(cv, st) == STAT_CHANGE_DIDNT_WORK)
                continue;

            if (st->stage > 0 && CanIncreaseStat(cv, st) == STAT_CHANGE_DIDNT_WORK)
                continue;

            canAnyStatChange = TRUE;
        }
    }

    if (!statChangeBlockedOnBattler && IsFullyAbsorbedByStamina(cv->battlerDef, cv->abilities[cv->battlerDef], FALSE))
        canAnyStatChange = TRUE;

    return canAnyStatChange;
}

enum StatChangeResult TryStatChange(struct BattleCalcValues *cv, struct StatChange *st)
{
    if (CheckSpecificMoveCondition(cv, st) || IsSubstituteBlocked(cv, st))
    {
        st->nextBattler = TRUE;
        return STAT_CHANGE_BLOCKED_BY_TARGET;
    }

    enum StatChangeResult result = STAT_CHANGE_DIDNT_WORK;
    for (u32 i = 0; i < st->statStageAmount; i++)
    {
        if (i + 1 == st->statStageAmount) // Avoids redundant looping
            st->nextBattler = TRUE;

        if (st->statStageQueue[i].done)
            continue;

        st->stat = st->statStageQueue[i].stat;
        st->stage = st->statStageQueue[i].stage;
        st->statStageQueue[i].done = TRUE;

        if (cv->move == MOVE_NONE)
            AdjustStatStage(cv, st);

        if (st->stage < 0 || (st->stage == 0 && cv->abilities[cv->battlerDef] == ABILITY_STAMINA))
        {
            if (CanDecreaseStat(cv, st) == STAT_CHANGE_DIDNT_WORK)
            {
                if (st->silentFailure)
                    continue;
                result = STAT_CHANGE_BLOCKED_BY_TARGET;
                break;
            }

            if (st->stage == 0) // Stamina absorbed this one but not the whole move; nothing left to apply
                continue;

            if (DecreaseStat(cv, st) == STAT_CHANGE_WORKED)
            {
                result = STAT_CHANGE_WORKED;
                break;
            }
        }
        else if (st->stage > 0)
        {
            if (CanIncreaseStat(cv, st) == STAT_CHANGE_DIDNT_WORK)
            {
                if (st->silentFailure)
                    continue;
                result = STAT_CHANGE_BLOCKED_BY_TARGET;
                break;
            }

            if (IncreaseStat(cv, st) == STAT_CHANGE_WORKED)
            {
                result = STAT_CHANGE_WORKED;
                break;
            }
        }
    }

    if (st->nextBattler && !st->onlyChecking) // Set volatiles after all stats are done
        SetAdditionalEffectsOnStatChange(cv, st);

    return result;
}

enum StatChangeResult TrySingleStatChange(struct BattleCalcValues *cv, struct StatChange *st)
{
    AdjustStatStage(cv, st);

    if (st->stage < 0 || (st->stage == 0 && cv->abilities[cv->battlerDef] == ABILITY_STAMINA))
    {
        if (CanDecreaseStat(cv, st) == STAT_CHANGE_DIDNT_WORK)
            return STAT_CHANGE_DIDNT_WORK;

        if (st->stage == 0) // Stamina absorbed it but didn't block (queue wasn't a full wipeout)
            return STAT_CHANGE_DIDNT_WORK;

        if (DecreaseStat(cv, st) == STAT_CHANGE_WORKED)
            return STAT_CHANGE_WORKED;
    }
    else if (st->stage > 0)
    {
        if (CanIncreaseStat(cv, st) == STAT_CHANGE_DIDNT_WORK)
            return STAT_CHANGE_DIDNT_WORK;

        if (IncreaseStat(cv, st) == STAT_CHANGE_WORKED)
            return STAT_CHANGE_WORKED;
    }

    return STAT_CHANGE_DIDNT_WORK;
}

static enum StatChangeResult CanDecreaseStat(struct BattleCalcValues *cv, struct StatChange *st)
{
    if (AreAllStatChangesPrevented(cv, st)
     || IsStaminaBlocked(cv, st)
     || IsMistProtected(cv, st)
     || IsIntimidateBlocked(cv, st)
    //  || IsFlowerVeilBlocked(cv, st)
     || IsClearAmuletBlocked(cv, st)
     || IsAbilityBlocked(cv, st)
     || IsMirrorArmorReflected(cv, st))
        return STAT_CHANGE_DIDNT_WORK;
    return STAT_CHANGE_WORKED;
}

static enum StatChangeResult CanIncreaseStat(struct BattleCalcValues *cv, struct StatChange *st)
{
    if (AreAllStatChangesPrevented(cv, st)
     || IsHazePreventingIncrease(cv, st))
        return STAT_CHANGE_DIDNT_WORK;
    return STAT_CHANGE_WORKED;
}

static enum StatChangeResult DecreaseStat(struct BattleCalcValues *cv, struct StatChange *st)
{
    u32 currStage = gBattleMons[cv->battlerDef].statStages[st->stat];

    PREPARE_STAT_BUFFER(gBattleTextBuff1, st->stat);

    if (currStage == (MIN_STAT_STAGE + 1))
        st->stage = -1;
    else if (currStage == (MIN_STAT_STAGE + 2) && st->stage < -2)
        st->stage = -2;

    if (st->stage == -2)
    {
        PREPARE_STRING_BUFFER(gBattleTextBuff2, STRINGID_STATHARSHLY);
    }
    else if (st->stage <= -3)
    {
        PREPARE_STRING_BUFFER(gBattleTextBuff2, STRINGID_SEVERELY);
    }
    else
    {
        PREPARE_STRING_BUFFER(gBattleTextBuff2, STRINGID_EMPTYSTRING3);
    }

    if (currStage == MIN_STAT_STAGE)
    {
        if (st->onlyChecking)
            return STAT_CHANGE_DIDNT_WORK;

        if (cv->moveEffect == EFFECT_BELLY_DRUM)
            gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_STAT_CHANGED_BELLY_DRUM;
        else if (cv->moveEffect == EFFECT_AUTOTOMIZE)
            gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_STAT_CHANGED_AUTOTOMIZE;
        else
            gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_STAT_WONT_CHANGE;

        gBattleScripting.battler = cv->battlerDef;
        st->script = BattleScript_DecreaseStatChangeMessageMinStat;
        return STAT_CHANGE_WORKED; // Handle failure
    }
    else if (!st->onlyChecking)
    {
        gBattleMons[cv->battlerDef].volatiles.tryEjectPack = TRUE;
        gProtectStructs[cv->battlerDef].lashOutAffected = TRUE;
    }

    if (!st->onlyChecking)
    {
        if (!st->stickyWeb)
        {
            if (st->certain || (cv->battlerAtk != cv->battlerDef && IsBattlerAlly(cv->battlerAtk, cv->battlerDef)))
                gBattleStruct->ignoreDefiant = TRUE;
        }

        StatChanged(cv, st, FALSE);
        st->script = BattleScript_DecreaseStatChangeMessage;
        TryPlayStatChangeAnimation(cv, st);
    }

    return STAT_CHANGE_WORKED;
}

static enum StatChangeResult IncreaseStat(struct BattleCalcValues *cv, struct StatChange *st)
{
    u32 currStage = gBattleMons[cv->battlerDef].statStages[st->stat];
    bool32 isMaxStage = st->stage >= MAX_STAT_STAGE;

    PREPARE_STAT_BUFFER(gBattleTextBuff1, st->stat);

    if (currStage == MAX_STAT_STAGE - 1)
        st->stage = 1;
    else if (currStage == MAX_STAT_STAGE - 2 && st->stage > 2)
        st->stage = 2;

    if (st->stage == 2)
    {
        PREPARE_STRING_BUFFER(gBattleTextBuff2, STRINGID_STATSHARPLY);
    }
    else if (st->stage >= 3)
    {
        PREPARE_STRING_BUFFER(gBattleTextBuff2, STRINGID_DRASTICALLY);
    }
    else
    {
        PREPARE_STRING_BUFFER(gBattleTextBuff2, STRINGID_EMPTYSTRING3);
    }

    if (gBattleMons[cv->battlerDef].statStages[st->stat] == MAX_STAT_STAGE)
    {
        if (st->onlyChecking)
            return STAT_CHANGE_DIDNT_WORK;

        gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_STAT_WONT_CHANGE;
        st->script = BattleScript_StatDidntChangeMessagePause;
        gBattleScripting.battler = cv->battlerDef;
        return STAT_CHANGE_WORKED; // Handle failure
    }
    else if (!st->onlyChecking)
    {
        u32 stageIncrease = st->stage;

        if ((st->stage + gBattleMons[cv->battlerDef].statStages[st->stat]) > MAX_STAT_STAGE)
            stageIncrease  = MAX_STAT_STAGE - gBattleMons[cv->battlerDef].statStages[st->stat];

        if (stageIncrease > 0)
        {
            // Check Mirror Herb / Opportunist
            for (enum BattlerId battler = 0; battler < gBattlersCount; battler++)
            {
                if (IsBattlerAlly(battler, cv->battlerDef))
                    continue; // Only triggers on opposing side

                if (CompareStat(battler, st->stat, MAX_STAT_STAGE, CMP_EQUAL, cv->abilities[battler]))
                    continue;

                if ((cv->abilities[battler] == ABILITY_OPPORTUNIST
                  || cv->abilities[battler] == ABILITY_COMPETITIVE
                  || cv->abilities[battler] == ABILITY_TURBOBLAZE)
                 && !st->opportunistActivation && !st->mirrorHerbActivation)
                    gProtectStructs[battler].activateOpportunist = TRUE;

                if (cv->holdEffects[battler] == HOLD_EFFECT_MIRROR_HERB
                 && !st->mirrorHerbActivation && !st->opportunistActivation)
                    gProtectStructs[battler].eatMirrorHerb = TRUE;

                if (gProtectStructs[battler].activateOpportunist || gProtectStructs[battler].eatMirrorHerb)
                {
                    gQueuedStatBoosts[battler].stats |= (1 << (st->stat - 1)); // -1 to start at atk
                    gQueuedStatBoosts[battler].statChanges[st->stat - 1] += stageIncrease;
                }
            }

            // Check Symbiosis (Opportunist for allies)
            for (enum BattlerId battler = 0; battler < gBattlersCount; battler++)
            {
                if (battler == cv->battlerDef || !IsBattlerAlly(battler, cv->battlerDef))
                    continue; // Only triggers on ally side

                if (CompareStat(battler, st->stat, MAX_STAT_STAGE, CMP_EQUAL, cv->abilities[battler]))
                    continue;

                if (cv->abilities[battler] == ABILITY_SYMBIOSIS && !st->opportunistActivation && !st->mirrorHerbActivation)
                    gProtectStructs[battler].activateOpportunist = TRUE;

                if (gProtectStructs[battler].activateOpportunist)
                {
                    gQueuedStatBoosts[battler].stats |= (1 << (st->stat - 1)); // -1 to start at atk
                    gQueuedStatBoosts[battler].statChanges[st->stat - 1] += stageIncrease;
                }
            }
        }
    }

    if (!st->onlyChecking)
    {
        gProtectStructs[cv->battlerDef].statRaised = TRUE;
        StatChanged(cv, st, isMaxStage);
        st->script = BattleScript_IncreaseStatChangeMessage;
        TryPlayStatChangeAnimation(cv, st);
    }

    return STAT_CHANGE_WORKED;
}

static void StatChanged(struct BattleCalcValues *cv, struct StatChange *st, bool32 isMaxStage)
{
    gBattleStruct->moveResultFlags[cv->battlerDef] |= MOVE_RESULT_STAT_CHANGED;
    gBattleScripting.battler = cv->battlerDef;
    gBattleMons[cv->battlerDef].statStages[st->stat] += st->stage;

    if (st->stage > 0)
    {
        if (gBattleMons[cv->battlerDef].statStages[st->stat] > MAX_STAT_STAGE)
            gBattleMons[cv->battlerDef].statStages[st->stat] = MAX_STAT_STAGE;
    }
    else
    {
        if (gBattleMons[cv->battlerDef].statStages[st->stat] < MIN_STAT_STAGE)
            gBattleMons[cv->battlerDef].statStages[st->stat] = MIN_STAT_STAGE;
    }

    if (cv->moveEffect == EFFECT_STOCKPILE && st->stage > 0)
    {
        switch (st->stat)
        {
        case STAT_DEF:
            gBattleMons[cv->battlerDef].volatiles.stockpileDef++;
            break;
        case STAT_SPDEF:
            gBattleMons[cv->battlerDef].volatiles.stockpileSpDef++;
            break;
        default:
            break;
        }
    }

    if (cv->moveEffect == EFFECT_BELLY_DRUM)
    {
        gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_STAT_CHANGED_BELLY_DRUM;
    }
    else if (cv->moveEffect == EFFECT_AUTOTOMIZE)
    {
        gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_STAT_CHANGED_AUTOTOMIZE;
    }
    else if (isMaxStage)
    {
        gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_STAT_MAXED;
    }
    else if (st->itemMessage)
    {
        gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_STAT_CHANGED_ITEM;
    }
    else
    {
        gBattleCommunication[MULTISTRING_CHOOSER] = B_MSG_STAT_CHANGED;
    }
}

static void TryPlayStatChangeAnimation(struct BattleCalcValues *cv, struct StatChange *st)
{
    u32 statAnimId = st->stat;

    if (st->stage <= -1) // goes down
    {
        if (gBattleStruct->negativeAnimPlayed)
            return;

        u32 numNegativeStats = 0;
        bool32 isStatChangeByTwo = abs(st->stage) > 1;

        gBattleStruct->negativeAnimPlayed = TRUE;
        numNegativeStats = GetNumNegativeStats(st);

        statAnimId += isStatChangeByTwo ? STAT_ANIM_MINUS2 : STAT_ANIM_MINUS1;

        if (ShouldDefiantCompetitiveActivate(cv->battlerDef, cv->abilities[cv->battlerDef]))
            numNegativeStats = 0;

        if (numNegativeStats > 1) // more than one stat, so the color is gray
            statAnimId = isStatChangeByTwo ? STAT_ANIM_MULTIPLE_MINUS2 : STAT_ANIM_MULTIPLE_MINUS1;
    }
    else // goes up
    {
        if (gBattleStruct->positiveAnimPlayed)
            return;

        u32 numPositiveStats = 0;
        bool32 isStatChangeByTwo = st->stage > 1;

        gBattleStruct->positiveAnimPlayed = TRUE;
        numPositiveStats = GetNumPositiveStats(st);

        statAnimId += isStatChangeByTwo ? STAT_ANIM_PLUS2 : STAT_ANIM_PLUS1;

        if (numPositiveStats > 1)
            statAnimId = isStatChangeByTwo ? STAT_ANIM_MULTIPLE_PLUS2 : STAT_ANIM_MULTIPLE_PLUS1;
    }

    BtlController_EmitBattleAnimation(cv->battlerDef, B_COMM_TO_CONTROLLER, B_ANIM_STATS_CHANGE, statAnimId);
    MarkBattlerForControllerExec(cv->battlerDef);
}

static bool32 IsSubstituteBlocked(struct BattleCalcValues *cv, struct StatChange *st)
{
    if (st->ignoreCertainFailure)
        return FALSE;

    if (st->certain || GetBattlerMoveTargetType(cv->battlerAtk, cv->move) == TARGET_ALLY)
        return FALSE;

    if (!IsSubstituteProtected(cv->battlerAtk, cv->battlerDef, cv->abilities[cv->battlerAtk], cv->move))
        return FALSE;

    if (!st->onlyChecking)
    {
        gBattleScripting.battler = cv->battlerDef;
        st->script = BattleScript_ButItFailedRet;
    }

    return TRUE;
}

static bool32 IsMistProtected(struct BattleCalcValues *cv, struct StatChange *st)
{
    if (gSideTimers[GetBattlerSide(cv->battlerDef)].mistTimer == 0)
        return FALSE;

    if (st->certain)
        return FALSE;

    if (!IsBattlerAlly(cv->battlerDef, cv->battlerAtk) && cv->abilities[cv->battlerAtk] == ABILITY_INFILTRATOR)
        return FALSE;

    if (!st->onlyChecking)
    {
        MarkStatsAsDone(st, NUM_BATTLE_STATS);
        gBattleScripting.battler = cv->battlerDef;
        st->script = BattleScript_MistProtected;
    }

    return TRUE;
}

static bool32 IsHazePreventingIncrease(struct BattleCalcValues *cv, struct StatChange *st)
{
    if (gSideTimers[GetBattlerSide(cv->battlerDef)].hazeTimer == 0)
        return FALSE;

    // if (st->certain)
    //     return FALSE;

    if (!IsBattlerAlly(cv->battlerDef, cv->battlerAtk) && cv->abilities[cv->battlerAtk] == ABILITY_INFILTRATOR)
        return FALSE;

    if (!st->onlyChecking)
    {
        MarkStatsAsDone(st, NUM_BATTLE_STATS);
        gBattleScripting.battler = cv->battlerDef;
        st->script = BattleScript_HazePrevented;
    }

    return TRUE;
}

// static enum BattlerId StatChange_IsFlowerVeilProtected(struct BattleCalcValues *cv)
// {
//     if (!IS_BATTLER_OF_TYPE(cv->battlerDef, TYPE_GRASS))
//         return MAX_BATTLERS_COUNT;

//     for (enum BattlerId battler = B_BATTLER_0; battler < gBattlersCount; battler++)
//     {
//         if (!IsBattlerAlly(cv->battlerDef, battler))
//             continue;
//         if (cv->abilities[battler] == ABILITY_FLOWER_VEIL)
//             return battler;
//     }

//     return MAX_BATTLERS_COUNT;
// }

// static bool32 IsFlowerVeilBlocked(struct BattleCalcValues *cv, struct StatChange *st)
// {
//     if (st->certain)
//         return FALSE;

//     enum BattlerId flowerVeilBattler = StatChange_IsFlowerVeilProtected(cv);

//     if (flowerVeilBattler == MAX_BATTLERS_COUNT)
//         return FALSE;

//     if (!st->onlyChecking)
//     {
//         st->script = BattleScript_FlowerVeilProtectsRet;
//         gBattleScripting.battler = cv->battlerDef;
//         gBattlerAbility = flowerVeilBattler;
//         gLastUsedAbility = ABILITY_FLOWER_VEIL;
//         MarkStatsAsDone(st, NUM_BATTLE_STATS);
//         RecordAbilityBattle(gBattlerAbility, ABILITY_FLOWER_VEIL);
//     }

//     return TRUE;
// }

static bool32 IsClearAmuletBlocked(struct BattleCalcValues *cv, struct StatChange *st)
{
    if (st->certain)
        return FALSE;

    if (cv->holdEffects[cv->battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return FALSE;

    if (!st->onlyChecking)
    {
        st->script = BattleScript_ItemNoStatLoss;
        gBattleScripting.battler = cv->battlerDef;
        gLastUsedItem = gBattleMons[cv->battlerDef].item;
        MarkStatsAsDone(st, NUM_BATTLE_STATS);
        RecordItemEffectBattle(cv->battlerDef, HOLD_EFFECT_CLEAR_AMULET);
    }

    return TRUE;
}

static bool32 IsIntimidateBlocked(struct BattleCalcValues *cv, struct StatChange *st)
{
    if (!st->intimidate)
        return FALSE;

    switch (cv->abilities[cv->battlerDef])
    {
    case ABILITY_INNER_FOCUS:
    case ABILITY_GUTS:
    case ABILITY_SCRAPPY:
    // case ABILITY_OWN_TEMPO:
    case ABILITY_OBLIVIOUS:
        if (GetConfig(B_UPDATED_INTIMIDATE) < GEN_8)
            return FALSE;
        PREPARE_STAT_BUFFER(gBattleTextBuff1, st->stat);
        st->script = BattleScript_AbilityNoSpecificStatLoss;
        break;
    case ABILITY_GUARD_DOG:
    {
        // enum BattlerId flowerVeilBattler = StatChange_IsFlowerVeilProtected(cv);

        // if (flowerVeilBattler != MAX_BATTLERS_COUNT
        //  && GetBattlerRawSpeedOrder(flowerVeilBattler) < GetBattlerRawSpeedOrder(cv->battlerDef))
        //     return FALSE;

        if (!CompareStat(cv->battlerDef, STAT_ATK, MIN_STAT_STAGE, CMP_GREATER_THAN, cv->abilities[cv->battlerDef]))
            return FALSE;

        SetStatChange2(cv->battlerDef, st->stat, -1 * st->stage);
        st->script = BattleScript_DefiantActivates;
        gEffectBattler = cv->battlerDef;
        break;
    }
    default:
        return FALSE;
    }

    gLastUsedAbility = cv->abilities[cv->battlerDef];
    gBattlerAbility = cv->battlerDef;
    gBattleScripting.battler = cv->battlerDef;
    MarkStatsAsDone(st, st->stat);
    RecordAbilityBattle(cv->battlerDef, cv->abilities[cv->battlerDef]);
    return TRUE;
}

static bool32 IsAbilityBlocked(struct BattleCalcValues *cv, struct StatChange *st)
{
    if (st->certain)
        return FALSE;

    if (CanAbilityPreventStatLoss(cv->abilities[cv->battlerDef]))
    {
        if (!st->onlyChecking)
        {
            MarkStatsAsDone(st, NUM_BATTLE_STATS);
            st->script = BattleScript_AbilityNoStatLoss;
        }
    }
    else if (AbilityPreventsSpecificStatDrop(cv->abilities[cv->battlerDef], st->stat))
    {
        if (!st->onlyChecking)
        {
            MarkStatsAsDone(st, st->stat);
            PREPARE_STAT_BUFFER(gBattleTextBuff1, st->stat);
            st->script = BattleScript_AbilityNoSpecificStatLoss;
        }
    }
    else
    {
        return FALSE;
    }

    if (!st->onlyChecking)
    {
        gBattleScripting.battler = cv->battlerDef;
        gBattlerAbility = cv->battlerDef;
        gLastUsedAbility = cv->abilities[cv->battlerDef];
        RecordAbilityBattle(cv->battlerDef, gLastUsedAbility);
    }

    return TRUE;
}

static bool32 IsMirrorArmorReflected(struct BattleCalcValues *cv, struct StatChange *st)
{
    if (cv->abilities[cv->battlerDef] != ABILITY_MIRROR_ARMOR
     || st->ignoreMirrorArmored
     || st->certain)
        return FALSE;

    if (st->onlyChecking && !st->ignoreCertainFailure)
        return TRUE;

    if (gBattleStruct->moveResultFlags[cv->battlerDef] & MOVE_RESULT_MIRROR_ARMOR_PENDING || !st->ignoreCertainFailure)
    {
        st->silentFailure = FALSE; // Mirror Armor still deflects damaging move stat drops
        st->script = BattleScript_MirrorArmorReflect;
        gBattlerAbility = cv->battlerDef;
        RecordAbilityBattle(cv->battlerDef, cv->abilities[cv->battlerDef]);

        if (st->stickyWeb)
        {
            if (GetConfig(B_MIRROR_ARMOR_STICKY_WEB) >= GEN_9)
            {
                st->script = BattleScript_AbilityPopUp;
                return TRUE;
            }
            else if (gSideTimers[GetBattlerSide(cv->battlerDef)].stickyWebBattlerId != 0xFF)
            {
                gBattleScripting.battler = gSideTimers[GetBattlerSide(cv->battlerDef)].stickyWebBattlerId;
            }
        }
        else
        {
            gBattleScripting.battler = cv->battlerAtk;

            if (IsBattlerAlly(cv->battlerAtk, cv->battlerDef))
                gBattleStruct->ignoreDefiant = TRUE;

            gBattleStruct->allowPartingShot = TRUE;
        }

        for (u32 i = 0; i < st->statStageAmount; i++)
        {
            enum Stat stat = st->statStageQueue[i].stat;
            s32 stage = st->statStageQueue[i].stage;
            if (stage < 0)
            {
                st->statStageQueue[i].done = TRUE;
                SetStatChange2(gBattleScripting.battler, stat, stage);
            }
        }

        return TRUE;
    }

    return FALSE;
}

// There is a similar function AI_GetAdjustedStatStage that needs to be updated if things are changed here
static void AdjustStatStage(struct BattleCalcValues *cv, struct StatChange *st)
{
    if (cv->moveEffect == EFFECT_GROWTH && GetAttackerWeather(cv->holdEffects[cv->battlerDef], cv->abilities[cv->battlerDef], GetWeather()) & B_WEATHER_SUN)
        st->stage = 2 * st->stage;

    if (cv->moveEffect == EFFECT_FACADE && gBattleMons[cv->battlerAtk].status1 & STATUS1_ANY)
        st->stage = 2 * st->stage;

    if (cv->moveEffect == EFFECT_HOWL && gProtectStructs[cv->battlerDef].howlActive)
        st->stage = 2 * st->stage;

    if (st->stage == STAT_CHANGE_FORCE_MAX)
        st->stage = MAX_STAT_STAGE;

    if (IsElectricTerrainAffected(cv->battlerDef, gFieldStatuses))
        st->stage = 2 * st->stage;

    if ((cv->moveEffect == EFFECT_SWORDS_DANCE && cv->abilities[cv->battlerDef] == ABILITY_HYPER_CUTTER)
     || (cv->moveEffect == EFFECT_HONE_EDGE && cv->abilities[cv->battlerDef] == ABILITY_HYPER_CUTTER)
     || (cv->moveEffect == EFFECT_CALM_MIND && cv->abilities[cv->battlerDef] == ABILITY_HYPER_FOCUS && st->stat == STAT_SPATK)
     || (cv->moveEffect == EFFECT_YOGA_POSE && cv->abilities[cv->battlerDef] == ABILITY_HYPER_FOCUS && st->stat == STAT_SPDEF))
        st->stage = st->stage + 1;

    if (cv->holdEffects[cv->battlerDef] == HOLD_EFFECT_GRISEOUS_ORB && GET_BASE_SPECIES_ID(gBattleMons[cv->battlerDef].species) == SPECIES_GIRATINA)
    {
        st->stage = -1 * st->stage;
        if (!st->onlyChecking)
            RecordItemEffectBattle(cv->battlerDef, cv->holdEffects[cv->battlerDef]);
    }

    switch (cv->abilities[cv->battlerDef])
    {
    case ABILITY_CONTRARY:
        st->stage = -1 * st->stage;
        if (!st->onlyChecking)
            RecordAbilityBattle(cv->battlerDef, cv->abilities[cv->battlerDef]);
        break;
    case ABILITY_SIMPLE:
        if (st->stage > 1 || st->stage < -1)
        {
            if (st->stage > 1)
                st->stage = 1;
            else if (st->stage < -1)
                st->stage = -1;
            if (!st->onlyChecking)
                RecordAbilityBattle(cv->battlerDef, cv->abilities[cv->battlerDef]);
        }
        break;
    case ABILITY_STAMINA:
        if (st->stage < 0)
        {
            st->stage = st->stage + 1;
            if (!st->onlyChecking)
                RecordAbilityBattle(cv->battlerDef, cv->abilities[cv->battlerDef]);
        }
        break;
    default:
        break;
    }
}

static bool32 CanAbilityPreventStatLoss(enum Ability ability)
{
    switch (ability)
    {
    case ABILITY_CLEAR_BODY:
    case ABILITY_FULL_METAL_BODY:
    // case ABILITY_WHITE_SMOKE:
    case ABILITY_NULL:
    case ABILITY_PERMAFROST:
    case ABILITY_BITTER_LOGIC:
    case ABILITY_FROZEN_VALOR:
    case ABILITY_RADIANT_SUN:
    case ABILITY_STOLEN_SUNLIGHT:
    case ABILITY_MAX_LUMINOUS:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 CanAbilityPreventStatChange(enum Ability ability)
{
    switch (ability)
    {
    case ABILITY_NULL:
    case ABILITY_PERMAFROST:
    case ABILITY_BITTER_LOGIC:
    case ABILITY_FROZEN_VALOR:
    case ABILITY_MAX_LUMINOUS:
        return TRUE;
    default:
        return FALSE;
    }
}

static bool32 AreAllStatChangesPrevented(struct BattleCalcValues *cv, struct StatChange *st)
{
    // if (st->certain)
    //     return FALSE;

    if (CanAbilityPreventStatChange(cv->abilities[cv->battlerDef])
     || IsShieldsDownCoreProtected(cv->battlerDef, cv->abilities[cv->battlerDef]))
    {
        if (!st->onlyChecking)
        {
            MarkStatsAsDone(st, NUM_BATTLE_STATS);
            st->script = BattleScript_NullilyStatChange;
            gBattleScripting.battler = cv->battlerDef;
            gBattlerAbility = cv->battlerDef;
            gLastUsedAbility = cv->abilities[cv->battlerDef];
            RecordAbilityBattle(cv->battlerDef, gLastUsedAbility);
        }
        return TRUE;
    }

    if (gFieldStatuses & STATUS_FIELD_STATIC_ROOM)
    {
        if (!st->onlyChecking)
        {
            MarkStatsAsDone(st, NUM_BATTLE_STATS);
            st->script = BattleScript_StaticRoomPrevents;
            gBattleScripting.battler = cv->battlerDef;
        }
        return TRUE;
    }

    return FALSE;
}

static bool32 IsFullyAbsorbedByStamina(enum BattlerId battler, enum Ability ability, bool32 currentEntryAbsorbed)
{
    if (ability != ABILITY_STAMINA)
        return FALSE;

    bool32 anyAbsorbed = currentEntryAbsorbed;
    struct SpecialStatus *status = &gSpecialStatuses[battler];

    for (u32 i = 0; i < status->statStageAmount; i++)
    {
        if (status->statStageQueue[i].done)
            continue;
        if (status->statStageQueue[i].stage < 0)
            return FALSE;
        if (status->statStageQueue[i].stage == 0)
            anyAbsorbed = TRUE;
    }

    return anyAbsorbed;
}

static bool32 IsStaminaBlocked(struct BattleCalcValues *cv, struct StatChange *st)
{
    if (st->stage != 0 || !IsFullyAbsorbedByStamina(cv->battlerDef, cv->abilities[cv->battlerDef], TRUE))
        return FALSE;

    if (!st->onlyChecking)
    {
        for (u32 i = 0; i < st->statStageAmount; i++)
        {
            if (!st->statStageQueue[i].done && st->statStageQueue[i].stage == 0)
                st->statStageQueue[i].done = TRUE;
        }

        st->script = BattleScript_AbilityNoStatLoss;
        gBattleScripting.battler = cv->battlerDef;
        gBattlerAbility = cv->battlerDef;
        gLastUsedAbility = ABILITY_STAMINA;
        RecordAbilityBattle(cv->battlerDef, ABILITY_STAMINA);
    }

    return TRUE;
}

static bool32 AbilityPreventsSpecificStatDrop(u32 ability, u32 stat)
{
    switch (ability)
    {
    case ABILITY_ILLUMINATE:
        if (B_ILLUMINATE_EFFECT < GEN_9)
            return FALSE;
    // case ABILITY_KEEN_EYE:
    case ABILITY_MINDS_EYE:
        return stat == STAT_ACC;
    case ABILITY_HYPER_CUTTER:
    case ABILITY_TOUGH_CLAWS:
        return stat == STAT_ATK;
    // case ABILITY_BIG_PECKS:
    case ABILITY_BATTLE_ARMOR:
    case ABILITY_SOLID_ROCK:
        return stat == STAT_DEF;
    case ABILITY_HYPER_FOCUS:
        return stat == STAT_SPATK;
    default:
        return FALSE;
    }
}

bool32 ShouldDefiantCompetitiveActivate(enum BattlerId battler, enum Ability ability)
{
    enum BattleSide side = GetBattlerSide(battler);

    if (gBattleStruct->ignoreDefiant)
        return FALSE;

    switch (ability)
    {
    case ABILITY_DEFIANT:
        if (CompareStat(battler, GetHighestAtkStatId(battler), MAX_STAT_STAGE, CMP_EQUAL, ability))
            return FALSE;
        break;
    case ABILITY_STEADFAST:
        if (CompareStat(battler, STAT_SPEED, MAX_STAT_STAGE, CMP_EQUAL, ability))
            return FALSE;
        break;
    default:
        return FALSE;
    }

    if (GetConfig(B_DEFIANT_STICKY_WEB) >= GEN_9 || !gBattleScripting.stickyWebStatDrop)
        return TRUE;

    // only activate Defiant/Competitive if Web was setup by foe
    return gSideTimers[side].stickyWebBattlerSide != side;
}

u32 GetStatStage(u32 stat, const struct AdditionalEffect *additionalEffect)
{
    switch (stat)
    {
    case STAT_ATK:     return additionalEffect->attack;
    case STAT_DEF:     return additionalEffect->defense;
    case STAT_SPEED:   return additionalEffect->speed;
    case STAT_SPATK:   return additionalEffect->spAtk;
    case STAT_SPDEF:   return additionalEffect->spDef;
    case STAT_ACC:     return additionalEffect->accuracy;
    case STAT_EVASION: return additionalEffect->evasion;
    }

    return 0;
}

u32 GetDynamicStatValue(const struct AdditionalEffect *additionalEffect)
{
    if (additionalEffect->highest)
        return additionalEffect->highest;
    if (additionalEffect->lowest)
        return additionalEffect->lowest;
    return additionalEffect->random;
}

// excludedBits is for effects like Moody that have to choose two different stats
u32 GetEligibleStatBits(enum BattlerId battler, enum Ability ability, enum StatChangeType changeType, u32 numStats, u32 excludedBits)
{
    u32 bits = 0;
    u32 cmpTo = (changeType == STAT_CHANGE_MINUS) ? MIN_STAT_STAGE : MAX_STAT_STAGE;
    u32 cmpKind = (changeType == STAT_CHANGE_MINUS) ? CMP_GREATER_THAN : CMP_LESS_THAN;

    for (enum Stat stat = STAT_ATK; stat < numStats; stat++)
    {
        if (CompareStat(battler, stat, cmpTo, cmpKind, ability))
            bits |= 1u << stat;
    }

    return bits & ~excludedBits;
}

enum Stat PickStatFromBits(enum RandomTag tag, u32 bits)
{
    assertf(bits != 0);

    enum Stat stats[NUM_BATTLE_STATS];
    u32 availableStats = 0;

    for (enum Stat stat = STAT_ATK; stat < NUM_BATTLE_STATS; stat++)
    {
        if (bits & (1u << stat))
            stats[availableStats++] = stat;
    }

    return stats[RandomUniform(tag, 0, availableStats - 1)];
}

enum Stat PickRandomStat(enum BattlerId battler, enum Ability ability, enum StatChangeType changeType, u32 numStats)
{
    u32 bits = GetEligibleStatBits(battler, ability, changeType, numStats, 0);
    if (!bits)
        return NUM_BATTLE_STATS;
    
    return PickStatFromBits(RNG_RANDOM_STAT_UP, bits);
}

static enum Stat GetHighestOrLowestEligibleStat(enum BattlerId battler, enum Ability ability, enum SpecialStatTarget targetStat, enum StatChangeType changeType)
{
    bool32 wonderRoom = (gFieldStatuses & STATUS_FIELD_WONDER_ROOM) != 0;
    u32 cmpTo = (changeType == STAT_CHANGE_MINUS) ? MIN_STAT_STAGE : MAX_STAT_STAGE;
    u32 cmpKind = (changeType == STAT_CHANGE_MINUS) ? CMP_GREATER_THAN : CMP_LESS_THAN;
    enum Stat bestId = NUM_BATTLE_STATS;
    u32 bestVal = 0;

    for (enum Stat stat = STAT_ATK; stat < NUM_STATS; stat++)
    {
        u32 statVal;

        if (!CompareStat(battler, stat, cmpTo, cmpKind, ability))
            continue;

        switch (stat)
        {
        case STAT_ATK:
            statVal = gBattleMons[battler].attack;
            break;
        case STAT_DEF:
            statVal = wonderRoom ? gBattleMons[battler].spDefense : gBattleMons[battler].defense;
            break;
        case STAT_SPATK:
            statVal = gBattleMons[battler].spAttack;
            break;
        case STAT_SPDEF:
            statVal = wonderRoom ? gBattleMons[battler].defense : gBattleMons[battler].spDefense;
            break;
        case STAT_SPEED:
            statVal = gBattleMons[battler].speed;
            break;
        default:
            continue;
        }

        if (bestId == NUM_BATTLE_STATS || (targetStat == LOWEST_STAT ? statVal < bestVal : statVal > bestVal))
        {
            bestVal = statVal;
            bestId = stat;
        }
    }

    return bestId;
}

bool32 ResolveDynamicStat(enum BattlerId battler, enum Ability ability, const struct AdditionalEffect *additionalEffect, enum Stat *stat)
{
    enum StatChangeType changeType = STAT_CHANGE_PLUS;

    if (additionalEffect->moveEffect == STAT_CHANGE_EFFECT_MINUS || additionalEffect->moveEffect == MOVE_EFFECT_STAT_MINUS)
        changeType = STAT_CHANGE_MINUS;

    if (additionalEffect->highest)
    {
        *stat = GetHighestOrLowestEligibleStat(battler, ability, HIGHEST_STAT, changeType);
        return *stat != NUM_BATTLE_STATS;
    }

    if (additionalEffect->lowest)
    {
        *stat = GetHighestOrLowestEligibleStat(battler, ability, LOWEST_STAT, changeType);
        return *stat != NUM_BATTLE_STATS;
    }

    if (additionalEffect->random)
    {
        *stat = PickRandomStat(battler, ability, changeType, NUM_STATS);
        return *stat != NUM_BATTLE_STATS;
    }

    return FALSE;
}

static u32 GetNumPositiveStats(struct StatChange *st)
{
    u32 num = 0;
    for (u32 i = 0; i < st->statStageAmount; i++)
    {
        if (st->statStageQueue[i].stage > 0)
            num++;
    }
    return num;
}

static u32 GetNumNegativeStats(struct StatChange *st)
{
    u32 num = 0;
    for (u32 i = 0; i < st->statStageAmount; i++)
    {
        if (st->statStageQueue[i].stage < 0)
            num++;
    }
    return num;
}

void SetStatChange(enum BattlerId battler, enum Stat stat, s32 stage)
{
    gSpecialStatuses[battler].statStageQueue[gSpecialStatuses[battler].statStageAmount].stat = stat;
    gSpecialStatuses[battler].statStageQueue[gSpecialStatuses[battler].statStageAmount].stage = stage;
    gSpecialStatuses[battler].statStageAmount++;
}

// Used for stat change responses like Defiant and Mirror Armor
void SetStatChange2(enum BattlerId battler, enum Stat stat, s32 stage)
{
    gSpecialStatuses[battler].statStageQueue2[gSpecialStatuses[battler].statStageAmount2].stat = stat;
    gSpecialStatuses[battler].statStageQueue2[gSpecialStatuses[battler].statStageAmount2].stage = stage;
    gSpecialStatuses[battler].statStageAmount2++;
}

void ClearStatChangeValues(void)
{
    for (enum BattlerId battler = 0; battler < gBattlersCount; battler++)
    {
        memset(gSpecialStatuses[battler].statStageQueue, 0, sizeof(gSpecialStatuses[battler].statStageQueue));
        gSpecialStatuses[battler].statStageAmount = 0;
    }
    gBattleStruct->negativeAnimPlayed = 0;
    gBattleStruct->positiveAnimPlayed = 0;
    gBattleStruct->statChangeBattler  = 0;
}

void ClearOtherStatChangeValues(enum BattlerId battler)
{
    memset(gSpecialStatuses[battler].statStageQueue2, 0, sizeof(gSpecialStatuses[battler].statStageQueue2));
    gSpecialStatuses[battler].statStageAmount2 = 0;
    gBattleStruct->negativeAnimPlayed = 0;
    gBattleStruct->positiveAnimPlayed = 0;
}

void ClearBothStatChangeQueues(void)
{
    for (enum BattlerId battler = 0; battler < gBattlersCount; battler++)
    {
        memset(gSpecialStatuses[battler].statStageQueue2, 0, sizeof(gSpecialStatuses[battler].statStageQueue2));
        gSpecialStatuses[battler].statStageAmount2 = 0;
        memset(gSpecialStatuses[battler].statStageQueue, 0, sizeof(gSpecialStatuses[battler].statStageQueue));
        gSpecialStatuses[battler].statStageAmount = 0;
    }
    gBattleStruct->negativeAnimPlayed = 0;
    gBattleStruct->positiveAnimPlayed = 0;
    gBattleStruct->statChangeBattler  = 0;
}

bool32 CompareStat(enum BattlerId battler, enum Stat statId, u32 cmpTo, u32 cmpKind, enum Ability ability)
{
    bool32 ret = FALSE;
    u32 statValue = gBattleMons[battler].statStages[statId];

    // Because this command is used as a way of checking if a stat can be lowered/raised,
    // we need to do some modification at run-time.
    if (ability == ABILITY_CONTRARY
    || (GetBattlerHoldEffect(battler) == HOLD_EFFECT_GRISEOUS_ORB && GET_BASE_SPECIES_ID(gBattleMons[battler].species) == SPECIES_GIRATINA))
    {
        if (cmpKind == CMP_GREATER_THAN)
            cmpKind = CMP_LESS_THAN;
        else if (cmpKind == CMP_LESS_THAN)
            cmpKind = CMP_GREATER_THAN;

        if (cmpTo == MIN_STAT_STAGE)
            cmpTo = MAX_STAT_STAGE;
        else if (cmpTo == MAX_STAT_STAGE)
            cmpTo = MIN_STAT_STAGE;
    }


    switch (cmpKind)
    {
    case CMP_EQUAL:
        if (statValue == cmpTo)
            ret = TRUE;
        break;
    case CMP_NOT_EQUAL:
        if (statValue != cmpTo)
            ret = TRUE;
        break;
    case CMP_GREATER_THAN:
        if (statValue > cmpTo)
            ret = TRUE;
        break;
    case CMP_LESS_THAN:
        if (statValue < cmpTo)
            ret = TRUE;
        break;
    case CMP_COMMON_BITS:
        if (statValue & cmpTo)
            ret = TRUE;
        break;
    case CMP_NO_COMMON_BITS:
        if (!(statValue & cmpTo))
            ret = TRUE;
        break;
    }

    return ret;
}

static void SetAdditionalEffectsOnStatChange(struct BattleCalcValues *cv, struct StatChange *st)
{
    switch (cv->moveEffect)
    {
    case EFFECT_DEFENSE_CURL:
        if (!gBattleMons[cv->battlerDef].volatiles.defenseCurl)
            gBattleMons[cv->battlerDef].volatiles.defenseCurl = TRUE;
        break;
    case EFFECT_MINIMIZE: // Write a tests that fails on max stat
        if (!gBattleMons[cv->battlerDef].volatiles.minimize)
            gBattleMons[cv->battlerDef].volatiles.minimize = TRUE;
        break;
    case EFFECT_LIQUIFY:
        if (!gBattleMons[cv->battlerDef].volatiles.liquify)
            gBattleMons[cv->battlerDef].volatiles.liquify = TRUE;
        break;
    case EFFECT_COIL:
        if (!gBattleMons[cv->battlerDef].volatiles.coil)
            gBattleMons[cv->battlerDef].volatiles.coil = TRUE;
        break;
    case EFFECT_HOWL:
        if (!gProtectStructs[cv->battlerDef].howlActive)
            gProtectStructs[cv->battlerDef].howlActive = TRUE;
        break;
    case EFFECT_NO_RETREAT:
        if (!gBattleMons[cv->battlerDef].volatiles.escapePrevention)
        {
            gBattleMons[cv->battlerDef].volatiles.noRetreat = TRUE;
            gBattleMons[cv->battlerDef].volatiles.escapePrevention = TRUE;
            st->moveScript = BattleScript_NoRetreatMessage;
        }
        break;
    case EFFECT_AUTOTOMIZE:
        if (gBattleStruct->moveResultFlags[cv->battlerDef] & MOVE_RESULT_STAT_CHANGED
         && GetBattlerWeight(cv->battlerDef) > 1)
        {
            gBattleMons[cv->battlerDef].volatiles.autotomizeCount++;
            st->moveScript = BattleScript_AutotomizeMessage;
        }
        break;
    case EFFECT_HONE_EDGE:
    case EFFECT_NASTY_PLOT:
        if (!gBattleMons[cv->battlerDef].volatiles.dragonCheer)
        {
            // MULTISTRING_CHOOSER must be set in script
            gBattleMons[cv->battlerDef].volatiles.dragonCheer = TRUE;
            st->moveScript = BattleScript_FocusEnergyMessage;
        }
        break;
    case EFFECT_WORK_UP:
        if (TryResetBattlerNegativeStatChanges(cv->battlerDef))
        {
            // MULTISTRING_CHOOSER must be set in script
            st->moveScript = BattleScript_WorkUpMessage;
        }
        break;
    default:
        break;
    }
}

/*
  There might be a better solution without this function
  The problems this fixes:
  1. Multiply failure pop ups
  2. Since we don't mark battlers as doesn't affect foe, they still get a stat drop
*/
static void MarkStatsAsDone(struct StatChange *st, u32 stat)
{
    for (u32 i = 0; i < st->statStageAmount; i++)
    {
        if (st->statStageQueue[i].stat != stat && stat != NUM_BATTLE_STATS)
            continue;

        st->statStageQueue[i].done = TRUE;
    }
}

// The speed boost case should be removed from here but would currently create a regression. Usage now only limited to ai
bool32 CanStatChange(struct BattleCalcValues *cv, struct StatChange *st)
{
    if (st->stage < 0)
    {
        // Special Case for speed boost since shouldn't try to lower opposing stats on speed boost
        // Also for user it might make sense to lower the stat. Regardless this whole check is better suited for CheckViability since the move wouldn't fail in this case
        if (cv->battlerAtk != cv->battlerDef && st->stat == STAT_SPEED && st->stage < 0 && cv->abilities[cv->battlerDef] == ABILITY_SPEED_BOOST)
            return FALSE;

        if (CompareStat(cv->battlerDef, st->stat, MIN_STAT_STAGE, CMP_EQUAL, ABILITY_NONE))
            return FALSE;

        if (st->stage < 0 && CanDecreaseStat(cv, st) == STAT_CHANGE_DIDNT_WORK)
            return FALSE;
    }
    else
    {
        if (CompareStat(cv->battlerDef, st->stat, MAX_STAT_STAGE, CMP_EQUAL, ABILITY_NONE))
            return FALSE;
    }

    return TRUE;
}

bool32 IsStatChangeStatusMove(enum Move move, bool32 (*isStatChange)(const struct AdditionalEffect *effect))
{
    u32 numAdditionalEffects = GetMoveAdditionalEffectCount(move);
    for (u32 i = 0; i < numAdditionalEffects; i++)
    {
        const struct AdditionalEffect *effect = GetMoveAdditionalEffectById(move, i);
        if (isStatChange(effect))
            return TRUE;
    }
    return FALSE;
}

bool32 IsAtkStatUpMove(const struct AdditionalEffect *effect)
{
    if (effect->moveEffect != STAT_CHANGE_EFFECT_PLUS)
        return FALSE;

    return effect->attack;
}

bool32 IsAtkSpAtkStatUpMove(const struct AdditionalEffect *effect)
{
    if (effect->moveEffect != STAT_CHANGE_EFFECT_PLUS)
        return FALSE;

    return effect->attack || effect->spAtk;
}

bool32 IsDefSpDefStatUpMove(const struct AdditionalEffect *effect)
{
    if (effect->moveEffect != STAT_CHANGE_EFFECT_PLUS)
        return FALSE;

    return effect->defense || effect->spDef;
}

bool32 IsAccDownEvasionUpStatChangeMove(const struct AdditionalEffect *effect)
{
    switch (effect->moveEffect)
    {
    case STAT_CHANGE_EFFECT_PLUS:
        return effect->evasion;
    case STAT_CHANGE_EFFECT_MINUS:
        return effect->accuracy;
    default:
        break;
    }

    return FALSE;
}
