SafariZone_SecretHouse_Frlg_MapScripts::
	.byte 0


SafariZone_SecretHouse_EventScript_Attendant::
# 4 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM03, SafariZone_SecretHouse_EventScript_Attendant_2
# 9 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_CongratsYouveWon
	checkitemspace ITEM_HM03
# 0 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SafariZone_SecretHouse_EventScript_Attendant_5
# 14 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	giveitem_msg SafariZone_SecretHouse_Text_ReceivedHM03FromAttendant, ITEM_HM03
# 15 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_ExplainSurf
# 16 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_HM03
	release_end

SafariZone_SecretHouse_EventScript_Attendant_2:
# 6 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_ExplainSurf
	release_end

SafariZone_SecretHouse_EventScript_Attendant_5:
# 11 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	msgbox SafariZone_SecretHouse_Text_DontHaveRoomForPrize
	release_end


SafariZone_SecretHouse_Text_CongratsYouveWon::
# 20 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "Ah! Finally!\p"
	.string "You're the first person to reach\n"
	.string "the SECRET HOUSE!\p"
	.string "Although I made a campaign\n"
	.string "for our grand opening,\p"
	.string "I was getting worried that no one\n"
	.string "would win our campaign prize.\p"
	.string "Congratulations!\n"
	.string "You have won!$"

SafariZone_SecretHouse_Text_ReceivedHM03FromAttendant::
# 36 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "{PLAYER} received HM03\n"
	.string "from the attendant!$"

SafariZone_SecretHouse_Text_ExplainSurf::
# 41 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "HM03 is SURF.\p"
	.string "POKéMON will be able to ferry you\n"
	.string "across water using it.\p"
	.string "And, this HM isn't disposable, so\n"
	.string "you can use it over and over.\p"
	.string "You're super lucky for winning this\n"
	.string "fabulous prize!$"

SafariZone_SecretHouse_Text_DontHaveRoomForPrize::
# 54 "data/maps/SafariZone_SecretHouse_Frlg/scripts.pory"
	.string "You don't have room for this\n"
	.string "fabulous prize!$"
