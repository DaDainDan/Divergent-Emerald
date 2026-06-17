RocketHideout_Elevator_Frlg_MapScripts::
	.byte 0


RocketHideout_Elevator_EventScript_FloorSelect::
# 4 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	lockall
# 5 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto_if_unset FLAG_CAN_USE_ROCKET_HIDEOUT_LIFT, RocketHideout_Elevator_EventScript_FloorSelect_2
# 10 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 11 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, RocketHideout_Elevator_EventScript_FloorSelect_5
RocketHideout_Elevator_EventScript_FloorSelect_4:
# 14 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
# 15 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	special DrawElevatorCurrentFloorWindow
# 16 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	message gText_WantWhichFloor
# 17 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	waitmessage
# 18 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 19 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
# 20 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 0, RocketHideout_Elevator_EventScript_FloorSelect_9
# 22 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 1, RocketHideout_Elevator_EventScript_FloorSelect_10
# 23 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 2, RocketHideout_Elevator_EventScript_FloorSelect_11
RocketHideout_Elevator_EventScript_FloorSelect_7:
# 25 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ChooseFloor
	end

RocketHideout_Elevator_EventScript_FloorSelect_2:
# 6 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	msgbox RocketHideout_Elevator_Text_AppearsToNeedAKey
# 7 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	releaseall
	end

RocketHideout_Elevator_EventScript_FloorSelect_5:
# 12 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	call EventScript_GetElevatorFloor
	goto RocketHideout_Elevator_EventScript_FloorSelect_4

RocketHideout_Elevator_EventScript_FloorSelect_9:
# 21 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_ROCKET_HIDEOUT_ELEVATOR, 0, FALSE
	goto RocketHideout_Elevator_EventScript_FloorSelect_7

RocketHideout_Elevator_EventScript_FloorSelect_10:
# 22 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_ROCKET_HIDEOUT_ELEVATOR, 1, FALSE
	goto RocketHideout_Elevator_EventScript_FloorSelect_7

RocketHideout_Elevator_EventScript_FloorSelect_11:
# 23 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_ROCKET_HIDEOUT_ELEVATOR, 2, FALSE
	goto RocketHideout_Elevator_EventScript_FloorSelect_7


RocketHideout_Elevator_EventScript_ChooseFloor::
# 30 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 31 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 0, RocketHideout_Elevator_EventScript_ChooseFloor_3
# 32 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 1, RocketHideout_Elevator_EventScript_ChooseFloor_4
# 33 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 2, RocketHideout_Elevator_EventScript_ChooseFloor_5
# 34 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 3, RocketHideout_Elevator_EventScript_ChooseFloor_6
# 35 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case MULTI_B_PRESSED, RocketHideout_Elevator_EventScript_ChooseFloor_6
RocketHideout_Elevator_EventScript_ChooseFloor_1:
# 38 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	copyvar VAR_0x8006, VAR_0x8003
# 39 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	switch VAR_0x8003
# 40 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 3, RocketHideout_Elevator_EventScript_ChooseFloor_9
# 41 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 2, RocketHideout_Elevator_EventScript_ChooseFloor_10
# 42 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	case 0, RocketHideout_Elevator_EventScript_ChooseFloor_11
RocketHideout_Elevator_EventScript_ChooseFloor_7:
# 44 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, VAR_0x8003
	goto_if_ne RocketHideout_Elevator_EventScript_ChooseFloor_13
RocketHideout_Elevator_EventScript_ChooseFloor_12:
# 53 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	end

RocketHideout_Elevator_EventScript_ChooseFloor_3:
# 31 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 3
	goto RocketHideout_Elevator_EventScript_ChooseFloor_1

RocketHideout_Elevator_EventScript_ChooseFloor_4:
# 32 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 2
	goto RocketHideout_Elevator_EventScript_ChooseFloor_1

RocketHideout_Elevator_EventScript_ChooseFloor_5:
# 33 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8003, 0
	goto RocketHideout_Elevator_EventScript_ChooseFloor_1

RocketHideout_Elevator_EventScript_ChooseFloor_6:
# 36 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	goto RocketHideout_Elevator_EventScript_ExitFloorSelect
	goto RocketHideout_Elevator_EventScript_ChooseFloor_1

RocketHideout_Elevator_EventScript_ChooseFloor_9:
# 40 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_ROCKET_HIDEOUT_B1F, 255, 24, 25
	goto RocketHideout_Elevator_EventScript_ChooseFloor_7

RocketHideout_Elevator_EventScript_ChooseFloor_10:
# 41 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_ROCKET_HIDEOUT_B2F, 255, 28, 16
	goto RocketHideout_Elevator_EventScript_ChooseFloor_7

RocketHideout_Elevator_EventScript_ChooseFloor_11:
# 42 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_ROCKET_HIDEOUT_B4F, 255, 20, 23
	goto RocketHideout_Elevator_EventScript_ChooseFloor_7

RocketHideout_Elevator_EventScript_ChooseFloor_13:
# 45 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 46 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	closemessage
# 47 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	waitse
# 48 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	special AnimateElevator
# 49 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	waitstate
# 50 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 51 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	copyvar VAR_ELEVATOR_FLOOR, VAR_0x8003
	goto RocketHideout_Elevator_EventScript_ChooseFloor_12


RocketHideout_Elevator_EventScript_ExitFloorSelect::
# 58 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 59 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	releaseall
	end


RocketHideout_Elevator_Text_AppearsToNeedAKey::
# 63 "data/maps/RocketHideout_Elevator_Frlg/scripts.pory"
	.string "It appears to need a key.$"
