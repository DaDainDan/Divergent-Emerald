BattleFrontier_BattleDomePreBattleRoom_MapScripts::
# 2 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomePreBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomePreBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleFrontier_BattleDomePreBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom
	.2byte 0

BattleFrontier_BattleDomePreBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomePreBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattleDomePreBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 7 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 8 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom::
# 15 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	compare VAR_0x8006, 1
	goto_if_eq BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom_2
BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom_1:
# 18 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 19 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 20 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom_Movement_0
# 21 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmovement 0
# 22 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	lockall
# 23 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	end

BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom_2:
# 16 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom_1


BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound::
# 28 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 29 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_ROUND1, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_3
# 31 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_4
# 32 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_5
# 33 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_6
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_1:
# 35 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmessage
# 36 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_RECORD_DISABLED
# 37 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_8
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_7:
# 40 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	multichoice 16, 0, MULTI_TOURNEY_WITH_RECORD, TRUE
# 41 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 42 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_12
# 43 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_13
# 44 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_14
# 45 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_15
# 46 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 4, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_16
# 47 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 5, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_17
# 48 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_18
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_10:
	end

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_3:
# 30 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_4:
# 31 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_5:
# 32 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_6:
# 33 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_8:
# 38 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_7

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_12:
# 42 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_10

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_13:
# 43 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_10

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_14:
# 44 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_10

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_15:
# 45 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_10

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_16:
# 46 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_10

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_17:
# 47 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_10

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_18:
# 48 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_10


BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord::
# 54 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	multichoice 16, 2, MULTI_TOURNEY_NO_RECORD, TRUE
# 55 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 56 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_3
# 57 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_4
# 58 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_5
# 59 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 3, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_6
# 60 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case 4, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_7
# 61 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_8
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_1:
	end

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_3:
# 56 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_4:
# 57 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_5:
# 58 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_6:
# 59 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_7:
# 60 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_8:
# 61 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRoundNoRecord_1


BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle::
# 67 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch
# 68 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmessage
# 69 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 70 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle_2
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle_1:
# 73 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	end

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle_2:
# 71 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRecordBattle_1


BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge::
# 78 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 79 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_2
# 88 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_1:
	end

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_2:
# 80 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait
# 81 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmessage
# 82 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_save CHALLENGE_STATUS_PAUSED
# 83 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	playse SE_SAVE
# 84 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitse
# 85 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 86 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_reset
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_1


BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge::
# 94 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge
# 95 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmessage
# 96 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 97 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge_2
BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge_1:
# 101 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	end

BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge_2:
# 98 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_RETIRED
# 99 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobbyLost
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskRetireChallenge_1


BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo::
# 106 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer, MSGBOX_DEFAULT
# 107 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 108 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_showopponentinfo
# 109 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitstate
# 110 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	end


BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree::
# 115 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 116 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 117 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_ROUND1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree_3
# 118 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree_4
# 119 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree_5
# 120 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree_6
BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree_1:
# 122 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 123 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_showtourneytree
# 124 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitstate
# 125 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	end

BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree_3:
# 117 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree_4:
# 118 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree_5:
# 119 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree_6:
# 120 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ShowTourneyTree_1


BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge::
# 130 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons
# 131 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmessage
# 132 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitbuttonpress
# 133 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 134 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 135 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 136 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setvar VAR_0x8005, DOME_BATTLE_PARTY_SIZE
# 137 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	special ChoosePartyForBattleFrontier
# 138 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_resetsketch
# 139 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge_2
BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge_1:
# 142 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_set DOME_DATA_SELECTED_MONS
# 143 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_reduceparty
# 144 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_setopponent
# 145 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay, MSGBOX_DEFAULT
# 146 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	closemessage
# 147 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PRE_BATTLE_ATTENDANT, BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge_Movement_0
# 148 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmovement 0
# 149 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 150 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmovement 0
# 151 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	opendoor 5, 1
# 152 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitdooranim
# 153 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge_Movement_1
# 154 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitmovement 0
# 155 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	closedoor 5, 1
# 156 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitdooranim
# 157 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM, 9, 5
# 158 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 0
# 159 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitstate
	end

BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge_2:
# 140 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge_1


BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals::
# 164 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 165 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 166 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_SILVER, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_3
# 167 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_3
# 174 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_4
# 175 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_4
# 182 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_1:
	return

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_3:
# 168 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_6
# 171 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver, MSGBOX_DEFAULT
# 172 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setflag FLAG_TEMP_1
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_4:
# 176 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_9
# 179 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGold, MSGBOX_DEFAULT
# 180 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setflag FLAG_TEMP_1
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_6:
# 169 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_9:
# 177 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGoldShort, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReadyForFinals_1


BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle::
# 188 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 189 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth, MSGBOX_DEFAULT
# 190 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	special LoadPlayerParty
# 191 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 192 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 193 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitfanfare
# 194 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	special HealPlayerParty
# 195 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 196 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	switch VAR_RESULT
# 197 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle_3
# 198 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle_4
# 199 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle_5
BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle_1:
# 201 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 202 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	dome_showstatictourneytree
# 203 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	waitstate
# 204 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	end

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle_3:
# 197 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle_4:
# 198 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle_1

BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle_5:
# 199 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomePreBattleRoom_EventScript_ReturnFromBattle_1


# 20 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_EnterRoom_Movement_0:
# 20 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 20 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 20 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 20 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
	step_end

# 147 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge_Movement_0:
# 147 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_right
# 147 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	face_left
	step_end

# 153 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
BattleFrontier_BattleDomePreBattleRoom_EventScript_ContinueChallenge_Movement_1:
# 153 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	walk_up
# 153 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	set_invisible
	step_end

BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1::
# 208 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Your 1st-round match is next.\n"
	.string "Are you ready?$"

BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2::
# 213 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Your 2nd-round match is next.\n"
	.string "Are you ready?$"

BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals::
# 218 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Your semifinal match is next.\n"
	.string "Are you ready?$"

BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals::
# 223 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Your final match is next.\n"
	.string "Are you ready?$"

BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons::
# 228 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Please choose the two POKéMON\n"
	.string "that are to appear in battle.$"

BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay::
# 233 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Right this way, please.$"

BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth::
# 237 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Thank you for competing!\p"
	.string "I'll restore your POKéMON to\n"
	.string "full health.$"

BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete::
# 244 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "All 1st-round matches have been\n"
	.string "completed.\p"
	.string "These are the teams that advanced!$"

BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete::
# 251 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "All 2nd-round matches have been\n"
	.string "completed.\p"
	.string "These are the teams that advanced!$"

BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete::
# 258 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "All semifinal matches have been\n"
	.string "completed.\p"
	.string "These are the teams that advanced!$"

BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForRound2::
# 266 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Congratulations for getting through\n"
	.string "the 1st round.\p"
	.string "The 2nd round is next.\n"
	.string "Are you ready?$"

BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForSemifinals::
# 275 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Congratulations for advancing\n"
	.string "to the semifinals.\p"
	.string "The best four teams meet in this round.\n"
	.string "Are you ready?$"

BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForFinals::
# 284 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Congratulations for advancing\n"
	.string "to the final match.\p"
	.string "You're one win from the championship.\n"
	.string "Are you ready?$"

BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer::
# 292 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "{PLAYER}'s next opponent\n"
	.string "is this TRAINER.$"

BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1::
# 297 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "The tournament is in the 1st round.$"

BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2::
# 301 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "The tournament is in the 2nd round.$"

BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals::
# 305 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "The tournament is in the semifinals.$"

BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals::
# 309 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "The tournament is up to the final.$"

BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame::
# 313 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Would you like to save and\n"
	.string "quit the game?$"

BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge::
# 318 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Would you like to retire from your\n"
	.string "Battle Tournament challenge?$"

BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait::
# 323 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "I am saving your data.\n"
	.string "Please wait.$"

BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch::
# 328 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Should I record your last match\n"
	.string "on your FRONTIER PASS?$"

BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver::
# 333 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Congratulations for advancing\n"
	.string "to the final match.\p"
	.string "For the final match, you will challenge\n"
	.string "the DOME ACE TUCKER.\p"
	.string "Are you ready?$"

BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGold::
# 344 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Congratulations for advancing\n"
	.string "to the final match.\p"
	.string "For the final match, you will challenge\n"
	.string "the DOME ACE TUCKER.\p"
	.string "Are you ready?$"

BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort::
# 354 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Your final battle against TUCKER is\n"
	.string "next. Are you ready?$"

BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerGoldShort::
# 360 "data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.pory"
	.string "Your final battle against TUCKER is\n"
	.string "next. Are you ready?$"
