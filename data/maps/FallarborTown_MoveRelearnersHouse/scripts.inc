FallarborTown_MoveRelearnersHouse_MapScripts::
	.byte 0


FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
# 4 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 5 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
# 6 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 7 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_unset FLAG_TEMP_1, FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_2
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_1:
	checkitem ITEM_HEART_SCALE
# 0 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_5
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_4:
# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
# 15 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_8
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_7:
# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_2:
# 8 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 9 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag FLAG_TEMP_1
	goto FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_1

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_5:
# 12 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_4

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_8:
# 16 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_7


FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setmoverelearnerstate MOVE_RELEARNER_LEVEL_UP_MOVES
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_RELEARNER
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 27 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_2
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_1:
# 30 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 31 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_5
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_4:
# 35 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special Special_HasMoveToRelearn
# 36 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_8
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_7:
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
	end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_2:
# 28 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_1

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_5:
# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 33 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_4

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_8:
# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_7


FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_2
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_1:
# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_2:
# 48 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_1


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
	end


FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor::
# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm the MOVE TUTOR.\p"
	.string "I know all the moves that POKéMON\n"
	.string "learn--every one of them--and I can\l"
	.string "teach POKéMON those moves.\p"
	.string "I can teach a move to a POKéMON\n"
	.string "of yours if you'd like.\p"
	.string "I'll do it for a HEART SCALE.\n"
	.string "I'm collecting those now.$"

FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove::
# 76 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh! That's it! That's an honest to\n"
	.string "goodness HEART SCALE!\p"
	.string "Let me guess, you want me to teach\n"
	.string "a move?$"

FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon::
# 84 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which POKéMON needs tutoring?$"

FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove::
# 88 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which move should I teach?$"

FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon::
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that POKéMON.$"

FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale::
# 99 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} handed over one HEART SCALE\n"
	.string "in exchange.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale::
# 104 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "If your POKéMON need to learn a move,\n"
	.string "come back with a HEART SCALE.$"

FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg::
# 109 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hunh? There isn't a single move that\n"
	.string "I can teach an EGG.$"
