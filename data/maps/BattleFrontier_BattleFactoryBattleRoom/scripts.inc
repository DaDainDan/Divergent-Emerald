BattleFrontier_BattleFactoryBattleRoom_MapScripts::
# 7 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 22 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 32 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_settrainers
	checkplayergender
# 0 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 12 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 15 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 16 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	end

BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_F, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	goto BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 17 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_setbrainobj
# 18 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_FACTORY_BATTLE_OPPONENT, 7, 9
	goto BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_5

BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 23 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 24 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 25 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_FACTORY_BATTLE_ROOM
# 26 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_TEMP_F, FRONTIER_BRAIN_NOT_READY
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2
BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1:
	end

BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2:
# 27 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	hideobjectat LOCALID_FACTORY_BATTLE_OPPONENT, MAP_BATTLE_FRONTIER_BATTLE_FACTORY_BATTLE_ROOM
	goto BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1

BattleFrontier_BattleFactoryBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 33 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom
	.2byte 0


BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom::
# 38 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_TEMP_F, FRONTIER_BRAIN_NOT_READY
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_1:
# 43 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_Movement_1
# 44 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_Movement_1
# 45 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 46 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_ScientistsFaceBattle
# 47 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_TEMP_F, FRONTIER_BRAIN_NOT_READY
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_5
# 55 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland
BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_4:
# 57 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	palace_getopponentintro
# 58 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	lockall
# 59 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 60 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 61 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 62 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 63 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	special HealPlayerParty
# 64 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	dofacilitytrainerbattle FRONTIER_FACILITY_FACTORY
# 65 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
# 66 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_9
BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_8:
# 75 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost
	end

BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_2:
# 39 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_GetAMoveOn, MSGBOX_DEFAULT
# 40 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 41 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_OPPONENT, BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_Movement_0
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_1

BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_5:
# 48 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_setopponentgfx
# 49 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	removeobject LOCALID_FACTORY_BATTLE_OPPONENT
# 50 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_FACTORY_BATTLE_OPPONENT, 7, 1
# 51 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addobject LOCALID_FACTORY_BATTLE_OPPONENT
# 52 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_OPPONENT, BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_Movement_2
# 53 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_4

BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_9:
# 67 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_get FACTORY_DATA_WIN_STREAK_SWAPS
# 68 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, MAX_STREAK
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_12
BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_11:
# 73 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_8

BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_12:
# 69 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 70 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setorcopyvar VAR_0x8006, VAR_RESULT
# 71 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_11


BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost::
# 80 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 81 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby
	end


BattleFrontier_BattleFactoryBattleRoom_EventScript_ScientistsFaceBattle::
# 86 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_1, Common_Movement_StepFasterRight
# 87 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_2, Common_Movement_StepFasterRight
# 88 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_3, Common_Movement_StepFasterRight
# 89 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_4, Common_Movement_StepFasterLeft
# 90 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_5, Common_Movement_StepFasterLeft
# 91 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_SCIENTIST_6, Common_Movement_StepFasterLeft
# 92 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
	return


BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak::
# 97 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_incrementstreak
# 98 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum
	end


BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum::
# 103 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 104 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 105 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 106 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum_1:
# 109 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setvar VAR_0x8006, 1
# 110 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM, 8, 8
# 111 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
# 112 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon
	end

BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum_2:
# 107 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum_1


BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon::
# 117 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 118 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby
	end


BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland::
# 123 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 124 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_3
# 125 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_4
# 126 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_5
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_1:
# 128 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 129 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_7
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_6:
# 133 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver
	end

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_3:
# 124 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_1

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_4:
# 125 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_1

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_5:
# 126 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_1

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_7:
# 130 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_NolandImFactoryHead, MSGBOX_DEFAULT
# 131 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNoland_6


BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver::
# 138 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_ShakeOutKnowledgeBringItOn, MSGBOX_DEFAULT
# 139 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle
# 140 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_1:
# 157 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost
	end

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_2:
# 141 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_getsymbols
# 142 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_5
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_4:
# 145 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_NolandLetsSeeFrontierPass, MSGBOX_DEFAULT
# 146 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 147 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, Common_Movement_WalkRight
# 148 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 149 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 150 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryBattleRoom_Text_ReceivedKnowledgeSymbol
# 151 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 152 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitfanfare
# 153 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_givesymbol
# 154 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_NextTimeNoHoldsBarred, MSGBOX_DEFAULT
# 155 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_1

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_5:
# 143 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandSilver_4


BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold::
# 162 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 163 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold_1:
# 167 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold
	end

BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold_2:
# 164 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_HarderLookThanLastTime, MSGBOX_DEFAULT
# 165 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IntroNolandGold_1


BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold::
# 172 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_AllRightBringItOn, MSGBOX_DEFAULT
# 173 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	call BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle
# 174 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_1:
# 191 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyLost
	end

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_2:
# 175 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_getsymbols
# 176 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_5
BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_4:
# 179 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_OutOfMyLeagueLetsSeePass, MSGBOX_DEFAULT
# 180 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 181 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	applymovement LOCALID_FACTORY_BATTLE_PLAYER, Common_Movement_WalkRight
# 182 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmovement 0
# 183 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 184 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	message BattleFrontier_BattleFactoryBattleRoom_Text_KnowledgeSymbolTookGoldenShine
# 185 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitmessage
# 186 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitfanfare
# 187 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_givesymbol
# 188 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleFactoryBattleRoom_Text_LastTimeILoseToYou, MSGBOX_DEFAULT
# 189 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_1

BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_5:
# 177 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_BattleNolandGold_4


BattleFrontier_BattleFactoryBattleRoom_EventScript_DoNolandBattle::
# 196 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	closemessage
# 197 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 198 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	special HealPlayerParty
# 199 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_FACTORY
# 200 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
	return


BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland::
# 205 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_get FACTORY_DATA_WIN_STREAK_SWAPS
# 206 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, MAX_STREAK
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_2
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_1:
# 209 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 210 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	setorcopyvar VAR_0x8006, VAR_RESULT
# 211 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK_SWAPS
# 212 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_get FACTORY_DATA_WIN_STREAK
# 213 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, MAX_STREAK
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_5
BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_4:
# 216 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 217 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	factory_set FACTORY_DATA_WIN_STREAK, VAR_RESULT
# 218 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 219 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 220 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobbyWon
	end

BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_2:
# 207 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementWinStreak
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_1

BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_5:
# 214 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_IncrementBattleNum
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_DefeatedNoland_4


BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby::
# 225 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 226 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_MODE_DOUBLES
	goto_if_eq BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby_2
# 229 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_LOBBY, 4, 8
BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby_1:
# 231 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	waitstate
	end

BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby_2:
# 227 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_FACTORY_LOBBY, 14, 8
	goto BattleFrontier_BattleFactoryBattleRoom_EventScript_WarpToLobby_1


# 41 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_Movement_0:
# 41 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 41 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 41 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 41 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	face_left
	step_end

# 43 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_Movement_1:
# 43 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 43 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 43 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 43 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 43 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_up
# 43 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	face_right
	step_end

# 52 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
BattleFrontier_BattleFactoryBattleRoom_EventScript_EnterRoom_Movement_2:
# 52 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 52 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 52 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 52 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 52 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	walk_down
# 52 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	face_left
	step_end

BattleFrontier_BattleFactoryBattleRoom_Text_GetAMoveOn::
# 235 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Hey, hey!\n"
	.string "Get a move on!$"

BattleFrontier_BattleFactoryBattleRoom_Text_NolandImFactoryHead::
# 240 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Hey, my name's NOLAND!\n"
	.string "I'm basically in charge of this place,\l"
	.string "which is why I'm the FACTORY HEAD!\p"
	.string "I had a look at your Battle Swap data.\p"
	.string "You seem to have the right idea,\n"
	.string "but you're still square in your head!\p"
	.string "Listen up, okay? Knowledge isn't only\n"
	.string "about reading books or doing desk work.\p"
	.string "Just doing that sort of thing…\n"
	.string "It may as well be useless!\p"
	.string "You have to experience things with\n"
	.string "your heart and your body, understand?\p"
	.string "I'll take you on under the same\n"
	.string "conditions as you.\p"
	.string "I'll be using rental POKéMON, too!$"

BattleFrontier_BattleFactoryBattleRoom_Text_ShakeOutKnowledgeBringItOn::
# 265 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Shake out every last bit of your\n"
	.string "knowledge and bring it on!$"

BattleFrontier_BattleFactoryBattleRoom_Text_NolandLetsSeeFrontierPass::
# 270 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "NOLAND: Smart going!\n"
	.string "Let's see your FRONTIER PASS.$"

BattleFrontier_BattleFactoryBattleRoom_Text_ReceivedKnowledgeSymbol::
# 275 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "The Knowledge Symbol was embossed\n"
	.string "on the FRONTIER PASS!$"

BattleFrontier_BattleFactoryBattleRoom_Text_NextTimeNoHoldsBarred::
# 280 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Heh…\n"
	.string "You're a pretty bright spark…\p"
	.string "Next time, I'll come after you hard.\n"
	.string "No holds barred, understand?\p"
	.string "You keep up your studies!$"

BattleFrontier_BattleFactoryBattleRoom_Text_HarderLookThanLastTime::
# 290 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "NOLAND: Hey, hey! How's it going?\n"
	.string "You keeping up with your studies?\p"
	.string "…Oh?\p"
	.string "You've taken on a harder look than\n"
	.string "the last time I saw you.\p"
	.string "Now, this should be fun!\n"
	.string "I'm getting excited, hey!$"

BattleFrontier_BattleFactoryBattleRoom_Text_AllRightBringItOn::
# 303 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "All right!\n"
	.string "Bring it on!$"

BattleFrontier_BattleFactoryBattleRoom_Text_OutOfMyLeagueLetsSeePass::
# 308 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "NOLAND: What the…\n"
	.string "You're getting out of my league!\p"
	.string "Sheesh!\n"
	.string "Let's see that FRONTIER PASS!$"

BattleFrontier_BattleFactoryBattleRoom_Text_KnowledgeSymbolTookGoldenShine::
# 316 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "The Knowledge Symbol took on\n"
	.string "a golden shine!$"

BattleFrontier_BattleFactoryBattleRoom_Text_LastTimeILoseToYou::
# 321 "data/maps/BattleFrontier_BattleFactoryBattleRoom/scripts.pory"
	.string "Pfft, man!\p"
	.string "That's absolutely the last time\n"
	.string "I lose to you!\p"
	.string "We have to do this again, hey?$"
