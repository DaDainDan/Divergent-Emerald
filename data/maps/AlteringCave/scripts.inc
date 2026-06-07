AlteringCave_MapScripts::
# 2 "data/maps/AlteringCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AlteringCave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AlteringCave/scripts.pory"
	setflag FLAG_LANDMARK_ALTERING_CAVE
	end

