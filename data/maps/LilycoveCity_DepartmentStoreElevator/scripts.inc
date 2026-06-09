LilycoveCity_DepartmentStoreElevator_MapScripts::
	.byte 0


LilycoveCity_DepartmentStoreElevator_EventScript_Attendant::
# 4 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	lock_faceplayer
# 5 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_0x8004, 0
# 6 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto_if_unset FLAG_TEMP_2, LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_2
LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_1:
# 9 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	copyvar VAR_0x8005, VAR_DEPT_STORE_FLOOR
# 10 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	special ShowDeptStoreElevatorFloorSelect
# 11 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	message gText_WhichFloorWouldYouLike
# 12 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	waitmessage
# 13 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_0x8004, 0
# 14 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	specialvar VAR_RESULT, GetDeptStoreDefaultFloorChoice
# 16 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 0, LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_6
# 18 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 1, LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_7
# 19 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 2, LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_8
# 20 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 3, LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_9
# 21 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 4, LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_10
LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_4:
# 23 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor
	end

LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_2:
# 7 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	special SetDeptStoreFloor
	goto LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_1

LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_6:
# 17 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 0, FALSE
	goto LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_4

LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_7:
# 18 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 1, FALSE
	goto LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_4

LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_8:
# 19 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 2, FALSE
	goto LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_4

LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_9:
# 20 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 3, FALSE
	goto LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_4

LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_10:
# 21 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	multichoicedefault 0, 0, MULTI_FLOORS, 4, FALSE
	goto LilycoveCity_DepartmentStoreElevator_EventScript_Attendant_4


LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor::
# 28 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	switch VAR_RESULT
# 29 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 0, LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_3
# 32 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 1, LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_4
# 35 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 2, LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_5
# 38 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 3, LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_6
# 41 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 4, LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_7
# 44 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case 5, LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_8
# 45 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_8
LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_1:
# 47 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_GoToFloor
	end

LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_3:
# 30 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_5F
# 31 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setdynamicwarp MAP_LILYCOVE_CITY_DEPARTMENT_STORE_5F, 2, 1
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_1

LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_4:
# 33 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_4F
# 34 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setdynamicwarp MAP_LILYCOVE_CITY_DEPARTMENT_STORE_4F, 2, 1
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_1

LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_5:
# 36 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_3F
# 37 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setdynamicwarp MAP_LILYCOVE_CITY_DEPARTMENT_STORE_3F, 2, 1
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_1

LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_6:
# 39 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_2F
# 40 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setdynamicwarp MAP_LILYCOVE_CITY_DEPARTMENT_STORE_2F, 2, 1
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_1

LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_7:
# 42 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setvar VAR_0x8006, DEPT_STORE_FLOORNUM_1F
# 43 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setdynamicwarp MAP_LILYCOVE_CITY_DEPARTMENT_STORE_1F, 2, 1
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_1

LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_8:
# 45 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ChooseFloor_1


LilycoveCity_DepartmentStoreElevator_EventScript_GoToFloor::
# 52 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	compare VAR_DEPT_STORE_FLOOR, VAR_0x8006
	goto_if_ne LilycoveCity_DepartmentStoreElevator_EventScript_GoToFloor_2
LilycoveCity_DepartmentStoreElevator_EventScript_GoToFloor_1:
# 56 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	goto LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect
	end

LilycoveCity_DepartmentStoreElevator_EventScript_GoToFloor_2:
# 53 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	call LilycoveCity_DepartmentStoreElevator_EventScript_MoveElevator
# 54 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	copyvar VAR_DEPT_STORE_FLOOR, VAR_0x8006
	goto LilycoveCity_DepartmentStoreElevator_EventScript_GoToFloor_1


LilycoveCity_DepartmentStoreElevator_EventScript_ExitFloorSelect::
# 61 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	special CloseDeptStoreElevatorWindow
	release_end


LilycoveCity_DepartmentStoreElevator_EventScript_MoveElevator::
# 66 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	special CloseDeptStoreElevatorWindow
# 67 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	closemessage
# 68 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_StepFasterDown
# 69 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	waitmovement 0
# 70 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	waitse
# 71 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	special MoveElevator
# 72 "data/maps/LilycoveCity_DepartmentStoreElevator/scripts.pory"
	setflag FLAG_TEMP_2
	return

