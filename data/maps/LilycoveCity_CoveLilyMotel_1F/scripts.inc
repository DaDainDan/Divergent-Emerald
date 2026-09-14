LilycoveCity_CoveLilyMotel_1F_MapScripts::
	.byte 0


LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner::
# 4 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 5 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_2
# 11 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_3
# 18 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot, MSGBOX_DEFAULT
# 19 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 20 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua, MSGBOX_DEFAULT
LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_1:
# 23 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 24 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 25 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_2:
# 6 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar, MSGBOX_DEFAULT
# 7 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 8 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 9 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner, MSGBOX_DEFAULT
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_1

LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_3:
# 12 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem, MSGBOX_DEFAULT
# 13 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_FacePlayer
# 14 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 15 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted, MSGBOX_DEFAULT
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner_1


LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV::
# 31 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 32 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	playse SE_PIN
# 33 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_ExclamationMark
# 34 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_Delay48
# 36 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 37 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 38 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 39 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV, MSGBOX_DEFAULT
# 40 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV_Movement_0
# 42 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, Common_Movement_WalkUp
# 43 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_MOTEL_OWNER, LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV_Movement_1
# 45 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
	release_end


LilycoveCity_CoveLilyMotel_1F_EventScript_MoveTutor::
# 50 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lock_faceplayer
# 51 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_unset FLAG_MET_LILYCOVE_GRAB_TUTOR, LilycoveCity_CoveLilyMotel_1F_EventScript_MoveTutor_2
LilycoveCity_CoveLilyMotel_1F_EventScript_MoveTutor_1:
# 55 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 56 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_GRAB_MOVE_TUTOR
# 57 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	setvar VAR_0x8006, 0
# 58 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_MoveTutor_2:
# 52 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 53 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	setflag FLAG_MET_LILYCOVE_GRAB_TUTOR
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_MoveTutor_1


LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove::
# 63 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GRAB_MOVE_TUTOR
# 64 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	special ShowScrollableMultichoice
# 65 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 66 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	switch VAR_RESULT
# 67 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	case 0, LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_3
# 68 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	case 1, LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_4
# 69 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	case 2, LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_5
# 70 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	case 3, LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_6
# 71 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	case 4, LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_7
# 72 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	case 5, LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_8
# 73 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	case 6, LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_9
# 74 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_9
LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_1:
# 77 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_ConfirmMoveSelection
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_3:
# 67 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_CRUSH_GRIP
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_1

LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_4:
# 68 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_BURNING_GRASP
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_1

LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_5:
# 69 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_LIGHTNING_GRASP
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_1

LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_6:
# 70 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_GLACIAL_GRASP
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_1

LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_7:
# 71 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_PUTRID_GRASP
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_1

LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_8:
# 72 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_DARK_GRASP
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_1

LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_9:
# 75 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_ExitTutorMoveSelect
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove_1


LilycoveCity_CoveLilyMotel_1F_EventScript_ExitTutorMoveSelect::
# 82 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 83 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


LilycoveCity_CoveLilyMotel_1F_EventScript_ConfirmMoveSelection::
# 88 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 89 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_MoveTutor_Text_0, MSGBOX_YESNO
# 90 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_CoveLilyMotel_1F_EventScript_ConfirmMoveSelection_2
LilycoveCity_CoveLilyMotel_1F_EventScript_ConfirmMoveSelection_1:
	checkitem ITEM_BLUE_SHARD
# 0 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_CoveLilyMotel_1F_EventScript_ConfirmMoveSelection_5
# 110 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 111 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_ExitTutorMoveSelect
	end

LilycoveCity_CoveLilyMotel_1F_EventScript_ConfirmMoveSelection_2:
# 91 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	message LilycoveCity_CoveLilyMotel_1F_EventScript_MoveTutor_Text_0
# 92 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmessage
# 93 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	setvar VAR_0x8006, 1
# 94 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_ChooseGrabMove
	goto LilycoveCity_CoveLilyMotel_1F_EventScript_ConfirmMoveSelection_1

LilycoveCity_CoveLilyMotel_1F_EventScript_ConfirmMoveSelection_5:
# 97 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 98 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 99 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 100 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 101 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitstate
# 102 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_CoveLilyMotel_1F_EventScript_ConfirmMoveSelection_8
# 106 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 107 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	removeitem ITEM_BLUE_SHARD, 1
	release_end

LilycoveCity_CoveLilyMotel_1F_EventScript_ConfirmMoveSelection_8:
# 103 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV_Movement_0:
# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_right
# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lock_look
# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_left
# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	unlock_look
	step_end

# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV_Movement_1:
# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_down
# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_down
# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_up
	step_end

LilycoveCity_CoveLilyMotel_1F_EventScript_MoveTutor_Text_0:
# 52 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "…$"

LilycoveCity_CoveLilyMotel_1F_Text_DeclineTutor::
# 115 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "…$"

LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot::
# 119 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hm, so they doubled the guests by\n"
	.string "using POKéMON as attractions?\p"
	.string "Hm, well, maybe I should make a cute\n"
	.string "POKéMON our inn's mascot.\p"
	.string "I wonder if that will attract more\n"
	.string "guests to stay with us?$"

LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua::
# 130 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, sorry, sorry!\n"
	.string "I was too involved in watching TV!\p"
	.string "Since that TEAM AQUA came to town,\n"
	.string "the tourists have been staying away.$"

LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV::
# 138 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hey, down in front!\n"
	.string "I can't see the TV!$"

LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem::
# 143 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Amazing! You're telling me a POKéMON\n"
	.string "found someone's lost item?\p"
	.string "That's something. If we had some smart\n"
	.string "POKéMON like that…\p"
	.string "We could recover anything that our\n"
	.string "guests mislaid…$"

LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted::
# 154 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, sorry, sorry!\n"
	.string "I was too involved in watching TV!\p"
	.string "I heard that someone busted\n"
	.string "the TEAM AQUA HIDEOUT.\p"
	.string "Thanks to that, we just booked\n"
	.string "a reservation from a big group.\p"
	.string "It was a company called… Uh…\n"
	.string "GAME something…$"

LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar::
# 168 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Amazing! A house-sitting POKéMON\n"
	.string "caught a burglar?\p"
	.string "That's something. If we had a tough\n"
	.string "POKéMON as a security guard…\p"
	.string "We would be able to provide our guests\n"
	.string "with greater safety.$"

LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner::
# 179 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, sorry, sorry!\n"
	.string "I was too involved in watching TV.\p"
	.string "Oh, yes. A big group of guests arrived\n"
	.string "a little while ago.\p"
	.string "They booked in as GAME FREAK,\n"
	.string "so I guess they must make games.\p"
	.string "Uh-oh, I'd better get working on\n"
	.string "their dinner!$"

LilycoveCity_CoveLilyMotel_1F_Text_CrushGripDesc::
# 193 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "A powerful grab\n"
	.string "that can lower the\n"
	.string "foe's Defense.$"

LilycoveCity_CoveLilyMotel_1F_Text_BurningGraspDesc::
# 199 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "A grab with fiery\n"
	.string "hands that can\n"
	.string "cause burn.$"

LilycoveCity_CoveLilyMotel_1F_Text_LightningGraspDesc::
# 205 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "A grab with hands\n"
	.string "of electricity.\n"
	.string "Can paralyze.$"

LilycoveCity_CoveLilyMotel_1F_Text_GlacialGraspDesc::
# 211 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "A grab with icy\n"
	.string "hands that can\n"
	.string "cause frost.$"

LilycoveCity_CoveLilyMotel_1F_Text_PutridGraspDesc::
# 217 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "A grab with toxic\n"
	.string "hands that can\n"
	.string "cause poison.$"

LilycoveCity_CoveLilyMotel_1F_Text_DarkGraspDesc::
# 223 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "A grab with evil\n"
	.string "hands that can\n"
	.string "lower Sp. Def.$"
