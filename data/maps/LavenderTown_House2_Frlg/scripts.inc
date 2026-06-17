LavenderTown_House2_Frlg_MapScripts::
	.byte 0


LavenderTown_House2_EventScript_NameRater::
# 4 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_WantMeToRateNicknames, MSGBOX_YESNO
# 6 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LavenderTown_House2_EventScript_NameRater_2
LavenderTown_House2_EventScript_NameRater_1:
# 13 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_DontRateNickname
	end

LavenderTown_House2_EventScript_NameRater_2:
# 7 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_CritiqueWhichMonsNickname
# 8 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special ChoosePartyMon
# 9 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_lt LavenderTown_House2_EventScript_NameRater_4
	goto LavenderTown_House2_EventScript_NameRater_1

LavenderTown_House2_EventScript_NameRater_4:
# 10 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_CheckCanRateMon
	goto LavenderTown_House2_EventScript_NameRater_1


LavenderTown_House2_EventScript_DontRateNickname::
# 18 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_ISeeComeVisitAgain
	release_end


LavenderTown_House2_EventScript_CheckCanRateMon::
# 23 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 24 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq LavenderTown_House2_EventScript_CheckCanRateMon_2
# 28 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special BufferMonNickname
# 29 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special IsMonOTIDNotPlayers
# 30 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LavenderTown_House2_EventScript_CheckCanRateMon_5
LavenderTown_House2_EventScript_CheckCanRateMon_4:
# 33 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 34 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special BufferMonNickname
# 35 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LavenderTown_House2_EventScript_CheckCanRateMon_8
LavenderTown_House2_EventScript_CheckCanRateMon_7:
# 38 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_GiveItANicerName, MSGBOX_YESNO
# 39 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LavenderTown_House2_EventScript_CheckCanRateMon_11
# 51 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_DontRateNickname
	end

LavenderTown_House2_EventScript_CheckCanRateMon_2:
# 25 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_ThatIsMerelyAnEgg
	release_end

LavenderTown_House2_EventScript_CheckCanRateMon_5:
# 31 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_CantNicknameTradeMon
	goto LavenderTown_House2_EventScript_CheckCanRateMon_4

LavenderTown_House2_EventScript_CheckCanRateMon_8:
# 36 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	goto LavenderTown_House2_EventScript_CantNicknameTradeMon
	goto LavenderTown_House2_EventScript_CheckCanRateMon_7

LavenderTown_House2_EventScript_CheckCanRateMon_11:
# 40 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_WhatShallNewNicknameBe
# 41 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 42 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 43 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	special BufferMonNickname
# 44 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LavenderTown_House2_EventScript_CheckCanRateMon_14
# 48 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsSameName
	release_end

LavenderTown_House2_EventScript_CheckCanRateMon_14:
# 45 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsName
	release_end


LavenderTown_House2_EventScript_CantNicknameTradeMon::
# 56 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	msgbox LavenderTown_House2_Text_TrulyImpeccableName
	release_end


LavenderTown_House2_Text_WantMeToRateNicknames::
# 60 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Hello, hello!\n"
	.string "I am the official NAME RATER!\p"
	.string "Want me to rate the nicknames of\n"
	.string "your POKéMON?$"

LavenderTown_House2_Text_CritiqueWhichMonsNickname::
# 68 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Which POKéMON's nickname should\n"
	.string "I critique?$"

LavenderTown_House2_Text_GiveItANicerName::
# 73 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "{STR_VAR_1}, is it?\n"
	.string "That is a decent nickname!\p"
	.string "But, would you like me to give it\n"
	.string "a nicer name?\p"
	.string "How about it?$"

LavenderTown_House2_Text_WhatShallNewNicknameBe::
# 83 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Ah, good. Then, what shall the new\n"
	.string "nickname be?$"

LavenderTown_House2_Text_FromNowOnShallBeKnownAsName::
# 88 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It is a better name than before!\n"
	.string "How fortunate for you!$"

LavenderTown_House2_Text_ISeeComeVisitAgain::
# 96 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "I see.\n"
	.string "Do come visit again.$"

LavenderTown_House2_Text_FromNowOnShallBeKnownAsSameName::
# 101 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It looks no different from before,\n"
	.string "and yet, this is vastly superior!\p"
	.string "How fortunate for you!$"

LavenderTown_House2_Text_TrulyImpeccableName::
# 111 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "{STR_VAR_1}, is it?\n"
	.string "That is a truly impeccable name!\p"
	.string "Take good care of {STR_VAR_1}!$"

LavenderTown_House2_Text_ThatIsMerelyAnEgg::
# 118 "data/maps/LavenderTown_House2_Frlg/scripts.pory"
	.string "Now, now.\n"
	.string "That is merely an EGG!$"
