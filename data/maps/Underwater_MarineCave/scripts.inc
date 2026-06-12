Underwater_MarineCave_MapScripts::
# 2 "data/maps/Underwater_MarineCave/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Underwater_MarineCave_MapScripts_MAP_SCRIPT_ON_RESUME
# 6 "data/maps/Underwater_MarineCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Underwater_MarineCave_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Underwater_MarineCave_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Underwater_MarineCave/scripts.pory"
	setdivewarp MAP_MARINE_CAVE_ENTRANCE, 10, 17
	end

Underwater_MarineCave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/Underwater_MarineCave/scripts.pory"
	setflag FLAG_ARRIVED_AT_MARINE_CAVE_EMERGE_SPOT
	end

