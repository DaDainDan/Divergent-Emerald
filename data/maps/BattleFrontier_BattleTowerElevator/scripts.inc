BattleFrontier_BattleTowerElevator_MapScripts::
# 2 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerElevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerElevator_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleFrontier_BattleTowerElevator_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleTowerElevator_EventScript_EnterElevator
	.2byte 0

BattleFrontier_BattleTowerElevator_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerElevator_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattleTowerElevator_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 7 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	setvar VAR_TEMP_1, 1
# 8 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattleTowerElevator_EventScript_EnterElevator::
# 15 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	setvar VAR_TEMP_0, 1
# 16 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	applymovement LOCALID_TOWER_ELEVATOR_ATTENDANT, BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_Movement_0
# 17 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_Movement_1
# 18 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	waitmovement 0
# 19 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	special BufferBattleTowerElevatorFloors
# 20 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	waitse
# 21 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	special MoveElevator
# 22 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	delay 48
# 23 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	applymovement LOCALID_TOWER_ELEVATOR_ATTENDANT, BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_Movement_2
# 24 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_Movement_3
# 25 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	waitmovement 0
# 26 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 27 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	case FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_3
# 33 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_4
# 34 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_4
# 35 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	case FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_5
BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_1:
# 37 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	waitstate
	end

BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_3:
# 28 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	goto_if_unset FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_6
# 31 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR, 7, 2
	goto BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_1

BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_4:
# 34 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_CORRIDOR, 8, 1
	goto BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_1

BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_5:
# 35 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR, 7, 2
	goto BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_1

BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_6:
# 29 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_PARTNER_ROOM, 10, 1
	goto BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_1


# 16 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_Movement_0:
# 16 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_up
# 16 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_right
# 16 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	face_down
	step_end

# 17 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_Movement_1:
# 17 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_up
# 17 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_up
# 17 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	face_down
	step_end

# 23 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_Movement_2:
# 23 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_down
# 23 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_down
# 23 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	set_invisible
	step_end

# 24 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
BattleFrontier_BattleTowerElevator_EventScript_EnterElevator_Movement_3:
# 24 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_right
# 24 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_down
# 24 "data/maps/BattleFrontier_BattleTowerElevator/scripts.pory"
	walk_down
	step_end
