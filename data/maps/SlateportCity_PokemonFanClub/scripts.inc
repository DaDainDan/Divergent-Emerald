SlateportCity_PokemonFanClub_MapScripts::
	.byte 0


SlateportCity_PokemonFanClub_EventScript_Chairman::
# 4 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_ENTERED_CONTEST, SlateportCity_PokemonFanClub_EventScript_Chairman_2
# 14 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_Chairman_5
SlateportCity_PokemonFanClub_EventScript_Chairman_4:
# 18 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_SLATEPORT_FAN_CLUB_STATE
# 19 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_Chairman_12
# 20 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_Chairman_13
# 21 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_Chairman_14
SlateportCity_PokemonFanClub_EventScript_Chairman_10:
	release_end

SlateportCity_PokemonFanClub_EventScript_Chairman_2:
# 6 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_Chairman_8
# 10 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 11 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
	release_end

SlateportCity_PokemonFanClub_EventScript_Chairman_5:
# 15 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
# 16 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
	goto SlateportCity_PokemonFanClub_EventScript_Chairman_4

SlateportCity_PokemonFanClub_EventScript_Chairman_8:
# 7 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon, MSGBOX_DEFAULT
	release_end

SlateportCity_PokemonFanClub_EventScript_Chairman_12:
# 19 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment
	goto SlateportCity_PokemonFanClub_EventScript_Chairman_10

SlateportCity_PokemonFanClub_EventScript_Chairman_13:
# 20 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon
	goto SlateportCity_PokemonFanClub_EventScript_Chairman_10

SlateportCity_PokemonFanClub_EventScript_Chairman_14:
# 21 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
	goto SlateportCity_PokemonFanClub_EventScript_Chairman_10


SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment::
# 27 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 1
# 28 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon, MSGBOX_DEFAULT
# 29 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
	end


SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon::
# 34 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_2, 0
# 35 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_2
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_1:
# 38 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_5
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_4:
# 41 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_8
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_7:
# 44 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_11
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_10:
# 47 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_14
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_13:
# 50 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_TEMP_2, CONTEST_CATEGORIES_COUNT
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_17
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_16:
# 53 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_SLATEPORT_FAN_CLUB_STATE, 2
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_20
SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_19:
# 56 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing, MSGBOX_DEFAULT
# 57 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
	end

SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_2:
# 36 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_1

SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_5:
# 39 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_4

SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_8:
# 42 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_7

SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_11:
# 45 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_10

SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_14:
# 48 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_13

SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_17:
# 51 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 2
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_16

SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_20:
# 54 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon_19


SlateportCity_PokemonFanClub_EventScript_NoMoreScarves::
# 62 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou, MSGBOX_DEFAULT
	release_end


SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon::
# 67 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_HmHmISee, MSGBOX_DEFAULT
# 68 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 0
# 69 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_3
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_1:
# 72 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_8
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_6:
# 75 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_13
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_11:
# 78 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_18
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_16:
# 81 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_unset FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_23
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_21:
# 84 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 85 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	switch VAR_TEMP_1
# 86 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 0, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_28
# 87 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 1, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_29
# 88 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 2, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_30
# 89 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 3, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_31
# 90 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 4, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_32
# 91 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	case 5, SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_33
SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_26:
	release_end

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_2:
# 70 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 5
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_1

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_3:
	specialvar VAR_RESULT, CheckLeadMonTough
# 0 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_2
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_1

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_7:
# 73 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 4
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_6

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_8:
	specialvar VAR_RESULT, CheckLeadMonSmart
# 0 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_7
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_6

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_12:
# 76 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 3
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_11

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_13:
	specialvar VAR_RESULT, CheckLeadMonCute
# 0 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_12
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_11

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_17:
# 79 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 2
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_16

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_18:
	specialvar VAR_RESULT, CheckLeadMonBeauty
# 0 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_17
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_16

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_22:
# 82 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_21

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_23:
	specialvar VAR_RESULT, CheckLeadMonCool
# 0 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_22
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_21

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_28:
# 86 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks, MSGBOX_DEFAULT
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_26

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_29:
# 87 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_GiveRedScarf
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_26

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_30:
# 88 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_26

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_31:
# 89 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_GivePinkScarf
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_26

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_32:
# 90 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_26

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_33:
# 91 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	call SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon_26


SlateportCity_PokemonFanClub_EventScript_GiveRedScarf::
	checkitemspace ITEM_RED_SCARF
# 0 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_GiveRedScarf_2
SlateportCity_PokemonFanClub_EventScript_GiveRedScarf_1:
# 100 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 101 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_RED_SCARF
# 102 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_RED_SCARF
# 103 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainRedScarf, MSGBOX_DEFAULT
	return

SlateportCity_PokemonFanClub_EventScript_GiveRedScarf_2:
# 98 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
	goto SlateportCity_PokemonFanClub_EventScript_GiveRedScarf_1


SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf::
	checkitemspace ITEM_BLUE_SCARF
# 0 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf_2
SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf_1:
# 111 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 112 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_BLUE_SCARF
# 113 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_BLUE_SCARF
# 114 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainBlueScarf, MSGBOX_DEFAULT
	return

SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf_2:
# 109 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
	goto SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf_1


SlateportCity_PokemonFanClub_EventScript_GivePinkScarf::
	checkitemspace ITEM_PINK_SCARF
# 0 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_GivePinkScarf_2
SlateportCity_PokemonFanClub_EventScript_GivePinkScarf_1:
# 122 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 123 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_PINK_SCARF
# 124 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_PINK_SCARF
# 125 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainPinkScarf, MSGBOX_DEFAULT
	return

SlateportCity_PokemonFanClub_EventScript_GivePinkScarf_2:
# 120 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
	goto SlateportCity_PokemonFanClub_EventScript_GivePinkScarf_1


SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf::
	checkitemspace ITEM_GREEN_SCARF
# 0 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf_2
SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf_1:
# 133 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 134 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_GREEN_SCARF
# 135 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_GREEN_SCARF
# 136 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainGreenScarf, MSGBOX_DEFAULT
	return

SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf_2:
# 131 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
	goto SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf_1


SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf::
	checkitemspace ITEM_YELLOW_SCARF
# 0 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf_2
SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf_1:
# 144 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
# 145 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_YELLOW_SCARF
# 146 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	giveitem ITEM_YELLOW_SCARF
# 147 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ExplainYellowScarf, MSGBOX_DEFAULT
	return

SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf_2:
# 142 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
	goto SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf_1


SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf::
# 152 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_NoSpaceForReward, MSGBOX_DEFAULT
	release_end


SlateportCity_PokemonFanClub_EventScript_SootheBellWoman::
# 157 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock_faceplayer
# 158 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOOTHE_BELL, SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_2
# 162 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 0 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FRIENDSHIP_150_TO_199
	goto_if_ge SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_5
SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_4:
	release_end

SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_2:
# 159 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove, MSGBOX_DEFAULT
	release_end

SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_5:
# 164 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playse SE_PIN
# 165 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 166 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 167 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 168 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmovement 0
# 169 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonAdoresYou, MSGBOX_DEFAULT
	giveitem ITEM_SOOTHE_BELL
# 0 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_8
SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_7:
# 173 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	setflag FLAG_RECEIVED_SOOTHE_BELL
	goto SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_4

SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_8:
# 171 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SlateportCity_PokemonFanClub_EventScript_SootheBellWoman_7


SlateportCity_PokemonFanClub_EventScript_Man::
# 179 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting, MSGBOX_NPC
	end


SlateportCity_PokemonFanClub_EventScript_Twin::
# 184 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein, MSGBOX_NPC
	end


SlateportCity_PokemonFanClub_EventScript_Skitty::
# 189 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock_faceplayer
# 190 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 191 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 192 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Skitty, MSGBOX_DEFAULT
# 193 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
	release_end


SlateportCity_PokemonFanClub_EventScript_Zigzagoon::
# 198 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock_faceplayer
# 199 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 200 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 201 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Zigzagoon, MSGBOX_DEFAULT
# 202 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
	release_end


SlateportCity_PokemonFanClub_EventScript_Azumarill::
# 207 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	lock_faceplayer
# 208 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitse
# 209 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 210 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	msgbox SlateportCity_PokemonFanClub_Text_Azumarill, MSGBOX_DEFAULT
# 211 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	waitmoncry
	release_end


SlateportCity_PokemonFanClub_Text_MeetChairman::
# 215 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Er-hem! I am the CHAIRMAN of the\n"
	.string "POKéMON FAN CLUB!\p"
	.string "Being the CHAIRMAN, I am naturally\n"
	.string "the most important!\p"
	.string "No one can best me when it comes\n"
	.string "to raising POKéMON. No one!\p"
	.string "Well, let me tell you about\n"
	.string "POKéMON CONTESTS.\p"
	.string "They're events where one can show off\n"
	.string "POKéMON for the world to see!\p"
	.string "However, they're held in far-off towns,\n"
	.string "so I cannot participate often enough.\p"
	.string "That is why we gather here to show\n"
	.string "off our POKéMON, and have others\l"
	.string "show us theirs.$"

SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon::
# 239 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "The POKéMON of a TRAINER who has\n"
	.string "entered a POKéMON CONTEST…\l"
	.string "That, I would like to see.$"

SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon::
# 245 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Er-hem! I see you've participated in\n"
	.string "a POKéMON CONTEST!\p"
	.string "Please! Allow me to examine how you\n"
	.string "have raised your POKéMON.\p"
	.string "It delights me no end to see POKéMON\n"
	.string "raised by other TRAINERS.\p"
	.string "The happy expressions of POKéMON\n"
	.string "raised with proper care…\p"
	.string "The kindly eyes of the TRAINER that\n"
	.string "nurtured and raised the POKéMON…\p"
	.string "The very thought fills my heart to\n"
	.string "overwhelming with joy.\p"
	.string "Oh! I do beg your pardon!\n"
	.string "Forgive me for prattling on so!\p"
	.string "Please! Allow me to examine how much\n"
	.string "your POKéMON has grown!$"

SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing::
# 271 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "How is your POKéMON growing?\n"
	.string "Allow me to examine it.$"

SlateportCity_PokemonFanClub_Text_HmHmISee::
# 276 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Hm, hm…\n"
	.string "I see…$"

SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks::
# 281 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Hmmm… It's not bad, but it's not\n"
	.string "good, either…\p"
	.string "You, the TRAINER, must put more\n"
	.string "effort into raising this POKéMON!\p"
	.string "For instance, may I suggest that\n"
	.string "you give it more {POKEBLOCK}S?$"

SlateportCity_PokemonFanClub_Text_NoSpaceForReward::
# 292 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Oh, my…\p"
	.string "Your POKéMON is growing quite well,\n"
	.string "so you deserve a reward.\p"
	.string "Unfortunately, you have no space for\n"
	.string "this in your BAG.$"

SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis::
# 302 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your {STR_VAR_1}, it is growing in\n"
	.string "a most impressive manner!\l"
	.string "It is one fine specimen!\p"
	.string "But! If you were to give it this,\n"
	.string "it would grow even better! Indeed!$"

SlateportCity_PokemonFanClub_Text_ExplainRedScarf::
# 311 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that RED SCARF.\p"
	.string "Everyone will recognize the coolness\n"
	.string "of that POKéMON!$"

SlateportCity_PokemonFanClub_Text_ExplainBlueScarf::
# 318 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that BLUE SCARF.\p"
	.string "Its beauty will be accentuated much\n"
	.string "more than now!$"

SlateportCity_PokemonFanClub_Text_ExplainPinkScarf::
# 325 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that PINK SCARF.\p"
	.string "It will draw out the cuteness of\n"
	.string "the POKéMON some more!$"

SlateportCity_PokemonFanClub_Text_ExplainGreenScarf::
# 332 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that GREEN SCARF.\p"
	.string "That will enhance the\n"
	.string "smartness of POKéMON!$"

SlateportCity_PokemonFanClub_Text_ExplainYellowScarf::
# 339 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Let a POKéMON hold that YELLOW SCARF.\p"
	.string "It will bolster your POKéMON's\n"
	.string "toughness so much more!$"

SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou::
# 346 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I'm sorry, but I've nothing else to\n"
	.string "give you! None at all!\p"
	.string "After all, you're blessed with the gift\n"
	.string "of raising POKéMON without resorting\l"
	.string "to any items!$"

SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou::
# 355 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "I love seeing POKéMON that love\n"
	.string "their TRAINERS.\p"
	.string "POKéMON are very sensitive to\n"
	.string "the feelings of their TRAINERS.\p"
	.string "If you treat your POKéMON with love\n"
	.string "and care, they'll love you back.\p"
	.string "When your POKéMON grow to love you,\n"
	.string "please come show me.$"

SlateportCity_PokemonFanClub_Text_PokemonAdoresYou::
# 369 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Your POKéMON really adores you.\p"
	.string "For you, a most compassionate\n"
	.string "TRAINER, a gift from the FAN CLUB!$"

SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove::
# 376 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "POKéMON are very sensitive to\n"
	.string "the feelings of their TRAINERS.\p"
	.string "If you treat your POKéMON with love\n"
	.string "and care, they'll love you back.$"

SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting::
# 384 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "If you keep letting a POKéMON faint\n"
	.string "in battle, it'll come to resent it.\p"
	.string "Soon, it will become less trusting\n"
	.string "of the TRAINER.\p"
	.string "In other words, it certainly won't\n"
	.string "like you very much.$"

SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein::
# 395 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Do POKéMON enjoy having items used\n"
	.string "on them?\p"
	.string "Mine acted really happy when I gave\n"
	.string "it some PROTEIN.$"

SlateportCity_PokemonFanClub_Text_Skitty::
# 403 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Fffnyaaaah…$"

SlateportCity_PokemonFanClub_Text_Zigzagoon::
# 407 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Kyuuu…$"

SlateportCity_PokemonFanClub_Text_Azumarill::
# 411 "data/maps/SlateportCity_PokemonFanClub/scripts.pory"
	.string "Marimari?$"
