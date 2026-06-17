BattleFrontier_BattleDomeLobby_MapScripts::
# 2 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleDomeLobby_MapScripts_MAP_SCRIPT_ON_RESUME
# 6 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 16 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleFrontier_BattleDomeLobby_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_initresultstree
	end

BattleFrontier_BattleDomeLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleDomeLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 11 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving
# 12 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge
# 13 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleDomeLobby_EventScript_WonChallenge
# 14 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleDomeLobby_EventScript_LostChallenge
	.2byte 0

BattleFrontier_BattleDomeLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 8 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_getstatus
	end

BattleFrontier_BattleDomeLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 17 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomeLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattleDomeLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 18 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 19 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving::
# 26 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 27 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 28 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 29 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK, 0
# 30 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
# 31 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 32 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 33 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 34 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleDomeLobby_EventScript_WonChallenge::
# 39 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_incrementstreak
# 40 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 41 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_isbrain
# 42 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_WonChallenge_2
# 45 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney, MSGBOX_DEFAULT
BattleFrontier_BattleDomeLobby_EventScript_WonChallenge_1:
# 47 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints
	end

BattleFrontier_BattleDomeLobby_EventScript_WonChallenge_2:
# 43 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_WonChallenge_1


BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints::
# 52 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints, MSGBOX_DEFAULT
# 53 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_givepoints
# 54 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 55 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved
# 56 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 57 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 58 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 59 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkairshow
# 60 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_HAS_WON_CHALLENGE, TRUE
# 61 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, TRUE
# 62 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_StartChallengeFinish
	return


BattleFrontier_BattleDomeLobby_EventScript_LostChallenge::
# 66 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 67 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 68 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved
# 69 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 70 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 71 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 72 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkairshow
# 73 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
# 74 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_StartChallengeFinish
	return


BattleFrontier_BattleDomeLobby_EventScript_StartChallengeFinish::
# 78 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 79 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 80 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 81 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 82 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_save 0
# 83 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	playse SE_SAVE
# 84 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitse
# 85 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_get FRONTIER_DATA_RECORD_DISABLED
# 86 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_StartChallengeFinish_2
BattleFrontier_BattleDomeLobby_EventScript_StartChallengeFinish_1:
# 94 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain, MSGBOX_DEFAULT
# 95 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 96 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 97 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
	end

BattleFrontier_BattleDomeLobby_EventScript_StartChallengeFinish_2:
# 87 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordLastMatch
# 88 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 89 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 90 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_StartChallengeFinish_4
	goto BattleFrontier_BattleDomeLobby_EventScript_StartChallengeFinish_1

BattleFrontier_BattleDomeLobby_EventScript_StartChallengeFinish_4:
# 91 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
	goto BattleFrontier_BattleDomeLobby_EventScript_StartChallengeFinish_1


BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge::
# 102 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 103 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou, MSGBOX_DEFAULT
# 104 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge2
# 105 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 106 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_save CHALLENGE_STATUS_SAVING
# 107 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	playse SE_SAVE
# 108 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitse
# 109 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 110 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 111 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge
	end


BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendant::
# 116 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lock_faceplayer
# 117 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 118 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 119 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome
	end


BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendant::
# 124 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lock_faceplayer
# 125 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 126 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 127 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome
	end


BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome::
# 132 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special SavePlayerParty
# 133 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 134 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_3
# 135 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_4
BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_1:
# 137 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge
	end

BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_3:
# 134 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_1

BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_4:
# 135 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome_1


BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge::
# 142 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 143 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_3
# 144 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_4
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_1:
# 146 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 147 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 148 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 149 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_7
# 150 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_8
# 151 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 2, BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_9
# 152 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_9
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_5:
	end

BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_3:
# 143 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_1

BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_4:
# 144 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_1

BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_7:
# 149 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_5

BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_8:
# 150 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_5

BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_9:
# 153 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge_5


BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge::
# 159 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_WhichLevelMode
# 160 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 161 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 162 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_TENT
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_2
# 162 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_2
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_1:
# 165 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkineligible
# 166 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_7
# 175 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 176 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 177 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 178 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 179 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 180 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 181 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 182 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 183 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_10
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_9:
# 186 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 187 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 188 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case YES, BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_18
# 189 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case NO, BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_19
# 190 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_19
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_16:
	end

BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_2:
# 163 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_1

BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_7:
# 167 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 168 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_14
# 169 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_15
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_12:
# 171 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 172 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
	release_end

BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_10:
# 184 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_9

BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_14:
# 168 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_12

BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_15:
# 169 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_12

BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_18:
# 188 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_16

BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_19:
# 191 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge_16


BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge::
# 197 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 198 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 199 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_init
# 200 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 201 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 202 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 203 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 204 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	delay 2
# 205 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 206 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 207 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge_2
BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge_1:
# 211 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_inittrainers
# 212 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge
	end

BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge_2:
# 208 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 209 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge_1


BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge::
# 217 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special SavePlayerParty
# 218 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 219 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_settrainers
# 220 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome, MSGBOX_DEFAULT
# 221 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 222 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor
# 223 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 224 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_CORRIDOR, 23, 6
# 225 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 226 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
	end


BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge::
# 231 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 232 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_3
# 233 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_4
BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_1:
# 235 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge
	return

BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_3:
# 232 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_1

BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_4:
# 233 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge_1


BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge::
# 239 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 240 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 241 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
	return


BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge::
# 245 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain, MSGBOX_DEFAULT
	release_end


BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor::
# 250 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_3
# 252 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_4
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_1:
# 254 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_Movement_0
# 255 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmovement 0
# 256 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 257 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_7
# 258 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_8
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_5:
# 260 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitdooranim
# 261 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 262 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_11
# 263 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_12
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_9:
# 265 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_Movement_2
# 266 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmovement 0
# 267 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_FRONTIER_BATTLE_MODE
# 268 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_15
# 269 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_16
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_13:
# 271 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitdooranim
	return

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_3:
# 251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_Movement_0
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_1

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_4:
# 252 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_Movement_0
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_1

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_7:
# 257 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	opendoor 5, 4
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_5

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_8:
# 258 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	opendoor 17, 4
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_5

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_11:
# 262 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_Movement_1
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_9

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_12:
# 263 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_Movement_1
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_9

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_15:
# 268 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closedoor 5, 4
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_13

BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_16:
# 269 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closedoor 17, 4
	goto BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_13


BattleFrontier_BattleDomeLobby_EventScript_ShowSinglesResults::
# 276 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 277 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_SINGLES
# 278 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitbuttonpress
# 279 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special RemoveRecordsWindow
# 280 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleDomeLobby_EventScript_ShowDoublesResults::
# 285 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 286 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_DOUBLES
# 287 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitbuttonpress
# 288 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special RemoveRecordsWindow
# 289 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree::
# 294 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_get DOME_DATA_PREV_TOURNEY_TYPE
# 295 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 296 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_3
# 297 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_4
# 298 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 2, BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_5
# 299 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 3, BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_6
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_1:
# 301 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 302 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_showprevtourneytree
# 303 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
	end

BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_3:
# 296 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50, MSGBOX_SIGN
	goto BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_1

BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_4:
# 297 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50, MSGBOX_SIGN
	goto BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_1

BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_5:
# 298 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen, MSGBOX_SIGN
	goto BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_1

BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_6:
# 299 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen, MSGBOX_SIGN
	goto BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree_1


BattleFrontier_BattleDomeLobby_EventScript_Maniac::
# 308 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_getwinnersname
# 309 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough, MSGBOX_NPC
	end


BattleFrontier_BattleDomeLobby_EventScript_Lass::
# 314 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation, MSGBOX_NPC
	end


BattleFrontier_BattleDomeLobby_EventScript_FatMan::
# 319 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound, MSGBOX_NPC
	end


BattleFrontier_BattleDomeLobby_EventScript_Man::
# 324 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Man3::
# 330 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_BattleDomeSign2::
# 336 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign2, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_UnderConstructionSign::
# 342 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction, MSGBOX_NPC
	end


BattleFrontier_BattleDomeLobby_EventScript_RulesBoard::
# 347 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 348 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 349 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard::
# 354 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading
# 355 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 356 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 4, MULTI_BATTLE_DOME_RULES, FALSE
# 357 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 358 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_3
# 359 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_4
# 360 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 2, BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_5
# 361 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 3, BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_6
# 362 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_6
BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1:
# 366 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_3:
# 358 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_4:
# 359 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_5:
# 360 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard_6:
# 363 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
	end


# 251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_Movement_0:
# 251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
	step_end

# 262 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_Movement_1:
# 262 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 262 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	set_invisible
	step_end

# 265 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor_Movement_2:
# 265 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 265 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 265 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	set_invisible
	step_end

BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle::
# 370 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Where the strategies of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE DOME!\p"
	.string "I am your guide to the SINGLE BATTLE\n"
	.string "Tournament.$"

BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge::
# 380 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Would you like to challenge\n"
	.string "the SINGLE BATTLE Tournament?$"

BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain::
# 385 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "We hope to see you again.$"

BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge::
# 389 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The SINGLE BATTLE Tournament\n"
	.string "is exactly as the name suggests--\l"
	.string "a tournament of SINGLE BATTLES.\p"
	.string "All participating TRAINERS must\n"
	.string "enter three POKéMON each.\p"
	.string "In each battle, one of the three\n"
	.string "POKéMON must be held in reserve.\p"
	.string "The other two POKéMON can battle\n"
	.string "one at a time.\p"
	.string "Choose the two battling POKéMON after\n"
	.string "examining the opponent's trio.\p"
	.string "You win the tournament by defeating\n"
	.string "four TRAINERS.\p"
	.string "Battle Points are awarded to\n"
	.string "the tournament winner.\p"
	.string "If you want to interrupt your\n"
	.string "tournament, please save the game.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge::
# 419 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Before I show you to the BATTLE DOME,\n"
	.string "I must save the data. Is that okay?$"

BattleFrontier_BattleDomeLobby_Text_WhichLevelMode::
# 424 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The tournament offers two levels\n"
	.string "of challenge, Level 50 and Open Level.\l"
	.string "Which is your choice?$"

BattleFrontier_BattleDomeLobby_Text_SelectThreeMons::
# 430 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Now select the three POKéMON that\n"
	.string "you wish to enter, please.$"

BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen::
# 435 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have three eligible POKéMON.\p"
	.string "Also, the POKéMON must be holding\n"
	.string "different kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsEnd::
# 446 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Please come see me when you are ready.$"

BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50::
# 450 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You don't have three eligible POKéMON.\p"
	.string "You must have three different POKéMON\n"
	.string "of Level 50 or less to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome::
# 464 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I will now show you to\n"
	.string "the BATTLE DOME.$"

BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting::
# 469 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Excuse me!\p"
	.string "You didn't save before you quit your\n"
	.string "challenge last time.\p"
	.string "Because of that, your challenge so far\n"
	.string "has been disqualified. Sorry!$"

BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney::
# 479 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Congratulations for winning\n"
	.string "your Battle Tournament!$"

BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize::
# 485 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Here is your prize for your Battle\n"
	.string "Tournament victory.$"

BattleFrontier_BattleDomeLobby_Text_ReceivedPrize::
# 491 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattleDomeLobby_Text_BagFullMakeRoom::
# 497 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Oh, your BAG appears to be full.\p"
	.string "Please make room in your BAG, then come\n"
	.string "see me.$"

BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying::
# 504 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Thank you for playing!$"

BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved::
# 508 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Your record will be saved.\n"
	.string "Please wait.$"

BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou::
# 513 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "We've been waiting for you!$"

BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge2::
# 517 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Before I show you to the BATTLE DOME,\n"
	.string "I must save the data. Is that okay?$"

BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle::
# 522 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Where the strategies of TRAINERS\n"
	.string "are put to the test!\p"
	.string "Welcome to the BATTLE DOME!\p"
	.string "I am your guide to the DOUBLE BATTLE\n"
	.string "Tournament.$"

BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge::
# 532 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Would you like to challenge\n"
	.string "the DOUBLE BATTLE Tournament?$"

BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge::
# 537 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The DOUBLE BATTLE Tournament\n"
	.string "is exactly as the name suggests--\l"
	.string "a tournament of DOUBLE BATTLES.\p"
	.string "All participating TRAINERS must\n"
	.string "enter three POKéMON each.\p"
	.string "In each battle, one of the three\n"
	.string "POKéMON must be held in reserve.\p"
	.string "The remaining two POKéMON must take\n"
	.string "part in a DOUBLE BATTLE.\p"
	.string "Choose the two battling POKéMON after\n"
	.string "examining the opponent's trio.\p"
	.string "You win the tournament by defeating\n"
	.string "four TRAINERS.\p"
	.string "Battle Points are awarded to\n"
	.string "the tournament winner.\p"
	.string "If you want to interrupt your\n"
	.string "tournament, please save the game.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50::
# 567 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
	.string "Level 50 SINGLE BATTLE Tournament.$"

BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50::
# 572 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
	.string "Level 50 DOUBLE BATTLE Tournament.$"

BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen::
# 577 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
	.string "Open Level SINGLE BATTLE Tournament.$"

BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen::
# 582 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
	.string "Open Level DOUBLE BATTLE Tournament.$"

BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough::
# 587 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Did you see it?\n"
	.string "The last Battle Tournament?\p"
	.string "The winner, {STR_VAR_1}, was seriously\n"
	.string "tough.\p"
	.string "You should check out the results\n"
	.string "on the monitor beside the PC.$"

BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier::
# 598 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The BATTLE FRONTIER…\n"
	.string "I've long dreamed about a place like it.$"

BattleFrontier_OutsideWest_Text_BattleDomeSign2::
# 604 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The BATTLE DOME\n"
	.string "Become the Unbeatable Superstar!$"

BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction::
# 610 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The ??????\n"
	.string "Under Construction!$"

BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation::
# 615 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "When a TRAINER chains tournament\n"
	.string "wins at the BATTLE DOME, he or she\l"
	.string "gains a reputation as a star.\p"
	.string "Tough TRAINERS are drawn by that\n"
	.string "reputation to the BATTLE DOME.\p"
	.string "A true superstar is a TRAINER who\n"
	.string "can keep winning tournaments.$"

BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound::
# 627 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I ran into one of the tournament\n"
	.string "favorites in the very first round.\p"
	.string "Of course I got trashed…$"

BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully::
# 634 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I would've won if I'd kept this POKéMON\n"
	.string "held in reserve.\p"
	.string "You need to check your opponent's\n"
	.string "POKéMON carefully before choosing\l"
	.string "your battling POKéMON.$"

BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker::
# 643 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Congratulations!\p"
	.string "You defeated the DOME ACE and won\n"
	.string "the Battle Tournament!$"

BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints::
# 650 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "In recognition of your strategy--\n"
	.string "a thing of beauty it was, too--\l"
	.string "we award you these Battle Point(s)!$"

BattleFrontier_BattleDomeLobby_Text_RecordLastMatch::
# 656 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Would you like to record your\n"
	.string "last BATTLE DOME match on your\l"
	.string "FRONTIER PASS?$"

BattleFrontier_BattleDomeLobby_Text_RulesAreListed::
# 662 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The Battle Tournament rules\n"
	.string "are listed.$"

BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading::
# 667 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Which heading do you want to read?$"

BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules::
# 671 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The tournament matchups are drawn up\n"
	.string "based on the toughness of POKéMON\l"
	.string "held by TRAINERS.\p"
	.string "The matchups avoid having tough\n"
	.string "TRAINERS face each other right away.$"

BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree::
# 680 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The tournament chart, or as we call it,\n"
	.string "the “Tree,” is available for viewing\l"
	.string "in the Waiting Room from any guide.\p"
	.string "The Tournament Tree will provide\n"
	.string "several kinds of data.\p"
	.string "The data on view includes the previous\n"
	.string "tournament's results, the POKéMON held\l"
	.string "by TRAINERS, and the battle styles of\l"
	.string "TRAINERS.$"

BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules::
# 694 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If battling POKéMON faint at the same\n"
	.string "time--a double KO--in a tournament\l"
	.string "match, the REFEREES will review\l"
	.string "the match and declare the winner.$"
