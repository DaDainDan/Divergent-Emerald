NavelRock_Summit_Frlg_MapScripts::
# 2 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto_if_set FLAG_FOUGHT_HO_OH, NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 7 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 8 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto_if_unset FLAG_HO_OH_FLEW_AWAY, NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 5 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setflag FLAG_HIDE_HO_OH
	goto NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 9 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 10 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	clearflag FLAG_HIDE_HO_OH
	goto NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 16 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_3
NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 17 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	removeobject LOCALID_NAVEL_ROCK_HO_OH
	goto NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto NavelRock_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1


NavelRock_Summit_EventScript_HoOh::
# 24 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	lockall
# 25 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 26 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	special SpawnCameraObject
# 27 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 28 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_0x8005, 35
# 29 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	special LoopWingFlapSE
# 30 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	applymovement LOCALID_NAVEL_ROCK_HO_OH, NavelRock_Summit_EventScript_HoOh_Movement_0
# 31 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	applymovement LOCALID_CAMERA, NavelRock_Summit_EventScript_HoOh_Movement_1
# 32 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	waitmovement 0
# 33 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay 50
# 34 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setweather 0
# 35 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	doweather
# 36 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	waitse
# 37 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
# 38 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay 30
# 39 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	waitmoncry
# 40 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay 60
# 41 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 42 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_0x8005, 35
# 43 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	special LoopWingFlapSE
# 44 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	applymovement LOCALID_CAMERA, NavelRock_Summit_EventScript_HoOh_Movement_2
# 45 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	applymovement LOCALID_NAVEL_ROCK_HO_OH, NavelRock_Summit_EventScript_HoOh_Movement_3
# 46 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	waitmovement 0
# 47 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	special RemoveCameraObject
# 48 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	seteventmon SPECIES_HO_OH, 70
# 49 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 50 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 51 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 52 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_NAVEL_ROCK_HO_OH
# 53 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 54 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	switch VAR_RESULT
# 55 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	case B_OUTCOME_WON, NavelRock_Summit_EventScript_HoOh_3
# 59 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	case B_OUTCOME_RAN, NavelRock_Summit_EventScript_HoOh_4
# 60 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, NavelRock_Summit_EventScript_HoOh_4
NavelRock_Summit_EventScript_HoOh_1:
# 64 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_HO_OH
# 65 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	releaseall
	end

NavelRock_Summit_EventScript_HoOh_3:
# 56 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setflag FLAG_HO_OH_FLEW_AWAY
# 57 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_HO_OH
# 58 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
	goto NavelRock_Summit_EventScript_HoOh_1

NavelRock_Summit_EventScript_HoOh_4:
# 61 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_HO_OH
# 62 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
	goto NavelRock_Summit_EventScript_HoOh_1


# 30 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_HoOh_Movement_0:
# 30 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay_16
# 30 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay_16
# 30 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	step_down
# 30 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	step_down
# 30 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	step_down
# 30 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	step_down
	step_end

# 31 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_HoOh_Movement_1:
# 31 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_up
# 31 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_up
# 31 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_up
	step_end

# 44 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_HoOh_Movement_2:
# 44 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay_16
# 44 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay_16
# 44 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 44 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 44 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
	step_end

# 45 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
NavelRock_Summit_EventScript_HoOh_Movement_3:
# 45 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 45 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 45 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 45 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 45 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 45 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	walk_down
# 45 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay_16
# 45 "data/maps/NavelRock_Summit_Frlg/scripts.pory"
	delay_16
	step_end
