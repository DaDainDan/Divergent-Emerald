IndigoPlateau_Exterior_Frlg_MapScripts::
# 2 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoPlateau_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

IndigoPlateau_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR
# 4 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 1
	goto_if_eq IndigoPlateau_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
IndigoPlateau_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

IndigoPlateau_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	playbgm MUS_CREDITS, 0
	goto IndigoPlateau_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

IndigoPlateau_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 1, IndigoPlateau_Exterior_EventScript_Credits
	.2byte 0


IndigoPlateau_Exterior_EventScript_Credits::
# 19 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	lockall
# 20 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 105
# 22 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	opendoor 11, 6
# 23 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitdooranim
# 24 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	special SpawnCameraObject
# 25 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	addobject LOCALID_CREDITS_RIVAL
# 26 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_CREDITS_RIVAL, Common_Movement_RunDown
# 27 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_EventScript_Credits_Movement_0
# 28 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 29 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	closedoor 11, 6
# 30 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitdooranim
# 32 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_EventScript_Credits_Movement_1
# 33 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_CREDITS_RIVAL, IndigoPlateau_Exterior_EventScript_Credits_Movement_2
# 34 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 35 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 100
# 37 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	opendoor 11, 6
# 38 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitdooranim
# 39 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	addobject LOCALID_CREDITS_PROF_OAK
# 40 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_CREDITS_PROF_OAK, Common_Movement_WalkDown
# 41 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 42 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	closedoor 11, 6
# 43 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitdooranim
# 44 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 160
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_EventScript_Credits_Movement_3
# 47 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_CREDITS_PROF_OAK, IndigoPlateau_Exterior_Movement_OakLeave
# 48 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 49 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 100
# 51 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_EventScript_Credits_Movement_4
# 52 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 53 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 155
# 54 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 55 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 56 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay 90
# 58 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 59 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 60 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_EventScript_Credits_Movement_5
# 61 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 63 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	special RemoveCameraObject
# 64 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 0
# 65 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_CREDITS_RIVAL
# 66 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_CREDITS_PROF_OAK
# 67 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	special CB2_StartCreditsSequence
# 68 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	waitstate
# 69 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	releaseall
	end


# 73 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_Movement_OakLeave:
# 75 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_faster_left
# 76 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 76 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 76 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 76 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 76 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 76 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 76 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 76 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 76 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 76 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 77 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_faster_down
# 78 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 79 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 79 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 79 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 79 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 79 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 79 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 79 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
	step_end

# 27 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_EventScript_Credits_Movement_0:
# 27 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	face_right
# 27 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	lock_look
# 27 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_left
# 27 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	unlock_look
	step_end

# 32 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_EventScript_Credits_Movement_1:
# 32 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 32 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_4
# 32 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_faster_down
	step_end

# 33 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_EventScript_Credits_Movement_2:
# 33 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	run_down
# 33 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	run_down
# 33 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	run_down
# 33 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	run_down
# 33 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	run_down
# 33 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	run_down
# 33 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	run_down
	step_end

# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_EventScript_Credits_Movement_3:
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_8
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_faster_right
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 46 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	step_faster_down
	step_end

# 51 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_EventScript_Credits_Movement_4:
# 51 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_right
# 51 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 51 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 51 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	walk_down
# 51 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
# 51 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	delay_16
	step_end

# 60 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
IndigoPlateau_Exterior_EventScript_Credits_Movement_5:
# 60 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 60 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 60 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 60 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 60 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
# 60 "data/maps/IndigoPlateau_Exterior_Frlg/scripts.pory"
	player_run_down
	step_end
