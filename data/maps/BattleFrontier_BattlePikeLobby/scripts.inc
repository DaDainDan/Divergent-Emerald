BattleFrontier_BattlePikeLobby_MapScripts::
# 2 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 11 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleFrontier_BattlePikeLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePikeLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 7 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePikeLobby_EventScript_QuitWithoutSaving
# 8 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePikeLobby_EventScript_WonChallenge
# 9 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePikeLobby_EventScript_LostChallenge
	.2byte 0

BattleFrontier_BattlePikeLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_getstatus
	end

BattleFrontier_BattlePikeLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 12 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePikeLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattlePikeLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 13 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 14 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattlePikeLobby_EventScript_QuitWithoutSaving::
# 21 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 22 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 23 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 24 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting, MSGBOX_DEFAULT
# 25 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 26 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK, 0
# 27 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, FALSE
# 28 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 29 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 30 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattlePikeLobby_EventScript_WonChallenge::
# 35 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 36 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_isbrain
# 37 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattlePikeLobby_EventScript_WonChallenge_2
# 40 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance, MSGBOX_DEFAULT
BattleFrontier_BattlePikeLobby_EventScript_WonChallenge_1:
# 42 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 43 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints, MSGBOX_DEFAULT
# 44 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_givepoints
# 45 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 46 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkairshow
# 47 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_get PIKE_DATA_TOTAL_STREAKS
# 48 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	addvar VAR_RESULT, 1
# 49 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_TOTAL_STREAKS, VAR_RESULT
# 50 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_0x8007, 1
# 51 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ChallengeEnded
	end

BattleFrontier_BattlePikeLobby_EventScript_WonChallenge_2:
# 38 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_WonChallenge_1


BattleFrontier_BattlePikeLobby_EventScript_LostChallenge::
# 56 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 57 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults
# 58 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 59 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkairshow
# 60 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, 0
# 61 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, FALSE
# 62 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_0x8007, 0
# 63 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ChallengeEnded
	end


BattleFrontier_BattlePikeLobby_EventScript_ChallengeEnded::
# 68 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 69 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 70 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 71 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_resethelditems
# 72 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	compare VAR_0x8007, 1
	goto_if_eq BattleFrontier_BattlePikeLobby_EventScript_ChallengeEnded_2
BattleFrontier_BattlePikeLobby_EventScript_ChallengeEnded_1:
# 76 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_save 0
# 77 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_SAVE
# 78 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
# 79 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
# 80 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 81 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 82 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
	end

BattleFrontier_BattlePikeLobby_EventScript_ChallengeEnded_2:
# 73 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ShallRecordResults
# 74 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
	goto BattleFrontier_BattlePikeLobby_EventScript_ChallengeEnded_1


BattleFrontier_BattlePikeLobby_EventScript_Attendant::
# 87 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lock_faceplayer
# 88 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PIKE
# 89 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 90 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special SavePlayerParty
# 91 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike, MSGBOX_DEFAULT
# 92 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge
	end


BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge::
# 97 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_TakeChallenge
# 98 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 99 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 100 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 101 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 0, BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_3
# 102 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 1, BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_4
# 105 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 2, BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_5
# 106 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_5
BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_1:
	end

BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_3:
# 101 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge
	goto BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_1

BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_4:
# 103 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainBattlePike, MSGBOX_DEFAULT
# 104 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge
	goto BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_1

BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_5:
# 107 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattlePikeLobby_EventScript_AskTakeChallenge_1


BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge::
# 113 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode
# 114 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 115 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 116 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_TENT
	goto_if_eq BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_2
# 116 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_2
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_1:
# 119 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_checkineligible
# 120 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_7
# 129 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 130 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons, MSGBOX_DEFAULT
# 131 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 132 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 133 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 134 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 135 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 136 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 137 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_10
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_9:
# 143 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 144 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 145 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
	end

BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_2:
# 117 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_1

BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_7:
# 121 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 122 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_14
# 123 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_15
BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_12:
# 125 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 126 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
	release_end

BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_10:
# 138 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 139 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_16
	goto BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_9

BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_14:
# 122 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_12

BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_15:
# 123 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_12

BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_16:
# 140 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge
	goto BattleFrontier_BattlePikeLobby_EventScript_TryEnterChallenge_9


BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge::
# 150 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 151 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_1, 0
# 152 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 153 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_init
# 154 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 155 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK_ACTIVE, TRUE
# 156 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_savehelditems
# 157 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 158 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special LoadPlayerParty
# 159 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 160 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	delay 2
# 161 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 162 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 163 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	pike_savehelditems
# 164 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge_2
BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge_1:
# 168 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special SavePlayerParty
# 169 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 170 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 171 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	closemessage
# 172 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_settrainers
# 173 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	applymovement LOCALID_PIKE_LOBBY_ATTENDANT, BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge_Movement_0
# 174 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 175 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmovement 0
# 176 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special HealPlayerParty
# 177 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	call BattleFrontier_BattlePike_EventScript_CloseCurtain
# 178 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PIKE_CORRIDOR, 6, 7
# 179 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 180 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitstate
	end

BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge_2:
# 165 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 166 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge_1


BattleFrontier_BattlePikeLobby_EventScript_CancelChallenge::
# 185 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou, MSGBOX_DEFAULT
	release_end


BattleFrontier_BattlePikeLobby_EventScript_ShowResults::
# 190 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 191 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PIKE
# 192 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitbuttonpress
# 193 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special RemoveRecordsWindow
# 194 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattlePikeLobby_EventScript_Hiker::
# 199 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal, MSGBOX_NPC
	end


BattleFrontier_BattlePikeLobby_EventScript_Twin::
# 204 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer, MSGBOX_NPC
	end


BattleFrontier_BattlePikeLobby_EventScript_Beauty::
# 209 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere, MSGBOX_NPC
	end


BattleFrontier_BattlePikeLobby_EventScript_RulesBoard::
# 214 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	lockall
# 215 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 216 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard::
# 221 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	message BattleFrontier_BattlePikeLobby_Text_ReadWhichHeading
# 222 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitmessage
# 223 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	multichoice 16, 4, MULTI_BATTLE_PIKE_RULES, FALSE
# 224 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	switch VAR_RESULT
# 225 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 0, BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_3
# 226 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 1, BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_4
# 227 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 2, BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_5
# 228 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case 3, BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_6
# 229 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_6
BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_1:
# 233 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_3:
# 225 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_4:
# 226 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_5:
# 227 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	msgbox BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattlePikeLobby_EventScript_ReadRulesBoard_6:
# 230 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattlePike_EventScript_CloseCurtain::
# 238 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	playse SE_PIKE_CURTAIN_CLOSE
# 239 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	special CloseBattlePikeCurtain
# 240 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	waitse
	return


# 173 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
BattleFrontier_BattlePikeLobby_EventScript_SaveBeforeChallenge_Movement_0:
# 173 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 173 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	walk_up
# 173 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	set_invisible
	step_end

BattleFrontier_BattlePikeLobby_Text_WelcomeToBattlePike::
# 244 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Where the luck of TRAINERS\n"
	.string "is put to the test…\p"
	.string "Welcome to the BATTLE PIKE…\p"
	.string "I am your guide to the BATTLE PIKE…$"

BattleFrontier_BattlePikeLobby_Text_TakeChallenge::
# 253 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Would you like to take the Battle\n"
	.string "Choice challenge?$"

BattleFrontier_BattlePikeLobby_Text_ExplainBattlePike::
# 258 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Here we conduct an event we call\n"
	.string "the Battle Choice.\p"
	.string "The Battle Choice rules are very\n"
	.string "simple…\p"
	.string "Choose one of three paths and make\n"
	.string "your way to the goal room at the end\l"
	.string "of the BATTLE PIKE. It's that simple.\p"
	.string "However, what happens on the chosen\n"
	.string "path depends entirely on the luck\l"
	.string "of the challenger…\p"
	.string "If you reach the goal, you will be\n"
	.string "rewarded with Battle Points.\p"
	.string "If you want to interrupt your\n"
	.string "challenge, please have a word with\l"
	.string "our staff in the big rooms on the way.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattlePikeLobby_Text_LookForwardToSeeingYou::
# 284 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "We look forward to seeing you\n"
	.string "on another occasion…$"

BattleFrontier_BattlePikeLobby_Text_WhichChallengeMode::
# 289 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You have the choice of two courses,\n"
	.string "Level 50 and Open Level.\l"
	.string "Which will you challenge?$"

BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLv50::
# 295 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I beg your pardon, but…\p"
	.string "You do not have three eligible\n"
	.string "POKéMON for the Battle Choice event.\p"
	.string "You must have three different POKéMON\n"
	.string "of Level 50 or less to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsEnd::
# 310 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please come see me when\n"
	.string "you are ready…$"

BattleFrontier_BattlePikeLobby_Text_NotEnoughValidMonsLvOpen::
# 315 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I beg your pardon, but…\p"
	.string "You do not have three eligible\n"
	.string "POKéMON for the Battle Choice event.\p"
	.string "You must have three different\n"
	.string "POKéMON to enter.\p"
	.string "They also must be holding different\n"
	.string "kinds of items.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattlePikeLobby_Text_PleaseChooseThreeMons::
# 330 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please choose the three POKéMON\n"
	.string "you wish to enter in the challenge…$"

BattleFrontier_BattlePikeLobby_Text_SaveBeforeChallenge::
# 335 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Before starting your Battle Choice\n"
	.string "challenge, I must save the game.\l"
	.string "Is that acceptable?$"

BattleFrontier_BattlePikeLobby_Text_StepThisWay::
# 341 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Please step this way…$"

BattleFrontier_BattlePikeLobby_Text_ChallengeEndedRecordResults::
# 345 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Your challenge has ended…\p"
	.string "I shall record your results.\n"
	.string "Please wait…$"

BattleFrontier_BattlePikeLobby_Text_PossessLuckInAbundance::
# 352 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You have completed the challenge…\p"
	.string "I must say… You seem to possess luck\n"
	.string "in abundance…$"

BattleFrontier_BattlePikeLobby_Text_ShallRecordResults::
# 359 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I shall record your results.\n"
	.string "Please wait…$"

BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints2::
# 365 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "To commemorate your completion of\n"
	.string "the Battle Choice challenge, we award\l"
	.string "you these Battle Point(s)…$"

BattleFrontier_BattlePikeLobby_Text_ReachedBattlePointLimit::
# 372 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "You appear to have reached the limit\n"
	.string "for Battle Points…\p"
	.string "Please exchange some Battle Points\n"
	.string "for prizes, then return…$"

BattleFrontier_BattlePikeLobby_Text_FailedToSaveBeforeQuitting::
# 380 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I beg your pardon, but…\p"
	.string "You failed to save before you quit\n"
	.string "your challenge the last time.\p"
	.string "Because of that, your challenge so far\n"
	.string "has been disqualified. I am sorry…$"

BattleFrontier_BattlePikeLobby_Text_SnatchedVictoryFromQueen::
# 390 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Congratulations…\p"
	.string "You have snatched victory from the\n"
	.string "PIKE QUEEN and cleared the event…$"

BattleFrontier_BattlePikeLobby_Text_AwardYouTheseBattlePoints::
# 397 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "In recognition of your amazing luck,\n"
	.string "we award you these Battle Point(s)…$"

BattleFrontier_BattlePikeLobby_Text_OneRoomAwayFromGoal::
# 402 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Arrgh! I blew my chance!\n"
	.string "I was one room away from the goal!\p"
	.string "In this place, you'd better watch out\n"
	.string "for poison, freezing, and so on.$"

BattleFrontier_BattlePikeLobby_Text_NeverHadToBattleTrainer::
# 410 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "I've completed the challenge 10 times\n"
	.string "now, but I've never had to battle\l"
	.string "a TRAINER once.$"

BattleFrontier_BattlePikeLobby_Text_ThinkAbilitiesUsefulHere::
# 416 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Listen! Listen!\p"
	.string "Don't you think that the special\n"
	.string "abilities of POKéMON will be useful\l"
	.string "here?$"

BattleFrontier_BattlePikeLobby_Text_TrainersWhicheverPathIChoose::
# 425 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "What is this weird place?\n"
	.string "I can't figure it out at all!\p"
	.string "I've taken the challenge a bunch\n"
	.string "of times, but all I ever do is run into\l"
	.string "TRAINERS whichever path I choose.$"

BattleFrontier_BattlePikeLobby_Text_RulesAreListed::
# 434 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "The Battle Choice's rules are listed.$"

BattleFrontier_BattlePikeLobby_Text_ReadWhichHeading::
# 438 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "Which heading do you want to read?$"

BattleFrontier_BattlePikeLobby_Text_ExplainPokenavBagRules::
# 442 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "The BAG and POKéNAV may not be used\n"
	.string "during a Battle Choice challenge.$"

BattleFrontier_BattlePikeLobby_Text_ExplainHeldItemRules::
# 447 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "During a Battle Choice challenge,\n"
	.string "any BERRY or HERB held by POKéMON\l"
	.string "will be effective only once.$"

BattleFrontier_BattlePikeLobby_Text_ExplainMonOrderRules::
# 453 "data/maps/BattleFrontier_BattlePikeLobby/scripts.pory"
	.string "During a Battle Choice challenge,\n"
	.string "the sequence of POKéMON cannot be\l"
	.string "changed.\p"
	.string "The sequence must be set before\n"
	.string "starting your challenge.$"
