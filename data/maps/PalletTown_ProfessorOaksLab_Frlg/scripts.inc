PalletTown_ProfessorOaksLab_Frlg_MapScripts::
# 9 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 24 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 30 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 11 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
	goto_if_eq PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 11 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
	goto_if_eq PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB
# 16 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 1, PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 17 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 8, PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 19 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
	end

PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 13 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
	goto PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 16 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	savebgm MUS_RG_OAK
	goto PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 17 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
	goto PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 20 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_OAK_SKIP_22_RIVAL_CHECK
	goto PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 25 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 26 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 31 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_ChooseStarterScene
# 32 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene
	.2byte 0


PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene::
# 38 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 39 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_FACING, DIR_NORTH
# 40 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene_Movement_0
# 42 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 43 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 44 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 45 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 46 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene_Movement_1
# 48 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 49 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
	end


PalletTown_ProfessorOaksLab_EventScript_NationalDexScene::
# 54 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons
# 55 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 56 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_FACING
# 57 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_3
# 58 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_1:
# 60 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 61 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 62 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_6
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_5:
# 65 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_FACING
# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_10
# 67 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_11
# 68 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_11
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_8:
# 70 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene_Movement_0
# 71 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 72 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything
# 73 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 74 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes
# 75 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_FACING
# 76 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_14
# 77 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_15
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_12:
# 79 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 80 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 81 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits
# 82 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 83 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 84 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_17
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_16:
# 87 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_FACING
# 88 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_21
# 89 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_21
# 91 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_22
# 96 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_23
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_19:
# 100 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_POKEDEX_1
# 101 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_POKEDEX_2
# 102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData
# 104 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 105 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 106 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 108 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_25
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_24:
# 111 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_FACING
# 112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_29
# 113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_30
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_27:
# 115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 117 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 118 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded
# 119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 121 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special EnableNationalPokedex
# 123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex
# 124 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex
# 125 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 126 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	end

PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_3:
# 57 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_1

PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_6:
# 63 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_StepFasterDown
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_5

PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_10:
# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_0
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_8

PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_11:
# 68 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_1
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_8

PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_14:
# 76 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_12

PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_15:
# 77 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_12

PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_17:
# 85 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_2
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_16

PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_21:
# 90 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_19

PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_22:
# 92 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_3
# 93 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_4
# 94 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_4
# 95 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_19

PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_23:
# 97 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_5
# 98 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_19

PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_25:
# 109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_6
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_24

PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_29:
# 112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_7
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_27

PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_30:
# 113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_8
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_27


PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 132 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 134 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene_Movement_0
# 135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 137 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 138 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 139 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene_Movement_1
# 141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_StepFasterUp
# 143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 144 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 145 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	savebgm MUS_DUMMY
# 146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 148 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 149 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 60
# 150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 151 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 152 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_ChooseStarterScene_Movement_0
# 154 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 157 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 158 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 163 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 165 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 166 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 167 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 168 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 169 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 170 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 171 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 176 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 177 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1
# 178 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 184 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 2
# 185 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 190 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 191 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 3
# 192 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
	end


PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 197 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 198 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 199 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_StepFasterDown
# 200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 201 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 202 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 203 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 204 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 205 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 206 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_STARTER_MON
# 208 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case CHOSE_BULBASAUR, PalletTown_ProfessorOaksLab_EventScript_RivalBattle_3
# 209 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case CHOSE_SQUIRTLE, PalletTown_ProfessorOaksLab_EventScript_RivalBattle_4
# 210 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case CHOSE_CHARMANDER, PalletTown_ProfessorOaksLab_EventScript_RivalBattle_5
PalletTown_ProfessorOaksLab_EventScript_RivalBattle_1:
	end

PalletTown_ProfessorOaksLab_EventScript_RivalBattle_3:
# 208 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle_1

PalletTown_ProfessorOaksLab_EventScript_RivalBattle_4:
# 209 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle_1

PalletTown_ProfessorOaksLab_EventScript_RivalBattle_5:
# 210 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle_1


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_TEMP_2
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_3
# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_4
# 222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_5
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_1:
# 224 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 225 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 226 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_3:
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_Movement_0
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_1

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_4:
# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_Movement_1
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_1

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_5:
# 222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_Movement_2
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_1


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 231 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_TEMP_2
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_3
# 233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_4
# 234 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_5
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_1:
# 236 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 237 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_CHARMANDER, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_3:
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_Movement_0
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_1

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_4:
# 233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_Movement_0
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_1

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_5:
# 234 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_Movement_1
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_1


PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 243 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_TEMP_2
# 244 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_3
# 245 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_4
# 246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_5
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_1:
# 248 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 249 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 250 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
	end

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_3:
# 244 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_Movement_1
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_1

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_4:
# 245 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_Movement_2
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_1

PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_5:
# 246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_Movement_0
	goto PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_1


PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 255 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special HealPlayerParty
# 256 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 257 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 258 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 259 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_TEMP_2
# 260 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 1, PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_3
# 263 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 2, PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_4
# 266 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 3, PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_5
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_1:
# 270 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 271 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 272 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playse SE_EXIT
# 273 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 274 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 275 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 276 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	end

PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_3:
# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_Movement_0
# 262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_Movement_1
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_1

PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_4:
# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_Movement_2
# 265 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_Movement_1
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_1

PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_5:
# 267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_Movement_3
# 268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_Movement_4
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_1


PalletTown_ProfessorOaksLab_EventScript_Rival::
# 281 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock_faceplayer
# 282 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB
# 283 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 3, PalletTown_ProfessorOaksLab_EventScript_Rival_3
# 284 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 2, PalletTown_ProfessorOaksLab_EventScript_Rival_4
# 285 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
PalletTown_ProfessorOaksLab_EventScript_Rival_1:
	release_end

PalletTown_ProfessorOaksLab_EventScript_Rival_3:
# 283 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
	goto PalletTown_ProfessorOaksLab_EventScript_Rival_1

PalletTown_ProfessorOaksLab_EventScript_Rival_4:
# 284 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
	goto PalletTown_ProfessorOaksLab_EventScript_Rival_1


PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 291 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock_faceplayer
# 292 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_ProfessorOaksLab_EventScript_ProfOak_2
# 295 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_3
# 298 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_4
# 301 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_ProfOak_5
# 304 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_6
# 307 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_7
# 310 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1
	goto_if_ge PalletTown_ProfessorOaksLab_EventScript_ProfOak_8
# 313 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_9
# 316 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_10
# 320 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
PalletTown_ProfessorOaksLab_EventScript_ProfOak_1:
	release_end

PalletTown_ProfessorOaksLab_EventScript_ProfOak_2:
# 293 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_1

PalletTown_ProfessorOaksLab_EventScript_ProfOak_3:
# 296 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_1

PalletTown_ProfessorOaksLab_EventScript_ProfOak_4:
# 299 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_1

PalletTown_ProfessorOaksLab_EventScript_ProfOak_5:
# 302 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_1

PalletTown_ProfessorOaksLab_EventScript_ProfOak_6:
# 305 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_1

PalletTown_ProfessorOaksLab_EventScript_ProfOak_7:
# 308 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_1

PalletTown_ProfessorOaksLab_EventScript_ProfOak_8:
# 311 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_1

PalletTown_ProfessorOaksLab_EventScript_ProfOak_9:
# 314 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_1

PalletTown_ProfessorOaksLab_EventScript_ProfOak_10:
# 317 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_1


PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 326 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 327 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 328 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 329 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 330 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 331 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 332 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 333 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 334 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 335 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 336 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 337 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 338 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_FACING
# 339 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_3
# 340 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_1:
# 342 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 343 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_FACING
# 344 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_7
# 345 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_8
# 346 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_9
# 347 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_9
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_5:
# 351 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene_Movement_0
# 352 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 353 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
# 354 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 355 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 356 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 357 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playse SE_PIN
# 358 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 359 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 360 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_Delay48
# 361 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 362 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_11
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_10:
# 367 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_FACING
# 368 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_15
# 369 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_16
# 370 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_17
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_13:
# 372 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_19
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_18:
# 375 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 376 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 377 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 378 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_22
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_21:
# 381 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_FACING
# 382 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_26
# 383 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_26
# 385 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_27
# 390 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_28
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_24:
# 394 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 395 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 396 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 40
# 397 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 398 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 399 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_StepFasterUp
# 400 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 401 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 402 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 10
# 403 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 404 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 25
# 405 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_30
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_29:
# 408 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_FACING
# 409 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_34
# 410 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_35
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_32:
# 412 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 413 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 10
# 414 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 415 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 416 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 417 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 418 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 419 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 420 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 421 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special SetUnlockedPokedexFlags
# 422 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 423 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 424 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 425 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 426 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 427 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 428 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 429 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_37
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_36:
# 432 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_FACING
# 433 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_41
# 434 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_42
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_39:
# 436 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_44
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_43:
# 439 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 440 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 441 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 442 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 443 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 444 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 445 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 446 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
	release_end

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_3:
# 339 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_1

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_7:
# 344 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_0
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_5

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_8:
# 345 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_StepFasterDown
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_5

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_9:
# 348 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_StepFasterDown
# 349 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_1
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_5

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_11:
# 363 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 364 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 365 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 15
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_10

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_15:
# 368 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_13

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_16:
# 369 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_13

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_17:
# 370 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_13

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_19:
# 373 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_StepFasterDown
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_18

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_22:
# 379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_Movement_0
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_21

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_26:
# 384 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_24

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_27:
# 386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_Movement_1
# 387 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_4
# 388 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_4
# 389 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_24

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_28:
# 391 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_5
# 392 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_24

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_30:
# 406 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_6
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_29

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_34:
# 409 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_7
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_32

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_35:
# 410 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_8
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_32

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_37:
# 430 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_36

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_41:
# 433 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_39

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_42:
# 434 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_StepFasterUp
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_39

PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_44:
# 437 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
	goto PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_43


PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 451 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 452 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 453 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RivalExit_2
PalletTown_ProfessorOaksLab_EventScript_RivalExit_1:
# 456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_RivalExit_Movement_0
# 457 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 458 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 459 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	fadedefaultbgm
	return

PalletTown_ProfessorOaksLab_EventScript_RivalExit_2:
# 454 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_1
	goto PalletTown_ProfessorOaksLab_EventScript_RivalExit_1


PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 464 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 465 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 466 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 467 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 468 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 469 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 470 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_0x8009, 1
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls_2
PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls_1:
# 473 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
	end

PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls_2:
# 471 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls_1


PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 478 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 479 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_RatePokedex_2
PalletTown_ProfessorOaksLab_EventScript_RatePokedex_1:
	release_end

PalletTown_ProfessorOaksLab_EventScript_RatePokedex_2:
# 480 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 481 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 40
# 482 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 483 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 484 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_FACING
# 485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RatePokedex_6
# 486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RatePokedex_7
# 487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RatePokedex_8
# 488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RatePokedex_9
PalletTown_ProfessorOaksLab_EventScript_RatePokedex_4:
# 490 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 491 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 492 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 493 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 494 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 70
# 495 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 496 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex_1

PalletTown_ProfessorOaksLab_EventScript_RatePokedex_6:
# 485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_EventScript_RatePokedex_Movement_0
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex_4

PalletTown_ProfessorOaksLab_EventScript_RatePokedex_7:
# 486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_EventScript_RatePokedex_Movement_1
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex_4

PalletTown_ProfessorOaksLab_EventScript_RatePokedex_8:
# 487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_EventScript_RatePokedex_Movement_2
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex_4

PalletTown_ProfessorOaksLab_EventScript_RatePokedex_9:
# 488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_EventScript_RatePokedex_Movement_3
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex_4


# 502 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_Search:
# 504 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 505 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_down
# 506 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 507 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_right
# 508 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 509 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_up
# 510 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 511 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_left
# 512 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 513 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_down
# 514 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 515 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 515 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 516 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_up
# 517 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 518 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_left
# 519 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 520 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_down
# 521 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 522 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_right
# 523 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 524 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_up
# 525 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 526 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
	step_end

# 530 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_VerticalPacing:
# 532 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 533 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 533 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 534 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_down
# 535 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 536 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 536 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 536 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
	step_end

PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 540 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 541 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 542 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_0x8009, 60
	goto_if_ge PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene_3
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene_1:
	release_end

PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene_2:
# 543 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay 30
# 544 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 545 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
	goto PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene_1

PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene_3:
# 542 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene_2
	goto PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene_1


PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 551 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_2
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_1:
# 554 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_5
	checkitem ITEM_POKE_BALL
# 0 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_9
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_7:
# 564 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
	end

PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_2:
# 552 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
	goto PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_1

PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_5:
# 555 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
	release_end

PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_8:
# 559 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 560 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 561 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
	release_end

PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_9:
# 558 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE22, 2
	goto_if_ge PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_8
	goto PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls_7


PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 569 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
	release_end


PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 574 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock_faceplayer
# 575 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 576 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_BULBASAUR
# 577 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_CHARMANDER
# 578 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_4, LOCALID_CHARMANDER_BALL
# 579 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_StarterBall
	end


PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 584 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock_faceplayer
# 585 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 586 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_SQUIRTLE
# 587 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_BULBASAUR
# 588 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_4, LOCALID_BULBASAUR_BALL
# 589 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_StarterBall
	end


PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 594 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock_faceplayer
# 595 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 596 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_2, SPECIES_CHARMANDER
# 597 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_SQUIRTLE
# 598 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_TEMP_4, LOCALID_SQUIRTLE_BALL
# 599 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_StarterBall
	end


PalletTown_ProfessorOaksLab_EventScript_StarterBall::
# 604 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
	goto_if_ge PalletTown_ProfessorOaksLab_EventScript_StarterBall_2
# 608 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_StarterBall_3
PalletTown_ProfessorOaksLab_EventScript_StarterBall_1:
# 624 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
	release_end

PalletTown_ProfessorOaksLab_EventScript_StarterBall_2:
# 605 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
	release_end

PalletTown_ProfessorOaksLab_EventScript_StarterBall_3:
# 609 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceRight
# 610 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 611 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	showmonpic VAR_TEMP_2, 10, 3
# 612 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 613 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 614 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 0, PalletTown_ProfessorOaksLab_EventScript_StarterBall_8
# 615 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 1, PalletTown_ProfessorOaksLab_EventScript_StarterBall_9
# 616 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 2, PalletTown_ProfessorOaksLab_EventScript_StarterBall_10
PalletTown_ProfessorOaksLab_EventScript_StarterBall_6:
# 618 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_StarterBall_12
# 622 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
	goto PalletTown_ProfessorOaksLab_EventScript_StarterBall_1

PalletTown_ProfessorOaksLab_EventScript_StarterBall_8:
# 614 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
	goto PalletTown_ProfessorOaksLab_EventScript_StarterBall_6

PalletTown_ProfessorOaksLab_EventScript_StarterBall_9:
# 615 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
	goto PalletTown_ProfessorOaksLab_EventScript_StarterBall_6

PalletTown_ProfessorOaksLab_EventScript_StarterBall_10:
# 616 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
	goto PalletTown_ProfessorOaksLab_EventScript_StarterBall_6

PalletTown_ProfessorOaksLab_EventScript_StarterBall_12:
# 619 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
	release_end


PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 629 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 630 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 631 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 632 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 633 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 634 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 635 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	givemon VAR_TEMP_2, 5
# 636 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	copyvar VAR_STARTER_MON, VAR_TEMP_1
# 637 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_2
# 638 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 639 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 640 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 641 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 642 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 643 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_2
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_1:
# 647 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	closemessage
# 648 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 0, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_6
# 650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 1, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_7
# 651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	case 2, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_8
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_4:
# 653 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement 0
# 654 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 655 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 656 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject VAR_TEMP_4
# 657 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 658 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
# 659 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 660 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 661 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 662 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitfanfare
# 663 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 664 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_10
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_9:
	release_end

PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_2:
# 644 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 645 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_1

PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_6:
# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_Movement_0
	goto PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_4

PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_7:
# 650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_Movement_1
	goto PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_4

PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_8:
# 651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_Movement_2
	goto PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_4

PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_10:
# 665 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	goto PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_9


PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 671 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock_faceplayer
# 672 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1_2
# 677 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
	release_end

PalletTown_ProfessorOaksLab_EventScript_Aide1_2:
# 673 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 5
# 674 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
	release_end


PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 682 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock_faceplayer
# 683 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2_2
# 688 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
	release_end

PalletTown_ProfessorOaksLab_EventScript_Aide2_2:
# 684 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, 0
# 685 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
	release_end


PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 693 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lock_faceplayer
# 694 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 2
# 695 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
	release_end


PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 700 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
	end


PalletTown_ProfessorOaksLab_EventScript_Computer::
# 705 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
	end


PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 710 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
	end


PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 715 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 716 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
	goto_if_ge PalletTown_ProfessorOaksLab_EventScript_RightSign_2
# 719 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
PalletTown_ProfessorOaksLab_EventScript_RightSign_1:
# 721 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	end

PalletTown_ProfessorOaksLab_EventScript_RightSign_2:
# 717 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
	goto PalletTown_ProfessorOaksLab_EventScript_RightSign_1


# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene_Movement_0:
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
	step_end

# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene_Movement_1:
# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
	step_end

# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_0:
# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_down
# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 66 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_left
	step_end

# 68 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_1:
# 68 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_4
# 68 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_down
	step_end

# 85 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_2:
# 85 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 85 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 85 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_up
# 85 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 85 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_4
	step_end

# 92 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_3:
# 92 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 92 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 92 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 92 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 92 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_4
	step_end

# 93 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_4:
# 93 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 93 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 93 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_left
	step_end

# 97 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_5:
# 97 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 97 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 97 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_up
	step_end

# 109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_6:
# 109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
	step_end

# 112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_7:
# 112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 112 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
	step_end

# 113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene_Movement_8:
# 113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_right
	step_end

# 153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_ChooseStarterScene_Movement_0:
# 153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_up
# 153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_up
	step_end

# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_Movement_0:
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
	step_end

# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_Movement_1:
# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
	step_end

# 222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle_Movement_2:
# 222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
	step_end

# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander_Movement_0:
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
	step_end

# 246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur_Movement_0:
# 246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
	step_end

# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_Movement_0:
# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
	step_end

# 262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_Movement_1:
# 262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_right
# 262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_down
	step_end

# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_Movement_2:
# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
	step_end

# 267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_Movement_3:
# 267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
	step_end

# 268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle_Movement_4:
# 268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_8
# 268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_left
# 268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 268 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_down
	step_end

# 379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_Movement_0:
# 379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 379 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_down
	step_end

# 386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene_Movement_1:
# 386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_left
# 386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	delay_16
# 386 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_right
	step_end

# 456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExit_Movement_0:
# 456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 456 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
	step_end

# 485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex_Movement_0:
# 485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_down
# 485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_fast_down
# 485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_down
# 485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_down
# 485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_fast_down
# 485 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_down
	step_end

# 486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex_Movement_1:
# 486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_up
# 486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_fast_up
# 486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_up
# 486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_up
# 486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_fast_up
# 486 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_up
	step_end

# 487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex_Movement_2:
# 487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_left
# 487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_fast_left
# 487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_left
# 487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_left
# 487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_fast_left
# 487 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_left
	step_end

# 488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex_Movement_3:
# 488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_right
# 488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_fast_right
# 488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_right
# 488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_right
# 488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_fast_right
# 488 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_right
	step_end

# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_Movement_0:
# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 649 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
	step_end

# 650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_Movement_1:
# 650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 650 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_up
	step_end

# 651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter_Movement_2:
# 651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_down
# 651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_right
# 651 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	step_faster_up
	step_end

PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround::
# 725 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: What, it's only {PLAYER}?\n"
	.string "Gramps isn't around.$"

PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting::
# 730 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Gramps!\n"
	.string "I'm fed up with waiting!$"

PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe::
# 735 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Hey! Gramps! No fair!\n"
	.string "What about me?$"

PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer::
# 740 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Heh, I don't need to be\n"
	.string "greedy like you. I'm mature!\p"
	.string "Go ahead and choose, {PLAYER}!$"

PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen::
# 747 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: I'll take this one, then!$"

PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak::
# 751 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL} received the {STR_VAR_1}\n"
	.string "from PROF. OAK!$"

PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher::
# 756 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: My POKéMON looks a lot\n"
	.string "tougher than yours.$"

PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons::
# 761 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Wait, {PLAYER}!\n"
	.string "Let's check out our POKéMON!\p"
	.string "Come on, I'll take you on!$"

PalletTown_ProfessorOaksLab_Text_RivalDefeat::
# 768 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "WHAT?\n"
	.string "Unbelievable!\l"
	.string "I picked the wrong POKéMON!$"

Text_RivalVictory::
# 775 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Yeah!\n"
	.string "Am I great or what?$"

PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon::
# 780 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Okay! I'll make my\n"
	.string "POKéMON battle to toughen it up!\p"
	.string "{PLAYER}! Gramps!\n"
	.string "Smell you later!$"

PalletTown_ProfessorOaksLab_Text_RivalGramps::
# 788 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Gramps!$"

PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor::
# 792 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: I almost forgot!\n"
	.string "What did you call me for?$"

PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps::
# 797 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: All right, Gramps!\n"
	.string "Leave it all to me!$"

PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap::
# 802 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}, I hate to say it, but you\n"
	.string "won't be necessary for this.\p"
	.string "I know! I'll borrow a TOWN MAP\n"
	.string "from my sis!\p"
	.string "I'll tell her not to lend you one,\n"
	.string "{PLAYER}! Hahaha!\p"
	.string "Don't bother coming around to\n"
	.string "my place after this!$"

PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne::
# 816 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: {RIVAL}?\n"
	.string "Let me think…\p"
	.string "Oh, that's right, I told you to\n"
	.string "come! Just wait!\p"
	.string "Here, {PLAYER}.\p"
	.string "There are three POKéMON here.\p"
	.string "Haha!\p"
	.string "The POKéMON are held inside\n"
	.string "these POKé BALLS.\p"
	.string "When I was young, I was a serious\n"
	.string "POKéMON TRAINER.\p"
	.string "But now, in my old age, I have\n"
	.string "only these three left.\p"
	.string "You can have one.\n"
	.string "Go on, choose!$"

PalletTown_ProfessorOaksLab_Text_OakBePatientRival::
# 842 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Be patient, {RIVAL}.\n"
	.string "You can have one, too!$"

PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose::
# 847 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Now, {PLAYER}.\p"
	.string "Inside those three POKé BALLS are\n"
	.string "POKéMON.\p"
	.string "Which one will you choose for\n"
	.string "yourself?$"

PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet::
# 857 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Hey!\n"
	.string "Don't go away yet!$"

PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander::
# 862 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah! CHARMANDER is your choice.\n"
	.string "You should raise it patiently.\p"
	.string "So, {PLAYER}, you're claiming the\n"
	.string "FIRE POKéMON CHARMANDER?$"

PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle::
# 870 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hm! SQUIRTLE is your choice.\n"
	.string "It's one worth raising.\p"
	.string "So, {PLAYER}, you've decided on the\n"
	.string "WATER POKéMON SQUIRTLE?$"

PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur::
# 878 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I see! BULBASAUR is your choice.\n"
	.string "It's very easy to raise.\p"
	.string "So, {PLAYER}, you want to go with\n"
	.string "the GRASS POKéMON BULBASAUR?$"

PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic::
# 886 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "This POKéMON is really quite\n"
	.string "energetic!$"

PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak::
# 891 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
	.string "from PROF. OAK!$"

PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon::
# 896 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: If a wild POKéMON appears,\n"
	.string "your POKéMON can battle it.\p"
	.string "With it at your side, you should be\n"
	.string "able to reach the next town.$"

PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow::
# 904 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: {PLAYER}, raise your young\n"
	.string "POKéMON by making it battle.\p"
	.string "It has to battle for it to grow.$"

PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe::
# 911 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Oh, {PLAYER}!\n"
	.string "How is my old POKéMON?\p"
	.string "Well, it seems to be growing more\n"
	.string "attached to you.\p"
	.string "You must be talented as a POKéMON\n"
	.string "TRAINER.\p"
	.string "What's that?\n"
	.string "You have something for me?$"

PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel::
# 925 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} delivered OAK'S PARCEL.$"

PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered::
# 929 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah! \n"
	.string "It's the custom POKé BALL!\p"
	.string "I had it on order.\n"
	.string "Thank you!$"

PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo::
# 937 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Oh, right!\n"
	.string "I have a request for you two.$"

PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk::
# 942 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "On the desk there is my invention,\n"
	.string "the POKéDEX!\p"
	.string "It automatically records data on\n"
	.string "POKéMON you've seen or caught.\p"
	.string "It's a high-tech encyclopedia!$"

PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou::
# 952 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: {PLAYER} and {RIVAL}.\n"
	.string "Take these with you.$"

PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak::
# 957 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} received the POKéDEX\n"
	.string "from PROF. OAK.$"

PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese::
# 962 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: You can't get detailed data\n"
	.string "on POKéMON by just seeing them.\p"
	.string "You must catch them to obtain\n"
	.string "complete data.\p"
	.string "So, here are some tools for\n"
	.string "catching wild POKéMON.$"

PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls::
# 973 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER} received five POKé BALLS.$"

PalletTown_ProfessorOaksLab_Text_OakExplainCatching::
# 977 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "When a wild POKéMON appears,\n"
	.string "it's fair game.\p"
	.string "Just throw a POKé BALL at it and\n"
	.string "try to catch it!\p"
	.string "This won't always work, however.\p"
	.string "A healthy POKéMON can escape.\n"
	.string "You have to be lucky!$"

PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream::
# 990 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "To make a complete guide on all\n"
	.string "the POKéMON in the world…\p"
	.string "That was my dream!\p"
	.string "But, I'm too old.\n"
	.string "I can't get the job done.\p"
	.string "So, I want you two to fulfill my\n"
	.string "dream for me.\p"
	.string "Get moving, you two.\p"
	.string "This is a great undertaking in\n"
	.string "POKéMON history!$"

PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait::
# 1008 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "POKéMON around the world wait for\n"
	.string "you, {PLAYER}!$"

PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex::
# 1013 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah, {PLAYER}!\n"
	.string "How is your POKéDEX shaping up?\p"
	.string "{RIVAL} has already caught some\n"
	.string "POKéMON and added to the data.\p"
	.string "So, {PLAYER}, let's have a look at\n"
	.string "your POKéDEX.\p"
	.string "…What's the matter?\n"
	.string "You've added no new data at all.\p"
	.string "I'll give you these, so do try a\n"
	.string "little harder.$"

PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime::
# 1030 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: Come see me sometime.\p"
	.string "After all, I want to know how your\n"
	.string "POKéDEX is coming along.$"

PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia::
# 1037 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "It's like an encyclopedia, but the\n"
	.string "pages are blank.$"

PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls::
# 1042 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Those are POKé BALLS.\n"
	.string "They contain POKéMON!$"

PalletTown_ProfessorOaksLab_Text_OaksLastMon::
# 1047 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "That's PROF. OAK's last POKéMON.$"

PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu::
# 1051 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Press START to open the MENU!$"

PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu::
# 1055 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "The SAVE option is on the MENU.\n"
	.string "Use it regularly.$"

PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints::
# 1060 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "All POKéMON types have strong and\n"
	.string "weak points against others.$"

PalletTown_ProfessorOaksLab_Text_EmailMessage::
# 1065 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "There's an e-mail message here.\p"
	.string "…\p"
	.string "Finally!\n"
	.string "The ultimate TRAINERS of the\l"
	.string "POKéMON LEAGUE are ready to\l"
	.string "take on all comers!\p"
	.string "Bring your best POKéMON and see\n"
	.string "how you rate as a TRAINER!\p"
	.string "POKéMON LEAGUE HQ\n"
	.string "INDIGO PLATEAU\p"
	.string "PROF. OAK, please visit us!\n"
	.string "…$"

PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide::
# 1085 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "I study POKéMON as PROF. OAK's\n"
	.string "AIDE.$"

PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons::
# 1090 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hi, {PLAYER}. I bet you've become\n"
	.string "good friends with your POKéMON.\p"
	.string "By the way, did you know about\n"
	.string "DAISY?\p"
	.string "If you show DAISY your POKéMON,\n"
	.string "she can tell how much it likes you.\p"
	.string "Occasionally, she will even groom\n"
	.string "a POKéMON for you.\p"
	.string "This is a secret, so please don't\n"
	.string "tell anyone.$"

PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow::
# 1107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK is going to have his own\n"
	.string "radio show soon.\p"
	.string "The program will be called PROF.\n"
	.string "OAK's POKéMON SEMINAR.$"

PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons::
# 1115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK may not look like much,\n"
	.string "but he's the authority on POKéMON.\p"
	.string "Many POKéMON TRAINERS hold him in\n"
	.string "high regard.$"

PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer::
# 1123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ah, now this is excellent!\p"
	.string "{PLAYER}, I have another important\n"
	.string "favor to ask of you.\p"
	.string "I need you to listen closely.$"

PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons::
# 1132 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Recently, there have been sightings\n"
	.string "of many rare POKéMON species.\p"
	.string "I'm talking about POKéMON that\n"
	.string "have never been seen in KANTO.\p"
	.string "I would love to go see things for\n"
	.string "myself, but I'm much too old.\p"
	.string "Since I can't do it, {PLAYER}, I'd\n"
	.string "like you to go in my place.$"

PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything::
# 1146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, I heard that!\p"
	.string "Gramps, what's with favoring\n"
	.string "{PLAYER} over me all the time?\p"
	.string "I went and collected more POKéMON,\n"
	.string "and faster, too.\p"
	.string "You should just let me handle\n"
	.string "everything.$"

PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes::
# 1159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "OAK: I know, I know.\n"
	.string "Of course I need your help, too.\p"
	.string "Now, I need to see both your\n"
	.string "POKéDEXES.$"

PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits::
# 1167 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "PROF. OAK took both POKéDEX\n"
	.string "units.$"

PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData::
# 1172 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "… … …  … … …\p"
	.string "… … …  … … …\p"
	.string "…And that's done!\p"
	.string "Now these units can record data on\n"
	.string "a lot more POKéMON.$"

PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded::
# 1183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded!$"

PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex::
# 1187 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Now, {PLAYER} and {RIVAL}!\p"
	.string "This time, you really must work\n"
	.string "towards filling your POKéDEXES.\p"
	.string "I urge you to make them the best\n"
	.string "and the most complete of all time!\p"
	.string "Truly, this is a monumentally great\n"
	.string "undertaking in POKéMON history!$"

PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex::
# 1200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "{RIVAL}: Gramps, calm down.\n"
	.string "Don't get so excited.\p"
	.string "I'll get the POKéDEX completed,\n"
	.string "don't you worry about a thing.\p"
	.string "I think I'll try looking around\n"
	.string "ONE ISLAND first…\p"
	.string "Anyways, I'm outta here!$"
