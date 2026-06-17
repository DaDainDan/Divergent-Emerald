FuchsiaCity_House3_Frlg_MapScripts::
	.byte 0


FuchsiaCity_House3_EventScript_MoveDeleter::
# 4 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_WouldYouLikeToForgetMove, MSGBOX_YESNO
# 6 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FuchsiaCity_House3_EventScript_MoveDeleter_2
FuchsiaCity_House3_EventScript_MoveDeleter_1:
# 9 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
	end

FuchsiaCity_House3_EventScript_MoveDeleter_2:
# 7 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter
	goto FuchsiaCity_House3_EventScript_MoveDeleter_1


FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter::
# 14 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_WhichMonShouldForgetMove
# 15 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special ChoosePartyMon
# 16 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_2
FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_1:
# 19 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special IsSelectedMonEgg
# 20 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_5
# 24 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special GetNumMovesSelectedMonHas
# 25 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_8
# 30 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_WhichMoveShouldBeForgotten
# 31 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 32 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special MoveDeleterChooseMoveToForget
# 33 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 34 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	compare VAR_0x8005, MAX_MON_MOVES
	goto_if_eq FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_11
FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_10:
# 37 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 38 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
# 39 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_14
# 46 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
	end

FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_2:
# 17 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_CancelForgetMove
	goto FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_1

FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_5:
# 21 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_NoEggShouldKnowMoves
	release_end

FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_8:
# 26 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 27 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_MonOnlyKnowsOneMove
	release_end

FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_11:
# 35 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	goto FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter
	goto FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_10

FuchsiaCity_House3_EventScript_ChooseMonForMoveDeleter_14:
# 40 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	special MoveDeleterForgetMove
# 41 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 42 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	waitfanfare
# 43 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_MonHasForgottenMoveCompletely
	release_end


FuchsiaCity_House3_EventScript_CancelForgetMove::
# 51 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	msgbox FuchsiaCity_House3_Text_ComeAgainToForgetOtherMoves
	release_end


FuchsiaCity_House3_Text_WouldYouLikeToForgetMove::
# 55 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Uh…\n"
	.string "Oh, yes, I'm the MOVE DELETER.\p"
	.string "I can make POKéMON forget their\n"
	.string "moves.\p"
	.string "Would you like me to do that?$"

FuchsiaCity_House3_Text_WhichMonShouldForgetMove::
# 65 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Which POKéMON should forget a\n"
	.string "move?$"

FuchsiaCity_House3_Text_WhichMoveShouldBeForgotten::
# 70 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Which move should be forgotten?$"

FuchsiaCity_House3_Text_MonOnlyKnowsOneMove::
# 74 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "{STR_VAR_1} seems to know only one\n"
	.string "move…$"

FuchsiaCity_House3_Text_MonsMoveShouldBeForgotten::
# 79 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
	.string "That move should be forgotten?$"

FuchsiaCity_House3_Text_MonHasForgottenMoveCompletely::
# 84 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "It worked to perfection!\p"
	.string "{STR_VAR_1} has forgotten\n"
	.string "{STR_VAR_2} completely.$"

FuchsiaCity_House3_Text_ComeAgainToForgetOtherMoves::
# 91 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "Come again if there are other\n"
	.string "moves to be forgotten.$"

FuchsiaCity_House3_Text_NoEggShouldKnowMoves::
# 96 "data/maps/FuchsiaCity_House3_Frlg/scripts.pory"
	.string "What?\n"
	.string "No EGG should know any moves.$"
