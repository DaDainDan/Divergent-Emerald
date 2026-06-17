FourIsland_IcefallCave_1F_Frlg_MapScripts::
# 2 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FourIsland_IcefallCave_1F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
# 6 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FourIsland_IcefallCave_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
# 10 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FourIsland_IcefallCave_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FourIsland_IcefallCave_1F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	setstepcallback STEP_CB_ICEFALL_CAVE
	end

FourIsland_IcefallCave_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 7 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	special SetIcefallCaveCrackedIceMetatiles
	end

FourIsland_IcefallCave_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, FourIsland_IcefallCave_1F_EventScript_FallDownHole
	.2byte 0


FourIsland_IcefallCave_1F_OnResume::
# 16 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	setstepcallback STEP_CB_ICEFALL_CAVE
	end


FourIsland_IcefallCave_1F_EventScript_FallDownHole::
# 21 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	lockall
# 22 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	delay 20
# 23 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 24 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	waitmovement 0
# 25 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	playse SE_FALL
# 26 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	delay 60
# 27 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	warphole MAP_FOUR_ISLAND_ICEFALL_CAVE_B1F
# 28 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	waitstate
# 29 "data/maps/FourIsland_IcefallCave_1F_Frlg/scripts.pory"
	releaseall
	end

