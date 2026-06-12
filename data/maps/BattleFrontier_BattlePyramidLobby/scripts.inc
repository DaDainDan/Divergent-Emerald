BattleFrontier_BattlePyramidLobby_MapScripts::
# 2 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 12 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePyramidLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleFrontier_BattlePyramidLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePyramidLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 7 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramidLobby_EventScript_QuitWithoutSaving
# 8 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge
# 9 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge
# 10 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattlePyramidLobby_EventScript_LostChallenge
	.2byte 0

BattleFrontier_BattlePyramidLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_getstatus
	end

BattleFrontier_BattlePyramidLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 13 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattlePyramidLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 14 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattlePyramidLobby_EventScript_QuitWithoutSaving::
# 22 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 23 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag
# 24 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 25 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 26 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 27 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 28 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK, 0
# 29 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, FALSE
# 30 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 31 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 32 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge::
# 37 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 38 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_isbrain
# 39 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge_2
# 42 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid, MSGBOX_DEFAULT
BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge_1:
# 44 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special DoBattlePyramidMonsHaveHeldItem
# 45 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge_6
BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge_5:
# 48 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	clearflag FLAG_STORING_ITEMS_IN_PYRAMID_BAG
# 49 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_checkairshow
# 50 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 51 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_clearhelditems
# 52 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special HealPlayerParty
# 53 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 54 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept
# 55 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 56 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 57 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 58 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints, MSGBOX_DEFAULT
# 59 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_givepoints
# 60 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 61 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait
# 62 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 63 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_setprize
# 64 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_save 0
# 65 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_SAVE
# 66 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 67 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge, MSGBOX_DEFAULT
# 68 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 69 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 70 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge_2:
# 40 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge_1

BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge_6:
# 46 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag
	goto BattleFrontier_BattlePyramidLobby_EventScript_WonChallenge_5


BattleFrontier_BattlePyramidLobby_EventScript_LostChallenge::
# 75 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_checkairshow
# 76 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 77 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_clearhelditems
# 78 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special HealPlayerParty
# 79 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 80 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 81 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag
# 82 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 83 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 84 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 85 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait
# 86 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 87 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, FALSE
# 88 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_save 0
# 89 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_SAVE
# 90 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 91 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge, MSGBOX_DEFAULT
# 92 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 93 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 94 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattlePyramidLobby_EventScript_Attendant::
# 99 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lock_faceplayer
# 100 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PYRAMID
# 101 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 102 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special SavePlayerParty
# 103 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid, MSGBOX_DEFAULT
# 104 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge
	return


BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge::
# 108 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge
# 109 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 110 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 111 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 112 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_3
# 113 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_4
# 116 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_5
# 117 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_5
BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_1:
	end

BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_3:
# 112 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge
	goto BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_1

BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_4:
# 114 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid, MSGBOX_DEFAULT
# 115 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge
	goto BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_1

BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_5:
# 117 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattlePyramidLobby_EventScript_AskTakeChallenge_1


BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge::
# 123 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode
# 124 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 125 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 126 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_TENT
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_2
# 126 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_2
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_1:
# 129 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_checkineligible
# 130 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_7
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_6:
# 133 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 134 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 135 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 136 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative RemoveFollowingPokemon
# 137 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 138 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 139 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 140 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 141 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_10
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_9:
# 164 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 165 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 166 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
	end

BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_2:
# 127 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_1

BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_7:
# 131 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons
	goto BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_6

BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_10:
# 142 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 143 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_12
	goto BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_9

BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_12:
# 144 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 145 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 146 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_init
# 147 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_set PYRAMID_DATA_WIN_STREAK_ACTIVE, TRUE
# 148 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 149 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 150 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_seedfloor
# 151 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_settrainers
# 152 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special LoadPlayerParty
# 153 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 154 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	delay 2
# 155 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 156 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 157 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_15
BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_14:
# 161 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge
	goto BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_9

BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_15:
# 158 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 159 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge
	goto BattleFrontier_BattlePyramidLobby_EventScript_TryEnterChallenge_14


BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge::
# 171 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special SavePlayerParty
# 172 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 173 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid, MSGBOX_DEFAULT
# 174 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_PYRAMID_LOBBY_ATTENDANT, BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge_Movement_0
# 176 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge_Movement_1
# 177 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 178 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping, MSGBOX_DEFAULT
# 179 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK
# 180 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge_2
# 183 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag, MSGBOX_DEFAULT
BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge_1:
# 185 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag
# 186 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 187 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	playse SE_EXP_MAX
# 188 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitse
# 189 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel, MSGBOX_DEFAULT
# 190 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	closemessage
# 191 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_PYRAMID_LOBBY_ATTENDANT, BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge_Movement_2
# 192 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 193 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge_Movement_3
# 194 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 195 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 196 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_RESULT, 0
# 197 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special HealPlayerParty
# 198 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 1, 1
# 199 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 200 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitstate
	end

BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge_2:
# 181 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge_1


BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons::
# 205 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 206 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_3
# 207 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_4
BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_1:
# 209 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	call BattleFrontier_ShowCaughtBannedSpecies
# 210 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsEnd, MSGBOX_DEFAULT
	release_end

BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_3:
# 206 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_1

BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_4:
# 207 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_NotEnoughValidMons_1


BattleFrontier_BattlePyramidLobby_EventScript_CancelChallenge::
# 215 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_AwaitFutureChallenge, MSGBOX_DEFAULT
	release_end


BattleFrontier_BattlePyramidLobby_EventScript_HintGiver::
# 220 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 221 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	applymovement LOCALID_PYRAMID_LOBBY_HINT_GIVER, Common_Movement_FacePlayer
# 222 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmovement 0
# 223 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait, MSGBOX_DEFAULT
# 224 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 225 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 226 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattlePyramidLobby_EventScript_HintGiver_3
# 227 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePyramidLobby_EventScript_HintGiver_4
BattleFrontier_BattlePyramidLobby_EventScript_HintGiver_1:
# 229 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot, MSGBOX_DEFAULT
# 230 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
	end

BattleFrontier_BattlePyramidLobby_EventScript_HintGiver_3:
# 226 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintGiver_1

BattleFrontier_BattlePyramidLobby_EventScript_HintGiver_4:
# 227 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen
	goto BattleFrontier_BattlePyramidLobby_EventScript_HintGiver_1


BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50::
# 235 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_Aah, MSGBOX_DEFAULT
# 236 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_ACTIVE_50
# 237 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_ne BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50_2
# 240 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_RESULT, 0
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50_1:
# 242 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
	return

BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50_2:
# 238 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_50
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLv50_1


BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen::
# 247 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_Aah, MSGBOX_DEFAULT
# 248 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_ACTIVE_OPEN
# 249 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_ne BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen_2
# 252 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setvar VAR_RESULT, 0
BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen_1:
# 254 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment
	return

BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen_2:
# 250 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	pyramid_get PYRAMID_DATA_WIN_STREAK_OPEN
	goto BattleFrontier_BattlePyramidLobby_EventScript_GiveHintLvOpen_1


BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment::
# 259 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 260 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special GetBattlePyramidHint
# 261 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 262 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_3
# 263 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_4
# 264 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_5
# 265 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_6
# 266 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_7
# 267 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 5, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_8
# 268 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 6, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_9
# 269 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 7, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_10
# 270 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 8, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_11
# 271 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 9, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_12
# 272 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 10, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_13
# 273 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 11, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_14
# 274 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 12, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_15
# 275 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 13, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_16
# 276 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 14, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_17
# 277 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 15, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_18
# 278 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 16, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_19
# 279 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 17, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_20
# 280 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 18, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_21
# 281 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 19, BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_22
BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1:
	return

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_3:
# 262 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintParalysis, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_4:
# 263 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPoison, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_5:
# 264 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintBurn, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_6:
# 265 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPPWaste, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_7:
# 266 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintLevitate, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_8:
# 267 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_9:
# 268 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintIce, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_10:
# 269 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintExplosion, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_11:
# 270 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintPsychic, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_12:
# 271 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintRock, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_13:
# 272 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintFighting, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_14:
# 273 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintWeather, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_15:
# 274 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintBug, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_16:
# 275 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintDark, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_17:
# 276 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintWater, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_18:
# 277 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintGhost, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_19:
# 278 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintSteel, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_20:
# 279 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_21:
# 280 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1

BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_22:
# 281 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HintNormal, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_DoHintComment_1


BattleFrontier_BattlePyramidLobby_EventScript_ShowResults::
# 287 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 288 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_PYRAMID
# 289 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitbuttonpress
# 290 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special RemoveRecordsWindow
# 291 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
	end


BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag::
# 296 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake, MSGBOX_DEFAULT
# 297 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	setflag FLAG_STORING_ITEMS_IN_PYRAMID_BAG
# 298 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special TryStoreHeldItemsInPyramidBag
# 299 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag_2
# 303 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep
# 304 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 305 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
	end

BattleFrontier_BattlePyramidLobby_EventScript_StoreHeldItemsInPyramidBag_2:
# 300 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag, MSGBOX_DEFAULT
	return


BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep::
# 311 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 17, 6, MULTI_FRONTIER_ITEM_CHOOSE, FALSE
# 312 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 313 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_3
# 314 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_4
# 315 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_5
# 316 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_5
BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_1:
	end

BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_3:
# 313 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromBag
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_1

BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_4:
# 314 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromParty
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_1

BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_5:
# 316 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep_1


BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromBag::
# 322 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special ChooseItemsToTossFromPyramidBag
# 323 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
# 324 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 325 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
	end


BattleFrontier_BattlePyramidLobby_EventScript_PickItemsFromParty::
# 330 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special BattlePyramidChooseMonHeldItems
# 331 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
# 332 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 333 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
	end


BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems::
# 338 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	special DoBattlePyramidMonsHaveHeldItem
# 339 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems_2
BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems_1:
	return

BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems_2:
# 340 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem, MSGBOX_DEFAULT
# 341 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
# 342 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 343 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_PickItemsToKeep
	goto BattleFrontier_BattlePyramidLobby_EventScript_ExitPickItems_1


BattleFrontier_BattlePyramidLobby_EventScript_Woman::
# 349 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning, MSGBOX_NPC
	end


BattleFrontier_BattlePyramidLobby_EventScript_FatMan::
# 354 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems, MSGBOX_NPC
	end


BattleFrontier_BattlePyramidLobby_EventScript_RulesBoard::
# 359 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	lockall
# 360 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 361 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
	end


BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard::
# 366 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	message BattleFrontier_BattlePyramidLobby_Text_ReadWhichHeading
# 367 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	waitmessage
# 368 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	multichoice 15, 2, MULTI_BATTLE_PYRAMID_RULES, FALSE
# 369 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	switch VAR_RESULT
# 370 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 0, BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_3
# 371 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 1, BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_4
# 372 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 2, BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_5
# 373 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 3, BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_6
# 374 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case 4, BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_7
# 375 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_7
BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_1:
# 379 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard
	end

BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_3:
# 370 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_4:
# 371 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_5:
# 372 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_6:
# 373 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	msgbox BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_1

BattleFrontier_BattlePyramidLobby_EventScript_ReadRulesBoard_7:
# 376 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	releaseall
	end


# 175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge_Movement_0:
# 175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 175 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	face_down
	step_end

# 176 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge_Movement_1:
# 176 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 176 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 176 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 176 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 176 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 176 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 176 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
	step_end

# 191 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge_Movement_2:
# 191 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_right
# 191 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	face_left
	step_end

# 193 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
BattleFrontier_BattlePyramidLobby_EventScript_EnterChallenge_Movement_3:
# 193 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
# 193 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	walk_up
	step_end

BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid::
# 383 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Where the courage of TRAINERS\n"
	.string "is put to the test!\p"
	.string "Welcome to the BATTLE PYRAMID!\p"
	.string "I am your guide to\n"
	.string "the Battle Quest.$"

BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge::
# 393 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Have you the courage to embark on\n"
	.string "the Battle Quest challenge?$"

BattleFrontier_BattlePyramidLobby_Text_AwaitFutureChallenge::
# 398 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "We await your challenge in the future!$"

BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid::
# 402 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The Battle Quest is a battling\n"
	.string "event in which you must explore\l"
	.string "the PYRAMID and try to reach the top.\p"
	.string "In the PYRAMID are seven floors of\n"
	.string "mazes, all of them filled with not only\l"
	.string "skilled TRAINERS but also wild POKéMON.\p"
	.string "You must enter with three POKéMON,\n"
	.string "none of them holding an item.\p"
	.string "On your ascent, you will be provided\n"
	.string "with a BATTLE BAG for items.\p"
	.string "If you fail in your challenge, any item\n"
	.string "placed in the BATTLE BAG disappears.\p"
	.string "If you want to interrupt your\n"
	.string "challenge, you must select “REST”\l"
	.string "and save the game.\p"
	.string "If you don't save before interrupting,\n"
	.string "you will be disqualified.$"

BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode::
# 428 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The PYRAMID offers two courses,\n"
	.string "Level 50 and Open Level.\l"
	.string "Which will you enter?$"

BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons::
# 434 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Very good. Now, please select the three\n"
	.string "POKéMON you wish to accompany you.$"

BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLvOpen::
# 439 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "A slight problem, adventurer!\p"
	.string "You seem to not have the three\n"
	.string "POKéMON qualified for the challenge.\p"
	.string "Please also remember to take all\n"
	.string "items from your POKéMON.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsLv50::
# 451 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "A slight problem, adventurer!\p"
	.string "You seem to not have the three\n"
	.string "POKéMON qualified for the challenge.\p"
	.string "The three POKéMON must be different\n"
	.string "and each no higher than Level 50.\p"
	.string "Please also remember to take all\n"
	.string "items from your POKéMON.\p"
	.string "EGGS{STR_VAR_1}.$"

BattleFrontier_BattlePyramidLobby_Text_NotEnoughValidMonsEnd::
# 466 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "When you are ready, please have\n"
	.string "a word with me.$"

BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge::
# 471 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Before you enter the BATTLE PYRAMID,\n"
	.string "the game must be saved. Is that okay?$"

BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid::
# 476 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Very good. I will now show you into\n"
	.string "the BATTLE PYRAMID.$"

BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping::
# 481 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "We will hold your BAG for safekeeping,\n"
	.string "{PLAYER}, while you are exploring.$"

BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag::
# 486 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "In exchange, please take this BATTLE\n"
	.string "BAG, the one you used previously.$"

BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag::
# 491 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "In exchange, please take this\n"
	.string "BATTLE BAG.$"

BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag::
# 496 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} exchanged the BAG for\n"
	.string "the BATTLE BAG.$"

BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel::
# 501 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "When you step on this floor panel,\n"
	.string "you will be transported to a higher\l"
	.string "floor in the PYRAMID.\p"
	.string "I hope for your sake that your\n"
	.string "quest goes safely!$"

BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag::
# 510 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "A major problem, explorer!\p"
	.string "You did not save before ending\n"
	.string "your challenge the last time.\p"
	.string "Consequently, your challenge has\n"
	.string "been disqualified, I'm sorry to say.\p"
	.string "Here is the BAG we've been holding\n"
	.string "for you.\p"
	.string "{PLAYER} got the BAG back.$"

BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid::
# 525 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Excellent to see you back!\p"
	.string "You've conquered the PYRAMID!\n"
	.string "How splendid!$"

BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake::
# 532 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Ah, a slight problem.\p"
	.string "At least one POKéMON is holding\n"
	.string "an item.\p"
	.string "I'm sorry to say, items obtained in\n"
	.string "the PYRAMID cannot be taken away.$"

BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag::
# 542 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "All items held by your POKéMON will be\n"
	.string "moved to your BATTLE BAG, {PLAYER}.$"

BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep::
# 547 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The BATTLE BAG cannot hold all your\n"
	.string "items, I'm sorry to say.\p"
	.string "Please pick the items you'll keep in the\n"
	.string "BATTLE BAG, and with your POKéMON.$"

BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem::
# 555 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "At least one POKéMON is still\n"
	.string "holding an item.$"

BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep::
# 560 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Please pick the items you'll keep in the\n"
	.string "BATTLE BAG, and with your POKéMON.$"

BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld::
# 566 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} returned everything that\n"
	.string "the POKéMON held.$"

BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept::
# 571 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The BATTLE BAG you used will be kept\n"
	.string "in readiness for your next challenge.\p"
	.string "{PLAYER} turned the BATTLE BAG over\n"
	.string "for the BAG's return.$"

BattleFrontier_BattlePyramidLobby_Text_RecordResultsWait::
# 579 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I must record your results.\n"
	.string "Please wait.$"

BattleFrontier_BattlePyramidLobby_Text_ForConqueringPyramidTakeThis::
# 585 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "As a memento for conquering\n"
	.string "the BATTLE PYRAMID, please take this.$"

BattleFrontier_BattlePyramidLobby_Text_ReceivedPrizeItem::
# 591 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattlePyramidLobby_Text_BagIsFull::
# 597 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "…Ah…\n"
	.string "Your BAG appears to be filled.\p"
	.string "Please return after you've organized\n"
	.string "your BAG's contents.$"

BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag::
# 605 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "How disappointing for you…\p"
	.string "Here is the BAG we've been holding\n"
	.string "for you.\p"
	.string "{PLAYER} got the BAG back.$"

BattleFrontier_BattlePyramidLobby_Text_LookForwardToNextChallenge::
# 614 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "We look forward to your\n"
	.string "next challenge!$"

BattleFrontier_BattlePyramidLobby_Text_HereIsPrize::
# 620 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "We have been looking forward to\n"
	.string "your arrival!\p"
	.string "Here is your prize for conquering\n"
	.string "the PYRAMID.$"

BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait::
# 628 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Welcome…\p"
	.string "I shall be pleased to tell you what\n"
	.string "misfortunes await in the PYRAMID…$"

BattleFrontier_BattlePyramidLobby_Text_Aah::
# 635 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "… … … … … …\n"
	.string "Aah!$"

BattleFrontier_BattlePyramidLobby_Text_HintParalysis::
# 643 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see a shower of sparks…\p"
	.string "…And in it, I see your POKéMON\n"
	.string "struggling with paralysis…$"

BattleFrontier_BattlePyramidLobby_Text_HintPoison::
# 650 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see poison…\p"
	.string "…And, I see your POKéMON suffering\n"
	.string "from the effects of poison…$"

BattleFrontier_BattlePyramidLobby_Text_HintBurn::
# 657 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see bright red flames…\p"
	.string "…And, I see your POKéMON suffering\n"
	.string "from burns…$"

BattleFrontier_BattlePyramidLobby_Text_HintPPWaste::
# 664 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I sense the tremendous pressure of\n"
	.string "unrequited anger…\p"
	.string "It is a curse…\p"
	.string "…And, I see your POKéMON drained of\n"
	.string "Power Points and having no recourse\l"
	.string "but to use STRUGGLE…$"

BattleFrontier_BattlePyramidLobby_Text_HintLevitate::
# 675 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see POKéMON loftily airborne…\p"
	.string "…And, I see your POKéMON frustrated\n"
	.string "by powerless GROUND-type moves…$"

BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility::
# 682 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I sense terrific energy rising from\n"
	.string "the ground below…\p"
	.string "…And, I see your POKéMON unable to\n"
	.string "escape the power's clutches…$"

BattleFrontier_BattlePyramidLobby_Text_HintIce::
# 690 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see ICE-type POKéMON…\p"
	.string "…And, I see your POKéMON fighting\n"
	.string "the freezing effects of ice…$"

BattleFrontier_BattlePyramidLobby_Text_HintExplosion::
# 697 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see a flurry of moves that imperil\n"
	.string "the user…\p"
	.string "…And, I see your POKéMON falling\n"
	.string "to them…$"

BattleFrontier_BattlePyramidLobby_Text_HintPsychic::
# 705 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see PSYCHIC-type POKéMON…\p"
	.string "…And, I see your POKéMON in torment\n"
	.string "from PSYCHIC moves…$"

BattleFrontier_BattlePyramidLobby_Text_HintRock::
# 712 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see ROCK-type POKéMON…\p"
	.string "…And, I see your POKéMON suffering\n"
	.string "from ROCK moves…$"

BattleFrontier_BattlePyramidLobby_Text_HintFighting::
# 719 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see FIGHTING-type POKéMON…\p"
	.string "…And, I see your POKéMON pummeled\n"
	.string "by FIGHTING moves…$"

BattleFrontier_BattlePyramidLobby_Text_HintWeather::
# 726 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "RAIN DANCE… SUNNY DAY…\n"
	.string "SANDSTORM… HAIL…\p"
	.string "I see POKéMON that become stronger\n"
	.string "with the weather…\p"
	.string "…And, I see your POKéMON confounded\n"
	.string "by different types of moves…$"

BattleFrontier_BattlePyramidLobby_Text_HintBug::
# 737 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see BUG-type POKéMON…\p"
	.string "…And, I see your POKéMON suffering\n"
	.string "from different kinds of attacks…$"

BattleFrontier_BattlePyramidLobby_Text_HintDark::
# 744 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see DARK-type POKéMON…\p"
	.string "…And, I see your POKéMON suffering\n"
	.string "from DARK-type moves…$"

BattleFrontier_BattlePyramidLobby_Text_HintWater::
# 751 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see WATER-type POKéMON…\p"
	.string "…And, I see your POKéMON suffering\n"
	.string "from WATER-type moves…$"

BattleFrontier_BattlePyramidLobby_Text_HintGhost::
# 758 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see GHOST-type POKéMON…\p"
	.string "…And, I see your POKéMON suffering\n"
	.string "from GHOST-type moves…$"

BattleFrontier_BattlePyramidLobby_Text_HintSteel::
# 765 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see STEEL-type POKéMON…\p"
	.string "…And, I see your POKéMON suffering\n"
	.string "from enormously powerful moves…$"

BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon::
# 772 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see flying POKéMON…\p"
	.string "…And, I see your POKéMON suffering\n"
	.string "from enormously powerful moves…$"

BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve::
# 779 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see those that have evolved from\n"
	.string "the power of stones…\p"
	.string "I also sense fire, water,\n"
	.string "and electricity…\p"
	.string "…And, I see your POKéMON suffering\n"
	.string "from those three powers…$"

BattleFrontier_BattlePyramidLobby_Text_HintNormal::
# 790 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "I see NORMAL-type POKéMON…\p"
	.string "…And, I see your POKéMON suffering\n"
	.string "from enormously powerful moves…$"

BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot::
# 797 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Whether you believe my fortunes\n"
	.string "or not, the choice is yours…\p"
	.string "The future can be changed anytime…\n"
	.string "I wish you safe passage…$"

BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning::
# 805 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Did you know?\p"
	.string "If you run fast, TRAINERS may notice\n"
	.string "and come after you for a battle.\p"
	.string "So, if you want to avoid TRAINERS,\n"
	.string "don't catch their eyes, but sneak\l"
	.string "cautiously and quietly past them.$"

BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems::
# 816 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Awaaaaaaarrrrgh!\p"
	.string "I had a whole lot of items, but I lost\n"
	.string "them all when I lost!\p"
	.string "Awaaaaaaarrrrgh!$"

BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing::
# 825 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Welcome back!\n"
	.string "You've done the unthinkable!\p"
	.string "You've defeated the PYRAMID KING\n"
	.string "and conquered the BATTLE PYRAMID!$"

BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints::
# 833 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Young explorer!\n"
	.string "In commendation of your courage,\l"
	.string "we give you these Battle Point(s)!$"

BattleFrontier_BattlePyramidLobby_Text_RulesAreListed::
# 839 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The Battle Quest rules are listed.$"

BattleFrontier_BattlePyramidLobby_Text_ReadWhichHeading::
# 843 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "Which heading do you want to read?$"

BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules::
# 847 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "When the PYRAMID is conquered,\n"
	.string "the wild POKéMON that appear in it\l"
	.string "are replaced by different kinds.\p"
	.string "Explore, observe, and learn what kinds\n"
	.string "of wild POKéMON you may encounter.$"

BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules::
# 856 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "TRAINERS are lying in wait for you\n"
	.string "inside the PYRAMID.\p"
	.string "On each floor, there are up to\n"
	.string "eight TRAINERS.\p"
	.string "When you defeat a TRAINER, you will\n"
	.string "get a helpful hint for your adventure.$"

BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules::
# 867 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The mazes in the PYRAMID rearrange\n"
	.string "themselves every time you enter it.\p"
	.string "The mazes are poorly lit.\n"
	.string "You must advance with caution.\p"
	.string "The light grows brighter whenever you\n"
	.string "defeat a wild POKéMON or a TRAINER.$"

BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules::
# 878 "data/maps/BattleFrontier_BattlePyramidLobby/scripts.pory"
	.string "The BATTLE BAG serves as your BAG\n"
	.string "while in the PYRAMID.\p"
	.string "There are two separate BATTLE BAGS--\n"
	.string "one each for the Level 50 and\l"
	.string "Open Level adventures.\p"
	.string "They each can hold up to 99 pieces\n"
	.string "of ten kinds of items.\p"
	.string "The contents of the BATTLE BAG are\n"
	.string "lost if you fail in your quest.$"
