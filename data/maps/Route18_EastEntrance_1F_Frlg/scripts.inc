Route18_EastEntrance_1F_Frlg_MapScripts::
# 2 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_EastEntrance_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route18_EastEntrance_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	clearflag FLAG_SYS_ON_CYCLING_ROAD
# 4 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BICYCLE, Route18_EastEntrance_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route18_EastEntrance_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route18_EastEntrance_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto Route18_EastEntrance_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Route18_EastEntrance_1F_EventScript_Guard::
# 12 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	msgbox Route18_EastEntrance_1F_Text_CyclingRoadAllUphillFromHere, MSGBOX_NPC
	end


Route18_EastEntrance_1F_EventScript_NeedBikeTriggerTop::
# 17 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	lockall
# 18 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 0
# 19 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger
	end


Route18_EastEntrance_1F_EventScript_NeedBikeTriggerMidTop::
# 24 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	lockall
# 25 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 1
# 26 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger
	end


Route18_EastEntrance_1F_EventScript_NeedBikeTriggerMid::
# 31 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	lockall
# 32 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 2
# 33 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger
	end


Route18_EastEntrance_1F_EventScript_NeedBikeTriggerMidBottom::
# 38 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	lockall
# 39 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 3
# 40 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger
	end


Route18_EastEntrance_1F_EventScript_NeedBikeTriggerBottom::
# 45 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	lockall
# 46 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 4
# 47 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger
	end


Route18_EastEntrance_1F_EventScript_NeedBikeTrigger::
# 52 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 53 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	msgbox Route18_EastEntrance_1F_Text_ExcuseMe
# 54 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	closemessage
# 55 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 56 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	delay 20
# 58 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	switch VAR_0x8008
# 59 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	case 1, Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_3
# 60 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	case 2, Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_4
# 61 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	case 3, Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_5
# 62 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	case 4, Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_6
Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_1:
# 64 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	msgbox Route18_EastEntrance_1F_Text_NeedBicycleForCyclingRoad
# 66 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	closemessage
# 67 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 68 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	releaseall
	end

Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_3:
# 59 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_1

Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_4:
# 60 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_Movement_0
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_1

Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_5:
# 61 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_Movement_1
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_1

Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_6:
# 62 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_Movement_2
	goto Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_1


# 60 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_Movement_0:
# 60 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 60 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
	step_end

# 61 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_Movement_1:
# 61 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 61 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 61 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
	step_end

# 62 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
Route18_EastEntrance_1F_EventScript_NeedBikeTrigger_Movement_2:
# 62 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	walk_up
	step_end

Route18_EastEntrance_1F_Text_NeedBicycleForCyclingRoad::
# 73 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	.string "You need a BICYCLE to go out on\n"
	.string "CYCLING ROAD!$"

Route18_EastEntrance_1F_Text_CyclingRoadAllUphillFromHere::
# 78 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	.string "CYCLING ROAD is all uphill from\n"
	.string "here.$"

Route18_EastEntrance_1F_Text_ExcuseMe::
# 83 "data/maps/Route18_EastEntrance_1F_Frlg/scripts.pory"
	.string "Excuse me!$"
