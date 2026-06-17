PalletTown_Frlg_MapScripts::
# 4 "data/maps/PalletTown_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 26 "data/maps/PalletTown_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/PalletTown_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PALLET_TOWN
# 6 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 0
	goto_if_eq PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	goto_if_eq PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
	end

PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_set FLAG_OPENED_START_MENU, PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	goto PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
# 17 "data/maps/PalletTown_Frlg/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 5, 15
# 18 "data/maps/PalletTown_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_UP
	goto PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 8 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	goto PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 7 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 0
	goto_if_eq PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	goto PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 22 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
	goto PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 13 "data/maps/PalletTown_Frlg/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 12, 2
# 14 "data/maps/PalletTown_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_DOWN
# 15 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_TEMP_2, TRUE
	goto PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

PalletTown_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 27 "data/maps/PalletTown_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_OAK, 2, PalletTown_EventScript_OakRatingScene
	.2byte 0


PalletTown_EventScript_OakRatingScene::
# 33 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 34 "data/maps/PalletTown_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 35 "data/maps/PalletTown_Frlg/scripts.pory"
	setobjectxyperm LOCALID_PALLET_PROF_OAK, 14, 14
# 36 "data/maps/PalletTown_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_PROF_OAK, MOVEMENT_TYPE_FACE_LEFT
# 37 "data/maps/PalletTown_Frlg/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_EventScript_OakRatingScene_Movement_0
# 39 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 40 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_EventScript_OakRatingScene_2
PalletTown_EventScript_OakRatingScene_1:
# 44 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_OakLetMeSeePokedex
# 45 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 46 "data/maps/PalletTown_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 47 "data/maps/PalletTown_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 48 "data/maps/PalletTown_Frlg/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 49 "data/maps/PalletTown_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 50 "data/maps/PalletTown_Frlg/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 51 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_0x8009, 60
	goto_if_lt PalletTown_EventScript_OakRatingScene_5
PalletTown_EventScript_OakRatingScene_4:
# 55 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
# 56 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 57 "data/maps/PalletTown_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_EventScript_OakRatingScene_Movement_1
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_EventScript_OakRatingScene_Movement_2
# 60 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 61 "data/maps/PalletTown_Frlg/scripts.pory"
	opendoor 16, 13
# 62 "data/maps/PalletTown_Frlg/scripts.pory"
	waitdooranim
# 63 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_EventScript_OakRatingScene_Movement_3
# 64 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_EventScript_OakRatingScene_Movement_4
# 65 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 66 "data/maps/PalletTown_Frlg/scripts.pory"
	closedoor 16, 13
# 67 "data/maps/PalletTown_Frlg/scripts.pory"
	waitdooranim
# 68 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 69 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 70 "data/maps/PalletTown_Frlg/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 71 "data/maps/PalletTown_Frlg/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 72 "data/maps/PalletTown_Frlg/scripts.pory"
	waitstate
# 73 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
	end

PalletTown_EventScript_OakRatingScene_2:
# 41 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
# 42 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
	goto PalletTown_EventScript_OakRatingScene_1

PalletTown_EventScript_OakRatingScene_5:
# 52 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
# 53 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
	goto PalletTown_EventScript_OakRatingScene_4


PalletTown_EventScript_EndOakRatingScene::
# 78 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_EventScript_EndOakRatingScene_Movement_0
# 80 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 81 "data/maps/PalletTown_Frlg/scripts.pory"
	removeobject LOCALID_PALLET_PROF_OAK
# 82 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 83 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
	end


PalletTown_EventScript_OakTriggerLeft::
# 88 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 89 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 90 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTriggerRight::
# 95 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 96 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 97 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
	end


PalletTown_EventScript_OakTrigger::
# 102 "data/maps/PalletTown_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 103 "data/maps/PalletTown_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 104 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 30
# 105 "data/maps/PalletTown_Frlg/scripts.pory"
	playbgm MUS_RG_OAK, 0
# 106 "data/maps/PalletTown_Frlg/scripts.pory"
	message PalletTown_Text_OakDontGoOut
# 107 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmessage
# 108 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 85
# 109 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 110 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 111 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 112 "data/maps/PalletTown_Frlg/scripts.pory"
	playse SE_PIN
# 113 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 114 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 115 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 30
# 116 "data/maps/PalletTown_Frlg/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 117 "data/maps/PalletTown_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 118 "data/maps/PalletTown_Frlg/scripts.pory"
	case 0, PalletTown_EventScript_OakTrigger_3
# 119 "data/maps/PalletTown_Frlg/scripts.pory"
	case 1, PalletTown_EventScript_OakTrigger_4
PalletTown_EventScript_OakTrigger_1:
# 121 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 122 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 30
# 123 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
# 124 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 125 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 30
# 126 "data/maps/PalletTown_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 127 "data/maps/PalletTown_Frlg/scripts.pory"
	case 0, PalletTown_EventScript_OakTrigger_7
# 130 "data/maps/PalletTown_Frlg/scripts.pory"
	case 1, PalletTown_EventScript_OakTrigger_8
PalletTown_EventScript_OakTrigger_5:
# 134 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 135 "data/maps/PalletTown_Frlg/scripts.pory"
	opendoor 16, 13
# 136 "data/maps/PalletTown_Frlg/scripts.pory"
	waitdooranim
# 137 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_EventScript_OakRatingScene_Movement_3
# 138 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_EventScript_OakRatingScene_Movement_4
# 139 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 140 "data/maps/PalletTown_Frlg/scripts.pory"
	closedoor 16, 13
# 141 "data/maps/PalletTown_Frlg/scripts.pory"
	waitdooranim
# 142 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 143 "data/maps/PalletTown_Frlg/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 144 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 145 "data/maps/PalletTown_Frlg/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 146 "data/maps/PalletTown_Frlg/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 147 "data/maps/PalletTown_Frlg/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 148 "data/maps/PalletTown_Frlg/scripts.pory"
	waitstate
# 149 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
	end

PalletTown_EventScript_OakTrigger_3:
# 118 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_EventScript_OakTrigger_Movement_0
	goto PalletTown_EventScript_OakTrigger_1

PalletTown_EventScript_OakTrigger_4:
# 119 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_EventScript_OakTrigger_Movement_1
	goto PalletTown_EventScript_OakTrigger_1

PalletTown_EventScript_OakTrigger_7:
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_EventScript_OakTrigger_Movement_2
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_EventScript_OakTrigger_Movement_3
	goto PalletTown_EventScript_OakTrigger_5

PalletTown_EventScript_OakTrigger_8:
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_EventScript_OakTrigger_Movement_4
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_EventScript_OakTrigger_Movement_5
	goto PalletTown_EventScript_OakTrigger_5


PalletTown_EventScript_SignLady::
# 154 "data/maps/PalletTown_Frlg/scripts.pory"
	lock
# 155 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
	goto_if_eq PalletTown_EventScript_SignLady_2
# 155 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	goto_if_eq PalletTown_EventScript_SignLady_2
# 155 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_TEMP_2, TRUE
	goto_if_eq PalletTown_EventScript_SignLady_2
# 155 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLady_2
PalletTown_EventScript_SignLady_1:
# 159 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
	goto_if_eq PalletTown_EventScript_SignLady_11
# 162 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	goto_if_eq PalletTown_EventScript_SignLady_12
# 165 "data/maps/PalletTown_Frlg/scripts.pory"
	compare VAR_TEMP_2, TRUE
	goto_if_eq PalletTown_EventScript_SignLady_13
# 168 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLady_14
# 172 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_HmmIsThatRight
# 173 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 174 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 175 "data/maps/PalletTown_Frlg/scripts.pory"
	playse SE_PIN
# 176 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_ExclamationMark
# 177 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 178 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_Delay48
# 179 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 180 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_OhLookLook
# 181 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 182 "data/maps/PalletTown_Frlg/scripts.pory"
	switch VAR_FACING
# 183 "data/maps/PalletTown_Frlg/scripts.pory"
	case DIR_EAST, PalletTown_EventScript_SignLady_22
# 184 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_EventScript_SignLady_Movement_1
PalletTown_EventScript_SignLady_20:
# 186 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 187 "data/maps/PalletTown_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_PALLET_SIGN_LADY
# 188 "data/maps/PalletTown_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
PalletTown_EventScript_SignLady_10:
	release_end

PalletTown_EventScript_SignLady_2:
# 156 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 157 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
	goto PalletTown_EventScript_SignLady_1

PalletTown_EventScript_SignLady_11:
# 160 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo
	goto PalletTown_EventScript_SignLady_10

PalletTown_EventScript_SignLady_12:
# 163 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_SignsAreUsefulArentThey
	goto PalletTown_EventScript_SignLady_10

PalletTown_EventScript_SignLady_13:
# 166 "data/maps/PalletTown_Frlg/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
	goto PalletTown_EventScript_SignLady_10

PalletTown_EventScript_SignLady_14:
# 169 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_ReadItReadIt
	goto PalletTown_EventScript_SignLady_10

PalletTown_EventScript_SignLady_22:
# 183 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_EventScript_SignLady_Movement_0
	goto PalletTown_EventScript_SignLady_20


PalletTown_EventScript_SignLadyTrigger::
# 194 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 195 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_StepFasterRight
# 196 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 197 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 198 "data/maps/PalletTown_Frlg/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 199 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
	end


PalletTown_EventScript_SignLadyShowSign::
# 204 "data/maps/PalletTown_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 205 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_LookCopiedTrainerTipsSign
# 206 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 207 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 20
# 208 "data/maps/PalletTown_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 209 "data/maps/PalletTown_Frlg/scripts.pory"
	setflag FLAG_OPENED_START_MENU
# 210 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 211 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_TEMP_2, FALSE
# 212 "data/maps/PalletTown_Frlg/scripts.pory"
	special SetWalkingIntoSignVars
# 213 "data/maps/PalletTown_Frlg/scripts.pory"
	special DisableMsgBoxWalkaway
# 214 "data/maps/PalletTown_Frlg/scripts.pory"
	signmsg
# 215 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenuCopy
# 216 "data/maps/PalletTown_Frlg/scripts.pory"
	normalmsg
	return


PalletTown_EventScript_FatMan::
# 221 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
	end


PalletTown_EventScript_OaksLabSign::
# 226 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 227 "data/maps/PalletTown_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 0
# 228 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 229 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
	end


PalletTown_EventScript_PlayersHouseSign::
# 234 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
	end


PalletTown_EventScript_RivalsHouseSign::
# 239 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
	end


PalletTown_EventScript_TownSign::
# 244 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
	end


PalletTown_EventScript_TrainerTips::
# 249 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 250 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 251 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 252 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
	end


# 38 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakRatingScene_Movement_0:
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	step_faster_up
	step_end

# 58 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakRatingScene_Movement_1:
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
	step_end

# 59 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakRatingScene_Movement_2:
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	step_faster_up
	step_end

# 63 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakRatingScene_Movement_3:
# 63 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 63 "data/maps/PalletTown_Frlg/scripts.pory"
	set_invisible
	step_end

# 64 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakRatingScene_Movement_4:
# 64 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 64 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 64 "data/maps/PalletTown_Frlg/scripts.pory"
	set_invisible
	step_end

# 79 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_EndOakRatingScene_Movement_0:
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
	step_end

# 118 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger_Movement_0:
# 118 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 118 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 118 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 118 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 118 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 118 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 118 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 118 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
	step_end

# 119 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger_Movement_1:
# 119 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 119 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 119 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 119 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 119 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 119 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 119 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 119 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 119 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
	step_end

# 128 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger_Movement_2:
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	step_faster_up
	step_end

# 129 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger_Movement_3:
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
	step_end

# 131 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger_Movement_4:
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	step_faster_up
	step_end

# 132 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger_Movement_5:
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
	step_end

# 183 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLady_Movement_0:
# 183 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 183 "data/maps/PalletTown_Frlg/scripts.pory"
	step_faster_left
	step_end

# 184 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_SignLady_Movement_1:
# 184 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 184 "data/maps/PalletTown_Frlg/scripts.pory"
	step_faster_right
	step_end

PalletTown_Text_OakDontGoOut::
# 256 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "OAK: Hey! Wait!\n"
	.string "Don't go out!$"

PalletTown_Text_OakGrassUnsafeNeedMon::
# 261 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "OAK: It's unsafe!\n"
	.string "Wild POKéMON live in tall grass!\p"
	.string "You need your own POKéMON for\n"
	.string "your protection.\p"
	.string "I know!\n"
	.string "Here, come with me!$"

PalletTown_Text_RaisingMonsToo::
# 272 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "I'm raising POKéMON, too.\p"
	.string "When they get strong, they can\n"
	.string "protect me.$"

PalletTown_Text_CanStoreItemsAndMonsInPC::
# 279 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Technology is incredible!\p"
	.string "You can now store and recall items\n"
	.string "and POKéMON as data via PC.$"

PalletTown_Text_OakPokemonResearchLab::
# 286 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "OAK POKéMON RESEARCH LAB$"

PalletTown_Text_PlayersHouse::
# 290 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "{PLAYER}'s house$"

PalletTown_Text_RivalsHouse::
# 294 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "{RIVAL}'s house$"

PalletTown_Text_TownSign::
# 298 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "PALLET TOWN\n"
	.string "Shades of your journey await!$"

PalletTown_Text_OakLetMeSeePokedex::
# 303 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "OAK: Ah, {PLAYER}!\n"
	.string "You're back, are you?\p"
	.string "How much have you filled in your\n"
	.string "POKéDEX?\p"
	.string "May I see it?\p"
	.string "Let's see…$"

PalletTown_Text_CaughtXPuttingInHonestEffort::
# 315 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "You've caught {STR_VAR_2}…\p"
	.string "Hm, it looks as if you're putting\n"
	.string "in an honest effort.\p"
	.string "When you manage to fill it some\n"
	.string "more, come show me, please.$"

PalletTown_Text_CaughtXImpressiveFollowMe::
# 325 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "You've caught… {STR_VAR_2}!?\n"
	.string "Now, this is impressive!\p"
	.string "There's something I wanted to ask\n"
	.string "of you, {PLAYER}.\p"
	.string "Come.\n"
	.string "Follow me.$"

PalletTown_Text_OakYouEnjoyingTraveling::
# 336 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "OAK: Ah, {PLAYER}!\n"
	.string "You seem to be enjoying traveling.\p"
	.string "Knowing you, {PLAYER}, I can easily\n"
	.string "imagine you going out to even more\l"
	.string "exotic locales.\p"
	.string "Good for you, good for you.\n"
	.string "Hohoho.$"

PalletTown_Text_HmmIsThatRight::
# 349 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Hmm…\n"
	.string "Is that right…$"

PalletTown_Text_OhLookLook::
# 354 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "Look, look!$"

PalletTown_Text_ReadItReadIt::
# 359 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Read it, read it!$"

PalletTown_Text_PressStartToOpenMenu::
# 364 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Press START to open the MENU!$"

PalletTown_Text_SignsAreUsefulArentThey::
# 370 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Signs are useful, aren't they?$"

PalletTown_Text_LookCopiedTrainerTipsSign::
# 374 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Look, look!\p"
	.string "I copied what it said on one of\n"
	.string "those TRAINER TIPS signs!$"

PalletTown_Text_PressStartToOpenMenuCopy::
# 382 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "TRAINER TIPS!\p"
	.string "Press START to open the MENU!$"
