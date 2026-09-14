BattleFrontier_Lounge3_MapScripts::
	.byte 0


BattleFrontier_Lounge3_EventScript_Gambler::
# 8 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock_faceplayer
# 9 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_MET_BATTLE_FRONTIER_GAMBLER, BattleFrontier_Lounge3_EventScript_Gambler_2
# 17 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	call BattleFrontier_Lounge3_EventScript_CountSilverSymbols
# 18 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_0x8004, 2
	goto_if_le BattleFrontier_Lounge3_EventScript_Gambler_5
# 23 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_GAMBLER
# 24 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_YouLookToughExplainGambling, MSGBOX_DEFAULT
# 25 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
	end

BattleFrontier_Lounge3_EventScript_Gambler_2:
# 10 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_Oh, MSGBOX_DEFAULT
# 11 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
	goto_if_ge BattleFrontier_Lounge3_EventScript_Gambler_8
BattleFrontier_Lounge3_EventScript_Gambler_7:
# 14 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
	end

BattleFrontier_Lounge3_EventScript_Gambler_5:
# 19 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere, MSGBOX_DEFAULT
# 20 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end

BattleFrontier_Lounge3_EventScript_Gambler_8:
# 12 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CheckBetResults
	goto BattleFrontier_Lounge3_EventScript_Gambler_7


BattleFrontier_Lounge3_EventScript_AskToEnterChallenge::
# 30 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerLookingMessage
# 31 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 32 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 33 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe, MSGBOX_YESNO
# 34 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_2
BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_1:
# 37 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints, MSGBOX_YESNO
# 38 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_5
BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_4:
# 41 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
# 42 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 43 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowBattlePointsWindow
# 44 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
	end

BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_2:
# 35 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_DeclineChallenge
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_1

BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_5:
# 39 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_DeclineChallenge
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge_4


BattleFrontier_Lounge3_EventScript_ChooseBetAmount::
# 49 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	multichoice 20, 4, MULTI_FRONTIER_GAMBLER_BET, FALSE
# 50 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	copyvar VAR_FRONTIER_GAMBLER_AMOUNT_BET, VAR_RESULT
# 51 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	switch VAR_RESULT
# 52 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_5, BattleFrontier_Lounge3_EventScript_ChooseBetAmount_3
# 53 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_10, BattleFrontier_Lounge3_EventScript_ChooseBetAmount_4
# 54 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_15, BattleFrontier_Lounge3_EventScript_ChooseBetAmount_5
# 55 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case FRONTIER_GAMBLER_BET_CANCEL, BattleFrontier_Lounge3_EventScript_ChooseBetAmount_6
# 56 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge3_EventScript_ChooseBetAmount_6
BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1:
# 61 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet
	end

BattleFrontier_Lounge3_EventScript_ChooseBetAmount_3:
# 52 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, 5
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1

BattleFrontier_Lounge3_EventScript_ChooseBetAmount_4:
# 53 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, 10
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1

BattleFrontier_Lounge3_EventScript_ChooseBetAmount_5:
# 54 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8008, 15
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount_1

BattleFrontier_Lounge3_EventScript_ChooseBetAmount_6:
# 57 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattlePointsWindow
# 58 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_DeclineChallenge
	end


BattleFrontier_Lounge3_EventScript_TryPlaceBet::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 0 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_TEMP_1, VAR_0x8008
	goto_if_ge BattleFrontier_Lounge3_EventScript_TryPlaceBet_2
BattleFrontier_Lounge3_EventScript_TryPlaceBet_1:
# 69 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints, MSGBOX_DEFAULT
# 70 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	message BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
# 71 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 72 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseBetAmount
	end

BattleFrontier_Lounge3_EventScript_TryPlaceBet_2:
# 67 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_PlaceBet
	goto BattleFrontier_Lounge3_EventScript_TryPlaceBet_1


BattleFrontier_Lounge3_EventScript_PlaceBet::
# 77 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 78 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special TakeFrontierBattlePoints
# 79 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
# 80 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special UpdateBattlePointsWindow
# 81 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	playse SE_SHOP
# 82 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ThanksOffYouGo, MSGBOX_DEFAULT
# 83 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerGoMessage
# 84 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 85 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
# 86 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattlePointsWindow
	release_end


BattleFrontier_Lounge3_EventScript_CountSilverSymbols::
# 91 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, 0
# 92 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_TOWER_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_2
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_1:
# 95 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_DOME_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_5
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_4:
# 98 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_PALACE_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_8
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_7:
# 101 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_ARENA_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_11
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_10:
# 104 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_FACTORY_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_14
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_13:
# 107 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_PIKE_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_17
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_16:
# 110 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_set FLAG_SYS_PYRAMID_SILVER, BattleFrontier_Lounge3_EventScript_CountSilverSymbols_20
BattleFrontier_Lounge3_EventScript_CountSilverSymbols_19:
	return

BattleFrontier_Lounge3_EventScript_CountSilverSymbols_2:
# 93 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	addvar VAR_0x8004, 1
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_1

BattleFrontier_Lounge3_EventScript_CountSilverSymbols_5:
# 96 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	addvar VAR_0x8004, 1
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_4

BattleFrontier_Lounge3_EventScript_CountSilverSymbols_8:
# 99 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	addvar VAR_0x8004, 1
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_7

BattleFrontier_Lounge3_EventScript_CountSilverSymbols_11:
# 102 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	addvar VAR_0x8004, 1
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_10

BattleFrontier_Lounge3_EventScript_CountSilverSymbols_14:
# 105 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	addvar VAR_0x8004, 1
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_13

BattleFrontier_Lounge3_EventScript_CountSilverSymbols_17:
# 108 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	addvar VAR_0x8004, 1
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_16

BattleFrontier_Lounge3_EventScript_CountSilverSymbols_20:
# 111 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	addvar VAR_0x8004, 1
	goto BattleFrontier_Lounge3_EventScript_CountSilverSymbols_19


BattleFrontier_Lounge3_EventScript_AlreadyMetGambler::
# 117 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_Oh, MSGBOX_DEFAULT
# 118 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
	goto_if_ge BattleFrontier_Lounge3_EventScript_AlreadyMetGambler_2
BattleFrontier_Lounge3_EventScript_AlreadyMetGambler_1:
# 121 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_AskToEnterChallenge
	end

BattleFrontier_Lounge3_EventScript_AlreadyMetGambler_2:
# 119 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_CheckBetResults
	goto BattleFrontier_Lounge3_EventScript_AlreadyMetGambler_1


BattleFrontier_Lounge3_EventScript_CheckBetResults::
# 126 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_PLACED_BET
	goto_if_eq BattleFrontier_Lounge3_EventScript_CheckBetResults_2
# 132 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WON
	goto_if_eq BattleFrontier_Lounge3_EventScript_CheckBetResults_5
BattleFrontier_Lounge3_EventScript_CheckBetResults_4:
# 135 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints, MSGBOX_DEFAULT
# 136 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
	release_end

BattleFrontier_Lounge3_EventScript_CheckBetResults_2:
# 127 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowFrontierGamblerGoMessage
# 128 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 129 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitbuttonpress
	release_end

BattleFrontier_Lounge3_EventScript_CheckBetResults_5:
# 133 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_WonChallenge
	goto BattleFrontier_Lounge3_EventScript_CheckBetResults_4


BattleFrontier_Lounge3_EventScript_WonChallenge::
# 141 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints, MSGBOX_DEFAULT
# 142 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_5
	goto_if_eq BattleFrontier_Lounge3_EventScript_WonChallenge_2
BattleFrontier_Lounge3_EventScript_WonChallenge_1:
# 146 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_10
	goto_if_eq BattleFrontier_Lounge3_EventScript_WonChallenge_5
BattleFrontier_Lounge3_EventScript_WonChallenge_4:
# 150 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_FRONTIER_GAMBLER_AMOUNT_BET, FRONTIER_GAMBLER_BET_15
	goto_if_eq BattleFrontier_Lounge3_EventScript_WonChallenge_8
BattleFrontier_Lounge3_EventScript_WonChallenge_7:
# 154 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ObtainedBattlePoints, MSGBOX_GETPOINTS
# 155 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special GiveFrontierBattlePoints
# 156 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge, MSGBOX_DEFAULT
# 157 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_FRONTIER_GAMBLER_STATE, FRONTIER_GAMBLER_WAITING
	release_end

BattleFrontier_Lounge3_EventScript_WonChallenge_2:
# 143 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, ( 5 * 2 )
# 144 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, ( 5 * 2 )
	goto BattleFrontier_Lounge3_EventScript_WonChallenge_1

BattleFrontier_Lounge3_EventScript_WonChallenge_5:
# 147 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, ( 10 * 2 )
# 148 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, ( 10 * 2 )
	goto BattleFrontier_Lounge3_EventScript_WonChallenge_4

BattleFrontier_Lounge3_EventScript_WonChallenge_8:
# 151 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_1, ( 15 * 2 )
# 152 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, ( 15 * 2 )
	goto BattleFrontier_Lounge3_EventScript_WonChallenge_7


BattleFrontier_Lounge3_EventScript_DeclineChallenge::
# 162 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_NotInterested, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge3_EventScript_Man::
# 167 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges, MSGBOX_NPC
	end


BattleFrontier_Lounge3_EventScript_Woman::
# 172 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock_faceplayer
# 173 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_BackedWrongTrainer, MSGBOX_DEFAULT
# 174 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


BattleFrontier_Lounge3_EventScript_PokefanF::
# 179 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock_faceplayer
# 180 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne, MSGBOX_DEFAULT
# 181 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


BattleFrontier_Lounge3_EventScript_FatMan::
# 186 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock_faceplayer
# 187 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_TrainerGoodButRattled, MSGBOX_DEFAULT
# 188 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


BattleFrontier_Lounge3_EventScript_MoveTutor::
# 193 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	lock_faceplayer
# 194 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto_if_unset FLAG_MET_BATTLE_FRONTIER_ULTIMATE_TUTOR, BattleFrontier_Lounge3_EventScript_MoveTutor_2
BattleFrontier_Lounge3_EventScript_MoveTutor_1:
# 198 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 199 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_ULTIMATE_MOVE_TUTOR
# 200 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8006, 0
# 201 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseUltimateMove
	end

BattleFrontier_Lounge3_EventScript_MoveTutor_2:
# 195 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 196 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_ULTIMATE_TUTOR
	goto BattleFrontier_Lounge3_EventScript_MoveTutor_1


BattleFrontier_Lounge3_EventScript_ChooseUltimateMove::
# 206 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowBattlePointsWindow
# 207 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_ULTIMATE_MOVE_TUTOR
# 208 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special ShowScrollableMultichoice
# 209 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 210 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	switch VAR_RESULT
# 211 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case 0, BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_3
# 212 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case 1, BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_4
# 213 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case 2, BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_5
# 214 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case 3, BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_6
# 215 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case 4, BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_7
# 216 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case 5, BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_8
# 217 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case 6, BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_9
# 218 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case 7, BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_10
# 219 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case 8, BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_11
# 220 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case 9, BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_12
# 221 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_12
BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_1:
# 224 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 225 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_EXCHANGE_PRICE
# 226 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_EventScript_MoveTutor_Text_0, MSGBOX_YESNO
# 227 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_14
BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_13:
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 0 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_TEMP_1, VAR_EXCHANGE_PRICE
	goto_if_ge BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_17
# 249 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 250 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ExitTutorMoveSelect
	end

BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_3:
# 211 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setmoveandprice MOVE_HYPER_BEAM, 48
	goto BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_1

BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_4:
# 212 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setmoveandprice MOVE_FISSURE, 48
	goto BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_1

BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_5:
# 213 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setmoveandprice MOVE_BITTER_MALICE, 48
	goto BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_1

BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_6:
# 214 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setmoveandprice MOVE_INFERNO, 48
	goto BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_1

BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_7:
# 215 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setmoveandprice MOVE_ZAP_CANNON, 48
	goto BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_1

BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_8:
# 216 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setmoveandprice MOVE_SHEER_COLD, 48
	goto BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_1

BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_9:
# 217 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setmoveandprice MOVE_SUPERPOWER, 48
	goto BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_1

BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_10:
# 218 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setmoveandprice MOVE_STEEL_BEAM, 48
	goto BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_1

BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_11:
# 219 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setmoveandprice MOVE_METEOR_BEAM, 48
	goto BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_1

BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_12:
# 222 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ExitTutorMoveSelect
	goto BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_1

BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_14:
# 228 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	message BattleFrontier_Lounge3_EventScript_MoveTutor_Text_0
# 229 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitmessage
# 230 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	setvar VAR_0x8006, 1
# 231 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	goto BattleFrontier_Lounge3_EventScript_ChooseUltimateMove
	goto BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_13

BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_17:
# 234 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 235 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	fadescreen FADE_TO_BLACK
# 236 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattlePointsWindow
# 237 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 238 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 239 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	waitstate
# 240 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_20
# 244 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 245 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	copyvar VAR_0x8004, VAR_EXCHANGE_PRICE
# 246 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special TakeFrontierBattlePoints
	release_end

BattleFrontier_Lounge3_EventScript_ChooseUltimateMove_20:
# 241 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge3_EventScript_ExitTutorMoveSelect::
# 255 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 256 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	special CloseBattlePointsWindow
# 257 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	msgbox BattleFrontier_Lounge3_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge3_EventScript_MoveTutor_Text_0:
# 195 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "…$"

BattleFrontier_Lounge3_Text_DeclineTutor::
# 261 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "…$"

BattleFrontier_Lounge3_Text_HyperBeamDesc::
# 265 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "A devasting beam\n"
	.string "of Dragon energy.\n"
	.string "One-time use.$"

BattleFrontier_Lounge3_Text_FissureDesc::
# 271 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "A devasting beam\n"
	.string "of Dragon energy.\n"
	.string "One-time use.$"

BattleFrontier_Lounge3_Text_PurgatoryDesc::
# 277 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Ultimate ghost\n"
	.string "move that curses.\n"
	.string "One-time use.$"

BattleFrontier_Lounge3_Text_InfernoDesc::
# 283 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Unleashes hellish\n"
	.string "flames that burn.\n"
	.string "One-time use.$"

BattleFrontier_Lounge3_Text_ZapCannonDesc::
# 289 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Shot like a railgun\n"
	.string "that paralyzes.\n"
	.string "One-time use.$"

BattleFrontier_Lounge3_Text_SheerColdDesc::
# 295 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Attack of max cold\n"
	.string "that causes frost.\n"
	.string "One-time use.$"

BattleFrontier_Lounge3_Text_SuperpowerDesc::
# 301 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "A devasting strike\n"
	.string "of physical power.\n"
	.string "One-time use.$"

BattleFrontier_Lounge3_Text_SteelBeamDesc::
# 307 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "A devasting beam\n"
	.string "of Steel energy.\n"
	.string "One-time use.$"

BattleFrontier_Lounge3_Text_MeteorBeamDesc::
# 313 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "A devasting beam\n"
	.string "of Space energy.\n"
	.string "One-time use.$"

BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere::
# 320 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "…What's that you want?\p"
	.string "Can't you see we're kind of busy here?\n"
	.string "Can't your business wait till later?$"

BattleFrontier_Lounge3_Text_YouLookToughExplainGambling::
# 327 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "…Huh?\n"
	.string "You look to me like a tough TRAINER.\p"
	.string "Heheh…\n"
	.string "Listen, I have this proposition.\p"
	.string "We have a little group going here,\n"
	.string "and we play a little game with what\l"
	.string "goes on in the BATTLE FRONTIER.\p"
	.string "The rules are really simple.\p"
	.string "First, we pick one of the facilities\n"
	.string "in the BATTLE FRONTIER.\p"
	.string "Then, we each pick a different TRAINER\n"
	.string "who's taking that facility's challenge,\l"
	.string "and bet with our Battle Points.\p"
	.string "The guy who bet on the TRAINER with\n"
	.string "the best record takes all the Battle\l"
	.string "Points in the pool.\p"
	.string "Sounds simple, huh?\n"
	.string "So, anyway…$"

BattleFrontier_Lounge3_Text_ChallengeBattleTowerSingle::
# 355 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be challenging the BATTLE\l"
	.string "TOWER's SINGLE BATTLE ROOMS.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattleTowerDouble::
# 364 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be challenging the BATTLE\l"
	.string "TOWER's DOUBLE BATTLE ROOMS.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattleTowerMulti::
# 373 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be challenging the BATTLE\l"
	.string "TOWER's MULTI BATTLE ROOMS.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattleDomeSingle::
# 382 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "DOME's SINGLE BATTLE Tourney.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattleDomeDouble::
# 391 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "DOME's DOUBLE BATTLE Tourney.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattleFactorySingle::
# 400 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "FACTORY's Battle Swap Single Tourney.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattleFactoryDouble::
# 409 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "FACTORY's Battle Swap Double Tourney.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePalaceSingle::
# 418 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be challenging the BATTLE\l"
	.string "PALACE's SINGLE BATTLE HALLS.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePalaceDouble::
# 427 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be challenging the BATTLE\l"
	.string "PALACE's DOUBLE BATTLE HALLS.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattleArena::
# 436 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "ARENA's Set KO Tourney.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePike::
# 445 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE PIKE's\l"
	.string "Battle Choice.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_ChallengeBattlePyramid::
# 454 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "What I'm looking for is a TRAINER who's\n"
	.string "going to be entering the BATTLE\l"
	.string "PYRAMID's Battle Quest.\p"
	.string "But so far, I haven't seen a TRAINER\n"
	.string "that has that winning quality.$"

BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe::
# 463 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I'll see to it that you benefit, too.\n"
	.string "So how about it?\l"
	.string "How about entering that event for me?$"

BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints::
# 469 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "All right, that's perfect.\n"
	.string "So, uh… How about spotting me some\l"
	.string "of your Battle Points?\p"
	.string "Trust me, I'll show you my gratitude\n"
	.string "afterward.$"

BattleFrontier_Lounge3_Text_HowMuchCanYouSpot::
# 478 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Great, great!\n"
	.string "So, how much can you spot me?$"

BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints::
# 483 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh, no, no, no!\n"
	.string "You don't have enough Battle Points!\p"
	.string "I wish you wouldn't monkey around and\n"
	.string "waste everyone's time!$"

BattleFrontier_Lounge3_Text_ThanksOffYouGo::
# 491 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Heheh! Thanks much!\n"
	.string "So, off you go!$"

BattleFrontier_Lounge3_Text_GetToBattleTowerSingle::
# 496 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE TOWER's\n"
	.string "SINGLE BATTLE ROOMS pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattleTowerDouble::
# 505 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE TOWER's\n"
	.string "DOUBLE BATTLE ROOMS pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattleTowerMulti::
# 514 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE TOWER's\n"
	.string "MULTI BATTLE ROOMS pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattleDomeSingle::
# 523 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE DOME's\n"
	.string "SINGLE BATTLE Tourney pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattleDomeDouble::
# 532 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE DOME's\n"
	.string "DOUBLE BATTLE Tourney pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattleFactorySingle::
# 541 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE FACTORY's\n"
	.string "Battle Swap Single Tourney pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattleFactoryDouble::
# 550 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE FACTORY's\n"
	.string "Battle Swap Double Tourney pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattlePalaceSingle::
# 559 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PALACE's\n"
	.string "SINGLE BATTLE HALLS pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattlePalaceDouble::
# 568 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PALACE's\n"
	.string "DOUBLE BATTLE HALLS pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattleArena::
# 577 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE ARENA's\n"
	.string "Set KO Tourney pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattlePike::
# 586 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PIKE's\n"
	.string "Battle Choice pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_GetToBattlePyramid::
# 595 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Get to the BATTLE PYRAMID's\n"
	.string "Battle Quest pronto!\p"
	.string "It's a must-win situation!\n"
	.string "Don't blow your chance!\l"
	.string "Both of our futures depend on you!$"

BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints::
# 604 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh, it's you…\n"
	.string "Nice try…\p"
	.string "I hate to break it to you, but I can't\n"
	.string "return your Battle Points…\p"
	.string "I guess we'll have to let it motivate\n"
	.string "us to try harder next time!$"

BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints::
# 615 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh, yes!\n"
	.string "Hello there, champ!\p"
	.string "I knew you could!\n"
	.string "I knew you would!\l"
	.string "We're both big winners!\p"
	.string "I'll return your Battle Points and,\n"
	.string "of course, a little extra from me!$"

BattleFrontier_Lounge3_Text_ObtainedBattlePoints::
# 627 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "{PLAYER} obtained\n"
	.string "{STR_VAR_1} Battle Points.$"

BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge::
# 632 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "If you're up for another challenge,\n"
	.string "please do think of me!$"

BattleFrontier_Lounge3_Text_NotInterested::
# 637 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Not interested?! You shouldn't be\n"
	.string "so afraid to take a chance!$"

BattleFrontier_Lounge3_Text_Oh::
# 642 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Oh…$"

BattleFrontier_Lounge3_Text_BackedWrongTrainer::
# 646 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "I backed the wrong TRAINER again!\p"
	.string "Maybe I should be battling normally\n"
	.string "like everyone else…$"

BattleFrontier_Lounge3_Text_TrainerGoodButRattled::
# 653 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "That TRAINER…\p"
	.string "He's good, but he gets rattled too\n"
	.string "easily to survive the BATTLE DOME…$"

BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne::
# 660 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Giggle!\n"
	.string "I know a winner when I see one!$"

BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges::
# 665 "data/maps/BattleFrontier_Lounge3/scripts.pory"
	.string "Those TRAINERS…\n"
	.string "What are they doing?\l"
	.string "They should be taking challenges.$"
