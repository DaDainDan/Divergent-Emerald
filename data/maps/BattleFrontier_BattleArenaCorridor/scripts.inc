BattleFrontier_BattleArenaCorridor_MapScripts::
# 2 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattleArenaCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom
	.2byte 0


BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom::
# 8 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	delay 16
# 9 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_ARENA_CORRIDOR_ATTENDANT, BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom_Movement_0
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom_Movement_1
# 12 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitmovement 0
# 13 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_ARENA_CORRIDOR_ATTENDANT, Common_Movement_StepFasterLeft
# 14 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitmovement 0
# 15 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	msgbox BattleFrontier_BattleArenaCorridor_Text_PleaseStepIn, MSGBOX_SIGN
# 16 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_ARENA_CORRIDOR_ATTENDANT, BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom_Movement_2
# 17 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitmovement 0
# 18 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom_Movement_3
# 19 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitmovement 0
# 20 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	setvar VAR_0x8006, 0
# 21 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_BATTLE_ROOM, 7, 5
# 22 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	waitstate
	end


# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom_Movement_0:
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 10 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
	step_end

# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom_Movement_1:
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_left
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 11 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
	step_end

# 16 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom_Movement_2:
# 16 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_up
# 16 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	step_faster_down
	step_end

# 18 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
BattleFrontier_BattleArenaCorridor_EventScript_WalkToBattleRoom_Movement_3:
# 18 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	walk_right
# 18 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	set_invisible
	step_end

BattleFrontier_BattleArenaCorridor_Text_PleaseStepIn::
# 26 "data/maps/BattleFrontier_BattleArenaCorridor/scripts.pory"
	.string "Your battles shall be waged in\n"
	.string "the next room. Please step in!$"
