LavaridgeTown_Gym_1F_MapScripts::
# 2 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 4 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_COLE
	goto_if 0, LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_GERALD
	goto_if 0, LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 10 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_AXLE
	goto_if 0, LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 13 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_DANIELLE
	goto_if 0, LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
	end

LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
	goto LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 8 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
	goto LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 11 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
	goto LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 14 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
	goto LavaridgeTown_Gym_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10


LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
# 22 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
# 23 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 0
# 24 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 0
# 25 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 0
# 26 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_F, 0
# 27 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_COLE
	goto_if 0, LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_2
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_1:
# 30 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_GERALD
	goto_if 0, LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_5
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_4:
# 33 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_AXLE
	goto_if 0, LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_8
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_7:
# 36 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_DANIELLE
	goto_if 0, LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_11
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_10:
	return

LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_2:
# 28 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
	goto LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_1

LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_5:
# 31 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 1
	goto LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_4

LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_8:
# 34 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 1
	goto LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_7

LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_11:
# 37 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 1
	goto LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars_10


LavaridgeTown_Gym_1F_EventScript_Flannery::
# 43 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LavaridgeTown_Gym_1F_EventScript_Flannery_2
# 53 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checktrainerflag TRAINER_WATTSON_2
	goto_if 1, LavaridgeTown_Gym_1F_EventScript_Flannery_5
# 58 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
# 59 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_SURF, LavaridgeTown_Gym_1F_EventScript_Flannery_11
# 67 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
	release_end

LavaridgeTown_Gym_1F_EventScript_Flannery_2:
# 44 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_FLANNERY_FINAL, LavaridgeTown_Gym_1F_EventScript_Flannery_8
# 48 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryFinalIntro, MSGBOX_DEFAULT
# 49 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryFinalDefeat
# 50 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostFinal, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Flannery_5:
# 54 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
# 55 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Flannery_8:
# 45 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostFinal, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Flannery_11:
	giveitem ITEM_HM_SURF
# 0 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Flannery_14
LavaridgeTown_Gym_1F_EventScript_Flannery_13:
# 63 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 64 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
	release_end

LavaridgeTown_Gym_1F_EventScript_Flannery_14:
# 61 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_13


LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
# 72 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
# 73 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmessage
# 74 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 75 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
# 76 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
# 77 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 78 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 79 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 80 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_2
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_1:
# 83 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 4
# 84 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 85 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 86 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
# 87 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 88 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
	giveitem ITEM_HM_SURF
# 0 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_5
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_4:
# 92 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 93 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 94 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 95 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 96 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 97 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
# 98 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitfanfare
# 99 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 100 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 101 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
	release_end

LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_2:
# 81 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_ReadyPetalburgGymForBattle
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_1

LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_5:
# 90 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto Common_EventScript_BagIsFull
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated_4


LavaridgeTown_Gym_1F_EventScript_Cole::
# 106 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_lavaridge LOCALID_COLE, TRAINER_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 107 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
	end


LavaridgeTown_Gym_EventScript_CheckTrainerScript::
# 112 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 113 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 114 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	special ShouldTryGetTrainerScript
# 115 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LavaridgeTown_Gym_EventScript_CheckTrainerScript_2
LavaridgeTown_Gym_EventScript_CheckTrainerScript_1:
	end

LavaridgeTown_Gym_EventScript_CheckTrainerScript_2:
# 116 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto EventScript_GotoTrainerScript
	goto LavaridgeTown_Gym_EventScript_CheckTrainerScript_1


LavaridgeTown_Gym_1F_EventScript_Axle::
# 122 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_lavaridge LOCALID_AXLE, TRAINER_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 123 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
	end


LavaridgeTown_Gym_B1F_EventScript_Keegan::
# 128 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_lavaridge LOCALID_KEEGAN, TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganIntro, LavaridgeTown_Gym_B1F_Text_KeeganDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 129 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
	end


LavaridgeTown_Gym_1F_EventScript_Danielle::
# 134 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_lavaridge LOCALID_DANIELLE, TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 135 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
	end


LavaridgeTown_Gym_1F_EventScript_Gerald::
# 140 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_lavaridge LOCALID_GERALD, TRAINER_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 141 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
	end


LavaridgeTown_Gym_B1F_EventScript_Jace::
# 146 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_lavaridge LOCALID_JACE, TRAINER_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 147 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
	end


LavaridgeTown_Gym_B1F_EventScript_Eli::
# 158 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_lavaridge LOCALID_ELI, TRAINER_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 159 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
	end


LavaridgeTown_Gym_B1F_EventScript_Marlene::
# 164 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_lavaridge LOCALID_MARLENE, TRAINER_MARLENE, LavaridgeTown_Gym_B1F_Text_MarleneIntro, LavaridgeTown_Gym_B1F_Text_MarleneDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 165 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
	end


LavaridgeTown_Gym_1F_EventScript_GymGuide::
# 170 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock_faceplayer
# 171 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_OVERHEAT, LavaridgeTown_Gym_1F_EventScript_GymGuide_2
# 174 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuide_3
# 185 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
LavaridgeTown_Gym_1F_EventScript_GymGuide_1:
	release_end

LavaridgeTown_Gym_1F_EventScript_GymGuide_2:
# 172 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	goto LavaridgeTown_Gym_1F_EventScript_GymGuide_1

LavaridgeTown_Gym_1F_EventScript_GymGuide_3:
# 175 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 176 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_OVERHEAT, LavaridgeTown_Gym_1F_EventScript_GymGuide_7
	goto LavaridgeTown_Gym_1F_EventScript_GymGuide_1

LavaridgeTown_Gym_1F_EventScript_GymGuide_7:
	giveitem ITEM_TM_MYSTICAL_FIRE
# 0 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_GymGuide_10
LavaridgeTown_Gym_1F_EventScript_GymGuide_9:
# 180 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 181 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_OVERHEAT
	goto LavaridgeTown_Gym_1F_EventScript_GymGuide_1

LavaridgeTown_Gym_1F_EventScript_GymGuide_10:
# 178 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto LavaridgeTown_Gym_1F_EventScript_GymGuide_9


LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
# 191 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 192 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end


LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
# 197 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 198 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end


LavaridgeTown_Gym_1F_EventScript_GymStatue::
# 203 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatue_2
# 206 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
LavaridgeTown_Gym_1F_EventScript_GymStatue_1:
# 208 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
	end

LavaridgeTown_Gym_1F_EventScript_GymStatue_2:
# 204 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue_1


LavaridgeTown_Gym_1F_Text_GymGuideAdvice::
# 212 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "LAVARIDGE's GYM LEADER FLANNERY\n"
	.string "uses FIRE-type POKéMON.\p"
	.string "Her passion for POKéMON burns stronger\n"
	.string "and hotter than a volcano.\p"
	.string "Don't get too close to her--you'll burn!\n"
	.string "Hose her down with water and then\l"
	.string "go for it!$"

LavaridgeTown_Gym_1F_Text_GymGuidePostVictory::
# 227 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yow! That was a scorching-hot battle!$"

LavaridgeTown_Gym_1F_Text_ColeIntro::
# 231 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Owowowowow!\n"
	.string "Yikes, it's hot!$"

LavaridgeTown_Gym_1F_Text_ColeDefeat::
# 236 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm blinded by sweat in my eyes…$"

LavaridgeTown_Gym_1F_Text_ColePostBattle::
# 240 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Being buried in hot sand promotes\n"
	.string "circulation.\p"
	.string "It's effective for healing pain in\n"
	.string "your joints.$"

LavaridgeTown_Gym_1F_Text_AxleIntro::
# 248 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm trying to relieve my stress.\n"
	.string "Don't come along and stress me out!$"

LavaridgeTown_Gym_1F_Text_AxleDefeat::
# 253 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hope FLANNERY flames you good!$"

LavaridgeTown_Gym_1F_Text_AxlePostBattle::
# 257 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Haaah… Whew…\p"
	.string "If you spend too much time buried in\n"
	.string "hot sand, it tuckers you out…$"

LavaridgeTown_Gym_B1F_Text_KeeganIntro::
# 264 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You must be getting tired by now.\n"
	.string "You'd like to rest in the hot sand,\l"
	.string "wouldn't you?\p"
	.string "But you should know that maintaining\n"
	.string "your willpower is an important ability\l"
	.string "for all TRAINERS.$"

LavaridgeTown_Gym_B1F_Text_KeeganDefeat::
# 274 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Play with fire, and be burned…$"

LavaridgeTown_Gym_B1F_Text_KeeganPostBattle::
# 278 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your skill is real…\n"
	.string "But our LEADER FLANNERY is strong.\p"
	.string "If you don't watch yourself, you'll be\n"
	.string "burned seriously.$"

LavaridgeTown_Gym_1F_Text_GeraldIntro::
# 286 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Can your POKéMON withstand\n"
	.string "392-degree heat?$"

LavaridgeTown_Gym_1F_Text_GeraldDefeat::
# 291 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It didn't burn hotly enough…$"

LavaridgeTown_Gym_1F_Text_GeraldPostBattle::
# 295 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The temperature of magma is\n"
	.string "392 degrees.\p"
	.string "Your POKéMON beat me, so they should\n"
	.string "easily survive in magma.$"

LavaridgeTown_Gym_1F_Text_DanielleIntro::
# 303 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Um…\n"
	.string "Okay, I'll battle with you.$"

LavaridgeTown_Gym_1F_Text_DanielleDefeat::
# 308 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, but you're too strong.$"

LavaridgeTown_Gym_1F_Text_DaniellePostBattle::
# 312 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm going to be a pretty and strong\n"
	.string "TRAINER just like FLANNERY.$"

LavaridgeTown_Gym_B1F_Text_JaceIntro::
# 317 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Come on, get with it!\n"
	.string "Let's go before my feelings cool!$"

LavaridgeTown_Gym_B1F_Text_JaceDefeat::
# 322 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's so hot, and yet my heart is\n"
	.string "clutched by ice…$"

LavaridgeTown_Gym_B1F_Text_JacePostBattle::
# 327 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The way the battling spirit burns\n"
	.string "within you, you may stand a chance\l"
	.string "against our LEADER.$"

LavaridgeTown_Gym_B1F_Text_JeffIntro::
# 333 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "See how the flames blaze wildly?\n"
	.string "They flare in anticipation of my win!$"

LavaridgeTown_Gym_B1F_Text_JeffDefeat::
# 338 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Something didn't go right.$"

LavaridgeTown_Gym_B1F_Text_JeffPostBattle::
# 342 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, so what? I say so what?\n"
	.string "I can walk on hot coals barefoot!\p"
	.string "…Don't even think about trying it!$"

LavaridgeTown_Gym_B1F_Text_EliIntro::
# 349 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "As much as I love mountains,\n"
	.string "I especially love volcanoes.$"

LavaridgeTown_Gym_B1F_Text_EliDefeat::
# 354 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, it seems to me I lost without\n"
	.string "ever being in control.$"

LavaridgeTown_Gym_B1F_Text_EliPostBattle::
# 359 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I stay here because I became a fan\n"
	.string "of FLANNERY's power.\p"
	.string "Hehehehe.$"

LavaridgeTown_Gym_B1F_Text_MarleneIntro::
# 366 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You've disturbed my meditation…\n"
	.string "You'll be punished for it.$"

LavaridgeTown_Gym_B1F_Text_MarleneDefeat::
# 371 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You've broken my concentration!$"

LavaridgeTown_Gym_B1F_Text_MarlenePostBattle::
# 375 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I was meditating with my POKéMON.\n"
	.string "But this place isn't very peaceful…$"

LavaridgeTown_Gym_1F_Text_FlanneryIntro::
# 380 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Welcome… No, wait.\p"
	.string "Puny TRAINER, how good to see you've\n"
	.string "made it here!\p"
	.string "I have been entrusted with the…\n"
	.string "No, wait.\p"
	.string "I am FLANNERY, and I'm the GYM\n"
	.string "LEADER here!\p"
	.string "Uh…\n"
	.string "Dare not underestimate me, though\l"
	.string "I have been LEADER only a short time!\p"
	.string "With skills inherited from my grand-\n"
	.string "father, I shall, uh…demonstrate the\l"
	.string "hot moves we have honed on this land!$"

LavaridgeTown_Gym_1F_Text_FlanneryDefeat::
# 401 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh…\n"
	.string "I guess I was trying too hard…\p"
	.string "I… I've only recently become\n"
	.string "a GYM LEADER.\p"
	.string "I tried too hard to be someone\n"
	.string "I'm not.\p"
	.string "I have to do things my natural way. If\n"
	.string "I don't, my POKéMON will be confused.\p"
	.string "Thanks for teaching me that.\n"
	.string "For that, you deserve this.$"

LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge::
# 418 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER} received the HEAT BADGE\n"
	.string "from FLANNERY.$"

LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis::
# 423 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you have a HEAT BADGE, all POKéMON\n"
	.string "up to Level 50, even those you get in\l"
	.string "trades from other people, will obey\l"
	.string "you completely.\p"
	.string "And, it lets POKéMON use the HM move\n"
	.string "STRENGTH outside of battle.\p"
	.string "This is a token of my appreciation.\n"
	.string "Don't be shy about taking it!$"

LavaridgeTown_Gym_1F_Text_ExplainOverheat::
# 436 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That TM50 contains OVERHEAT.\p"
	.string "That move inflicts serious damage on\n"
	.string "the opponent.\p"
	.string "But it also sharply cuts the SP. ATK\n"
	.string "of the POKéMON using it. It might not\l"
	.string "be suitable for longer battles.$"

LavaridgeTown_Gym_1F_Text_RegisteredFlannery::
# 447 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Registered GYM LEADER FLANNERY\n"
	.string "in the POKéNAV.$"

LavaridgeTown_Gym_1F_Text_FlanneryPostBattle::
# 452 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your power reminds me of someone…\p"
	.string "Oh! I know! You battle like NORMAN,\n"
	.string "the GYM LEADER of PETALBURG.$"

LavaridgeTown_Gym_1F_Text_GymStatue::
# 459 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM$"

LavaridgeTown_Gym_1F_Text_GymStatueCertified::
# 463 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\p"
	.string "FLANNERY'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

LavaridgeTown_Gym_1F_Text_FlanneryPreRematch::
# 470 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{SPEAKER NAME_FLANNERY}Losing a battle isn't going\n"
	.string "to deflate me.\p"
	.string "I love POKéMON.\n"
	.string "I love to battle.\l"
	.string "And… I love this GYM!\p"
	.string "Let's exchange superhot moves\n"
	.string "in another battle!$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat::
# 482 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Whew!\n"
	.string "On the verge of eruption!$"

LavaridgeTown_Gym_1F_Text_FlanneryPostRematch::
# 487 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{SPEAKER NAME_FLANNERY}I lost the match,\n"
	.string "but I'm completely satisfied.\p"
	.string "It's not often I get to enjoy a battle\n"
	.string "this heated.\p"
	.string "Let's have another one like this\n"
	.string "again sometime!$"

LavaridgeTown_Gym_1F_Text_FlanneryFinalIntro::
# 498 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: Losing a battle isn't going\n"
	.string "to deflate me.\p"
	.string "I love POKéMON.\n"
	.string "I love to battle.\l"
	.string "And… I love this GYM!\p"
	.string "Let's exchange superhot moves\n"
	.string "in another battle!$"

LavaridgeTown_Gym_1F_Text_FlanneryFinalDefeat::
# 510 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Whew!\n"
	.string "On the verge of eruption!$"

LavaridgeTown_Gym_1F_Text_FlanneryPostFinal::
# 515 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "FLANNERY: I lost the match,\n"
	.string "but I'm completely satisfied.\p"
	.string "It's not often I get to enjoy a battle\n"
	.string "this heated.\p"
	.string "Let's have another one like this\n"
	.string "again sometime!$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons::
# 526 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{SPEAKER NAME_FLANNERY}Losing a battle isn't going\n"
	.string "to deflate me.\p"
	.string "I love POKéMON.\n"
	.string "I love to battle.\l"
	.string "And… I love this GYM!\p"
	.string "Let's exchange superhot moves\n"
	.string "in another battle!\p"
	.string "Oh, wait. Do you only have one POKéMON\n"
	.string "that can battle?\p"
	.string "I hate to say this, but when you come\n"
	.string "see me, bring at least two POKéMON.$"
