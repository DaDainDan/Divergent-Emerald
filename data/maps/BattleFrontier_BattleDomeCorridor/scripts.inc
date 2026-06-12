BattleFrontier_BattleDomeCorridor_MapScripts::
# 2 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattleDomeCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor
	.2byte 0


BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor::
# 8 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	delay 16
# 9 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 10 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 11 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	switch VAR_RESULT
# 12 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_3
# 18 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	applymovement LOCALID_DOME_CORRIDOR_ATTENDANT, BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_Movement_2
# 19 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_Movement_3
# 20 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitmovement 0
# 21 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	opendoor 13, 3
BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_1:
# 23 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitdooranim
# 24 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	applymovement LOCALID_DOME_CORRIDOR_ATTENDANT, BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_Movement_4
# 25 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_Movement_5
# 26 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitmovement 0
# 27 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_7
# 29 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	closedoor 13, 3
BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_5:
# 31 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitdooranim
# 32 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitmovement 0
# 33 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	setvar VAR_0x8006, 0
# 34 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_PRE_BATTLE_ROOM, 5, 7
# 35 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitstate
	end

BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_3:
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	applymovement LOCALID_DOME_CORRIDOR_ATTENDANT, BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_Movement_0
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_Movement_1
# 15 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	waitmovement 0
# 16 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	opendoor 37, 3
	goto BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_1

BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_7:
# 28 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	closedoor 37, 3
	goto BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_5


# 40 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_Movement_WalkToBattleRoomMidRight:
# 41 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 42 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 42 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 42 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 42 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 42 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 42 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 42 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 42 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 42 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 42 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 42 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 43 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 43 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 44 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	set_invisible
	step_end

# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_Movement_0:
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 13 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
	step_end

# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_Movement_1:
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_right
# 14 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	step_faster_up
	step_end

# 18 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_Movement_2:
# 18 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 18 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 18 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 18 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 18 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 18 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 18 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 18 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 18 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 18 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 18 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
	step_end

# 19 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_Movement_3:
# 19 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 19 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 19 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 19 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 19 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 19 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 19 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 19 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 19 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 19 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 19 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_left
# 19 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	step_faster_up
	step_end

# 24 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_Movement_4:
# 24 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 24 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	set_invisible
	step_end

# 25 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
BattleFrontier_BattleDomeCorridor_EventScript_EnterCorridor_Movement_5:
# 25 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 25 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	walk_up
# 25 "data/maps/BattleFrontier_BattleDomeCorridor/scripts.pory"
	set_invisible
	step_end
