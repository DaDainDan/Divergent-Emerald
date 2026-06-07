VerdanturfTown_BattleTentBattleRoom_MapScripts::
# 6 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 22 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	call VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx
	end

VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 12 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	showobjectat LOCALID_VERDANTURF_TENT_BATTLE_PLAYER, MAP_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM
# 13 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_PLAYER, VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 14 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 15 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 16 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2
VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 19 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter
	return

VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2:
# 17 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	goto VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 23 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 24 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_VERDANTURF_TENT_BATTLE_PLAYER, MAP_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM
# 25 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	call VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx
# 26 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 27 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 28 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_VERDANTURF_TENT_BATTLE_OPPONENT
	end


VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx::
	checkplayergender
# 0 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_2
# 39 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 40 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_1:
	return

VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_2:
# 36 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 37 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_SetPlayerGfx_1


VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter::
# 46 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	tower_setopponent
# 47 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	addobject LOCALID_VERDANTURF_TENT_BATTLE_OPPONENT
# 48 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_OPPONENT, VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_Movement_0
# 49 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 50 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	battletent_getopponentintro
# 51 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 52 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 53 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	call BattleFrontier_BattlePalaceBattleRoom_EventScript_DoPalaceBattle
# 54 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_2
VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_1:
# 79 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost
	return

VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_2:
# 55 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 56 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 57 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 58 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_5
VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_4:
# 64 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_OPPONENT, VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_Movement_1
# 65 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 66 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_VERDANTURF_TENT_BATTLE_OPPONENT
# 67 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_ATTENDANT, Common_Movement_StepFasterDown
# 68 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_PLAYER, Common_Movement_StepFasterUp
# 69 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 70 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_LetMeRestoreYourMons, MSGBOX_DEFAULT
# 71 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 72 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	special SavePlayerParty
# 73 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 74 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	playfanfare MUS_HEAL
# 75 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitfanfare
# 76 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 77 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_1

VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_5:
# 59 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 60 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 61 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_LOBBY, 6, 6
# 62 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitstate
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_4


VerdanturfTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost::
# 83 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 84 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 85 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_LOBBY, 6, 6
# 86 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitstate
	return


VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge::
# 90 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 91 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 92 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 1, VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_3
# 93 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 2, VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_4
VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_1:
# 95 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 96 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 97 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 98 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 0, VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_7
# 99 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 1, VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_8
# 100 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 2, VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_9
VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5:
	end

VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_3:
# 92 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor2ndOpponent
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_1

VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_4:
# 93 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_PreparedFor3rdOpponent
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_1

VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_7:
# 98 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_ContinueChallenge
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5

VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_8:
# 99 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5

VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_9:
# 100 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge_5


VerdanturfTown_BattleTentBattleRoom_EventScript_ContinueChallenge::
# 106 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_ATTENDANT, Common_Movement_StepFasterRight
# 107 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_BATTLE_PLAYER, Common_Movement_StepFasterRight
# 108 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 109 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	closemessage
# 110 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter
	return


VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge::
# 114 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattlePalaceBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 115 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case YES, VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_3
# 124 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case NO, VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_4
# 125 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_4
VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_1:
	end

VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_3:
# 117 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_SavingData
# 118 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 119 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	verdanturftent_save CHALLENGE_STATUS_PAUSED
# 120 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	playse SE_SAVE
# 121 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitse
# 122 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 123 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	frontier_reset
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_1

VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_4:
# 125 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskPauseChallenge_1


VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge::
# 131 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	message BattleFrontier_BattlePalaceBattleRoom_Text_WishToQuitChallenge
# 132 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 133 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 134 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	switch VAR_RESULT
# 135 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 0, VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_3
# 136 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case 1, VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_4
# 137 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_4
VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_1:
	end

VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_3:
# 135 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_WarpToLobbyLost
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_1

VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_4:
# 137 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskContinueChallenge
	goto VerdanturfTown_BattleTentBattleRoom_EventScript_AskRetireChallenge_1


# 13 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 13 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	set_visible
# 13 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 13 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 13 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 13 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	face_right
	step_end

# 48 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_Movement_0:
# 48 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 48 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 48 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 48 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_down
# 48 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	face_left
	step_end

# 64 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
VerdanturfTown_BattleTentBattleRoom_EventScript_NextOpponentEnter_Movement_1:
# 64 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 64 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 64 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
# 64 "data/maps/VerdanturfTown_BattleTentBattleRoom/scripts.pory"
	walk_up
	step_end
