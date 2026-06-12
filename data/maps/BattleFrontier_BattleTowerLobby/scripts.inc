BattleFrontier_BattleTowerLobby_MapScripts::
# 2 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_RESUME
# 6 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 17 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 27 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TryHideBattleTowerReporter
	end

BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_ShowOrHideReporter
# 8 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	apprentice_shouldcheckgone
# 9 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 12 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_HIDE_APPRENTICE
# 13 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	apprentice_setgfx
BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setflag FLAG_HIDE_APPRENTICE
	goto BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 9 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_set FLAG_DAILY_APPRENTICE_LEAVES, BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION_3

BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 18 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 22 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleTowerLobby_EventScript_QuitWithoutSaving
# 23 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge
# 24 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleTowerLobby_EventScript_WonChallenge
# 25 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleTowerLobby_EventScript_LostChallenge
	.2byte 0

BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 19 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_getstatus
	end

BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 28 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattleTowerLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 29 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 30 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattleTowerLobby_EventScript_QuitWithoutSaving::
# 37 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock_faceplayer
# 38 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 39 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 40 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK, 0
# 41 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, FALSE
# 42 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 43 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	release_end


BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge::
# 48 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock_faceplayer
# 49 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge_2
BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge_1:
# 52 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou
# 53 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 54 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved
# 55 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 56 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 57 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 58 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 59 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 60 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
	end

BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge_2:
# 50 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, TRUE
	goto BattleFrontier_BattleTowerLobby_EventScript_ResumeChallenge_1


BattleFrontier_BattleTowerLobby_EventScript_WonChallenge::
# 65 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock_faceplayer
# 66 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_isbrain
# 67 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_2
# 70 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven
# 71 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_1:
# 73 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_giveribbons
# 74 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_6
BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_5:
# 81 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints, MSGBOX_DEFAULT
# 82 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_givepoints
# 83 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 84 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle
# 85 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 86 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 49
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_9
BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_8:
# 89 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 90 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 91 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 92 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative UpdateFollowingPokemon
	release_end

BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_2:
# 68 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_6:
# 75 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons
# 76 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 77 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 78 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitfanfare
# 79 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_5

BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_9:
# 87 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_WonChallenge_8


BattleFrontier_BattleTowerLobby_EventScript_LostChallenge::
# 97 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_4
BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_3:
# 103 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, FALSE
BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_1:
# 105 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock_faceplayer
# 106 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying
# 107 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 108 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle
# 109 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
# 110 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 111 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 112 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative UpdateFollowingPokemon
	release_end

BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_2:
# 98 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 99 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_7
	goto BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_4:
# 97 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_unset FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_2
	goto BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_3

BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_7:
# 100 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, FALSE
	goto BattleFrontier_BattleTowerLobby_EventScript_LostChallenge_1


BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle::
# 117 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_RecordWillBeSaved
# 118 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 119 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkairshow
# 120 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 121 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special HealPlayerParty
# 122 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save 0
# 123 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 124 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 125 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_RECORD_DISABLED
# 126 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_2
BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_1:
	return

BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_2:
# 127 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_RecordLastMatch
# 128 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 129 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 130 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_4
	goto BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_1

BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_4:
# 131 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_EventScript_SaveBattle
	goto BattleFrontier_BattleTowerLobby_EventScript_AskSaveBattle_1


BattleFrontier_EventScript_SaveBattle::
# 138 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_savebattle
# 139 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_EventScript_SaveBattle_2
# 142 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 143 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass, MSGBOX_DEFAULT
BattleFrontier_EventScript_SaveBattle_1:
	return

BattleFrontier_EventScript_SaveBattle_2:
# 140 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved, MSGBOX_DEFAULT
	goto BattleFrontier_EventScript_SaveBattle_1


BattleFrontier_BattleTowerLobby_EventScript_SinglesAttendant::
# 149 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock_faceplayer
# 150 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 151 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 152 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle, MSGBOX_DEFAULT
# 153 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge
	end


BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge::
# 158 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge
# 159 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 160 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 161 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 162 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_3
# 163 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_4
# 166 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_5
# 167 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_5
BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_1:
	end

BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_3:
# 162 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_4:
# 164 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
# 165 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_5:
# 167 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_1


BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge::
# 173 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 174 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 175 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 176 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_TENT
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_2
# 177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_2
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_1:
# 180 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 181 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_7
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_6:
# 184 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 185 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 186 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 188 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 189 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 190 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 191 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_10
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_9:
# 213 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
	end

BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_2:
# 178 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_7:
# 182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_6

BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_10:
# 193 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 194 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_12
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_9

BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_12:
# 195 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 196 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 197 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 198 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 199 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 200 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 201 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 202 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 203 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 204 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 205 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_15
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_14:
# 208 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 209 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, TRUE
# 210 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_9

BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_15:
# 206 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_14


BattleFrontier_BattleTowerLobby_EventScript_DoublesAttendant::
# 218 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock_faceplayer
# 219 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 220 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 221 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle, MSGBOX_DEFAULT
# 222 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge
	end


BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge::
# 227 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge
# 228 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 230 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_3
# 232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_4
# 235 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_5
# 236 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_5
BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_1:
	end

BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_3:
# 231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_4:
# 233 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 234 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_5:
# 236 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_1


BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge::
# 242 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 243 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 244 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 245 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 246 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_TENT
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_2
# 246 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_2
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_1:
# 249 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 250 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_7
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_6:
# 253 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 254 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons, MSGBOX_DEFAULT
# 255 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 256 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 257 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 258 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 259 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
# 260 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 261 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_10
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_9:
# 282 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
	end

BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_2:
# 247 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_7:
# 251 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_6

BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_10:
# 262 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 263 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_12
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_9

BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_12:
# 264 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 265 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 266 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 267 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 268 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 269 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 270 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 271 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 272 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 274 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_15
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_14:
# 277 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 278 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 279 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_9

BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_15:
# 275 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_14


BattleFrontier_BattleTowerLobby_EventScript_MultisAttendant::
# 287 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock_faceplayer
# 288 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 289 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
# 290 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 291 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle, MSGBOX_DEFAULT
# 292 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge
	end


BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge::
# 297 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge
# 298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 299 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 300 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 301 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_3
# 302 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_4
# 305 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_5
# 306 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_5
BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_1:
	end

BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_3:
# 301 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_4:
# 303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge, MSGBOX_DEFAULT
# 304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_5:
# 306 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_1


BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge::
# 312 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 313 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 314 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 315 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 316 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_TENT
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_2
# 316 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_2
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_1:
# 319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 320 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_7
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_6:
# 323 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 324 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons, MSGBOX_DEFAULT
# 325 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 326 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 327 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 328 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 329 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 330 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 331 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_10
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_9:
# 352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
	end

BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_2:
# 317 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_7:
# 321 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_6

BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_10:
# 332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 333 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_12
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_9

BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_12:
# 334 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 335 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 336 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 337 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 338 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 339 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 340 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 341 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 342 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 344 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_15
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_14:
# 347 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 348 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 349 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_9

BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_15:
# 345 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_14


BattleFrontier_BattleTowerLobby_EventScript_LinkMultisAttendant::
# 357 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock_faceplayer
# 358 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 359 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 360 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle, MSGBOX_DEFAULT
# 361 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge
	end


BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge::
# 366 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge
# 367 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 368 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 369 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 370 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_3
# 371 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_4
# 374 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_5
# 375 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_5
BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_1:
	end

BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_3:
# 370 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_4:
# 372 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge, MSGBOX_DEFAULT
# 373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_5:
# 375 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_1


BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge::
# 381 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 382 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 383 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 384 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_TENT
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_2
# 385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_2
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_1:
# 388 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 389 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_7
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_6:
# 392 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 393 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons2, MSGBOX_DEFAULT
# 394 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 395 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 396 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 397 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 398 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 399 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 400 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_10
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_9:
# 406 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
	end

BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_2:
# 386 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_7:
# 390 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_6

BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_10:
# 401 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 402 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_12
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_9

BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_12:
# 403 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_9


# 410 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 411 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge::
# 412 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 413 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 414 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 415 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 416 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 417 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 418 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 419 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 420 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ The command tower_save ultimately calls TrySavingData(SAVE_LINK), which writes data in SaveBlock1 and SaveBlock2
# 421 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ to the flash, but not data in PokemonStorage. The SaveGame script that follows asks the player to do a full save,
# 422 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ which they can opt out of. As a result the player can save their party and quit without having saved the PC.
# 423 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ This allows players to clone pokemon and their held items by withdrawing them (or erase them by despositing).
# 424 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#ifndef BUGFIX
# 425 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save 0
# 426 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#endif
# 427 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 428 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 429 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 430 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ GAME_STAT_ENTERED_BATTLE_TOWER should not be incremented here, for two reasons:
# 431 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ 1. It is incremented again in BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful or BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 432 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ 2. If the player tries to connect, but fails, the counter will still be incremented even if the player never enters the tower.
# 433 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#ifndef BUGFIX
# 434 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 435 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#endif
# 436 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	specialvar VAR_RESULT, IsWirelessAdapterConnected
# 437 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerLobby_EventScript_TryWirelessLink
# 438 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink
# 439 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end

BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan::
# 443 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock_faceplayer
# 444 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower
# 445 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 446 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 16, 4, MULTI_BATTLE_TOWER_FEELINGS, FALSE
# 447 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 448 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_3
# 451 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_4
# 454 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_5
# 457 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 3, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_6
# 458 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_6
BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_1:
# 462 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 463 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock_faceplayer
# 464 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 465 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_9
# 466 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_10
BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_7:
	release_end

BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_3:
# 449 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin, MSGBOX_DEFAULT
# 450 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_START
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_1

BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_4:
# 452 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon, MSGBOX_DEFAULT
# 453 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_WON
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_1

BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_5:
# 455 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost, MSGBOX_DEFAULT
# 456 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_LOST
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_1

BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_6:
# 459 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt, MSGBOX_DEFAULT
	release_end

BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_9:
# 465 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChangedYourMind, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_7

BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_10:
# 466 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_7


BattleFrontier_BattleTowerLobby_EventScript_Woman::
# 472 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded, MSGBOX_NPC
	end


BattleFrontier_BattleTowerLobby_EventScript_Boy::
# 477 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins, MSGBOX_NPC
	end


BattleFrontier_BattleTowerLobby_EventScript_ShowSinglesResults::
# 482 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 483 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_SINGLES
# 484 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 485 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 486 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleTowerLobby_EventScript_ShowDoublesResults::
# 491 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 492 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_DOUBLES
# 493 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 494 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 495 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleTowerLobby_EventScript_ShowMultisResults::
# 500 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 501 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_MULTIS
# 502 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 503 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 504 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleTowerLobby_EventScript_ShowLinkMultisResults::
# 509 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 510 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_LINK_MULTIS
# 511 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 512 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 513 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons::
# 518 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_50
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_2
# 525 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_OPEN
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_3
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_1:
# 532 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 533 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
	release_end

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_2:
# 519 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 520 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_7
# 521 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_8
# 522 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Multis, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_1

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_3:
# 526 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 527 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_11
# 528 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_12
# 529 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenMultis, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_1

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_7:
# 520 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Singles, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_1

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_8:
# 521 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Doubles, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_1

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_11:
# 527 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_1

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_12:
# 528 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenDoubles, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_1


BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed::
# 538 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS
# 539 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	end


BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge::
# 544 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 545 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 546 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	return


BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge::
# 550 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 551 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
	release_end


BattleFrontier_BattleTowerLobby_EventScript_EnterElevator::
# 556 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 557 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_PARTY_ORDER
# 558 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 559 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_3
# 560 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_4
# 561 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_5
# 562 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_6
BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_1:
# 564 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CallFrontierUtilFunc
# 565 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 566 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad
	end

BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_3:
# 559 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_1

BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_4:
# 560 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_1

BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_5:
# 561 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_1

BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_6:
# 562 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_1


BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad::
# 571 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_loadlinkopponents
# 572 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 1
# 573 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_2
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_1:
# 576 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 577 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_6
# 578 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_7
# 579 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_8
# 580 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_9
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_4:
# 582 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_11
# 587 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom, MSGBOX_DEFAULT
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_10:
# 589 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 590 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 591 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_16
# 594 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_17
# 597 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_18
# 600 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_19
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_14:
# 604 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_Movement_0
# 605 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_Movement_0
# 606 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmovement 0
# 607 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	opendoor VAR_0x8004, 1
# 608 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitdooranim
# 609 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_Movement_1
# 610 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_Movement_2
# 611 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmovement 0
# 612 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closedoor VAR_0x8004, 1
# 613 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitdooranim
# 614 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_CANCEL_BATTLE_ROOM_CHALLENGE
# 615 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 1, 6
# 616 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 617 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
	end

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_2:
# 574 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_1

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_6:
# 577 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_4

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_7:
# 578 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_4

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_8:
# 579 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_4

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_9:
# 580 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_4

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_11:
# 583 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	messageautoscroll BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom
# 584 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 585 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 48
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_10

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_16:
# 592 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_SINGLES
# 593 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 6
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_14

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_17:
# 595 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_DOUBLES
# 596 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 10
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_14

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_18:
# 598 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_MULTIS
# 599 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 14
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_14

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_19:
# 601 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_LINK_MULTIS
# 602 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 18
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_14


# 622 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_UnusedEnterElevator:
# 624 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	run_up
# 624 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	run_up
# 624 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	run_up
# 624 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	run_up
# 624 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	run_up
# 625 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
	step_end

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink::
# 629 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, USING_BATTLE_TOWER
# 630 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message gText_PleaseWaitForLink
# 631 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 632 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, 0
# 633 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TryBattleLinkup
# 634 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 635 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_3
# 636 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_SOMEONE_NOT_READY, BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_4
# 637 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_DIFF_SELECTIONS, BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_5
# 638 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_WRONG_NUM_PLAYERS, BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_6
# 639 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_7
# 640 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_CONNECTION_ERROR, BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_8
# 641 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_9
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1:
	end

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_3:
# 635 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_4:
# 636 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto CableClub_EventScript_AbortLinkSomeoneNotReady
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_5:
# 637 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_6:
# 638 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLinkIncorrectNumberOfPlayers
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_7:
# 639 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_8:
# 640 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto CableClub_EventScript_AbortLinkConnectionError
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_9:
# 641 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1


BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections::
# 647 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 648 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8005, 3
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections_2
# 653 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox Text_PlayersMadeDifferentSelections, MSGBOX_DEFAULT
	release_end

BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections_2:
# 649 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode, MSGBOX_DEFAULT
# 650 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode, MSGBOX_DEFAULT
	release_end


BattleFrontier_BattleTowerLobby_EventScript_AbortLinkIncorrectNumberOfPlayers::
# 658 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers, MSGBOX_DEFAULT
# 659 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 660 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox CableClub_Text_IncorrectNumberOfParticipants, MSGBOX_DEFAULT
	release_end


BattleFrontier_BattleTowerLobby_EventScript_AbortLink::
# 665 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 666 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_0x8005
# 667 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_AbortLink_3
# 668 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_AbortLink_4
# 669 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_AbortLink_5
# 670 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode, MSGBOX_DEFAULT
BattleFrontier_BattleTowerLobby_EventScript_AbortLink_1:
	release_end

BattleFrontier_BattleTowerLobby_EventScript_AbortLink_3:
# 667 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink_1

BattleFrontier_BattleTowerLobby_EventScript_AbortLink_4:
# 668 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink_1

BattleFrontier_BattleTowerLobby_EventScript_AbortLink_5:
# 669 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink_1


BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful::
# 676 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 677 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 678 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
# 679 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 680 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 681 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SaveForBattleTowerLink
# 682 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 683 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 684 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TrySetBattleTowerLinkType
# 685 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
	end


BattleFrontier_BattleTowerLobby_EventScript_TryWirelessLink::
# 690 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_BATTLE_TOWER
# 691 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
	end


BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader::
# 696 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message CableClub_Text_ChooseGroupLeaderOfTwo
# 697 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 698 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 16, 6, MULTI_LINK_LEADER, FALSE
# 699 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 700 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_3
# 701 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_4
# 702 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_5
# 703 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_5
BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_1:
	end

BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_3:
# 700 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_1

BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_4:
# 701 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_1

BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_5:
# 703 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_1


BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader::
# 709 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call CableClub_EventScript_TryBecomeLinkLeader
# 710 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 711 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_3
# 712 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_4
# 713 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_RETRY_ROLE_ASSIGN, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_5
# 714 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_6
BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_1:
# 716 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
	return

BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_3:
# 711 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_1

BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_4:
# 712 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_1

BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_5:
# 713 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_1

BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_6:
# 714 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_1


BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup::
# 721 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call CableClub_EventScript_TryJoinLinkGroup
# 722 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 723 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_3
# 724 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_4
# 725 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_RETRY_ROLE_ASSIGN, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_5
# 726 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_6
BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_1:
# 728 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
	return

BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_3:
# 723 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_1

BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_4:
# 724 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_1

BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_5:
# 725 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_1

BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_6:
# 726 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_1


BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful::
# 733 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 734 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 735 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
# 736 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 737 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 738 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SaveForBattleTowerLink
# 739 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 740 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 741 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
	end


BattleFrontier_BattleTowerLobby_EventScript_RulesBoard::
# 746 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 747 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 748 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard::
# 753 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ReadWhichHeading
# 754 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 755 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 2, MULTI_BATTLE_TOWER_RULES, FALSE
# 756 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 757 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_3
# 758 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_4
# 759 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_5
# 760 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 3, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_6
# 761 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 4, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_7
# 762 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_7
BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1:
# 766 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_3:
# 757 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_4:
# 758 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_5:
# 759 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_6:
# 760 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_7:
# 763 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
	end


# 604 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_Movement_0:
# 604 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 604 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 604 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
	step_end

# 609 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_Movement_1:
# 609 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 609 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
	step_end

# 610 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_Movement_2:
# 610 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 610 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 610 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
	step_end

BattleFrontier_BattleTowerLobby_Text_DirectYouToBattleRoom::
# 771 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I'll direct you to your BATTLE ROOM now.$"

BattleFrontier_BattleTowerLobby_Text_DidntSaveBeforeQuitting::
# 775 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You didn't save before you quit your\n"
	.string "challenge last time.\p"
	.string "Because of that, your challenge so far\n"
	.string "has been disqualified. Sorry!$"

BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven::
# 785 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Congratulations!\n"
	.string "You've beaten all seven TRAINERS!$"

BattleFrontier_BattleTowerLobby_Text_EarnedFabulousPrize::
# 793 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "For beating seven TRAINERS in a row,\n"
	.string "you have earned this fabulous prize!$"

BattleFrontier_BattleTowerLobby_Text_ReceivedPrize::
# 800 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_BagFullMakeRoom::
# 806 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Oh, your BAG appears to be full.\p"
	.string "Please make room in your BAG, then come\n"
	.string "see me.$"

BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying::
# 813 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Thank you for playing!$"

BattleFrontier_BattleTowerLobby_Text_RecordWillBeSaved::
# 819 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your record will be saved.\n"
	.string "Please wait.$"

BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou::
# 824 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "We've been waiting for you!$"

BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved::
# 830 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Before entering a BATTLE ROOM, your\n"
	.string "progress will be saved. Please wait.$"

BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer::
# 835 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You're finally about to face the\n"
	.string "50th TRAINER.\p"
	.string "From here on, every time you beat seven\n"
	.string "TRAINERS in a row, your POKéMON will\l"
	.string "receive a commemorative RIBBON.\p"
	.string "Good luck!$"

BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons::
# 846 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Here are some RIBBONS for beating\n"
	.string "seven tough TRAINERS in a row.\p"
	.string "{PLAYER} received some RIBBONS!$"

BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons::
# 853 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} put the RIBBONS on\n"
	.string "the challenger POKéMON.$"

BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower::
# 858 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me, do you have a moment?\p"
	.string "Can you describe your feelings when\n"
	.string "you're about to begin a BATTLE TOWER\l"
	.string "match, or when you've either won or\l"
	.string "lost a match?$"

BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin::
# 867 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Okay, what are your feelings when\n"
	.string "you're about to begin a match?$"

BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon::
# 872 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "What do you feel when you've won\n"
	.string "a match?$"

BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost::
# 877 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Can I hear about your feelings when\n"
	.string "you have lost a match?$"

BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt::
# 882 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Oh, so you don't think much about it?\n"
	.string "You're one cool customer.$"

BattleFrontier_BattleTowerLobby_Text_ChangedYourMind::
# 887 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Hunh? You changed your mind?\n"
	.string "I guess you're fickle.$"

BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel::
# 892 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Okay, so that's how you feel?\n"
	.string "That's quite original.\p"
	.string "Thanks!$"

BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded::
# 899 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The number of matches you win in a row\n"
	.string "is recorded.\p"
	.string "I'd better not get beaten in\n"
	.string "an embarrassing way!$"

BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins::
# 907 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Once you've entered the BATTLE TOWER,\n"
	.string "you can't leave until you either lose\l"
	.string "or you beat seven TRAINERS in a row.\p"
	.string "You'd best be certain that you're up\n"
	.string "to the challenge.$"

BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction::
# 917 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER\n"
	.string "DOUBLE BATTLE CORNER!\p"
	.string "Unfortunately, the BATTLE ROOMS\n"
	.string "are still under construction.\p"
	.string "Please come back when the work\n"
	.string "is completed.$"

BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction::
# 929 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER\n"
	.string "MULTI BATTLE CORNER!\p"
	.string "Unfortunately, the BATTLE ROOMS\n"
	.string "are still under construction.\p"
	.string "Please come back when the work\n"
	.string "is completed.$"

BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge::
# 940 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "We look forward to seeing you on\n"
	.string "another challenge!$"

BattleFrontier_BattleTowerLobby_Text_WhichLevelMode::
# 945 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE ROOM offers two levels\n"
	.string "of challenge, Level 50 and Open Level.\l"
	.string "Which is your choice?$"

BattleFrontier_BattleTowerLobby_Text_PleaseSelectMons::
# 952 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please select the POKéMON you wish\n"
	.string "to enter.$"

BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering::
# 957 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Before entering a BATTLE ROOM, your\n"
	.string "progress must be saved. Is that okay?$"

BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom::
# 962 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I will now show you to the\n"
	.string "{STR_VAR_1} BATTLE ROOM.$"

BattleFrontier_BattleTowerLobby_Text_RecordLastMatch::
# 967 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Shall I record your last BATTLE TOWER\n"
	.string "match on your FRONTIER PASS?$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50::
# 973 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have {STR_VAR_2} eligible POKéMON.\p"
	.string "You must have {STR_VAR_2} different POKéMON\n"
	.string "of Level 50 or less to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd::
# 987 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpen::
# 992 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have {STR_VAR_2} eligible POKéMON.\p"
	.string "You must have {STR_VAR_2} different POKéMON\n"
	.string "to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Singles::
# 1006 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have three eligible POKéMON.\p"
	.string "You must have three different POKéMON\n"
	.string "of Level 50 or less to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles::
# 1020 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have three eligible POKéMON.\p"
	.string "You must have three different POKéMON\n"
	.string "to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Doubles::
# 1034 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have four eligible POKéMON.\p"
	.string "You must have four different POKéMON\n"
	.string "of Level 50 or less to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenDoubles::
# 1048 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have four eligible POKéMON.\p"
	.string "You must have four different POKéMON\n"
	.string "to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Multis::
# 1062 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have two eligible POKéMON.\p"
	.string "You must have two different POKéMON\n"
	.string "of Level 50 or less to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenMultis::
# 1076 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have two eligible POKéMON.\p"
	.string "You must have two different POKéMON\n"
	.string "to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle::
# 1090 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE TOWER!\p"
	.string "I am your guide to the SINGLE\n"
	.string "BATTLE ROOMS.$"

BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge::
# 1100 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the SINGLE\n"
	.string "BATTLE ROOM challenge?$"

BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge::
# 1105 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER's SINGLE BATTLE\n"
	.string "ROOMS are facilities for conducting\l"
	.string "SINGLE BATTLES with three POKéMON.\p"
	.string "There are many SINGLE BATTLE ROOMS\n"
	.string "in the BATTLE TOWER for team battles.\p"
	.string "In each of the SINGLE BATTLE ROOMS,\n"
	.string "seven TRAINERS await your challenge.\p"
	.string "If you manage to defeat all seven,\n"
	.string "you will earn Battle Points.\p"
	.string "If you want to interrupt your\n"
	.string "challenge, please save the game.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattleTowerLobby_Text_SelectThreeMons::
# 1126 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the three POKéMON\n"
	.string "that are to be entered.$"

BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle::
# 1131 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE TOWER!\p"
	.string "I am your guide to the DOUBLE\n"
	.string "BATTLE ROOMS.$"

BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge::
# 1141 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the DOUBLE\n"
	.string "BATTLE ROOM challenge?$"

BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge::
# 1146 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER's DOUBLE BATTLE\n"
	.string "ROOMS are facilities for conducting\l"
	.string "DOUBLE BATTLES with four POKéMON.\p"
	.string "There are many DOUBLE BATTLE ROOMS\n"
	.string "in the BATTLE TOWER for team battles.\p"
	.string "In each of the DOUBLE BATTLE ROOMS,\n"
	.string "seven TRAINERS await your challenge.\p"
	.string "If you manage to defeat all seven,\n"
	.string "you will earn Battle Points.\p"
	.string "If you want to interrupt your\n"
	.string "challenge, please save the game.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons::
# 1167 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the four POKéMON\n"
	.string "that are to be entered.$"

BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle::
# 1172 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE TOWER!\p"
	.string "I am your guide to the MULTI\n"
	.string "BATTLE ROOMS.$"

BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge::
# 1182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the MULTI\n"
	.string "BATTLE ROOM challenge?$"

BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge::
# 1187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER's MULTI BATTLE\n"
	.string "ROOMS are facilities for conducting\l"
	.string "MULTI BATTLES.\p"
	.string "For MULTI BATTLES, you must partner\n"
	.string "with a TRAINER in the TOWER and enter\l"
	.string "with two POKéMON each.\p"
	.string "Inside the TOWER is a room named\n"
	.string "the BATTLE SALON where you may meet\l"
	.string "other TRAINERS.\p"
	.string "There, you must find a TRAINER to act\n"
	.string "as your partner in MULTI BATTLES.\p"
	.string "Once you have partnered up, you will\n"
	.string "be shown to a MULTI BATTLE ROOM.\p"
	.string "In the MULTI BATTLE ROOM, seven\n"
	.string "tag teams await your challenge.\p"
	.string "If you manage to defeat all seven\n"
	.string "teams, you will earn Battle Points.\p"
	.string "If you want to interrupt your\n"
	.string "challenge, please save the game.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons::
# 1219 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the two POKéMON\n"
	.string "that are to be entered.$"

BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle::
# 1224 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE TOWER!\p"
	.string "I am your guide to the LINK MULTI\n"
	.string "BATTLE ROOMS.$"

BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge::
# 1234 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the LINK MULTI\n"
	.string "BATTLE ROOM challenge?$"

BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge::
# 1239 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER's MULTI BATTLE\n"
	.string "ROOMS are facilities for conducting\l"
	.string "MULTI BATTLES with a friend.\p"
	.string "You must link with your friend using\n"
	.string "Wireless Adapters or a Game Boy\l"
	.string "Advance Game Link cable.\p"
	.string "You must partner with your friend and\n"
	.string "enter two different kinds of POKéMON.\p"
	.string "There are many MULTI BATTLE ROOMS\n"
	.string "in the BATTLE TOWER for team battles.\p"
	.string "In a MULTI BATTLE ROOM, seven\n"
	.string "tag teams await you and your friend\l"
	.string "to make a tag-team challenge.\p"
	.string "If you manage to defeat all seven\n"
	.string "teams, you will earn Battle Points.\p"
	.string "Please beware that unlike other ROOMS,\n"
	.string "you may not interrupt your challenge.\p"
	.string "Once you start, you must battle seven\n"
	.string "MULTI BATTLES in a row nonstop.$"

BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons2::
# 1268 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the two POKéMON\n"
	.string "that are to be entered.$"

BattleFrontier_BattleTowerLobby_Text_ChoseSameMonAsFriend::
# 1274 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You have chosen the same kind of\n"
	.string "POKéMON as your friend.\p"
	.string "Please choose two POKéMON different\n"
	.string "from your friend's, match the level\l"
	.string "you wish to enter, and register again.$"

BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers::
# 1283 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The LINK MULTI BATTLE ROOM challenge\n"
	.string "is only for two linked players.$"

BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon::
# 1288 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected\n"
	.string "the POKéMON {STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons::
# 1293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected the\n"
	.string "POKéMON {STR_VAR_1} and {STR_VAR_2}.$"

BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode::
# 1298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
	.string "battle level.$"

BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon::
# 1304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
	.string "battle level.\p"
	.string "Your friend has also selected\n"
	.string "the POKéMON {STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons::
# 1313 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
	.string "battle level.\p"
	.string "Your friend has also selected the\n"
	.string "POKéMON {STR_VAR_1} and {STR_VAR_2}.$"

BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode::
# 1321 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please choose two POKéMON different\n"
	.string "from your friend's, match the level\l"
	.string "you wish to enter, and register again.$"

BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn::
# 1327 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I will save the game before\n"
	.string "showing you in. Please wait.$"

BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden::
# 1332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Congratulations!\n"
	.string "You have defeated the SALON MAIDEN\l"
	.string "and swept seven TRAINERS!$"

BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints::
# 1338 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In recognition of your infinite talent,\n"
	.string "we award you these Battle Point(s).$"

BattleFrontier_Text_ObtainedXBattlePoints::
# 1343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} obtained {STR_VAR_1} Battle Point(s).$"

BattleFrontier_BattleTowerLobby_Text_RulesAreListed::
# 1347 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER rules are listed.$"

BattleFrontier_BattleTowerLobby_Text_ReadWhichHeading::
# 1351 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Which heading do you want to read?$"

BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules::
# 1355 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER is a facility where\n"
	.string "four types of battles are waged--\l"
	.string "SINGLE BATTLE, DOUBLE BATTLE, MULTI\l"
	.string "BATTLE, and LINK MULTI BATTLE.\p"
	.string "For each of these types, there are\n"
	.string "separate BATTLE ROOMS.\p"
	.string "Please speak with a guide offering\n"
	.string "the type of battle you wish to enter.$"

BattleFrontier_BattleTowerLobby_Text_ExplainMonRules::
# 1368 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Depending on the BATTLE ROOM you are\n"
	.string "entering, you will be required to take\l"
	.string "a certain number of POKéMON.\p"
	.string "The SINGLE BATTLE mode requires\n"
	.string "three POKéMON.\p"
	.string "The DOUBLE BATTLE mode requires four,\n"
	.string "and the MULTI modes both require two.$"

BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules::
# 1380 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE SALON is where you must\n"
	.string "find a partner to form a tag team for\l"
	.string "the MULTI BATTLE ROOM challenge.\p"
	.string "Choose the best partner for you by\n"
	.string "examining other TRAINERS'\l"
	.string "POKéMON and their moves.\p"
	.string "You may choose a new tag partner\n"
	.string "after winning seven straight matches.$"

BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules::
# 1393 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The LINK MULTI BATTLE Mode is for two\n"
	.string "friends to mount a challenge together.\p"
	.string "You and your friend must be linked with\n"
	.string "Wireless Adapters or a GBA Game Link\l"
	.string "cable.\p"
	.string "You must choose two POKéMON at\n"
	.string "the registration counter.\p"
	.string "These POKéMON must be different\n"
	.string "from those of your friend.\p"
	.string "You may not interrupt this challenge\n"
	.string "in the middle, unlike other modes.$"
