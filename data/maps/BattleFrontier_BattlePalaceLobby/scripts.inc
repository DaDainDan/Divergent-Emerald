BattleFrontier_BattlePalaceLobby_MapScripts::
# 2 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 12 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 7 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving
# 8 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge
# 9 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge
# 10 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge
	.2byte 0

BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_getstatus
	end

BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 13 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattlePalaceLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 14 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattlePalaceLobby_EventScript_QuitWithoutSaving::
# 22 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 23 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge, MSGBOX_DEFAULT
# 24 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 25 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK, 0
# 26 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
# 27 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 28 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 29 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge::
# 34 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 35 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_isbrain
# 36 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge_2
# 39 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak, MSGBOX_DEFAULT
BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge_1:
# 41 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints, MSGBOX_DEFAULT
# 42 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_givepoints
# 43 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 44 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded
# 45 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 46 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ChallengeEnded
	end

BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge_2:
# 37 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge_1


BattleFrontier_BattlePalaceLobby_EventScript_LostChallenge::
# 51 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 52 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded
# 53 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 54 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, FALSE
# 55 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ChallengeEnded
	end


BattleFrontier_BattlePalaceLobby_EventScript_ChallengeEnded::
# 60 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_checkairshow
# 61 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 62 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special HealPlayerParty
# 63 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 64 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_save 0
# 65 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	playse SE_SAVE
# 66 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitse
# 67 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_get FRONTIER_DATA_RECORD_DISABLED
# 68 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_ChallengeEnded_2
BattleFrontier_BattlePalaceLobby_EventScript_ChallengeEnded_1:
# 76 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
# 77 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 78 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 79 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
	end

BattleFrontier_BattlePalaceLobby_EventScript_ChallengeEnded_2:
# 69 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch
# 70 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 71 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 72 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_ChallengeEnded_4
	goto BattleFrontier_BattlePalaceLobby_EventScript_ChallengeEnded_1

BattleFrontier_BattlePalaceLobby_EventScript_ChallengeEnded_4:
# 73 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
	goto BattleFrontier_BattlePalaceLobby_EventScript_ChallengeEnded_1


BattleFrontier_BattlePalaceLobby_EventScript_ResumeChallenge::
# 84 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 85 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting, MSGBOX_DEFAULT
# 86 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge
# 87 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 88 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_save CHALLENGE_STATUS_SAVING
# 89 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	playse SE_SAVE
# 90 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitse
# 91 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 92 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 93 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge
	return


BattleFrontier_BattlePalaceLobby_EventScript_SinglesAttendant::
# 97 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lock_faceplayer
# 98 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 99 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 100 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant
	end


BattleFrontier_BattlePalaceLobby_EventScript_DoublesAttendant::
# 105 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lock_faceplayer
# 106 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 107 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 108 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant
	end


BattleFrontier_BattlePalaceLobby_EventScript_Attendant::
# 113 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_get PALACE_DATA_PRIZE
# 114 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_RESULT, ITEM_NONE
	goto_if_ne BattleFrontier_BattlePalaceLobby_EventScript_Attendant_2
BattleFrontier_BattlePalaceLobby_EventScript_Attendant_1:
# 117 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special SavePlayerParty
# 118 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 119 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_Attendant_6
# 120 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_Attendant_7
BattleFrontier_BattlePalaceLobby_EventScript_Attendant_4:
# 122 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge
	end

BattleFrontier_BattlePalaceLobby_EventScript_Attendant_2:
# 115 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_WonChallenge
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant_1

BattleFrontier_BattlePalaceLobby_EventScript_Attendant_6:
# 119 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant_4

BattleFrontier_BattlePalaceLobby_EventScript_Attendant_7:
# 120 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_Attendant_4


BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge::
# 127 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 128 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_3
# 129 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_4
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_1:
# 131 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 132 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 133 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 134 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_7
# 135 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_8
# 136 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_9
# 137 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_9
BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_5:
	end

BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_3:
# 128 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_1

BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_4:
# 129 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_1

BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_7:
# 134 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_5

BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_8:
# 135 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_5

BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_9:
# 138 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge_5


BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge::
# 144 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_WhichChallenge
# 145 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 146 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 147 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_TENT
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_2
# 147 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_2
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_1:
# 150 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_checkineligible
# 151 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_7
# 160 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 161 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons, MSGBOX_DEFAULT
# 162 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 163 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 164 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 165 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 166 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 167 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 168 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_10
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_9:
# 189 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge
	end

BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_2:
# 148 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_1

BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_7:
# 152 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 153 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_14
# 154 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_15
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_12:
# 156 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 157 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
	release_end

BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_10:
# 169 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge2, MSGBOX_YESNO
# 170 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_16
	goto BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_9

BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_14:
# 153 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_12

BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_15:
# 154 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_12

BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_16:
# 171 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 172 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 173 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_init
# 174 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	palace_set PALACE_DATA_WIN_STREAK_ACTIVE, TRUE
# 175 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 176 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 177 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 178 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 179 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	delay 2
# 180 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 181 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 182 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_19
BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_18:
# 186 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge
	goto BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_9

BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_19:
# 183 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 184 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattlePalaceLobby_EventScript_TryEnterChallenge_18


BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge::
# 194 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special SavePlayerParty
# 195 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 196 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FollowMe, MSGBOX_DEFAULT
# 197 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closemessage
# 198 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 199 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_3
# 200 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_4
BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_1:
# 202 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkUp
# 203 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 204 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmovement 0
# 205 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 206 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_7
# 207 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_8
BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_5:
# 209 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitdooranim
# 210 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_Movement_0
# 211 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_Movement_1
# 212 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmovement 0
# 213 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 214 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_11
# 215 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_12
BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_9:
# 217 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitdooranim
# 218 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR, 8, 13
# 219 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 220 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitstate
	end

BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_3:
# 199 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_PALACE_ATTENDANT_SINGLES
	goto BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_1

BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_4:
# 200 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_PALACE_ATTENDANT_DOUBLES
	goto BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_1

BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_7:
# 206 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	opendoor 5, 4
	goto BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_5

BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_8:
# 207 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	opendoor 19, 4
	goto BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_5

BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_11:
# 214 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closedoor 5, 4
	goto BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_9

BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_12:
# 215 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	closedoor 19, 4
	goto BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_9


BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge::
# 225 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	compare VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
	goto_if_eq BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge_2
# 228 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge, MSGBOX_DEFAULT
BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge_1:
# 230 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_AskTakeChallenge
	end

BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge_2:
# 226 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ExplainChallenge_1


BattleFrontier_BattlePalaceLobby_EventScript_LoadPartyAndCancelChallenge::
# 235 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special LoadPlayerParty
# 236 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	callnative LoadPlayerParty
# 237 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge
	return


BattleFrontier_BattlePalaceLobby_EventScript_CancelChallenge::
# 241 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified, MSGBOX_DEFAULT
	release_end


BattleFrontier_BattlePalaceLobby_EventScript_ShowSinglesResults::
# 246 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 247 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_SINGLES
# 248 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitbuttonpress
# 249 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special RemoveRecordsWindow
# 250 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattlePalaceLobby_EventScript_ShowDoublesResults::
# 255 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 256 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PALACE, FRONTIER_MODE_DOUBLES
# 257 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitbuttonpress
# 258 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	special RemoveRecordsWindow
# 259 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattlePalaceLobby_EventScript_BlackBelt::
# 264 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink, MSGBOX_NPC
	end


BattleFrontier_BattlePalaceLobby_EventScript_Man::
# 269 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere, MSGBOX_NPC
	end


BattleFrontier_BattlePalaceLobby_EventScript_Beauty::
# 274 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms, MSGBOX_NPC
	end


BattleFrontier_BattlePalaceLobby_EventScript_Maniac::
# 279 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway, MSGBOX_NPC
	end


BattleFrontier_BattlePalaceLobby_EventScript_RulesBoard::
# 284 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	lockall
# 285 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 286 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard::
# 291 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading
# 292 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	waitmessage
# 293 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	multichoice 16, 0, MULTI_BATTLE_PALACE_RULES, FALSE
# 294 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	switch VAR_RESULT
# 295 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 0, BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_3
# 296 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 1, BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_4
# 297 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 2, BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_5
# 298 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 3, BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_6
# 299 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 4, BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_7
# 300 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case 5, BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_8
# 301 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_8
BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_1:
# 305 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_3:
# 295 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_4:
# 296 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_5:
# 297 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_6:
# 298 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_7:
# 299 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattlePalaceLobby_EventScript_ReadRulesBoard_8:
# 302 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	releaseall
	end


# 210 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_Movement_0:
# 210 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 210 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	set_invisible
	step_end

# 211 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
BattleFrontier_BattlePalaceLobby_EventScript_EnterChallenge_Movement_1:
# 211 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 211 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	walk_up
# 211 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	set_invisible
	step_end

BattleFrontier_BattlePalaceLobby_Text_WelcomeForSingleBattle::
# 309 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Where the hearts of TRAINERS\n"
	.string "are put to the test.\p"
	.string "I welcome you to the BATTLE PALACE.\p"
	.string "I accept challenges to the SINGLE\n"
	.string "BATTLE HALLS.$"

BattleFrontier_BattlePalaceLobby_Text_TakeSingleBattleChallenge::
# 319 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Do you wish to take\n"
	.string "the SINGLE BATTLE HALL challenge?$"

BattleFrontier_BattlePalaceLobby_Text_ExplainSingleBattleChallenge::
# 324 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "In the BATTLE PALACE, there are\n"
	.string "several auditoriums for SINGLE BATTLES\l"
	.string "that are named SINGLE BATTLE HALLS.\p"
	.string "The SINGLE BATTLES are conducted in\n"
	.string "the usual way, except with one crucial\l"
	.string "rule that must be obeyed.\p"
	.string "TRAINERS are permitted only to switch\n"
	.string "their POKéMON in and out.\p"
	.string "TRAINERS are otherwise forbidden to\n"
	.string "command their POKéMON.\p"
	.string "The POKéMON are to behave according\n"
	.string "to their nature and battle on their own.\p"
	.string "You must put your trust in your\n"
	.string "POKéMON and watch over them.\p"
	.string "If you achieve the honor of beating\n"
	.string "seven TRAINERS in succession,\l"
	.string "we will present you with Battle Points.\p"
	.string "If you want to interrupt your\n"
	.string "challenge, you must save the game.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattlePalaceLobby_Text_ReturnWhenFortified::
# 356 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "When you have fortified your heart\n"
	.string "and POKéMON, you must return.$"

BattleFrontier_BattlePalaceLobby_Text_WhichChallenge::
# 361 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "There are two BATTLE HALLS,\n"
	.string "Level 50 and Open Level.\l"
	.string "Which is your choice of a challenge?$"

BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLv50::
# 367 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Sigh…\p"
	.string "You do not have the three POKéMON\n"
	.string "required for the challenge.\p"
	.string "To enter, you must provide three\n"
	.string "different kinds of POKéMON.\p"
	.string "These POKéMON must all be of\n"
	.string "Level 50 or lower.\p"
	.string "They also must not be holding\n"
	.string "the same kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsEnd::
# 385 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Come back when you have made\n"
	.string "your preparations.$"

BattleFrontier_BattlePalaceLobby_Text_NotEnoughValidMonsLvOpen::
# 390 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Sigh…\p"
	.string "You do not have the three POKéMON\n"
	.string "required for the challenge.\p"
	.string "To enter, you must provide three\n"
	.string "different kinds of POKéMON.\p"
	.string "They also must not be holding\n"
	.string "the same kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattlePalaceLobby_Text_NowSelectThreeMons::
# 405 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Good. Now, you must select your\n"
	.string "three POKéMON.$"

BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge2::
# 410 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I must save before I show you to\n"
	.string "the BATTLE HALL. Is that okay?$"

BattleFrontier_BattlePalaceLobby_Text_FollowMe::
# 415 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Good.\n"
	.string "Now, follow me.$"

BattleFrontier_BattlePalaceLobby_Text_ResultsWillBeRecorded::
# 420 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I feel privileged for having seen\n"
	.string "your POKéMON's exploits.\p"
	.string "The results will be recorded.\n"
	.string "I must ask you to briefly wait.$"

BattleFrontier_BattlePalaceLobby_Text_FirmTrueBondsFor7WinStreak::
# 428 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "To achieve a 7-win streak…\p"
	.string "The bonds that bind your heart with\n"
	.string "your POKéMON seem firm and true.$"

BattleFrontier_BattlePalaceLobby_Text_FeatWillBeRecorded::
# 435 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Your feat will be recorded.\n"
	.string "I must ask you to briefly wait.$"

BattleFrontier_BattlePalaceLobby_Text_BattlePointsFor7WinStreak::
# 441 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "For the feat of your 7-win streak,\n"
	.string "we present you with Battle Point(s).$"

BattleFrontier_BattlePalaceLobby_Text_NoSpaceForPrize::
# 446 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "You seem to have no space for\n"
	.string "our prize.\p"
	.string "You should return when you have\n"
	.string "organized your BAG.$"

BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting::
# 454 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "We have been waiting for you…$"

BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge::
# 458 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I must save before I show you to\n"
	.string "the BATTLE HALL. Is that okay?$"

BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge::
# 463 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Sigh…\p"
	.string "You failed to save before you ended\n"
	.string "your challenge the last time.\p"
	.string "As a result, your challenge has been\n"
	.string "disqualified. It is most unfortunate.$"

BattleFrontier_BattlePalaceLobby_Text_ReceivedPrize::
# 474 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattlePalaceLobby_Text_LadyCanTellWhatMonsThink::
# 479 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "For a hardy fellow like me,\n"
	.string "hardy POKéMON are the best.\p"
	.string "Offense is the best defense!\n"
	.string "A relentless attack is the ultimate!\p"
	.string "But that's not what I wanted to chat\n"
	.string "about.\p"
	.string "Every so often a really cute lady\n"
	.string "swings by here.\p"
	.string "She says that she can tell what\n"
	.string "POKéMON are thinking.\p"
	.string "I don't know about that part,\n"
	.string "but she is really cute.\p"
	.string "Huh?\n"
	.string "Why are you looking at me like that?$"

BattleFrontier_BattlePalaceLobby_Text_NatureAndMovesKeyHere::
# 502 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Hmm…\p"
	.string "It appears that the nature of POKéMON\n"
	.string "and the moves that they have been\l"
	.string "taught are the keys to battle here.\p"
	.string "To be more precise, it's how well\n"
	.string "the moves match the nature of\l"
	.string "the POKéMON.\p"
	.string "If your POKéMON is in trouble and\n"
	.string "unable to live up to its potential,\l"
	.string "you may need to examine how well\l"
	.string "its moves match its nature.$"

BattleFrontier_BattlePalaceLobby_Text_MonDocileButTransforms::
# 519 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "My POKéMON is usually very docile.\p"
	.string "But when it's in a BATTLE HALL,\n"
	.string "it sometimes seems to become\l"
	.string "transformed into something wicked!\p"
	.string "It becomes totally intimidating.\n"
	.string "It's shocking, even.$"

BattleFrontier_BattlePalaceLobby_Text_WhatNatureFavorsChippingAway::
# 530 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "I wonder what sort of nature a POKéMON\n"
	.string "would have if it favored enfeebling its\l"
	.string "opponents and chipping away slowly.\p"
	.string "I'd be surprised if it was a LAX nature.\p"
	.string "But, nah, that can't be right.$"

BattleFrontier_BattlePalaceLobby_Text_WelcomeForDoubleBattle::
# 540 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Where the hearts of TRAINERS\n"
	.string "are put to the test.\p"
	.string "I welcome you to the BATTLE PALACE.\p"
	.string "I accept challenges to the DOUBLE\n"
	.string "BATTLE HALLS.$"

BattleFrontier_BattlePalaceLobby_Text_TakeDoubleBattleChallenge::
# 550 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Do you wish to take\n"
	.string "the DOUBLE BATTLE HALL challenge?$"

BattleFrontier_BattlePalaceLobby_Text_ExplainDoubleBattleChallenge::
# 555 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "In the BATTLE PALACE, there are\n"
	.string "several auditoriums for DOUBLE BATTLES\l"
	.string "that are named DOUBLE BATTLE HALLS.\p"
	.string "The DOUBLE BATTLES are conducted in\n"
	.string "the usual way, except with one crucial\l"
	.string "rule that must be obeyed.\p"
	.string "TRAINERS are permitted only to switch\n"
	.string "their POKéMON in and out.\p"
	.string "TRAINERS are otherwise forbidden to\n"
	.string "command their POKéMON.\p"
	.string "The POKéMON are to behave according\n"
	.string "to their nature and battle on their own.\p"
	.string "You must put your trust in your\n"
	.string "POKéMON and watch over them.\p"
	.string "If you achieve the honor of beating\n"
	.string "seven TRAINERS in succession,\l"
	.string "we will present you with Battle Points.\p"
	.string "If you want to interrupt your\n"
	.string "challenge, please save the game.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattlePalaceLobby_Text_ToDefeatMavenAnd7Trainers::
# 587 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "To defeat the PALACE MAVEN\n"
	.string "and seven TRAINERS in a row…$"

BattleFrontier_BattlePalaceLobby_Text_PresentYouWithBattlePoints::
# 592 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "In honor of the bond you share with\n"
	.string "your POKéMON, we present you with\l"
	.string "these Battle Point(s).$"

BattleFrontier_BattlePalaceLobby_Text_LikeToRecordMatch::
# 598 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Would you like to record your latest\n"
	.string "BATTLE PALACE match on your\l"
	.string "FRONTIER PASS?$"

BattleFrontier_BattlePalaceLobby_Text_RulesAreListed::
# 604 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "The BATTLE HALL rules are listed.$"

BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading::
# 608 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Which heading do you want to read?$"

BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics::
# 612 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Here, POKéMON are required to think\n"
	.string "and battle by themselves.\p"
	.string "Unlike in the wild, POKéMON that live\n"
	.string "with people behave differently\l"
	.string "depending on their nature.$"

BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature::
# 621 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Depending on its nature, a POKéMON\n"
	.string "may prefer to attack no matter what.\p"
	.string "Another POKéMON may prefer to protect\n"
	.string "itself from any harm.\p"
	.string "Yet another may enjoy vexing or\n"
	.string "confounding its foes.\p"
	.string "Due to its nature, a POKéMON\n"
	.string "will have favorite moves that it is good\l"
	.string "at using.\p"
	.string "It may also dislike certain moves that\n"
	.string "it has trouble using.$"

BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves::
# 639 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "There are offensive moves that inflict\n"
	.string "direct damage on the foe.\p"
	.string "There are defensive moves that are\n"
	.string "used to prepare for enemy attacks or\l"
	.string "used to heal HP and so on.\p"
	.string "There are also other somewhat-odd\n"
	.string "moves that may enfeeble the foes with\l"
	.string "stat problems including poison and \l"
	.string "paralysis.\p"
	.string "POKéMON will consider using moves in\n"
	.string "these three categories.$"

BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered::
# 656 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "When not under command by its TRAINER,\n"
	.string "a POKéMON may be unable to effectively\l"
	.string "use certain moves.\p"
	.string "A POKéMON is not good at using any\n"
	.string "move that it dislikes.\p"
	.string "If a POKéMON only knows moves that\n"
	.string "do not match its nature, it will often\l"
	.string "be unable to live up to its potential.$"

BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger::
# 669 "data/maps/BattleFrontier_BattlePalaceLobby/scripts.pory"
	.string "Depending on its nature, a POKéMON may\n"
	.string "start using moves that don't match its\l"
	.string "nature when it is in trouble.\p"
	.string "If a POKéMON begins behaving oddly\n"
	.string "in a pinch, watch it carefully.$"
