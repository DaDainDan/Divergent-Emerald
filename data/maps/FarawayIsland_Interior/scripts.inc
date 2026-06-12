FarawayIsland_Interior_MapScripts::
# 2 "data/maps/FarawayIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/FarawayIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 33 "data/maps/FarawayIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD
# 17 "data/maps/FarawayIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME_3
FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/FarawayIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME_1

FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME_1

FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_FARAWAY_ISLAND_STEP_COUNTER, 0
# 10 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_TEMP_1, 1
# 11 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_unset FLAG_CAUGHT_MEW, FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/FarawayIsland_Interior/scripts.pory"
	clearflag FLAG_HIDE_MEW
# 13 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_TEMP_1, 0
	goto FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 11 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_unset FLAG_DEFEATED_MEW, FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD:
# 34 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD_2
FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD_1:
	end

FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD_2:
# 35 "data/maps/FarawayIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 36 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD_4
# 36 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD_4
# 37 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD_4
# 37 "data/maps/FarawayIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_MON_TELEPORTED
	goto_if_eq FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD_4
	goto FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD_1

FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD_4:
# 38 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_0x8004, 1
# 39 "data/maps/FarawayIsland_Interior/scripts.pory"
	special SetMewAboveGrass
	goto FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD_1

FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 18 "data/maps/FarawayIsland_Interior/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 19 "data/maps/FarawayIsland_Interior/scripts.pory"
	lockall
# 20 "data/maps/FarawayIsland_Interior/scripts.pory"
	playse SE_PIN
# 21 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, Common_Movement_ExclamationMark
# 22 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmovement 0
# 23 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, Common_Movement_Delay48
# 24 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmovement 0
# 25 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 26 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmovement 0
# 27 "data/maps/FarawayIsland_Interior/scripts.pory"
	copyobjectxytoperm LOCALID_FARAWAY_ISLAND_MEW
# 28 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_TEMP_1, 1
# 29 "data/maps/FarawayIsland_Interior/scripts.pory"
	releaseall
	end


FarawayIsland_Interior_EventScript_Mew::
# 47 "data/maps/FarawayIsland_Interior/scripts.pory"
	lock_faceplayer
# 48 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_EventScript_Mew_Movement_0
# 49 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmovement 0
# 50 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_0x8004, 0
# 51 "data/maps/FarawayIsland_Interior/scripts.pory"
	special SetMewAboveGrass
# 52 "data/maps/FarawayIsland_Interior/scripts.pory"
	message FarawayIsland_Interior_Text_Mew
# 53 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitse
# 54 "data/maps/FarawayIsland_Interior/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 55 "data/maps/FarawayIsland_Interior/scripts.pory"
	switch VAR_FACING
# 56 "data/maps/FarawayIsland_Interior/scripts.pory"
	case DIR_NORTH, FarawayIsland_Interior_EventScript_Mew_3
# 57 "data/maps/FarawayIsland_Interior/scripts.pory"
	case DIR_SOUTH, FarawayIsland_Interior_EventScript_Mew_4
# 58 "data/maps/FarawayIsland_Interior/scripts.pory"
	case DIR_WEST, FarawayIsland_Interior_EventScript_Mew_5
# 59 "data/maps/FarawayIsland_Interior/scripts.pory"
	case DIR_EAST, FarawayIsland_Interior_EventScript_Mew_6
FarawayIsland_Interior_EventScript_Mew_1:
# 61 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmovement 0
# 62 "data/maps/FarawayIsland_Interior/scripts.pory"
	special DestroyMewEmergingGrassSprite
# 63 "data/maps/FarawayIsland_Interior/scripts.pory"
	delay 40
# 64 "data/maps/FarawayIsland_Interior/scripts.pory"
	waitmoncry
# 65 "data/maps/FarawayIsland_Interior/scripts.pory"
	seteventmon SPECIES_MEW, 30
# 66 "data/maps/FarawayIsland_Interior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 67 "data/maps/FarawayIsland_Interior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 68 "data/maps/FarawayIsland_Interior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 69 "data/maps/FarawayIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 70 "data/maps/FarawayIsland_Interior/scripts.pory"
	switch VAR_RESULT
# 71 "data/maps/FarawayIsland_Interior/scripts.pory"
	case B_OUTCOME_WON, FarawayIsland_Interior_EventScript_Mew_9
# 75 "data/maps/FarawayIsland_Interior/scripts.pory"
	case B_OUTCOME_RAN, FarawayIsland_Interior_EventScript_Mew_10
# 76 "data/maps/FarawayIsland_Interior/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, FarawayIsland_Interior_EventScript_Mew_10
# 77 "data/maps/FarawayIsland_Interior/scripts.pory"
	case B_OUTCOME_MON_TELEPORTED, FarawayIsland_Interior_EventScript_Mew_10
FarawayIsland_Interior_EventScript_Mew_7:
# 81 "data/maps/FarawayIsland_Interior/scripts.pory"
	setflag FLAG_CAUGHT_MEW
	release_end

FarawayIsland_Interior_EventScript_Mew_3:
# 56 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_EventScript_Mew_Movement_1
	goto FarawayIsland_Interior_EventScript_Mew_1

FarawayIsland_Interior_EventScript_Mew_4:
# 57 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_EventScript_Mew_Movement_2
	goto FarawayIsland_Interior_EventScript_Mew_1

FarawayIsland_Interior_EventScript_Mew_5:
# 58 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_EventScript_Mew_Movement_3
	goto FarawayIsland_Interior_EventScript_Mew_1

FarawayIsland_Interior_EventScript_Mew_6:
# 59 "data/maps/FarawayIsland_Interior/scripts.pory"
	applymovement LOCALID_FARAWAY_ISLAND_MEW, FarawayIsland_Interior_EventScript_Mew_Movement_4
	goto FarawayIsland_Interior_EventScript_Mew_1

FarawayIsland_Interior_EventScript_Mew_9:
# 72 "data/maps/FarawayIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_MEW
# 73 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEW
# 74 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	goto FarawayIsland_Interior_EventScript_Mew_7

FarawayIsland_Interior_EventScript_Mew_10:
# 78 "data/maps/FarawayIsland_Interior/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEW
# 79 "data/maps/FarawayIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	goto FarawayIsland_Interior_EventScript_Mew_7


FarawayIsland_Interior_EventScript_HideMewWhenGrassCut::
# 86 "data/maps/FarawayIsland_Interior/scripts.pory"
	lockall
# 87 "data/maps/FarawayIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 88 "data/maps/FarawayIsland_Interior/scripts.pory"
	setflag FLAG_HIDE_MEW
# 89 "data/maps/FarawayIsland_Interior/scripts.pory"
	removeobject LOCALID_FARAWAY_ISLAND_MEW
# 90 "data/maps/FarawayIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 91 "data/maps/FarawayIsland_Interior/scripts.pory"
	msgbox FarawayIsland_Interior_Text_TheFeelingOfBeingWatchedFaded, MSGBOX_DEFAULT
# 92 "data/maps/FarawayIsland_Interior/scripts.pory"
	closemessage
# 93 "data/maps/FarawayIsland_Interior/scripts.pory"
	releaseall
	end


# 25 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 25 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_up
# 25 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_up
# 25 "data/maps/FarawayIsland_Interior/scripts.pory"
	walk_up
# 25 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_faster_down
# 25 "data/maps/FarawayIsland_Interior/scripts.pory"
	set_invisible
	step_end

# 48 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_Movement_0:
# 48 "data/maps/FarawayIsland_Interior/scripts.pory"
	set_visible
	step_end

# 56 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_Movement_1:
# 56 "data/maps/FarawayIsland_Interior/scripts.pory"
	lock_look
# 56 "data/maps/FarawayIsland_Interior/scripts.pory"
	run_up
# 56 "data/maps/FarawayIsland_Interior/scripts.pory"
	run_up
# 56 "data/maps/FarawayIsland_Interior/scripts.pory"
	unlock_look
# 56 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_down
# 56 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_down
	step_end

# 57 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_Movement_2:
# 57 "data/maps/FarawayIsland_Interior/scripts.pory"
	lock_look
# 57 "data/maps/FarawayIsland_Interior/scripts.pory"
	run_up
# 57 "data/maps/FarawayIsland_Interior/scripts.pory"
	run_up
# 57 "data/maps/FarawayIsland_Interior/scripts.pory"
	unlock_look
# 57 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_up
# 57 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_up
	step_end

# 58 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_Movement_3:
# 58 "data/maps/FarawayIsland_Interior/scripts.pory"
	lock_look
# 58 "data/maps/FarawayIsland_Interior/scripts.pory"
	run_up
# 58 "data/maps/FarawayIsland_Interior/scripts.pory"
	run_up
# 58 "data/maps/FarawayIsland_Interior/scripts.pory"
	unlock_look
# 58 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_right
# 58 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_right
	step_end

# 59 "data/maps/FarawayIsland_Interior/scripts.pory"
FarawayIsland_Interior_EventScript_Mew_Movement_4:
# 59 "data/maps/FarawayIsland_Interior/scripts.pory"
	lock_look
# 59 "data/maps/FarawayIsland_Interior/scripts.pory"
	run_up
# 59 "data/maps/FarawayIsland_Interior/scripts.pory"
	run_up
# 59 "data/maps/FarawayIsland_Interior/scripts.pory"
	unlock_look
# 59 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_left
# 59 "data/maps/FarawayIsland_Interior/scripts.pory"
	step_left
	step_end

FarawayIsland_Interior_Text_TheFeelingOfBeingWatchedFaded::
# 97 "data/maps/FarawayIsland_Interior/scripts.pory"
	.string "The feeling of being watched faded…$"
