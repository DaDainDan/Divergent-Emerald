TwoIsland_House_Frlg_MapScripts::
	.byte 0


TwoIsland_House_EventScript_MoveManiac::
# 6 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	lock_faceplayer
# 7 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto_if_unset FLAG_TEMP_1, TwoIsland_House_EventScript_MoveManiac_2
TwoIsland_House_EventScript_MoveManiac_1:
	checkitem ITEM_BIG_MUSHROOM
# 0 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TwoIsland_House_EventScript_MoveManiac_6
TwoIsland_House_EventScript_MoveManiac_4:
# 14 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_WantMeToTeachMove, MSGBOX_YESNO
# 15 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq TwoIsland_House_EventScript_MoveManiac_10
TwoIsland_House_EventScript_MoveManiac_9:
# 18 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
	end

TwoIsland_House_EventScript_MoveManiac_2:
# 8 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_TeachMonMoveForMushroom
# 9 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setflag FLAG_TEMP_1
	goto TwoIsland_House_EventScript_MoveManiac_1

TwoIsland_House_EventScript_MoveManiac_5:
# 12 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
	goto TwoIsland_House_EventScript_MoveManiac_4

TwoIsland_House_EventScript_MoveManiac_6:
	checkitem ITEM_TINY_MUSHROOM, 2
# 0 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TwoIsland_House_EventScript_MoveManiac_5
	goto TwoIsland_House_EventScript_MoveManiac_4

TwoIsland_House_EventScript_MoveManiac_10:
# 16 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
	goto TwoIsland_House_EventScript_MoveManiac_9


TwoIsland_House_EventScript_ChooseMonToTutor::
# 23 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_TutorWhichMon
# 24 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	special ChooseMonForMoveRelearner
# 25 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge TwoIsland_House_EventScript_ChooseMonToTutor_2
TwoIsland_House_EventScript_ChooseMonToTutor_1:
# 28 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	special IsSelectedMonEgg
# 29 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TwoIsland_House_EventScript_ChooseMonToTutor_5
# 33 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq TwoIsland_House_EventScript_ChooseMonToTutor_6
TwoIsland_House_EventScript_ChooseMonToTutor_4:
# 37 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_TeachWhichMove
# 38 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	special TeachMoveRelearnerMove
# 39 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq TwoIsland_House_EventScript_ChooseMonToTutor_10
	checkitem ITEM_BIG_MUSHROOM
# 0 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TwoIsland_House_EventScript_ChooseMonToTutor_16
TwoIsland_House_EventScript_ChooseMonToTutor_15:
	checkitem ITEM_BIG_MUSHROOM
# 0 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TwoIsland_House_EventScript_ChooseMonToTutor_12
	checkitem ITEM_TINY_MUSHROOM, 2
# 0 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TwoIsland_House_EventScript_ChooseMonToTutor_13
TwoIsland_House_EventScript_ChooseMonToTutor_9:
# 54 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_GiveMushroom
	end

TwoIsland_House_EventScript_ChooseMonToTutor_2:
# 26 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
	goto TwoIsland_House_EventScript_ChooseMonToTutor_1

TwoIsland_House_EventScript_ChooseMonToTutor_5:
# 30 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_CantTeachAnEgg
# 31 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
	goto TwoIsland_House_EventScript_ChooseMonToTutor_4

TwoIsland_House_EventScript_ChooseMonToTutor_6:
# 34 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_NoMoveICanTeachThatMon
# 35 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
	goto TwoIsland_House_EventScript_ChooseMonToTutor_4

TwoIsland_House_EventScript_ChooseMonToTutor_10:
# 40 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
	goto TwoIsland_House_EventScript_ChooseMonToTutor_9

TwoIsland_House_EventScript_ChooseMonToTutor_11:
# 43 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	message TwoIsland_House_Text_IllNeedMushroomOrTwo
# 44 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	waitmessage
# 45 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_MUSHROOMS, TRUE
# 46 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
	goto TwoIsland_House_EventScript_ChooseMonToTutor_9

TwoIsland_House_EventScript_ChooseMonToTutor_12:
# 49 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setvar VAR_0x8007, 1
	goto TwoIsland_House_EventScript_ChooseMonToTutor_9

TwoIsland_House_EventScript_ChooseMonToTutor_13:
# 52 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	setvar VAR_0x8007, 0
	goto TwoIsland_House_EventScript_ChooseMonToTutor_9

TwoIsland_House_EventScript_ChooseMonToTutor_16:
	checkitem ITEM_TINY_MUSHROOM, 2
# 0 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TwoIsland_House_EventScript_ChooseMonToTutor_11
	goto TwoIsland_House_EventScript_ChooseMonToTutor_15


TwoIsland_House_EventScript_GiveMushroom::
# 59 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	switch VAR_0x8007
# 60 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	case 0, TwoIsland_House_EventScript_GiveMushroom_3
# 61 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	case 1, TwoIsland_House_EventScript_GiveMushroom_4
TwoIsland_House_EventScript_GiveMushroom_1:
# 63 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 64 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	switch VAR_0x8007
# 65 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	case 0, TwoIsland_House_EventScript_GiveMushroom_7
# 66 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	case 1, TwoIsland_House_EventScript_GiveMushroom_8
TwoIsland_House_EventScript_GiveMushroom_5:
# 68 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 69 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
	end

TwoIsland_House_EventScript_GiveMushroom_3:
# 60 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM, 2
	goto TwoIsland_House_EventScript_GiveMushroom_1

TwoIsland_House_EventScript_GiveMushroom_4:
# 61 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
	goto TwoIsland_House_EventScript_GiveMushroom_1

TwoIsland_House_EventScript_GiveMushroom_7:
# 65 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_HandedOverTwoTinyMushrooms
	goto TwoIsland_House_EventScript_GiveMushroom_5

TwoIsland_House_EventScript_GiveMushroom_8:
# 66 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_HandedOverOneBigMushroom
	goto TwoIsland_House_EventScript_GiveMushroom_5


TwoIsland_House_EventScript_EndTutorMove::
# 74 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	msgbox TwoIsland_House_Text_NeedMushroomOrTwoToLearnMove
	release_end


TwoIsland_House_Text_TeachMonMoveForMushroom::
# 78 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "I'm the POKéMON MOVE MANIAC.\p"
	.string "I know every single move that\n"
	.string "POKéMON learn growing up.\p"
	.string "I'm also a mushroom maniac.\p"
	.string "Bring me two TINYMUSHROOMS,\n"
	.string "or one BIG MUSHROOM.\p"
	.string "If you do that for me, I'll teach\n"
	.string "a move to one POKéMON.$"

TwoIsland_House_Text_WantMeToTeachMove::
# 93 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Sniff, sniff…\n"
	.string "Hm! You smell of MUSHROOMS!\p"
	.string "Do you want me to teach a move\n"
	.string "to a POKéMON of yours?$"

TwoIsland_House_Text_TutorWhichMon::
# 101 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Which POKéMON needs tutoring?$"

TwoIsland_House_Text_TeachWhichMove::
# 105 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Which move should I teach?$"

TwoIsland_House_Text_NoMoveICanTeachThatMon::
# 109 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Sorry…\p"
	.string "It doesn't appear as if I have a\n"
	.string "move I can teach that POKéMON.$"

TwoIsland_House_Text_IllNeedMushroomOrTwo::
# 116 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Then, I'll need a MUSHROOM or two.\n"
	.string "What are you going to give me?$"

TwoIsland_House_Text_HandedOverTwoTinyMushrooms::
# 121 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "{PLAYER} handed over two\n"
	.string "TINYMUSHROOMS in exchange.$"

TwoIsland_House_Text_HandedOverOneBigMushroom::
# 126 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "{PLAYER} handed over one\n"
	.string "BIG MUSHROOM in exchange.$"

TwoIsland_House_Text_NeedMushroomOrTwoToLearnMove::
# 131 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "If your POKéMON need to learn a\n"
	.string "move, I need a MUSHROOM or two.$"

TwoIsland_House_Text_CantTeachAnEgg::
# 136 "data/maps/TwoIsland_House_Frlg/scripts.pory"
	.string "Hunh? There isn't a single move\n"
	.string "that I can teach an EGG.$"
