TrainerTower_Elevator_Frlg_MapScripts::
# 2 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerTower_OnResume
# 3 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerTower_OnFrame
	.byte 0


TrainerTower_Elevator_EventScript_FloorSelect::
# 7 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	lockall
# 8 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 6
# 9 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_2, TrainerTower_Elevator_EventScript_FloorSelect_2
TrainerTower_Elevator_EventScript_FloorSelect_1:
# 12 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
# 13 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	special DrawElevatorCurrentFloorWindow
# 14 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	message gText_WantWhichFloor
# 15 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	waitmessage
# 16 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8004, 6
# 17 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
# 18 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	switch VAR_RESULT
# 19 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	case 0, TrainerTower_Elevator_EventScript_FloorSelect_6
# 20 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	case 1, TrainerTower_Elevator_EventScript_FloorSelect_7
TrainerTower_Elevator_EventScript_FloorSelect_4:
# 22 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TrainerTower_Elevator_EventScript_FloorSelect_9
# 44 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_CloseFloorSelect
	end

TrainerTower_Elevator_EventScript_FloorSelect_2:
# 10 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	call EventScript_GetElevatorFloor
	goto TrainerTower_Elevator_EventScript_FloorSelect_1

TrainerTower_Elevator_EventScript_FloorSelect_6:
# 19 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_ROOFTOP_B1F, 0, FALSE
	goto TrainerTower_Elevator_EventScript_FloorSelect_4

TrainerTower_Elevator_EventScript_FloorSelect_7:
# 20 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	multichoicedefault 0, 0, MULTI_ROOFTOP_B1F, 1, FALSE
	goto TrainerTower_Elevator_EventScript_FloorSelect_4

TrainerTower_Elevator_EventScript_FloorSelect_9:
# 23 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setvar VAR_0x8006, 3
# 24 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setdynamicwarp MAP_TRAINER_TOWER_LOBBY, 17, 8
# 25 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	compare VAR_ELEVATOR_FLOOR, 3
	goto_if_eq TrainerTower_Elevator_EventScript_FloorSelect_12
TrainerTower_Elevator_EventScript_FloorSelect_11:
# 28 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 29 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	closemessage
# 30 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	waitse
# 31 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	special AnimateElevator
# 32 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	waitstate
# 33 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 34 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	setvar VAR_ELEVATOR_FLOOR, 3
# 35 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 36 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	delay 25
# 37 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Elevator_EventScript_FloorSelect_Movement_0
# 38 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	waitmovement 0
# 39 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	warp MAP_TRAINER_TOWER_LOBBY, 17, 8
# 40 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	waitstate
# 41 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	releaseall
	end

TrainerTower_Elevator_EventScript_FloorSelect_12:
# 26 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	goto TrainerTower_Elevator_EventScript_CloseFloorSelect
	goto TrainerTower_Elevator_EventScript_FloorSelect_11


TrainerTower_Elevator_EventScript_CloseFloorSelect::
# 49 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	special CloseElevatorCurrentFloorWindow
# 50 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	releaseall
	end


# 37 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
TrainerTower_Elevator_EventScript_FloorSelect_Movement_0:
# 37 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	step_faster_down
# 37 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	delay_16
# 37 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	walk_down
# 37 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	walk_right
# 37 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	walk_right
# 37 "data/maps/TrainerTower_Elevator_Frlg/scripts.pory"
	walk_down
	step_end
