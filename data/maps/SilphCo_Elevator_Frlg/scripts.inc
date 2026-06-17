SilphCo_Elevator_Frlg_MapScripts::
	.byte 0


SilphCo_Elevator_EventScript_FloorSelect::
# 4 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	lockall
# 5 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 6 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, SilphCo_Elevator_EventScript_FloorSelect_2
SilphCo_Elevator_EventScript_FloorSelect_1:
# 9 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
# 10 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special DrawElevatorCurrentFloorWindow
# 11 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	message gText_WantWhichFloor
# 12 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	waitmessage
# 13 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_SILPHCO_FLOORS
# 14 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
# 15 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special ShowScrollableMultichoice
# 16 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 0, SilphCo_Elevator_EventScript_FloorSelect_6
# 18 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 1, SilphCo_Elevator_EventScript_FloorSelect_7
# 19 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 2, SilphCo_Elevator_EventScript_FloorSelect_8
# 20 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 3, SilphCo_Elevator_EventScript_FloorSelect_9
# 21 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 4, SilphCo_Elevator_EventScript_FloorSelect_10
# 22 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 5, SilphCo_Elevator_EventScript_FloorSelect_11
# 23 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 6, SilphCo_Elevator_EventScript_FloorSelect_12
# 24 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 7, SilphCo_Elevator_EventScript_FloorSelect_13
# 25 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 8, SilphCo_Elevator_EventScript_FloorSelect_14
# 26 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 9, SilphCo_Elevator_EventScript_FloorSelect_15
# 27 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 10, SilphCo_Elevator_EventScript_FloorSelect_16
# 28 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 11, SilphCo_Elevator_EventScript_FloorSelect_17
# 29 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case MULTI_B_PRESSED, SilphCo_Elevator_EventScript_FloorSelect_17
SilphCo_Elevator_EventScript_FloorSelect_4:
# 32 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_GoToFloor
	end

SilphCo_Elevator_EventScript_FloorSelect_2:
# 7 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	call EventScript_GetElevatorFloor
	goto SilphCo_Elevator_EventScript_FloorSelect_1

SilphCo_Elevator_EventScript_FloorSelect_6:
# 17 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 14
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_7:
# 18 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 13
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_8:
# 19 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 12
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_9:
# 20 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 11
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_10:
# 21 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 10
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_11:
# 22 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 9
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_12:
# 23 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 8
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_13:
# 24 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 7
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_14:
# 25 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 6
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_15:
# 26 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 5
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_16:
# 27 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 4
	goto SilphCo_Elevator_EventScript_FloorSelect_4

SilphCo_Elevator_EventScript_FloorSelect_17:
# 30 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	goto SilphCo_Elevator_EventScript_FloorSelect_4


SilphCo_Elevator_EventScript_GoToFloor::
# 37 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	copyvar VAR_0x8006, VAR_0x8003
# 38 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	switch VAR_0x8003
# 39 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 4, SilphCo_Elevator_EventScript_GoToFloor_3
# 40 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 5, SilphCo_Elevator_EventScript_GoToFloor_4
# 41 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 6, SilphCo_Elevator_EventScript_GoToFloor_5
# 42 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 7, SilphCo_Elevator_EventScript_GoToFloor_6
# 43 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 8, SilphCo_Elevator_EventScript_GoToFloor_7
# 44 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 9, SilphCo_Elevator_EventScript_GoToFloor_8
# 45 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 10, SilphCo_Elevator_EventScript_GoToFloor_9
# 46 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 11, SilphCo_Elevator_EventScript_GoToFloor_10
# 47 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 12, SilphCo_Elevator_EventScript_GoToFloor_11
# 48 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 13, SilphCo_Elevator_EventScript_GoToFloor_12
# 49 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	case 14, SilphCo_Elevator_EventScript_GoToFloor_13
SilphCo_Elevator_EventScript_GoToFloor_1:
# 51 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, VAR_0x8003
	goto_if_ne SilphCo_Elevator_EventScript_GoToFloor_15
SilphCo_Elevator_EventScript_GoToFloor_14:
# 60 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end

SilphCo_Elevator_EventScript_GoToFloor_3:
# 39 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_1F, 255, 22, 3
	goto SilphCo_Elevator_EventScript_GoToFloor_1

SilphCo_Elevator_EventScript_GoToFloor_4:
# 40 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_2F, 255, 22, 3
	goto SilphCo_Elevator_EventScript_GoToFloor_1

SilphCo_Elevator_EventScript_GoToFloor_5:
# 41 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_3F, 255, 22, 3
	goto SilphCo_Elevator_EventScript_GoToFloor_1

SilphCo_Elevator_EventScript_GoToFloor_6:
# 42 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_4F, 255, 22, 3
	goto SilphCo_Elevator_EventScript_GoToFloor_1

SilphCo_Elevator_EventScript_GoToFloor_7:
# 43 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_5F, 255, 22, 3
	goto SilphCo_Elevator_EventScript_GoToFloor_1

SilphCo_Elevator_EventScript_GoToFloor_8:
# 44 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_6F, 255, 20, 3
	goto SilphCo_Elevator_EventScript_GoToFloor_1

SilphCo_Elevator_EventScript_GoToFloor_9:
# 45 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_7F, 255, 23, 3
	goto SilphCo_Elevator_EventScript_GoToFloor_1

SilphCo_Elevator_EventScript_GoToFloor_10:
# 46 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_8F, 255, 22, 3
	goto SilphCo_Elevator_EventScript_GoToFloor_1

SilphCo_Elevator_EventScript_GoToFloor_11:
# 47 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_9F, 255, 24, 3
	goto SilphCo_Elevator_EventScript_GoToFloor_1

SilphCo_Elevator_EventScript_GoToFloor_12:
# 48 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_10F, 255, 13, 3
	goto SilphCo_Elevator_EventScript_GoToFloor_1

SilphCo_Elevator_EventScript_GoToFloor_13:
# 49 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_SILPH_CO_11F, 255, 13, 3
	goto SilphCo_Elevator_EventScript_GoToFloor_1

SilphCo_Elevator_EventScript_GoToFloor_15:
# 52 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 53 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	closemessage
# 54 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	waitse
# 55 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special AnimateElevator
# 56 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	waitstate
# 57 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 58 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	copyvar VAR_ELEVATOR_FLOOR, VAR_0x8003
	goto SilphCo_Elevator_EventScript_GoToFloor_14


SilphCo_Elevator_EventScript_ExitFloorSelect::
# 65 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 66 "data/maps/SilphCo_Elevator_Frlg/scripts.pory"
	releaseall
	end

