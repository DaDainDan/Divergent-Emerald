PetalburgCity_Dojo_1F_Right_MapScripts::
	.byte 0


PetalburgCity_Dojo_1F_Right_EventScript_MoveTutor::
# 4 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	lock_faceplayer
# 5 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	goto_if_unset FLAG_MET_DOJO_FIGHTING_TUTOR, PetalburgCity_Dojo_1F_Right_EventScript_MoveTutor_2
PetalburgCity_Dojo_1F_Right_EventScript_MoveTutor_1:
# 9 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	msgbox PetalburgCity_Dojo_1F_Right_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_PUNCH_KICK_MOVE_TUTOR
# 11 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	setvar VAR_0x8006, 0
# 12 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	goto PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove
	end

PetalburgCity_Dojo_1F_Right_EventScript_MoveTutor_2:
# 6 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	msgbox PetalburgCity_Dojo_1F_Right_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 7 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	setflag FLAG_MET_DOJO_FIGHTING_TUTOR
	goto PetalburgCity_Dojo_1F_Right_EventScript_MoveTutor_1


PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove::
# 17 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_PUNCH_KICK_MOVE_TUTOR
# 18 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	special ShowScrollableMultichoice
# 19 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 20 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	case 0, PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_3
# 22 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	case 1, PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_4
# 23 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	case 2, PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_5
# 24 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	case 3, PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_6
# 25 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	case 4, PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_7
# 26 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	case 5, PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_8
# 27 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	case 6, PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_9
# 28 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	case MULTI_B_PRESSED, PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_9
PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_1:
# 31 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	goto PetalburgCity_Dojo_1F_Right_EventScript_ConfirmMoveSelection
	end

PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_3:
# 21 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_1

PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_4:
# 22 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_1

PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_5:
# 23 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_1

PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_6:
# 24 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	setvar VAR_0x8005, MOVE_SHADOW_PUNCH
	goto PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_1

PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_7:
# 25 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	setvar VAR_0x8005, MOVE_BLAZE_KICK
	goto PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_1

PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_8:
# 26 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	setvar VAR_0x8005, MOVE_CIRCUIT_KICKS
	goto PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_1

PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_9:
# 29 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	goto PetalburgCity_Dojo_1F_Right_EventScript_ExitTutorMoveSelect
	goto PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove_1


PetalburgCity_Dojo_1F_Right_EventScript_ExitTutorMoveSelect::
# 36 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 37 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	msgbox PetalburgCity_Dojo_1F_Right_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


PetalburgCity_Dojo_1F_Right_EventScript_ConfirmMoveSelection::
# 42 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 43 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	msgbox PetalburgCity_Dojo_1F_Right_EventScript_MoveTutor_Text_0, MSGBOX_YESNO
# 44 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PetalburgCity_Dojo_1F_Right_EventScript_ConfirmMoveSelection_2
PetalburgCity_Dojo_1F_Right_EventScript_ConfirmMoveSelection_1:
	checkitem ITEM_YELLOW_SHARD
# 0 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgCity_Dojo_1F_Right_EventScript_ConfirmMoveSelection_5
# 64 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	msgbox PetalburgCity_Dojo_1F_Right_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 65 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	goto PetalburgCity_Dojo_1F_Right_EventScript_ExitTutorMoveSelect
	end

PetalburgCity_Dojo_1F_Right_EventScript_ConfirmMoveSelection_2:
# 45 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	message PetalburgCity_Dojo_1F_Right_EventScript_MoveTutor_Text_0
# 46 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	waitmessage
# 47 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	setvar VAR_0x8006, 1
# 48 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	goto PetalburgCity_Dojo_1F_Right_EventScript_ChoosePunchKickMove
	goto PetalburgCity_Dojo_1F_Right_EventScript_ConfirmMoveSelection_1

PetalburgCity_Dojo_1F_Right_EventScript_ConfirmMoveSelection_5:
# 51 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	msgbox PetalburgCity_Dojo_1F_Right_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 52 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 54 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 55 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	waitstate
# 56 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgCity_Dojo_1F_Right_EventScript_ConfirmMoveSelection_8
# 60 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	msgbox PetalburgCity_Dojo_1F_Right_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 61 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	removeitem ITEM_YELLOW_SHARD, 1
	release_end

PetalburgCity_Dojo_1F_Right_EventScript_ConfirmMoveSelection_8:
# 57 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	msgbox PetalburgCity_Dojo_1F_Right_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


PetalburgCity_Dojo_1F_Right_EventScript_MoveTutor_Text_0:
# 6 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	.string "…$"

PetalburgCity_Dojo_1F_Right_Text_DeclineTutor::
# 69 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	.string "…$"

PetalburgCity_Dojo_1F_Right_Text_FirePunchDesc::
# 73 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	.string "A punch with a\n"
	.string "chance to burn\n"
	.string "the foe.$"

PetalburgCity_Dojo_1F_Right_Text_IcePunchDesc::
# 79 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	.string "A punch that can\n"
	.string "can inflict\n"
	.string "frostbite.$"

PetalburgCity_Dojo_1F_Right_Text_ThunderPunchDesc::
# 85 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	.string "A punch that can\n"
	.string "can inflict\n"
	.string "paralysis.$"

PetalburgCity_Dojo_1F_Right_Text_ShadowPunchDesc::
# 91 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	.string "A shadowy punch\n"
	.string "that cannot be\n"
	.string "avoided.$"

PetalburgCity_Dojo_1F_Right_Text_BlazeKickDesc::
# 97 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	.string "A kick with a\n"
	.string "chance to burn\n"
	.string "the foe.$"

PetalburgCity_Dojo_1F_Right_Text_CircuitKicksDesc::
# 103 "data/maps/PetalburgCity_Dojo_1F_Right/scripts.pory"
	.string "A kick that can\n"
	.string "can inflict\n"
	.string "paralysis.$"
