SkyPillar_Top_MapScripts::
# 2 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 18 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_RESUME_3
SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_RESUME_1

SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_RESUME_1

SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_lt SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 13 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_ge SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 11 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
	goto SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 14 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
	goto SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 13 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	goto SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 19 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

SkyPillar_Top_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 20 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
	end


SkyPillar_Top_EventScript_Rayquaza::
# 27 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 28 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 29 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 30 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 31 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 32 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 33 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 34 "data/maps/SkyPillar_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 35 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 36 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 37 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_RESULT
# 38 "data/maps/SkyPillar_Top/scripts.pory"
	case B_OUTCOME_WON, SkyPillar_Top_EventScript_Rayquaza_3
# 43 "data/maps/SkyPillar_Top/scripts.pory"
	case B_OUTCOME_RAN, SkyPillar_Top_EventScript_Rayquaza_4
# 44 "data/maps/SkyPillar_Top/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, SkyPillar_Top_EventScript_Rayquaza_4
# 52 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
SkyPillar_Top_EventScript_Rayquaza_1:
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
	end

SkyPillar_Top_EventScript_Rayquaza_3:
# 39 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 40 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 41 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 42 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto SkyPillar_Top_EventScript_Rayquaza_1

SkyPillar_Top_EventScript_Rayquaza_4:
# 45 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 46 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 47 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 48 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 49 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8004
# 50 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
	goto SkyPillar_Top_EventScript_Rayquaza_1


SkyPillar_Top_EventScript_AwakenRayquaza::
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 60 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 61 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 62 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 63 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_CAMERA, SkyPillar_Top_EventScript_AwakenRayquaza_Movement_0
# 65 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 66 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 67 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 68 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 69 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 70 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 71 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1
# 72 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8
# 74 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3
# 75 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 76 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 77 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 78 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 79 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1
# 80 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2
# 81 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8
# 82 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5
# 83 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 84 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 85 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 87 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 88 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 89 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 90 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 91 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 92 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 93 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_CAMERA, SkyPillar_Top_EventScript_AwakenRayquaza_Movement_1
# 95 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 96 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 97 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 99 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 100 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
	end


# 106 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir:
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	step_fast_left
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	step_left
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 113 "data/maps/SkyPillar_Top/scripts.pory"
	step_right
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
	step_end

# 117 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff:
# 119 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	step_down
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	step_right
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	sprint_up
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
	step_end

# 64 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza_Movement_0:
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	creep_up
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	creep_up
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	creep_up
	step_end

# 94 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza_Movement_1:
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	creep_down
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	creep_down
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	creep_down
	step_end

SkyPillar_Top_Text_RayquazaFlewOff::
# 128 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened RAYQUAZA flew off…$"
