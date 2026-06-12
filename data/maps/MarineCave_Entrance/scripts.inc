MarineCave_Entrance_MapScripts::
# 2 "data/maps/MarineCave_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MarineCave_Entrance_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

MarineCave_Entrance_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/MarineCave_Entrance/scripts.pory"
	setdivewarp MAP_UNDERWATER_MARINE_CAVE, 9, 6
	end

