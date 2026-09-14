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


SlateportCity_NameRatersHouse_EventScript_MoveTutor::
# 67 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	lock_faceplayer
# 68 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto_if_unset FLAG_MET_SLATEPORT_SWAP_TUTOR, SlateportCity_NameRatersHouse_EventScript_MoveTutor_2
SlateportCity_NameRatersHouse_EventScript_MoveTutor_1:
# 72 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_ReadyToLearn, MSGBOX_DEFAULT
# 73 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_SWAP_MOVE_TUTOR
# 74 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	setvar VAR_0x8006, 0
# 75 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove
	end

SlateportCity_NameRatersHouse_EventScript_MoveTutor_2:
# 69 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_SwapMasterIntro, MSGBOX_DEFAULT
# 70 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	setflag FLAG_MET_SLATEPORT_SWAP_TUTOR
	goto SlateportCity_NameRatersHouse_EventScript_MoveTutor_1


SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove::
# 80 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_SWAP_MOVE_TUTOR
# 81 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special ShowScrollableMultichoice
# 82 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 83 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	switch VAR_RESULT
# 84 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	case 0, SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_3
# 85 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	case 1, SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_4
# 86 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	case 2, SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_5
# 87 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	case 3, SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_6
# 88 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	case 4, SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_7
# 89 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	case 5, SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_8
# 90 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_8
SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_1:
# 93 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection
	end

SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_3:
# 84 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SKILL_SWAP
	goto SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_1

SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_4:
# 85 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_SWAP
	goto SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_1

SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_5:
# 86 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_GUARD_SWAP
	goto SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_1

SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_6:
# 87 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SPEED_SWAP
	goto SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_1

SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_7:
# 88 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_POWER_TRICK
	goto SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_1

SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_8:
# 91 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_ExitTutorMoveSelect
	goto SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove_1


SlateportCity_NameRatersHouse_EventScript_ExitTutorMoveSelect::
# 98 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 99 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection::
# 104 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 105 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_MustHaveScales, MSGBOX_YESNO
# 106 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection_2
SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection_1:
	checkitem ITEM_HEART_SCALE
# 0 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection_5
# 128 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_AreYouHeartless, MSGBOX_DEFAULT
# 129 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_ExitTutorMoveSelect
	end

SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection_2:
# 107 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	message SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection_Text_0
# 109 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	waitmessage
# 110 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	setvar VAR_0x8006, 1
# 111 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	goto SlateportCity_NameRatersHouse_EventScript_ChooseSwapMove
	goto SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection_1

SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection_5:
# 114 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection_Text_1, MSGBOX_DEFAULT
# 116 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 117 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 118 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 119 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection_8
# 123 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection_Text_2, MSGBOX_DEFAULT
# 125 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE, 1
	release_end

SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection_8:
# 120 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	msgbox SlateportCity_NameRatersHouse_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection_Text_0:
# 107 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Take another gander.\n"
	.string "I promise I won't pander.$"

SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection_Text_1:
# 114 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Pick one of six, then.\n"
	.string "Which one will it be?$"

SlateportCity_NameRatersHouse_EventScript_ConfirmMoveSelection_Text_2:
# 123 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Your HEART is now mine.\n"
	.string "Bring me more, unless you're a bore.$"

SlateportCity_NameRatersHouse_Text_SwapMasterIntro::
# 133 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Oh! Who are you?\p"
	.string "Are you even a “you”?\n"
	.string "Or are you a “they”?\p"
	.string "How about a “me”?\p"
	.string "I'm fine, thanks.\n"
	.string "Or maybe I'm not.\p"
	.string "If I open my mind, I can be anything\n"
	.string "and everything, you see.\p"
	.string "If you give me your HEART,\n"
	.string "I can make YOU just like ME!$"

SlateportCity_NameRatersHouse_Text_ReadyToLearn::
# 151 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Ready to learn my shapeshifting ways?\p"
	.string "I'm ready when thou art.\p"
	.string "Which power would you like me to impart,\n"
	.string "in part?$"

SlateportCity_NameRatersHouse_Text_MustHaveScales::
# 160 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "To be a shapeshifter, you must have\n"
	.string "SCALES like a lizard.\p"
	.string "Remember when I asked you to open your\n"
	.string "HEART, miss-ter?\p"
	.string "Well, do you have the supply, small fry?$"

SlateportCity_NameRatersHouse_Text_AreYouHeartless::
# 170 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Are truly HEARTless or maybe you \n"
	.string "just hate me?\p"
	.string "Perhaps it's because you… \n"
	.string "ain't… me.$"

SlateportCity_NameRatersHouse_Text_DeclineTutor::
# 178 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Is there no desire to be different\n"
	.string "in “there”?\p"
	.string "Please care. \n"
	.string "Your lack of humanity gives me a scare.$"

SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname::
# 186 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hi, hi! I'm the NAME RATER!\n"
	.string "I'm the fortune-teller of names!\p"
	.string "I shall be pleased to rate your\n"
	.string "POKéMON's nickname.$"

SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname::
# 194 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Which POKéMON's nickname should\n"
	.string "I critique?$"

SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne::
# 199 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1}, is it? That is\n"
	.string "quite a fine name you bestowed.\p"
	.string "But! What say you, if I were to\n"
	.string "suggest a slightly better name?$"

SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe::
# 207 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Ah, good. Then, what shall the new\n"
	.string "nickname be?$"

SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName::
# 212 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It is a better name than before!\n"
	.string "How fortunate for you!$"

SlateportCity_NameRatersHouse_Text_DoVisitAgain::
# 220 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "I see.\n"
	.string "Do come visit again.$"

SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior::
# 225 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Done! From now on, this POKéMON\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It looks no different from before,\n"
	.string "and yet, this is vastly superior!\p"
	.string "How fortunate for you!$"

SlateportCity_NameRatersHouse_Text_MagnificentName::
# 235 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Hmmm… {STR_VAR_1} it is!\p"
	.string "This is a magnificent nickname!\n"
	.string "It is impeccably beyond reproach!\p"
	.string "You'll do well to cherish your\n"
	.string "{STR_VAR_1} now and beyond.$"

SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg::
# 245 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "Now, now.\n"
	.string "That is merely an EGG!$"

SlateportCity_NameRatersHouse_Text_SkillSwapDesc::
# 250 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "A technique that\n"
	.string "swaps abilities\n"
	.string "with the target.$"

SlateportCity_NameRatersHouse_Text_PowerSwapDesc::
# 256 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "A technique that\n"
	.string "swaps Atk stats\n"
	.string "with the target.$"

SlateportCity_NameRatersHouse_Text_GuardSwapDesc::
# 262 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "A technique that\n"
	.string "swaps Def stats\n"
	.string "with the target.$"

SlateportCity_NameRatersHouse_Text_SpeedSwapDesc::
# 268 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "A technique that\n"
	.string "swaps Speed stats\n"
	.string "with the target.$"

SlateportCity_NameRatersHouse_Text_PowerTrickDesc::
# 274 "data/maps/SlateportCity_NameRatersHouse/scripts.pory"
	.string "A technique that\n"
	.string "swaps the user's\n"
	.string "Atks and Defs.$"
