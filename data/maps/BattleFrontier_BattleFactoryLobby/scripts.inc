BattleFrontier_BattleFactoryLobby_MapScripts::
# 2 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleFactoryLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 12 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleFactoryLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleFrontier_BattleFactoryLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleFactoryLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 7 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving
# 8 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge
# 9 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge
# 10 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge
	.2byte 0

BattleFrontier_BattleFactoryLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_getstatus
	end

BattleFrontier_BattleFactoryLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 13 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattleFactoryLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 14 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattleFactoryLobby_EventScript_QuitWithoutSaving::
# 22 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 23 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 24 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 25 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_setswapped
# 26 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS, 0
# 27 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK, 0
# 28 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
# 29 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 30 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 31 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge::
# 36 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 37 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_isbrain
# 38 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_2
# 41 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins, MSGBOX_DEFAULT
BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_1:
# 43 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 44 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints
	end

BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_2:
# 39 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_WonChallenge_1


BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints::
# 49 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints, MSGBOX_DEFAULT
# 50 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_givepoints
# 51 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 52 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave
# 53 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 54 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_checkairshow
# 55 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 56 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 57 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save 0
# 58 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 59 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 60 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_get FRONTIER_DATA_RECORD_DISABLED
# 61 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints_2
BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints_1:
# 69 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 70 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 71 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 72 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
	end

BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints_2:
# 62 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch
# 63 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 64 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 65 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints_4
	goto BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints_1

BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints_4:
# 66 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
	goto BattleFrontier_BattleFactoryLobby_EventScript_GiveBattlePoints_1


BattleFrontier_BattleFactoryLobby_EventScript_LostChallenge::
# 77 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 78 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults
# 79 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 80 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_checkairshow
# 81 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 82 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 83 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, FALSE
# 84 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save 0
# 85 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 86 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
	return


BattleFrontier_BattleFactoryLobby_EventScript_ResumeChallenge::
# 90 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 91 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume
# 92 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 93 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_save CHALLENGE_STATUS_SAVING
# 94 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	playse SE_SAVE
# 95 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitse
# 96 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 97 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 98 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8006, 2
# 99 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge
	end


BattleFrontier_BattleFactoryLobby_EventScript_SinglesAttendant::
# 104 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lock_faceplayer
# 105 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 106 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 107 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
	end


BattleFrontier_BattleFactoryLobby_EventScript_DoublesAttendant::
# 112 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 113 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 114 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant
	end


BattleFrontier_BattleFactoryLobby_EventScript_Attendant::
# 119 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special SavePlayerParty
# 120 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 121 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_Attendant_3
# 122 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_Attendant_4
BattleFrontier_BattleFactoryLobby_EventScript_Attendant_1:
# 124 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge
	end

BattleFrontier_BattleFactoryLobby_EventScript_Attendant_3:
# 121 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant_1

BattleFrontier_BattleFactoryLobby_EventScript_Attendant_4:
# 122 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_Attendant_1


BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge::
# 129 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 130 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_3
# 131 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_4
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_1:
# 133 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 134 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 135 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_7
# 137 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_8
# 138 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 2, BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_9
# 139 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_9
BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_5:
	end

BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_3:
# 130 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_1

BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_4:
# 131 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_1

BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_7:
# 136 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_5

BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_8:
# 137 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_5

BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_9:
# 139 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge_5


BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge::
# 145 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode
# 146 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 147 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 148 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_TENT
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_2
# 148 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_2
BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_1:
# 151 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 152 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 153 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_7
BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_6:
# 170 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special LoadPlayerParty
# 171 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 172 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	end

BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_2:
# 149 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_1

BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_7:
# 154 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 155 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_init
# 156 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 157 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_ACTIVE, TRUE
# 158 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 159 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 160 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	delay 2
# 161 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 162 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 163 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_10
BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_9:
# 167 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_0x8006, 0
# 168 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_6

BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_10:
# 164 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 165 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleFactoryLobby_EventScript_TryEnterChallenge_9


BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge::
# 177 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special SavePlayerParty
# 178 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 179 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	closemessage
# 180 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 181 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_3
# 182 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_4
BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_1:
# 184 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_Movement_0
# 185 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_Movement_1
# 186 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmovement 0
# 187 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM, 8, 13
# 188 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 189 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitstate
	end

BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_3:
# 181 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_FACTORY_ATTENDANT_SINGLES
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_1

BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_4:
# 182 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_FACTORY_ATTENDANT_DOUBLES
	goto BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_1


BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge::
# 194 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 195 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_3
# 196 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_4
BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_1:
# 198 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_AskTakeChallenge
	end

BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_3:
# 195 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_1

BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_4:
# 196 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ExplainChallenge_1


BattleFrontier_BattleFactoryLobby_EventScript_CancelChallenge::
# 203 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
	release_end


BattleFrontier_BattleFactoryLobby_EventScript_ShowSinglesResults::
# 208 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 209 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_SINGLES
# 210 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitbuttonpress
# 211 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special RemoveRecordsWindow
# 212 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleFactoryLobby_EventScript_ShowDoublesResults::
# 217 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 218 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_FACTORY, FRONTIER_MODE_DOUBLES
# 219 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitbuttonpress
# 220 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	special RemoveRecordsWindow
# 221 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleFactoryLobby_EventScript_Woman::
# 226 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves, MSGBOX_NPC
	end


BattleFrontier_BattleFactoryLobby_EventScript_Camper::
# 231 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon, MSGBOX_NPC
	end


BattleFrontier_BattleFactoryLobby_EventScript_Picnicker::
# 236 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lock
# 237 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons, MSGBOX_DEFAULT
	release_end


BattleFrontier_BattleFactoryLobby_EventScript_FatMan::
# 242 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints, MSGBOX_NPC
	end


BattleFrontier_BattleFactoryLobby_EventScript_RulesBoard::
# 247 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	lockall
# 248 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 249 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard::
# 254 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading
# 255 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	waitmessage
# 256 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	multichoice 17, 0, MULTI_BATTLE_FACTORY_RULES, FALSE
# 257 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	switch VAR_RESULT
# 258 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 0, BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_3
# 259 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 1, BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_4
# 260 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 2, BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_5
# 261 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 3, BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_6
# 262 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 4, BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_7
# 263 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case 5, BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_8
# 264 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_8
BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1:
# 268 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_3:
# 258 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_4:
# 259 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_5:
# 260 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_6:
# 261 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_7:
# 262 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleFactoryLobby_EventScript_ReadRulesBoard_8:
# 265 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	releaseall
	end


# 184 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_Movement_0:
# 184 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 184 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 184 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 184 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	set_invisible
	step_end

# 185 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
BattleFrontier_BattleFactoryLobby_EventScript_EnterChallenge_Movement_1:
# 185 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 185 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 185 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
# 185 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	walk_up
	step_end

BattleFrontier_BattleFactoryLobby_Text_WelcomeForSingleBattle::
# 272 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Where the intelligence of TRAINERS\n"
	.string "is put to the test!\p"
	.string "Welcome to the BATTLE FACTORY!\p"
	.string "I am your guide to the Battle Swap\n"
	.string "Single Tournament.$"

BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge::
# 282 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to take the Battle\n"
	.string "Swap Single challenge?$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSinglesChallenge::
# 287 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "The Battle Swap Single Tournament\n"
	.string "is a SINGLE BATTLE competition using\l"
	.string "only rental POKéMON.\p"
	.string "First, you will be loaned three\n"
	.string "POKéMON specifically for this event.\p"
	.string "Using the supplied rental POKéMON,\n"
	.string "you must conduct a SINGLE BATTLE.\p"
	.string "If you win, you are permitted to trade\n"
	.string "one of your rental POKéMON.\p"
	.string "Repeat this cycle of battling and\n"
	.string "trading--if you win seven times in\l"
	.string "a row, you will earn Battle Points.\p"
	.string "If you want to interrupt your\n"
	.string "challenge, please save the game.\p"
	.string "If you don't save, you will be\n"
	.string "disqualified from your challenge.$"

BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit::
# 312 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "We look forward to your next visit.$"

BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode::
# 316 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Which level do you wish to challenge?\n"
	.string "Level 50 or Open Level?$"

BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge::
# 321 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Before you begin your challenge,\n"
	.string "I need to save the game. Is that okay?$"

BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping::
# 327 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Okay, I will hold your POKéMON for\n"
	.string "safekeeping while you compete.$"

BattleFrontier_BattleFactoryLobby_Text_StepThisWay::
# 332 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Please step this way.$"

BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults::
# 336 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Thank you for participating!\p"
	.string "I will return your POKéMON in exchange\n"
	.string "for our rental POKéMON.\p"
	.string "I must also save the event results.\n"
	.string "Please wait.$"

BattleFrontier_BattleFactoryLobby_Text_ReturnMons::
# 347 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I will return your POKéMON in exchange\n"
	.string "for our rental POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_CongratsSevenWins::
# 352 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Congratulations! You've won seven\n"
	.string "straight Battle Swap matches!$"

BattleFrontier_BattleFactoryLobby_Text_AwardBattlePointsForStreak::
# 358 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In recognition of your 7-win streak,\n"
	.string "we award you these Battle Point(s).$"

BattleFrontier_BattleFactoryLobby_Text_MaxBattlePoints::
# 364 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Oh, oh, oh!\p"
	.string "Your Battle Points are maxed.\p"
	.string "Please come back after using\n"
	.string "some Battle Points.$"

BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume::
# 373 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "We've been waiting for you!\p"
	.string "Before we resume your challenge,\n"
	.string "I must save the game.$"

BattleFrontier_BattleFactoryLobby_Text_DidntSaveBeforeQuitting::
# 380 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I'm sorry to say this, but you didn't\n"
	.string "save before you quit playing last time.\p"
	.string "As a result, you have been disqualified\n"
	.string "from your challenge.$"

BattleFrontier_BattleFactoryLobby_Text_WellReturnMons::
# 389 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "We'll return your personal POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_ReceivedPrizeItem::
# 394 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle::
# 399 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Where the intelligence of TRAINERS\n"
	.string "is put to the test!\p"
	.string "Welcome to the BATTLE FACTORY!\p"
	.string "I am your guide to the Battle Swap\n"
	.string "Double Tournament.$"

BattleFrontier_BattleFactoryLobby_Text_TakeDoublesChallenge::
# 409 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to take the Battle\n"
	.string "Swap Double challenge?$"

BattleFrontier_BattleFactoryLobby_Text_ExplainDoublesChallenge::
# 414 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "The Battle Swap Double Tournament\n"
	.string "is a DOUBLE BATTLE competition using\l"
	.string "only rental POKéMON.\p"
	.string "First, you will be loaned three\n"
	.string "POKéMON specifically for this event.\p"
	.string "Using the supplied rental POKéMON,\n"
	.string "you must conduct a DOUBLE BATTLE.\p"
	.string "If you win, you are permitted to trade\n"
	.string "one of your rental POKéMON.\p"
	.string "Repeat this cycle of battling and\n"
	.string "trading--if you win seven times in\l"
	.string "a row, you will earn Battle Points.\p"
	.string "If you want to interrupt your\n"
	.string "challenge, please save the game.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattleFactoryLobby_Text_CongratsForDefeatingHead::
# 439 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Congratulations for defeating\n"
	.string "the FACTORY HEAD and winning\l"
	.string "seven matches in a row!$"

BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints::
# 445 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In recognition of your wealth of\n"
	.string "knowledge and keen intelligence,\l"
	.string "we award you these Battle Point(s).$"

BattleFrontier_BattleFactoryLobby_Text_ExchangeMonsAndSave::
# 451 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Let me exchange your POKéMON\n"
	.string "for our rental POKéMON.\p"
	.string "I need to save the battle data,\n"
	.string "so please wait.$"

BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch::
# 459 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Would you like to record your last\n"
	.string "BATTLE FACTORY match on your\l"
	.string "FRONTIER PASS?$"

BattleFrontier_BattleFactoryLobby_Text_NeedKnowledgeOfMonsMoves::
# 465 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Hi!\n"
	.string "You, there!\p"
	.string "Are you thinking that the events here\n"
	.string "are easy since you don't need to have\l"
	.string "a raised team of POKéMON?\p"
	.string "I wouldn't be too sure about winning\n"
	.string "that easily.\p"
	.string "If you don't have thorough knowledge\n"
	.string "about POKéMON and their moves,\l"
	.string "it will be tough to keep winning.$"

BattleFrontier_BattleFactoryLobby_Text_SwappedForWeakMon::
# 481 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "I swapped for a weak POKéMON…\n"
	.string "I thought it was a good kind to have…\p"
	.string "They wiped the floor with us…$"

BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons::
# 488 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Things haven't been going my way\n"
	.string "at all.\p"
	.string "You need to check your opponent's\n"
	.string "POKéMON during battle to see if\l"
	.string "they're any good.$"

BattleFrontier_BattleFactoryLobby_Text_CantFigureOutStaffHints::
# 497 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You know how the staff here give you\n"
	.string "a few hints about your next opponent?\p"
	.string "Well, I'm a full-grown man, but I have\n"
	.string "trouble figuring out their hints.$"

BattleFrontier_BattleFactoryLobby_Text_RentalMonsAreVaried::
# 506 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Like, I'm really tough, but I get bored\n"
	.string "really easily, so I just kept swapping\l"
	.string "and battling over and over.\p"
	.string "So anyway, when I kept entering\n"
	.string "Battle Swap events, I noticed they\l"
	.string "varied the rental POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_RulesAreListed::
# 516 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "The Battle Swap rules are listed.$"

BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading::
# 520 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "Which heading do you want to read?$"

BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules::
# 524 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In a Battle Swap event, you may use\n"
	.string "only three POKéMON.\p"
	.string "Whether you are renting or swapping,\n"
	.string "your team may not have two or more\l"
	.string "of the same POKéMON.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules::
# 533 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "You may swap POKéMON only with\n"
	.string "the TRAINER you have just defeated.\p"
	.string "You may swap for only those POKéMON\n"
	.string "used by the beaten TRAINER.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules::
# 541 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "After every battle you win, you may\n"
	.string "swap for one of your defeated\l"
	.string "opponent's POKéMON.\p"
	.string "You will not be able to swap POKéMON\n"
	.string "with the seventh TRAINER in the event.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules::
# 550 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "There are two key points to be aware\n"
	.string "of when swapping POKéMON.\p"
	.string "First, when swapping, you can't check\n"
	.string "the stats of the POKéMON you are\l"
	.string "about to receive.\p"
	.string "Second, the POKéMON on your team\n"
	.string "are lined up in sequence, depending on\l"
	.string "the order in which you rented them.\p"
	.string "This sequence remains unchanged\n"
	.string "even when swaps are made.$"

BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules::
# 566 "data/maps/BattleFrontier_BattleFactoryLobby/scripts.pory"
	.string "In the Open Level, the rental POKéMON\n"
	.string "and the opposing TRAINERS' POKéMON\l"
	.string "are all Level 100.$"
