FieryPath_MapScripts::
# 2 "data/maps/FieryPath/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FieryPath_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FieryPath_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FieryPath/scripts.pory"
	goto_if_unset FLAG_LANDMARK_FIERY_PATH, FieryPath_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
FieryPath_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/FieryPath/scripts.pory"
	setflag FLAG_LANDMARK_FIERY_PATH
	end

FieryPath_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/FieryPath/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 5 "data/maps/FieryPath/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
	goto FieryPath_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

