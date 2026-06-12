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
	setmoveandprice MOVE_SOFT_BOILED, 16
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_4:
# 29 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_SEISMIC_TOSS, 24
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_5:
# 30 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_DREAM_EATER, 24
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_6:
# 31 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_MEGA_PUNCH, 24
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_7:
# 32 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_MEGA_KICK, 48
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_8:
# 33 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_BODY_SLAM, 48
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_9:
# 34 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_ROCK_SLIDE, 48
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_10:
# 35 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_COUNTER, 48
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_11:
# 36 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_THUNDER_WAVE, 48
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection_12:
# 37 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_SWORDS_DANCE, 48
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
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_13
BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1:
# 82 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_3:
# 67 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_DEFENSE_CURL, 16
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_4:
# 68 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_SNORE, 24
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_5:
# 69 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_MUD_SLAP, 24
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_6:
# 70 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_SWIFT, 24
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_7:
# 71 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_ICY_WIND, 24
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_8:
# 72 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_ENDURE, 48
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_9:
# 73 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_PSYCH_UP, 48
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_10:
# 74 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_ICE_PUNCH, 48
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_11:
# 75 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_THUNDER_PUNCH, 48
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_12:
# 76 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setmoveandprice MOVE_FIRE_PUNCH, 48
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_1

BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection_13:
# 79 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	end


BattleFrontier_Lounge7_EventScript_TutorFirstMoveSetup::
# 87 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 88 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 89 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special ShowBattlePointsWindow
# 90 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 0
	return


BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect::
# 95 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 96 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattlePointsWindow
# 97 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection::
# 102 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 103 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_EXCHANGE_PRICE
# 104 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
# 105 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_2
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_1:
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 0 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_TEMP_1, VAR_EXCHANGE_PRICE
	goto_if_ge BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_5
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_4:
# 111 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
# 112 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove
	end

BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_2:
# 106 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_1

BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_5:
# 109 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_TeachTutorMove
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_4


BattleFrontier_Lounge7_EventScript_TeachTutorMove::
# 117 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
# 118 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	fadescreen FADE_TO_BLACK
# 119 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattlePointsWindow
# 120 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 121 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 122 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitstate
# 123 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge7_EventScript_TeachTutorMove_2
# 127 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
# 128 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	copyvar VAR_0x8004, VAR_EXCHANGE_PRICE
# 129 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	special TakeFrontierBattlePoints
	release_end

BattleFrontier_Lounge7_EventScript_TeachTutorMove_2:
# 124 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge7_EventScript_ChooseNewMove::
# 134 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	message BattleFrontier_Lounge7_Text_TeachWhichMove
# 135 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	waitmessage
# 136 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	setvar VAR_0x8006, 1
# 137 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	compare VAR_TEMP_FRONTIER_TUTOR_ID, 0
	goto_if_eq BattleFrontier_Lounge7_EventScript_ChooseNewMove_2
BattleFrontier_Lounge7_EventScript_ChooseNewMove_1:
# 140 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_RightTutorMoveSelection
	end

BattleFrontier_Lounge7_EventScript_ChooseNewMove_2:
# 138 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	goto BattleFrontier_Lounge7_EventScript_LeftTutorMoveSelection
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove_1


BattleFrontier_Lounge7_EventScript_Sailor::
# 145 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong, MSGBOX_NPC
	end


BattleFrontier_Lounge7_EventScript_Gentleman::
# 150 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	msgbox BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful, MSGBOX_NPC
	end


BattleFrontier_Lounge7_Text_LeftTutorIntro::
# 154 "data/maps/BattleFrontier_Lounge7/scripts.pory"
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
# 180 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Buhahaha!\p"
	.string "Are you back to learn special and\n"
	.string "yet cute POKéMON moves?$"

BattleFrontier_Lounge7_Text_TeachWhichMove::
# 187 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Fine, fine, look here!\n"
	.string "Which move should I teach?$"

BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints::
# 192 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "The move {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle Points, okay?$"

BattleFrontier_Lounge7_Text_TeachMoveToWhichMon::
# 197 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Fine, fine, now pick the POKéMON\n"
	.string "I should teach the move to.$"

BattleFrontier_Lounge7_Text_HaventGotEnoughPoints::
# 202 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "What the…\n"
	.string "You haven't got enough Battle Points!$"

BattleFrontier_Lounge7_Text_IllTakeBattlePoints::
# 207 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Do you see how skilled I am now?\n"
	.string "I'll take your Battle Points, thanks!$"

BattleFrontier_Lounge7_Text_YouDontWantTo::
# 212 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

BattleFrontier_Lounge7_Text_RightTutorIntro::
# 220 "data/maps/BattleFrontier_Lounge7/scripts.pory"
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
# 246 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Ihihihi!\p"
	.string "Have you come to learn hard and\n"
	.string "yet pretty POKéMON moves?$"

BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong::
# 253 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Those ladies, the way they bad-mouth\n"
	.string "each other, you probably think that\l"
	.string "they don't get along.\p"
	.string "But if that were true, they wouldn't\n"
	.string "stay out here together, would they?$"

BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful::
# 262 "data/maps/BattleFrontier_Lounge7/scripts.pory"
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

BattleFrontier_Lounge7_Text_SoftboiledDesc::
# 280 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Recovers up to\n"
	.string "half the user's\l"
	.string "maximum HP.$"

BattleFrontier_Lounge7_Text_SeismicTossDesc::
# 286 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Inflicts damage\n"
	.string "identical to the\l"
	.string "user's level.$"

BattleFrontier_Lounge7_Text_DreamEaterDesc::
# 292 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Recovers half the\n"
	.string "damage inflicted\l"
	.string "on a sleeping foe.$"

BattleFrontier_Lounge7_Text_MegaPunchDesc::
# 298 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A strong punch\n"
	.string "thrown with\l"
	.string "incredible power.$"

BattleFrontier_Lounge7_Text_MegaKickDesc::
# 304 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "An extremely\n"
	.string "powerful kick with\l"
	.string "intense force.$"

BattleFrontier_Lounge7_Text_BodySlamDesc::
# 310 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A full-body slam\n"
	.string "that may cause\l"
	.string "paralysis.$"

BattleFrontier_Lounge7_Text_RockSlideDesc::
# 316 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Large boulders\n"
	.string "are hurled. May\l"
	.string "cause flinching.$"

BattleFrontier_Lounge7_Text_CounterDesc::
# 322 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Retaliates any\n"
	.string "physical hit with\l"
	.string "double the power.$"

BattleFrontier_Lounge7_Text_ThunderWaveDesc::
# 328 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A weak jolt of\n"
	.string "electricity that\l"
	.string "paralyzes the foe.$"

BattleFrontier_Lounge7_Text_SwordsDanceDesc::
# 334 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A fighting dance\n"
	.string "that sharply\l"
	.string "raises ATTACK.$"

BattleFrontier_Lounge7_Text_DefenseCurlDesc::
# 340 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Curls up to con-\n"
	.string "ceal weak spots\l"
	.string "and raise DEFENSE.$"

BattleFrontier_Lounge7_Text_SnoreDesc::
# 346 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A loud attack\n"
	.string "that can be used\l"
	.string "only while asleep.$"

BattleFrontier_Lounge7_Text_MudSlapDesc::
# 352 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Hurls mud in the\n"
	.string "foe's face to re-\l"
	.string "duce its accuracy.$"

BattleFrontier_Lounge7_Text_SwiftDesc::
# 358 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Sprays star-\n"
	.string "shaped rays\l"
	.string "that never miss.$"

BattleFrontier_Lounge7_Text_IcyWindDesc::
# 364 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A chilling attack\n"
	.string "that lowers the\l"
	.string "foe's SPEED.$"

BattleFrontier_Lounge7_Text_EndureDesc::
# 370 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Endures any at-\n"
	.string "tack for 1 turn,\l"
	.string "leaving 1HP.$"

BattleFrontier_Lounge7_Text_PsychUpDesc::
# 376 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "Copies the foe's\n"
	.string "effect(s) and\l"
	.string "gives to the user.$"

BattleFrontier_Lounge7_Text_IcePunchDesc::
# 382 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "An icy punch\n"
	.string "that may\l"
	.string "freeze the foe.$"

BattleFrontier_Lounge7_Text_ThunderPunchDesc::
# 388 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "An electrified\n"
	.string "punch that may\l"
	.string "paralyze the foe.$"

BattleFrontier_Lounge7_Text_FirePunchDesc::
# 394 "data/maps/BattleFrontier_Lounge7/scripts.pory"
	.string "A fiery punch\n"
	.string "that may burn\l"
	.string "the foe.$"
