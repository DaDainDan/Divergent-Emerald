Route8_WestEntrance_Frlg_MapScripts::
	.byte 0


Route8_WestEntrance_EventScript_Guard::
# 4 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	msgbox Route8_WestEntrance_Text_HiHowsItGoing, MSGBOX_NPC
	end


Route8_WestEntrance_EventScript_GuardTriggerTop::
# 9 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	lockall
# 10 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 11 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	goto Route8_WestEntrance_EventScript_GuardTrigger
	end


Route8_WestEntrance_EventScript_GuardTriggerMid::
# 16 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	lockall
# 17 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	goto Route8_WestEntrance_EventScript_GuardTrigger
	end


Route8_WestEntrance_EventScript_GuardTriggerBottom::
# 23 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	lockall
# 24 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 25 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	goto Route8_WestEntrance_EventScript_GuardTrigger
	end


Route8_WestEntrance_EventScript_GuardTrigger::
# 30 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 31 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 32 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TEA, Route8_WestEntrance_EventScript_GuardTrigger_2
Route8_WestEntrance_EventScript_GuardTrigger_1:
# 37 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	msgbox Route8_WestEntrance_Text_ThirstyOnGuardDuty
# 38 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	closemessage
# 39 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 40 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	releaseall
	end

Route8_WestEntrance_EventScript_GuardTrigger_2:
# 34 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	removeitem ITEM_TEA
# 35 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	goto Route8_WestEntrance_EventScript_GuardDrinkTea
	goto Route8_WestEntrance_EventScript_GuardTrigger_1


Route8_WestEntrance_EventScript_GuardDrinkTea::
# 46 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	msgbox Route8_WestEntrance_Text_ThatTeaLooksTasty
# 47 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	closemessage
# 48 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 49 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	case 0, Route8_WestEntrance_EventScript_GuardDrinkTea_3
# 50 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	case 1, Route8_WestEntrance_EventScript_GuardDrinkTea_4
# 51 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	case 2, Route8_WestEntrance_EventScript_GuardDrinkTea_5
Route8_WestEntrance_EventScript_GuardDrinkTea_1:
# 53 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	msgbox Route8_WestEntrance_Text_ThanksIllShareTeaWithGuards
# 55 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 56 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	releaseall
	end

Route8_WestEntrance_EventScript_GuardDrinkTea_3:
# 49 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepUp
	goto Route8_WestEntrance_EventScript_GuardDrinkTea_1

Route8_WestEntrance_EventScript_GuardDrinkTea_4:
# 50 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto Route8_WestEntrance_EventScript_GuardDrinkTea_1

Route8_WestEntrance_EventScript_GuardDrinkTea_5:
# 51 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route8_WestEntrance_EventScript_GuardDrinkTea_Movement_0
	goto Route8_WestEntrance_EventScript_GuardDrinkTea_1


Route8_WestEntrance_EventScript_GiveSodaPop::
# 62 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	removeitem ITEM_SODA_POP
# 63 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	goto Route8_WestEntrance_EventScript_GuardDrinkTea
	end


Route8_WestEntrance_EventScript_GiveLemonade::
# 69 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	removeitem ITEM_LEMONADE
# 70 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	goto Route8_WestEntrance_EventScript_GuardDrinkTea
	end


# 51 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
Route8_WestEntrance_EventScript_GuardDrinkTea_Movement_0:
# 51 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	walk_up
# 51 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	walk_up
	step_end

Route8_WestEntrance_Text_ThirstyOnGuardDuty::
# 74 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	.string "I'm on guard duty.\n"
	.string "Gee, I'm thirsty, though!\p"
	.string "Oh, wait there, the road's closed.$"

Route8_WestEntrance_Text_ThatTeaLooksTasty::
# 81 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	.string "Oh, that TEA…\n"
	.string "It looks awfully tasty…$"

Route8_WestEntrance_Text_ThanksIllShareTeaWithGuards::
# 86 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
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

Route8_WestEntrance_Text_HiHowsItGoing::
# 102 "data/maps/Route8_WestEntrance_Frlg/scripts.pory"
	.string "Hi, how's it going?$"
