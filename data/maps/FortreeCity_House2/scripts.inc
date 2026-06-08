FortreeCity_House2_MapScripts::
	.byte 0


FortreeCity_House2_EventScript_HiddenPowerGiver::
# 4 "data/maps/FortreeCity_House2/scripts.pory"
	lock_faceplayer
# 5 "data/maps/FortreeCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_HIDDEN_POWER, FortreeCity_House2_EventScript_HiddenPowerGiver_2
# 9 "data/maps/FortreeCity_House2/scripts.pory"
	goto_if_unset FLAG_MET_HIDDEN_POWER_GIVER, FortreeCity_House2_EventScript_HiddenPowerGiver_5
FortreeCity_House2_EventScript_HiddenPowerGiver_4:
# 13 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CoinInWhichHand, MSGBOX_DEFAULT
# 14 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 15 "data/maps/FortreeCity_House2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FortreeCity_House2_EventScript_HiddenPowerGiver_8
FortreeCity_House2_EventScript_HiddenPowerGiver_7:
# 18 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand, MSGBOX_DEFAULT
# 19 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 20 "data/maps/FortreeCity_House2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FortreeCity_House2_EventScript_HiddenPowerGiver_11
FortreeCity_House2_EventScript_HiddenPowerGiver_10:
# 23 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand2, MSGBOX_DEFAULT
# 24 "data/maps/FortreeCity_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 25 "data/maps/FortreeCity_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FortreeCity_House2_EventScript_HiddenPowerGiver_14
FortreeCity_House2_EventScript_HiddenPowerGiver_13:
# 28 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_YourHiddenPowerHasAwoken, MSGBOX_DEFAULT
	giveitem ITEM_TM_HIDDEN_POWER
# 0 "data/maps/FortreeCity_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_House2_EventScript_HiddenPowerGiver_17
FortreeCity_House2_EventScript_HiddenPowerGiver_16:
# 32 "data/maps/FortreeCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
# 33 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
	release_end

FortreeCity_House2_EventScript_HiddenPowerGiver_2:
# 6 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
	release_end

FortreeCity_House2_EventScript_HiddenPowerGiver_5:
# 10 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_HiddenPowersArousedByNature, MSGBOX_DEFAULT
# 11 "data/maps/FortreeCity_House2/scripts.pory"
	setflag FLAG_MET_HIDDEN_POWER_GIVER
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_4

FortreeCity_House2_EventScript_HiddenPowerGiver_8:
# 16 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_WrongGuess
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_7

FortreeCity_House2_EventScript_HiddenPowerGiver_11:
# 21 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_WrongGuess
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_10

FortreeCity_House2_EventScript_HiddenPowerGiver_14:
# 26 "data/maps/FortreeCity_House2/scripts.pory"
	goto FortreeCity_House2_EventScript_WrongGuess
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_13

FortreeCity_House2_EventScript_HiddenPowerGiver_17:
# 30 "data/maps/FortreeCity_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto FortreeCity_House2_EventScript_HiddenPowerGiver_16


FortreeCity_House2_EventScript_WrongGuess::
# 38 "data/maps/FortreeCity_House2/scripts.pory"
	msgbox FortreeCity_House2_Text_YouGuessedWrong, MSGBOX_DEFAULT
	release_end


FortreeCity_House2_Text_HiddenPowersArousedByNature::
# 42 "data/maps/FortreeCity_House2/scripts.pory"
	.string "People… POKéMON…\p"
	.string "Their hidden powers are aroused by\n"
	.string "living in natural environments…$"

FortreeCity_House2_Text_CoinInWhichHand::
# 49 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Let this old woman see if your hidden\n"
	.string "power has awoken…\p"
	.string "I hold a coin in my hand.\p"
	.string "Now, tell me, have I palmed it in\n"
	.string "the right hand? Or in the left?$"

FortreeCity_House2_Text_CorrectTryAgainWhichHand::
# 59 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Yes, correct!\p"
	.string "We shall try again.\p"
	.string "In which hand have I palmed the coin?\n"
	.string "The right or left?$"

FortreeCity_House2_Text_CorrectTryAgainWhichHand2::
# 68 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Yes, correct!\p"
	.string "We shall try again.\p"
	.string "In which hand have I palmed the coin?\n"
	.string "The right or left?$"

FortreeCity_House2_Text_YourHiddenPowerHasAwoken::
# 77 "data/maps/FortreeCity_House2/scripts.pory"
	.string "Oh! Splendid!\n"
	.string "Your hidden power has awoken!\p"
	.string "Here, take this and awaken the hidden\n"
	.string "power of your POKéMON.$"

FortreeCity_House2_Text_ExplainHiddenPower::
# 85 "data/maps/FortreeCity_House2/scripts.pory"
	.string "HIDDEN POWER is a move that changes\n"
	.string "with the POKéMON.$"

FortreeCity_House2_Text_YouGuessedWrong::
# 90 "data/maps/FortreeCity_House2/scripts.pory"
	.string "No, too bad.\n"
	.string "You guessed wrong.$"
