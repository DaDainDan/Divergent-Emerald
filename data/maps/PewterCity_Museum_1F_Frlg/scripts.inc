PewterCity_Museum_1F_Frlg_MapScripts::
	.byte 0


PewterCity_Museum_1F_EventScript_Scientist1::
# 4 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_ne PewterCity_Museum_1F_EventScript_Scientist1_2
# 16 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_PleaseEnjoyYourself
	release_end

PewterCity_Museum_1F_EventScript_Scientist1_2:
# 6 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs, MSGBOX_YESNO
# 7 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PewterCity_Museum_1F_EventScript_Scientist1_5
# 10 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberIsFossilizedSap
PewterCity_Museum_1F_EventScript_Scientist1_4:
# 12 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_MUSEUM_SCIENTIST1, Common_Movement_FaceOriginalDirection
# 13 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
	release_end

PewterCity_Museum_1F_EventScript_Scientist1_5:
# 8 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AmberContainsGeneticMatter
	goto PewterCity_Museum_1F_EventScript_Scientist1_4


PewterCity_Museum_1F_EventScript_EntranceTriggerLeft::
# 21 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 22 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 23 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerMid::
# 28 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 29 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 30 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTriggerRight::
# 35 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 36 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 37 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end


PewterCity_Museum_1F_EventScript_EntranceTrigger::
# 42 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 43 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 44 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 45 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	showmoneybox 0, 0
# 46 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Its50YForChildsTicket, MSGBOX_YESNO
# 47 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PewterCity_Museum_1F_EventScript_EntranceTrigger_2
PewterCity_Museum_1F_EventScript_EntranceTrigger_1:
# 50 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ComeAgain
# 51 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 52 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	hidemoneybox
# 53 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 54 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 55 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
	end

PewterCity_Museum_1F_EventScript_EntranceTrigger_2:
# 48 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_EventScript_TryPayForTicket
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger_1


PewterCity_Museum_1F_EventScript_TryPayForTicket::
	checkmoney 50
# 0 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PewterCity_Museum_1F_EventScript_TryPayForTicket_2
# 67 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 68 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 69 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	case 0, PewterCity_Museum_1F_EventScript_TryPayForTicket_7
# 70 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	case 1, PewterCity_Museum_1F_EventScript_TryPayForTicket_8
# 71 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	case 2, PewterCity_Museum_1F_EventScript_TryPayForTicket_9
PewterCity_Museum_1F_EventScript_TryPayForTicket_5:
# 73 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 74 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	playse SE_SHOP
# 75 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	removemoney 50
# 76 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	updatemoneybox
# 77 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitse
# 78 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_Right50YThankYou
# 79 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 1
# 80 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	hidemoneybox
PewterCity_Museum_1F_EventScript_TryPayForTicket_1:
# 82 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
	end

PewterCity_Museum_1F_EventScript_TryPayForTicket_2:
# 61 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveEnoughMoney
# 62 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 63 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	hidemoneybox
# 64 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 65 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
	goto PewterCity_Museum_1F_EventScript_TryPayForTicket_1

PewterCity_Museum_1F_EventScript_TryPayForTicket_7:
# 69 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_EventScript_TryPayForTicket_Movement_0
	goto PewterCity_Museum_1F_EventScript_TryPayForTicket_5

PewterCity_Museum_1F_EventScript_TryPayForTicket_8:
# 70 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_EventScript_TryPayForTicket_Movement_1
	goto PewterCity_Museum_1F_EventScript_TryPayForTicket_5

PewterCity_Museum_1F_EventScript_TryPayForTicket_9:
# 71 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_EventScript_TryPayForTicket_Movement_2
	goto PewterCity_Museum_1F_EventScript_TryPayForTicket_5


PewterCity_Museum_1F_EventScript_Scientist2::
# 87 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_OldMan::
# 92 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_OldAmberScientist::
# 97 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lock_faceplayer
# 98 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_OLD_AMBER, PewterCity_Museum_1F_EventScript_OldAmberScientist_2
# 102 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WantYouToGetAmberExamined
	checkitemspace ITEM_OLD_AMBER
# 0 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PewterCity_Museum_1F_EventScript_OldAmberScientist_5
# 107 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setflag FLAG_GOT_OLD_AMBER
# 108 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	removeobject LOCALID_OLD_AMBER
# 109 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	giveitem_msg PewterCity_Museum_1F_Text_ReceivedOldAmberFromMan, ITEM_OLD_AMBER, 1, MUS_RG_OBTAIN_KEY_ITEM
	release_end

PewterCity_Museum_1F_EventScript_OldAmberScientist_2:
# 99 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_GetOldAmberChecked
	release_end

PewterCity_Museum_1F_EventScript_OldAmberScientist_5:
# 104 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_DontHaveSpaceForThis
	release_end


PewterCity_Museum_1F_EventScript_OldAmber::
# 114 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_BeautifulPieceOfAmber, MSGBOX_NPC
	end


PewterCity_Museum_1F_EventScript_AerodactylFossil::
# 119 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 120 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_AERODACTYL
# 121 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8005, 10
# 122 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8006, 3
# 123 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special OpenMuseumFossilPic
# 124 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AerodactylFossil
# 125 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special CloseMuseumFossilPic
# 126 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
	end


PewterCity_Museum_1F_EventScript_KabutopsFossil::
# 131 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 132 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_KABUTOPS
# 133 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8005, 10
# 134 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_0x8006, 3
# 135 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special OpenMuseumFossilPic
# 136 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_KabutopsFossil
# 137 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	special CloseMuseumFossilPic
# 138 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
	end


# 69 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_TryPayForTicket_Movement_0:
# 69 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_right
# 69 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_right
# 69 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	delay_8
# 69 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	step_right
	step_end

# 70 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_TryPayForTicket_Movement_1:
# 70 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	walk_right
# 70 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	delay_8
# 70 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	step_right
	step_end

# 71 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_TryPayForTicket_Movement_2:
# 71 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	delay_8
# 71 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	step_right
	step_end

PewterCity_Museum_1F_Text_Its50YForChildsTicket::
# 142 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Yes, yes.\n"
	.string "It's ¥50 for a child's ticket.\p"
	.string "Would you like to come in?$"

PewterCity_Museum_1F_Text_ComeAgain::
# 149 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Come again!$"

PewterCity_Museum_1F_Text_Right50YThankYou::
# 153 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Right, ¥50!\n"
	.string "Thank you!$"

PewterCity_Museum_1F_Text_DontHaveEnoughMoney::
# 158 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "You don't have enough money.$"

PewterCity_Museum_1F_Text_PleaseEnjoyYourself::
# 162 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Please enjoy yourself.$"

PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs::
# 166 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "You can't sneak in the back way!\n"
	.string "Nice try, kid, but no.\p"
	.string "Oh, whatever!\n"
	.string "Do you know what AMBER is?$"

PewterCity_Museum_1F_Text_AmberContainsGeneticMatter::
# 174 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "AMBER contains the genetic matter\n"
	.string "of ancient POKéMON.\p"
	.string "There's a LAB somewhere trying to\n"
	.string "resurrect POKéMON from AMBER.$"

PewterCity_Museum_1F_Text_AmberIsFossilizedSap::
# 182 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "AMBER is actually sap, that gooey\n"
	.string "stuff that oozes from trees.\p"
	.string "The ancient sap fossilized over\n"
	.string "time to become rock-hard AMBER.$"

PewterCity_Museum_1F_Text_PleaseGoAround::
# 191 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "あちらへ　おまわりください$"

PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife::
# 195 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "I should be grateful for my long\n"
	.string "life.\p"
	.string "Never did I think I would get to\n"
	.string "see the bones of a dragon!$"

PewterCity_Museum_1F_Text_WantYouToGetAmberExamined::
# 203 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Ssh! Listen, I need to share a\n"
	.string "secret with someone.\p"
	.string "I think that this chunk of AMBER\n"
	.string "contains POKéMON DNA!\p"
	.string "It would be a shattering scientific\n"
	.string "breakthrough if POKéMON could be\l"
	.string "resurrected from it.\p"
	.string "But, my colleagues just ignore\n"
	.string "what I have to say.\p"
	.string "So, I have a favor to ask!\p"
	.string "I want you to get this examined at\n"
	.string "a POKéMON LAB somewhere.$"

PewterCity_Museum_1F_Text_ReceivedOldAmberFromMan::
# 223 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "{PLAYER} received the OLD AMBER\n"
	.string "from the man.$"

PewterCity_Museum_1F_Text_GetOldAmberChecked::
# 228 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Ssh!\n"
	.string "Get the OLD AMBER checked!$"

PewterCity_Museum_1F_Text_DontHaveSpaceForThis::
# 233 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "You don't have space for this.$"

PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit::
# 237 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "We have two fossils of rare,\n"
	.string "prehistoric POKéMON on exhibit.$"

PewterCity_Museum_1F_Text_BeautifulPieceOfAmber::
# 242 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "There is a beautiful piece of\n"
	.string "AMBER in a clear gold color.$"

PewterCity_Museum_1F_Text_AerodactylFossil::
# 247 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "AERODACTYL Fossil\n"
	.string "A primitive and rare POKéMON.$"

PewterCity_Museum_1F_Text_KabutopsFossil::
# 252 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "KABUTOPS Fossil\n"
	.string "A primitive and rare POKéMON.$"
