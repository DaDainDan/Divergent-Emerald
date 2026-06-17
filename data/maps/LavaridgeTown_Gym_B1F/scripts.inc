LavaridgeTown_Gym_B1F_MapScripts::
# 2 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_7, 0
# 5 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_8, 0
# 6 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_9, 0
# 7 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_A, 0
# 8 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	checktrainerflag TRAINER_KEEGAN
	goto_if 0, LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	checktrainerflag TRAINER_JACE
	goto_if 0, LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 16 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	checktrainerflag TRAINER_JEFF
	goto_if 0, LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 20 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	checktrainerflag TRAINER_ELI
	goto_if 0, LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
	end

LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_7, 1
# 10 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_KEEGAN, MOVEMENT_TYPE_BURIED
	goto LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 13 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_8, 1
# 14 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_JACE, MOVEMENT_TYPE_BURIED
	goto LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 17 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_9, 1
# 18 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_JEFF, MOVEMENT_TYPE_BURIED
	goto LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 21 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_A, 1
# 22 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_ELI, MOVEMENT_TYPE_BURIED
	goto LavaridgeTown_Gym_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

