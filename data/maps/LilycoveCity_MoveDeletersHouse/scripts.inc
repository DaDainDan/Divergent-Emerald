LilycoveCity_MoveDeletersHouse_MapScripts::
	.byte 0


LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter::
# 4 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	lockall
# 5 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	applymovement LOCALID_MOVE_DELETER, Common_Movement_FacePlayer
# 6 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitmovement 0
# 7 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
# 8 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	switch VAR_RESULT
# 9 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter_3
# 10 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter_4
LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter_1:
# 12 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter_3:
# 9 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	goto LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter_1

LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter_4:
# 10 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	goto LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter_1


LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget::
# 17 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget, MSGBOX_DEFAULT
# 18 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_DELETER
# 19 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitstate
# 20 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_2
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_1:
# 23 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special IsSelectedMonEgg
# 24 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_5
# 29 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special GetNumMovesSelectedMonHas
# 30 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_8
# 36 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
# 37 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 38 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special MoveDeleterChooseMoveToForget
# 39 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 40 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_0x8005, MAX_MON_MOVES
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_11
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_10:
# 43 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 44 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
# 45 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	switch VAR_RESULT
# 46 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_15
# 57 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_16
LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_13:
# 59 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_2:
# 21 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_1

LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_5:
# 25 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves, MSGBOX_DEFAULT
# 26 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_8:
# 31 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 32 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
# 33 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_11:
# 41 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_10

LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_15:
# 47 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special IsLastMonThatKnowsSurf
# 48 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_17
# 52 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special MoveDeleterForgetMove
# 53 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 54 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	waitfanfare
# 55 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove, MSGBOX_DEFAULT
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_13

LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_16:
# 57 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	goto LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_13

LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_17:
# 49 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 50 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf, MSGBOX_DEFAULT
	goto LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget_13


LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain::
# 64 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_ComeAgain, MSGBOX_DEFAULT
# 65 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	releaseall
	end


LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove::
# 69 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Uh…\n"
	.string "Oh, yes, I'm the MOVE DELETER.\p"
	.string "I can make POKéMON forget their moves.\p"
	.string "Would you like me to do that?$"

LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget::
# 78 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Which POKéMON should forget a move?$"

LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten::
# 82 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Which move should be forgotten?$"

LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove::
# 86 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "{STR_VAR_1} knows only one move\n"
	.string "so it can't be forgotten…$"

LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten::
# 91 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
	.string "That move should be forgotten?$"

LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove::
# 96 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "It worked to perfection!\p"
	.string "{STR_VAR_1} has forgotten\n"
	.string "{STR_VAR_2} completely.$"

LilycoveCity_MoveDeletersHouse_Text_ComeAgain::
# 103 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Come again if there are moves that\n"
	.string "need to be forgotten.$"

LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves::
# 108 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "What?\n"
	.string "No EGG should know any moves.$"

LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf::
# 113 "data/maps/LilycoveCity_MoveDeletersHouse/scripts.pory"
	.string "Hm!\p"
	.string "Your {STR_VAR_1} doesn't seem willing\n"
	.string "to forget SURF.$"
