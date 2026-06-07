LittlerootTown_MaysHouse_2F_MapScripts::
# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
	goto_if_lt LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
	goto_if_ge LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 18 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 4
	goto_if_eq LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 21 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
	end

LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	checkplayergender
# 0 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	goto LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 9 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
# 9 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 2
	goto_if_lt LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	goto LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 5 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
	goto LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 19 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
	goto LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
	checkplayergender
# 0 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
	goto LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
	goto_if_lt LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
	goto LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 8, 2
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
	goto LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 26 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
	checkplayergender
# 0 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2
LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1:
	end

LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2:
# 28 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto SecretBase_EventScript_InitDecorations
	goto LittlerootTown_MaysHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1


LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall::
# 36 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 37 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall_2
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall_1:
# 40 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 41 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	end

LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall_2:
# 38 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_MeetMay
	goto LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall_1


LittlerootTown_MaysHouse_2F_EventScript_MeetMay::
# 46 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 47 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_0
# 49 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 50 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PIN
# 51 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 52 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 53 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 54 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 55 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 56 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 57 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	switch VAR_FACING
# 58 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	case DIR_NORTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_3
# 63 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	case DIR_SOUTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_4
# 68 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	case DIR_WEST, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_5
# 76 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	case DIR_EAST, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_6
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_1:
# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 83 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 84 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 85 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 86 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	fadedefaultbgm
# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	end

LittlerootTown_MaysHouse_2F_EventScript_MeetMay_3:
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_1
# 60 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_MayStepLeftAddress
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_2
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_3
	goto LittlerootTown_MaysHouse_2F_EventScript_MeetMay_1

LittlerootTown_MaysHouse_2F_EventScript_MeetMay_4:
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_4
# 65 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_MayStepLeftAddress
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_5
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_6
	goto LittlerootTown_MaysHouse_2F_EventScript_MeetMay_1

LittlerootTown_MaysHouse_2F_EventScript_MeetMay_5:
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_7
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 72 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 73 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 74 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_8
	goto LittlerootTown_MaysHouse_2F_EventScript_MeetMay_1

LittlerootTown_MaysHouse_2F_EventScript_MeetMay_6:
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_9
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call LittlerootTown_MaysHouse_2F_EventScript_MayStepLeftAddress
# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_5
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_10
	goto LittlerootTown_MaysHouse_2F_EventScript_MeetMay_1


LittlerootTown_MaysHouse_2F_EventScript_MayStepLeftAddress::
# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
	return


# 103 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayWest:
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_faster_right
	step_end

RivalsHouse_2F_EventScript_Rival::
# 109 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_Rival_2
RivalsHouse_2F_EventScript_Rival_1:
	checkplayergender
# 0 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_Rival_5
# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
RivalsHouse_2F_EventScript_Rival_4:
# 118 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	end

RivalsHouse_2F_EventScript_Rival_2:
# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto RivalsHouse_2F_EventScript_RivalPostLilycove
	goto RivalsHouse_2F_EventScript_Rival_1

RivalsHouse_2F_EventScript_Rival_5:
# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
	goto RivalsHouse_2F_EventScript_Rival_4


RivalsHouse_2F_EventScript_RivalPostLilycove::
# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RivalsHouse_2F_EventScript_RivalPostLilycove_2
# 132 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove_8
# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
RivalsHouse_2F_EventScript_RivalPostLilycove_1:
# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	end

RivalsHouse_2F_EventScript_RivalPostLilycove_2:
# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove_5
# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
	goto RivalsHouse_2F_EventScript_RivalPostLilycove_1

RivalsHouse_2F_EventScript_RivalPostLilycove_5:
# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
	goto RivalsHouse_2F_EventScript_RivalPostLilycove_1

RivalsHouse_2F_EventScript_RivalPostLilycove_8:
# 133 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
	goto RivalsHouse_2F_EventScript_RivalPostLilycove_1


LittlerootTown_MaysHouse_2F_EventScript_PC::
# 144 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_PC_2
# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
LittlerootTown_MaysHouse_2F_EventScript_PC_1:
	end

LittlerootTown_MaysHouse_2F_EventScript_PC_2:
# 146 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	goto LittlerootTown_MaysHouse_2F_EventScript_PC_1


LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC::
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
	end


# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_0:
# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_faster_right
	step_end

# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_1:
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
	step_end

# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_2:
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_faster_up
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_faster_right
	step_end

# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_3:
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_faster_right
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_faster_up
	step_end

# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_4:
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
	step_end

# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_5:
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_faster_up
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_faster_right
	step_end

# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_6:
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_faster_right
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_faster_up
	step_end

# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_7:
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_faster_down
	step_end

# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_8:
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_faster_up
	step_end

# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_9:
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_faster_right
	step_end

# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay_Movement_10:
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_faster_up
	step_end

RivalsHouse_2F_Text_MayWhoAreYou::
# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh?\n"
	.string "Who… Who are you?\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Oh, you're {PLAYER}{KUN}.\n"
	.string "So your move was today.\p"
	.string "Um… I'm MAY.\n"
	.string "Glad to meet you!\p"
	.string "I…\n"
	.string "I have this dream of becoming friends\l"
	.string "with POKéMON all over the world.\p"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
	.string "my dad, PROF. BIRCH.\p"
	.string "I was hoping that you would be nice,\n"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
	.string "Oh, this is silly, isn't it?\n"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
	.string "Eheheh…\p"
	.string "Oh, no! I forgot!\p"
	.string "I was supposed to go help Dad catch\n"
	.string "some wild POKéMON!\p"
	.string "{PLAYER}{KUN}, I'll catch you later!$"

RivalsHouse_2F_Text_MayGettingReady::
# 203 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "POKéMON fully restored!\n"
	.string "Items ready, and…$"

RivalsHouse_2F_Text_BrendanWhoAreYou::
# 208 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey!\n"
	.string "You…\p"
	.string "Who are you?\p"
	.string "Oh, you're {PLAYER}, aren't you?\n"
	.string "Moved in next door, right?\p"
	.string "I didn't know that you're a girl.\p"
	.string "Dad, PROF. BIRCH, said that our new\n"
	.string "next-door neighbor is a GYM LEADER's\l"
	.string "kid, so I assumed you'd be a guy.\p"
	.string "My name's BRENDAN.\n"
	.string "So, hi, neighbor!\p"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
	.string "a POKéMON?\p"
	.string "Do you want me to go catch you one?\p"
	.string "Aw, darn, I forgot…\p"
	.string "I'm supposed to go help my dad catch\n"
	.string "some wild POKéMON.\p"
	.string "Some other time, okay?$"

RivalsHouse_2F_Text_BrendanGettingReady::
# 239 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "POKéMON fully restored…\n"
	.string "Items all packed, and…$"

RivalsHouse_2F_Text_ItsRivalsPokeBall::
# 244 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "It's {RIVAL}'s POKé BALL!\p"
	.string "Better leave it right where it is.$"

RivalsHouse_2F_Text_MayJustCheckingMyPokedex::
# 250 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
	.string "I was just checking my POKéDEX.\p"
	.string "There's still a lot of POKéMON that\n"
	.string "I've seen but haven't caught.\p"
	.string "And there are many others that\n"
	.string "I think will evolve.\p"
	.string "I wonder where I should go catch\n"
	.string "some POKéMON next?$"

RivalsHouse_2F_Text_MayWhereShouldIGoNext::
# 265 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "MAY: I wonder where I should go catch\n"
	.string "some POKéMON next?\p"
	.string "Wouldn't it be funny if we ran into each\n"
	.string "other, {PLAYER}{KUN}?$"

RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex::
# 273 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "BRENDAN: Hey, it's {PLAYER}.\p"
	.string "I was just checking out my POKéDEX.\p"
	.string "There are still many POKéMON that\n"
	.string "I need to catch, I know, but this\l"
	.string "is looking pretty good.\p"
	.string "Checking this POKéDEX out gives me\n"
	.string "the urge to hit the road again.$"

RivalsHouse_2F_Text_BrendanWhereShouldIGoNext::
# 286 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "BRENDAN: I'm having a hard time deciding\n"
	.string "where I should catch POKéMON next.\p"
	.string "Hey, {PLAYER}, if I see you while I'm out\n"
	.string "catching POKéMON, I can pitch you a\l"
	.string "battle if you'd like.$"
