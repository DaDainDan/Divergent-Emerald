Route110_TrickHouseEntrance_MapScripts::
# 10 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 41 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 44 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_LANDMARK_TRICK_HOUSE
# 12 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR, 1
	goto_if_eq Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 17 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
	goto_if_eq Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 25 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1
	goto_if_eq Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 29 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_ENTRANCE_STATE, 0
	goto_if_eq Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
# 29 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
	goto_if_eq Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
# 29 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_ENTRANCE_STATE, 5
	goto_if_eq Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 32 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 33 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_20
# 34 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
# 35 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
# 36 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 13 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR, 0
# 14 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 5
# 15 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
	goto Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 18 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 19 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 8
	goto_if_eq Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 22 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 2
	goto Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 26 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxyperm LOCALID_TRICK_MASTER, 5, 2
	goto Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 20 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 6
	goto Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 30 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
	goto Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_12

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 33 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 0
	goto Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 36 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
	goto Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 42 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_EventScript_BeginChallenge
	.2byte 0

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 45 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
# 52 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 0, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot
# 53 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 1, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 54 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 2, Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor
# 55 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 3, Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor
# 56 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 4, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 57 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 5, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 58 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 6, Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_7
	.2byte 0

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 46 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 47 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	showobjectat LOCALID_TRICK_MASTER, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
# 48 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_EAST
# 49 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
	end

Route110_TrickHouseEntrance_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_7:
# 59 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 60 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 5, 2
# 61 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_SOUTH
	end


Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle::
# 68 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 0
# 69 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 70 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_3
# 74 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_4
# 78 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_5
# 82 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_6
# 86 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_7
# 90 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_8
# 94 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_9
# 98 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 8, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_10
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1:
	return

Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_3:
# 71 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_11
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1

Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_4:
# 75 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_13
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1

Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_5:
# 79 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_15
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1

Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_6:
# 83 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_17
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1

Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_7:
# 87 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_19
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1

Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_8:
# 91 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_21
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1

Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_9:
# 95 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_23
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1

Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_10:
# 98 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 4
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1

Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_11:
# 72 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1

Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_13:
# 76 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1

Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_15:
# 80 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1

Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_17:
# 84 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1

Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_19:
# 88 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1

Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_21:
# 92 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1

Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_23:
# 96 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
	goto Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle_1


Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot::
# 104 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 105 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	hideobjectat LOCALID_TRICK_MASTER, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
# 106 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 107 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_3
# 108 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_4
# 109 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_5
# 110 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_6
# 111 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_7
# 112 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_8
# 113 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_9
# 114 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_10
Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1:
	end

Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_3:
# 107 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 6, 3
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1

Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_4:
# 108 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 11, 5
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1

Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_5:
# 109 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 9, 1
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1

Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_6:
# 110 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 3, 1
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1

Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_7:
# 111 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 0, 5
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1

Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_8:
# 112 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 11, 1
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1

Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_9:
# 113 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 8, 1
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1

Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_10:
# 114 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 4, 4
	goto Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot_1


Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster::
# 120 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
	end


Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor::
# 125 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 126 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 5, 2
# 127 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_NORTH
	end


Route110_TrickHouseEntrance_EventScript_BeginChallenge::
# 132 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 133 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 134 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 0
	goto_if_eq Route110_TrickHouseEntrance_EventScript_BeginChallenge_2
Route110_TrickHouseEntrance_EventScript_BeginChallenge_1:
# 137 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse, MSGBOX_DEFAULT
# 138 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 139 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 140 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterSpin
# 141 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouseEntrance_EventScript_BeginChallenge_Movement_0
# 144 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 145 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 146 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 1
# 147 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 0
# 148 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_BeginChallenge_2:
# 135 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster, MSGBOX_DEFAULT
	goto Route110_TrickHouseEntrance_EventScript_BeginChallenge_1


Route110_TrickHouseEntrance_EventScript_UnusedRelease::
# 153 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Route110_TrickHouseEntrance_EventScript_TrickMaster::
# 158 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 159 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 160 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_TrickMaster_3
# 161 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_TrickMaster_4
# 162 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_TrickMaster_5
# 163 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_TrickMaster_6
Route110_TrickHouseEntrance_EventScript_TrickMaster_1:
	end

Route110_TrickHouseEntrance_EventScript_TrickMaster_3:
# 160 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster
	goto Route110_TrickHouseEntrance_EventScript_TrickMaster_1

Route110_TrickHouseEntrance_EventScript_TrickMaster_4:
# 161 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GiveReward
	goto Route110_TrickHouseEntrance_EventScript_TrickMaster_1

Route110_TrickHouseEntrance_EventScript_TrickMaster_5:
# 162 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_StillMakingPuzzle
	goto Route110_TrickHouseEntrance_EventScript_TrickMaster_1

Route110_TrickHouseEntrance_EventScript_TrickMaster_6:
# 163 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_MechadollReward
	goto Route110_TrickHouseEntrance_EventScript_TrickMaster_1


Route110_TrickHouseEntrance_EventScript_FoundTrickMaster::
# 169 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 170 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 171 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 172 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 173 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 174 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 175 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_3
# 176 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_4
# 177 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_5
# 178 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_6
# 179 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_7
# 180 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_8
# 181 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_9
# 182 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_10
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_1:
# 184 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 185 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1
# 186 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warpsilent MAP_ROUTE110_TRICK_HOUSE_ENTRANCE, 6, 2
# 187 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 188 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_3:
# 175 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk, MSGBOX_DEFAULT
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_1

Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_4:
# 176 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBehindTree, MSGBOX_DEFAULT
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_1

Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_5:
# 177 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInDresser, MSGBOX_DEFAULT
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_1

Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_6:
# 178 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConealedBeyondWindow, MSGBOX_DEFAULT
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_1

Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_7:
# 179 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInPlanter, MSGBOX_DEFAULT
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_1

Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_8:
# 180 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInCupboard, MSGBOX_DEFAULT
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_1

Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_9:
# 181 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBehindWindow, MSGBOX_DEFAULT
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_1

Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_10:
# 182 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion, MSGBOX_DEFAULT
	goto Route110_TrickHouseEntrance_EventScript_FoundTrickMaster_1


# 192 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouse_Movement_TrickMasterSpin:
# 194 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_up
# 195 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 196 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 197 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 198 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_down
# 199 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 200 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 201 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
	step_end

Route110_TrickHouseEntrance_EventScript_StillMakingPuzzle::
# 205 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick, MSGBOX_DEFAULT
# 206 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 207 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 208 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 209 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 210 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_ExclamationMark
# 211 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 212 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_Delay48
# 213 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 214 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges, MSGBOX_DEFAULT
# 215 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_StepFasterUp
# 216 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 217 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Route110_TrickHouseEntrance_EventScript_GiveReward::
# 222 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 223 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 224 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward, MSGBOX_DEFAULT
# 225 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 226 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_GiveReward_3
# 227 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_GiveReward_4
# 228 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_GiveReward_5
# 229 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_GiveReward_6
# 230 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_GiveReward_7
# 231 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_GiveReward_8
# 232 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_EventScript_GiveReward_9
Route110_TrickHouseEntrance_EventScript_GiveReward_1:
# 234 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzleReward
	end

Route110_TrickHouseEntrance_EventScript_GiveReward_3:
# 226 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_RARE_CANDY
	goto Route110_TrickHouseEntrance_EventScript_GiveReward_1

Route110_TrickHouseEntrance_EventScript_GiveReward_4:
# 227 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_TIMER_BALL
	goto Route110_TrickHouseEntrance_EventScript_GiveReward_1

Route110_TrickHouseEntrance_EventScript_GiveReward_5:
# 228 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_HARD_STONE
	goto Route110_TrickHouseEntrance_EventScript_GiveReward_1

Route110_TrickHouseEntrance_EventScript_GiveReward_6:
# 229 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_SMOKE_BALL
	goto Route110_TrickHouseEntrance_EventScript_GiveReward_1

Route110_TrickHouseEntrance_EventScript_GiveReward_7:
# 230 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_TM_TAUNT
	goto Route110_TrickHouseEntrance_EventScript_GiveReward_1

Route110_TrickHouseEntrance_EventScript_GiveReward_8:
# 231 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_MAGNET
	goto Route110_TrickHouseEntrance_EventScript_GiveReward_1

Route110_TrickHouseEntrance_EventScript_GiveReward_9:
# 232 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_PP_MAX
	goto Route110_TrickHouseEntrance_EventScript_GiveReward_1


Route110_TrickHouseEntrance_EventScript_GivePuzzleReward::
	giveitem VAR_GIFT_ITEM
# 0 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route110_TrickHouseEntrance_EventScript_GivePuzzleReward_2
# 245 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_BagIsFull
# 246 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
Route110_TrickHouseEntrance_EventScript_GivePuzzleReward_1:
# 248 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_GivePuzzleReward_2:
# 240 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 241 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
# 242 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_StepFasterUp
# 243 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
	goto Route110_TrickHouseEntrance_EventScript_GivePuzzleReward_1


Route110_TrickHouseEntrance_EventScript_MechadollReward::
# 253 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 254 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 255 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_MechadollWhichTent, MSGBOX_DEFAULT
# 256 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	multichoice 0, 0, MULTI_TENT, TRUE
# 257 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 258 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_MechadollReward_3
# 259 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givedecoration DECOR_BLUE_TENT
Route110_TrickHouseEntrance_EventScript_MechadollReward_1:
# 261 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_TrickHouseEntrance_EventScript_MechadollReward_6
# 265 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ThenFarewell, MSGBOX_DEFAULT
# 266 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 267 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 268 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 269 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterSpin
# 270 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 272 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouseEntrance_EventScript_BeginChallenge_Movement_0
# 273 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 274 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 275 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 276 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 5
Route110_TrickHouseEntrance_EventScript_MechadollReward_5:
# 278 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_MechadollReward_3:
# 258 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givedecoration DECOR_RED_TENT
	goto Route110_TrickHouseEntrance_EventScript_MechadollReward_1

Route110_TrickHouseEntrance_EventScript_MechadollReward_6:
# 262 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 263 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_PCFullAgain, MSGBOX_DEFAULT
	goto Route110_TrickHouseEntrance_EventScript_MechadollReward_5


Route110_TrickHouseEntrance_EventScript_Door::
# 283 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 284 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 285 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_Door_3
# 287 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_Door_4
# 293 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_Door_5
# 295 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_Door_6
Route110_TrickHouseEntrance_EventScript_Door_1:
# 302 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_Door_3:
# 286 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ItsAScroll, MSGBOX_DEFAULT
	goto Route110_TrickHouseEntrance_EventScript_Door_1

Route110_TrickHouseEntrance_EventScript_Door_4:
# 288 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll, MSGBOX_YESNO
# 289 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 290 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route110_TrickHouseEntrance_EventScript_Door_7
	goto Route110_TrickHouseEntrance_EventScript_Door_1

Route110_TrickHouseEntrance_EventScript_Door_5:
# 294 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote, MSGBOX_DEFAULT
	goto Route110_TrickHouseEntrance_EventScript_Door_1

Route110_TrickHouseEntrance_EventScript_Door_6:
# 296 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_LEVEL, 8
	goto_if_eq Route110_TrickHouseEntrance_EventScript_Door_9
# 299 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ItsAScroll, MSGBOX_DEFAULT
	goto Route110_TrickHouseEntrance_EventScript_Door_1

Route110_TrickHouseEntrance_EventScript_Door_7:
# 291 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom
	goto Route110_TrickHouseEntrance_EventScript_Door_1

Route110_TrickHouseEntrance_EventScript_Door_9:
# 297 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote, MSGBOX_DEFAULT
	goto Route110_TrickHouseEntrance_EventScript_Door_1


Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom::
# 307 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 5, 1, METATILE_GenericBuilding_TrickHouse_Stairs_Down, FALSE
# 308 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 309 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 310 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 311 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 312 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 313 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 314 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 315 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_3
# 316 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_4
# 317 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_5
# 318 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_6
# 319 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_7
# 320 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_8
# 321 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_9
# 322 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_10
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1:
# 324 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 325 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end

Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_3:
# 315 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE1, 0, 21
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1

Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_4:
# 316 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE2, 0, 21
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1

Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_5:
# 317 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE3, 0, 21
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1

Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_6:
# 318 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE4, 0, 21
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1

Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_7:
# 319 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE5, 0, 21
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1

Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_8:
# 320 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE6, 0, 21
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1

Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_9:
# 321 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE7, 0, 21
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1

Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_10:
# 322 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE8, 0, 21
	goto Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom_1


Route110_TrickHousePuzzle_EventScript_Door::
# 330 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 331 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 332 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHousePuzzle_EventScript_Door_3
# 333 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHousePuzzle_EventScript_Door_4
# 334 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHousePuzzle_EventScript_Door_5
# 335 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHousePuzzle_EventScript_Door_6
# 336 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHousePuzzle_EventScript_Door_7
# 337 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHousePuzzle_EventScript_Door_8
# 338 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHousePuzzle_EventScript_Door_9
# 339 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHousePuzzle_EventScript_Door_10
Route110_TrickHousePuzzle_EventScript_Door_1:
# 341 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorEnd
	end

Route110_TrickHousePuzzle_EventScript_Door_3:
# 332 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHousePuzzle1_EventScript_Door
	goto Route110_TrickHousePuzzle_EventScript_Door_1

Route110_TrickHousePuzzle_EventScript_Door_4:
# 333 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_Door
	goto Route110_TrickHousePuzzle_EventScript_Door_1

Route110_TrickHousePuzzle_EventScript_Door_5:
# 334 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_Door
	goto Route110_TrickHousePuzzle_EventScript_Door_1

Route110_TrickHousePuzzle_EventScript_Door_6:
# 335 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHousePuzzle4_EventScript_Door
	goto Route110_TrickHousePuzzle_EventScript_Door_1

Route110_TrickHousePuzzle_EventScript_Door_7:
# 336 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_Door
	goto Route110_TrickHousePuzzle_EventScript_Door_1

Route110_TrickHousePuzzle_EventScript_Door_8:
# 337 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHousePuzzle6_EventScript_Door
	goto Route110_TrickHousePuzzle_EventScript_Door_1

Route110_TrickHousePuzzle_EventScript_Door_9:
# 338 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_Door
	goto Route110_TrickHousePuzzle_EventScript_Door_1

Route110_TrickHousePuzzle_EventScript_Door_10:
# 339 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHousePuzzle8_EventScript_Door
	goto Route110_TrickHousePuzzle_EventScript_Door_1


Route110_TrickHousePuzzle1_EventScript_Door::
# 346 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_1_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle1_EventScript_Door_2
Route110_TrickHousePuzzle1_EventScript_Door_1:
# 349 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 350 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 351 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_1_STATE, 2
	return

Route110_TrickHousePuzzle1_EventScript_Door_2:
# 347 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
	goto Route110_TrickHousePuzzle1_EventScript_Door_1


Route110_TrickHousePuzzle2_EventScript_Door::
# 356 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_2_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle2_EventScript_Door_2
Route110_TrickHousePuzzle2_EventScript_Door_1:
# 359 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 360 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 361 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_2_STATE, 2
	return

Route110_TrickHousePuzzle2_EventScript_Door_2:
# 357 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
	goto Route110_TrickHousePuzzle2_EventScript_Door_1


Route110_TrickHousePuzzle3_EventScript_Door::
# 366 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_3_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_Door_2
Route110_TrickHousePuzzle3_EventScript_Door_1:
# 369 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 370 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 371 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_3_STATE, 2
	return

Route110_TrickHousePuzzle3_EventScript_Door_2:
# 367 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
	goto Route110_TrickHousePuzzle3_EventScript_Door_1


Route110_TrickHousePuzzle4_EventScript_Door::
# 376 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_4_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle4_EventScript_Door_2
Route110_TrickHousePuzzle4_EventScript_Door_1:
# 379 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 380 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 381 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_4_STATE, 2
	return

Route110_TrickHousePuzzle4_EventScript_Door_2:
# 377 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
	goto Route110_TrickHousePuzzle4_EventScript_Door_1


Route110_TrickHousePuzzle5_EventScript_Door::
# 386 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_5_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Door_2
Route110_TrickHousePuzzle5_EventScript_Door_1:
# 389 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 390 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 391 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_5_STATE, 2
	return

Route110_TrickHousePuzzle5_EventScript_Door_2:
# 387 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
	goto Route110_TrickHousePuzzle5_EventScript_Door_1


Route110_TrickHousePuzzle6_EventScript_Door::
# 396 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_6_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle6_EventScript_Door_2
Route110_TrickHousePuzzle6_EventScript_Door_1:
# 399 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 400 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 401 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_6_STATE, 2
	return

Route110_TrickHousePuzzle6_EventScript_Door_2:
# 397 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
	goto Route110_TrickHousePuzzle6_EventScript_Door_1


Route110_TrickHousePuzzle7_EventScript_Door::
# 406 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_7_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle7_EventScript_Door_2
Route110_TrickHousePuzzle7_EventScript_Door_1:
# 409 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 410 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 411 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE, 2
	return

Route110_TrickHousePuzzle7_EventScript_Door_2:
# 407 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
	goto Route110_TrickHousePuzzle7_EventScript_Door_1


Route110_TrickHousePuzzle8_EventScript_Door::
# 416 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle8_EventScript_Door_2
Route110_TrickHousePuzzle8_EventScript_Door_1:
# 419 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 420 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 421 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 2
	return

Route110_TrickHousePuzzle8_EventScript_Door_2:
# 417 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_DoorLocked
	goto Route110_TrickHousePuzzle8_EventScript_Door_1


Route110_TrickHousePuzzle_EventScript_DoorEnd::
# 426 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 427 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 428 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Route110_TrickHousePuzzle_EventScript_DoorLocked::
# 433 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere, MSGBOX_DEFAULT
# 434 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Route110_TrickHousePuzzle_EventScript_ReadScrollAgain::
# 439 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt, MSGBOX_DEFAULT
# 440 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Route110_TrickHousePuzzle_EventScript_FoundScroll::
# 445 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 446 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	message Route110_TrickHousePuzzle_Text_FoundAScroll
# 447 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
# 448 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle_Text_MemorizedSecretCode, MSGBOX_DEFAULT
# 449 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
	end


Route110_TrickHouseEntrance_EventScript_TrickMasterHiding::
# 454 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 455 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_YoureBeingWatched, MSGBOX_DEFAULT
# 456 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 457 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 458 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_3
# 461 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_4
# 464 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_5
Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_1:
# 468 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8006, 0
# 469 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	dofieldeffectsparkle VAR_0x8004, VAR_0x8005, VAR_0x8006
# 470 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 471 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 10
# 472 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
	end

Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_3:
# 459 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 6
# 460 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 3
	goto Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_1

Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_4:
# 462 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 11
# 463 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 5
	goto Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_1

Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_5:
# 465 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 9
# 466 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 2
	goto Route110_TrickHouseEntrance_EventScript_TrickMasterHiding_1


# 143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_BeginChallenge_Movement_0:
# 143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_up
# 143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	disable_anim
# 143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
	step_end

Route110_TrickHouseEntrance_Text_YoureBeingWatched::
# 476 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You're being watched…$"

Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk::
# 480 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "beneath this desk? You're sharp!$"

Route110_TrickHouseEntrance_Text_ConcealedBehindTree::
# 487 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "behind this tree? You're sharp!$"

Route110_TrickHouseEntrance_Text_ConcealedInDresser::
# 494 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "in this dresser? You're sharp!$"

Route110_TrickHouseEntrance_Text_ConealedBeyondWindow::
# 501 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "beyond this window? You're sharp!$"

Route110_TrickHouseEntrance_Text_ConcealedInPlanter::
# 508 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "in this planter? You're sharp!$"

Route110_TrickHouseEntrance_Text_ConcealedInCupboard::
# 515 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "in this cupboard? You're sharp!$"

Route110_TrickHouseEntrance_Text_ConcealedBehindWindow::
# 522 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "behind this window? You're sharp!$"

Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion::
# 529 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
	.string "How did you know I concealed myself\n"
	.string "beneath this cushion? You're sharp!$"

Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster::
# 536 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Behold!\p"
	.string "For I am the greatest living mystery\n"
	.string "of a man in all of HOENN!\l"
	.string "They call me…\p"
	.string "The TRICK MASTER!\n"
	.string "Wahahaha! Glad to meet you!$"

Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse::
# 547 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You, you've come to challenge\n"
	.string "my TRICK HOUSE, haven't you?\p"
	.string "That's why you're here, isn't it?\n"
	.string "Yes, it is!\p"
	.string "Consider your challenge accepted!\p"
	.string "Enter through the scroll there,\n"
	.string "and let your challenge commence!\p"
	.string "I shall be waiting in the back!$"

Route110_TrickHouseEntrance_Text_ItsAScroll::
# 562 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "It's a scroll.$"

Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll::
# 566 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "There is a big hole behind the scroll!\p"
	.string "Want to go in?$"

Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote::
# 572 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "There is a note affixed to the scroll…\p"
	.string "“I am leaving on a journey.\n"
	.string "Don't look for me. TRICK MASTER”$"

Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick::
# 579 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "For the next time, I'll use this trick,\n"
	.string "and that scheme, and those ruses…\p"
	.string "Mufufufu… If I may say so, it's\n"
	.string "brilliantly difficult, even for me!$"

Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges::
# 587 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? What?!\n"
	.string "Oh, it's you!\p"
	.string "I'm in the midst of devising new tricky\n"
	.string "challenges!\p"
	.string "It's not too much to ask for a bit more\n"
	.string "time for me to think, is it now?\l"
	.string "You wouldn't begrudge me that?\l"
	.string "Come back in a little while!$"

Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward::
# 600 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Ah, it's you! You're here to accept the\n"
	.string "reward from before, isn't that right?\l"
	.string "Yes, right I am!\p"
	.string "Here!\n"
	.string "I'll give it to you now!$"

Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward::
# 609 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah?\n"
	.string "Did you not come to claim your reward?$"

Route110_TrickHouseEntrance_Text_MechadollWhichTent::
# 614 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "MECHADOLL 5 I AM!\n"
	.string "IF REWARD IS NOT TAKEN BY YOU,\l"
	.string "THEN TRICK MASTER YOU CANNOT FOLLOW.\p"
	.string "RED TENT OR BLUE TENT,\n"
	.string "WHICH DO YOU PREFER?$"

Route110_TrickHouseEntrance_Text_ThenFarewell::
# 623 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "THEN FAREWELL.$"

Route110_TrickHouseEntrance_Text_PCFullAgain::
# 627 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "YOUR PC STATUS: FULL AGAIN.\n"
	.string "MEAN, YOU ARE.$"

Route110_TrickHousePuzzle_Text_FoundAScroll::
# 632 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} found a scroll.$"

Route110_TrickHousePuzzle_Text_MemorizedSecretCode::
# 636 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} memorized the secret code\n"
	.string "written on the scroll.$"

Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt::
# 641 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "A secret code is written on it.$"

Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere::
# 645 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The door is locked.\p"
	.string "…On closer inspection, this is written\n"
	.string "on it: “Write the secret code here.”$"
