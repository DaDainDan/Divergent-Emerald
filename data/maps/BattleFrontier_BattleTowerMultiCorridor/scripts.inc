BattleFrontier_BattleTowerMultiCorridor_MapScripts::
# 7 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 21 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 30 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
	goto_if_eq BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
	goto_if_eq BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	tower_setpartnergfx
	checkplayergender
# 0 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 13 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_BRENDAN_NORMAL
	goto BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 17 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	special SetBattleTowerLinkPlayerGfx
	goto BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 11 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_MAY_NORMAL
	goto BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 22 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 23 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
# 24 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	hideobjectat LOCALID_TOWER_MULTI_CORRIDOR_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
# 25 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	hideobjectat LOCALID_TOWER_MULTI_CORRIDOR_PARTNER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
# 26 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	special OffsetCameraForBattle
	end

BattleFrontier_BattleTowerMultiCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 31 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor
	.2byte 0


BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor::
# 36 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	lockall
# 37 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
# 38 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8004, 14
# 39 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8005, 1
# 40 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	opendoor 1, 1
# 41 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
# 42 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	clearflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
# 43 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	showobjectat LOCALID_TOWER_MULTI_CORRIDOR_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
# 44 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	showobjectat LOCALID_TOWER_MULTI_CORRIDOR_PARTNER, MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR
# 45 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PLAYER, Common_Movement_WalkDown
# 46 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PARTNER, Common_Movement_WalkDown
# 47 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitmovement 0
# 48 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
# 49 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8004, 14
# 50 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_0x8005, 1
# 51 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	closedoor 1, 1
# 52 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
# 53 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	clearflag FLAG_ENABLE_MULTI_CORRIDOR_DOOR
# 54 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PLAYER, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_Movement_0
# 55 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PARTNER, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_Movement_1
# 56 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_2, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_Movement_2
# 57 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_1, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_Movement_3
# 58 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitmovement 0
# 59 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	delay 40
# 60 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_2, Common_Movement_StepFasterUp
# 61 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_1, Common_Movement_StepFasterUp
# 62 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitmovement 0
# 63 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	opendoor 7, 1
# 64 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
# 65 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_2, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_Movement_4
# 66 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_ATTENDANT_1, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_Movement_4
# 67 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PLAYER, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_Movement_5
# 68 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	applymovement LOCALID_TOWER_MULTI_CORRIDOR_PARTNER, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_Movement_5
# 69 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitmovement 0
# 70 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	closedoor 7, 1
# 71 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitdooranim
# 72 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	delay 30
# 73 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 74 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 75 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_3
# 76 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_3
# 77 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	case FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_4
# 78 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	case FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_4
BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_1:
# 80 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	waitstate
# 81 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	releaseall
	end

BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_3:
# 76 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_BATTLE_ROOM, 4, 8
	goto BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_1

BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_4:
# 78 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_BATTLE_ROOM, 4, 5
	goto BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_1


# 54 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_Movement_0:
# 54 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_down
# 54 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 54 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 54 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 54 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 54 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 54 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
	step_end

# 55 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_Movement_1:
# 55 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_down
# 55 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 55 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 55 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 55 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 55 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 55 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
	step_end

# 56 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_Movement_2:
# 56 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 56 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 56 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 56 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 56 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 56 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_right
# 56 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 56 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_faster_right
	step_end

# 57 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_Movement_3:
# 57 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 57 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 57 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 57 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 57 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 57 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_left
# 57 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 57 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	step_faster_left
	step_end

# 65 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_Movement_4:
# 65 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 65 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	set_invisible
	step_end

# 67 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
BattleFrontier_BattleTowerMultiCorridor_EventScript_EnterCorridor_Movement_5:
# 67 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	delay_16
# 67 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 67 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	walk_up
# 67 "data/maps/BattleFrontier_BattleTowerMultiCorridor/scripts.pory"
	set_invisible
	step_end
