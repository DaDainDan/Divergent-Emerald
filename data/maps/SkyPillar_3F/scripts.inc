SkyPillar_3F_MapScripts::
# 2 "data/maps/SkyPillar_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SkyPillar_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SkyPillar_3F/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_lt SkyPillar_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SkyPillar_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

SkyPillar_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/SkyPillar_3F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_3F_CLEAN
	goto SkyPillar_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

