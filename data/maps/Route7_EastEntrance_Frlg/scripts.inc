Route7_EastEntrance_Frlg_MapScripts::
	.byte 0


Route7_EastEntrance_EventScript_Guard::
# 4 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	msgbox Route7_EastEntrance_Text_HiHowsItGoing, MSGBOX_NPC
	end


Route7_EastEntrance_EventScript_GuardTriggerTop::
# 9 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	lockall
# 10 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 11 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardTrigger
	end


Route7_EastEntrance_EventScript_GuardTriggerMid::
# 16 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	lockall
# 17 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardTrigger
	end


Route7_EastEntrance_EventScript_GuardTriggerBottom::
# 23 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	lockall
# 24 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 25 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto Route7_EastEntrance_EventScript_GuardTrigger
	end


Route7_EastEntrance_EventScript_GuardTrigger::
# 30 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 31 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 32 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TEA, Route7_EastEntrance_EventScript_GuardTrigger_2
# 46 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	msgbox Route7_EastEntrance_Text_ThirstyOnGuardDuty
# 47 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	closemessage
# 48 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 49 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	waitmovement 0
Route7_EastEntrance_EventScript_GuardTrigger_1:
# 51 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	releaseall
	end

Route7_EastEntrance_EventScript_GuardTrigger_2:
# 34 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	removeitem ITEM_TEA
# 35 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	msgbox Route7_EastEntrance_Text_ThatTeaLooksTasty
# 36 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	closemessage
# 37 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 38 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	case 0, Route7_EastEntrance_EventScript_GuardTrigger_7
# 39 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	case 1, Route7_EastEntrance_EventScript_GuardTrigger_8
# 40 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	case 2, Route7_EastEntrance_EventScript_GuardTrigger_9
Route7_EastEntrance_EventScript_GuardTrigger_5:
# 42 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	msgbox Route7_EastEntrance_Text_ThanksIllShareTeaWithGuards
# 44 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
	goto Route7_EastEntrance_EventScript_GuardTrigger_1

Route7_EastEntrance_EventScript_GuardTrigger_7:
# 38 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepUp
	goto Route7_EastEntrance_EventScript_GuardTrigger_5

Route7_EastEntrance_EventScript_GuardTrigger_8:
# 39 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto Route7_EastEntrance_EventScript_GuardTrigger_5

Route7_EastEntrance_EventScript_GuardTrigger_9:
# 40 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route7_EastEntrance_EventScript_GuardTrigger_Movement_0
	goto Route7_EastEntrance_EventScript_GuardTrigger_5


# 40 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
Route7_EastEntrance_EventScript_GuardTrigger_Movement_0:
# 40 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	walk_up
# 40 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	walk_up
	step_end

Route7_EastEntrance_Text_ThirstyOnGuardDuty::
# 55 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "I'm on guard duty.\n"
	.string "Gee, I'm thirsty, though!\p"
	.string "Oh, wait there, the road's closed.$"

Route7_EastEntrance_Text_ThatTeaLooksTasty::
# 62 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "Oh, that TEA…\n"
	.string "It looks awfully tasty…$"

Route7_EastEntrance_Text_ThanksIllShareTeaWithGuards::
# 67 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "Huh? I can have this drink?\n"
	.string "Gee, thanks!\l"
	.string "… …\l"
	.string "Glug, glug…\l"
	.string "… …\l"
	.string "Gulp…\l"
	.string "If you want to go to SAFFRON\l"
	.string "CITY…\l"
	.string "… …\l"
	.string "You can go on through.\p"
	.string "I'll share this TEA with the other\n"
	.string "guards!$"

Route7_EastEntrance_Text_HiHowsItGoing::
# 83 "data/maps/Route7_EastEntrance_Frlg/scripts.pory"
	.string "Hi, how's it going?$"
