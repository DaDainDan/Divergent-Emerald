CinnabarIsland_Frlg_MapScripts::
# 2 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 31 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CINNABAR_ISLAND
# 4 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_HIDE_POKEMON_MANSION_B1F_SECRET_KEY, CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	switch VAR_MAP_SCENE_CINNABAR_ISLAND
# 8 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	case 1, CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 18 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	case 3, CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 22 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1
	goto_if_eq CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	end

CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 9 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 10 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	compare VAR_0x8004, 18
	goto_if_ge CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
# 13 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 14 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 18, 12
# 15 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_UP
# 16 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 12
	goto CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 19 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 21, 8
# 20 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_UP
	goto CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 23 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 24 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 25 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_BILL, 15, 12
# 26 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CINNABAR_BILL, MOVEMENT_TYPE_FACE_LEFT
# 27 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 12
	goto CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_8

CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 11 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CINNABAR_SEAGALLOP, 30, 8
	goto CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 32 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 1, CinnabarIsland_EventScript_BillScene
# 33 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 3, CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
# 47 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1, CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2
	.2byte 0

CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 34 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 35 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 36 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_IfYouHaveTriPassYouCanGoAgain
# 37 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 38 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_0
# 39 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 40 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 41 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 4
# 42 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
# 43 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_LOSTELLE_IN_HER_HOME
# 44 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2:
# 48 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 49 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 50 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	savebgm MUS_DUMMY
# 51 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 52 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_2, 2
# 53 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay 20
# 54 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 55 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
	end


CinnabarIsland_EventScript_BillScene::
# 62 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 63 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 64 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillScene_2
# 67 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_StepFasterUp
CinnabarIsland_EventScript_BillScene_1:
# 69 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 70 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	playse SE_PIN
# 71 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_ExclamationMark
# 72 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 73 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_Delay48
# 74 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 75 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillScene_6
# 80 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_WalkUp
CinnabarIsland_EventScript_BillScene_5:
# 82 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 83 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_HeyIfItIsntPlayer
# 84 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_ComeWithMeToOneIsland, MSGBOX_YESNO
# 85 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CinnabarIsland_EventScript_BillScene_10
# 90 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_IllBeWaitingInPokeCenter
# 91 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 92 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillScene_14
# 103 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_EventScript_BillScene_Movement_4
# 104 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
CinnabarIsland_EventScript_BillScene_13:
# 106 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 107 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 108 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
CinnabarIsland_EventScript_BillScene_9:
# 110 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_EventScript_BillScene_2:
# 65 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, Common_Movement_StepFasterLeft
	goto CinnabarIsland_EventScript_BillScene_1

CinnabarIsland_EventScript_BillScene_6:
# 76 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_EventScript_BillScene_Movement_0
# 77 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 78 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto CinnabarIsland_EventScript_BillScene_5

CinnabarIsland_EventScript_BillScene_10:
# 86 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_AllRightLetsGo
# 87 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 88 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
	goto CinnabarIsland_EventScript_BillScene_9

CinnabarIsland_EventScript_BillScene_14:
# 93 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_EventScript_BillScene_Movement_1
# 94 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_EventScript_BillScene_Movement_2
# 95 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 96 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	opendoor 14, 11
# 97 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitdooranim
# 98 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_EventScript_BillScene_Movement_3
# 99 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 100 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closedoor 14, 11
# 101 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitdooranim
	goto CinnabarIsland_EventScript_BillScene_13


CinnabarIsland_EventScript_SailToOneIsland::
# 116 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_SailToOneIsland_2
CinnabarIsland_EventScript_SailToOneIsland_1:
# 121 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	addobject LOCALID_CINNABAR_SEAGALLOP
# 122 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_SailToOneIsland_5
# 125 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_EventScript_SailToOneIsland_Movement_2
# 126 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_SEAGALLOP, CinnabarIsland_EventScript_SailToOneIsland_Movement_1
CinnabarIsland_EventScript_SailToOneIsland_4:
# 128 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 129 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_MyPalsBoatArrived
# 130 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 131 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_SailToOneIsland_9
# 135 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_EventScript_SailToOneIsland_Movement_5
# 136 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoat
CinnabarIsland_EventScript_SailToOneIsland_8:
# 138 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 139 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 140 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	removeobject LOCALID_CINNABAR_BILL
# 141 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay 40
# 142 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_SEAGALLOP
# 143 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1
# 144 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_CINNABAR_ISLAND
# 145 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_ONE_ISLAND
# 146 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	goto EventScript_SetSail
	end

CinnabarIsland_EventScript_SailToOneIsland_2:
# 117 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_EventScript_SailToOneIsland_Movement_0
# 118 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_EventScript_SailToOneIsland_Movement_0
# 119 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
	goto CinnabarIsland_EventScript_SailToOneIsland_1

CinnabarIsland_EventScript_SailToOneIsland_5:
# 123 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_SEAGALLOP, CinnabarIsland_EventScript_SailToOneIsland_Movement_1
	goto CinnabarIsland_EventScript_SailToOneIsland_4

CinnabarIsland_EventScript_SailToOneIsland_9:
# 132 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_BILL, CinnabarIsland_EventScript_SailToOneIsland_Movement_3
# 133 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_EventScript_SailToOneIsland_Movement_4
	goto CinnabarIsland_EventScript_SailToOneIsland_8


# 150 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoat:
# 152 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 153 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 154 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 154 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 155 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_faster_right
# 156 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 157 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 158 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 159 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
	step_end

CinnabarIsland_EventScript_GymDoorLocked::
# 164 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 165 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 166 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 167 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay 20
# 168 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_DoorIsLocked
# 169 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	closemessage
# 170 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 171 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	waitmovement 0
# 172 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
	end


CinnabarIsland_EventScript_Woman::
# 177 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lock_faceplayer
# 178 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 3
# 179 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_BlaineLivedHereSinceBeforeLab
	release_end


CinnabarIsland_EventScript_OldMan::
# 184 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_ScientistsExperimentInMansion, MSGBOX_NPC
	end


CinnabarIsland_EventScript_IslandSign::
# 189 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_IslandSign, MSGBOX_SIGN
	end


CinnabarIsland_EventScript_PokemonLabSign::
# 194 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_PokemonLab, MSGBOX_SIGN
	end


CinnabarIsland_EventScript_GymSign::
# 199 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	lockall
# 200 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 0
# 201 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	msgbox CinnabarIsland_Text_GymSign
# 202 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	releaseall
	end


# 38 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_Movement_0:
# 38 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 38 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 38 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 38 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 38 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 38 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
	step_end

# 76 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_Movement_0:
# 76 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 76 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 76 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
	step_end

# 93 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_Movement_1:
# 93 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 93 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_faster_right
	step_end

# 94 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_Movement_2:
# 94 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 94 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 94 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_faster_up
	step_end

# 98 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_Movement_3:
# 98 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_up
# 98 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 98 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
	step_end

# 103 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_BillScene_Movement_4:
# 103 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 103 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 103 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 103 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 103 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 103 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 103 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
	step_end

# 117 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_Movement_0:
# 117 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 117 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 117 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 117 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 117 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 117 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
	step_end

# 123 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_Movement_1:
# 123 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 123 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 123 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	run_left
# 123 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	run_left
# 123 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_left
# 123 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	creep_left
# 123 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	creep_left
	step_end

# 125 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_Movement_2:
# 125 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 125 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_16
# 125 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_8
# 125 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	step_faster_right
	step_end

# 132 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_Movement_3:
# 132 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 132 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 132 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
	step_end

# 133 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_Movement_4:
# 133 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 133 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 133 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 133 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 133 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
	step_end

# 135 "data/maps/CinnabarIsland_Frlg/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland_Movement_5:
# 135 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 135 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 135 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_down
# 135 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	walk_right
# 135 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	delay_4
# 135 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	set_invisible
	step_end

CinnabarIsland_Text_DoorIsLocked::
# 206 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "The door is locked…$"

CinnabarIsland_Text_BlaineLivedHereSinceBeforeLab::
# 210 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CINNABAR GYM's BLAINE is quite the\n"
	.string "odd fellow.\p"
	.string "He's lived on the island since way\n"
	.string "before the LAB was built.$"

CinnabarIsland_Text_ScientistsExperimentInMansion::
# 218 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Scientists conduct experiments \n"
	.string "in the burned-out building.\p"
	.string "You know, the one they call the\n"
	.string "POKéMON MANSION.$"

CinnabarIsland_Text_IslandSign::
# 226 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CINNABAR ISLAND\n"
	.string "The Fiery Town of Burning Desire$"

CinnabarIsland_Text_PokemonLab::
# 231 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "POKéMON LAB$"

CinnabarIsland_Text_GymSign::
# 235 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "CINNABAR ISLAND POKéMON GYM\n"
	.string "LEADER: BLAINE\l"
	.string "The Hotheaded Quiz Master!$"

CinnabarIsland_Text_HeyIfItIsntPlayer::
# 241 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Huh?\n"
	.string "Hey, if it isn't {PLAYER}!$"

CinnabarIsland_Text_ComeWithMeToOneIsland::
# 246 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Look, it's me, BILL.\n"
	.string "Long time no see!\p"
	.string "I hope you're still using my\n"
	.string "PC system.\p"
	.string "Well, listen, since we met up here,\n"
	.string "how about spending time with me?\p"
	.string "There's this little island in the far\n"
	.string "south called ONE ISLAND.\p"
	.string "A friend invited me, so I'm on my\n"
	.string "way out there.\p"
	.string "How about it?\n"
	.string "Do you feel like coming with me?$"

CinnabarIsland_Text_AllRightLetsGo::
# 266 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "All right, then.\n"
	.string "Let's go!$"

CinnabarIsland_Text_IllBeWaitingInPokeCenter::
# 271 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "What, are you too busy?\p"
	.string "Well, all right.\n"
	.string "The boat hasn't arrived yet anyway.\p"
	.string "I'll be waiting at the POKéMON\n"
	.string "CENTER over there.\p"
	.string "Come see me when you're done with\n"
	.string "your business here.$"

CinnabarIsland_Text_MyPalsBoatArrived::
# 284 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Looks like my pal's boat arrived,\n"
	.string "too.\p"
	.string "He sent it specially here to\n"
	.string "CINNABAR to pick me up.$"

CinnabarIsland_Text_IfYouHaveTriPassYouCanGoAgain::
# 292 "data/maps/CinnabarIsland_Frlg/scripts.pory"
	.string "Hey, wasn't that a long cruise?\p"
	.string "My buddy CELIO seemed to enjoy\n"
	.string "your company.\p"
	.string "I'm sure he'd welcome you if you\n"
	.string "were to visit him again.\p"
	.string "If you have a TRI-PASS, you can\n"
	.string "always take a ferry there from\l"
	.string "VERMILION PORT.\p"
	.string "All right, thanks for your company!$"
