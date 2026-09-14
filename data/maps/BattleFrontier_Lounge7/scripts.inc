BattleFrontier_Lounge7_MapScripts::
	.byte 0


BattleFrontier_Lounge7_EventScript_LeftMoveTutor::
# 9 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	lock_faceplayer
# 10 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 11 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_LeftMoveTutor_2
# 14 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LeftTutorIntro, MSGBOX_DEFAULT
# 15 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
BattleFrontier_Lounge7_EventScript_LeftMoveTutor_1:
# 17 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	call BattleFrontier_Lounge7_EventScript_TutorFirstMoveSetup
# 18 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection
	end

BattleFrontier_Lounge7_EventScript_LeftMoveTutor_2:
# 12 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_LeftMoveTutor_1


BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection::
# 23 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
# 24 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
# 25 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 26 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 27 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_3
# 29 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_4
# 30 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_5
# 31 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_6
# 32 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_7
# 33 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_8
# 34 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_9
# 35 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_10
# 36 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_11
# 37 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_12
# 38 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_13
# 39 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_13
BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1:
# 43 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_3:
# 28 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_DOUBLE_EDGE, 36
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_4:
# 29 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_FLARE_BLITZ, 36
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_5:
# 30 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_WILD_CHARGE, 36
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_6:
# 31 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_WAVE_CRASH, 36
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_7:
# 32 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_FROST_CHARGE, 36
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_8:
# 33 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_BRAVE_BIRD, 36
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_9:
# 34 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_HEADLONG_RUSH, 36
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_10:
# 35 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_BOULDER_RUSH, 36
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_11:
# 36 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_DRAGON_RUSH, 36
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_12:
# 37 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_ADAMANT_ASSAULT, 36
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_13:
# 40 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	end


BattleFrontier_Lounge7_EventScript_RightMoveTutor::
# 48 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	lock_faceplayer
# 49 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 50 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto_if_set FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_RightMoveTutor_2
# 53 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_RightTutorIntro, MSGBOX_DEFAULT
# 54 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setflag FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR
BattleFrontier_Lounge7_EventScript_RightMoveTutor_1:
# 56 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	call BattleFrontier_Lounge7_EventScript_TutorFirstMoveSetup
# 57 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection
	end

BattleFrontier_Lounge7_EventScript_RightMoveTutor_2:
# 51 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_RightTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_RightMoveTutor_1


BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection::
# 62 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
# 63 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
# 64 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowScrollableMultichoice
# 65 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 66 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	switch VAR_RESULT
# 67 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 0, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_3
# 68 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 1, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_4
# 69 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 2, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_5
# 70 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 3, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_6
# 71 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 4, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_7
# 72 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 5, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_8
# 73 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 6, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_9
# 74 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 7, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_10
# 75 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 8, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_11
# 76 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 9, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_12
# 77 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 10, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_13
# 78 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 11, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_14
# 79 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 12, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_15
# 80 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 13, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_16
# 81 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case 14, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_17
# 82 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_17
BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1:
# 86 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_3:
# 67 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_OVERHEAT, 36
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_4:
# 68 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_OVERLOAD, 36
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_5:
# 69 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_LEAF_STORM, 36
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_6:
# 70 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_BLIZZARD, 36
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_7:
# 71 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_FOCUS_BLAST, 36
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_8:
# 72 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_GUNK_SHOT, 36
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_9:
# 73 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_EARTHQUAKE, 36
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_10:
# 74 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_HURRICANE, 36
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_11:
# 75 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_FORCE_OF_WILL, 36
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_12:
# 76 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_METEOR_SHOWER, 36
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_13:
# 77 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_DRACO_METEOR, 36
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_14:
# 78 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_BLOOD_MOON, 36
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_15:
# 79 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_LUSTER_PURGE, 36
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_16:
# 80 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_FLEUR_CANNON, 36
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_17:
# 83 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	end


BattleFrontier_Lounge7_EventScript_TutorFirstMoveSetup::
# 91 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 92 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 93 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowBattlePointsWindow
# 94 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 0
	return


BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect::
# 99 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 100 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattlePointsWindow
# 101 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection::
# 106 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 107 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_EXCHANGE_PRICE
# 108 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
# 109 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_2
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_1:
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 0 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_TEMP_1, VAR_EXCHANGE_PRICE
	goto_if_ge BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_5
# 134 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
# 135 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	end

BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_2:
# 110 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 111 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 112 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 1
# 113 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_TEMP_FRONTIER_TUTOR_ID, 0
	goto_if_eq BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_8
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_7:
# 116 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_1

BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_5:
# 119 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
# 120 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	fadescreen FADE_TO_BLACK
# 121 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattlePointsWindow
# 122 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 123 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 124 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 125 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_11
# 129 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
# 130 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_0x8004, VAR_EXCHANGE_PRICE
# 131 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special TakeFrontierBattlePoints
	release_end

BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_8:
# 114 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_7

BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_11:
# 126 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge7_EventScript_Sailor::
# 140 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong, MSGBOX_NPC
	end


BattleFrontier_Lounge7_EventScript_Gentleman::
# 145 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful, MSGBOX_NPC
	end


BattleFrontier_Lounge7_Text_LeftTutorIntro::
# 149 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Buhahaha!\p"
	.string "You couldn't tell it from looking now,\n"
	.string "but I used to be one tough TRAINER.\p"
	.string "I had a reputation as the toughest\n"
	.string "BEAUTY around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What is it now?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that blowhard woman over\n"
	.string "there. I'm actually talented!\p"
	.string "Let me prove it to you.\n"
	.string "I can teach your POKéMON special and\l"
	.string "yet cute moves.\p"
	.string "But my lessons don't come free.\n"
	.string "How about paying for the moves I teach\l"
	.string "with a wee bit of Battle Points?$"

BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack::
# 175 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Buhahaha!\p"
	.string "Are you back to learn special and\n"
	.string "yet cute POKéMON moves?$"

BattleFrontier_Lounge7_Text_TeachWhichMove::
# 182 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Fine, fine, look here!\n"
	.string "Which move should I teach?$"

BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints::
# 187 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "The move {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle Points, okay?$"

BattleFrontier_Lounge7_Text_TeachMoveToWhichMon::
# 192 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Fine, fine, now pick the POKéMON\n"
	.string "I should teach the move to.$"

BattleFrontier_Lounge7_Text_HaventGotEnoughPoints::
# 197 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "What the…\n"
	.string "You haven't got enough Battle Points!$"

BattleFrontier_Lounge7_Text_IllTakeBattlePoints::
# 202 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Do you see how skilled I am now?\n"
	.string "I'll take your Battle Points, thanks!$"

BattleFrontier_Lounge7_Text_YouDontWantTo::
# 207 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

BattleFrontier_Lounge7_Text_RightTutorIntro::
# 215 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ihihihi!\p"
	.string "I know it's hard to see now, but I used\n"
	.string "to be one fantastic TRAINER.\p"
	.string "I had a reputation as the most\n"
	.string "invincible SWIMMER around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What's wrong?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that buffoonish woman over\n"
	.string "there. I'm actually experienced!\p"
	.string "I can prove it to you.\n"
	.string "I can teach your POKéMON hard and\l"
	.string "yet pretty moves.\p"
	.string "But my lessons don't come free.\n"
	.string "How about paying for the moves I teach\l"
	.string "with a wee bit of Battle Points?$"

BattleFrontier_Lounge7_Text_RightTutorWelcomeBack::
# 241 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ihihihi!\p"
	.string "Have you come to learn hard and\n"
	.string "yet pretty POKéMON moves?$"

BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong::
# 248 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Those ladies, the way they bad-mouth\n"
	.string "each other, you probably think that\l"
	.string "they don't get along.\p"
	.string "But if that were true, they wouldn't\n"
	.string "stay out here together, would they?$"

BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful::
# 257 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "When I was just a wee YOUNGSTER,\n"
	.string "those ladies were strong and beautiful.\p"
	.string "They were idols among us TRAINERS.\p"
	.string "Even now, age hasn't dulled their\n"
	.string "abilities.\p"
	.string "In fact, their POKéMON moves have\n"
	.string "grown even more polished.\p"
	.string "But… For some reason, I can't help\n"
	.string "but feel this…\p"
	.string "Time is so cruel…$"

BattleFrontier_Lounge7_Text_DoubleEdgeDesc::
# 275 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Normal-type\n"
	.string "move with high\n"
	.string "power and recoil.$"

BattleFrontier_Lounge7_Text_FlareBlitzDesc::
# 281 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Fire-type move\n"
	.string "with high power\n"
	.string "and high recoil.$"

BattleFrontier_Lounge7_Text_WildChargeDesc::
# 287 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "An Electric move\n"
	.string "with high power\n"
	.string "but high recoil.$"

BattleFrontier_Lounge7_Text_WaveCrashDesc::
# 293 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Water-type\n"
	.string "move with high\n"
	.string "power and recoil.$"

BattleFrontier_Lounge7_Text_FrostChargeDesc::
# 299 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Ice-type move\n"
	.string "with high power\n"
	.string "and high recoil.$"

BattleFrontier_Lounge7_Text_BraveBirdDesc::
# 305 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Flying move\n"
	.string "with high power\n"
	.string "but high recoil.$"

BattleFrontier_Lounge7_Text_HeadRamDesc::
# 311 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Ground move\n"
	.string "with high power\n"
	.string "but high recoil.$"

BattleFrontier_Lounge7_Text_BoulderRushDesc::
# 317 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Rock-type\n"
	.string "move with high\n"
	.string "power and recoil.$"

BattleFrontier_Lounge7_Text_DragonRushDesc::
# 323 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Dragon move\n"
	.string "with high power\n"
	.string "but high recoil.$"

BattleFrontier_Lounge7_Text_AdamantAssaultDesc::
# 329 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Steel-type\n"
	.string "move with high\n"
	.string "power and recoil.$"

BattleFrontier_Lounge7_Text_OverheatDesc::
# 335 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Fire-type move\n"
	.string "with great power.\n"
	.string "Weakens user.$"

BattleFrontier_Lounge7_Text_OverloadDesc::
# 341 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "An Electric move\n"
	.string "with great power.\n"
	.string "Weakens user.$"

BattleFrontier_Lounge7_Text_LeafStormDesc::
# 347 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Grass-type move\n"
	.string "with great power.\n"
	.string "Weakens user.$"

BattleFrontier_Lounge7_Text_BlizzardDesc::
# 353 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "An Ice-type move\n"
	.string "with great power.\n"
	.string "Weakens user.$"

BattleFrontier_Lounge7_Text_FocusBlastDesc::
# 359 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Fighting move\n"
	.string "with high power.\n"
	.string "Weakens user.$"

BattleFrontier_Lounge7_Text_GunkShotDesc::
# 365 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Poison move\n"
	.string "with high power.\n"
	.string "Weakens user.$"

BattleFrontier_Lounge7_Text_EarthquakeDesc::
# 371 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Ground move\n"
	.string "with great power.\n"
	.string "Weakens user.$"

BattleFrontier_Lounge7_Text_HurricaneDesc::
# 377 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Wind move\n"
	.string "with great power.\n"
	.string "Weakens user.$"

BattleFrontier_Lounge7_Text_BloodMoonDesc::
# 383 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Dark move\n"
	.string "with great power.\n"
	.string "Weakens user.$"

BattleFrontier_Lounge7_Text_ForceofWillDesc::
# 389 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Psychic move\n"
	.string "with great power.\n"
	.string "Weakens user.$"

BattleFrontier_Lounge7_Text_DracoMeteorDesc::
# 395 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Dragon move\n"
	.string "with great power.\n"
	.string "Weakens user.$"

BattleFrontier_Lounge7_Text_MeteorShowerDesc::
# 401 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Rock-type move\n"
	.string "with great power.\n"
	.string "Weakens user.$"

BattleFrontier_Lounge7_Text_LusterPurgeDesc::
# 407 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Steel move\n"
	.string "that hits all.\n"
	.string "Weakens user.$"

BattleFrontier_Lounge7_Text_FleurCannonDesc::
# 413 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A Fairy move\n"
	.string "with great power.\n"
	.string "Weakens user.$"
