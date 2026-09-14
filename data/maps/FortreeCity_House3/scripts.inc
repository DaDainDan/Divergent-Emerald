FortreeCity_House3_MapScripts::
	.byte 0


FortreeCity_House3_EventScript_Maniac::
# 4 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_MetStevenHadAmazingPokemon, MSGBOX_NPC
	end


FortreeCity_House3_EventScript_SchoolKidM::
	specialvar VAR_RESULT, IsShelmetOrKarrablastInParty
# 0 "data/maps/FortreeCity_House3/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FortreeCity_House3_EventScript_SchoolKidM_2
FortreeCity_House3_EventScript_SchoolKidM_1:
# 14 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_OhYouHavePokedex, MSGBOX_NPC
	end

FortreeCity_House3_EventScript_SchoolKidM_2:
# 10 "data/maps/FortreeCity_House3/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SHELMET_KARRABLAST, FortreeCity_House3_EventScript_SchoolKidM_4
	goto FortreeCity_House3_EventScript_SchoolKidM_1

FortreeCity_House3_EventScript_SchoolKidM_4:
# 11 "data/maps/FortreeCity_House3/scripts.pory"
	goto FortreeCity_House3_EventScript_ReceiveBugMon
	goto FortreeCity_House3_EventScript_SchoolKidM_1


FortreeCity_House3_EventScript_ReceiveBugMon::
# 19 "data/maps/FortreeCity_House3/scripts.pory"
	lock_faceplayer
# 20 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
# 21 "data/maps/FortreeCity_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 22 "data/maps/FortreeCity_House3/scripts.pory"
	copyvar VAR_TEMP_TRANSFERRED_SPECIES, VAR_0x8009
	givemon VAR_0x8009, 30
# 0 "data/maps/FortreeCity_House3/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq FortreeCity_House3_EventScript_ReceiveBugMon_2
FortreeCity_House3_EventScript_ReceiveBugMon_1:
# 26 "data/maps/FortreeCity_House3/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 27 "data/maps/FortreeCity_House3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 28 "data/maps/FortreeCity_House3/scripts.pory"
	message FortreeCity_House3_Text_PlayerReceivedBugMon
# 29 "data/maps/FortreeCity_House3/scripts.pory"
	waitmessage
# 30 "data/maps/FortreeCity_House3/scripts.pory"
	waitfanfare
# 31 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 32 "data/maps/FortreeCity_House3/scripts.pory"
	switch VAR_RESULT
# 33 "data/maps/FortreeCity_House3/scripts.pory"
	case MON_GIVEN_TO_PARTY, FortreeCity_House3_EventScript_ReceiveBugMon_6
# 38 "data/maps/FortreeCity_House3/scripts.pory"
	case MON_GIVEN_TO_PC, FortreeCity_House3_EventScript_ReceiveBugMon_7
FortreeCity_House3_EventScript_ReceiveBugMon_4:
# 44 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
# 45 "data/maps/FortreeCity_House3/scripts.pory"
	setflag FLAG_RECEIVED_SHELMET_KARRABLAST
	release_end

FortreeCity_House3_EventScript_ReceiveBugMon_2:
# 24 "data/maps/FortreeCity_House3/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto FortreeCity_House3_EventScript_ReceiveBugMon_1

FortreeCity_House3_EventScript_ReceiveBugMon_6:
# 34 "data/maps/FortreeCity_House3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FortreeCity_House3_EventScript_ReceiveBugMon_8
	goto FortreeCity_House3_EventScript_ReceiveBugMon_4

FortreeCity_House3_EventScript_ReceiveBugMon_7:
# 39 "data/maps/FortreeCity_House3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FortreeCity_House3_EventScript_ReceiveBugMon_11
FortreeCity_House3_EventScript_ReceiveBugMon_10:
# 42 "data/maps/FortreeCity_House3/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto FortreeCity_House3_EventScript_ReceiveBugMon_4

FortreeCity_House3_EventScript_ReceiveBugMon_8:
# 35 "data/maps/FortreeCity_House3/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 36 "data/maps/FortreeCity_House3/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto FortreeCity_House3_EventScript_ReceiveBugMon_4

FortreeCity_House3_EventScript_ReceiveBugMon_11:
# 40 "data/maps/FortreeCity_House3/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto FortreeCity_House3_EventScript_ReceiveBugMon_10


FortreeCity_House3_Text_MetStevenHadAmazingPokemon::
# 49 "data/maps/FortreeCity_House3/scripts.pory"
	.string "While speaking about POKéDEXES,\n"
	.string "I remembered something.\p"
	.string "I met this TRAINER, STEVEN, when\n"
	.string "I was searching for rare stones.\p"
	.string "Hoo, boy, he had some amazing POKéMON\n"
	.string "with him.\p"
	.string "They weren't just rare, they were\n"
	.string "trained to terrifying extremes!\p"
	.string "He might even be stronger than the\n"
	.string "GYM LEADER in this town…$"

FortreeCity_House3_Text_OhYouHavePokedex::
# 66 "data/maps/FortreeCity_House3/scripts.pory"
	.string "What's that thing you have there?\p"
	.string "… … … … … …\p"
	.string "Oh, it's called a POKéDEX?\n"
	.string "It's really awesome!$"

FortreeCity_House3_Text_ThanksPleaseTakePokemon::
# 75 "data/maps/FortreeCity_House3/scripts.pory"
	.string "Thanks!\n"
	.string "Thanks to you, we're safe!\p"
	.string "It might be an odd way of thanking you,\n"
	.string "but take this POKéMON.$"

FortreeCity_House3_Text_PlayerReceivedBugMon::
# 83 "data/maps/FortreeCity_House3/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"

FortreeCity_House3_Text_PokemonChangesWithWeather::
# 87 "data/maps/FortreeCity_House3/scripts.pory"
	.string "That POKéMON changes shape according\n"
	.string "to the weather conditions.\p"
	.string "There're plenty of them in the\n"
	.string "INSTITUTE--go ahead and take it.$"
