PewterCity_Frlg_MapScripts::
# 2 "data/maps/PewterCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PewterCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PewterCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PEWTER_CITY
# 4 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 0
	end


PewterCity_EventScript_GymGuide::
# 12 "data/maps/PewterCity_Frlg/scripts.pory"
	lock_faceplayer
# 13 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 14 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 15 "data/maps/PewterCity_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 16 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq PewterCity_EventScript_GymGuide_2
PewterCity_EventScript_GymGuide_1:
# 24 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 25 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 26 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_EventScript_GymGuide_Movement_2
# 27 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 28 "data/maps/PewterCity_Frlg/scripts.pory"
	fadedefaultbgm
# 29 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 30 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
	release_end

PewterCity_EventScript_GymGuide_2:
# 17 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_EventScript_GymGuide_Movement_0
# 18 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_EventScript_GymGuide_Movement_1
# 19 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 20 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymEast
# 21 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymEast
# 22 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	goto PewterCity_EventScript_GymGuide_1


PewterCity_EventScript_WalkToGymWest::
# 36 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_EventScript_WalkToGymWest_Movement_0
# 37 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, Common_Movement_StepRight
# 38 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_EventScript_WalkToGymWest_Movement_1
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_EventScript_WalkToGymWest_Movement_2
# 41 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


PewterCity_EventScript_WalkToGymNorth::
# 47 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_EventScript_WalkToGymWest_Movement_0
# 48 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, Common_Movement_StepDown
# 49 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_EventScript_WalkToGymNorth_Movement_0
# 51 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_EventScript_WalkToGymWest_Movement_2
# 52 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


# 56 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymEast:
# 58 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 59 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 59 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 59 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 60 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 62 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 64 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 64 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 64 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 64 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 64 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 64 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 64 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 64 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 65 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 65 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 65 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 65 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 65 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 65 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 65 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 65 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
	step_end

# 68 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymEast:
# 70 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 70 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 70 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 71 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 73 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 73 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 73 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 73 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 73 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 73 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 73 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 73 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 73 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 73 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 75 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 75 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 75 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 75 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 75 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 75 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 75 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 75 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 76 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 76 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 76 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 76 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 76 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 76 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 76 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 76 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 76 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 77 "data/maps/PewterCity_Frlg/scripts.pory"
	step_faster_left
	step_end

PewterCity_EventScript_GymGuideTriggerTop::
# 81 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 82 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 83 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTriggerMid::
# 88 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 89 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 90 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTriggerBottom::
# 95 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 96 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 97 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTriggerRight::
# 103 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 104 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 105 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
	end


PewterCity_EventScript_GymGuideTrigger::
# 110 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 111 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 112 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 113 "data/maps/PewterCity_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 114 "data/maps/PewterCity_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 115 "data/maps/PewterCity_Frlg/scripts.pory"
	case 0, PewterCity_EventScript_GymGuideTrigger_3
# 120 "data/maps/PewterCity_Frlg/scripts.pory"
	case 1, PewterCity_EventScript_GymGuideTrigger_4
# 125 "data/maps/PewterCity_Frlg/scripts.pory"
	case 2, PewterCity_EventScript_GymGuideTrigger_5
PewterCity_EventScript_GymGuideTrigger_1:
# 131 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 132 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 133 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 134 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_EventScript_GymGuide_Movement_2
# 135 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 136 "data/maps/PewterCity_Frlg/scripts.pory"
	fadedefaultbgm
# 137 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 138 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 139 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
	end

PewterCity_EventScript_GymGuideTrigger_3:
# 116 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_EventScript_GymGuideTrigger_Movement_0
# 117 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 118 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymTop
# 119 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymTop
	goto PewterCity_EventScript_GymGuideTrigger_1

PewterCity_EventScript_GymGuideTrigger_4:
# 121 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_EventScript_GymGuideTrigger_Movement_1
# 122 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 123 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymMid
# 124 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymMid
	goto PewterCity_EventScript_GymGuideTrigger_1

PewterCity_EventScript_GymGuideTrigger_5:
# 126 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_EventScript_GymGuideTrigger_Movement_2
# 127 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 128 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymBottom
# 129 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymBottom
	goto PewterCity_EventScript_GymGuideTrigger_1


PewterCity_EventScript_WalkToGymRight::
# 145 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_EventScript_WalkToGymRight_Movement_0
# 146 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 147 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymRight
# 148 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymRight
# 149 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	return


# 153 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymTop:
# 155 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 155 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 155 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 155 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 156 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 158 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 158 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 158 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 158 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 158 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 158 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 158 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 158 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 158 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 158 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 160 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 160 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 160 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 160 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 160 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 160 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 160 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 160 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 161 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 161 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 161 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 161 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 161 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 161 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 161 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 161 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
	step_end

# 164 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymMid:
# 166 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 167 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 167 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 167 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 167 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 168 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 170 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 170 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 170 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 170 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 170 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 170 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 170 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 170 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 170 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 170 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 172 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 172 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 172 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 172 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 172 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 172 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 172 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 172 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 173 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 173 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 173 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 173 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 173 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 173 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 173 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 173 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
	step_end

# 176 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymBottom:
# 178 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 178 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 179 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 179 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 179 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 179 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 180 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 182 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 182 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 182 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 182 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 182 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 182 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 182 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 182 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 182 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 182 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 184 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 184 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 184 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 184 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 184 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 184 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 184 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 184 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 185 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 185 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 185 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 185 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 185 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 185 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 185 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 185 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
	step_end

# 188 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymRight:
# 190 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 190 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 190 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 190 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 191 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 192 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 192 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 192 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 193 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 193 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 195 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 195 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 195 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 195 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 195 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 195 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 195 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 196 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 196 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 196 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 196 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 196 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 196 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 196 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 196 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 196 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 196 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 197 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 197 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 197 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 197 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 197 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 197 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 198 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
	step_end

# 201 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymTop:
# 203 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 203 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 203 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 204 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 206 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 206 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 206 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 206 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 206 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 206 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 206 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 206 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 206 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 206 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 208 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 208 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 208 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 208 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 208 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 208 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 208 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 208 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 209 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 209 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 209 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 209 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 209 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 209 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 209 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 209 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 209 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 210 "data/maps/PewterCity_Frlg/scripts.pory"
	step_faster_left
	step_end

# 213 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymMid:
# 215 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 215 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 215 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 215 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 216 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 218 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 218 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 218 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 218 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 218 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 218 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 218 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 218 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 218 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 218 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 220 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 220 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 220 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 220 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 220 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 220 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 220 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 220 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 221 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 221 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 221 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 221 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 221 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 221 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 221 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 221 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 221 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 222 "data/maps/PewterCity_Frlg/scripts.pory"
	step_faster_left
	step_end

# 225 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymBottom:
# 227 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 228 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 228 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 228 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 228 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 229 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 231 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 231 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 231 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 231 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 231 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 231 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 231 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 231 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 231 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 231 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 233 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 233 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 233 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 233 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 233 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 233 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 233 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 233 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 234 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 234 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 234 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 234 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 234 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 234 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 234 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 234 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 234 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 235 "data/maps/PewterCity_Frlg/scripts.pory"
	step_faster_left
	step_end

# 238 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymRight:
# 240 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 240 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 240 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 241 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 242 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 242 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 242 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 243 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 243 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 244 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 245 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 245 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 245 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 245 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 245 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 245 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 245 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 246 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 246 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 246 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 246 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 246 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 246 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 246 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 246 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 246 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 246 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 247 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 247 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 247 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 247 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 247 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 247 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 248 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 248 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 249 "data/maps/PewterCity_Frlg/scripts.pory"
	step_faster_left
	step_end

PewterCity_EventScript_Lass::
# 253 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ClefairyCameFromMoon, MSGBOX_NPC
	end


PewterCity_EventScript_MuseumGuide::
# 258 "data/maps/PewterCity_Frlg/scripts.pory"
	lock_faceplayer
# 259 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_DidYouCheckOutMuseum, MSGBOX_YESNO
# 260 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PewterCity_EventScript_MuseumGuide_2
# 264 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ReallyYouHaveToGo
# 265 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 266 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 10
# 267 "data/maps/PewterCity_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 268 "data/maps/PewterCity_Frlg/scripts.pory"
	switch VAR_FACING
# 269 "data/maps/PewterCity_Frlg/scripts.pory"
	case DIR_NORTH, PewterCity_EventScript_MuseumGuide_6
# 272 "data/maps/PewterCity_Frlg/scripts.pory"
	case DIR_SOUTH, PewterCity_EventScript_MuseumGuide_7
# 275 "data/maps/PewterCity_Frlg/scripts.pory"
	case DIR_WEST, PewterCity_EventScript_MuseumGuide_8
# 278 "data/maps/PewterCity_Frlg/scripts.pory"
	case DIR_EAST, PewterCity_EventScript_MuseumGuide_9
PewterCity_EventScript_MuseumGuide_4:
# 282 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 283 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ThisIsTheMuseum
# 284 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 285 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 10
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_EventScript_MuseumGuide_Movement_3
# 287 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 288 "data/maps/PewterCity_Frlg/scripts.pory"
	fadedefaultbgm
# 289 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_MUSEUM_GUIDE
# 290 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_MUSEUM_GUIDE
	release_end

PewterCity_EventScript_MuseumGuide_2:
# 261 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_WerentThoseFossilsAmazing
	release_end

PewterCity_EventScript_MuseumGuide_6:
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_EventScript_MuseumGuide_Movement_0
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_EventScript_MuseumGuide_Movement_1
	goto PewterCity_EventScript_MuseumGuide_4

PewterCity_EventScript_MuseumGuide_7:
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_EventScript_MuseumGuide_Movement_2
# 274 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumSouth
	goto PewterCity_EventScript_MuseumGuide_4

PewterCity_EventScript_MuseumGuide_8:
# 276 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_EventScript_MuseumGuide_Movement_0
# 277 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumWest
	goto PewterCity_EventScript_MuseumGuide_4

PewterCity_EventScript_MuseumGuide_9:
# 279 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_EventScript_MuseumGuide_Movement_0
# 280 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumEast
	goto PewterCity_EventScript_MuseumGuide_4


# 294 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumSouth:
# 296 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 296 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 297 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 298 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 298 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 298 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 299 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 299 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 299 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 299 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 299 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 299 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 299 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 299 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 299 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 300 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 300 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 300 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 300 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 301 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 301 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 301 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 301 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 301 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 301 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 302 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 303 "data/maps/PewterCity_Frlg/scripts.pory"
	step_faster_up
	step_end

# 306 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumWest:
# 308 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 309 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 309 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 309 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 309 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 310 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 310 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 310 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 310 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 310 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 310 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 310 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 310 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 310 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 310 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 311 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 311 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 311 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 311 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 312 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 312 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 312 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 312 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 312 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 312 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 313 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 314 "data/maps/PewterCity_Frlg/scripts.pory"
	step_faster_up
	step_end

# 317 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumEast:
# 319 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 320 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 320 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 320 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 320 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 321 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 321 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 321 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 321 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 321 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 321 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 321 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 321 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 321 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 321 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 322 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 322 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 322 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 322 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 323 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 323 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 323 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 323 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 323 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 323 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 324 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 325 "data/maps/PewterCity_Frlg/scripts.pory"
	step_faster_up
	step_end

PewterCity_EventScript_FatMan::
# 329 "data/maps/PewterCity_Frlg/scripts.pory"
	lock_faceplayer
# 330 "data/maps/PewterCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, 2
# 331 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_BrockOnlySeriousTrainerHere
	release_end


PewterCity_EventScript_BugCatcher::
# 336 "data/maps/PewterCity_Frlg/scripts.pory"
	lock_faceplayer
# 337 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_DoYouKnowWhatImDoing, MSGBOX_YESNO
# 338 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PewterCity_EventScript_BugCatcher_2
# 342 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_SprayingRepelToKeepWildMonsOut
	release_end

PewterCity_EventScript_BugCatcher_2:
# 339 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ThatsRightItsHardWork
	release_end


PewterCity_EventScript_TrainerTips::
# 347 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_TrainerTipsEarningEXP, MSGBOX_SIGN
	end


PewterCity_EventScript_PoliceNotice::
# 352 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_CallPoliceIfInfoOnThieves, MSGBOX_SIGN
	end


PewterCity_EventScript_MuseumSign::
# 357 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_MuseumOfScience, MSGBOX_SIGN
	end


PewterCity_EventScript_GymSign::
# 362 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 363 "data/maps/PewterCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, 0
# 364 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_GymSign
# 365 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
	end


PewterCity_EventScript_CitySign::
# 370 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_CitySign, MSGBOX_SIGN
	end


PewterCity_EventScript_RunningShoesAide::
# 375 "data/maps/PewterCity_Frlg/scripts.pory"
	lock_faceplayer
# 376 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 377 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
	release_end


PewterCity_EventScript_RunningShoesAideTriggerTop::
# 382 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 383 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 384 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 385 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
	end


PewterCity_EventScript_RunningShoesAideTriggerMid::
# 390 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 391 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 392 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 393 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
	end


PewterCity_EventScript_RunningShoesAideTriggerBottom::
# 398 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 399 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 400 "data/maps/PewterCity_Frlg/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 401 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
	end


PewterCity_EventScript_AideGiveRunningShoes::
# 406 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 407 "data/maps/PewterCity_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_ne PewterCity_EventScript_AideGiveRunningShoes_2
PewterCity_EventScript_AideGiveRunningShoes_1:
# 411 "data/maps/PewterCity_Frlg/scripts.pory"
	waitse
# 412 "data/maps/PewterCity_Frlg/scripts.pory"
	playse SE_PIN
# 413 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_ExclamationMark
# 414 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 415 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_Delay48
# 416 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 417 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_OhPlayer
# 418 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 419 "data/maps/PewterCity_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 420 "data/maps/PewterCity_Frlg/scripts.pory"
	case 0, PewterCity_EventScript_AideGiveRunningShoes_6
# 421 "data/maps/PewterCity_Frlg/scripts.pory"
	case 1, PewterCity_EventScript_AideGiveRunningShoes_7
# 422 "data/maps/PewterCity_Frlg/scripts.pory"
	case 2, PewterCity_EventScript_AideGiveRunningShoes_8
# 426 "data/maps/PewterCity_Frlg/scripts.pory"
	case 3, PewterCity_EventScript_AideGiveRunningShoes_9
PewterCity_EventScript_AideGiveRunningShoes_4:
# 431 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 432 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_AskedToDeliverThis
# 433 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 434 "data/maps/PewterCity_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 435 "data/maps/PewterCity_Frlg/scripts.pory"
	message PewterCity_Text_ReceivedRunningShoesFromAide
# 436 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmessage
# 437 "data/maps/PewterCity_Frlg/scripts.pory"
	waitfanfare
# 438 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_SwitchedShoesWithRunningShoes
# 439 "data/maps/PewterCity_Frlg/scripts.pory"
	special DisableMsgBoxWalkaway
# 440 "data/maps/PewterCity_Frlg/scripts.pory"
	signmsg
# 441 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ExplainRunningShoes
# 442 "data/maps/PewterCity_Frlg/scripts.pory"
	normalmsg
# 443 "data/maps/PewterCity_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 444 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_MustBeGoingBackToLab
# 445 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 446 "data/maps/PewterCity_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 447 "data/maps/PewterCity_Frlg/scripts.pory"
	case 0, PewterCity_EventScript_AideGiveRunningShoes_12
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
	case 1, PewterCity_EventScript_AideGiveRunningShoes_13
# 449 "data/maps/PewterCity_Frlg/scripts.pory"
	case 2, PewterCity_EventScript_AideGiveRunningShoes_14
# 450 "data/maps/PewterCity_Frlg/scripts.pory"
	case 3, PewterCity_EventScript_AideGiveRunningShoes_14
PewterCity_EventScript_AideGiveRunningShoes_10:
# 452 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 30
# 453 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 454 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_RunningShoesLetterFromMom
# 455 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 456 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_AIDE
# 457 "data/maps/PewterCity_Frlg/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 458 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 2
	return

PewterCity_EventScript_AideGiveRunningShoes_2:
# 408 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_StepFasterDown
# 409 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
	goto PewterCity_EventScript_AideGiveRunningShoes_1

PewterCity_EventScript_AideGiveRunningShoes_6:
# 420 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 20
	goto PewterCity_EventScript_AideGiveRunningShoes_4

PewterCity_EventScript_AideGiveRunningShoes_7:
# 421 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PewterCity_EventScript_AideGiveRunningShoes_4

PewterCity_EventScript_AideGiveRunningShoes_8:
# 423 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_EventScript_AideGiveRunningShoes_Movement_0
# 424 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 425 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PewterCity_EventScript_AideGiveRunningShoes_4

PewterCity_EventScript_AideGiveRunningShoes_9:
# 427 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_EventScript_AideGiveRunningShoes_Movement_1
# 428 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 429 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PewterCity_EventScript_AideGiveRunningShoes_4

PewterCity_EventScript_AideGiveRunningShoes_12:
# 447 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_EventScript_GymGuide_Movement_2
	goto PewterCity_EventScript_AideGiveRunningShoes_10

PewterCity_EventScript_AideGiveRunningShoes_13:
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_EventScript_AideGiveRunningShoes_Movement_2
	goto PewterCity_EventScript_AideGiveRunningShoes_10

PewterCity_EventScript_AideGiveRunningShoes_14:
# 450 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_EventScript_AideGiveRunningShoes_Movement_3
	goto PewterCity_EventScript_AideGiveRunningShoes_10


# 463 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_StepLeft:
# 465 "data/maps/PewterCity_Frlg/scripts.pory"
	step_left
	step_end

# 17 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuide_Movement_0:
# 17 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 17 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 17 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_4
# 17 "data/maps/PewterCity_Frlg/scripts.pory"
	step_faster_down
	step_end

# 18 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuide_Movement_1:
# 18 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 18 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 18 "data/maps/PewterCity_Frlg/scripts.pory"
	step_faster_up
# 18 "data/maps/PewterCity_Frlg/scripts.pory"
	step_up
	step_end

# 26 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuide_Movement_2:
# 26 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 26 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 26 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 26 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 26 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 26 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 26 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 26 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 26 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 26 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
	step_end

# 36 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymWest_Movement_0:
# 36 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
	step_end

# 39 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymWest_Movement_1:
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
	step_end

# 40 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymWest_Movement_2:
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	step_faster_left
	step_end

# 50 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymNorth_Movement_0:
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
	step_end

# 116 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTrigger_Movement_0:
# 116 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 116 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 116 "data/maps/PewterCity_Frlg/scripts.pory"
	step_faster_right
# 116 "data/maps/PewterCity_Frlg/scripts.pory"
	step_right
	step_end

# 121 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTrigger_Movement_1:
# 121 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 121 "data/maps/PewterCity_Frlg/scripts.pory"
	step_down
	step_end

# 126 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTrigger_Movement_2:
# 126 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 126 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 126 "data/maps/PewterCity_Frlg/scripts.pory"
	step_down
	step_end

# 145 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymRight_Movement_0:
# 145 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 145 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 145 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 145 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 145 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 145 "data/maps/PewterCity_Frlg/scripts.pory"
	step_right
	step_end

# 270 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide_Movement_0:
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	step_faster_up
	step_end

# 271 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide_Movement_1:
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	step_faster_up
	step_end

# 273 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide_Movement_2:
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	step_faster_up
	step_end

# 286 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide_Movement_3:
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
	step_end

# 423 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_Movement_0:
# 423 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_4
# 423 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
	step_end

# 427 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_Movement_1:
# 427 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_4
# 427 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 427 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
	step_end

# 448 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_Movement_2:
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
	step_end

# 450 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes_Movement_3:
# 450 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 450 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 450 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 450 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 450 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 450 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 450 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 450 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 450 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
	step_end

Text_DreamEaterTeach::
# 468 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Yawn!\n"
	.string "I must have dozed off in the sun.\p"
	.string "I had this weird dream about\n"
	.string "a DROWZEE eating my dream.\p"
	.string "And…\n"
	.string "I learned how to eat dreams…\p"
	.string "Oogh, this is too spooky!\p"
	.string "Let me teach it to a POKéMON so\n"
	.string "I can forget about it!$"

Text_DreamEaterDeclined::
# 484 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "…Snore…$"

Text_DreamEaterWhichMon::
# 488 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Which POKéMON wants to learn\n"
	.string "DREAM EATER?$"

Text_DreamEaterTaught::
# 493 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "…ZZZ…\n"
	.string "I…can't eat…anymore…$"

PewterCity_Text_ClefairyCameFromMoon::
# 498 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "CLEFAIRY came from the moon.\n"
	.string "That's what the rumor is.\p"
	.string "They appeared after MOON STONES\n"
	.string "fell on MT. MOON.$"

PewterCity_Text_BrockOnlySeriousTrainerHere::
# 506 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "There aren't many serious POKéMON\n"
	.string "TRAINERS here.\p"
	.string "They're all like BUG CATCHERS,\n"
	.string "you know, just hobbyists.\p"
	.string "But PEWTER GYM's BROCK isn't like\n"
	.string "that, not one bit.$"

PewterCity_Text_DidYouCheckOutMuseum::
# 517 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Did you check out the MUSEUM?$"

PewterCity_Text_WerentThoseFossilsAmazing::
# 521 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Weren't those fossils from MT. MOON\n"
	.string "amazing?$"

PewterCity_Text_ReallyYouHaveToGo::
# 526 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Really?\n"
	.string "You absolutely have to go!$"

PewterCity_Text_ThisIsTheMuseum::
# 531 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "This is it, the MUSEUM.\p"
	.string "You have to pay to get in, but it's\n"
	.string "worth it. See you around!$"

PewterCity_Text_DoYouKnowWhatImDoing::
# 538 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Psssst!\n"
	.string "Do you know what I'm doing?$"

PewterCity_Text_ThatsRightItsHardWork::
# 543 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "That's right!\n"
	.string "It's hard work!$"

PewterCity_Text_SprayingRepelToKeepWildMonsOut::
# 548 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I'm spraying REPEL to keep wild\n"
	.string "POKéMON out of my garden!$"

PewterCity_Text_BrocksLookingForChallengersFollowMe::
# 553 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "You're a TRAINER, right?\p"
	.string "BROCK's looking for new\n"
	.string "challengers. Follow me!$"

PewterCity_Text_GoTakeOnBrock::
# 560 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "If you have the right stuff,\n"
	.string "go take on BROCK!$"

PewterCity_Text_TrainerTipsEarningEXP::
# 565 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "All POKéMON that appear in battle,\n"
	.string "however briefly, earn EXP Points.$"

PewterCity_Text_CallPoliceIfInfoOnThieves::
# 572 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "NOTICE!\p"
	.string "Thieves have been stealing POKéMON\n"
	.string "fossils from MT. MOON.\p"
	.string "Please call the PEWTER POLICE if\n"
	.string "you have any information.$"

PewterCity_Text_MuseumOfScience::
# 582 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "PEWTER MUSEUM OF SCIENCE$"

PewterCity_Text_GymSign::
# 586 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "PEWTER CITY POKéMON GYM\n"
	.string "LEADER: BROCK\l"
	.string "The Rock-Solid POKéMON TRAINER!$"

PewterCity_Text_CitySign::
# 592 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "PEWTER CITY\n"
	.string "A Stone Gray City$"

PewterCity_Text_OhPlayer::
# 597 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Oh, {PLAYER}{KUN}!$"

PewterCity_Text_AskedToDeliverThis::
# 601 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I'm glad I caught up to you.\n"
	.string "I'm PROF. OAK's AIDE.\p"
	.string "I've been asked to deliver this,\n"
	.string "so here you go.$"

PewterCity_Text_ReceivedRunningShoesFromAide::
# 609 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "{PLAYER} received the\n"
	.string "RUNNING SHOES from the AIDE.$"

PewterCity_Text_SwitchedShoesWithRunningShoes::
# 614 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "RUNNING SHOES.$"

PewterCity_Text_ExplainRunningShoes::
# 619 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Press the B Button to run.\n"
	.string "But only where there's room to run!$"

PewterCity_Text_MustBeGoingBackToLab::
# 624 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Well, I must be going back to\n"
	.string "the LAB.\p"
	.string "Bye-bye!$"

PewterCity_Text_RunningShoesLetterFromMom::
# 631 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "There's a letter attached…\p"
	.string "Dear {PLAYER},\p"
	.string "Here is a pair of RUNNING SHOES\n"
	.string "for my beloved challenger.\p"
	.string "Remember, I'll always cheer for\n"
	.string "you! Don't ever give up!\p"
	.string "From Mom$"
