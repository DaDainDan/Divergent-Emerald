BattleFrontier_BattlePikeCorridor_MapScripts::
# 2 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleFrontier_BattlePikeCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePikeCorridor_EventScript_EnterCorridor
	.2byte 0

BattleFrontier_BattlePikeCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePikeCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattlePikeCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 7 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 8 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattlePikeCorridor_EventScript_EnterCorridor::
# 15 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	delay 16
# 16 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, 1
# 17 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	pike_cleartrainerids
# 18 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	pike_nohealing TRUE
# 19 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeCorridor_EventScript_EnterCorridor_Movement_0
# 20 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	applymovement LOCALID_PIKE_CORRIDOR_ATTENDANT, BattleFrontier_BattlePikeCorridor_EventScript_EnterCorridor_Movement_1
# 21 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	waitmovement 0
# 22 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	lockall
# 23 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	msgbox BattleFrontier_BattlePikeCorridor_Text_YourChallengeHasBegun, MSGBOX_DEFAULT
# 24 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	closemessage
# 25 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	releaseall
# 26 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeCorridor_EventScript_EnterCorridor_Movement_2
# 27 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	waitmovement 0
# 28 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 99
# 29 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	call BattleFrontier_BattlePike_EventScript_CloseCurtain
# 30 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PIKE_THREE_PATH_ROOM, 6, 10
# 31 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	waitstate
	end


# 19 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
BattleFrontier_BattlePikeCorridor_EventScript_EnterCorridor_Movement_0:
# 19 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	walk_up
# 19 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	walk_up
	step_end

# 20 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
BattleFrontier_BattlePikeCorridor_EventScript_EnterCorridor_Movement_1:
# 20 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	walk_up
# 20 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	walk_up
# 20 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	walk_left
# 20 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	face_down
	step_end

# 26 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
BattleFrontier_BattlePikeCorridor_EventScript_EnterCorridor_Movement_2:
# 26 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	walk_up
# 26 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	walk_up
# 26 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	set_invisible
	step_end

BattleFrontier_BattlePikeCorridor_Text_YourChallengeHasBegun::
# 35 "data/maps/BattleFrontier_BattlePikeCorridor/scripts.pory"
	.string "Your Battle Choice challenge\n"
	.string "has now begun…$"
