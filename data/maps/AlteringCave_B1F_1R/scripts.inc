AlteringCave_B1F_1R_MapScripts::
# 2 "data/maps/AlteringCave_B1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AlteringCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

AlteringCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/AlteringCave_B1F_1R/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, AlteringCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_2
AlteringCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

AlteringCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/AlteringCave_B1F_1R/scripts.pory"
	setmetatile 4, 7, 0x33D, TRUE
	goto AlteringCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1

