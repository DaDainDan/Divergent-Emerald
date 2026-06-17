SlateportCity_NameRatersHouse_MapScripts::
	.byte 0


SlateportCity_NameRatersHouse_EventScript_NameRater::
# 4 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname, MSGBOX_YESNO
# 6 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_NameRater_2
SlateportCity_NameRatersHouse_EventScript_NameRater_1:
# 14 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
	end

SlateportCity_NameRatersHouse_EventScript_NameRater_2:
# 7 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
# 8 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	chooseboxmon
# 9 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitstate
# 10 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_ne SlateportCity_NameRatersHouse_EventScript_NameRater_4
	goto SlateportCity_NameRatersHouse_EventScript_NameRater_1

SlateportCity_NameRatersHouse_EventScript_NameRater_4:
# 11 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_RateMonNickname
	goto SlateportCity_NameRatersHouse_EventScript_NameRater_1


SlateportCity_NameRatersHouse_EventScript_DeclineNameRate::
# 19 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
	release_end


SlateportCity_NameRatersHouse_EventScript_RateMonNickname::
# 24 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 25 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_RateMonNickname_2
# 29 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 30 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special IsMonOTIDNotPlayers
# 31 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_RateMonNickname_5
SlateportCity_NameRatersHouse_EventScript_RateMonNickname_4:
# 34 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, MonOTNameNotPlayer
# 35 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 36 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_RateMonNickname_8
SlateportCity_NameRatersHouse_EventScript_RateMonNickname_7:
# 39 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
# 40 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_RateMonNickname_11
# 43 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
SlateportCity_NameRatersHouse_EventScript_RateMonNickname_10:
	end

SlateportCity_NameRatersHouse_EventScript_RateMonNickname_2:
# 26 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
	release_end

SlateportCity_NameRatersHouse_EventScript_RateMonNickname_5:
# 32 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
	goto SlateportCity_NameRatersHouse_EventScript_RateMonNickname_4

SlateportCity_NameRatersHouse_EventScript_RateMonNickname_8:
# 37 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
	goto SlateportCity_NameRatersHouse_EventScript_RateMonNickname_7

SlateportCity_NameRatersHouse_EventScript_RateMonNickname_11:
# 41 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_ChangeNickname
	goto SlateportCity_NameRatersHouse_EventScript_RateMonNickname_10


SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT::
# 49 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MagnificentName, MSGBOX_DEFAULT
	release_end


SlateportCity_NameRatersHouse_EventScript_ChangeNickname::
# 54 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
# 55 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 56 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
# 57 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferMonNickname
# 58 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_ChangeNickname_2
# 62 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
	release_end

SlateportCity_NameRatersHouse_EventScript_ChangeNickname_2:
# 59 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
	release_end


SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname::
# 66 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hi, hi! I'm the NAME RATER!\n"
	.string "I'm the fortune-teller of names!\p"
	.string "I shall be pleased to rate your\n"
	.string "POKéMON's nickname.$"

SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname::
# 74 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Which POKéMON's nickname should\n"
	.string "I critique?$"

SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne::
# 79 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1}, is it? That is\n"
	.string "quite a fine name you bestowed.\p"
	.string "But! What say you, if I were to\n"
	.string "suggest a slightly better name?$"

SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe::
# 87 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Ah, good. Then, what shall the new\n"
	.string "nickname be?$"

SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName::
# 92 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It is a better name than before!\n"
	.string "How fortunate for you!$"

SlateportCity_NameRatersHouse_Text_DoVisitAgain::
# 100 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I see.\n"
	.string "Do come visit again.$"

SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior::
# 105 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It looks no different from before,\n"
	.string "and yet, this is vastly superior!\p"
	.string "How fortunate for you!$"

SlateportCity_NameRatersHouse_Text_MagnificentName::
# 115 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1} it is!\p"
	.string "This is a magnificent nickname!\n"
	.string "It is impeccably beyond reproach!\p"
	.string "You'll do well to cherish your\n"
	.string "{STR_VAR_1} now and beyond.$"

SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg::
# 125 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Now, now.\n"
	.string "That is merely an EGG!$"
