FallarborTown_BattleTentBattleRoom_MapScripts::
# 6 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 34 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	checkplayergender
# 0 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 11 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 12 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 9 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	goto FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 18 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	lockall
# 19 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	showobjectat LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
# 20 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 21 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 22 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 23 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2
FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 30 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter
	end

FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2:
# 24 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 25 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 26 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, Common_Movement_StepFasterLeft
# 27 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 28 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	goto FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 35 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 36 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
# 37 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
# 38 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_FALLARBOR_TENT_BATTLE_OPPONENT
# 39 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter::
# 46 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	tower_setopponent
# 47 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	addobject LOCALID_FALLARBOR_TENT_BATTLE_OPPONENT
# 48 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_OPPONENT, FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_Movement_0
# 49 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 50 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_Movement_1
# 51 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_M_BELLY_DRUM
# 52 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 53 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 54 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin, MSGBOX_DEFAULT
# 55 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	battletent_getopponentintro
# 56 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 57 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 58 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	call BattleFrontier_BattleArenaBattleRoom_EventScript_DoArenaBattle
# 59 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_2
FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_1:
# 68 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_Movement_1
# 69 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_M_SNORE
# 70 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 71 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 72 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	fallarbortent_getopponentname
# 73 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent, MSGBOX_DEFAULT
# 74 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost
	return

FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_2:
# 60 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_Movement_1
# 61 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_BANG
# 62 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 63 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 64 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer, MSGBOX_DEFAULT
# 65 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	closemessage
# 66 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum
	goto FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_1


FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost::
# 78 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 79 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 80 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	warp MAP_FALLARBOR_TOWN_BATTLE_TENT_LOBBY, 6, 6
# 81 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitstate
	return


FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum::
# 85 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 86 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 87 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 88 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum_2
FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum_1:
# 91 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_OPPONENT, FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum_Movement_0
# 92 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 93 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_FALLARBOR_TENT_BATTLE_OPPONENT
# 94 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 95 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 96 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, Common_Movement_StepFasterLeft
# 97 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 98 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored, MSGBOX_DEFAULT
# 99 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 100 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special SavePlayerParty
# 101 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 102 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 103 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitfanfare
# 104 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 105 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	end

FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum_2:
# 89 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon
	goto FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum_1


FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge::
# 110 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 111 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 112 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 1, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_3
# 113 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 2, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_4
FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_1:
# 115 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 116 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 117 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 118 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 0, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_7
# 126 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 1, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_8
# 138 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	case 2, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_9
FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5:
# 146 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	end

FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_3:
# 112 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_1

FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_4:
# 113 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_1

FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_7:
# 119 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	closemessage
# 120 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_ATTENDANT, FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_Movement_0
# 121 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 122 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_BATTLE_PLAYER, Common_Movement_StepFasterRight
# 123 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 124 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter
# 125 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitstate
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5

FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_8:
# 127 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown, MSGBOX_YESNO
# 128 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_10
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5

FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_9:
# 139 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge
# 140 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 141 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 142 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_12
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5

FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_10:
# 129 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait
# 130 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 131 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	fallarbortent_save CHALLENGE_STATUS_PAUSED
# 132 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	playse SE_SAVE
# 133 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 134 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 135 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_reset
	end

FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_12:
# 143 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	goto FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost
	goto FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5


FallarborTown_BattleTentBattleRoom_EventScript_WarpToLobbyWon::
# 151 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	delay 60
# 152 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 153 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 154 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	warp MAP_FALLARBOR_TOWN_BATTLE_TENT_LOBBY, 6, 6
# 155 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	waitstate
	return


# 167 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_Movement_OpponentStepForward:
# 169 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_left
	step_end

# 20 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 20 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 20 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 20 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 20 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_faster_right
	step_end

# 24 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 24 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 24 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 24 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 24 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_faster_right
	step_end

# 48 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_Movement_0:
# 48 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 48 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 48 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 48 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 48 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_faster_left
	step_end

# 50 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_Movement_1:
# 50 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	disable_landing_effect
# 50 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	jump_in_place_down
	step_end

# 91 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_IncrementBattleNum_Movement_0:
# 91 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 91 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 91 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 91 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
	step_end

# 120 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
FallarborTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_Movement_0:
# 120 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 120 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 120 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 120 "data/maps/FallarborTown_BattleTentBattleRoom/scripts.pory"
	step_faster_down
	step_end
