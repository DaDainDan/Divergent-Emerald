FuchsiaCity_WardensHouse_Frlg_MapScripts::
	.byte 0


FuchsiaCity_WardensHouse_EventScript_Warden::
# 4 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM04, FuchsiaCity_WardensHouse_EventScript_Warden_2
# 9 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto_if_set FLAG_HIDE_SAFARI_ZONE_WEST_GOLD_TEETH, FuchsiaCity_WardensHouse_EventScript_Warden_5
FuchsiaCity_WardensHouse_EventScript_Warden_4:
# 12 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_HifFuffHefifoo, MSGBOX_YESNO
# 13 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FuchsiaCity_WardensHouse_EventScript_Warden_8
# 16 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_HeOhayHeHaHoo
FuchsiaCity_WardensHouse_EventScript_Warden_7:
	release_end

FuchsiaCity_WardensHouse_EventScript_Warden_2:
# 6 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_ExplainStrength
	release_end

FuchsiaCity_WardensHouse_EventScript_Warden_5:
# 10 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	goto FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth
	goto FuchsiaCity_WardensHouse_EventScript_Warden_4

FuchsiaCity_WardensHouse_EventScript_Warden_8:
# 14 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_AhHowheeHoHoo
	goto FuchsiaCity_WardensHouse_EventScript_Warden_7


FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth::
# 22 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 23 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 24 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	message FuchsiaCity_WardensHouse_Text_GaveGoldTeethToWarden
# 25 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	waitmessage
# 26 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	waitfanfare
# 27 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_WardenPoppedInHisTeeth
# 28 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
	checkplayergender
# 0 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth_2
# 32 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_ThanksLassieGiveYouSomething
FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth_1:
# 34 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	giveitem_msg FuchsiaCity_WardensHouse_Text_ReceivedHM04FromWarden, ITEM_HM04
# 35 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_HM04
# 36 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	removeitem ITEM_GOLD_TEETH
	release_end

FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth_2:
# 30 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_ThanksSonGiveYouSomething
	goto FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth_1


FuchsiaCity_WardensHouse_EventScript_DisplaySign1::
# 41 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_MonPhotosFossilsOnDisplay, MSGBOX_SIGN
	end


FuchsiaCity_WardensHouse_EventScript_DisplaySign2::
# 46 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	msgbox FuchsiaCity_WardensHouse_Text_OldMonMerchandiseOnDisplay, MSGBOX_SIGN
	end


FuchsiaCity_WardensHouse_Text_HifFuffHefifoo::
# 50 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "WARDEN: Hif fuff hefifoo!\p"
	.string "Ha lof ha feef ee hafahi ho.\n"
	.string "Heff hee fwee!$"

FuchsiaCity_WardensHouse_Text_AhHowheeHoHoo::
# 57 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Ah howhee ho hoo!\n"
	.string "Eef ee hafahi ho!$"

FuchsiaCity_WardensHouse_Text_HeOhayHeHaHoo::
# 62 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Ha?\n"
	.string "He ohay heh ha hoo ee haheh!$"

FuchsiaCity_WardensHouse_Text_GaveGoldTeethToWarden::
# 67 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "{PLAYER} gave the GOLD TEETH\n"
	.string "to the WARDEN.$"

FuchsiaCity_WardensHouse_Text_WardenPoppedInHisTeeth::
# 72 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "The WARDEN popped in his teeth!$"

FuchsiaCity_WardensHouse_Text_ThanksSonGiveYouSomething::
# 76 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "WARDEN: Thanks, son!\n"
	.string "You're a real lifesaver!\p"
	.string "No one could understand a word\n"
	.string "that I said, not a one!\p"
	.string "I was too ashamed to show my face\n"
	.string "around the OFFICE, even.\p"
	.string "Let me give you something for your\n"
	.string "trouble.$"

FuchsiaCity_WardensHouse_Text_ThanksLassieGiveYouSomething::
# 90 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "WARDEN: Thank you, lassie!\n"
	.string "You're a real lifesaver!\p"
	.string "No one could understand a word\n"
	.string "that I said, not a one!\p"
	.string "I was too ashamed to show my face\n"
	.string "around the OFFICE, even.\p"
	.string "Let me give you something for your\n"
	.string "trouble.$"

FuchsiaCity_WardensHouse_Text_ReceivedHM04FromWarden::
# 104 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "{PLAYER} received HM04\n"
	.string "from the WARDEN.$"

FuchsiaCity_WardensHouse_Text_ExplainStrength::
# 109 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "WARDEN: Inside HM04 you'll find\n"
	.string "STRENGTH.\p"
	.string "It lets POKéMON move boulders when\n"
	.string "you're outside of battle.\p"
	.string "Oh yes, did you find the SECRET\n"
	.string "HOUSE in the SAFARI ZONE?$"

FuchsiaCity_WardensHouse_Text_YouHaveTooMuchStuff::
# 121 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "なんや　にもつ\n"
	.string "いっぱいやんけ！$"

FuchsiaCity_WardensHouse_Text_MonPhotosFossilsOnDisplay::
# 126 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "POKéMON photos and fossils are on\n"
	.string "display.$"

FuchsiaCity_WardensHouse_Text_OldMonMerchandiseOnDisplay::
# 131 "data/maps/FuchsiaCity_WardensHouse_Frlg/scripts.pory"
	.string "Old POKéMON merchandise is on\n"
	.string "display.$"
