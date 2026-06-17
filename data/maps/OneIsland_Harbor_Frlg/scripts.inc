OneIsland_Harbor_Frlg_MapScripts::
# 2 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, OneIsland_Harbor_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 8 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_Harbor_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OneIsland_Harbor_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1, OneIsland_Harbor_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

OneIsland_Harbor_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

OneIsland_Harbor_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1, OneIsland_Harbor_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

OneIsland_Harbor_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 10 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	lockall
# 11 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 12 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_Harbor_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 13 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	waitmovement 0
# 14 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 2
# 15 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	warp MAP_ONE_ISLAND, 12, 18
# 16 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	waitstate
# 17 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	releaseall
	end


OneIsland_Harbor_EventScript_Sailor::
# 24 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	lock_faceplayer
# 25 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	message Text_WhereDoYouWantToSail
# 26 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	waitmessage
# 27 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
# 28 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	goto EventScript_ChooseDestFromOneIsland
	end


# 12 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
OneIsland_Harbor_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 12 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	walk_up
# 12 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	walk_up
# 12 "data/maps/OneIsland_Harbor_Frlg/scripts.pory"
	walk_up
	step_end
