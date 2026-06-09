SootopolisCity_MapScripts::
# 2 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD
# 19 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 71 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_MapScripts_MAP_SCRIPT_ON_RESUME
# 75 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 79 "data/maps/SootopolisCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_2
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
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_4

SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 6 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_LOAD_4

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 21 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 21 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 24 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
	goto_if_ge SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 32 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
	goto_if_ge SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 45 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_24
# 45 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_24
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 49 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_35
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_34:
# 54 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_38
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_37:
# 66 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_41
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_40:
	end

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 22 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 25 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
# 25 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
# 28 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 0
	goto_if_eq SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 24 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_lt SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 33 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_le SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_30
# 33 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 1
	goto_if_le SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_30
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 36 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_KIRI, 13, 48
# 37 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_BOY_1, 46, 32
# 38 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_NINJA_BOY, 48, 41
# 39 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WOMAN_1, 45, 43
# 40 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_KIRI, MOVEMENT_TYPE_FACE_UP
# 41 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_BOY_1, MOVEMENT_TYPE_FACE_LEFT
# 42 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_NINJA_BOY, MOVEMENT_TYPE_FACE_LEFT
# 43 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WOMAN_1, MOVEMENT_TYPE_FACE_LEFT
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 32 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_lt SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 26 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_DOWNPOUR
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 29 "data/maps/SootopolisCity/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 46 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 30, 18
# 47 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 32, 18
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_22

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 45 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_22

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_30:
# 34 "data/maps/SootopolisCity/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_LEGENDS_BATTLE
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_29

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_35:
# 50 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 30, 18
# 51 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 31, 18
# 52 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 32, 18
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_34

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_38:
# 55 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 31, 18
# 56 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_STEVEN, 29, 33
# 57 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_MAXIE, 33, 35
# 58 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_ARCHIE, 34, 35
# 59 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_SOOTOPOLIS_WALLACE_STATE
# 60 "data/maps/SootopolisCity/scripts.pory"
	case 0, SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_45
# 61 "data/maps/SootopolisCity/scripts.pory"
	case 1, SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_46
# 62 "data/maps/SootopolisCity/scripts.pory"
	case 2, SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_47
SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_43:
# 64 "data/maps/SootopolisCity/scripts.pory"
	setobjectmovementtype LOCALID_SOOTOPOLIS_WALLACE, MOVEMENT_TYPE_FACE_DOWN
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_37

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_41:
# 67 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_EXPERT, 31, 18
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_40

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_45:
# 60 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 31, 33
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_43

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_46:
# 61 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 32, 33
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_43

SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_47:
# 62 "data/maps/SootopolisCity/scripts.pory"
	setobjectxyperm LOCALID_SOOTOPOLIS_WALLACE, 30, 33
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_43

SootopolisCity_MapScripts_MAP_SCRIPT_ON_RESUME:
# 72 "data/maps/SootopolisCity/scripts.pory"
	setdivewarp MAP_UNDERWATER_SOOTOPOLIS_CITY, 9, 6
	end

SootopolisCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 76 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, SootopolisCity_EventScript_StartKyogreGroudonScene
# 77 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 1, SootopolisCity_EventScript_StartRayquazaScene
	.2byte 0

SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 80 "data/maps/SootopolisCity/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 5, SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 81 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_SKY_PILLAR_STATE
# 82 "data/maps/SootopolisCity/scripts.pory"
	case 1, SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_3
# 83 "data/maps/SootopolisCity/scripts.pory"
	case 2, SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_4
SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1:
	end

SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_3:
# 82 "data/maps/SootopolisCity/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1

SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_4:
# 84 "data/maps/SootopolisCity/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 85 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
	goto SootopolisCity_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1


SootopolisCity_EventScript_StartKyogreGroudonScene::
# 93 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 94 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_LegendSceneIntro
# 95 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KyogreGroudonScene
	end


SootopolisCity_EventScript_LegendSceneIntro::
# 101 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8002, 0
# 102 "data/maps/SootopolisCity/scripts.pory"
	special StorePlayerCoordsInVars
# 103 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8004, 43
	goto_if_ne SootopolisCity_EventScript_LegendSceneIntro_2
# 103 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8005, 32
	goto_if_ne SootopolisCity_EventScript_LegendSceneIntro_2
SootopolisCity_EventScript_LegendSceneIntro_1:
# 106 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 107 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 108 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_0x8002
# 109 "data/maps/SootopolisCity/scripts.pory"
	case 0, SootopolisCity_EventScript_LegendSceneIntro_8
# 110 "data/maps/SootopolisCity/scripts.pory"
	case 1, SootopolisCity_EventScript_LegendSceneIntro_9
SootopolisCity_EventScript_LegendSceneIntro_6:
# 112 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 113 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 114 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 115 "data/maps/SootopolisCity/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
	return

SootopolisCity_EventScript_LegendSceneIntro_2:
# 104 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8002, 1
	goto SootopolisCity_EventScript_LegendSceneIntro_1

SootopolisCity_EventScript_LegendSceneIntro_8:
# 109 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_EventScript_LegendSceneIntro_Movement_0
	goto SootopolisCity_EventScript_LegendSceneIntro_6

SootopolisCity_EventScript_LegendSceneIntro_9:
# 110 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_EventScript_LegendSceneIntro_Movement_1
	goto SootopolisCity_EventScript_LegendSceneIntro_6


SootopolisCity_EventScript_KyogreGroudonScene::
# 120 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_ABNORMAL
# 121 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 122 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, FALSE
# 123 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 124 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, Common_Movement_StepFasterLeft
# 125 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, Common_Movement_StepFasterRight
# 126 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 127 "data/maps/SootopolisCity/scripts.pory"
	delay 60
# 128 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 129 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 130 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 131 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_EventScript_KyogreGroudonScene_Movement_0
# 132 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 133 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 134 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 135 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 136 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 137 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 138 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 139 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_EventScript_KyogreGroudonScene_Movement_1
# 140 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_EventScript_KyogreGroudonScene_Movement_2
# 141 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 142 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 143 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 144 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_EventScript_KyogreGroudonScene_Movement_3
# 145 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_EventScript_KyogreGroudonScene_Movement_4
# 146 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 147 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 148 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 149 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 150 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 151 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 152 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 153 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_EventScript_KyogreGroudonScene_Movement_1
# 154 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_EventScript_KyogreGroudonScene_Movement_2
# 155 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 156 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 157 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 158 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_Movement_KyogreAttack
# 159 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_EventScript_KyogreGroudonScene_Movement_0
# 160 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 161 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 162 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 163 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 164 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 165 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 166 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 167 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_EventScript_KyogreGroudonScene_Movement_1
# 168 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_EventScript_KyogreGroudonScene_Movement_2
# 169 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 170 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 171 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_KYOGRE, SootopolisCity_EventScript_KyogreGroudonScene_Movement_5
# 172 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GROUDON, SootopolisCity_EventScript_KyogreGroudonScene_Movement_6
# 173 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_0x8002
# 174 "data/maps/SootopolisCity/scripts.pory"
	case 0, SootopolisCity_EventScript_KyogreGroudonScene_3
# 175 "data/maps/SootopolisCity/scripts.pory"
	case 1, SootopolisCity_EventScript_KyogreGroudonScene_4
SootopolisCity_EventScript_KyogreGroudonScene_1:
# 177 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 178 "data/maps/SootopolisCity/scripts.pory"
	special RemoveCameraObject
# 179 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 2
# 180 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 181 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_KyogreGroudonScene_3:
# 174 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_EventScript_KyogreGroudonScene_Movement_7
	goto SootopolisCity_EventScript_KyogreGroudonScene_1

SootopolisCity_EventScript_KyogreGroudonScene_4:
# 175 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_EventScript_KyogreGroudonScene_Movement_8
	goto SootopolisCity_EventScript_KyogreGroudonScene_1


# 185 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_KyogreAttack:
# 187 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 187 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 187 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 188 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 188 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 188 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 189 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 190 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 191 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
	step_end

SootopolisCity_EventScript_StartRayquazaScene::
# 195 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 196 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_LegendSceneIntro
# 197 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_RayquazaScene
	end


SootopolisCity_EventScript_RayquazaScene::
# 202 "data/maps/SootopolisCity/scripts.pory"
	call SootopolisCity_EventScript_SetRoughWater
# 203 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_GROUDON
# 204 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_KYOGRE
# 205 "data/maps/SootopolisCity/scripts.pory"
	addobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 206 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8002, 0
	goto_if_eq SootopolisCity_EventScript_RayquazaScene_2
SootopolisCity_EventScript_RayquazaScene_1:
# 209 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, TRUE
# 210 "data/maps/SootopolisCity/scripts.pory"
	special Script_DoRayquazaScene
# 211 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8002, 0
	goto_if_eq SootopolisCity_EventScript_RayquazaScene_5
SootopolisCity_EventScript_RayquazaScene_4:
# 214 "data/maps/SootopolisCity/scripts.pory"
	special SpawnCameraObject
# 215 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_CAMERA, SootopolisCity_EventScript_RayquazaScene_Movement_0
# 216 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_0x8002, 1
	goto_if_eq SootopolisCity_EventScript_RayquazaScene_8
SootopolisCity_EventScript_RayquazaScene_7:
# 219 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 220 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 221 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 222 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 223 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 1
# 224 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 225 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 3
# 226 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 227 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 228 "data/maps/SootopolisCity/scripts.pory"
	waitse
# 229 "data/maps/SootopolisCity/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 230 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8004, 1
# 231 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8005, 2
# 232 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8006, 8
# 233 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_0x8007, 5
# 234 "data/maps/SootopolisCity/scripts.pory"
	special ShakeCamera
# 235 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 236 "data/maps/SootopolisCity/scripts.pory"
	waitmoncry
# 237 "data/maps/SootopolisCity/scripts.pory"
	setweather WEATHER_NONE
# 238 "data/maps/SootopolisCity/scripts.pory"
	doweather
# 239 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_RAYQUAZA, SootopolisCity_EventScript_RayquazaScene_Movement_1
# 240 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 241 "data/maps/SootopolisCity/scripts.pory"
	removeobject LOCALID_SOOTOPOLIS_RAYQUAZA
# 242 "data/maps/SootopolisCity/scripts.pory"
	special WaitWeather
# 243 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_SYS_WEATHER_CTRL
# 244 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_0x8002
# 245 "data/maps/SootopolisCity/scripts.pory"
	case 0, SootopolisCity_EventScript_RayquazaScene_12
# 246 "data/maps/SootopolisCity/scripts.pory"
	case 1, SootopolisCity_EventScript_RayquazaScene_13
SootopolisCity_EventScript_RayquazaScene_10:
# 248 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 249 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_0x8002
# 250 "data/maps/SootopolisCity/scripts.pory"
	case 0, SootopolisCity_EventScript_RayquazaScene_16
# 251 "data/maps/SootopolisCity/scripts.pory"
	case 1, SootopolisCity_EventScript_RayquazaScene_17
SootopolisCity_EventScript_RayquazaScene_14:
# 253 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 254 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 255 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_0x8002
# 256 "data/maps/SootopolisCity/scripts.pory"
	case 0, SootopolisCity_EventScript_RayquazaScene_20
# 257 "data/maps/SootopolisCity/scripts.pory"
	case 1, SootopolisCity_EventScript_RayquazaScene_21
SootopolisCity_EventScript_RayquazaScene_18:
# 259 "data/maps/SootopolisCity/scripts.pory"
	waitstate
	end

SootopolisCity_EventScript_RayquazaScene_2:
# 207 "data/maps/SootopolisCity/scripts.pory"
	hideobjectat LOCALID_SOOTOPOLIS_RAYQUAZA, MAP_SOOTOPOLIS_CITY
	goto SootopolisCity_EventScript_RayquazaScene_1

SootopolisCity_EventScript_RayquazaScene_5:
# 212 "data/maps/SootopolisCity/scripts.pory"
	playse SE_THUNDER
	goto SootopolisCity_EventScript_RayquazaScene_4

SootopolisCity_EventScript_RayquazaScene_8:
# 217 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_EventScript_RayquazaScene_Movement_0
	goto SootopolisCity_EventScript_RayquazaScene_7

SootopolisCity_EventScript_RayquazaScene_12:
# 245 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
	goto SootopolisCity_EventScript_RayquazaScene_10

SootopolisCity_EventScript_RayquazaScene_13:
# 246 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 2
	goto SootopolisCity_EventScript_RayquazaScene_10

SootopolisCity_EventScript_RayquazaScene_16:
# 250 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SOOTOPOLIS
	goto SootopolisCity_EventScript_RayquazaScene_14

SootopolisCity_EventScript_RayquazaScene_17:
# 251 "data/maps/SootopolisCity/scripts.pory"
	fadenewbgm MUS_SURF
	goto SootopolisCity_EventScript_RayquazaScene_14

SootopolisCity_EventScript_RayquazaScene_20:
# 256 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 43, 32
	goto SootopolisCity_EventScript_RayquazaScene_18

SootopolisCity_EventScript_RayquazaScene_21:
# 257 "data/maps/SootopolisCity/scripts.pory"
	warpwhitefade MAP_SOOTOPOLIS_CITY, 29, 53
	goto SootopolisCity_EventScript_RayquazaScene_18


SootopolisCity_EventScript_SetRoughWater::
# 264 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 43, METATILE_Sootopolis_RoughWater, FALSE
# 265 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 43, METATILE_Sootopolis_RoughWater, FALSE
# 266 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 43, METATILE_Sootopolis_RoughWater, FALSE
# 267 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 43, METATILE_Sootopolis_RoughWater, FALSE
# 268 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 44, METATILE_Sootopolis_RoughWater, FALSE
# 269 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 44, METATILE_Sootopolis_RoughWater, FALSE
# 270 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 44, METATILE_Sootopolis_RoughWater, FALSE
# 271 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 44, METATILE_Sootopolis_RoughWater, FALSE
# 272 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 27, 45, METATILE_Sootopolis_RoughWater, FALSE
# 273 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 28, 45, METATILE_Sootopolis_RoughWater, FALSE
# 274 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 29, 45, METATILE_Sootopolis_RoughWater, FALSE
# 275 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 30, 45, METATILE_Sootopolis_RoughWater, FALSE
# 276 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 43, METATILE_Sootopolis_RoughWater, FALSE
# 277 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 43, METATILE_Sootopolis_RoughWater, FALSE
# 278 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 43, METATILE_Sootopolis_RoughWater, FALSE
# 279 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 43, METATILE_Sootopolis_RoughWater, FALSE
# 280 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 44, METATILE_Sootopolis_RoughWater, FALSE
# 281 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 44, METATILE_Sootopolis_RoughWater, FALSE
# 282 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 44, METATILE_Sootopolis_RoughWater, FALSE
# 283 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 44, METATILE_Sootopolis_RoughWater, FALSE
# 284 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 32, 45, METATILE_Sootopolis_RoughWater, FALSE
# 285 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 33, 45, METATILE_Sootopolis_RoughWater, FALSE
# 286 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 34, 45, METATILE_Sootopolis_RoughWater, FALSE
# 287 "data/maps/SootopolisCity/scripts.pory"
	setmetatile 35, 45, METATILE_Sootopolis_RoughWater, FALSE
	return


# 292 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerApproachLegendariesDown:
# 294 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 294 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 294 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 294 "data/maps/SootopolisCity/scripts.pory"
	walk_down
	step_end

# 298 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanUp:
# 300 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 300 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 300 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 300 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 300 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 300 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 300 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 300 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 301 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 301 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 301 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 301 "data/maps/SootopolisCity/scripts.pory"
	walk_right
	step_end

# 305 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_UnusedPanBack:
# 307 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 307 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 307 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 307 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 307 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 307 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 307 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 307 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 307 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 307 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 307 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 308 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 308 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
	step_end

SootopolisCity_EventScript_CaveOfOriginExpert::
# 312 "data/maps/SootopolisCity/scripts.pory"
	lock_faceplayer
# 313 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_ge SootopolisCity_EventScript_CaveOfOriginExpert_2
# 316 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_CaveOfOriginExpert_3
# 319 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_ge SootopolisCity_EventScript_CaveOfOriginExpert_4
# 323 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginPleaseLeave, MSGBOX_DEFAULT
SootopolisCity_EventScript_CaveOfOriginExpert_1:
	release_end

SootopolisCity_EventScript_CaveOfOriginExpert_2:
# 314 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CaveOfOriginSleepsToo, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_CaveOfOriginExpert_1

SootopolisCity_EventScript_CaveOfOriginExpert_3:
# 317 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AwakenedPokemonClash, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_CaveOfOriginExpert_1

SootopolisCity_EventScript_CaveOfOriginExpert_4:
# 320 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LeadSuperiorTrainerToCave, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_CaveOfOriginExpert_1


SootopolisCity_EventScript_Kiri::
# 329 "data/maps/SootopolisCity/scripts.pory"
	lock_faceplayer
# 330 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
	goto_if_le SootopolisCity_EventScript_Kiri_2
# 330 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_ge SootopolisCity_EventScript_Kiri_2
SootopolisCity_EventScript_Kiri_1:
# 333 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Kiri_7
# 338 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_BigPokemonFighting, MSGBOX_DEFAULT
# 339 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 340 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_KIRI, Common_Movement_FaceOriginalDirection
# 341 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
	release_end

SootopolisCity_EventScript_Kiri_2:
# 331 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_KiriGiveBerry
	goto SootopolisCity_EventScript_Kiri_1

SootopolisCity_EventScript_Kiri_7:
# 334 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PrettyMonCameFromSky, MSGBOX_DEFAULT
# 335 "data/maps/SootopolisCity/scripts.pory"
	closemessage
	release_end


SootopolisCity_EventScript_KiriGiveBerry::
# 347 "data/maps/SootopolisCity/scripts.pory"
	dotimebasedevents
# 348 "data/maps/SootopolisCity/scripts.pory"
	special GetPlayerBigGuyGirlString
# 349 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY, SootopolisCity_EventScript_KiriGiveBerry_2
# 358 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NameIsKiriHaveOneOfThese, MSGBOX_DEFAULT
# 359 "data/maps/SootopolisCity/scripts.pory"
	giverandomberry BERRY_ID_POMEG, BERRY_ID_NOMEL
# 360 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_EventScript_KiriGiveBerry_5
SootopolisCity_EventScript_KiriGiveBerry_4:
# 363 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY
# 364 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiveYouThisBerryToo, MSGBOX_DEFAULT
# 365 "data/maps/SootopolisCity/scripts.pory"
	random 2
# 366 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_RESULT
# 367 "data/maps/SootopolisCity/scripts.pory"
	case 0, SootopolisCity_EventScript_KiriGiveBerry_12
# 368 "data/maps/SootopolisCity/scripts.pory"
	case 1, SootopolisCity_EventScript_KiriGiveBerry_13
SootopolisCity_EventScript_KiriGiveBerry_10:
	giveitem VAR_GIFT_ITEM
# 0 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_EventScript_KiriGiveBerry_15
SootopolisCity_EventScript_KiriGiveBerry_14:
# 373 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatKindOfWishInYourName, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_KiriGiveBerry_2:
# 350 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_LikeSeasonBornIn, MSGBOX_YESNO
# 351 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SootopolisCity_EventScript_KiriGiveBerry_8
# 355 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_OhDoesntMatter, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_KiriGiveBerry_5:
# 361 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SootopolisCity_EventScript_KiriGiveBerry_4

SootopolisCity_EventScript_KiriGiveBerry_8:
# 352 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThenILoveAutumn, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_KiriGiveBerry_12:
# 367 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_FIGY_BERRY
	goto SootopolisCity_EventScript_KiriGiveBerry_10

SootopolisCity_EventScript_KiriGiveBerry_13:
# 368 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_IAPAPA_BERRY
	goto SootopolisCity_EventScript_KiriGiveBerry_10

SootopolisCity_EventScript_KiriGiveBerry_15:
# 371 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SootopolisCity_EventScript_KiriGiveBerry_14


SootopolisCity_EventScript_Woman2::
# 378 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 379 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FacePlayer
# 380 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 381 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Woman2_2
# 384 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WeatherWentWild, MSGBOX_DEFAULT
# 385 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 386 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WOMAN_2, Common_Movement_FaceOriginalDirection
# 387 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
SootopolisCity_EventScript_Woman2_1:
# 389 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Woman2_2:
# 382 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_YouBroughtFlyingMon, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Woman2_1


SootopolisCity_EventScript_Man::
# 394 "data/maps/SootopolisCity/scripts.pory"
	lock_faceplayer
# 395 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_ge SootopolisCity_EventScript_Man_2
# 399 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NoOrdinaryTourist, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_Man_2:
# 396 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CityRegainedCalm, MSGBOX_DEFAULT
	release_end


SootopolisCity_EventScript_Woman1::
# 404 "data/maps/SootopolisCity/scripts.pory"
	lock_faceplayer
# 405 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_ge SootopolisCity_EventScript_Woman1_2
# 408 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Woman1_3
# 411 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_ge SootopolisCity_EventScript_Woman1_4
# 416 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisSkyBeautiful, MSGBOX_DEFAULT
SootopolisCity_EventScript_Woman1_1:
	release_end

SootopolisCity_EventScript_Woman1_2:
# 406 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NightSkyFavoriteScenery, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Woman1_1

SootopolisCity_EventScript_Woman1_3:
# 409 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FearedWorstWhenPokemonFlewDown, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Woman1_1

SootopolisCity_EventScript_Woman1_4:
# 412 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiganticPokemonFight, MSGBOX_DEFAULT
# 413 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	goto SootopolisCity_EventScript_Woman1_1


SootopolisCity_EventScript_NinjaBoy::
# 422 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 423 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_NINJA_BOY, Common_Movement_FacePlayer
# 424 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 425 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_NinjaBoy_2
# 429 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_ge SootopolisCity_EventScript_NinjaBoy_3
# 429 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
	goto_if_le SootopolisCity_EventScript_NinjaBoy_3
# 433 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThisIsWicked, MSGBOX_DEFAULT
# 434 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end

SootopolisCity_EventScript_NinjaBoy_2:
# 426 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThatWasWicked, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_NinjaBoy_3:
# 430 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WonderWhatWorldIsLike, MSGBOX_DEFAULT
	release_end


SootopolisCity_EventScript_Boy1::
# 439 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 440 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_1, Common_Movement_FacePlayer
# 441 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 442 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Boy1_2
SootopolisCity_EventScript_Boy1_1:
# 445 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_EventScript_Boy1_5
SootopolisCity_EventScript_Boy1_4:
# 448 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 6
	goto_if_ge SootopolisCity_EventScript_Boy1_8
# 448 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 1
	goto_if_le SootopolisCity_EventScript_Boy1_8
# 452 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GiantPokemonSuddenlyAppeared, MSGBOX_DEFAULT
# 453 "data/maps/SootopolisCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
SootopolisCity_EventScript_Boy1_7:
	release_end

SootopolisCity_EventScript_Boy1_2:
# 443 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhatIsThatGreenPokemon, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Boy1_1

SootopolisCity_EventScript_Boy1_5:
# 446 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_WhereDidLegendariesGo, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Boy1_4

SootopolisCity_EventScript_Boy1_8:
# 449 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_PhysicallyFitLivingHere, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Boy1_7


SootopolisCity_EventScript_GymSign::
# 459 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GymSign, MSGBOX_SIGN
	end


SootopolisCity_EventScript_CitySign::
# 464 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_CitySign, MSGBOX_SIGN
	end


EventScript_ClosedSootopolisDoor::
# 469 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoorIsClosed, MSGBOX_SIGN
	end


SootopolisCity_EventScript_Steven::
# 474 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 475 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, Common_Movement_FacePlayer
# 476 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 477 "data/maps/SootopolisCity/scripts.pory"
	goto_if_unset FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN, SootopolisCity_EventScript_Steven_2
SootopolisCity_EventScript_Steven_1:
# 480 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 2
	goto_if_eq SootopolisCity_EventScript_Steven_5
# 483 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
	goto_if_eq SootopolisCity_EventScript_Steven_6
# 483 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_eq SootopolisCity_EventScript_Steven_6
# 486 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_Steven_7
# 490 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SoThatsRayquaza, MSGBOX_DEFAULT
SootopolisCity_EventScript_Steven_4:
# 492 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Steven_2:
# 478 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin
	goto SootopolisCity_EventScript_Steven_1

SootopolisCity_EventScript_Steven_5:
# 481 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KnowWhatsNeededToHelpHim, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Steven_4

SootopolisCity_EventScript_Steven_6:
# 484 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_NeverBeenToSkyPillar, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Steven_4

SootopolisCity_EventScript_Steven_7:
# 487 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_MaxieArchieLeft, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Steven_4


SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin::
# 497 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_InvolvedWithCrisisComeWithMe, MSGBOX_DEFAULT
# 498 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 499 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin
# 500 "data/maps/SootopolisCity/scripts.pory"
	switch VAR_FACING
# 501 "data/maps/SootopolisCity/scripts.pory"
	case DIR_WEST, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_3
# 502 "data/maps/SootopolisCity/scripts.pory"
	case DIR_NORTH, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_4
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_1:
# 504 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 505 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoesThisMakeYourFearPokemon, MSGBOX_DEFAULT
# 506 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 507 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenWalkToCaveOfOrigin
# 508 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerWalkToCaveOfOrigin
# 509 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 510 "data/maps/SootopolisCity/scripts.pory"
	delay 120
# 511 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_EXPERT, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Movement_0
# 512 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 513 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_STEVEN, SootopolisCity_Movement_StevenArriveCaveEntrance
# 514 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Movement_1
# 515 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 516 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HereWereAreHelpWallace, MSGBOX_DEFAULT
# 517 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 518 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 519 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Movement_2
# 520 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 521 "data/maps/SootopolisCity/scripts.pory"
	warp MAP_CAVE_OF_ORIGIN_ENTRANCE, 9, 20
# 522 "data/maps/SootopolisCity/scripts.pory"
	waitstate
	end

SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_3:
# 501 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest
	goto SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_1

SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_4:
# 502 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth
	goto SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_1


# 526 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenStartWalkToCaveOfOrigin:
# 528 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 528 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 528 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 529 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 530 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 530 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 530 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 530 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 530 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 530 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 530 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 530 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 530 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 530 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 530 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 531 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 532 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 532 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 532 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 532 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 533 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 533 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 533 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 533 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 534 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 534 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 534 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 534 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 534 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 534 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 534 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 534 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 534 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 534 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 534 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 535 "data/maps/SootopolisCity/scripts.pory"
	step_faster_down
	step_end

# 538 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginWest:
# 540 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 541 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 541 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 541 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 542 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 543 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 543 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 543 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 543 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 543 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 543 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 543 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 543 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 543 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 543 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 543 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 544 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 545 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 545 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 545 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 545 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 546 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 546 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 546 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 546 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 547 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 547 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 547 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 547 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 547 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 547 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 547 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 547 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 547 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 547 "data/maps/SootopolisCity/scripts.pory"
	walk_up
	step_end

# 550 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerStartWalkToCaveOfOriginNorth:
# 552 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 552 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 552 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 552 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 553 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 554 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 554 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 554 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 554 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 554 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 554 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 554 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 554 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 554 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 554 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 554 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 555 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 556 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 556 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 556 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 556 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 557 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 557 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 557 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 557 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 558 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 558 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 558 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 558 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 558 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 558 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 558 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 558 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 558 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 558 "data/maps/SootopolisCity/scripts.pory"
	walk_up
	step_end

# 561 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenWalkToCaveOfOrigin:
# 563 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 563 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 564 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 564 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 564 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 564 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 565 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 565 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 566 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 566 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 566 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 566 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 566 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 567 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 568 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 568 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 568 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 568 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 569 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 569 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 569 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 570 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 570 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 570 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 570 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 570 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 571 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 571 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 571 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 571 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 572 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 572 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 572 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 572 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 572 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 572 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 572 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 572 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 573 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 573 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 573 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 573 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 573 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 573 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 573 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 573 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 574 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 574 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 574 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 574 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 575 "data/maps/SootopolisCity/scripts.pory"
	delay_4
# 576 "data/maps/SootopolisCity/scripts.pory"
	step_faster_left
# 577 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 577 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 578 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 579 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 579 "data/maps/SootopolisCity/scripts.pory"
	walk_up
	step_end

# 582 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_PlayerWalkToCaveOfOrigin:
# 584 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 584 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 584 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 585 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 585 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 585 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 585 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 586 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 586 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 587 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 587 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 587 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 587 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 587 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 588 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 589 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 589 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 589 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 589 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 590 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 590 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 590 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 591 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 591 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 591 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 591 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 591 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 592 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 592 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 592 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 592 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 593 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 593 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 593 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 593 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 593 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 593 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 593 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 593 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 594 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 594 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 594 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 594 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 594 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 594 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 594 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 594 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 595 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 595 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 595 "data/maps/SootopolisCity/scripts.pory"
	walk_right
	step_end

# 598 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_StevenArriveCaveEntrance:
# 600 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 600 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 601 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 602 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 603 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 604 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 604 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 604 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 605 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 606 "data/maps/SootopolisCity/scripts.pory"
	step_faster_left
	step_end

SootopolisCity_EventScript_Boy2::
# 610 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 611 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FacePlayer
# 612 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 613 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Boy2_2
# 617 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TwoPokemonArentAngry, MSGBOX_DEFAULT
# 618 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 619 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BOY_2, Common_Movement_FaceOriginalDirection
# 620 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
SootopolisCity_EventScript_Boy2_1:
# 622 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Boy2_2:
# 614 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_FlyingMonStoppedRampage, MSGBOX_DEFAULT
# 615 "data/maps/SootopolisCity/scripts.pory"
	closemessage
	goto SootopolisCity_EventScript_Boy2_1


SootopolisCity_EventScript_BlackBelt::
# 627 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 628 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_BlackBelt_2
# 633 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GoRedAndBlueMon, MSGBOX_DEFAULT
# 634 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 635 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 636 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 637 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DoYouKnowMonNames, MSGBOX_DEFAULT
# 638 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 639 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FaceOriginalDirection
# 640 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
SootopolisCity_EventScript_BlackBelt_1:
# 642 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_BlackBelt_2:
# 629 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_BLACK_BELT, Common_Movement_FacePlayer
# 630 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 631 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GreenOneSettlesThings, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_BlackBelt_1


SootopolisCity_EventScript_Girl::
# 647 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 648 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FacePlayer
# 649 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Girl_2
# 654 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisWillBeWrecked, MSGBOX_DEFAULT
# 655 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 656 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_GIRL, Common_Movement_FaceOriginalDirection
# 657 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
SootopolisCity_EventScript_Girl_1:
# 659 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Girl_2:
# 651 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SootopolisDidntGetWrecked, MSGBOX_DEFAULT
# 652 "data/maps/SootopolisCity/scripts.pory"
	closemessage
	goto SootopolisCity_EventScript_Girl_1


SootopolisCity_EventScript_Maniac::
# 664 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 665 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FacePlayer
# 666 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 667 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Maniac_2
# 670 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SeeingLegendWithOwnEyes, MSGBOX_DEFAULT
# 671 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 672 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_MANIAC, Common_Movement_FaceOriginalDirection
# 673 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
SootopolisCity_EventScript_Maniac_1:
# 675 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Maniac_2:
# 668 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_SawLegendWithOwnEyes, MSGBOX_DEFAULT
	goto SootopolisCity_EventScript_Maniac_1


SootopolisCity_EventScript_Wallace::
# 680 "data/maps/SootopolisCity/scripts.pory"
	lock_faceplayer
# 681 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_eq SootopolisCity_EventScript_Wallace_2
# 685 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_WATERFALL, SootopolisCity_EventScript_Wallace_5
# 689 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, SootopolisCity_EventScript_Wallace_8
SootopolisCity_EventScript_Wallace_7:
# 692 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AquaMagmaDidntMeanHarm, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_Wallace_2:
# 682 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_HaventYouScaledSkyPillar, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_Wallace_5:
# 686 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_DazzledByMentor, MSGBOX_DEFAULT
	release_end

SootopolisCity_EventScript_Wallace_8:
# 690 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_GiveWaterfall
	goto SootopolisCity_EventScript_Wallace_7


SootopolisCity_EventScript_GiveWaterfall::
# 697 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ThankYouForHelpAcceptThis, MSGBOX_DEFAULT
# 698 "data/maps/SootopolisCity/scripts.pory"
	giveitem ITEM_HM_WATERFALL
# 699 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_RECEIVED_HM_WATERFALL
# 700 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_ExplainWaterfallGoToGym, MSGBOX_DEFAULT
# 701 "data/maps/SootopolisCity/scripts.pory"
	closemessage
# 702 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq SootopolisCity_EventScript_GiveWaterfall_2
# 708 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_EventScript_GiveWaterfall_Movement_1
# 709 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 710 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 711 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
SootopolisCity_EventScript_GiveWaterfall_1:
	release_end

SootopolisCity_EventScript_GiveWaterfall_2:
# 703 "data/maps/SootopolisCity/scripts.pory"
	applymovement LOCALID_SOOTOPOLIS_WALLACE, SootopolisCity_EventScript_GiveWaterfall_Movement_0
# 704 "data/maps/SootopolisCity/scripts.pory"
	waitmovement 0
# 705 "data/maps/SootopolisCity/scripts.pory"
	copyobjectxytoperm LOCALID_SOOTOPOLIS_WALLACE
# 706 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 2
	goto SootopolisCity_EventScript_GiveWaterfall_1


SootopolisCity_EventScript_Maxie::
# 717 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 718 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Maxie_2
# 725 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_GroudonPleaseStop, MSGBOX_DEFAULT
# 726 "data/maps/SootopolisCity/scripts.pory"
	closemessage
SootopolisCity_EventScript_Maxie_1:
# 728 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Maxie_2:
# 719 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_AfterAllOurScheming, MSGBOX_DEFAULT
# 720 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 721 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_ARCHIE_SOOTOPOLIS, SootopolisCity_EventScript_Maxie_5
	goto SootopolisCity_EventScript_Maxie_1

SootopolisCity_EventScript_Maxie_5:
# 722 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_MaxieArchieLeave
	goto SootopolisCity_EventScript_Maxie_1


SootopolisCity_EventScript_Archie::
# 733 "data/maps/SootopolisCity/scripts.pory"
	lockall
# 734 "data/maps/SootopolisCity/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_eq SootopolisCity_EventScript_Archie_2
# 741 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_KyogreCalmDown, MSGBOX_DEFAULT
# 742 "data/maps/SootopolisCity/scripts.pory"
	closemessage
SootopolisCity_EventScript_Archie_1:
# 744 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end

SootopolisCity_EventScript_Archie_2:
# 735 "data/maps/SootopolisCity/scripts.pory"
	msgbox SootopolisCity_Text_TryingMeaninglessToPokemon, MSGBOX_DEFAULT
# 736 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 737 "data/maps/SootopolisCity/scripts.pory"
	goto_if_set FLAG_MET_MAXIE_SOOTOPOLIS, SootopolisCity_EventScript_Archie_5
	goto SootopolisCity_EventScript_Archie_1

SootopolisCity_EventScript_Archie_5:
# 738 "data/maps/SootopolisCity/scripts.pory"
	goto SootopolisCity_EventScript_MaxieArchieLeave
	goto SootopolisCity_EventScript_Archie_1


SootopolisCity_EventScript_MaxieArchieLeave::
# 749 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 750 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 751 "data/maps/SootopolisCity/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 752 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 753 "data/maps/SootopolisCity/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 754 "data/maps/SootopolisCity/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 2
# 755 "data/maps/SootopolisCity/scripts.pory"
	warpsilent MAP_SOOTOPOLIS_CITY, 31, 34
# 756 "data/maps/SootopolisCity/scripts.pory"
	waitstate
# 757 "data/maps/SootopolisCity/scripts.pory"
	releaseall
	end


# 762 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_Levitate::
# 764 "data/maps/SootopolisCity/scripts.pory"
	levitate
	step_end

# 768 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_Movement_DestroyTask::
# 770 "data/maps/SootopolisCity/scripts.pory"
	destroy_extra_task
	step_end

# 109 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendSceneIntro_Movement_0:
# 109 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 109 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 109 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 109 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 109 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 109 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 109 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 109 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 109 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 109 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 109 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 109 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
	step_end

# 110 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_LegendSceneIntro_Movement_1:
# 110 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 110 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 110 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 110 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 110 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 110 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 110 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 110 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 110 "data/maps/SootopolisCity/scripts.pory"
	walk_up
	step_end

# 131 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_0:
# 131 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 131 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 131 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 131 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 131 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 131 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 131 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 131 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 131 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 131 "data/maps/SootopolisCity/scripts.pory"
	run_right
	step_end

# 139 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_1:
# 139 "data/maps/SootopolisCity/scripts.pory"
	lock_look
# 139 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 139 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 139 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 139 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 139 "data/maps/SootopolisCity/scripts.pory"
	unlock_look
	step_end

# 140 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_2:
# 140 "data/maps/SootopolisCity/scripts.pory"
	lock_look
# 140 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 140 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 140 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 140 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 140 "data/maps/SootopolisCity/scripts.pory"
	unlock_look
	step_end

# 144 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_3:
# 144 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 144 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 144 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 144 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 144 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 144 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 144 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 144 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 144 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 144 "data/maps/SootopolisCity/scripts.pory"
	init_affine_anim
# 144 "data/maps/SootopolisCity/scripts.pory"
	walk_left_affine
# 144 "data/maps/SootopolisCity/scripts.pory"
	clear_affine_anim
	step_end

# 145 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_4:
# 145 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 145 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 145 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 145 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 145 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 145 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 145 "data/maps/SootopolisCity/scripts.pory"
	run_right
	step_end

# 171 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_5:
# 171 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 171 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 171 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 171 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 171 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
# 171 "data/maps/SootopolisCity/scripts.pory"
	step_slow_left
	step_end

# 172 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_6:
# 172 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 172 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 172 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 172 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 172 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
# 172 "data/maps/SootopolisCity/scripts.pory"
	step_slow_right
	step_end

# 174 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_7:
# 174 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 174 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 174 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 174 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 174 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 174 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 174 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 174 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 174 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 174 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 174 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
# 174 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_northeast
	step_end

# 175 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_KyogreGroudonScene_Movement_8:
# 175 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 175 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 175 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 175 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 175 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 175 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 175 "data/maps/SootopolisCity/scripts.pory"
	walk_down
# 175 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
# 175 "data/maps/SootopolisCity/scripts.pory"
	creep_diag_southwest
	step_end

# 215 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaScene_Movement_0:
# 215 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 215 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 215 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 215 "data/maps/SootopolisCity/scripts.pory"
	walk_up
	step_end

# 239 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_RayquazaScene_Movement_1:
# 239 "data/maps/SootopolisCity/scripts.pory"
	run_up
# 239 "data/maps/SootopolisCity/scripts.pory"
	sprint_up
# 239 "data/maps/SootopolisCity/scripts.pory"
	sprint_up
# 239 "data/maps/SootopolisCity/scripts.pory"
	sprint_up
# 239 "data/maps/SootopolisCity/scripts.pory"
	sprint_up
# 239 "data/maps/SootopolisCity/scripts.pory"
	sprint_up
# 239 "data/maps/SootopolisCity/scripts.pory"
	sprint_up
	step_end

# 511 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Movement_0:
# 511 "data/maps/SootopolisCity/scripts.pory"
	creep_left
# 511 "data/maps/SootopolisCity/scripts.pory"
	step_faster_right
	step_end

# 514 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Movement_1:
# 514 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 514 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 514 "data/maps/SootopolisCity/scripts.pory"
	delay_16
# 514 "data/maps/SootopolisCity/scripts.pory"
	delay_8
# 514 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 514 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 514 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 514 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 514 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 514 "data/maps/SootopolisCity/scripts.pory"
	step_faster_right
	step_end

# 519 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_StevenLeadPlayerCaveOfOrigin_Movement_2:
# 519 "data/maps/SootopolisCity/scripts.pory"
	walk_up
# 519 "data/maps/SootopolisCity/scripts.pory"
	walk_up
	step_end

# 703 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall_Movement_0:
# 703 "data/maps/SootopolisCity/scripts.pory"
	walk_left
# 703 "data/maps/SootopolisCity/scripts.pory"
	step_faster_down
	step_end

# 708 "data/maps/SootopolisCity/scripts.pory"
SootopolisCity_EventScript_GiveWaterfall_Movement_1:
# 708 "data/maps/SootopolisCity/scripts.pory"
	walk_right
# 708 "data/maps/SootopolisCity/scripts.pory"
	step_faster_down
	step_end

SootopolisCity_Text_GymSign::
# 773 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\n"
	.string "LEADER: JUAN\p"
	.string "“The GYM LEADER with the beauty\n"
	.string "of pure water!”$"

SootopolisCity_Text_CitySign::
# 781 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY\p"
	.string "“The mystical city where history\n"
	.string "slumbers.”$"

SootopolisCity_Text_DoorIsClosed::
# 788 "data/maps/SootopolisCity/scripts.pory"
	.string "The door is closed.$"

SootopolisCity_Text_PhysicallyFitLivingHere::
# 792 "data/maps/SootopolisCity/scripts.pory"
	.string "Diving in the sea. Climbing up and\n"
	.string "down stairs all the time…\p"
	.string "If you live in this town, you end up\n"
	.string "getting physically fit.$"

SootopolisCity_Text_GiantPokemonSuddenlyAppeared::
# 800 "data/maps/SootopolisCity/scripts.pory"
	.string "These giant POKéMON suddenly appeared\n"
	.string "in the middle of the city!\p"
	.string "And, I've never seen them before!\p"
	.string "Why are they smashing into each\n"
	.string "other like that?\p"
	.string "Why can't they be friends, those\n"
	.string "POKéMON?$"

SootopolisCity_Text_WhatIsThatGreenPokemon::
# 813 "data/maps/SootopolisCity/scripts.pory"
	.string "What? What? What?\n"
	.string "What is that green POKéMON?!$"

SootopolisCity_Text_WhereDidLegendariesGo::
# 818 "data/maps/SootopolisCity/scripts.pory"
	.string "GROUDON and KYOGRE…\n"
	.string "Where did they go?\p"
	.string "Will they cause droughts or downpours\n"
	.string "somewhere else?$"

SootopolisCity_Text_TwoPokemonArentAngry::
# 826 "data/maps/SootopolisCity/scripts.pory"
	.string "I just get this sense somehow that\n"
	.string "the two POKéMON aren't angry.\p"
	.string "I think… They probably can't control\n"
	.string "their own power…$"

SootopolisCity_Text_FlyingMonStoppedRampage::
# 834 "data/maps/SootopolisCity/scripts.pory"
	.string "That flying POKéMON came down from\n"
	.string "the sky and stopped the rampaging\l"
	.string "POKéMON…$"

SootopolisCity_Text_WonderWhatWorldIsLike::
# 840 "data/maps/SootopolisCity/scripts.pory"
	.string "I… I've never been out of this city.\p"
	.string "I wonder what the world is like on\n"
	.string "the other side of this round sky?$"

SootopolisCity_Text_ThisIsWicked::
# 847 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
	.string "This is wicked!$"

SootopolisCity_Text_ThatWasWicked::
# 852 "data/maps/SootopolisCity/scripts.pory"
	.string "Wow!\n"
	.string "That was wicked!$"

SootopolisCity_Text_GoRedAndBlueMon::
# 857 "data/maps/SootopolisCity/scripts.pory"
	.string "Go for it, red POKéMON!\n"
	.string "Don't back off, blue POKéMON!$"

SootopolisCity_Text_DoYouKnowMonNames::
# 862 "data/maps/SootopolisCity/scripts.pory"
	.string "… … … … … …\p"
	.string "Hi, do you know the names of those\n"
	.string "POKéMON fighting over there?$"

SootopolisCity_Text_GreenOneSettlesThings::
# 869 "data/maps/SootopolisCity/scripts.pory"
	.string "I was wondering which one would win,\n"
	.string "the red one or the blue one, but, oh no,\l"
	.string "it's the green one that settles things!\p"
	.string "Talk about a huge turn of events!$"

SootopolisCity_Text_SeeingLegendWithOwnEyes::
# 877 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
	.string "the land and sea were shaped by\l"
	.string "a colossal battle between POKéMON.\p"
	.string "Well, I'm seeing that happen with\n"
	.string "my very own eyes!\p"
	.string "Whoa! I never expected to be\n"
	.string "witness to something this huge!$"

SootopolisCity_Text_SawLegendWithOwnEyes::
# 889 "data/maps/SootopolisCity/scripts.pory"
	.string "There's an ancient legend that claims\n"
	.string "the land and sea were shaped by\l"
	.string "a colossal battle between POKéMON.\p"
	.string "Well, I saw that happen with\n"
	.string "my very own eyes!\p"
	.string "Whoa! I never expected to be\n"
	.string "witness to something this huge!$"

SootopolisCity_Text_BigPokemonFighting::
# 901 "data/maps/SootopolisCity/scripts.pory"
	.string "A big POKéMON is fighting with\n"
	.string "another big POKéMON!\p"
	.string "Please, someone make them stop!$"

SootopolisCity_Text_PrettyMonCameFromSky::
# 908 "data/maps/SootopolisCity/scripts.pory"
	.string "A pretty POKéMON came down from\n"
	.string "the sky…$"

SootopolisCity_Text_SootopolisWillBeWrecked::
# 913 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, no!\n"
	.string "SOOTOPOLIS CITY will get wrecked!$"

SootopolisCity_Text_SootopolisDidntGetWrecked::
# 918 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS CITY didn't get wrecked!$"

SootopolisCity_Text_NoOrdinaryTourist::
# 922 "data/maps/SootopolisCity/scripts.pory"
	.string "Hm!\n"
	.string "You've come all the way to SOOTOPOLIS?\l"
	.string "You're no ordinary tourist.\p"
	.string "But I suppose that doesn't make you\n"
	.string "an extraordinary tourist, either.$"

SootopolisCity_Text_CityRegainedCalm::
# 931 "data/maps/SootopolisCity/scripts.pory"
	.string "The city has regained its calm…$"

SootopolisCity_Text_CaveOfOriginPleaseLeave::
# 935 "data/maps/SootopolisCity/scripts.pory"
	.string "Who might you be?\p"
	.string "This is the CAVE OF ORIGIN.\p"
	.string "The spirits of POKéMON, becalmed at\n"
	.string "MT. PYRE, are said to be revived here.\p"
	.string "Please leave.$"

SootopolisCity_Text_LeadSuperiorTrainerToCave::
# 946 "data/maps/SootopolisCity/scripts.pory"
	.string "A person with a strong will and\n"
	.string "superior talent…\p"
	.string "A TRAINER who has knowledge and\n"
	.string "experience of many kinds of POKéMON…\p"
	.string "If such a person were to appear, I was\n"
	.string "instructed by WALLACE to lead that\l"
	.string "TRAINER to this CAVE.$"

SootopolisCity_Text_AwakenedPokemonClash::
# 958 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh, my…\p"
	.string "The clash between the two awakened\n"
	.string "POKéMON was quelled by the awakening\l"
	.string "of a third POKéMON…$"

SootopolisCity_Text_CaveOfOriginSleepsToo::
# 966 "data/maps/SootopolisCity/scripts.pory"
	.string "This is the CAVE OF ORIGIN…\p"
	.string "With the passing of the crisis,\n"
	.string "the cave, too, shall sleep…$"

SootopolisCity_Text_SootopolisSkyBeautiful::
# 973 "data/maps/SootopolisCity/scripts.pory"
	.string "SOOTOPOLIS sprang up as a town in\n"
	.string "the crater of a volcano.\p"
	.string "If you look up at the sky, the lip of\n"
	.string "the crater is also visible.\l"
	.string "So, all you see is the sky in a circle.\p"
	.string "But that's what makes the sky above\n"
	.string "SOOTOPOLIS the most beautiful.$"

SootopolisCity_Text_GiganticPokemonFight::
# 985 "data/maps/SootopolisCity/scripts.pory"
	.string "When two POKéMON that gigantic\n"
	.string "are fighting that savagely, there's\l"
	.string "not much that we can do.$"

SootopolisCity_Text_FearedWorstWhenPokemonFlewDown::
# 991 "data/maps/SootopolisCity/scripts.pory"
	.string "When that third POKéMON flew down,\n"
	.string "I feared the worst.$"

SootopolisCity_Text_NightSkyFavoriteScenery::
# 996 "data/maps/SootopolisCity/scripts.pory"
	.string "A circle of a night sky framed by\n"
	.string "the crater of a volcano…\p"
	.string "And in that ring, stars flicker and\n"
	.string "blink as if they were alive…\l"
	.string "It's my favorite scenery.$"

SootopolisCity_Text_WeatherWentWild::
# 1005 "data/maps/SootopolisCity/scripts.pory"
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
# 1020 "data/maps/SootopolisCity/scripts.pory"
	.string "Oh?\p"
	.string "It was you who brought that flying\n"
	.string "POKéMON here?\p"
	.string "Well, aren't you amazing!$"

SootopolisCity_Text_GroudonPleaseStop::
# 1029 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: G… GROUDON…\n"
	.string "Please! Stop what you're doing!\p"
	.string "I know the extent of your power now!\p"
	.string "If you keep going, all HOENN, not just\n"
	.string "SOOTOPOLIS, will be utterly ruined!$"

SootopolisCity_Text_AfterAllOurScheming::
# 1039 "data/maps/SootopolisCity/scripts.pory"
	.string "MAXIE: So the super-ancient POKéMON\n"
	.string "weren't only GROUDON and KYOGRE…\p"
	.string "After all our fruitless scheming and\n"
	.string "frantic efforts, that one POKéMON's\l"
	.string "simple action puts everything right\l"
	.string "again as if nothing had happened…\p"
	.string "Fu…\n"
	.string "Fuhahaha…$"

SootopolisCity_Text_KyogreCalmDown::
# 1052 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE! What's wrong?!\n"
	.string "Look over here! It's the RED ORB!\l"
	.string "Calm down! KYOGRE!\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "It's no good!\n"
	.string "It's not responding at all!$"

SootopolisCity_Text_TryingMeaninglessToPokemon::
# 1064 "data/maps/SootopolisCity/scripts.pory"
	.string "ARCHIE: KYOGRE and GROUDON both\n"
	.string "flew off to who knows where.\p"
	.string "The weather in HOENN has returned\n"
	.string "to its normal state…\p"
	.string "Haha…\n"
	.string "Hahaha…\p"
	.string "Maybe what we were trying to do was\n"
	.string "something small, even meaningless,\l"
	.string "to POKéMON…$"

SootopolisCity_Text_InvolvedWithCrisisComeWithMe::
# 1079 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Those POKéMON fighting…\n"
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
# 1101 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Listen, {PLAYER}{KUN}.\p"
	.string "Does seeing GROUDON and KYOGRE make\n"
	.string "you think POKéMON are to be feared?\p"
	.string "But that's not true.\n"
	.string "POKéMON are really more…\p"
	.string "…Why am I asking you this?\n"
	.string "You already know.$"

SootopolisCity_Text_HereWereAreHelpWallace::
# 1114 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: Okay, here we are!\p"
	.string "Inside here you'll find someone named\n"
	.string "WALLACE.\p"
	.string "I think you have what's needed to\n"
	.string "help him…$"

SootopolisCity_Text_KnowWhatsNeededToHelpHim::
# 1124 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: I think you have what's\n"
	.string "needed to help him…$"

SootopolisCity_Text_NeverBeenToSkyPillar::
# 1129 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: The SKY PILLAR…\p"
	.string "I've never been there.\n"
	.string "I wonder where it could be?$"

SootopolisCity_Text_SoThatsRayquaza::
# 1136 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: So that's RAYQUAZA…\p"
	.string "It's incredible how the two rampaging\n"
	.string "POKéMON would flee from it in fear…$"

SootopolisCity_Text_MaxieArchieLeft::
# 1143 "data/maps/SootopolisCity/scripts.pory"
	.string "STEVEN: It looks like both MAXIE and\n"
	.string "ARCHIE have gone away somewhere.\p"
	.string "Perhaps they've gone to MT. PYRE to\n"
	.string "return those ORBS…$"

SootopolisCity_Text_HaventYouScaledSkyPillar::
# 1151 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: Oh?\n"
	.string "{PLAYER}{KUN}?\p"
	.string "Haven't you scaled the SKY PILLAR\n"
	.string "yet?\p"
	.string "I'm sure that you can make it to\n"
	.string "the top of the SKY PILLAR…$"

SootopolisCity_Text_AquaMagmaDidntMeanHarm::
# 1162 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
	.string "The leaders of TEAM MAGMA and AQUA,\n"
	.string "I don't think they meant harm.\p"
	.string "It wouldn't hurt to hear what they\n"
	.string "have to say for themselves.$"

SootopolisCity_Text_ThankYouForHelpAcceptThis::
# 1172 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\n"
	.string "My eyes didn't deceive me.\p"
	.string "Thanks to your help, SOOTOPOLIS…\n"
	.string "No, all of HOENN was saved.\p"
	.string "On behalf of the people, I thank you.\p"
	.string "This is a gift from me.\n"
	.string "Please accept it.$"

SootopolisCity_Text_ExplainWaterfallGoToGym::
# 1185 "data/maps/SootopolisCity/scripts.pory"
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
# 1203 "data/maps/SootopolisCity/scripts.pory"
	.string "WALLACE: I'm sure that you will be\n"
	.string "dazzled by my mentor's breathtakingly\l"
	.string "elegant battle style.$"
