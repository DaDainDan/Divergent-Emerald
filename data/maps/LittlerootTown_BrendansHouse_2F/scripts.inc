LittlerootTown_BrendansHouse_2F_MapScripts::
# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
	goto_if_lt LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
	goto_if_ge LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 4
	goto_if_eq LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
	end

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	goto LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 2
	goto_if_lt LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	goto LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
	goto LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
	goto LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_9

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
	goto LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
	goto_if_lt LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
	goto LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 0, 2
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
	goto LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2
LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1:
	end

LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2:
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto SecretBase_EventScript_InitDecorations
	goto LittlerootTown_BrendansHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1


LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall_2
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall_1:
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall_2:
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
	goto LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall_1


LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_0
# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	switch VAR_FACING
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_3
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_4
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_5
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_6
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_1:
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_3:
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_1
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_BrendanStepRightAddress
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_2
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_3
	goto LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_1

LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_4:
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_4
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_BrendanStepRightAddress
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_5
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_6
	goto LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_1

LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_5:
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_7
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call LittlerootTown_BrendansHouse_2F_EventScript_BrendanStepRightAddress
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_8
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_9
	goto LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_1

LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_6:
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_10
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_11
	goto LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_1


LittlerootTown_BrendansHouse_2F_EventScript_BrendanStepRightAddress::
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
	return


# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_faster_left
	step_end

LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_PC_2
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
LittlerootTown_BrendansHouse_2F_EventScript_PC_1:
	end

LittlerootTown_BrendansHouse_2F_EventScript_PC_2:
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	goto LittlerootTown_BrendansHouse_2F_EventScript_PC_1


LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end


PlayersHouse_2F_EventScript_Notebook::
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
	end


PlayersHouse_2F_EventScript_GameCube::
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
	end


# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_0:
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_faster_left
	step_end

# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_1:
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
	step_end

# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_2:
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_faster_up
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_faster_left
	step_end

# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_3:
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_faster_up
	step_end

# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_4:
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
	step_end

# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_5:
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_faster_up
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_faster_left
	step_end

# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_6:
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_faster_up
	step_end

# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_7:
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_faster_left
	step_end

# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_8:
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_faster_up
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_faster_left
	step_end

# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_9:
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_faster_up
	step_end

# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_10:
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_faster_down
	step_end

# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan_Movement_11:
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_faster_up
	step_end

PlayersHouse_2F_Text_ClockIsStopped::
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
	.string "Better set it and start it!$"

PlayersHouse_2F_Text_HowDoYouLikeYourRoom::
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "MOM: {PLAYER}, how do you like your\n"
	.string "new room?\p"
	.string "Good! Everything's put away neatly!\p"
	.string "They finished moving everything in\n"
	.string "downstairs, too.\p"
	.string "POKéMON movers are so convenient!\p"
	.string "Oh, you should make sure that\n"
	.string "everything's all there on your desk.$"

PlayersHouse_2F_Text_Notebook::
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
	.string "ADVENTURE RULE NO. 1\n"
	.string "Open the MENU with START.\p"
	.string "ADVENTURE RULE NO. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "The remaining pages are blank…$"

Common_Text_LookCloserAtMap::
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
	.string "{REGION} region map.$"

PlayersHouse_2F_Text_ItsAGameCube::
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
	.string "A Game Boy Advance is connected to\n"
	.string "serve as the Controller.$"
