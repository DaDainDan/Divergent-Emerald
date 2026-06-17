Route110_TrickHousePuzzle3_MapScripts::
# 2 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHousePuzzle3_MapScripts_MAP_SCRIPT_ON_RESUME
# 10 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route110_TrickHousePuzzle3_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles
# 4 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	switch VAR_TEMP_9
# 5 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	case 0, Route110_TrickHousePuzzle3_MapScripts_MAP_SCRIPT_ON_RESUME_3
# 6 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	case 1, Route110_TrickHousePuzzle3_MapScripts_MAP_SCRIPT_ON_RESUME_4
Route110_TrickHousePuzzle3_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

Route110_TrickHousePuzzle3_MapScripts_MAP_SCRIPT_ON_RESUME_3:
# 5 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_SetDoorsState0
	goto Route110_TrickHousePuzzle3_MapScripts_MAP_SCRIPT_ON_RESUME_1

Route110_TrickHousePuzzle3_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 6 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_SetDoorsState1
	goto Route110_TrickHousePuzzle3_MapScripts_MAP_SCRIPT_ON_RESUME_1

Route110_TrickHousePuzzle3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_1, 0
# 12 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_2, 0
# 13 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_3, 0
# 14 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_4, 0
# 15 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_8, 0
# 16 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_9, 0
	end


Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles::
# 22 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 14, METATILE_TrickHousePuzzle_Button_Up, FALSE
# 23 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 11, METATILE_TrickHousePuzzle_Button_Up, FALSE
# 24 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 12, 5, METATILE_TrickHousePuzzle_Button_Up, FALSE
# 25 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 8, 2, METATILE_TrickHousePuzzle_Button_Up, FALSE
# 26 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	switch VAR_TEMP_8
# 27 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	case 1, Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_3
# 28 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	case 2, Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_4
# 29 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	case 3, Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_5
# 30 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	case 4, Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_6
Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_1:
	return

Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_3:
# 27 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 14, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
	goto Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_1

Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_4:
# 28 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 11, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
	goto Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_1

Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_5:
# 29 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 12, 5, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
	goto Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_1

Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_6:
# 30 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 8, 2, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
	goto Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles_1


Route110_TrickHousePuzzle3_EventScript_SetDoorsState0::
# 36 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 6, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile0, FALSE
# 37 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 6, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile1, FALSE
# 38 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 7, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile2, FALSE
# 39 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 7, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile3, FALSE
# 40 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 9, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile0, FALSE
# 41 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 9, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile1, FALSE
# 42 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 10, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile2, FALSE
# 43 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 10, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile3, FALSE
# 44 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 15, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile0, FALSE
# 45 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 15, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile1, FALSE
# 46 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 16, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile2, FALSE
# 47 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 16, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile3, FALSE
# 48 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 9, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile0, FALSE
# 49 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 9, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile1, FALSE
# 50 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 10, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile2, FALSE
# 51 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 10, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile3, FALSE
# 52 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 15, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile0, FALSE
# 53 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 15, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile1, FALSE
# 54 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 16, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile2, FALSE
# 55 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 16, METATILE_TrickHousePuzzle_BlueDoorH_Open_Tile3, FALSE
# 56 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 7, METATILE_TrickHousePuzzle_BlueDoorV_Retracted, TRUE
# 57 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 8, METATILE_TrickHousePuzzle_Floor_ShadowTop, FALSE
# 58 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 13, METATILE_TrickHousePuzzle_BlueDoorV_Retracted, TRUE
# 59 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 14, METATILE_TrickHousePuzzle_Floor_ShadowTop, FALSE
# 60 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 6, 4, METATILE_TrickHousePuzzle_BlueDoorV_Retracted, TRUE
# 61 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 6, 5, METATILE_TrickHousePuzzle_Floor_ShadowTop, FALSE
# 62 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 16, METATILE_TrickHousePuzzle_BlueDoorV_Retracted, TRUE
# 63 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 17, METATILE_TrickHousePuzzle_Floor_ShadowTop, FALSE
# 64 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 12, 7, METATILE_TrickHousePuzzle_BlueDoorV_Retracted, TRUE
# 65 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 12, 8, METATILE_TrickHousePuzzle_Floor_ShadowTop, FALSE
# 66 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 3, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 67 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 3, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 68 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 4, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 69 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 4, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 70 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 12, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 71 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 12, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 72 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 13, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 73 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 13, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 74 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 6, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 75 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 6, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 76 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 7, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 77 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 7, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 78 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 12, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 79 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 12, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 80 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 13, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 81 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 13, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 82 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 18, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 83 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 18, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 84 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 19, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 85 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 19, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 86 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 7, 9, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 87 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 8, 9, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 88 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 7, 10, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 89 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 8, 10, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 90 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 6, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 91 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 6, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 92 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 7, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 93 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 7, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 94 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 12, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 95 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 12, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 96 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 13, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 97 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 13, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 98 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 18, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 99 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 18, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 100 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 19, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 101 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 19, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 102 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 3, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile0, FALSE
# 103 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 3, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile1, FALSE
# 104 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 4, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile2, TRUE
# 105 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 4, METATILE_TrickHousePuzzle_RedDoorH_Closed_Tile3, TRUE
# 106 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 16, METATILE_TrickHousePuzzle_RedDoorV_Open0, TRUE
# 107 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 17, METATILE_TrickHousePuzzle_RedDoorV_Open1, TRUE
# 108 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 4, METATILE_TrickHousePuzzle_RedDoorV_Open0, TRUE
# 109 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 5, METATILE_TrickHousePuzzle_RedDoorV_Open1, TRUE
	return


Route110_TrickHousePuzzle3_EventScript_SetDoorsState1::
# 114 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 6, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile0, FALSE
# 115 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 6, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile1, FALSE
# 116 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 7, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile2, TRUE
# 117 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 7, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile3, TRUE
# 118 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 9, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile0, FALSE
# 119 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 9, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile1, FALSE
# 120 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 10, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile2, TRUE
# 121 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 10, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile3, TRUE
# 122 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 15, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile0, FALSE
# 123 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 15, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile1, FALSE
# 124 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 16, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile2, TRUE
# 125 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 16, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile3, TRUE
# 126 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 9, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile0, FALSE
# 127 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 9, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile1, FALSE
# 128 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 10, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile2, TRUE
# 129 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 10, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile3, TRUE
# 130 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 15, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile0, FALSE
# 131 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 15, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile1, FALSE
# 132 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 16, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile2, TRUE
# 133 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 16, METATILE_TrickHousePuzzle_BlueDoorH_Closed_Tile3, TRUE
# 134 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 7, METATILE_TrickHousePuzzle_BlueDoorV_Open0, TRUE
# 135 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 8, METATILE_TrickHousePuzzle_BlueDoorV_Open1, TRUE
# 136 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 13, METATILE_TrickHousePuzzle_BlueDoorV_Open0, TRUE
# 137 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 14, METATILE_TrickHousePuzzle_BlueDoorV_Open1, TRUE
# 138 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 6, 4, METATILE_TrickHousePuzzle_BlueDoorV_Open0, TRUE
# 139 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 6, 5, METATILE_TrickHousePuzzle_BlueDoorV_Open1, TRUE
# 140 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 16, METATILE_TrickHousePuzzle_BlueDoorV_Open0, TRUE
# 141 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 17, METATILE_TrickHousePuzzle_BlueDoorV_Open1, TRUE
# 142 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 12, 7, METATILE_TrickHousePuzzle_BlueDoorV_Open0, TRUE
# 143 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 12, 8, METATILE_TrickHousePuzzle_BlueDoorV_Open1, TRUE
# 144 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 3, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 145 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 3, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 146 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 4, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 147 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 4, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 148 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 12, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 149 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 12, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 150 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 1, 13, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 151 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 2, 13, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 152 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 6, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 153 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 6, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 154 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 7, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 155 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 7, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 156 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 12, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 157 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 12, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 158 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 13, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 159 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 13, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 160 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 18, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 161 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 18, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 162 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 4, 19, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 163 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 5, 19, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 164 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 7, 9, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 165 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 8, 9, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 166 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 7, 10, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 167 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 8, 10, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 168 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 6, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 169 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 6, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 170 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 7, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 171 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 7, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 172 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 12, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 173 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 12, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 174 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 13, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 175 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 13, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 176 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 18, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 177 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 18, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 178 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 10, 19, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 179 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 11, 19, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 180 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 3, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile0, FALSE
# 181 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 3, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile1, FALSE
# 182 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 13, 4, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile2, FALSE
# 183 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 14, 4, METATILE_TrickHousePuzzle_RedDoorH_Open_Tile3, FALSE
# 184 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 16, METATILE_TrickHousePuzzle_RedDoorV_Retracted, TRUE
# 185 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 3, 17, METATILE_TrickHousePuzzle_Floor_ShadowTop_Alt, FALSE
# 186 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 4, METATILE_TrickHousePuzzle_RedDoorV_Retracted, TRUE
# 187 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setmetatile 9, 5, METATILE_TrickHousePuzzle_Floor_ShadowTop_Alt, FALSE
	return


Route110_TrickHousePuzzle3_EventScript_Button1::
# 192 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	lockall
# 193 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_8, 1
# 194 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_PressButton
	end


Route110_TrickHousePuzzle3_EventScript_Button2::
# 199 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	lockall
# 200 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_8, 2
# 201 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_PressButton
	end


Route110_TrickHousePuzzle3_EventScript_Button3::
# 206 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	lockall
# 207 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_8, 3
# 208 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_PressButton
	end


Route110_TrickHousePuzzle3_EventScript_Button4::
# 213 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	lockall
# 214 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_8, 4
# 215 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle3_EventScript_PressButton
	end


Route110_TrickHousePuzzle3_EventScript_PressButton::
# 220 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_1, 0
# 221 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_2, 0
# 222 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_3, 0
# 223 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_4, 0
# 224 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	switch VAR_TEMP_8
# 225 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	case 1, Route110_TrickHousePuzzle3_EventScript_PressButton_3
# 226 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	case 2, Route110_TrickHousePuzzle3_EventScript_PressButton_4
# 227 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	case 3, Route110_TrickHousePuzzle3_EventScript_PressButton_5
# 228 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	case 4, Route110_TrickHousePuzzle3_EventScript_PressButton_6
Route110_TrickHousePuzzle3_EventScript_PressButton_1:
# 230 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	playse SE_PIN
# 231 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_UpdateButtonMetatiles
# 232 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	switch VAR_TEMP_9
# 233 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	case 0, Route110_TrickHousePuzzle3_EventScript_PressButton_9
# 234 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	case 1, Route110_TrickHousePuzzle3_EventScript_PressButton_10
Route110_TrickHousePuzzle3_EventScript_PressButton_7:
# 236 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	special DrawWholeMapView
# 237 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	switch VAR_TEMP_9
# 238 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	case 0, Route110_TrickHousePuzzle3_EventScript_PressButton_13
# 239 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	case 1, Route110_TrickHousePuzzle3_EventScript_PressButton_14
Route110_TrickHousePuzzle3_EventScript_PressButton_11:
# 241 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	releaseall
	end

Route110_TrickHousePuzzle3_EventScript_PressButton_3:
# 225 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto Route110_TrickHousePuzzle3_EventScript_PressButton_1

Route110_TrickHousePuzzle3_EventScript_PressButton_4:
# 226 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto Route110_TrickHousePuzzle3_EventScript_PressButton_1

Route110_TrickHousePuzzle3_EventScript_PressButton_5:
# 227 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto Route110_TrickHousePuzzle3_EventScript_PressButton_1

Route110_TrickHousePuzzle3_EventScript_PressButton_6:
# 228 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_4, 1
	goto Route110_TrickHousePuzzle3_EventScript_PressButton_1

Route110_TrickHousePuzzle3_EventScript_PressButton_9:
# 233 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_SetDoorsState0
	goto Route110_TrickHousePuzzle3_EventScript_PressButton_7

Route110_TrickHousePuzzle3_EventScript_PressButton_10:
# 234 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	call Route110_TrickHousePuzzle3_EventScript_SetDoorsState1
	goto Route110_TrickHousePuzzle3_EventScript_PressButton_7

Route110_TrickHousePuzzle3_EventScript_PressButton_13:
# 238 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_9, 1
	goto Route110_TrickHousePuzzle3_EventScript_PressButton_11

Route110_TrickHousePuzzle3_EventScript_PressButton_14:
# 239 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TEMP_9, 0
	goto Route110_TrickHousePuzzle3_EventScript_PressButton_11


Route110_TrickHousePuzzle3_EventScript_Scroll::
# 246 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	lockall
# 247 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_3_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle3_EventScript_Scroll_2
Route110_TrickHousePuzzle3_EventScript_Scroll_1:
# 251 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle3_EventScript_Scroll_2:
# 248 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_3_STATE, 1
# 249 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle3_EventScript_Scroll_1


Route110_TrickHousePuzzle3_EventScript_Justin::
# 256 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	trainerbattle_single TRAINER_JUSTIN, Route110_TrickHousePuzzle3_Text_JustinIntro, Route110_TrickHousePuzzle3_Text_JustinDefeat
# 257 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	msgbox Route110_TrickHousePuzzle3_Text_JustinPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle3_EventScript_Martha::
# 262 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	trainerbattle_single TRAINER_MARTHA, Route110_TrickHousePuzzle3_Text_MarthaIntro, Route110_TrickHousePuzzle3_Text_MarthaDefeat
# 263 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	msgbox Route110_TrickHousePuzzle3_Text_MarthaPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle3_EventScript_Alan::
# 268 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	trainerbattle_single TRAINER_ALAN, Route110_TrickHousePuzzle3_Text_AlanIntro, Route110_TrickHousePuzzle3_Text_AlanDefeat
# 269 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	msgbox Route110_TrickHousePuzzle3_Text_AlanPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened::
# 273 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is coveted.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle3_Text_JustinIntro::
# 283 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "I keep coming back to this same place!$"

Route110_TrickHousePuzzle3_Text_JustinDefeat::
# 287 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "I'm already having trouble, and then\n"
	.string "you have to beat me? It's not fair!$"

Route110_TrickHousePuzzle3_Text_JustinPostBattle::
# 292 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "It's full of doors here!\n"
	.string "It's too small and dark in here! Help!$"

Route110_TrickHousePuzzle3_Text_MarthaIntro::
# 297 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "I don't know what's going on here.\n"
	.string "I'm starting to feel sad…$"

Route110_TrickHousePuzzle3_Text_MarthaDefeat::
# 302 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "You… You're awful!$"

Route110_TrickHousePuzzle3_Text_MarthaPostBattle::
# 306 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "I know I'm weak!\n"
	.string "And, I have no sense of direction!$"

Route110_TrickHousePuzzle3_Text_AlanIntro::
# 311 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "I don't get it. What would anyone want\n"
	.string "with a house this bizarre?$"

Route110_TrickHousePuzzle3_Text_AlanDefeat::
# 316 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "I don't get it.\n"
	.string "How did I lose?$"

Route110_TrickHousePuzzle3_Text_AlanPostBattle::
# 321 "data/maps/Route110_TrickHousePuzzle3/scripts.pory"
	.string "I don't get it.\n"
	.string "How many traps are in this house?\p"
	.string "You may be the one to solve that.$"
