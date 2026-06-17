Route16_NorthEntrance_1F_Frlg_MapScripts::
# 2 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route16_NorthEntrance_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route16_NorthEntrance_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	clearflag FLAG_SYS_ON_CYCLING_ROAD
# 4 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BICYCLE, Route16_NorthEntrance_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route16_NorthEntrance_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route16_NorthEntrance_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto Route16_NorthEntrance_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Route16_NorthEntrance_1F_EventScript_Guard::
# 12 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_1F_Text_CyclingRoadIsDownhillCourse, MSGBOX_NPC
	end


Route16_NorthEntrance_1F_EventScript_NeedBikeTriggerTop::
# 17 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	lockall
# 18 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 0
# 19 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger
	end


Route16_NorthEntrance_1F_EventScript_NeedBikeTriggerMidTop::
# 24 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	lockall
# 25 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 1
# 26 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger
	end


Route16_NorthEntrance_1F_EventScript_NeedBikeTriggerMid::
# 31 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	lockall
# 32 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 2
# 33 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger
	end


Route16_NorthEntrance_1F_EventScript_NeedBikeTriggerMidBottom::
# 38 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	lockall
# 39 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 3
# 40 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger
	end


Route16_NorthEntrance_1F_EventScript_NeedBikeTriggerBottom::
# 45 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	lockall
# 46 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	setvar VAR_0x8008, 4
# 47 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger
	end


Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger::
# 52 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 53 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_1F_Text_ExcuseMeWaitUp
# 54 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	closemessage
# 55 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 56 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	delay 20
# 58 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	switch VAR_0x8008
# 59 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	case 1, Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_3
# 60 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	case 2, Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_4
# 61 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	case 3, Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_5
# 62 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	case 4, Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_6
Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_1:
# 64 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_1F_Text_NoPedestriansOnCyclingRoad
# 65 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	closemessage
# 66 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 67 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	releaseall
	end

Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_3:
# 59 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_1

Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_4:
# 60 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_Movement_0
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_1

Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_5:
# 61 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_Movement_1
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_1

Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_6:
# 62 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_Movement_2
	goto Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_1


Route16_NorthEntrance_1F_EventScript_OldMan::
# 73 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_1F_Text_HowdYouGetInGoodEffort, MSGBOX_NPC
	end


# 60 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_Movement_0:
# 60 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 60 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
	step_end

# 61 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_Movement_1:
# 61 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 61 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 61 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
	step_end

# 62 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
Route16_NorthEntrance_1F_EventScript_NeedBikeTrigger_Movement_2:
# 62 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	walk_up
	step_end

Route16_NorthEntrance_1F_Text_NoPedestriansOnCyclingRoad::
# 77 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	.string "No pedestrians are allowed on\n"
	.string "CYCLING ROAD!$"

Route16_NorthEntrance_1F_Text_CyclingRoadIsDownhillCourse::
# 82 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	.string "CYCLING ROAD is a downhill course\n"
	.string "by the sea. It's a great ride.$"

Route16_NorthEntrance_1F_Text_ExcuseMeWaitUp::
# 87 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	.string "Excuse me!\n"
	.string "Wait up, please!$"

Route16_NorthEntrance_1F_Text_HowdYouGetInGoodEffort::
# 92 "data/maps/Route16_NorthEntrance_1F_Frlg/scripts.pory"
	.string "How'd you get in?\n"
	.string "Good effort!$"
