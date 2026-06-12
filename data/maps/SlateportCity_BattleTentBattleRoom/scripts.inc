SlateportCity_BattleTentBattleRoom_MapScripts::
# 7 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 23 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	checkplayergender
# 0 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 11 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	goto SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 16 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 17 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM
# 19 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	hideobjectat LOCALID_SLATEPORT_TENT_BATTLE_OPPONENT, MAP_SLATEPORT_CITY_BATTLE_TENT_BATTLE_ROOM
	end

SlateportCity_BattleTentBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 24 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom
	.2byte 0


SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom::
# 29 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_BATTLE_PLAYER, SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom_Movement_0
# 30 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 31 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	factory_setopponentgfx
# 32 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_TENT_BATTLE_OPPONENT, 5, 1
# 33 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	removeobject LOCALID_SLATEPORT_TENT_BATTLE_OPPONENT
# 34 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	delay 1
# 35 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	addobject LOCALID_SLATEPORT_TENT_BATTLE_OPPONENT
# 36 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_BATTLE_OPPONENT, SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom_Movement_1
# 37 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitmovement 0
# 38 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	battletent_getopponentintro
# 39 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	lockall
# 40 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 41 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitmessage
# 42 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	closemessage
# 43 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	special HealPlayerParty
# 44 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_FACTORY
# 45 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitstate
# 46 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom_2
SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom_1:
# 49 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	goto SlateportCity_BattleTent_EventScript_WarpToLobbyLost
	end

SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom_2:
# 47 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	goto SlateportCity_BattleTentBattleRoom_EventScript_DefeatedOpponent
	goto SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom_1


SlateportCity_BattleTent_EventScript_WarpToLobbyLost::
# 54 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 55 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 56 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_LOBBY, 6, 6
# 57 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitstate
	return


SlateportCity_BattleTentBattleRoom_EventScript_DefeatedOpponent::
# 62 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 63 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 64 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 65 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq SlateportCity_BattleTentBattleRoom_EventScript_DefeatedOpponent_1
# 71 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	setvar VAR_0x8006, 1
# 72 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_CORRIDOR, 2, 3
# 73 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitstate
	return

SlateportCity_BattleTentBattleRoom_EventScript_DefeatedOpponent_1:
# 66 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 67 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	special LoadPlayerParty
# 68 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_LOBBY, 6, 6
# 69 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	waitstate
	return


# 29 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom_Movement_0:
# 29 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_up
# 29 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_up
# 29 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_up
# 29 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	step_faster_right
	step_end

# 36 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
SlateportCity_BattleTentBattleRoom_EventScript_EnterRoom_Movement_1:
# 36 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_down
# 36 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_down
# 36 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_down
# 36 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	walk_down
# 36 "data/maps/SlateportCity_BattleTentBattleRoom/scripts.pory"
	step_faster_left
	step_end
