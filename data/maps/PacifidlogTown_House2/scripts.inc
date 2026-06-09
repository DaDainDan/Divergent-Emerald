PacifidlogTown_House2_MapScripts::
	.byte 0


PacifidlogTown_House2_EventScript_FanClubYoungerBrother::
# 4 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock_faceplayer
# 5 "data/maps/PacifidlogTown_House2/scripts.pory"
	dotimebasedevents
# 6 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK, PacifidlogTown_House2_EventScript_FanClubYoungerBrother_2
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_1:
# 16 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto_if_unset FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_FanClubYoungerBrother_5
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_4:
# 19 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
# 20 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_MET_FANCLUB_YOUNGER_BROTHER
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 0 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FRIENDSHIP_150_TO_199
	goto_if_ge PacifidlogTown_House2_EventScript_FanClubYoungerBrother_11
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 0 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FRIENDSHIP_50_TO_99
	goto_if_ge PacifidlogTown_House2_EventScript_FanClubYoungerBrother_12
# 32 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ViciousPokemonTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_FRUSTRATION
# 0 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_House2_EventScript_FanClubYoungerBrother_18
PacifidlogTown_House2_EventScript_FanClubYoungerBrother_10:
# 37 "data/maps/PacifidlogTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
# 38 "data/maps/PacifidlogTown_House2/scripts.pory"
	special SetPacifidlogTMReceivedDay
# 39 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ExplainReturnFrustration, MSGBOX_DEFAULT
	release_end

PacifidlogTown_House2_EventScript_FanClubYoungerBrother_2:
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 0 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_House2_EventScript_FanClubYoungerBrother_7
# 10 "data/maps/PacifidlogTown_House2/scripts.pory"
	specialvar VAR_RESULT, GetDaysUntilPacifidlogTMAvailable
# 11 "data/maps/PacifidlogTown_House2/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 12 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_GetGoodTMInXDays, MSGBOX_DEFAULT
	release_end

PacifidlogTown_House2_EventScript_FanClubYoungerBrother_5:
# 17 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation, MSGBOX_DEFAULT
	goto PacifidlogTown_House2_EventScript_FanClubYoungerBrother_4

PacifidlogTown_House2_EventScript_FanClubYoungerBrother_7:
# 8 "data/maps/PacifidlogTown_House2/scripts.pory"
	clearflag FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK
	goto PacifidlogTown_House2_EventScript_FanClubYoungerBrother_1

PacifidlogTown_House2_EventScript_FanClubYoungerBrother_11:
# 22 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_AdoringPokemonTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_RETURN
# 0 "data/maps/PacifidlogTown_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PacifidlogTown_House2_EventScript_FanClubYoungerBrother_16
	goto PacifidlogTown_House2_EventScript_FanClubYoungerBrother_10

PacifidlogTown_House2_EventScript_FanClubYoungerBrother_12:
# 28 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_PutInSomeMoreEffort, MSGBOX_DEFAULT
	release_end

PacifidlogTown_House2_EventScript_FanClubYoungerBrother_16:
# 24 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto PacifidlogTown_House2_EventScript_FanClubYoungerBrother_10

PacifidlogTown_House2_EventScript_FanClubYoungerBrother_18:
# 34 "data/maps/PacifidlogTown_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto PacifidlogTown_House2_EventScript_FanClubYoungerBrother_10


PacifidlogTown_House2_EventScript_HappyAzurill::
# 44 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock_faceplayer
# 45 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 46 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 47 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rurii, MSGBOX_DEFAULT
# 48 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 49 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_VeryFriendlyWithTrainer, MSGBOX_DEFAULT
	release_end


PacifidlogTown_House2_EventScript_UnhappyAzurill::
# 54 "data/maps/PacifidlogTown_House2/scripts.pory"
	lock_faceplayer
# 55 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitse
# 56 "data/maps/PacifidlogTown_House2/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_ENCOUNTER
# 57 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_Rururi, MSGBOX_DEFAULT
# 58 "data/maps/PacifidlogTown_House2/scripts.pory"
	waitmoncry
# 59 "data/maps/PacifidlogTown_House2/scripts.pory"
	msgbox PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch, MSGBOX_DEFAULT
	release_end


PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation::
# 63 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Er-hem!\p"
	.string "I am the POKéMON FAN CLUB's most\n"
	.string "important person, the CHAIRMAN's\l"
	.string "younger brother.\p"
	.string "I'm here enjoying my vacation with\n"
	.string "POKéMON, yes, indeed.$"

PacifidlogTown_House2_Text_AhYourPokemon::
# 74 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Ah!\n"
	.string "Your POKéMON…$"

PacifidlogTown_House2_Text_AdoringPokemonTakeThis::
# 79 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It clearly likes you very much.\p"
	.string "A POKéMON that adoring and adorable\n"
	.string "deserves a TM like this, no?$"

PacifidlogTown_House2_Text_PutInSomeMoreEffort::
# 86 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Hmm…\n"
	.string "It's not bad, but it's also not good.\p"
	.string "You, as the TRAINER, need to put in\n"
	.string "some more effort.$"

PacifidlogTown_House2_Text_ViciousPokemonTakeThis::
# 94 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It has a vicious look to it.\p"
	.string "A frightening POKéMON like that\n"
	.string "deserves a TM like this.$"

PacifidlogTown_House2_Text_ExplainReturnFrustration::
# 101 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "If a POKéMON likes you a lot, RETURN's\n"
	.string "power is enhanced.\p"
	.string "If it doesn't like you, FRUSTRATION's\n"
	.string "power goes up.$"

PacifidlogTown_House2_Text_GetGoodTMInXDays::
# 109 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "Oh, yes. In about {STR_VAR_1} or so days,\n"
	.string "I should be getting a good TM or two.\p"
	.string "You should come see me then.\n"
	.string "I'll give you a TM that's suitable for\l"
	.string "your POKéMON.$"

PacifidlogTown_House2_Text_Rurii::
# 118 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "AZURILL: Rurii.$"

PacifidlogTown_House2_Text_VeryFriendlyWithTrainer::
# 122 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It appears to be very friendly with the\n"
	.string "TRAINER.$"

PacifidlogTown_House2_Text_Rururi::
# 127 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "AZURILL: Rururi!$"

PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch::
# 131 "data/maps/PacifidlogTown_House2/scripts.pory"
	.string "It doesn't appear to like the TRAINER\n"
	.string "very much.$"
