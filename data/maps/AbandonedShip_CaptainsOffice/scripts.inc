AbandonedShip_CaptainsOffice_MapScripts::
	.byte 0


AbandonedShip_CaptainsOffice_EventScript_CaptSternAide::
# 4 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lock_faceplayer
# 5 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_unset FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_8
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_6:
# 8 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_3
# 8 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER, AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_3
# 12 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner, MSGBOX_DEFAULT
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_1:
	release_end

AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_2:
# 6 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner, MSGBOX_DEFAULT
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_1

AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_3:
# 9 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus, MSGBOX_DEFAULT
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_1

AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_8:
	checkitem ITEM_SCANNER
# 0 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_2
	goto AbandonedShip_CaptainsOffice_EventScript_CaptSternAide_6


AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner::
# 17 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "I'm investigating this ship on behalf\n"
	.string "of CAPT. STERN.\l"
	.string "He also asked me to find a SCANNER,\l"
	.string "but I haven't had any success…$"

AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner::
# 24 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Oh! That's a SCANNER!\n"
	.string "Listen, can I get you to deliver that\l"
	.string "to CAPT. STERN?\l"
	.string "I want to investigate this ship a\l"
	.string "little more.$"

AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus::
# 32 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "This ship is called S.S. CACTUS.\n"
	.string "It seems to be from an earlier era.$"
