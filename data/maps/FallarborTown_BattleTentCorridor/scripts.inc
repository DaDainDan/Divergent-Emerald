FallarborTown_BattleTentCorridor_MapScripts::
# 2 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FallarborTown_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, FallarborTown_BattleTentCorridor_EventScript_EnterCorridor
	.2byte 0


FallarborTown_BattleTentCorridor_EventScript_EnterCorridor::
# 8 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	lockall
# 9 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 10 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_CORRIDOR_ATTENDANT, FallarborTown_BattleTentCorridor_EventScript_EnterCorridor_Movement_0
# 11 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, FallarborTown_BattleTentCorridor_EventScript_EnterCorridor_Movement_0
# 12 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 13 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	opendoor 2, 1
# 14 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	waitdooranim
# 15 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_CORRIDOR_ATTENDANT, FallarborTown_BattleTentCorridor_EventScript_EnterCorridor_Movement_1
# 16 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 17 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 18 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	closedoor 2, 1
# 19 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	waitdooranim
# 20 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	setvar VAR_0x8006, 0
# 21 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	warp MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM, 4, 4
# 22 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	waitstate
# 23 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	releaseall
	end


# 10 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_BattleTentCorridor_EventScript_EnterCorridor_Movement_0:
# 10 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 10 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 10 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 10 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
	step_end

# 15 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
FallarborTown_BattleTentCorridor_EventScript_EnterCorridor_Movement_1:
# 15 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	walk_up
# 15 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	set_invisible
	step_end

FallarborTown_ContestHall_Text_DoAllRightInPreliminary::
# 29 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "We do all right in the preliminary round,\n"
	.string "but we can never win the appeals…\p"
	.string "Maybe it means I have to watch what\n"
	.string "other contestants are doing…$"

FallarborTown_ContestHall_Text_MonAllTheseRibbons::
# 37 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "See!\n"
	.string "My POKéMON won all these RIBBONS!\p"
	.string "Have your POKéMON earned any RIBBONS?\n"
	.string "You can check them on your POKéNAV.$"

FallarborTown_ContestHall_Text_CantWinEverywhere::
# 45 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "I can't beat GYM LEADERS…\p"
	.string "I can't win any CONTESTS…\p"
	.string "I've been here, there, and everywhere,\n"
	.string "and it's all for naught…$"

FallarborTown_ContestHall_Text_SuperRankStage::
# 54 "data/maps/FallarborTown_BattleTentCorridor/scripts.pory"
	.string "POKéMON CONTESTS\n"
	.string "SUPER RANK STAGE!$"
