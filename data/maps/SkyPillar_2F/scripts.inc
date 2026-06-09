SkyPillar_2F_MapScripts::
# 2 "data/maps/SkyPillar_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 3 "data/maps/SkyPillar_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_2F_OnTransition
# 4 "data/maps/SkyPillar_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SkyPillar_2F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SkyPillar_2F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 5 "data/maps/SkyPillar_2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 6 "data/maps/SkyPillar_2F/scripts.pory"
	setholewarp MAP_SKY_PILLAR_1F
	end


# 11 "data/maps/SkyPillar_2F/scripts.pory"

# 12 "data/maps/SkyPillar_2F/scripts.pory"
SkyPillar_2F_OnTransition:
# 13 "data/maps/SkyPillar_2F/scripts.pory"
	call_if_lt VAR_SKY_PILLAR_STATE, 2, SkyPillar_2F_EventScript_CleanFloor
# 14 "data/maps/SkyPillar_2F/scripts.pory"
#ifdef UBFIX
# 15 "data/maps/SkyPillar_2F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
# 16 "data/maps/SkyPillar_2F/scripts.pory"
#else
# 17 "data/maps/SkyPillar_2F/scripts.pory"
	copyvar VAR_ICE_STEP_COUNT, 1, warn=FALSE
# 18 "data/maps/SkyPillar_2F/scripts.pory"
#endif
# 19 "data/maps/SkyPillar_2F/scripts.pory"
	end

SkyPillar_2F_EventScript_CleanFloor::
# 23 "data/maps/SkyPillar_2F/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_2F_CLEAN
	return

