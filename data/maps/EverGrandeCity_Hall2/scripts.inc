EverGrandeCity_Hall2_MapScripts::
# 2 "data/maps/EverGrandeCity_Hall2/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_Hall2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

EverGrandeCity_Hall2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/EverGrandeCity_Hall2/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_Hall2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

EverGrandeCity_Hall2_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/EverGrandeCity_Hall2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

