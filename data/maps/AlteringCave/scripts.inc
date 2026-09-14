AlteringCave_MapScripts::
# 2 "data/maps/AlteringCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/AlteringCave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AlteringCave_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AlteringCave/scripts.pory"
	setflag FLAG_LANDMARK_ALTERING_CAVE
# 4 "data/maps/AlteringCave/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/AlteringCave/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
	end

AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/AlteringCave/scripts.pory"
	setflag FLAG_HIDE_HIKER_ALTERING_CAVE_B1F_1R
# 6 "data/maps/AlteringCave/scripts.pory"
	clearflag FLAG_HIDE_BALL_TERRAIN_EXTENDER
	goto AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 4 "data/maps/AlteringCave/scripts.pory"
	goto_if_unset FLAG_HIDE_HIKER_ALTERING_CAVE_B1F_1R, AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 9 "data/maps/AlteringCave/scripts.pory"
	setflag FLAG_HIDE_HIKER_ALTERING_CAVE_B1F_2R
# 10 "data/maps/AlteringCave/scripts.pory"
	clearflag FLAG_HIDE_BALL_TERRAIN_EXTENDER
	goto AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 8 "data/maps/AlteringCave/scripts.pory"
	goto_if_unset FLAG_HIDE_HIKER_ALTERING_CAVE_B1F_2R, AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	goto AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

AlteringCave_MapScripts_MAP_SCRIPT_ON_LOAD:
# 15 "data/maps/AlteringCave/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, AlteringCave_MapScripts_MAP_SCRIPT_ON_LOAD_2
AlteringCave_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 18 "data/maps/AlteringCave/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, AlteringCave_MapScripts_MAP_SCRIPT_ON_LOAD_5
AlteringCave_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

AlteringCave_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 16 "data/maps/AlteringCave/scripts.pory"
	setmetatile 6, 4, 0x23F, TRUE
	goto AlteringCave_MapScripts_MAP_SCRIPT_ON_LOAD_1

AlteringCave_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 19 "data/maps/AlteringCave/scripts.pory"
	setmetatile 28, 10, 0x205, TRUE
	goto AlteringCave_MapScripts_MAP_SCRIPT_ON_LOAD_4

