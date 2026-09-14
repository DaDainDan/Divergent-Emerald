SootopolisCity_MapScripts::
# 2 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD
# 20 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 79 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_MapScripts_MAP_SCRIPT_ON_RESUME
# 83 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 87 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_VISITED_PACIFIDLOG_TOWN, SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_2
SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_6
SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 31, 32, METATILE_Sootopolis_GymDoor_Closed, TRUE
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_1

SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 7 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 8 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 9 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 9, 26, METATILE_Sootopolis_Door_Closed, TRUE
# 10 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 44, 17, METATILE_Sootopolis_Door_Closed, TRUE
# 11 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 8, 35, METATILE_Sootopolis_Door_Closed, TRUE
# 12 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 53, 28, METATILE_Sootopolis_Door_Closed, TRUE
# 13 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 45, 6, METATILE_Sootopolis_Door_Closed, TRUE
# 14 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 48, 25, METATILE_Sootopolis_Door_Closed, TRUE
# 15 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 51, 36, METATILE_Sootopolis_Door_Closed, TRUE
# 16 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 31, 32, METATILE_Sootopolis_GymDoor_Closed, TRUE
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_4

SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 6 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_4

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 21 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 22 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 22 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 25 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_ge SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 33 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 0
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 36 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_ge SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 49 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_27
# 49 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_27
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 53 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_38
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_37:
# 58 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_41
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_40:
# 70 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 7
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_44
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_43:
	end

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 23 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 26 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
# 26 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
# 29 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 0
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 25 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 7
	goto_if_lt SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 34 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 31, 18
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 27 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_DOWNPOUR
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 30 "data/maps/SootopolisCity/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 37 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_le SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_33
# 37 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
	goto_if_le SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_33
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_32:
# 40 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_KIRI, 13, 48
# 41 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_BOY_1, 46, 32
# 42 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_NINJA_BOY, 48, 41
# 43 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WOMAN_1, 45, 43
# 44 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_KIRI, MOVEMENT_TYPE_FACE_UP
# 45 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_BOY_1, MOVEMENT_TYPE_FACE_LEFT
# 46 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_NINJA_BOY, MOVEMENT_TYPE_FACE_LEFT
# 47 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WOMAN_1, MOVEMENT_TYPE_FACE_LEFT
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_20

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 36 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 7
	goto_if_lt SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_20

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_26:
# 50 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 30, 18
# 51 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 32, 18
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_25

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
# 49 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_26
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_25

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_33:
# 38 "data/maps/SootopolisCity/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_LEGENDS_BATTLE
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_32

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_38:
# 54 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 30, 18
# 55 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 31, 18
# 56 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 32, 18
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_37

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_41:
# 59 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 31, 18
# 60 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 29, 33
# 61 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_MAXIE, 33, 35
# 62 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_ARCHIE, 34, 35
# 63 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_SOOTOPOLIS_WALLACE_STATE
# 64 "data/maps/SootopolisCity/scripts.pory"
	case 0, SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_48
# 65 "data/maps/SootopolisCity/scripts.pory"
	case 1, SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_49
# 66 "data/maps/SootopolisCity/scripts.pory"
	case 2, SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_50
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_46:
# 68 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_40

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_44:
# 71 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 72 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 73 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 74 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 75 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 8
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_43

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_48:
# 64 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 31, 33
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_46

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_49:
# 65 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 32, 33
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_46

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_50:
# 66 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 30, 33
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_46

SootopolisCity_MapScripts_MAP_SCRIPT_ON_RESUME:
# 80 "data/maps/SootopolisCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
	end

SootopolisCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 84 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 2, SootopolisCity_EventScript_StartKyogreGroudonScene
# 85 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_StartRayquazaScene
	.2byte 0

SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 88 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 6, SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 89 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_SKY_PILLAR_STATE
# 90 "data/maps/SootopolisCity/scripts.pory"
	case 1, SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_3
# 91 "data/maps/SootopolisCity/scripts.pory"
	case 2, SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_4
SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1:
	end

SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_3:
# 90 "data/maps/SootopolisCity/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1

SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_4:
# 92 "data/maps/SootopolisCity/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 93 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1


SootopolisCity_EventScript_StartKyogreGroudonScene::
# 101 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 102 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_LegendSceneIntro
# 103 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KyogreGroudonScene
	end


SootopolisCity_EventScript_LegendSceneIntro::
# 109 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8002, 0
# 110 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 111 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8004, 43
	goto_if_ne SootopolisCity_EventScript_LegendSceneIntro_2
# 111 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8005, 32
	goto_if_ne SootopolisCity_EventScript_LegendSceneIntro_2
SootopolisCity_EventScript_LegendSceneIntro_1:
# 114 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 115 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 116 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_0x8002
# 117 "data/maps/SootopolisCity/scripts.pory"
	case 0, SootopolisCity_EventScript_LegendSceneIntro_8
# 118 "data/maps/SootopolisCity/scripts.pory"
	case 1, SootopolisCity_EventScript_LegendSceneIntro_9
SootopolisCity_EventScript_LegendSceneIntro_6:
# 120 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 121 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 122 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 123 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
	return

SootopolisCity_EventScript_LegendSceneIntro_2:
# 112 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8002, 1
	goto SootopolisCity_EventScript_LegendSceneIntro_1

SootopolisCity_EventScript_LegendSceneIntro_8:
# 117 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_EventScript_LegendSceneIntro_Movement_0
	goto SootopolisCity_EventScript_LegendSceneIntro_6

SootopolisCity_EventScript_LegendSceneIntro_9:
# 118 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_EventScript_LegendSceneIntro_Movement_1
	goto SootopolisCity_EventScript_LegendSceneIntro_6


SootopolisCity_EventScript_KyogreGroudonScene::
# 128 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 129 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 130 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE
# 131 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 132 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, Common_Movement_StepFasterLeft
# 133 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, Common_Movement_StepFasterRight
# 134 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 135 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 136 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 137 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 138 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 139 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_EventScript_KyogreGroudonScene_Movement_0
# 140 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 141 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 142 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 143 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 144 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 145 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 146 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 147 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_EventScript_KyogreGroudonScene_Movement_1
# 148 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_EventScript_KyogreGroudonScene_Movement_2
# 149 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 150 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 151 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 152 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_EventScript_KyogreGroudonScene_Movement_3
# 153 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_EventScript_KyogreGroudonScene_Movement_4
# 154 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 155 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 156 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 157 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 158 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 159 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 160 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 161 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_EventScript_KyogreGroudonScene_Movement_1
# 162 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_EventScript_KyogreGroudonScene_Movement_2
# 163 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 164 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 165 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 166 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 167 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_EventScript_KyogreGroudonScene_Movement_0
# 168 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 169 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 170 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 171 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 172 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 173 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 174 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 175 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_EventScript_KyogreGroudonScene_Movement_1
# 176 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_EventScript_KyogreGroudonScene_Movement_2
# 177 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 178 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 179 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_EventScript_KyogreGroudonScene_Movement_5
# 180 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_EventScript_KyogreGroudonScene_Movement_6
# 181 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_0x8002
# 182 "data/maps/SootopolisCity/scripts.pory"
	case 0, SootopolisCity_EventScript_KyogreGroudonScene_3
# 183 "data/maps/SootopolisCity/scripts.pory"
	case 1, SootopolisCity_EventScript_KyogreGroudonScene_4
SootopolisCity_EventScript_KyogreGroudonScene_1:
# 185 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 186 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 187 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 3
# 188 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 189 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_KyogreGroudonScene_3:
# 182 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_EventScript_KyogreGroudonScene_Movement_7
	goto SootopolisCity_EventScript_KyogreGroudonScene_1

SootopolisCity_EventScript_KyogreGroudonScene_4:
# 183 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_EventScript_KyogreGroudonScene_Movement_8
	goto SootopolisCity_EventScript_KyogreGroudonScene_1


# 193 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreAttack:
# 195 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 195 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 195 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 196 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 196 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 196 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 197 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 198 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 199 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
	step_end

SootopolisCity_EventScript_StartRayquazaScene::
# 203 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 204 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_LegendSceneIntro
# 205 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaScene
	end


SootopolisCity_EventScript_RayquazaScene::
# 210 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 211 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_GROUDON
# 212 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_KYOGRE
# 213 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 214 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8002, 0
	goto_if_eq SootopolisCity_EventScript_RayquazaScene_2
SootopolisCity_EventScript_RayquazaScene_1:
# 217 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 218 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 219 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8002, 0
	goto_if_eq SootopolisCity_EventScript_RayquazaScene_5
SootopolisCity_EventScript_RayquazaScene_4:
# 222 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 223 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_EventScript_RayquazaScene_Movement_0
# 224 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8002, 1
	goto_if_eq SootopolisCity_EventScript_RayquazaScene_8
SootopolisCity_EventScript_RayquazaScene_7:
# 227 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 228 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 229 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 230 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 231 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 232 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 233 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3
# 234 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 235 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 236 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 237 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 238 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 239 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2
# 240 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 241 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 242 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 243 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 244 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 245 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 246 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 247 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_RAYQUAZA, SootopolisCity_EventScript_RayquazaScene_Movement_1
# 248 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 249 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 250 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 251 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 252 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_0x8002
# 253 "data/maps/SootopolisCity/scripts.pory"
	case 0, SootopolisCity_EventScript_RayquazaScene_12
# 254 "data/maps/SootopolisCity/scripts.pory"
	case 1, SootopolisCity_EventScript_RayquazaScene_13
SootopolisCity_EventScript_RayquazaScene_10:
# 256 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 257 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_CAVE_OF_ORIGIN
# 258 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 259 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 260 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_0x8002
# 261 "data/maps/SootopolisCity/scripts.pory"
	case 0, SootopolisCity_EventScript_RayquazaScene_16
# 262 "data/maps/SootopolisCity/scripts.pory"
	case 1, SootopolisCity_EventScript_RayquazaScene_17
SootopolisCity_EventScript_RayquazaScene_14:
# 264 "data/maps/SootopolisCity/scripts.pory"
	waitstate
	end

SootopolisCity_EventScript_RayquazaScene_2:
# 215 "data/maps/SootopolisCity/scripts.pory"
	hideobjectat LOCALID_SOOTOPOLIS_RAYQUAZA, MAP_SOOTOPOLIS_CITY
	goto SootopolisCity_EventScript_RayquazaScene_1

SootopolisCity_EventScript_RayquazaScene_5:
# 220 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
	goto SootopolisCity_EventScript_RayquazaScene_4

SootopolisCity_EventScript_RayquazaScene_8:
# 225 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_EventScript_RayquazaScene_Movement_0
	goto SootopolisCity_EventScript_RayquazaScene_7

SootopolisCity_EventScript_RayquazaScene_12:
# 253 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
	goto SootopolisCity_EventScript_RayquazaScene_10

SootopolisCity_EventScript_RayquazaScene_13:
# 254 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 2
	goto SootopolisCity_EventScript_RayquazaScene_10

SootopolisCity_EventScript_RayquazaScene_16:
# 261 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 43, 32
	goto SootopolisCity_EventScript_RayquazaScene_14

SootopolisCity_EventScript_RayquazaScene_17:
# 262 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 29, 53
	goto SootopolisCity_EventScript_RayquazaScene_14


SootopolisCity_EventScript_SetRoughWater::
# 269 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 270 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 271 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 272 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 273 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 274 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 275 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 276 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 277 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 278 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 279 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 280 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 281 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 282 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 283 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 284 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 285 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 286 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 287 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 288 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 289 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 290 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 291 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 292 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
	return


# 297 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendariesDown:
# 299 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 299 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 299 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 299 "data/maps/SootopolisCity/scripts.pory"
	walk_down
	step_end

# 303 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanUp:
# 305 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 305 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 305 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 305 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 305 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 305 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 305 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 305 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 306 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 306 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 306 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 306 "data/maps/SootopolisCity/scripts.pory"
	walk_right
	step_end

# 310 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanBack:
# 312 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 312 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 312 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 312 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 312 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 312 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 312 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 312 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 312 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 312 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 312 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 313 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 313 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
	step_end

SootopolisCity_EventScript_CaveOfOriginExpert::
# 317 "data/maps/SootopolisCity/scripts.pory"
	lock_faceplayer
# 318 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 7
	goto_if_ge SootopolisCity_EventScript_CaveOfOriginExpert_2
# 321 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_eq SootopolisCity_EventScript_CaveOfOriginExpert_3
# 324 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
	goto_if_ge SootopolisCity_EventScript_CaveOfOriginExpert_4
# 328 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
SootopolisCity_EventScript_CaveOfOriginExpert_1:
	release_end

SootopolisCity_EventScript_CaveOfOriginExpert_2:
# 319 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_CaveOfOriginExpert_1

SootopolisCity_EventScript_CaveOfOriginExpert_3:
# 322 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_CaveOfOriginExpert_1

SootopolisCity_EventScript_CaveOfOriginExpert_4:
# 325 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_CaveOfOriginExpert_1


SootopolisCity_EventScript_Kiri::
# 334 "data/maps/SootopolisCity/scripts.pory"
	lock_faceplayer
# 335 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_le SootopolisCity_EventScript_Kiri_2
# 335 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 7
	goto_if_ge SootopolisCity_EventScript_Kiri_2
SootopolisCity_EventScript_Kiri_1:
# 338 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_eq SootopolisCity_EventScript_Kiri_7
# 343 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 344 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 345 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 346 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
	release_end

SootopolisCity_EventScript_Kiri_2:
# 336 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriGiveBerry
	goto SootopolisCity_EventScript_Kiri_1

SootopolisCity_EventScript_Kiri_7:
# 339 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 340 "data/maps/SootopolisCity/scripts.pory"
	closemessage
	release_end


SootopolisCity_EventScript_KiriGiveBerry::
# 352 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 353 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 354 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriGiveBerry_2
# 363 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 364 "data/maps/SootopolisCity/scripts.pory"
	giverandomberry BERRY_ID_CHILAN, BERRY_ID_ROSELI
# 365 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_EventScript_KiriGiveBerry_5
SootopolisCity_EventScript_KiriGiveBerry_4:
# 368 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 369 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 370 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 371 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_RESULT
# 372 "data/maps/SootopolisCity/scripts.pory"
	case 0, SootopolisCity_EventScript_KiriGiveBerry_12
# 373 "data/maps/SootopolisCity/scripts.pory"
	case 1, SootopolisCity_EventScript_KiriGiveBerry_13
SootopolisCity_EventScript_KiriGiveBerry_10:
	giveitem VAR_GIFT_ITEM
# 0 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_EventScript_KiriGiveBerry_15
SootopolisCity_EventScript_KiriGiveBerry_14:
# 378 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_KiriGiveBerry_2:
# 355 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 356 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SootopolisCity_EventScript_KiriGiveBerry_8
# 360 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_KiriGiveBerry_5:
# 366 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SootopolisCity_EventScript_KiriGiveBerry_4

SootopolisCity_EventScript_KiriGiveBerry_8:
# 357 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_KiriGiveBerry_12:
# 372 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_FIGY_BERRY
	goto SootopolisCity_EventScript_KiriGiveBerry_10

SootopolisCity_EventScript_KiriGiveBerry_13:
# 373 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_IAPAPA_BERRY
	goto SootopolisCity_EventScript_KiriGiveBerry_10

SootopolisCity_EventScript_KiriGiveBerry_15:
# 376 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SootopolisCity_EventScript_KiriGiveBerry_14


SootopolisCity_EventScript_Woman2::
# 383 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 384 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FacePlayer
# 385 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 386 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_eq SootopolisCity_EventScript_Woman2_2
# 389 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 390 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 391 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FaceOriginalDirection
# 392 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
SootopolisCity_EventScript_Woman2_1:
# 394 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Woman2_2:
# 387 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Woman2_1


SootopolisCity_EventScript_Man::
# 399 "data/maps/SootopolisCity/scripts.pory"
	lock_faceplayer
# 400 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 7
	goto_if_ge SootopolisCity_EventScript_Man_2
# 404 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_Man_2:
# 401 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
	release_end


SootopolisCity_EventScript_Woman1::
# 409 "data/maps/SootopolisCity/scripts.pory"
	lock_faceplayer
# 410 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 7
	goto_if_ge SootopolisCity_EventScript_Woman1_2
# 413 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_eq SootopolisCity_EventScript_Woman1_3
# 416 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
	goto_if_ge SootopolisCity_EventScript_Woman1_4
# 421 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
SootopolisCity_EventScript_Woman1_1:
	release_end

SootopolisCity_EventScript_Woman1_2:
# 411 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Woman1_1

SootopolisCity_EventScript_Woman1_3:
# 414 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Woman1_1

SootopolisCity_EventScript_Woman1_4:
# 417 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 418 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	goto SootopolisCity_EventScript_Woman1_1


SootopolisCity_EventScript_NinjaBoy::
# 427 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 428 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_NINJA_BOY, Common_Movement_FacePlayer
# 429 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 430 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_eq SootopolisCity_EventScript_NinjaBoy_2
# 434 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 7
	goto_if_ge SootopolisCity_EventScript_NinjaBoy_3
# 434 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_le SootopolisCity_EventScript_NinjaBoy_3
# 438 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 439 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end

SootopolisCity_EventScript_NinjaBoy_2:
# 431 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_NinjaBoy_3:
# 435 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
	release_end


SootopolisCity_EventScript_Boy1::
# 444 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 445 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_1, Common_Movement_FacePlayer
# 446 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 447 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_eq SootopolisCity_EventScript_Boy1_2
SootopolisCity_EventScript_Boy1_1:
# 450 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1_5
SootopolisCity_EventScript_Boy1_4:
# 453 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 7
	goto_if_ge SootopolisCity_EventScript_Boy1_8
# 453 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_le SootopolisCity_EventScript_Boy1_8
# 457 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 458 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
SootopolisCity_EventScript_Boy1_7:
	release_end

SootopolisCity_EventScript_Boy1_2:
# 448 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Boy1_1

SootopolisCity_EventScript_Boy1_5:
# 451 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Boy1_4

SootopolisCity_EventScript_Boy1_8:
# 454 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Boy1_7


SootopolisCity_EventScript_GymSign::
# 464 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
	end


SootopolisCity_EventScript_CitySign::
# 469 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
	end


EventScript_ClosedSootopolisDoor::
# 474 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
	end


SootopolisCity_EventScript_Steven::
# 479 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 480 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, Common_Movement_FacePlayer
# 481 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 482 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_Steven_2
SootopolisCity_EventScript_Steven_1:
# 485 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
	goto_if_eq SootopolisCity_EventScript_Steven_5
# 488 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_eq SootopolisCity_EventScript_Steven_6
# 488 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Steven_6
# 491 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_Steven_7
# 495 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SoThatsRayquaza, MSGBOX_DEFAULT
SootopolisCity_EventScript_Steven_4:
# 497 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Steven_2:
# 483 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
	goto SootopolisCity_EventScript_Steven_1

SootopolisCity_EventScript_Steven_5:
# 486 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KnowWhatsNeededToHelpHim, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Steven_4

SootopolisCity_EventScript_Steven_6:
# 489 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NeverBeenToSkyPillar, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Steven_4

SootopolisCity_EventScript_Steven_7:
# 492 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_MaxieArchieLeft, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Steven_4


SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
# 502 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_InvolvedWithCrisisComeWithMe, MSGBOX_DEFAULT
# 503 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 504 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 505 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_FACING
# 506 "data/maps/SootopolisCity/scripts.pory"
	case DIR_WEST, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_3
# 507 "data/maps/SootopolisCity/scripts.pory"
	case DIR_NORTH, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_4
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_1:
# 509 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 510 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoesThisMakeYourFearPokemon, MSGBOX_DEFAULT
# 511 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 512 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
# 513 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
# 514 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 515 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 516 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_EXPERT, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Movement_0
# 517 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 518 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
# 519 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Movement_1
# 520 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 521 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HereWereAreHelpWallace, MSGBOX_DEFAULT
# 522 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 523 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 524 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Movement_2
# 525 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 526 "data/maps/SootopolisCity/scripts.pory"
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
# 527 "data/maps/SootopolisCity/scripts.pory"
	waitstate
	end

SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_3:
# 506 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
	goto SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_1

SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_4:
# 507 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
	goto SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_1


# 531 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
# 533 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 533 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 533 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 534 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 535 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 535 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 535 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 535 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 535 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 535 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 535 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 535 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 535 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 535 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 535 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 536 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 537 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 537 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 537 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 537 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 538 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 538 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 538 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 538 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 539 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 539 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 539 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 539 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 539 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 539 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 539 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 539 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 539 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 539 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 539 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 540 "data/maps/SootopolisCity/scripts.pory"
	step_faster_down
	step_end

# 543 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
# 545 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 546 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 546 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 546 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 547 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 548 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 548 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 548 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 548 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 548 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 548 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 548 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 548 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 548 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 548 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 548 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 549 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 550 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 550 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 550 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 550 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 551 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 551 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 551 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 551 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 552 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 552 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 552 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 552 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 552 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 552 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 552 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 552 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 552 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 552 "data/maps/SootopolisCity/scripts.pory"
	walk_up
	step_end

# 555 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
# 557 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 557 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 557 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 557 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 558 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 559 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 559 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 559 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 559 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 559 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 559 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 559 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 559 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 559 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 559 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 559 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 560 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 561 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 561 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 561 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 561 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 562 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 562 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 562 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 562 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 563 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 563 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 563 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 563 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 563 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 563 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 563 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 563 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 563 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 563 "data/maps/SootopolisCity/scripts.pory"
	walk_up
	step_end

# 566 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
# 568 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 568 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 569 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 569 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 569 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 569 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 570 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 570 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 571 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 571 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 571 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 571 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 571 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 572 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 573 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 573 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 573 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 573 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 574 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 574 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 574 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 575 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 575 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 575 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 575 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 575 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 576 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 576 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 576 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 576 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 577 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 577 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 577 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 577 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 577 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 577 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 577 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 577 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 578 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 578 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 578 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 578 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 578 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 578 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 578 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 578 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 579 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 579 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 579 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 579 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 580 "data/maps/SootopolisCity/scripts.pory"
	delay_4
# 581 "data/maps/SootopolisCity/scripts.pory"
	step_faster_left
# 582 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 582 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 583 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 584 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 584 "data/maps/SootopolisCity/scripts.pory"
	walk_up
	step_end

# 587 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
# 589 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 589 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 589 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 590 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 590 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 590 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 590 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 591 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 591 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 592 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 592 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 592 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 592 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 592 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 593 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 594 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 594 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 594 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 594 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 595 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 595 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 595 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 596 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 596 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 596 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 596 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 596 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 597 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 597 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 597 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 597 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 598 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 598 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 598 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 598 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 598 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 598 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 598 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 598 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 599 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 599 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 599 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 599 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 599 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 599 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 599 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 599 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 600 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 600 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 600 "data/maps/SootopolisCity/scripts.pory"
	walk_right
	step_end

# 603 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenArriveCaveEntrance:
# 605 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 605 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 606 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 607 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 608 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 609 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 609 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 609 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 610 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 611 "data/maps/SootopolisCity/scripts.pory"
	step_faster_left
	step_end

SootopolisCity_EventScript_Boy2::
# 615 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 616 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FacePlayer
# 617 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 618 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_eq SootopolisCity_EventScript_Boy2_2
# 622 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 623 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 624 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FaceOriginalDirection
# 625 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
SootopolisCity_EventScript_Boy2_1:
# 627 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Boy2_2:
# 619 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 620 "data/maps/SootopolisCity/scripts.pory"
	closemessage
	goto SootopolisCity_EventScript_Boy2_1


SootopolisCity_EventScript_BlackBelt::
# 632 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 633 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_eq SootopolisCity_EventScript_BlackBelt_2
# 638 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 639 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 640 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 641 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 642 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 643 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 644 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 645 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
SootopolisCity_EventScript_BlackBelt_1:
# 647 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_BlackBelt_2:
# 634 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 635 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 636 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_BlackBelt_1


SootopolisCity_EventScript_Girl::
# 652 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 653 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FacePlayer
# 654 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_eq SootopolisCity_EventScript_Girl_2
# 659 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 660 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 661 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FaceOriginalDirection
# 662 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
SootopolisCity_EventScript_Girl_1:
# 664 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Girl_2:
# 656 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 657 "data/maps/SootopolisCity/scripts.pory"
	closemessage
	goto SootopolisCity_EventScript_Girl_1


SootopolisCity_EventScript_Maniac::
# 669 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 670 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FacePlayer
# 671 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 672 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_eq SootopolisCity_EventScript_Maniac_2
# 675 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 676 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 677 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FaceOriginalDirection
# 678 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
SootopolisCity_EventScript_Maniac_1:
# 680 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Maniac_2:
# 673 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Maniac_1


SootopolisCity_EventScript_Wallace::
# 685 "data/maps/SootopolisCity/scripts.pory"
	lock_faceplayer
# 686 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Wallace_2
# 690 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_TAKE_HEART, SootopolisCity_EventScript_Wallace_5
# 694 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_Wallace_8
SootopolisCity_EventScript_Wallace_7:
# 697 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AquaMagmaDidntMeanHarm, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_Wallace_2:
# 687 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_Wallace_5:
# 691 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DazzledByMentor, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_Wallace_8:
# 695 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GiveWaterfall
	goto SootopolisCity_EventScript_Wallace_7


SootopolisCity_EventScript_GiveWaterfall::
# 702 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThankYouForHelpAcceptThis, MSGBOX_DEFAULT
# 703 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_TM_TAKE_HEART
# 704 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_RECEIVED_TM_TAKE_HEART
# 705 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ExplainWaterfallGoToGym, MSGBOX_DEFAULT
# 706 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 707 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 7
# 708 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq SootopolisCity_EventScript_GiveWaterfall_2
# 714 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_EventScript_GiveWaterfall_Movement_1
# 715 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 716 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 717 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
SootopolisCity_EventScript_GiveWaterfall_1:
	release_end

SootopolisCity_EventScript_GiveWaterfall_2:
# 709 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_EventScript_GiveWaterfall_Movement_0
# 710 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 711 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 712 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 2
	goto SootopolisCity_EventScript_GiveWaterfall_1


SootopolisCity_EventScript_Maxie::
# 723 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 724 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_eq SootopolisCity_EventScript_Maxie_2
# 731 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GroudonPleaseStop, MSGBOX_DEFAULT
# 732 "data/maps/SootopolisCity/scripts.pory"
	closemessage
SootopolisCity_EventScript_Maxie_1:
# 734 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Maxie_2:
# 725 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AfterAllOurScheming, MSGBOX_DEFAULT
# 726 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 727 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_ARCHIE_SOOTOPOLIS, SootopolisCity_EventScript_Maxie_5
	goto SootopolisCity_EventScript_Maxie_1

SootopolisCity_EventScript_Maxie_5:
# 728 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_MaxieArchieLeave
	goto SootopolisCity_EventScript_Maxie_1


SootopolisCity_EventScript_Archie::
# 739 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 740 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_eq SootopolisCity_EventScript_Archie_2
# 747 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KyogreCalmDown, MSGBOX_DEFAULT
# 748 "data/maps/SootopolisCity/scripts.pory"
	closemessage
SootopolisCity_EventScript_Archie_1:
# 750 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Archie_2:
# 741 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TryingMeaninglessToPokemon, MSGBOX_DEFAULT
# 742 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 743 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_MAXIE_SOOTOPOLIS, SootopolisCity_EventScript_Archie_5
	goto SootopolisCity_EventScript_Archie_1

SootopolisCity_EventScript_Archie_5:
# 744 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_MaxieArchieLeave
	goto SootopolisCity_EventScript_Archie_1


SootopolisCity_EventScript_MaxieArchieLeave::
# 755 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 756 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 757 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 758 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 759 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 760 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 2
# 761 "data/maps/SootopolisCity/scripts.pory"
	warpsilent MAP_SOOTOPOLIS_CITY, 31, 34
# 762 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 763 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end


# 768 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_Levitate:
# 770 "data/maps/SootopolisCity/scripts.pory"
	levitate
	step_end

# 774 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_DestroyTask:
# 776 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
	step_end

# 117 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendSceneIntro_Movement_0:
# 117 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 117 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 117 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 117 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 117 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 117 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 117 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 117 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 117 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 117 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 117 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 117 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
	step_end

# 118 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendSceneIntro_Movement_1:
# 118 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 118 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 118 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 118 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 118 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 118 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 118 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 118 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 118 "data/maps/SootopolisCity/scripts.pory"
	walk_up
	step_end

# 139 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_0:
# 139 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 139 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 139 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 139 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 139 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 139 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 139 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 139 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 139 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 139 "data/maps/SootopolisCity/scripts.pory"
	run_right
	step_end

# 147 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_1:
# 147 "data/maps/SootopolisCity/scripts.pory"
	lock_look
# 147 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 147 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 147 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 147 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 147 "data/maps/SootopolisCity/scripts.pory"
	unlock_look
	step_end

# 148 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_2:
# 148 "data/maps/SootopolisCity/scripts.pory"
	lock_look
# 148 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 148 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 148 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 148 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 148 "data/maps/SootopolisCity/scripts.pory"
	unlock_look
	step_end

# 152 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_3:
# 152 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 152 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 152 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 152 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 152 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 152 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 152 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 152 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 152 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 152 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 152 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 152 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
	step_end

# 153 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_4:
# 153 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 153 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 153 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 153 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 153 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 153 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 153 "data/maps/SootopolisCity/scripts.pory"
	run_right
	step_end

# 179 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_5:
# 179 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 179 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 179 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 179 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 179 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 179 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
	step_end

# 180 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_6:
# 180 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 180 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 180 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 180 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 180 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 180 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
	step_end

# 182 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_7:
# 182 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 182 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 182 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 182 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 182 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 182 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 182 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 182 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 182 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 182 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 182 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 182 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
	step_end

# 183 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_8:
# 183 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 183 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 183 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 183 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 183 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 183 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 183 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 183 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 183 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
	step_end

# 223 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaScene_Movement_0:
# 223 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 223 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 223 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 223 "data/maps/SootopolisCity/scripts.pory"
	walk_up
	step_end

# 247 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaScene_Movement_1:
# 247 "data/maps/SootopolisCity/scripts.pory"
	run_up
# 247 "data/maps/SootopolisCity/scripts.pory"
	sprint_up
# 247 "data/maps/SootopolisCity/scripts.pory"
	sprint_up
# 247 "data/maps/SootopolisCity/scripts.pory"
	sprint_up
# 247 "data/maps/SootopolisCity/scripts.pory"
	sprint_up
# 247 "data/maps/SootopolisCity/scripts.pory"
	sprint_up
# 247 "data/maps/SootopolisCity/scripts.pory"
	sprint_up
	step_end

# 516 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Movement_0:
# 516 "data/maps/SootopolisCity/scripts.pory"
	creep_left
# 516 "data/maps/SootopolisCity/scripts.pory"
	step_faster_right
	step_end

# 519 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Movement_1:
# 519 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 519 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 519 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 519 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 519 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 519 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 519 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 519 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 519 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 519 "data/maps/SootopolisCity/scripts.pory"
	step_faster_right
	step_end

# 524 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Movement_2:
# 524 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 524 "data/maps/SootopolisCity/scripts.pory"
	walk_up
	step_end

# 709 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall_Movement_0:
# 709 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 709 "data/maps/SootopolisCity/scripts.pory"
	step_faster_down
	step_end

# 714 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall_Movement_1:
# 714 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 714 "data/maps/SootopolisCity/scripts.pory"
	step_faster_down
	step_end

SootopolisCity_Text_GymSign::
# 779 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\n"
	.string "LEADER: JUAN\p"
	.string "“The GYM LEADER with the beauty\n"
	.string "of pure water!”$"

SootopolisCity_Text_CitySign::
# 787 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY\p"
	.string "“The mystical city where history\n"
	.string "slumbers.”$"

SootopolisCity_Text_DoorIsClosed::
# 794 "data/maps/SootopolisCity/scripts.pory"
	.string "The door is closed.$"

SootopolisCity_Text_PhysicallyFitLivingHere::
# 798 "data/maps/SootopolisCity/scripts.pory"
	.string "Diving in the sea. Climbing up and\n"
	.string "down stairs all the time…\p"
	.string "If you live in this town, you end up\n"
	.string "getting physically fit.$"

SootopolisCity_Text_GiantPokemonSuddenlyAppeared::
# 806 "data/maps/SootopolisCity/scripts.pory"
	.string "These giant POKéMON suddenly appeared\n"
	.string "in the middle of the city!\p"
	.string "And, I've never seen them before!\p"
	.string "Why are they smashing into each\n"
	.string "other like that?\p"
	.string "Why can't they be friends, those\n"
	.string "POKéMON?$"

SootopolisCity_Text_WhatIsThatGreenPokemon::
# 819 "data/maps/SootopolisCity/scripts.pory"
	.string "What? What? What?\n"
	.string "What is that green POKéMON?!$"

SootopolisCity_Text_WhereDidLegendariesGo::
# 824 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON and KYOGRE…\n"
	.string "Where did they go?\p"
	.string "Will they cause droughts or downpours\n"
	.string "somewhere else?$"

SootopolisCity_Text_TwoPokemonArentAngry::
# 832 "data/maps/SootopolisCity/scripts.pory"
	.string "I just get this sense somehow that\n"
	.string "the two POKéMON aren't angry.\p"
	.string "I think… They probably can't control\n"
	.string "their own power…$"

SootopolisCity_Text_FlyingMonStoppedRampage::
# 840 "data/maps/SootopolisCity/scripts.pory"
	.string "That flying POKéMON came down from\n"
	.string "the sky and stopped the rampaging\l"
	.string "POKéMON…$"

SootopolisCity_Text_WonderWhatWorldIsLike::
# 846 "data/maps/SootopolisCity/scripts.pory"
	.string "I… I've never been out of this city.\p"
	.string "I wonder what the world is like on\n"
	.string "the other side of this round sky?$"

SootopolisCity_Text_ThisIsWicked::
# 853 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
	.string "This is wicked!$"

SootopolisCity_Text_ThatWasWicked::
# 858 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
	.string "That was wicked!$"

SootopolisCity_Text_GoRedAndBlueMon::
# 863 "data/maps/SootopolisCity/scripts.pory"
	.string "Go for it, red POKéMON!\n"
	.string "Don't back off, blue POKéMON!$"

SootopolisCity_Text_DoYouKnowMonNames::
# 868 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
	.string "Hi, do you know the names of those\n"
	.string "POKéMON fighting over there?$"

SootopolisCity_Text_GreenOneSettlesThings::
# 875 "data/maps/SootopolisCity/scripts.pory"
	.string "I was wondering which one would win,\n"
	.string "the red one or the blue one, but, oh no,\l"
	.string "it's the green one that settles things!\p"
	.string "Talk about a huge turn of events!$"

SootopolisCity_Text_SeeingLegendWithOwnEyes::
# 883 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
	.string "the land and sea were shaped by\l"
	.string "a colossal battle between POKéMON.\p"
	.string "Well, I'm seeing that happen with\n"
	.string "my very own eyes!\p"
	.string "Whoa! I never expected to be\n"
	.string "witness to something this huge!$"

SootopolisCity_Text_SawLegendWithOwnEyes::
# 895 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
	.string "the land and sea were shaped by\l"
	.string "a colossal battle between POKéMON.\p"
	.string "Well, I saw that happen with\n"
	.string "my very own eyes!\p"
	.string "Whoa! I never expected to be\n"
	.string "witness to something this huge!$"

SootopolisCity_Text_BigPokemonFighting::
# 907 "data/maps/SootopolisCity/scripts.pory"
	.string "A big POKéMON is fighting with\n"
	.string "another big POKéMON!\p"
	.string "Please, someone make them stop!$"

SootopolisCity_Text_PrettyMonCameFromSky::
# 914 "data/maps/SootopolisCity/scripts.pory"
	.string "A pretty POKéMON came down from\n"
	.string "the sky…$"

SootopolisCity_Text_SootopolisWillBeWrecked::
# 919 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, no!\n"
	.string "SOOTOPOLIS CITY will get wrecked!$"

SootopolisCity_Text_SootopolisDidntGetWrecked::
# 924 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY didn't get wrecked!$"

SootopolisCity_Text_NoOrdinaryTourist::
# 928 "data/maps/SootopolisCity/scripts.pory"
	.string "Hm!\n"
	.string "You've come all the way to SOOTOPOLIS?\l"
	.string "You're no ordinary tourist.\p"
	.string "But I suppose that doesn't make you\n"
	.string "an extraordinary tourist, either.$"

SootopolisCity_Text_CityRegainedCalm::
# 937 "data/maps/SootopolisCity/scripts.pory"
	.string "The city has regained its calm…$"

SootopolisCity_Text_CaveOfOriginPleaseLeave::
# 941 "data/maps/SootopolisCity/scripts.pory"
	.string "Who might you be?\p"
	.string "This is the CAVE OF ORIGIN.\p"
	.string "The spirits of POKéMON, becalmed at\n"
	.string "MT. PYRE, are said to be revived here.\p"
	.string "Please leave.$"

SootopolisCity_Text_LeadSuperiorTrainerToCave::
# 952 "data/maps/SootopolisCity/scripts.pory"
	.string "A person with a strong will and\n"
	.string "superior talent…\p"
	.string "A TRAINER who has knowledge and\n"
	.string "experience of many kinds of POKéMON…\p"
	.string "If such a person were to appear, I was\n"
	.string "instructed by WALLACE to lead that\l"
	.string "TRAINER to this CAVE.$"

SootopolisCity_Text_AwakenedPokemonClash::
# 964 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, my…\p"
	.string "The clash between the two awakened\n"
	.string "POKéMON was quelled by the awakening\l"
	.string "of a third POKéMON…$"

SootopolisCity_Text_CaveOfOriginSleepsToo::
# 972 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN…\p"
	.string "With the passing of the crisis,\n"
	.string "the cave, too, shall sleep…$"

SootopolisCity_Text_SootopolisSkyBeautiful::
# 979 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS sprang up as a town in\n"
	.string "the crater of a volcano.\p"
	.string "If you look up at the sky, the lip of\n"
	.string "the crater is also visible.\l"
	.string "So, all you see is the sky in a circle.\p"
	.string "But that's what makes the sky above\n"
	.string "SOOTOPOLIS the most beautiful.$"

SootopolisCity_Text_GiganticPokemonFight::
# 991 "data/maps/SootopolisCity/scripts.pory"
	.string "When two POKéMON that gigantic\n"
	.string "are fighting that savagely, there's\l"
	.string "not much that we can do.$"

SootopolisCity_Text_FearedWorstWhenPokemonFlewDown::
# 997 "data/maps/SootopolisCity/scripts.pory"
	.string "When that third POKéMON flew down,\n"
	.string "I feared the worst.$"

SootopolisCity_Text_NightSkyFavoriteScenery::
# 1002 "data/maps/SootopolisCity/scripts.pory"
	.string "A circle of a night sky framed by\n"
	.string "the crater of a volcano…\p"
	.string "And in that ring, stars flicker and\n"
	.string "blink as if they were alive…\l"
	.string "It's my favorite scenery.$"

SootopolisCity_Text_WeatherWentWild::
# 1011 "data/maps/SootopolisCity/scripts.pory"
	.string "The weather was clear this morning,\n"
	.string "but…\p"
	.string "All of a sudden, dark clouds brewed up,\n"
	.string "rain started falling in sheets, and\l"
	.string "there was thunder and lightning, too.\p"
	.string "The weather just went completely\n"
	.string "wild!\p"
	.string "Is all of this because of those\n"
	.string "POKéMON?$"

SootopolisCity_Text_YouBroughtFlyingMon::
# 1026 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\p"
	.string "It was you who brought that flying\n"
	.string "POKéMON here?\p"
	.string "Well, aren't you amazing!$"

SootopolisCity_Text_GroudonPleaseStop::
# 1035 "data/maps/SootopolisCity/scripts.pory"
	.string "{SPEAKER NAME_MAXIE}G… GROUDON…\n"
	.string "Please! Stop what you're doing!\p"
	.string "I know the extent of your power now!\p"
	.string "If you keep going, all HOENN, not just\n"
	.string "SOOTOPOLIS, will be utterly ruined!$"

SootopolisCity_Text_AfterAllOurScheming::
# 1045 "data/maps/SootopolisCity/scripts.pory"
	.string "{SPEAKER NAME_MAXIE}So the super-ancient POKéMON\n"
	.string "weren't only GROUDON and KYOGRE…\p"
	.string "After all our fruitless scheming and\n"
	.string "frantic efforts, that one POKéMON's\l"
	.string "simple action puts everything right\l"
	.string "again as if nothing had happened…\p"
	.string "Fu…\n"
	.string "Fuhahaha…$"

SootopolisCity_Text_KyogreCalmDown::
# 1058 "data/maps/SootopolisCity/scripts.pory"
	.string "{SPEAKER NAME_ARCHIE}KYOGRE! What's wrong?!\n"
	.string "Look over here! It's the RED ORB!\l"
	.string "Calm down! KYOGRE!\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "It's no good!\n"
	.string "It's not responding at all!$"

SootopolisCity_Text_TryingMeaninglessToPokemon::
# 1070 "data/maps/SootopolisCity/scripts.pory"
	.string "{SPEAKER NAME_ARCHIE}KYOGRE and GROUDON both\n"
	.string "flew off to who knows where.\p"
	.string "The weather in HOENN has returned\n"
	.string "to its normal state…\p"
	.string "Haha…\n"
	.string "Hahaha…\p"
	.string "Maybe what we were trying to do was\n"
	.string "something small, even meaningless,\l"
	.string "to POKéMON…$"

SootopolisCity_Text_InvolvedWithCrisisComeWithMe::
# 1085 "data/maps/SootopolisCity/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}Those POKéMON fighting…\n"
	.string "GROUDON… And KYOGRE…\p"
	.string "The two super-ancient POKéMON\n"
	.string "were awakened from a long sleep…\p"
	.string "And now they are smashing each other\n"
	.string "with their uncontrollable energy…\p"
	.string "…{PLAYER}{KUN}.\p"
	.string "You being here now I'll take to mean\n"
	.string "that you're prepared to become\l"
	.string "involved in this crisis.\p"
	.string "Well, then, there's someone that\n"
	.string "I'd like you to meet.\p"
	.string "Come with me, please.$"

SootopolisCity_Text_DoesThisMakeYourFearPokemon::
# 1107 "data/maps/SootopolisCity/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}Listen, {PLAYER}{KUN}.\p"
	.string "Does seeing GROUDON and KYOGRE make\n"
	.string "you think POKéMON are to be feared?\p"
	.string "But that's not true.\n"
	.string "POKéMON are really more…\p"
	.string "…Why am I asking you this?\n"
	.string "You already know.$"

SootopolisCity_Text_HereWereAreHelpWallace::
# 1120 "data/maps/SootopolisCity/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}Okay, here we are!\p"
	.string "Inside here you'll find someone named\n"
	.string "WALLACE.\p"
	.string "I think you have what's needed to\n"
	.string "help him…$"

SootopolisCity_Text_KnowWhatsNeededToHelpHim::
# 1130 "data/maps/SootopolisCity/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}I think you have what's\n"
	.string "needed to help him…$"

SootopolisCity_Text_NeverBeenToSkyPillar::
# 1135 "data/maps/SootopolisCity/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}The SKY PILLAR…\p"
	.string "I've never been there.\n"
	.string "I wonder where it could be?$"

SootopolisCity_Text_SoThatsRayquaza::
# 1142 "data/maps/SootopolisCity/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}So that's RAYQUAZA…\p"
	.string "It's incredible how the two rampaging\n"
	.string "POKéMON would flee from it in fear…$"

SootopolisCity_Text_MaxieArchieLeft::
# 1149 "data/maps/SootopolisCity/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}It looks like both MAXIE and\n"
	.string "ARCHIE have gone away somewhere.\p"
	.string "Perhaps they've gone to MT. PYRE to\n"
	.string "return those ORBS…$"

SootopolisCity_Text_HaventYouScaledSkyPillar::
# 1157 "data/maps/SootopolisCity/scripts.pory"
	.string "{SPEAKER NAME_WALLACE}Oh?\n"
	.string "{PLAYER}{KUN}?\p"
	.string "Haven't you scaled the SKY PILLAR\n"
	.string "yet?\p"
	.string "I'm sure that you can make it to\n"
	.string "the top of the SKY PILLAR…$"

SootopolisCity_Text_AquaMagmaDidntMeanHarm::
# 1168 "data/maps/SootopolisCity/scripts.pory"
	.string "{SPEAKER NAME_WALLACE}{PLAYER}{KUN}…\p"
	.string "The leaders of TEAM MAGMA and AQUA,\n"
	.string "I don't think they meant harm.\p"
	.string "It wouldn't hurt to hear what they\n"
	.string "have to say for themselves.$"

SootopolisCity_Text_ThankYouForHelpAcceptThis::
# 1178 "data/maps/SootopolisCity/scripts.pory"
	.string "{SPEAKER NAME_WALLACE}{PLAYER}{KUN}…\n"
	.string "My eyes didn't deceive me.\p"
	.string "Thanks to your help, SOOTOPOLIS…\n"
	.string "No, all of HOENN was saved.\p"
	.string "On behalf of the people, I thank you.\p"
	.string "This is a gift from me.\n"
	.string "Please accept it.$"

SootopolisCity_Text_ExplainWaterfallGoToGym::
# 1191 "data/maps/SootopolisCity/scripts.pory"
	.string "That HIDDEN MACHINE contains\n"
	.string "WATERFALL.\p"
	.string "If you have the RAIN BADGE, a POKéMON\n"
	.string "that has learned that HM move can\l"
	.string "force its way up waterfalls.\p"
	.string "And where does one get the RAIN BADGE?\n"
	.string "You know, don't you?\p"
	.string "That's right! You have to beat\n"
	.string "the SOOTOPOLIS GYM LEADER.\p"
	.string "When you're all set to go, step through\n"
	.string "that door.$"

SootopolisCity_Text_DazzledByMentor::
# 1209 "data/maps/SootopolisCity/scripts.pory"
	.string "{SPEAKER NAME_WALLACE}I'm sure that you will be\n"
	.string "dazzled by my mentor's breathtakingly\l"
	.string "elegant battle style.$"
