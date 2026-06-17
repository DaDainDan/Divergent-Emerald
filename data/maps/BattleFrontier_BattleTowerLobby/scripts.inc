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
# 168 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterSinglesChallenge_1


BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge::
# 174 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 175 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 176 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 178 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_TENT
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_2
# 178 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_2
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_1:
# 181 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 182 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_7
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_6:
# 185 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 186 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 188 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 189 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 190 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 191 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 193 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_10
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_9:
# 214 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
	end

BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_2:
# 179 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_7:
# 183 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_6

BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_10:
# 194 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 195 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_12
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_9

BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_12:
# 196 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 197 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 198 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 199 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 200 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 201 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 202 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 203 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 204 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 205 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 206 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_15
BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_14:
# 209 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 210 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, TRUE
# 211 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_9

BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_15:
# 207 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterSinglesChallenge_14


BattleFrontier_BattleTowerLobby_EventScript_DoublesAttendant::
# 219 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock_faceplayer
# 220 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 221 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 222 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle, MSGBOX_DEFAULT
# 223 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge
	end


BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge::
# 228 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge
# 229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 230 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 231 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_3
# 233 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_4
# 236 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_5
# 237 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_5
BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_1:
	end

BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_3:
# 232 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_4:
# 234 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 235 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_5:
# 238 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterDoublesChallenge_1


BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge::
# 244 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 245 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 246 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 247 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 248 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_TENT
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_2
# 248 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_2
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_1:
# 251 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 252 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_7
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_6:
# 255 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 256 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectFourMons, MSGBOX_DEFAULT
# 257 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 258 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 259 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 260 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 261 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
# 262 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 263 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_10
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_9:
# 284 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
	end

BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_2:
# 249 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_7:
# 253 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_6

BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_10:
# 264 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 265 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_12
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_9

BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_12:
# 266 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 267 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 268 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 269 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 270 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 271 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 272 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 274 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 275 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 276 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_15
BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_14:
# 279 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 280 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 281 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_9

BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_15:
# 277 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterDoublesChallenge_14


BattleFrontier_BattleTowerLobby_EventScript_MultisAttendant::
# 289 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock_faceplayer
# 290 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 291 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
# 292 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle, MSGBOX_DEFAULT
# 294 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge
	end


BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge::
# 299 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge
# 300 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 301 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 302 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_3
# 304 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_4
# 307 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_5
# 308 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_5
BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_1:
	end

BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_3:
# 303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_4:
# 305 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge, MSGBOX_DEFAULT
# 306 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_5:
# 309 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterMultisChallenge_1


BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge::
# 315 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_MULTIS
# 316 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 317 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 318 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_TENT
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_2
# 319 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_2
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_1:
# 322 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 323 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_7
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_6:
# 326 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 327 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons, MSGBOX_DEFAULT
# 328 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 329 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 330 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 331 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 333 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 334 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_10
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_9:
# 355 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
	end

BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_2:
# 320 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_7:
# 324 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_6

BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_10:
# 335 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 336 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_12
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_9

BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_12:
# 337 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 338 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 339 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 340 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 341 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 342 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 344 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 345 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 346 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 347 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_15
BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_14:
# 350 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 351 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_9

BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_15:
# 348 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterMultisChallenge_14


BattleFrontier_BattleTowerLobby_EventScript_LinkMultisAttendant::
# 360 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock_faceplayer
# 361 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_TOWER
# 362 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 363 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle, MSGBOX_DEFAULT
# 364 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge
	end


BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge::
# 369 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge
# 370 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 371 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 372 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_3
# 374 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_4
# 377 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_5
# 378 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_5
BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_1:
	end

BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_3:
# 373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_4:
# 375 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge, MSGBOX_DEFAULT
# 376 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_5:
# 379 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_AskEnterLinkMultisChallenge_1


BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge::
# 385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
# 386 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_WhichLevelMode
# 387 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 388 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 389 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_TENT
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_2
# 389 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_2
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_1:
# 392 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_checkineligible
# 393 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_7
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_6:
# 396 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 397 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons2, MSGBOX_DEFAULT
# 398 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 399 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 400 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 401 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 402 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
# 403 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 404 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_10
BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_9:
# 410 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge
	end

BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_2:
# 390 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_1

BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_7:
# 394 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_6

BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_10:
# 405 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering, MSGBOX_YESNO
# 406 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_12
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_9

BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_12:
# 407 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_TryEnterLinkMultisChallenge_9


# 414 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"

# 415 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_SaveBeforeLinkMultisChallenge::
# 416 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 417 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 418 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_init
# 419 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_set TOWER_DATA_WIN_STREAK_ACTIVE, TRUE
# 420 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 421 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 422 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 423 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 2
# 424 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ The command tower_save ultimately calls TrySavingData(SAVE_LINK), which writes data in SaveBlock1 and SaveBlock2
# 425 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ to the flash, but not data in PokemonStorage. The SaveGame script that follows asks the player to do a full save,
# 426 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ which they can opt out of. As a result the player can save their party and quit without having saved the PC.
# 427 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ This allows players to clone pokemon and their held items by withdrawing them (or erase them by despositing).
# 428 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#ifndef BUGFIX
# 429 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save 0
# 430 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#endif
# 431 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 432 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 433 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed
# 434 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ GAME_STAT_ENTERED_BATTLE_TOWER should not be incremented here, for two reasons:
# 435 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ 1. It is incremented again in BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful or BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
# 436 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
@ 2. If the player tries to connect, but fails, the counter will still be incremented even if the player never enters the tower.
# 437 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#ifndef BUGFIX
# 438 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 439 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
#endif
# 440 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	specialvar VAR_RESULT, IsWirelessAdapterConnected
# 441 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleTowerLobby_EventScript_TryWirelessLink
# 442 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink
# 443 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	end

BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan::
# 447 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock_faceplayer
# 448 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower
# 449 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 450 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 16, 4, MULTI_BATTLE_TOWER_FEELINGS, FALSE
# 451 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 452 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_3
# 455 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_4
# 458 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_5
# 461 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 3, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_6
# 462 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_6
BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_1:
# 466 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call Common_ShowEasyChatScreen
# 467 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lock_faceplayer
# 468 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 469 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_9
# 470 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_10
BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_7:
	release_end

BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_3:
# 453 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin, MSGBOX_DEFAULT
# 454 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_START
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_1

BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_4:
# 456 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon, MSGBOX_DEFAULT
# 457 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_WON
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_1

BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_5:
# 459 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost, MSGBOX_DEFAULT
# 460 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_BATTLE_LOST
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_1

BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_6:
# 463 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt, MSGBOX_DEFAULT
	release_end

BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_9:
# 469 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChangedYourMind, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_7

BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_10:
# 470 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_FeelingsMan_7


BattleFrontier_BattleTowerLobby_EventScript_Woman::
# 476 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded, MSGBOX_NPC
	end


BattleFrontier_BattleTowerLobby_EventScript_Boy::
# 481 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins, MSGBOX_NPC
	end


BattleFrontier_BattleTowerLobby_EventScript_ShowSinglesResults::
# 486 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 487 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_SINGLES
# 488 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 489 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 490 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleTowerLobby_EventScript_ShowDoublesResults::
# 495 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 496 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_DOUBLES
# 497 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 498 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 499 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleTowerLobby_EventScript_ShowMultisResults::
# 504 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 505 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_MULTIS
# 506 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 507 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 508 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleTowerLobby_EventScript_ShowLinkMultisResults::
# 513 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 514 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_TOWER, FRONTIER_MODE_LINK_MULTIS
# 515 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitbuttonpress
# 516 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special RemoveRecordsWindow
# 517 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons::
# 522 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_50
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_2
# 529 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_OPEN
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_3
BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_1:
# 536 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 537 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
	release_end

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_2:
# 523 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 524 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_7
# 525 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_8
# 526 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Multis, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_1

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_3:
# 530 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 531 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_11
# 532 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_12
# 533 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenMultis, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_1

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_7:
# 524 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Singles, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_1

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_8:
# 525 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Doubles, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_1

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_11:
# 531 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_1

BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_12:
# 532 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenDoubles, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_NotEnoughValidMons_1


BattleFrontier_BattleTowerLobby_EventScript_CancelChallengeSaveFailed::
# 542 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS
# 543 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	end


BattleFrontier_BattleTowerLobby_EventScript_LoadPartyCancelChallenge::
# 548 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special LoadPlayerParty
# 549 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 550 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	return


BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge::
# 554 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 555 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge, MSGBOX_DEFAULT
	release_end


BattleFrontier_BattleTowerLobby_EventScript_EnterElevator::
# 560 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SavePlayerParty
# 561 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_PARTY_ORDER
# 562 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 563 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_3
# 564 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_4
# 565 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_5
# 566 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_6
BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_1:
# 568 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CallFrontierUtilFunc
# 569 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 570 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad
	end

BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_3:
# 563 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_1

BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_4:
# 564 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DOUBLES_PARTY_SIZE
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_1

BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_5:
# 565 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_1

BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_6:
# 566 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_MULTI_PARTY_SIZE
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator_1


BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad::
# 575 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_loadlinkopponents
# 576 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 1
# 577 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_ne BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_2
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_1:
# 580 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 581 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_6
# 582 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_7
# 583 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_8
# 584 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_9
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_4:
# 586 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_LINK_MULTIS
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_11
# 591 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom, MSGBOX_DEFAULT
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_10:
# 593 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closemessage
# 594 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 595 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_16
# 598 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_17
# 601 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_18
# 604 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case FRONTIER_MODE_LINK_MULTIS, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_19
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_14:
# 608 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_Movement_0
# 609 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_Movement_0
# 610 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmovement 0
# 611 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	opendoor VAR_0x8004, 1
# 612 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitdooranim
# 613 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_Movement_1
# 614 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_Movement_2
# 615 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmovement 0
# 616 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	closedoor VAR_0x8004, 1
# 617 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitdooranim
# 618 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	clearflag FLAG_CANCEL_BATTLE_ROOM_CHALLENGE
# 619 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 1, 6
# 620 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 621 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitstate
	end

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_2:
# 578 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_1

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_6:
# 581 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_4

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_7:
# 582 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_4

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_8:
# 583 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_4

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_9:
# 584 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_4

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_11:
# 587 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	messageautoscroll BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom
# 588 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 589 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	delay 48
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_10

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_16:
# 596 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_SINGLES
# 597 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 6
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_14

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_17:
# 599 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_DOUBLES
# 600 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 10
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_14

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_18:
# 602 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_MULTIS
# 603 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 14
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_14

BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_19:
# 605 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TOWER_ATTENDANT_LINK_MULTIS
# 606 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, 18
	goto BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_14


# 626 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_Movement_UnusedEnterElevator:
# 628 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	run_up
# 628 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	run_up
# 628 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	run_up
# 628 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	run_up
# 628 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	run_up
# 629 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
	step_end

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink::
# 633 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, USING_BATTLE_TOWER
# 634 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message gText_PleaseWaitForLink
# 635 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 636 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8005, 0
# 637 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TryBattleLinkup
# 638 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 639 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_3
# 640 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_SOMEONE_NOT_READY, BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_4
# 641 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_DIFF_SELECTIONS, BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_5
# 642 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_WRONG_NUM_PLAYERS, BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_6
# 643 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_7
# 644 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_CONNECTION_ERROR, BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_8
# 645 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_9
BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1:
	end

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_3:
# 639 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_4:
# 640 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto CableClub_EventScript_AbortLinkSomeoneNotReady
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_5:
# 641 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_6:
# 642 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLinkIncorrectNumberOfPlayers
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_7:
# 643 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_8:
# 644 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto CableClub_EventScript_AbortLinkConnectionError
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1

BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_9:
# 645 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink
	goto BattleFrontier_BattleTowerLobby_EventScript_TryCableLink_1


BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections::
# 651 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 652 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	compare VAR_0x8005, 3
	goto_if_eq BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections_2
# 657 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox Text_PlayersMadeDifferentSelections, MSGBOX_DEFAULT
	release_end

BattleFrontier_BattleTowerLobby_EventScript_AbortLinkDifferentSelections_2:
# 653 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode, MSGBOX_DEFAULT
# 654 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode, MSGBOX_DEFAULT
	release_end


BattleFrontier_BattleTowerLobby_EventScript_AbortLinkIncorrectNumberOfPlayers::
# 662 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers, MSGBOX_DEFAULT
# 663 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 664 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox CableClub_Text_IncorrectNumberOfParticipants, MSGBOX_DEFAULT
	release_end


BattleFrontier_BattleTowerLobby_EventScript_AbortLink::
# 669 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special CloseLink
# 670 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_0x8005
# 671 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_AbortLink_3
# 672 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_AbortLink_4
# 673 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_AbortLink_5
# 674 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode, MSGBOX_DEFAULT
BattleFrontier_BattleTowerLobby_EventScript_AbortLink_1:
	release_end

BattleFrontier_BattleTowerLobby_EventScript_AbortLink_3:
# 671 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink_1

BattleFrontier_BattleTowerLobby_EventScript_AbortLink_4:
# 672 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink_1

BattleFrontier_BattleTowerLobby_EventScript_AbortLink_5:
# 673 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink_1


BattleFrontier_BattleTowerLobby_EventScript_CableLinkSuccessful::
# 680 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 681 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 682 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
# 683 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 684 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 685 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SaveForBattleTowerLink
# 686 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 687 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 688 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special TrySetBattleTowerLinkType
# 689 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
	end


BattleFrontier_BattleTowerLobby_EventScript_TryWirelessLink::
# 694 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_BATTLE_TOWER
# 695 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
	end


BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader::
# 700 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message CableClub_Text_ChooseGroupLeaderOfTwo
# 701 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 702 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 16, 6, MULTI_LINK_LEADER, FALSE
# 703 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 704 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_3
# 705 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_4
# 706 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_5
# 707 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_5
BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_1:
	end

BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_3:
# 704 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_1

BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_4:
# 705 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_1

BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_5:
# 708 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader_1


BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader::
# 714 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call CableClub_EventScript_TryBecomeLinkLeader
# 715 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 716 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_3
# 717 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_4
# 718 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_RETRY_ROLE_ASSIGN, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_5
# 719 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_6
BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_1:
# 721 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
	return

BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_3:
# 716 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_1

BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_4:
# 717 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_1

BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_5:
# 718 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_1

BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_6:
# 719 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink
	goto BattleFrontier_BattleTowerLobby_EventScript_TryBecomeLeader_1


BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup::
# 726 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	call CableClub_EventScript_TryJoinLinkGroup
# 727 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 728 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_SUCCESS, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_3
# 729 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_FAILED, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_4
# 730 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_RETRY_ROLE_ASSIGN, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_5
# 731 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case LINKUP_FAILED_BATTLE_TOWER, BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_6
BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_1:
# 733 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	release
	return

BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_3:
# 728 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_1

BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_4:
# 729 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ChooseLeader
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_1

BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_5:
# 730 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_1

BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_6:
# 731 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_AbortLink
	goto BattleFrontier_BattleTowerLobby_EventScript_TryJoinGroup_1


BattleFrontier_BattleTowerLobby_EventScript_WirelessLinkSuccessful::
# 738 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_BATTLE_TOWER
# 739 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, FALSE
# 740 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn
# 741 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 742 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	tower_save CHALLENGE_STATUS_SAVING
# 743 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	special SaveForBattleTowerLink
# 744 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	playse SE_SAVE
# 745 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitse
# 746 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_EnterElevator
	end


BattleFrontier_BattleTowerLobby_EventScript_RulesBoard::
# 751 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	lockall
# 752 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 753 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard::
# 758 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ReadWhichHeading
# 759 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	waitmessage
# 760 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	multichoice 17, 2, MULTI_BATTLE_TOWER_RULES, FALSE
# 761 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	switch VAR_RESULT
# 762 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 0, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_3
# 763 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 1, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_4
# 764 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 2, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_5
# 765 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 3, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_6
# 766 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case 4, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_7
# 767 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_7
BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1:
# 771 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_3:
# 762 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_4:
# 763 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_5:
# 764 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_6:
# 765 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	msgbox BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleTowerLobby_EventScript_ReadRulesBoard_7:
# 768 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	releaseall
	end


# 608 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_Movement_0:
# 608 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 608 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 608 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
	step_end

# 613 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_Movement_1:
# 613 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 613 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
	step_end

# 614 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
BattleFrontier_BattleTowerLobby_EventScript_WaitForLinkOpponentLoad_Movement_2:
# 614 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 614 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	walk_up
# 614 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	set_invisible
	step_end

BattleFrontier_BattleTowerLobby_Text_DirectYouToBattleRoom::
# 776 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I'll direct you to your BATTLE ROOM now.$"

BattleFrontier_BattleTowerLobby_Text_DidntSaveBeforeQuitting::
# 780 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You didn't save before you quit your\n"
	.string "challenge last time.\p"
	.string "Because of that, your challenge so far\n"
	.string "has been disqualified. Sorry!$"

BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven::
# 790 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Congratulations!\n"
	.string "You've beaten all seven TRAINERS!$"

BattleFrontier_BattleTowerLobby_Text_EarnedFabulousPrize::
# 798 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "For beating seven TRAINERS in a row,\n"
	.string "you have earned this fabulous prize!$"

BattleFrontier_BattleTowerLobby_Text_ReceivedPrize::
# 805 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_BagFullMakeRoom::
# 811 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Oh, your BAG appears to be full.\p"
	.string "Please make room in your BAG, then come\n"
	.string "see me.$"

BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying::
# 818 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Thank you for playing!$"

BattleFrontier_BattleTowerLobby_Text_RecordWillBeSaved::
# 824 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your record will be saved.\n"
	.string "Please wait.$"

BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou::
# 829 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "We've been waiting for you!$"

BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved::
# 835 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Before entering a BATTLE ROOM, your\n"
	.string "progress will be saved. Please wait.$"

BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer::
# 840 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You're finally about to face the\n"
	.string "50th TRAINER.\p"
	.string "From here on, every time you beat seven\n"
	.string "TRAINERS in a row, your POKéMON will\l"
	.string "receive a commemorative RIBBON.\p"
	.string "Good luck!$"

BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons::
# 851 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Here are some RIBBONS for beating\n"
	.string "seven tough TRAINERS in a row.\p"
	.string "{PLAYER} received some RIBBONS!$"

BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons::
# 858 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} put the RIBBONS on\n"
	.string "the challenger POKéMON.$"

BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower::
# 863 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me, do you have a moment?\p"
	.string "Can you describe your feelings when\n"
	.string "you're about to begin a BATTLE TOWER\l"
	.string "match, or when you've either won or\l"
	.string "lost a match?$"

BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin::
# 872 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Okay, what are your feelings when\n"
	.string "you're about to begin a match?$"

BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon::
# 877 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "What do you feel when you've won\n"
	.string "a match?$"

BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost::
# 882 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Can I hear about your feelings when\n"
	.string "you have lost a match?$"

BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt::
# 887 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Oh, so you don't think much about it?\n"
	.string "You're one cool customer.$"

BattleFrontier_BattleTowerLobby_Text_ChangedYourMind::
# 892 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Hunh? You changed your mind?\n"
	.string "I guess you're fickle.$"

BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel::
# 897 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Okay, so that's how you feel?\n"
	.string "That's quite original.\p"
	.string "Thanks!$"

BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded::
# 904 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The number of matches you win in a row\n"
	.string "is recorded.\p"
	.string "I'd better not get beaten in\n"
	.string "an embarrassing way!$"

BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins::
# 912 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Once you've entered the BATTLE TOWER,\n"
	.string "you can't leave until you either lose\l"
	.string "or you beat seven TRAINERS in a row.\p"
	.string "You'd best be certain that you're up\n"
	.string "to the challenge.$"

BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction::
# 922 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER\n"
	.string "DOUBLE BATTLE CORNER!\p"
	.string "Unfortunately, the BATTLE ROOMS\n"
	.string "are still under construction.\p"
	.string "Please come back when the work\n"
	.string "is completed.$"

BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction::
# 934 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Welcome to the BATTLE TOWER\n"
	.string "MULTI BATTLE CORNER!\p"
	.string "Unfortunately, the BATTLE ROOMS\n"
	.string "are still under construction.\p"
	.string "Please come back when the work\n"
	.string "is completed.$"

BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge::
# 945 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "We look forward to seeing you on\n"
	.string "another challenge!$"

BattleFrontier_BattleTowerLobby_Text_WhichLevelMode::
# 950 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE ROOM offers two levels\n"
	.string "of challenge, Level 50 and Open Level.\l"
	.string "Which is your choice?$"

BattleFrontier_BattleTowerLobby_Text_PleaseSelectMons::
# 957 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please select the POKéMON you wish\n"
	.string "to enter.$"

BattleFrontier_BattleTowerLobby_Text_OkayToSaveBeforeEntering::
# 962 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Before entering a BATTLE ROOM, your\n"
	.string "progress must be saved. Is that okay?$"

BattleFrontier_BattleTowerLobby_Text_ShowYouToBattleRoom::
# 967 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I will now show you to the\n"
	.string "{STR_VAR_1} BATTLE ROOM.$"

BattleFrontier_BattleTowerLobby_Text_RecordLastMatch::
# 972 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Shall I record your last BATTLE TOWER\n"
	.string "match on your FRONTIER PASS?$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50::
# 978 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have {STR_VAR_2} eligible POKéMON.\p"
	.string "You must have {STR_VAR_2} different POKéMON\n"
	.string "of Level 50 or less to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsEnd::
# 992 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please come see me when you are ready.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpen::
# 997 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have {STR_VAR_2} eligible POKéMON.\p"
	.string "You must have {STR_VAR_2} different POKéMON\n"
	.string "to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Singles::
# 1011 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have three eligible POKéMON.\p"
	.string "You must have three different POKéMON\n"
	.string "of Level 50 or less to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenSingles::
# 1025 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have three eligible POKéMON.\p"
	.string "You must have three different POKéMON\n"
	.string "to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Doubles::
# 1039 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have four eligible POKéMON.\p"
	.string "You must have four different POKéMON\n"
	.string "of Level 50 or less to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenDoubles::
# 1053 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have four eligible POKéMON.\p"
	.string "You must have four different POKéMON\n"
	.string "to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLv50Multis::
# 1067 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have two eligible POKéMON.\p"
	.string "You must have two different POKéMON\n"
	.string "of Level 50 or less to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_NotEnoughValidMonsLvOpenMultis::
# 1081 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have two eligible POKéMON.\p"
	.string "You must have two different POKéMON\n"
	.string "to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_WelcomSingleBattle::
# 1095 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE TOWER!\p"
	.string "I am your guide to the SINGLE\n"
	.string "BATTLE ROOMS.$"

BattleFrontier_BattleTowerLobby_Text_TakeSinglesChallenge::
# 1105 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the SINGLE\n"
	.string "BATTLE ROOM challenge?$"

BattleFrontier_BattleTowerLobby_Text_ExplainSinglesChallenge::
# 1110 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
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
# 1131 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the three POKéMON\n"
	.string "that are to be entered.$"

BattleFrontier_BattleTowerLobby_Text_WelcomeDoubleBattle::
# 1136 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE TOWER!\p"
	.string "I am your guide to the DOUBLE\n"
	.string "BATTLE ROOMS.$"

BattleFrontier_BattleTowerLobby_Text_TakeDoublesChallenge::
# 1146 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the DOUBLE\n"
	.string "BATTLE ROOM challenge?$"

BattleFrontier_BattleTowerLobby_Text_ExplainDoublesChallenge::
# 1151 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
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
# 1172 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the four POKéMON\n"
	.string "that are to be entered.$"

BattleFrontier_BattleTowerLobby_Text_WelcomeMultiBattle::
# 1177 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE TOWER!\p"
	.string "I am your guide to the MULTI\n"
	.string "BATTLE ROOMS.$"

BattleFrontier_BattleTowerLobby_Text_TakeMultisChallenge::
# 1187 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the MULTI\n"
	.string "BATTLE ROOM challenge?$"

BattleFrontier_BattleTowerLobby_Text_ExplainMultisChallenge::
# 1192 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
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
# 1224 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the two POKéMON\n"
	.string "that are to be entered.$"

BattleFrontier_BattleTowerLobby_Text_WelcomeLinkMultiBattle::
# 1229 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Where the talents of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE TOWER!\p"
	.string "I am your guide to the LINK MULTI\n"
	.string "BATTLE ROOMS.$"

BattleFrontier_BattleTowerLobby_Text_TakeLinkMultisChallenge::
# 1239 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Would you like to take the LINK MULTI\n"
	.string "BATTLE ROOM challenge?$"

BattleFrontier_BattleTowerLobby_Text_ExplainLinkMultisChallenge::
# 1244 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
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
# 1273 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Now please select the two POKéMON\n"
	.string "that are to be entered.$"

BattleFrontier_BattleTowerLobby_Text_ChoseSameMonAsFriend::
# 1279 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "You have chosen the same kind of\n"
	.string "POKéMON as your friend.\p"
	.string "Please choose two POKéMON different\n"
	.string "from your friend's, match the level\l"
	.string "you wish to enter, and register again.$"

BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers::
# 1288 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The LINK MULTI BATTLE ROOM challenge\n"
	.string "is only for two linked players.$"

BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMon::
# 1293 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected\n"
	.string "the POKéMON {STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_FriendAlsoSelectedMons::
# 1298 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has also selected the\n"
	.string "POKéMON {STR_VAR_1} and {STR_VAR_2}.$"

BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlMode::
# 1303 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
	.string "battle level.$"

BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMon::
# 1309 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
	.string "battle level.\p"
	.string "Your friend has also selected\n"
	.string "the POKéMON {STR_VAR_1}.$"

BattleFrontier_BattleTowerLobby_Text_FriendChoseDifferentLvlModeSameMons::
# 1318 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Your friend has chosen a different\n"
	.string "battle level.\p"
	.string "Your friend has also selected the\n"
	.string "POKéMON {STR_VAR_1} and {STR_VAR_2}.$"

BattleFrontier_BattleTowerLobby_Text_ChooseDifferentMonsMatchLvlMode::
# 1326 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Please choose two POKéMON different\n"
	.string "from your friend's, match the level\l"
	.string "you wish to enter, and register again.$"

BattleFrontier_BattleTowerLobby_Text_SaveGameBeforeShowingIn::
# 1332 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "I will save the game before\n"
	.string "showing you in. Please wait.$"

BattleFrontier_BattleTowerLobby_Text_CongratsDefeatedMaiden::
# 1337 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Congratulations!\n"
	.string "You have defeated the SALON MAIDEN\l"
	.string "and swept seven TRAINERS!$"

BattleFrontier_BattleTowerLobby_Text_AwardYouTheseBattlePoints::
# 1343 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "In recognition of your infinite talent,\n"
	.string "we award you these Battle Point(s).$"

BattleFrontier_Text_ObtainedXBattlePoints::
# 1348 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "{PLAYER} obtained {STR_VAR_1} Battle Point(s).$"

BattleFrontier_BattleTowerLobby_Text_RulesAreListed::
# 1352 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER rules are listed.$"

BattleFrontier_BattleTowerLobby_Text_ReadWhichHeading::
# 1356 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Which heading do you want to read?$"

BattleFrontier_BattleTowerLobby_Text_ExplainTowerRules::
# 1360 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE TOWER is a facility where\n"
	.string "four types of battles are waged--\l"
	.string "SINGLE BATTLE, DOUBLE BATTLE, MULTI\l"
	.string "BATTLE, and LINK MULTI BATTLE.\p"
	.string "For each of these types, there are\n"
	.string "separate BATTLE ROOMS.\p"
	.string "Please speak with a guide offering\n"
	.string "the type of battle you wish to enter.$"

BattleFrontier_BattleTowerLobby_Text_ExplainMonRules::
# 1373 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "Depending on the BATTLE ROOM you are\n"
	.string "entering, you will be required to take\l"
	.string "a certain number of POKéMON.\p"
	.string "The SINGLE BATTLE mode requires\n"
	.string "three POKéMON.\p"
	.string "The DOUBLE BATTLE mode requires four,\n"
	.string "and the MULTI modes both require two.$"

BattleFrontier_BattleTowerLobby_Text_ExplainSalonRules::
# 1385 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
	.string "The BATTLE SALON is where you must\n"
	.string "find a partner to form a tag team for\l"
	.string "the MULTI BATTLE ROOM challenge.\p"
	.string "Choose the best partner for you by\n"
	.string "examining other TRAINERS'\l"
	.string "POKéMON and their moves.\p"
	.string "You may choose a new tag partner\n"
	.string "after winning seven straight matches.$"

BattleFrontier_BattleTowerLobby_Text_ExplainMultiLinkRules::
# 1398 "data/maps/BattleFrontier_BattleTowerLobby/scripts.pory"
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
