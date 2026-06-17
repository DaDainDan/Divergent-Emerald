SeafoamIslands_B3F_Frlg_MapScripts::
# 4 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto_if_set FLAG_STOPPED_SEAFOAM_B3F_CURRENT, SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	call SeafoamIslands_B3F_EventScript_CheckBoulders
# 7 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	goto SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	setmaplayoutindex LAYOUT_SEAFOAM_ISLANDS_B3F_CURRENT_STOPPED
	goto SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 8 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	setflag FLAG_STOPPED_SEAFOAM_B3F_CURRENT
	goto SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SeafoamIslands_B3F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, SeafoamIslands_B3F_EventScript_EnterByFalling
	.2byte 0


SeafoamIslands_B3F_EventScript_CheckBoulders::
# 22 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 0
# 23 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_1, SeafoamIslands_B3F_EventScript_CheckBoulders_2
SeafoamIslands_B3F_EventScript_CheckBoulders_1:
# 26 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	goto_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_2, SeafoamIslands_B3F_EventScript_CheckBoulders_5
SeafoamIslands_B3F_EventScript_CheckBoulders_4:
	return

SeafoamIslands_B3F_EventScript_CheckBoulders_2:
# 24 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto SeafoamIslands_B3F_EventScript_CheckBoulders_1

SeafoamIslands_B3F_EventScript_CheckBoulders_5:
# 27 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto SeafoamIslands_B3F_EventScript_CheckBoulders_4


SeafoamIslands_B3F_EventScript_EnterByFalling::
# 33 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	lockall
# 34 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	call SeafoamIslands_B3F_EventScript_CheckBoulders
# 35 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq SeafoamIslands_B3F_EventScript_EnterByFalling_2
# 40 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 41 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	compare VAR_0x8008, 24
	goto_if_lt SeafoamIslands_B3F_EventScript_EnterByFalling_5
# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B3F_EventScript_EnterByFalling_Movement_1
SeafoamIslands_B3F_EventScript_EnterByFalling_4:
# 46 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	waitmovement 0
# 47 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1
# 48 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	warp MAP_SEAFOAM_ISLANDS_B4F, 27, 21
# 49 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	waitstate
# 50 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	releaseall
	end

SeafoamIslands_B3F_EventScript_EnterByFalling_2:
# 36 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 37 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	releaseall
	end

SeafoamIslands_B3F_EventScript_EnterByFalling_5:
# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B3F_EventScript_EnterByFalling_Movement_0
	goto SeafoamIslands_B3F_EventScript_EnterByFalling_4


# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling_Movement_0:
# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_right
# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_right
# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_right
# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 42 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
	step_end

# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling_Movement_1:
# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_right
# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_right
# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
# 44 "data/maps/SeafoamIslands_B3F_Frlg/scripts.pory"
	run_down
	step_end
