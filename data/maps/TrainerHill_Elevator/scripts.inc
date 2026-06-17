TrainerHill_Elevator_MapScripts::
# 2 "data/maps/TrainerHill_Elevator/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Elevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TrainerHill_Elevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/TrainerHill_Elevator/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, TrainerHill_Elevator_EventScript_EnterElevator
	.2byte 0


TrainerHill_Elevator_EventScript_Attendant::
	end


TrainerHill_Elevator_EventScript_EnterElevator::
# 12 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_EventScript_EnterElevator_Movement_0
# 13 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 14 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_TRAINER_HILL_ELEVATOR_ATTENDANT, Common_Movement_FaceRight
# 15 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 16 "data/maps/TrainerHill_Elevator/scripts.pory"
	lockall
# 17 "data/maps/TrainerHill_Elevator/scripts.pory"
	msgbox TrainerHill_Elevator_Text_ReturnToReception, MSGBOX_YESNO
# 18 "data/maps/TrainerHill_Elevator/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq TrainerHill_Elevator_EventScript_EnterElevator_2
# 26 "data/maps/TrainerHill_Elevator/scripts.pory"
	releaseall
# 27 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_TRAINER_HILL_ELEVATOR_ATTENDANT, Common_Movement_FaceDown
# 28 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 29 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_EventScript_EnterElevator_Movement_2
# 30 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 31 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitse
# 32 "data/maps/TrainerHill_Elevator/scripts.pory"
	special MoveElevator
# 33 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay 25
# 34 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_EventScript_EnterElevator_Movement_3
# 35 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 36 "data/maps/TrainerHill_Elevator/scripts.pory"
	warp MAP_TRAINER_HILL_ENTRANCE, 17, 8
# 37 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitstate
	end

TrainerHill_Elevator_EventScript_EnterElevator_2:
# 19 "data/maps/TrainerHill_Elevator/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Elevator_EventScript_EnterElevator_Movement_1
# 20 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitmovement 0
# 21 "data/maps/TrainerHill_Elevator/scripts.pory"
	releaseall
# 22 "data/maps/TrainerHill_Elevator/scripts.pory"
	warp MAP_TRAINER_HILL_ROOF, 15, 5
# 23 "data/maps/TrainerHill_Elevator/scripts.pory"
	waitstate
	end


TrainerHill_Elevator_EventScript_ExitFloorSelect::
# 43 "data/maps/TrainerHill_Elevator/scripts.pory"
	goto TrainerHill_Elevator_EventScript_CloseFloorSelect
	end


TrainerHill_Elevator_EventScript_CloseFloorSelect::
# 49 "data/maps/TrainerHill_Elevator/scripts.pory"
	special CloseDeptStoreElevatorWindow
# 50 "data/maps/TrainerHill_Elevator/scripts.pory"
	releaseall
	end


# 12 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_EnterElevator_Movement_0:
# 12 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay_16
# 12 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_left
	step_end

# 19 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_EnterElevator_Movement_1:
# 19 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_down
# 19 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay_16
	step_end

# 29 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_EnterElevator_Movement_2:
# 29 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_up
# 29 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_up
# 29 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_right
# 29 "data/maps/TrainerHill_Elevator/scripts.pory"
	face_down
	step_end

# 34 "data/maps/TrainerHill_Elevator/scripts.pory"
TrainerHill_Elevator_EventScript_EnterElevator_Movement_3:
# 34 "data/maps/TrainerHill_Elevator/scripts.pory"
	delay_16
# 34 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_down
# 34 "data/maps/TrainerHill_Elevator/scripts.pory"
	walk_down
	step_end
