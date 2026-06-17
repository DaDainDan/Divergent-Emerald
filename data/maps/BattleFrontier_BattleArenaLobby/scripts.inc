BattleFrontier_BattleArenaLobby_MapScripts::
# 2 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 12 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleArenaLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleFrontier_BattleArenaLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleArenaLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 7 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving
# 8 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge
# 9 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleArenaLobby_EventScript_WonChallenge
# 10 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleArenaLobby_EventScript_LostChallenge
	.2byte 0

BattleFrontier_BattleArenaLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_getstatus
	end

BattleFrontier_BattleArenaLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 13 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleArenaLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattleArenaLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 14 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving::
# 22 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 23 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown, MSGBOX_DEFAULT
# 24 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 25 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK, 0
# 26 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 27 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 28 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 29 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleArenaLobby_EventScript_WonChallenge::
# 34 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 35 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_isbrain
# 36 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_WonChallenge_2
# 39 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins, MSGBOX_DEFAULT
BattleFrontier_BattleArenaLobby_EventScript_WonChallenge_1:
# 41 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints
	end

BattleFrontier_BattleArenaLobby_EventScript_WonChallenge_2:
# 37 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_WonChallenge_1


BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints::
# 46 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints, MSGBOX_DEFAULT
# 47 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_givepoints
# 48 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 49 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordAchievement
# 50 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 51 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ChallengeEnded
	end


BattleFrontier_BattleArenaLobby_EventScript_LostChallenge::
# 56 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 57 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
# 58 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 59 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 60 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ChallengeEnded
	end


BattleFrontier_BattleArenaLobby_EventScript_ChallengeEnded::
# 65 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
# 66 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 67 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 68 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 69 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge::
# 74 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkairshow
# 75 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 76 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special HealPlayerParty
# 77 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 78 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save 0
# 79 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 80 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 81 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_get FRONTIER_DATA_RECORD_DISABLED
# 82 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_2
BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_1:
	return

BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_2:
# 83 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
# 84 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 85 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 86 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_4
	goto BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_1

BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_4:
# 87 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
	goto BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge_1


BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge::
# 94 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 95 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
# 96 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 97 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save CHALLENGE_STATUS_SAVING
# 98 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 99 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 100 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 101 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 102 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge
	end


BattleFrontier_BattleArenaLobby_EventScript_Attendant::
# 107 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lock_faceplayer
# 108 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_ARENA
# 109 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 110 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 111 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena, MSGBOX_DEFAULT
# 112 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge
	end


BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge::
# 117 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
# 118 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 119 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 120 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 121 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_3
# 122 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_4
# 125 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 2, BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_5
# 126 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_5
BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_1:
	end

BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_3:
# 121 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge
	goto BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_1

BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_4:
# 123 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainChallenge, MSGBOX_DEFAULT
# 124 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge
	goto BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_1

BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_5:
# 127 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge_1


BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge::
# 133 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
# 134 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 135 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 136 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_TENT
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_2
# 136 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_2
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_1:
# 139 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkineligible
# 140 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_7
# 149 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 150 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 151 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 152 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 153 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 154 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 155 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 156 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 157 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_10
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_9:
# 160 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OkayToSave, MSGBOX_YESNO
# 161 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 162 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case YES, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_18
# 163 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case NO, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_19
# 164 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_19
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_16:
	end

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_2:
# 137 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_1

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_7:
# 141 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 142 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_14
# 143 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_15
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_12:
# 145 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 146 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
	release_end

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_10:
# 158 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_9

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_14:
# 142 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_12

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_15:
# 143 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_12

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_18:
# 162 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_16

BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_19:
# 165 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
	goto BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge_16


BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge::
# 171 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 172 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 173 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_init
# 174 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, TRUE
# 175 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 176 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 177 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 178 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 179 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	delay 2
# 180 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 181 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 182 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge_2
BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge_1:
# 186 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge
	end

BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge_2:
# 183 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 184 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge_1


BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge::
# 191 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 192 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 193 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_GuideYouToArena, MSGBOX_DEFAULT
# 194 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 195 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 196 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 197 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_3
# 202 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_4
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_1:
# 208 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 209 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_Movement_4
# 210 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_Movement_5
# 211 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 212 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 213 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_7
# 214 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_8
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_5:
# 216 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 217 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_CORRIDOR, 9, 13
# 218 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 219 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitstate
	end

BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_3:
# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_Movement_0
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_Movement_1
# 200 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 201 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 2, 2
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_1

BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_4:
# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ARENA_ATTENDANT, BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_Movement_2
# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_Movement_3
# 205 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 206 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 11, 2
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_1

BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_7:
# 213 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 2, 2
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_5

BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_8:
# 214 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 11, 2
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_5


BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge::
# 224 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 225 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 226 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
	end


BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge::
# 231 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
	release_end


BattleFrontier_BattleArenaLobby_EventScript_ShowResults::
# 236 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 237 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_ARENA
# 238 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitbuttonpress
# 239 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special RemoveRecordsWindow
# 240 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleArenaLobby_EventScript_Youngster::
# 245 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack, MSGBOX_NPC
	end


BattleFrontier_BattleArenaLobby_EventScript_Man::
# 250 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked, MSGBOX_NPC
	end


BattleFrontier_BattleArenaLobby_EventScript_Camper::
# 255 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw, MSGBOX_NPC
	end


BattleFrontier_BattleArenaLobby_EventScript_Woman::
# 260 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant, MSGBOX_NPC
	end


BattleFrontier_BattleArenaLobby_EventScript_RulesBoard::
# 265 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 266 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 267 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard::
# 272 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading
# 273 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 274 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 2, MULTI_BATTLE_ARENA_RULES, FALSE
# 275 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 276 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_3
# 277 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_4
# 278 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 2, BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_5
# 279 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 3, BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_6
# 280 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 4, BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_7
# 281 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_7
BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1:
# 285 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_3:
# 276 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_4:
# 277 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainMindRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_5:
# 278 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_6:
# 279 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard_7:
# 282 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
	end


# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_Movement_0:
# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
	step_end

# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_Movement_1:
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_faster_up
	step_end

# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_Movement_2:
# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
	step_end

# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_Movement_3:
# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_faster_up
	step_end

# 209 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_Movement_4:
# 209 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 209 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
	step_end

# 210 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge_Movement_5:
# 210 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 210 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 210 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
	step_end

BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena::
# 289 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Where the battling spirit of TRAINERS\n"
	.string "is put to the test!\p"
	.string "I welcome you to the BATTLE ARENA!\p"
	.string "I am your guide to the Set KO Tourney!$"

BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge::
# 298 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Now, do you wish to take\n"
	.string "the BATTLE ARENA challenge?$"

BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge::
# 303 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We await your challenge on\n"
	.string "another occasion!$"

BattleFrontier_BattleArenaLobby_Text_ExplainChallenge::
# 308 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In the BATTLE ARENA, we undertake\n"
	.string "the Set KO Tourney.\p"
	.string "All participants enter with a team of\n"
	.string "three POKéMON.\p"
	.string "The three POKéMON must be lined up in\n"
	.string "the order in which they are to appear.\p"
	.string "During battle, the POKéMON will appear\n"
	.string "one at a time in the preset order.\p"
	.string "Once a POKéMON enters battle, it must\n"
	.string "remain out until the match is decided.\p"
	.string "If a match remains undecided in\n"
	.string "three turns, it goes to judging.\p"
	.string "If you wish to interrupt your challenge,\n"
	.string "please save the game.\p"
	.string "If you don't save, you will not be able\n"
	.string "to continue with your challenge.\p"
	.string "If you pull off the feat of beating\n"
	.string "seven TRAINERS in succession,\l"
	.string "we will present you with Battle Points.$"

BattleFrontier_BattleArenaLobby_Text_OkayToSave::
# 338 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Before showing you to the BATTLE\n"
	.string "ARENA, you must save. Is that okay?$"

BattleFrontier_BattleArenaLobby_Text_WhichLevelMode::
# 343 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The BATTLE ARENA offers two levels\n"
	.string "of challenge, Level 50 and Open Level.\l"
	.string "Which is your choice?$"

BattleFrontier_BattleArenaLobby_Text_SelectThreeMons::
# 349 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Very well, now select your\n"
	.string "three POKéMON, please.$"

BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen::
# 354 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger!\p"
	.string "You do not have the three POKéMON\n"
	.string "required for entry.\p"
	.string "To qualify, you must bring three\n"
	.string "different kinds of POKéMON.\p"
	.string "They also must not hold the same\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsEnd::
# 369 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "When you have made your preparations,\n"
	.string "please do return.$"

BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50::
# 374 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger!\p"
	.string "You do not have the three POKéMON\n"
	.string "required for entry.\p"
	.string "To qualify, you must bring three\n"
	.string "different kinds of POKéMON.\p"
	.string "The three different POKéMON\n"
	.string "must all be Level 50 or lower.\p"
	.string "They also must not hold the same\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleArenaLobby_Text_GuideYouToArena::
# 392 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I shall now guide you to\n"
	.string "the BATTLE ARENA.$"

BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown::
# 397 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger!\p"
	.string "You did not save the game before\n"
	.string "shutting down, did you?\p"
	.string "It is unfortunate, but that has\n"
	.string "resulted in your disqualification\l"
	.string "from your challenge.\p"
	.string "You may, of course, start with a fresh\n"
	.string "challenge.$"

BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins::
# 411 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We congratulate you for your splendid\n"
	.string "string of wins over seven TRAINERS!$"

BattleFrontier_BattleArenaLobby_Text_RecordAchievement::
# 416 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Your achievement will be recorded.\n"
	.string "Please wait while I save the game.$"

BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize::
# 422 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In commemoration of your 7-win streak,\n"
	.string "we present you with this prize.$"

BattleFrontier_BattleArenaLobby_Text_ReceivedPrize::
# 428 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize::
# 434 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Oh?\n"
	.string "Your BAG seems to be full.\p"
	.string "I urge you to clear space and\n"
	.string "return for your prize.$"

BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave::
# 442 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Thank you so much for participating!\p"
	.string "Please wait while I save the game.$"

BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2::
# 448 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We await your challenge on\n"
	.string "another occasion!$"

BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame::
# 453 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We have been looking forward to\n"
	.string "your arrival.\p"
	.string "Before I show you to the BATTLE\n"
	.string "ARENA, I must save the game.\l"
	.string "Please wait.$"

BattleFrontier_BattleArenaLobby_Text_RecordLastMatch::
# 462 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Shall I record your last BATTLE ARENA\n"
	.string "match on your FRONTIER PASS?$"

BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack::
# 467 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I lost on the REFEREE's decision…\p"
	.string "I don't think it was a good idea to only\n"
	.string "use defensive moves and not attack…$"

BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked::
# 474 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I won in judging!\p"
	.string "Landing hits consistently on\n"
	.string "the opponent's POKéMON worked!$"

BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw::
# 481 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Our match was declared a draw.\p"
	.string "When we ran out of time, both my\n"
	.string "POKéMON and the opponent's had about\l"
	.string "the same amount of HP left.$"

BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant::
# 489 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In the BATTLE ARENA, the order of\n"
	.string "POKéMON is totally important.\p"
	.string "For example, if your first POKéMON\n"
	.string "has certain type disadvantages,\l"
	.string "try making your second POKéMON one\l"
	.string "with moves that are super effective\l"
	.string "against the first one.\p"
	.string "I think that will be a good way of\n"
	.string "making an effective team.$"

BattleFrontier_BattleArenaLobby_Text_RulesAreListed::
# 503 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The Set KO Tourney's rules are listed.$"

BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading::
# 507 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Which heading do you want to read?$"

BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules::
# 511 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The Set KO Tourney has special rules,\n"
	.string "unlike standard battles.\p"
	.string "First, one battle lasts only\n"
	.string "three turns.\p"
	.string "If the outcome is not decided after\n"
	.string "three turns, it goes to judging.\p"
	.string "The REFEREE will choose the winner\n"
	.string "based on how the POKéMON battled.\p"
	.string "Also, a POKéMON cannot be switched out\n"
	.string "until its battle's outcome is decided.$"

BattleFrontier_BattleArenaLobby_Text_ExplainMindRules::
# 528 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The first judging factor is “Mind.”\n"
	.string "This factor evaluates how aggressive\l"
	.string "the battlers were.\p"
	.string "The judging is based on how often\n"
	.string "the TRAINERS ordered the use of\l"
	.string "offensive moves.$"

BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules::
# 538 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The second judging factor is “Skill.”\n"
	.string "This factor evaluates how effectively\l"
	.string "POKéMON moves were used.\p"
	.string "If a move worked successfully,\n"
	.string "the Skill rating goes up.\p"
	.string "If a move failed, the Skill rating\n"
	.string "is lowered.\p"
	.string "If it was an offensive move, the Skill\n"
	.string "rating goes up if the move was “super\l"
	.string "effective” and goes down if it was\l"
	.string "“not very effective.”\p"
	.string "The Skill rating will not go up for\n"
	.string "moves such as PROTECT and DETECT.\p"
	.string "If the opponent used PROTECT or\n"
	.string "DETECT, and your POKéMON failed to\l"
	.string "hit with a move, its Skill rating will not\l"
	.string "go down.$"

BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules::
# 563 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The third judging factor is “Body.”\n"
	.string "This factor is based on how much HP\l"
	.string "remained at the end of a battle.\p"
	.string "The rating takes into account how much\n"
	.string "HP a POKéMON had at the start of\l"
	.string "battle, and what remained at the end.$"

BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon::
# 573 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "A victory snatched from the ARENA\n"
	.string "TYCOON, and a seven-TRAINER sweep!\p"
	.string "We congratulate you on your most\n"
	.string "splendid challenge!$"

BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints::
# 581 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger, in recognition of\n"
	.string "your indefatigable spirit, please\l"
	.string "accept these Battle Point(s).$"
