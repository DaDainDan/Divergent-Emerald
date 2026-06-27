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
	goto_if_set FLAG_MOVE_RELEARNER, FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_2
# 12 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_unset FLAG_TEMP_1, FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_5
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_4:
	checkitem ITEM_HEART_SCALE
# 0 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_8
	checkitem ITEM_HEART_SCALE, 10
# 0 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_11
# 22 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_OkayIllTeachYou, MSGBOX_DEFAULT
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE, 10
# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	message FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmessage
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag FLAG_MOVE_RELEARNER
# 27 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 28 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitfanfare
# 29 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_AreYouEnlightened, MSGBOX_DEFAULT
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_7:
# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
	end

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_2:
# 8 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_GoOnYourWay, MSGBOX_DEFAULT
# 9 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
	end

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_5:
# 13 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag FLAG_TEMP_1
	goto FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_4

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_8:
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_7

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_11:
# 20 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAStart, MSGBOX_DEFAULT
	goto FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_7


FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setmoverelearnerstate MOVE_RELEARNER_LEVEL_UP_MOVES
# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_RELEARNER
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 41 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_2
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_1:
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_5
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_4:
# 49 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special Special_HasMoveToRelearn
# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_8
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_7:
# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
	end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_2:
# 42 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_1

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_5:
# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_4

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_8:
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon_7


FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_2
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_1:
# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 66 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_2:
# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove_1


FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 71 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 72 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
	end


FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor::
# 76 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm the MOVE RELEARNER.\p"
	.string "I know how to unlock the memory of\n"
	.string "any POKéMON and allow them to remember\l"
	.string "any move they've forgotten.\p"
	.string "I sometimes teach my techniques to\n"
	.string "other trainers, but one must prove\l"
	.string "themselves to become my pupil.\p"
	.string "Bring me 10 HEART SCALES, and I might\n"
	.string "consider teaching you my method.$"

FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove::
# 91 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh! That's it! That's an honest to\n"
	.string "goodness HEART SCALE!\p"
	.string "Let me guess, you want me to teach\n"
	.string "a move?$"

FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon::
# 99 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which POKéMON needs tutoring?$"

FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove::
# 103 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which move should I teach?$"

FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon::
# 107 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that POKéMON.$"

FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale::
# 114 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} offered 10 HEART SCALES.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale::
# 118 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Why are you even talking to me when you\n"
	.string "haven't found a single HEART SCALE?\p"
	.string "Get out there and find one, or get lost.$"

FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg::
# 125 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hunh? There isn't a single move that\n"
	.string "I can teach an EGG.$"

FallarborTown_MoveRelearnersHouse_Text_ThatsAStart::
# 130 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Ah, yes.\n"
	.string "That's a HEART SCALE.\p"
	.string "However, you don't have enough yet.\p"
	.string "Keep looking for more if you ever want\n"
	.string "to learn my masterful techniques.$"

FallarborTown_MoveRelearnersHouse_Text_OkayIllTeachYou::
# 140 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh, baby! That's a lot of HEART SCALES!\p"
	.string "You've done well, pupil.\p"
	.string "I will now teach you the secrets of\n"
	.string "move relearning.$"

FallarborTown_MoveRelearnersHouse_Text_AreYouEnlightened::
# 149 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Do you feel enlightened now, pupil?\p"
	.string "I'm sure you do.\p"
	.string "You can now reteach any move that a\n"
	.string "POKéMON has forgotten.$"

FallarborTown_MoveRelearnersHouse_Text_GoOnYourWay::
# 158 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I don't have anything more to teach,\n"
	.string "so be a good pupil and go on your way.$"
