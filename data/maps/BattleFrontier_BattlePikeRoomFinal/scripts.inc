BattleFrontier_BattlePikeRoomFinal_MapScripts::
# 2 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeRoomFinal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 17 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeRoomFinal_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleFrontier_BattlePikeRoomFinal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePikeRoomFinal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

BattleFrontier_BattlePikeRoomFinal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	delay 16
# 5 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	applymovement LOCALID_PIKE_FINAL_ROOM_ATTENDANT, BattleFrontier_BattlePikeRoomFinal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 6 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	waitmovement 0
# 7 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 8 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	lockall
# 9 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomFinal_Text_CongratsThisWayPlease, MSGBOX_DEFAULT
# 10 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	closemessage
# 11 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	releaseall
# 12 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 5, 6
# 13 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	waitstate
	end

BattleFrontier_BattlePikeRoomFinal_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 18 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, BattleFrontier_BattlePikeRoomFinal_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattlePikeRoomFinal_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 19 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	setvar VAR_TEMP_4, 1
# 20 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


# 5 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
BattleFrontier_BattlePikeRoomFinal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 5 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	walk_down
# 5 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	walk_down
	step_end

BattleFrontier_BattlePikeRoomFinal_Text_CongratsThisWayPlease::
# 26 "data/maps/BattleFrontier_BattlePikeRoomFinal/scripts.pory"
	.string "Congratulations…\n"
	.string "Now, this way, please…$"
