BattleFrontier_BattleTowerCorridor_MapScripts::
# 2 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BattleFrontier_BattleTowerCorridor_MapScripts_MAP_SCRIPT_ON_LOAD
# 12 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattleTowerCorridor_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	compare VAR_0x8006, 1
	goto_if_eq BattleFrontier_BattleTowerCorridor_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 7 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	setmetatile 12, 0, METATILE_BattleFrontier_CorridorOpenDoor_Top, FALSE
# 8 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	setmetatile 12, 1, METATILE_BattleFrontier_CorridorOpenDoor_Bottom, FALSE
BattleFrontier_BattleTowerCorridor_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

BattleFrontier_BattleTowerCorridor_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	setmetatile 15, 0, METATILE_BattleFrontier_CorridorOpenDoor_Top, FALSE
# 5 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	setmetatile 15, 1, METATILE_BattleFrontier_CorridorOpenDoor_Bottom, FALSE
	goto BattleFrontier_BattleTowerCorridor_MapScripts_MAP_SCRIPT_ON_LOAD_1

BattleFrontier_BattleTowerCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleTowerCorridor_EventScript_EnterCorridor
	.2byte 0


BattleFrontier_BattleTowerCorridor_EventScript_EnterCorridor::
# 18 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 19 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	compare VAR_0x8006, 1
	goto_if_eq BattleFrontier_BattleTowerCorridor_EventScript_EnterCorridor_2
# 25 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	applymovement LOCALID_TOWER_CORRIDOR_ATTENDANT, BattleFrontier_BattleTowerCorridor_EventScript_EnterCorridor_Movement_1
# 26 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 27 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	waitmovement 0
# 28 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	setvar VAR_TEMP_0, 0
# 29 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_BATTLE_ROOM, 4, 8
# 30 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	waitstate
	end

BattleFrontier_BattleTowerCorridor_EventScript_EnterCorridor_2:
# 20 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	applymovement LOCALID_TOWER_CORRIDOR_ATTENDANT, BattleFrontier_BattleTowerCorridor_EventScript_EnterCorridor_Movement_0
# 21 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 22 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	waitmovement 0
	end


# 20 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_EventScript_EnterCorridor_Movement_0:
# 20 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	walk_right
# 20 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	walk_right
	step_end

# 25 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
BattleFrontier_BattleTowerCorridor_EventScript_EnterCorridor_Movement_1:
# 25 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	walk_right
# 25 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	walk_right
# 25 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	walk_right
# 25 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	walk_up
# 25 "data/maps/BattleFrontier_BattleTowerCorridor/scripts.pory"
	set_invisible
	step_end
