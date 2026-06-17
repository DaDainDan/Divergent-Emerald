CeladonCity_DepartmentStore_Elevator_Frlg_MapScripts::
	.byte 0


CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect::
# 4 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	lockall
# 5 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 6 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_2
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_1:
# 9 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
# 10 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	special DrawElevatorCurrentFloorWindow
# 11 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	message gText_WantWhichFloor
# 12 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	waitmessage
# 13 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 14 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
# 15 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_6
# 17 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_7
# 18 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_8
# 19 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 3, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_9
# 20 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 4, CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_10
CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_4:
# 22 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor
	end

CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_2:
# 7 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	call EventScript_GetElevatorFloor
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_1

CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_6:
# 16 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_DEPT_STORE_ELEVATOR, 0, FALSE
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_4

CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_7:
# 17 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_DEPT_STORE_ELEVATOR, 1, FALSE
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_4

CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_8:
# 18 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_DEPT_STORE_ELEVATOR, 2, FALSE
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_4

CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_9:
# 19 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_DEPT_STORE_ELEVATOR, 3, FALSE
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_4

CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_10:
# 20 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_DEPT_STORE_ELEVATOR, 4, FALSE
	goto CeladonCity_DepartmentStore_Elevator_EventScript_FloorSelect_4


CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor::
# 27 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_3
# 29 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_4
# 30 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_5
# 31 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 3, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_6
# 32 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 4, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_7
# 33 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 5, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_8
# 34 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case MULTI_B_PRESSED, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_8
CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_1:
# 37 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	copyvar VAR_0x8006, VAR_0x8003
# 38 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	switch VAR_0x8003
# 39 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 4, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_11
# 40 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 5, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_12
# 41 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 6, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_13
# 42 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 7, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_14
# 43 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	case 8, CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_15
CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_9:
# 45 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, VAR_0x8003
	goto_if_ne CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_17
CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_16:
# 54 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
	end

CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_3:
# 28 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 8
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_1

CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_4:
# 29 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 7
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_1

CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_5:
# 30 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 6
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_1

CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_6:
# 31 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 5
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_1

CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_7:
# 32 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 4
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_1

CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_8:
# 35 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_1

CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_11:
# 39 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE_1F, 255, 6, 1
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_9

CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_12:
# 40 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE_2F, 255, 6, 1
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_9

CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_13:
# 41 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE_3F, 255, 6, 1
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_9

CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_14:
# 42 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE_4F, 255, 6, 1
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_9

CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_15:
# 43 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_CELADON_CITY_DEPARTMENT_STORE_5F, 255, 6, 1
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_9

CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_17:
# 46 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 47 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	closemessage
# 48 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	waitse
# 49 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	special AnimateElevator
# 50 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	waitstate
# 51 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 52 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	copyvar VAR_ELEVATOR_FLOOR, VAR_0x8003
	goto CeladonCity_DepartmentStore_Elevator_EventScript_ChooseFloor_16


CeladonCity_DepartmentStore_Elevator_EventScript_ExitFloorSelect::
# 59 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 60 "data/maps/CeladonCity_DepartmentStore_Elevator_Frlg/scripts.pory"
	releaseall
	end

