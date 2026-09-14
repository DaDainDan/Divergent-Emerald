Route119_MapScripts::
# 2 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route119_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route119_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Route119/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route119_MapScripts_MAP_SCRIPT_ON_RESUME_3
Route119_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

Route119_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Route119_MapScripts_MAP_SCRIPT_ON_RESUME_1

Route119_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route119_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto Route119_MapScripts_MAP_SCRIPT_ON_RESUME_1

Route119_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 10 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 11 "data/maps/Route119/scripts.pory"
	compare VAR_WEATHER_INSTITUTE_STATE, 1
	goto_if_eq Route119_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route119_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/Route119/scripts.pory"
	special SetRoute119Weather
# 17 "data/maps/Route119/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 18 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 104
	goto_if_ge Route119_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 21 "data/maps/Route119/scripts.pory"
	call Route119_WildSet2Trigger
Route119_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

Route119_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 13 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
# 14 "data/maps/Route119/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
	goto Route119_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route119_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 19 "data/maps/Route119/scripts.pory"
	call Route119_WildSet1Trigger
	goto Route119_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


Route119_WildSet1Trigger::
# 28 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_WILD_SET, 1
	return


Route119_WildSet2Trigger::
# 33 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_WILD_SET, 0
	return


Route119_EventScript_RivalTrigger1::
# 38 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 1
# 39 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
	end


Route119_EventScript_RivalTrigger2::
# 44 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 2
# 45 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
	end


Route119_EventScript_RivalEncounter::
# 50 "data/maps/Route119/scripts.pory"
	lockall
# 51 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL_ON_BIKE
	checkplayergender
# 0 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route119_EventScript_RivalEncounter_2
# 55 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
Route119_EventScript_RivalEncounter_1:
# 57 "data/maps/Route119/scripts.pory"
	delay 65
# 58 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 59 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_7
# 60 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_8
Route119_EventScript_RivalEncounter_5:
# 62 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 64 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route119/scripts.pory"
	delay 30
# 66 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 67 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalEncounter_11
# 68 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalEncounter_12
Route119_EventScript_RivalEncounter_9:
# 70 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 71 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL
# 72 "data/maps/Route119/scripts.pory"
	delay 30
	checkplayergender
# 0 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route119_EventScript_RivalEncounter_14
# 76 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleBrendan
Route119_EventScript_RivalEncounter_13:
	end

Route119_EventScript_RivalEncounter_2:
# 53 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto Route119_EventScript_RivalEncounter_1

Route119_EventScript_RivalEncounter_7:
# 59 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_EventScript_RivalEncounter_Movement_0
	goto Route119_EventScript_RivalEncounter_5

Route119_EventScript_RivalEncounter_8:
# 60 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_EventScript_RivalEncounter_Movement_1
	goto Route119_EventScript_RivalEncounter_5

Route119_EventScript_RivalEncounter_11:
# 67 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetRivalPos1
	goto Route119_EventScript_RivalEncounter_9

Route119_EventScript_RivalEncounter_12:
# 68 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetRivalPos2
	goto Route119_EventScript_RivalEncounter_9

Route119_EventScript_RivalEncounter_14:
# 74 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_BattleMay
	goto Route119_EventScript_RivalEncounter_13


Route119_EventScript_BattleMay::
# 82 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayIntro, MSGBOX_DEFAULT
# 83 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 84 "data/maps/Route119/scripts.pory"
	case PC_CHOSE_TREECKO, Route119_EventScript_BattleMay_3
# 85 "data/maps/Route119/scripts.pory"
	case PC_CHOSE_TORCHIC, Route119_EventScript_BattleMay_4
# 86 "data/maps/Route119/scripts.pory"
	case PC_CHOSE_MUDKIP, Route119_EventScript_BattleMay_5
Route119_EventScript_BattleMay_1:
# 88 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayPresentForYou, MSGBOX_DEFAULT
	giveitem ITEM_UTILITY_UMBRELLA
# 0 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route119_EventScript_BattleMay_7
Route119_EventScript_BattleMay_6:
# 92 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 93 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayExplainFly, MSGBOX_DEFAULT
# 94 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
	end

Route119_EventScript_BattleMay_3:
# 84 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_Text_MayDefeat
	goto Route119_EventScript_BattleMay_1

Route119_EventScript_BattleMay_4:
# 85 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route119_Text_MayDefeat
	goto Route119_EventScript_BattleMay_1

Route119_EventScript_BattleMay_5:
# 86 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, Route119_Text_MayDefeat
	goto Route119_EventScript_BattleMay_1

Route119_EventScript_BattleMay_7:
# 90 "data/maps/Route119/scripts.pory"
	goto Common_EventScript_BagIsFull
	goto Route119_EventScript_BattleMay_6


Route119_EventScript_BattleBrendan::
# 99 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIntro, MSGBOX_DEFAULT
# 100 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 101 "data/maps/Route119/scripts.pory"
	case PC_CHOSE_TREECKO, Route119_EventScript_BattleBrendan_3
# 102 "data/maps/Route119/scripts.pory"
	case PC_CHOSE_TORCHIC, Route119_EventScript_BattleBrendan_4
# 103 "data/maps/Route119/scripts.pory"
	case PC_CHOSE_MUDKIP, Route119_EventScript_BattleBrendan_5
Route119_EventScript_BattleBrendan_1:
# 105 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIllGiveYouThis, MSGBOX_DEFAULT
	giveitem ITEM_UTILITY_UMBRELLA
# 0 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route119_EventScript_BattleBrendan_7
Route119_EventScript_BattleBrendan_6:
# 109 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 110 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanExplainFly, MSGBOX_DEFAULT
# 111 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
	end

Route119_EventScript_BattleBrendan_3:
# 101 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route119_Text_BrendanDefeat
	goto Route119_EventScript_BattleBrendan_1

Route119_EventScript_BattleBrendan_4:
# 102 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route119_Text_BrendanDefeat
	goto Route119_EventScript_BattleBrendan_1

Route119_EventScript_BattleBrendan_5:
# 103 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_Text_BrendanDefeat
	goto Route119_EventScript_BattleBrendan_1

Route119_EventScript_BattleBrendan_7:
# 107 "data/maps/Route119/scripts.pory"
	goto Common_EventScript_BagIsFull
	goto Route119_EventScript_BattleBrendan_6


Route119_EventScript_RivalExitScottArrive::
# 116 "data/maps/Route119/scripts.pory"
	closemessage
# 117 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 118 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalExitScottArrive_3
# 119 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalExitScottArrive_4
Route119_EventScript_RivalExitScottArrive_1:
# 121 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL
# 122 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 123 "data/maps/Route119/scripts.pory"
	delay 30
# 124 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 125 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalExitScottArrive_7
# 128 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalExitScottArrive_8
Route119_EventScript_RivalExitScottArrive_5:
# 132 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_RIVAL_ON_BIKE
# 134 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_STATE, 1
# 135 "data/maps/Route119/scripts.pory"
	savebgm MUS_DUMMY
# 136 "data/maps/Route119/scripts.pory"
	fadedefaultbgm
# 137 "data/maps/Route119/scripts.pory"
	delay 60
# 138 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 139 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalExitScottArrive_11
# 140 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalExitScottArrive_12
Route119_EventScript_RivalExitScottArrive_9:
# 142 "data/maps/Route119/scripts.pory"
	addobject LOCALID_ROUTE119_SCOTT
# 143 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_EventScript_RivalExitScottArrive_Movement_4
# 144 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 145 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 146 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ScottWayToGoBeSeeingYou, MSGBOX_DEFAULT
# 147 "data/maps/Route119/scripts.pory"
	closemessage
# 148 "data/maps/Route119/scripts.pory"
	switch VAR_TEMP_1
# 149 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_RivalExitScottArrive_15
# 150 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_RivalExitScottArrive_16
Route119_EventScript_RivalExitScottArrive_13:
# 152 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 153 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_ROUTE119_SCOTT
# 154 "data/maps/Route119/scripts.pory"
	releaseall
	end

Route119_EventScript_RivalExitScottArrive_3:
# 118 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetRivalPos1
	goto Route119_EventScript_RivalExitScottArrive_1

Route119_EventScript_RivalExitScottArrive_4:
# 119 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_SetRivalPos2
	goto Route119_EventScript_RivalExitScottArrive_1

Route119_EventScript_RivalExitScottArrive_7:
# 126 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_EventScript_RivalExitScottArrive_Movement_0
# 127 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_EventScript_RivalExitScottArrive_Movement_1
	goto Route119_EventScript_RivalExitScottArrive_5

Route119_EventScript_RivalExitScottArrive_8:
# 129 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_EventScript_RivalExitScottArrive_Movement_2
# 130 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_RIVAL_ON_BIKE, Route119_EventScript_RivalExitScottArrive_Movement_3
	goto Route119_EventScript_RivalExitScottArrive_5

Route119_EventScript_RivalExitScottArrive_11:
# 139 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_SCOTT, 27, 25
	goto Route119_EventScript_RivalExitScottArrive_9

Route119_EventScript_RivalExitScottArrive_12:
# 140 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_SCOTT, 28, 25
	goto Route119_EventScript_RivalExitScottArrive_9

Route119_EventScript_RivalExitScottArrive_15:
# 149 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_EventScript_RivalExitScottArrive_Movement_5
	goto Route119_EventScript_RivalExitScottArrive_13

Route119_EventScript_RivalExitScottArrive_16:
# 150 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_ROUTE119_SCOTT, Route119_EventScript_RivalExitScottArrive_Movement_6
	goto Route119_EventScript_RivalExitScottArrive_13


Route119_EventScript_SetRivalPos1::
# 159 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 25, 32
# 160 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 25, 32
	return


Route119_EventScript_SetRivalPos2::
# 165 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL, 26, 32
# 166 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_ROUTE119_RIVAL_ON_BIKE, 26, 32
	return


Route119_EventScript_CyclingTriathleteM::
# 171 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
	end


Route119_EventScript_RouteSignFortree::
# 176 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
	end


Route119_EventScript_WeatherInstituteSign::
# 181 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
	end


Route119_EventScript_MoveTutor::
# 186 "data/maps/Route119/scripts.pory"
	lock_faceplayer
# 187 "data/maps/Route119/scripts.pory"
	goto_if_unset FLAG_MET_ROUTE_119_FERAL_TUTOR, Route119_EventScript_MoveTutor_2
Route119_EventScript_MoveTutor_1:
# 191 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 192 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_FERAL_MOVE_TUTOR
# 193 "data/maps/Route119/scripts.pory"
	setvar VAR_0x8006, 0
# 194 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_ChooseFeralMove
	end

Route119_EventScript_MoveTutor_2:
# 188 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 189 "data/maps/Route119/scripts.pory"
	setflag FLAG_MET_ROUTE_119_FERAL_TUTOR
	goto Route119_EventScript_MoveTutor_1


Route119_EventScript_ChooseFeralMove::
# 199 "data/maps/Route119/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_FERAL_MOVE_TUTOR
# 200 "data/maps/Route119/scripts.pory"
	special ShowScrollableMultichoice
# 201 "data/maps/Route119/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 202 "data/maps/Route119/scripts.pory"
	switch VAR_RESULT
# 203 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_ChooseFeralMove_3
# 204 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_ChooseFeralMove_4
# 205 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_ChooseFeralMove_5
# 206 "data/maps/Route119/scripts.pory"
	case 3, Route119_EventScript_ChooseFeralMove_6
# 207 "data/maps/Route119/scripts.pory"
	case 4, Route119_EventScript_ChooseFeralMove_7
# 208 "data/maps/Route119/scripts.pory"
	case 5, Route119_EventScript_ChooseFeralMove_8
# 209 "data/maps/Route119/scripts.pory"
	case 6, Route119_EventScript_ChooseFeralMove_9
# 210 "data/maps/Route119/scripts.pory"
	case 7, Route119_EventScript_ChooseFeralMove_10
# 211 "data/maps/Route119/scripts.pory"
	case 8, Route119_EventScript_ChooseFeralMove_11
# 212 "data/maps/Route119/scripts.pory"
	case MULTI_B_PRESSED, Route119_EventScript_ChooseFeralMove_11
Route119_EventScript_ChooseFeralMove_1:
# 215 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_ConfirmMoveSelection
	end

Route119_EventScript_ChooseFeralMove_3:
# 203 "data/maps/Route119/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_CLAW
	goto Route119_EventScript_ChooseFeralMove_1

Route119_EventScript_ChooseFeralMove_4:
# 204 "data/maps/Route119/scripts.pory"
	setvar VAR_0x8005, MOVE_METAL_CLAW
	goto Route119_EventScript_ChooseFeralMove_1

Route119_EventScript_ChooseFeralMove_5:
# 205 "data/maps/Route119/scripts.pory"
	setvar VAR_0x8005, MOVE_SHADOW_CLAW
	goto Route119_EventScript_ChooseFeralMove_1

Route119_EventScript_ChooseFeralMove_6:
# 206 "data/maps/Route119/scripts.pory"
	setvar VAR_0x8005, MOVE_SICKLE_CLAW
	goto Route119_EventScript_ChooseFeralMove_1

Route119_EventScript_ChooseFeralMove_7:
# 207 "data/maps/Route119/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto Route119_EventScript_ChooseFeralMove_1

Route119_EventScript_ChooseFeralMove_8:
# 208 "data/maps/Route119/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto Route119_EventScript_ChooseFeralMove_1

Route119_EventScript_ChooseFeralMove_9:
# 209 "data/maps/Route119/scripts.pory"
	setvar VAR_0x8005, MOVE_POISON_FANG
	goto Route119_EventScript_ChooseFeralMove_1

Route119_EventScript_ChooseFeralMove_10:
# 210 "data/maps/Route119/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto Route119_EventScript_ChooseFeralMove_1

Route119_EventScript_ChooseFeralMove_11:
# 213 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_ExitTutorMoveSelect
	goto Route119_EventScript_ChooseFeralMove_1


Route119_EventScript_ConfirmMoveSelection::
# 220 "data/maps/Route119/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 221 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_MoveTutor_Text_0, MSGBOX_YESNO
# 222 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route119_EventScript_ConfirmMoveSelection_2
Route119_EventScript_ConfirmMoveSelection_1:
	checkitem ITEM_TINY_MUSHROOM
# 0 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route119_EventScript_ConfirmMoveSelection_5
# 242 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 243 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_ExitTutorMoveSelect
	end

Route119_EventScript_ConfirmMoveSelection_2:
# 223 "data/maps/Route119/scripts.pory"
	message Route119_EventScript_MoveTutor_Text_0
# 224 "data/maps/Route119/scripts.pory"
	waitmessage
# 225 "data/maps/Route119/scripts.pory"
	setvar VAR_0x8006, 1
# 226 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_ChooseFeralMove
	goto Route119_EventScript_ConfirmMoveSelection_1

Route119_EventScript_ConfirmMoveSelection_5:
# 229 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 230 "data/maps/Route119/scripts.pory"
	fadescreen FADE_TO_BLACK
# 231 "data/maps/Route119/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 232 "data/maps/Route119/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 233 "data/maps/Route119/scripts.pory"
	waitstate
# 234 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route119_EventScript_ConfirmMoveSelection_8
# 238 "data/maps/Route119/scripts.pory"
	msgbox Route119_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 239 "data/maps/Route119/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM, 1
	release_end

Route119_EventScript_ConfirmMoveSelection_8:
# 235 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


Route119_EventScript_ExitTutorMoveSelect::
# 248 "data/maps/Route119/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 249 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


Route119_EventScript_Brent::
# 258 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
# 259 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Elias::
# 264 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_ELIAS, Route119_Text_EliasIntro, Route119_Text_EliasDefeat
# 265 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_EliasPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Taylor::
# 270 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
# 271 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Jason::
# 276 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_JASON, Route119_Text_JasonIntro, Route119_Text_JasonDefeat
# 277 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JasonPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Greg::
# 282 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_GREG, Route119_Text_GregIntro, Route119_Text_GregDefeat
# 283 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Kent::
# 288 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_KENT, Route119_Text_KentIntro, Route119_Text_KentDefeat
# 289 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Jackson::
# 294 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_JACKSON_1, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat, Route119_EventScript_RegisterJackson
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route119_EventScript_Jackson_2
# 300 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
	release_end

Route119_EventScript_Jackson_2:
# 296 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
# 297 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_RegisterJackson::
# 305 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 306 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 307 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
# 308 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_JACKSON_1
	release_end


Route119_EventScript_Catherine::
# 313 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CATHERINE_1, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat, Route119_EventScript_RegisterCatherine
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route119_EventScript_Catherine_2
# 319 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
	release_end

Route119_EventScript_Catherine_2:
# 315 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
# 316 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_RegisterCatherine::
# 324 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 325 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 326 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
# 327 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_CATHERINE_1
	release_end


Route119_EventScript_Hugh::
# 332 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HUGH, Route119_Text_HughIntro, Route119_Text_HughDefeat
# 333 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Phil::
# 338 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_PHIL, Route119_Text_PhilIntro, Route119_Text_PhilDefeat
# 339 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Yasu::
# 344 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_YASU, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
# 345 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Takashi::
# 350 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAKASHI, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
# 351 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Hideo::
# 356 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
# 357 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Chris::
# 362 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CHRIS, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
# 363 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Fabian::
# 368 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
# 369 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Dayton::
# 374 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DAYTON, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
# 375 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_Rachel::
# 380 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
# 381 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_EventScript_BridgeAquaGrunt1::
# 386 "data/maps/Route119/scripts.pory"
	lock_faceplayer
# 387 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
# 388 "data/maps/Route119/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


Route119_EventScript_BridgeAquaGrunt2::
# 392 "data/maps/Route119/scripts.pory"
	lock_faceplayer
# 393 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
# 394 "data/maps/Route119/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


Route119_EventScript_Boy1::
# 398 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
	end


Route119_EventScript_Boy2::
# 403 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
	end


Route119_EventScript_TrainerTipsDecoration::
# 408 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
	end


Route119_EventScript_ScottWonAtFortreeGymCall::
# 413 "data/maps/Route119/scripts.pory"
	lockall
# 414 "data/maps/Route119/scripts.pory"
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
# 415 "data/maps/Route119/scripts.pory"
	waitmessage
# 416 "data/maps/Route119/scripts.pory"
	clearflag FLAG_SCOTT_CALL_FORTREE_GYM
# 417 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 418 "data/maps/Route119/scripts.pory"
	releaseall
	end


# 59 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_Movement_0:
# 59 "data/maps/Route119/scripts.pory"
	run_right
# 59 "data/maps/Route119/scripts.pory"
	run_right
# 59 "data/maps/Route119/scripts.pory"
	run_right
# 59 "data/maps/Route119/scripts.pory"
	run_right
# 59 "data/maps/Route119/scripts.pory"
	run_right
# 59 "data/maps/Route119/scripts.pory"
	run_right
# 59 "data/maps/Route119/scripts.pory"
	run_right
# 59 "data/maps/Route119/scripts.pory"
	run_right
# 59 "data/maps/Route119/scripts.pory"
	run_up
	step_end

# 60 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter_Movement_1:
# 60 "data/maps/Route119/scripts.pory"
	run_right
# 60 "data/maps/Route119/scripts.pory"
	run_right
# 60 "data/maps/Route119/scripts.pory"
	run_right
# 60 "data/maps/Route119/scripts.pory"
	run_right
# 60 "data/maps/Route119/scripts.pory"
	run_right
# 60 "data/maps/Route119/scripts.pory"
	run_right
# 60 "data/maps/Route119/scripts.pory"
	run_right
# 60 "data/maps/Route119/scripts.pory"
	run_right
# 60 "data/maps/Route119/scripts.pory"
	run_right
# 60 "data/maps/Route119/scripts.pory"
	run_up
	step_end

# 126 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_Movement_0:
# 126 "data/maps/Route119/scripts.pory"
	delay_16
# 126 "data/maps/Route119/scripts.pory"
	step_faster_right
# 126 "data/maps/Route119/scripts.pory"
	delay_8
# 126 "data/maps/Route119/scripts.pory"
	step_faster_up
	step_end

# 127 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_Movement_1:
# 127 "data/maps/Route119/scripts.pory"
	run_right
# 127 "data/maps/Route119/scripts.pory"
	run_up
# 127 "data/maps/Route119/scripts.pory"
	run_up
# 127 "data/maps/Route119/scripts.pory"
	run_up
# 127 "data/maps/Route119/scripts.pory"
	run_right
# 127 "data/maps/Route119/scripts.pory"
	run_up
# 127 "data/maps/Route119/scripts.pory"
	run_up
# 127 "data/maps/Route119/scripts.pory"
	run_up
# 127 "data/maps/Route119/scripts.pory"
	run_up
	step_end

# 129 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_Movement_2:
# 129 "data/maps/Route119/scripts.pory"
	delay_16
# 129 "data/maps/Route119/scripts.pory"
	step_faster_left
# 129 "data/maps/Route119/scripts.pory"
	delay_8
# 129 "data/maps/Route119/scripts.pory"
	step_faster_up
	step_end

# 130 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_Movement_3:
# 130 "data/maps/Route119/scripts.pory"
	run_left
# 130 "data/maps/Route119/scripts.pory"
	run_up
# 130 "data/maps/Route119/scripts.pory"
	run_up
# 130 "data/maps/Route119/scripts.pory"
	run_up
# 130 "data/maps/Route119/scripts.pory"
	run_right
# 130 "data/maps/Route119/scripts.pory"
	run_right
# 130 "data/maps/Route119/scripts.pory"
	run_up
# 130 "data/maps/Route119/scripts.pory"
	run_up
# 130 "data/maps/Route119/scripts.pory"
	run_up
# 130 "data/maps/Route119/scripts.pory"
	run_up
	step_end

# 143 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_Movement_4:
# 143 "data/maps/Route119/scripts.pory"
	walk_down
# 143 "data/maps/Route119/scripts.pory"
	walk_down
# 143 "data/maps/Route119/scripts.pory"
	walk_down
# 143 "data/maps/Route119/scripts.pory"
	walk_down
# 143 "data/maps/Route119/scripts.pory"
	walk_left
# 143 "data/maps/Route119/scripts.pory"
	walk_left
# 143 "data/maps/Route119/scripts.pory"
	walk_down
	step_end

# 149 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_Movement_5:
# 149 "data/maps/Route119/scripts.pory"
	walk_up
# 149 "data/maps/Route119/scripts.pory"
	walk_right
# 149 "data/maps/Route119/scripts.pory"
	walk_right
# 149 "data/maps/Route119/scripts.pory"
	walk_up
# 149 "data/maps/Route119/scripts.pory"
	walk_up
# 149 "data/maps/Route119/scripts.pory"
	walk_up
# 149 "data/maps/Route119/scripts.pory"
	walk_up
# 149 "data/maps/Route119/scripts.pory"
	walk_up
	step_end

# 150 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive_Movement_6:
# 150 "data/maps/Route119/scripts.pory"
	walk_up
# 150 "data/maps/Route119/scripts.pory"
	walk_right
# 150 "data/maps/Route119/scripts.pory"
	walk_up
# 150 "data/maps/Route119/scripts.pory"
	walk_up
# 150 "data/maps/Route119/scripts.pory"
	walk_up
# 150 "data/maps/Route119/scripts.pory"
	walk_up
# 150 "data/maps/Route119/scripts.pory"
	walk_up
	step_end

Route119_EventScript_MoveTutor_Text_0:
# 188 "data/maps/Route119/scripts.pory"
	.string "…$"

Route119_Text_DeclineTutor::
# 253 "data/maps/Route119/scripts.pory"
	.string "…$"

Route119_Text_MayIntro::
# 422 "data/maps/Route119/scripts.pory"
	.string "{SPEAKER NAME_MAY}{PLAYER}{KUN}!\n"
	.string "Where were you? I was looking for you!\p"
	.string "How much stronger have you gotten?\n"
	.string "Let me check for you!\p"
	.string "Ready with your POKéMON?\n"
	.string "Of course you are! Go!$"

Route119_Text_MayDefeat::
# 433 "data/maps/Route119/scripts.pory"
	.string "Achah!\n"
	.string "{PLAYER}{KUN}, you're strong!\p"
	.string "I was worried that you might be\n"
	.string "struggling with your training.$"

Route119_Text_MayPresentForYou::
# 441 "data/maps/Route119/scripts.pory"
	.string "{SPEAKER NAME_MAY}But I had absolutely nothing to\n"
	.string "worry about! Keep it up!\p"
	.string "And, here! I have a present for you.$"

Route119_Text_MayExplainFly::
# 448 "data/maps/Route119/scripts.pory"
	.string "{SPEAKER NAME_MAY}Use FLY, and your POKéMON will\n"
	.string "instantly carry you to any town you've\l"
	.string "already visited.\p"
	.string "But, to use FLY, you have to get\n"
	.string "the GYM BADGE from FORTREE CITY.\l"
	.string "That's important, so don't forget.\p"
	.string "You should FLY home and visit\n"
	.string "LITTLEROOT for a change.\p"
	.string "I bet your mom's worried about you,\n"
	.string "{PLAYER}{KUN}.\p"
	.string "Well, let's meet again somewhere!$"

Route119_Text_BrendanIntro::
# 466 "data/maps/Route119/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}{PLAYER}! So this is where\n"
	.string "you've been looking for POKéMON?\p"
	.string "Let me see how good you got.\n"
	.string "I'll test you!\p"
	.string "Now!\n"
	.string "It's a battle, so battle!$"

Route119_Text_BrendanDefeat::
# 477 "data/maps/Route119/scripts.pory"
	.string "Hmm…\n"
	.string "You've gotten pretty darn decent.$"

Route119_Text_BrendanIllGiveYouThis::
# 482 "data/maps/Route119/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}I'd say you're good enough\n"
	.string "to search for POKéMON anywhere.\p"
	.string "Here, I'll give you this.\n"
	.string "Try it out.$"

Route119_Text_BrendanExplainFly::
# 490 "data/maps/Route119/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}Use FLY, and your POKéMON\n"
	.string "instantly carries you to any town\l"
	.string "you've already visited.\p"
	.string "But you need the FORTREE GYM BADGE \n"
	.string "to do that.\p"
	.string "Anyway, I have to move along.$"

Route119_Text_ScottWayToGoBeSeeingYou::
# 501 "data/maps/Route119/scripts.pory"
	.string "{SPEAKER NAME_SCOTT}Hahahah!\n"
	.string "Way to go, {PLAYER}{KUN}!\p"
	.string "I just passed by a TRAINER riding\n"
	.string "a BIKE.\p"
	.string "You just beat that TRAINER, didn't you?\n"
	.string "It was pretty obvious that you did.\p"
	.string "The kid looked really upset with\n"
	.string "a face all red from anger.\p"
	.string "I sure seem to run into you often.\n"
	.string "Are you off to FORTREE GYM next?\p"
	.string "I expect that you'll do well at the GYM.\n"
	.string "Well, I'll be seeing you!$"

Route119_Text_ScottYouWonAtFortreeGym::
# 521 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "{SPEAKER NAME_SCOTT}Hiya, {PLAYER}{KUN}, it's me!\p"
	.string "Just as I thought, you won at\n"
	.string "the FORTREE GYM.\p"
	.string "Your strength…\n"
	.string "Perhaps you really are the TRAINER\l"
	.string "that I've been searching for.\p"
	.string "Remember, you have a fan in me.\n"
	.string "I'll be cheering from the sidelines.\l"
	.string "Keep up the great work!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

Route119_Text_StayAwayFromWeatherInstitute::
# 542 "data/maps/Route119/scripts.pory"
	.string "We're standing lookout here.\p"
	.string "Hey, you! Stay away from the WEATHER\n"
	.string "INSTITUTE. It's not safe.$"

Route119_Text_DontGoNearWeatherInstitute::
# 549 "data/maps/Route119/scripts.pory"
	.string "Lookout duty is surprisingly boring.\p"
	.string "Hey, you! Please don't go near the\n"
	.string "WEATHER INSTITUTE.$"

Route119_Text_ThoughtFlyByCatchingBirdMons::
# 556 "data/maps/Route119/scripts.pory"
	.string "I thought you FLY by catching a whole\n"
	.string "flock of BIRD POKéMON, and then\l"
	.string "hanging on to them somehow.\p"
	.string "But it turns out there's an HM move\n"
	.string "called FLY!\p"
	.string "I wish I'd known about that a long\n"
	.string "time ago…$"

Route119_Text_TallGrassSnaresBikeTires::
# 568 "data/maps/Route119/scripts.pory"
	.string "Tch…\n"
	.string "It's a no-go…\p"
	.string "The tall grass snares BIKE tires.\n"
	.string "There's no way you can cycle here.$"

Route119_Text_CanYourMonMakeSecretBase::
# 576 "data/maps/Route119/scripts.pory"
	.string "Can your POKéMON use its SECRET POWER\n"
	.string "on a big pile of grass and make a\l"
	.string "SECRET BASE?$"

Route119_Text_RouteSignFortree::
# 582 "data/maps/Route119/scripts.pory"
	.string "ROUTE 119\n"
	.string "{RIGHT_ARROW} FORTREE CITY$"

Route119_Text_WeatherInstitute::
# 587 "data/maps/Route119/scripts.pory"
	.string "WEATHER INSTITUTE$"

Route119_Text_TrainerTipsDecoration::
# 591 "data/maps/Route119/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Up to sixteen decorations and\n"
	.string "furniture items can be placed in\l"
	.string "a SECRET BASE.\p"
	.string "Pick your favorite items and create\n"
	.string "your very own SECRET BASE exactly the\l"
	.string "way you want.$"

Route119_Text_DragonClawDesc::
# 603 "data/maps/Route119/scripts.pory"
	.string "A swipe of sharp\n"
	.string "claws filled with\n"
	.string "draconic fury.$"

Route119_Text_MetalClawDesc::
# 609 "data/maps/Route119/scripts.pory"
	.string "A swipe of sharp\n"
	.string "steel-like claws.\n"
	.string "Can lower Def.$"

Route119_Text_ShadowClawDesc::
# 615 "data/maps/Route119/scripts.pory"
	.string "A swipe of sharp\n"
	.string "cursed claws that\n"
	.string "can lower Sp. Def.$"

Route119_Text_SickleClawDesc::
# 621 "data/maps/Route119/scripts.pory"
	.string "A swipe of sharp\n"
	.string "chilled claws that\n"
	.string "can frostbite.$"

Route119_Text_FireFangDesc::
# 627 "data/maps/Route119/scripts.pory"
	.string "A bite with sharp\n"
	.string "fangs that can\n"
	.string "inflict burn.$"

Route119_Text_IceFangDesc::
# 633 "data/maps/Route119/scripts.pory"
	.string "A bite with sharp\n"
	.string "fangs that can\n"
	.string "inflict frost.$"

Route119_Text_PoisonFangDesc::
# 639 "data/maps/Route119/scripts.pory"
	.string "A bite with sharp\n"
	.string "fangs that can\n"
	.string "inflict poison.$"

Route119_Text_ThunderFangDesc::
# 645 "data/maps/Route119/scripts.pory"
	.string "A bite with sharp\n"
	.string "fangs that can\n"
	.string "cause paralysis.$"
