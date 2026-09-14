LavaridgeTown_HerbShop_MapScripts::
	.byte 0


LavaridgeTown_HerbShop_EventScript_Clerk::
# 4 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock_faceplayer
# 5 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
# 6 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 7 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_Pokemart
# 8 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 12 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Pokemart:
# 13 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 14 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 15 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 16 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_NONE

LavaridgeTown_HerbShop_EventScript_ExpertM::
# 20 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
	end


LavaridgeTown_HerbShop_EventScript_OldMan::
# 25 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock_faceplayer
# 26 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_OldMan_2
# 30 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
	giveitem ITEM_CLEANSE_TAG
# 0 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_HerbShop_EventScript_OldMan_5
LavaridgeTown_HerbShop_EventScript_OldMan_4:
# 34 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setflag FLAG_RECEIVED_CHARCOAL
	release_end

LavaridgeTown_HerbShop_EventScript_OldMan_2:
# 27 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
	release_end

LavaridgeTown_HerbShop_EventScript_OldMan_5:
# 32 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto LavaridgeTown_HerbShop_EventScript_OldMan_4


LavaridgeTown_HerbShop_EventScript_MoveTutor::
# 39 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock_faceplayer
# 40 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_unset FLAG_MET_LAVARIDGE_WHIP_TUTOR, LavaridgeTown_HerbShop_EventScript_MoveTutor_2
LavaridgeTown_HerbShop_EventScript_MoveTutor_1:
# 44 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 45 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_WHIP_MOVE_TUTOR
# 46 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setvar VAR_0x8006, 0
# 47 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto LavaridgeTown_HerbShop_EventScript_ChooseWhipMove
	end

LavaridgeTown_HerbShop_EventScript_MoveTutor_2:
# 41 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 42 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setflag FLAG_MET_LAVARIDGE_WHIP_TUTOR
	goto LavaridgeTown_HerbShop_EventScript_MoveTutor_1


LavaridgeTown_HerbShop_EventScript_ChooseWhipMove::
# 52 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_WHIP_MOVE_TUTOR
# 53 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	special ShowScrollableMultichoice
# 54 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 55 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	switch VAR_RESULT
# 56 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	case 0, LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_3
# 57 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	case 1, LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_4
# 58 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	case 2, LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_5
# 59 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	case 3, LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_6
# 60 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	case 4, LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_7
# 61 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	case MULTI_B_PRESSED, LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_7
LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_1:
# 64 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto LavaridgeTown_HerbShop_EventScript_ConfirmMoveSelection
	end

LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_3:
# 56 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setvar VAR_0x8005, MOVE_WATER_WHIP
	goto LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_1

LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_4:
# 57 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setvar VAR_0x8005, MOVE_FIRE_LASH
	goto LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_1

LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_5:
# 58 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setvar VAR_0x8005, MOVE_LASH_OUT
	goto LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_1

LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_6:
# 59 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_WHIP
	goto LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_1

LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_7:
# 62 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto LavaridgeTown_HerbShop_EventScript_ExitTutorMoveSelect
	goto LavaridgeTown_HerbShop_EventScript_ChooseWhipMove_1


LavaridgeTown_HerbShop_EventScript_ExitTutorMoveSelect::
# 69 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 70 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


LavaridgeTown_HerbShop_EventScript_ConfirmMoveSelection::
# 75 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 76 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_EventScript_MoveTutor_Text_0, MSGBOX_YESNO
# 77 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_HerbShop_EventScript_ConfirmMoveSelection_2
LavaridgeTown_HerbShop_EventScript_ConfirmMoveSelection_1:
	checkitem ITEM_PEARL
# 0 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LavaridgeTown_HerbShop_EventScript_ConfirmMoveSelection_5
# 97 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 98 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto LavaridgeTown_HerbShop_EventScript_ExitTutorMoveSelect
	end

LavaridgeTown_HerbShop_EventScript_ConfirmMoveSelection_2:
# 78 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_EventScript_MoveTutor_Text_0
# 79 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 80 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setvar VAR_0x8006, 1
# 81 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto LavaridgeTown_HerbShop_EventScript_ChooseWhipMove
	goto LavaridgeTown_HerbShop_EventScript_ConfirmMoveSelection_1

LavaridgeTown_HerbShop_EventScript_ConfirmMoveSelection_5:
# 84 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 85 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	fadescreen FADE_TO_BLACK
# 86 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 87 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 88 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitstate
# 89 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_HerbShop_EventScript_ConfirmMoveSelection_8
# 93 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 94 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	removeitem ITEM_PEARL, 1
	release_end

LavaridgeTown_HerbShop_EventScript_ConfirmMoveSelection_8:
# 90 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


LavaridgeTown_HerbShop_EventScript_MoveTutor_Text_0:
# 41 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "…$"

LavaridgeTown_HerbShop_Text_DeclineTutor::
# 102 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "…$"

LavaridgeTown_HerbShop_Text_WelcomeToHerbShop::
# 106 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Welcome to the HERB SHOP, home of\n"
	.string "effective and inexpensive medicine!$"

LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine::
# 111 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "You've come to look at herbal medicine\n"
	.string "in LAVARIDGE?\p"
	.string "That's rather commendable.\p"
	.string "I like you! Take this!$"

LavaridgeTown_HerbShop_Text_ExplainCharcoal::
# 120 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That CHARCOAL I gave you, it's used\n"
	.string "for making herbal medicine.\p"
	.string "It also does wonders when held by\n"
	.string "a POKéMON.\p"
	.string "It intensifies the power of FIRE-type\n"
	.string "moves.$"

LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike::
# 131 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Herbal medicine works impressively well.\n"
	.string "But your POKéMON will dislike you for it.\l"
	.string "It must be horribly bitter!$"

LavaridgeTown_HerbShop_Text_WaterWhipDesc::
# 137 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "A Water-type lash\n"
	.string "that will always\n"
	.string "cause flinching.$"

LavaridgeTown_HerbShop_Text_FireLashDesc::
# 143 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "A Fire-type lash\n"
	.string "that will always\n"
	.string "cause flinching.$"

LavaridgeTown_HerbShop_Text_LashOutDesc::
# 149 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "A Dark-type lash\n"
	.string "that is stronger\n"
	.string "at low HP.$"

LavaridgeTown_HerbShop_Text_PowerWhipDesc::
# 155 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "A powerful lash\n"
	.string "of a vine that\n"
	.string "exhausts user.$"
