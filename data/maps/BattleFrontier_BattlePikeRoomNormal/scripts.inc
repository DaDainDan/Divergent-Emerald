BattleFrontier_BattlePikeRoomNormal_MapScripts::
# 2 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePikeRoom_OnResume
# 3 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePikeRoom_OnTransition
# 7 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeRoom_OnWarp
# 4 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeRoomNormal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattlePikeRoomNormal_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom
	.2byte 0


BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom::
# 11 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_TEMP_0, 1
# 12 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getroomtype
# 13 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_SINGLE_BATTLE, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_3
# 15 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_HEAL_FULL, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_4
# 16 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_STATUS, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_5
# 17 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_HARD_BATTLE, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_6
# 18 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_DOUBLE_BATTLE, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_7
# 19 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_BRAIN, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_8
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_1:
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_3:
# 14 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_1

BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_4:
# 15 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterFullHealRoom
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_1

BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_5:
# 16 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_1

BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_6:
# 17 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_1

BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_7:
# 18 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_1

BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_8:
# 19 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom_1


BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom::
# 25 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 26 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 27 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_Movement_0
# 28 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 29 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 0
# 30 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 31 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 32 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 33 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
# 34 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_PIKE_SINGLE
# 35 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 36 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_2
# 41 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_2:
# 37 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_Movement_1
# 38 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
	end


BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost::
# 46 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 47 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 5, 6
# 48 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
	end


BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom::
# 53 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 54 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 55 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer, MSGBOX_DEFAULT
# 56 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 57 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 58 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_Movement_0
# 59 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 60 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 0
# 61 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 62 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 63 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 64 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
# 65 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_PIKE_SINGLE
# 66 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 67 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom_2
# 84 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom_2:
# 68 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_Movement_1
# 69 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 70 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom_Movement_0
# 71 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 72 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock_faceplayer
# 73 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth, MSGBOX_DEFAULT
# 74 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 75 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 76 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special HealPlayerParty
# 77 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge2, MSGBOX_DEFAULT
# 78 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 79 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 80 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_Movement_1
# 81 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
	end


BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom::
# 89 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 22
# 90 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 91 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_Movement_0
# 92 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 93 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_prequeenheal
# 94 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 95 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 0, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_3
# 96 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 1, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_4
# 100 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 2, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_5
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_1:
# 105 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_3:
# 95 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_1

BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_4:
# 97 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealOne, MSGBOX_DEFAULT
# 98 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 99 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_1

BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_5:
# 101 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealTwo, MSGBOX_DEFAULT
# 102 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 103 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom_1


BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter::
# 110 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster, MSGBOX_DEFAULT
# 111 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 112 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special SpawnCameraObject
# 113 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_CAMERA, BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_Movement_0
# 114 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_Movement_1
# 115 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 116 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playse SE_PIKE_CURTAIN_CLOSE
# 117 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesLittleClosed
# 118 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 119 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesMostlyClosed
# 120 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 121 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesClosed
# 122 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 123 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 124 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 60
# 125 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playse SE_PIKE_CURTAIN_OPEN
# 126 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 65
# 127 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesMostlyClosed
# 128 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	showobjectat LOCALID_PIKE_ROOM_NPC_1, MAP_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_NORMAL
# 129 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 130 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesLittleClosed
# 131 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 132 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesOpen
# 133 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 134 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_Movement_2
# 135 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 136 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getbrainstatus
# 137 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_3
# 139 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_4
# 140 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_5
BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_1:
# 148 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 149 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_7
BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_6:
# 153 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_3:
# 138 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_1

BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_4:
# 139 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_1

BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_5:
# 141 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 142 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_10
BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_9:
# 146 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_1

BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_7:
# 150 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen, MSGBOX_DEFAULT
# 151 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_6

BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_10:
# 143 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain, MSGBOX_DEFAULT
# 144 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_9


BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver::
# 158 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck, MSGBOX_DEFAULT
# 159 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_DoPikeQueenBattle
# 160 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver_2
BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver_1:
# 175 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver_2:
# 161 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_getsymbols
# 162 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver_5
BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver_4:
# 173 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver_1

BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver_5:
# 163 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass, MSGBOX_DEFAULT
# 164 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 165 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 166 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol
# 167 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 168 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 169 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_givesymbol
# 170 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear, MSGBOX_DEFAULT
# 171 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver_4


BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold::
# 180 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn, MSGBOX_DEFAULT
# 181 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_DoPikeQueenBattle
# 182 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold_2
BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold_1:
# 197 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold_2:
# 183 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_getsymbols
# 184 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ne BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold_5
BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold_4:
# 195 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold_1

BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold_5:
# 185 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass, MSGBOX_DEFAULT
# 186 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 187 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 188 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine
# 189 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 190 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 191 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_givesymbol
# 192 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_IWontForget, MSGBOX_DEFAULT
# 193 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold_4


BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy::
# 202 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy_Movement_0
# 203 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 204 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_Movement_0
# 205 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 206 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_get PIKE_DATA_WIN_STREAK
# 207 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	addvar VAR_RESULT, 1
# 208 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK, VAR_RESULT
# 209 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoom_EventScript_WarpToFinalRoom
# 210 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
	end


BattleFrontier_BattlePikeRoomNormal_EventScript_EnterFullHealRoom::
# 215 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 216 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 217 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_Movement_0
# 218 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 219 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth
# 220 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 221 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 222 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 223 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special HealPlayerParty
# 224 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge, MSGBOX_DEFAULT
# 225 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 226 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_Movement_1
# 227 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 228 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
	end


BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom::
# 233 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 234 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 235 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, Common_Movement_WalkRight
# 236 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, Common_Movement_WalkLeft
# 237 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 238 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_Movement_0
# 239 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_Movement_0
# 240 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 241 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, Common_Movement_FaceRight
# 242 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, Common_Movement_FaceLeft
# 243 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 244 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 245 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 246 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 0
# 247 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 248 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 249 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 250 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 251 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 252 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 1
# 253 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 254 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 255 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_PIKE_DOUBLE
# 256 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 257 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom_2
# 268 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom_2:
# 258 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 259 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 260 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom_Movement_0
# 261 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 262 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom_Movement_1
# 263 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 264 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 265 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
	end


BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom::
# 273 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 274 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_WatchOut
# 275 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_Movement_0
# 276 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 277 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getstatusmon
# 278 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 279 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_0x8004
# 280 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_STATUSMON_KIRLIA, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_3
# 281 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_STATUSMON_DUSCLOPS, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_4
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_1:
# 283 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMonFinish
# 284 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled, MSGBOX_DEFAULT
# 285 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 286 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_3:
# 280 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_1

BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_4:
# 281 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_1


BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack::
# 291 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop, MSGBOX_DEFAULT
# 292 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 293 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 294 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 295 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 296 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getstatus
# 297 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 298 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_STATUS_TOXIC, BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_3
# 299 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_STATUS_BURN, BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_4
# 300 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_STATUS_PARALYSIS, BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_5
# 301 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_STATUS_SLEEP, BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_6
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_1:
# 303 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8003, SPECIES_KIRLIA
	return

BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_3:
# 298 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedToxic
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_1

BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_4:
# 299 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_1

BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_5:
# 300 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_1

BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_6:
# 301 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack_1


BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack::
# 308 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop, MSGBOX_DEFAULT
# 309 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 310 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 311 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_NORMAL
# 312 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 313 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getstatus
# 314 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 315 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_STATUS_FREEZE, BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack_3
# 316 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_STATUS_BURN, BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack_4
BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack_1:
# 318 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8003, SPECIES_DUSCLOPS
	return

BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack_3:
# 315 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack_1

BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack_4:
# 316 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack_1


BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMonFinish::
# 323 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 324 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_flashscreen
# 325 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 326 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, Common_Movement_WalkDown
# 327 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 328 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, Common_Movement_FaceUp
# 329 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 330 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 331 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry VAR_0x8003, CRY_MODE_NORMAL
# 332 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 333 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough, MSGBOX_DEFAULT
# 334 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 335 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry VAR_0x8003, CRY_MODE_NORMAL
# 336 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 337 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 338 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, Common_Movement_WalkLeft
# 339 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMonFinish_Movement_0
# 340 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 341 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_0x8003
# 342 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case SPECIES_KIRLIA, BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMonFinish_3
# 343 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case SPECIES_DUSCLOPS, BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMonFinish_4
BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMonFinish_1:
	return

BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMonFinish_3:
# 342 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMonFinish_1

BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMonFinish_4:
# 343 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMonFinish_1


BattleFrontier_BattlePikeRoomNormal_EventScript_DoPikeQueenBattle::
# 349 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 350 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_Movement_0
# 351 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 352 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_PIKE_SINGLE
# 353 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
	return


BattleFrontier_BattlePikeRoomNormal_EventScript_NPC::
# 358 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getroomtype
# 359 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 360 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_NPC, BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_3
# 361 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_STATUS, BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_4
# 362 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_HEAL_PART, BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_5
BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_1:
# 364 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_NormalNPC
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_3:
# 360 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_NormalNPC
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_1

BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_4:
# 361 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_StatusNPC
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_1

BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_5:
# 362 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_NPC_1


BattleFrontier_BattlePikeRoomNormal_EventScript_NormalNPC::
# 369 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock_faceplayer
# 370 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getnpcmsg
# 371 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 372 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 373 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
	release_end


BattleFrontier_BattlePikeRoomNormal_EventScript_StatusNPC::
# 378 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock_faceplayer
# 379 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine, MSGBOX_DEFAULT
# 380 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
	release_end


BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC::
# 385 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_healonetwomons
# 386 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_2
BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_1:
# 394 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 395 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 396 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell, MSGBOX_DEFAULT
# 397 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 398 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 399 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_Movement_0
# 400 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
	end

BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_2:
# 387 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock_faceplayer
# 388 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 389 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 2, BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_6
# 390 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 1, BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_7
BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_4:
# 392 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_1

BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_6:
# 389 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreTwoMons, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_4

BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_7:
# 390 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_4


BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMon::
# 406 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock_faceplayer
# 407 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_Silence, MSGBOX_DEFAULT
# 408 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 409 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 410 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, Common_Movement_FaceRight
# 411 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
	end


BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesMostlyClosed::
# 416 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage1_Tile0, TRUE
# 417 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage1_Tile1, TRUE
# 418 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage1_Tile2, TRUE
# 419 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage1_Tile3, TRUE
# 420 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage1_Tile4, TRUE
# 421 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage1_Tile5, FALSE
# 422 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage1_Tile6, TRUE
# 423 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
	return


BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesLittleClosed::
# 428 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage2_Tile0, TRUE
# 429 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage2_Tile1, TRUE
# 430 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage2_Tile2, TRUE
# 431 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage2_Tile3, TRUE
# 432 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage2_Tile4, TRUE
# 433 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage2_Tile5, FALSE
# 434 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage2_Tile6, TRUE
# 435 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
	return


BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesOpen::
# 440 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage3_Tile0, TRUE
# 441 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage3_Tile1, TRUE
# 442 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage3_Tile2, TRUE
# 443 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage3_Tile3, TRUE
# 444 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage3_Tile4, TRUE
# 445 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage3_Tile5, FALSE
# 446 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage3_Tile6, TRUE
# 447 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
	return


BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesClosed::
# 452 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage0_Tile0, TRUE
# 453 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage0_Tile1, TRUE
# 454 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage0_Tile2, TRUE
# 455 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage0_Tile3, TRUE
# 456 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage0_Tile4, TRUE
# 457 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage0_Tile5, FALSE
# 458 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage0_Tile6, TRUE
# 459 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
	return


# 464 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_CameraPanDown:
# 466 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 466 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
	step_end

# 27 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_Movement_0:
# 27 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 27 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
	step_end

# 37 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom_Movement_1:
# 37 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 37 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 37 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 37 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 37 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
	step_end

# 70 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom_Movement_0:
# 70 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 70 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 70 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_right
# 70 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_down
	step_end

# 113 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_Movement_0:
# 113 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 113 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
	step_end

# 114 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_Movement_1:
# 114 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 114 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 114 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 114 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
	step_end

# 134 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter_Movement_2:
# 134 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_visible
# 134 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
	step_end

# 202 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy_Movement_0:
# 202 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_left
# 202 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_right
	step_end

# 260 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom_Movement_0:
# 260 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 260 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 260 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 260 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_right
# 260 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 260 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 260 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
	step_end

# 262 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom_Movement_1:
# 262 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 262 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 262 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 262 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_left
# 262 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 262 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 262 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
	step_end

# 275 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom_Movement_0:
# 275 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	run_down
# 275 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	run_right
# 275 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	run_right
# 275 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	run_down
# 275 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	run_left
# 275 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_down
	step_end

# 339 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMonFinish_Movement_0:
# 339 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 339 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_left
# 339 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay_16
# 339 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay_16
# 339 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_down
	step_end

# 399 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC_Movement_0:
# 399 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 399 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 399 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
	step_end

BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth::
# 469 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Welcome…\n"
	.string "You must be commended for your luck…\p"
	.string "Your POKéMON shall be restored\n"
	.string "to full health…$"

BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge::
# 477 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I urge you to enjoy the rest of your\n"
	.string "Battle Choice challenge…$"

BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon::
# 482 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Ah, you're a lucky one.\n"
	.string "I'm in somewhat-good spirits now.\p"
	.string "I will restore one of your POKéMON\n"
	.string "to full health.$"

BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell::
# 490 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The best of luck to you.\n"
	.string "Farewell.$"

BattleFrontier_BattlePikeRoomNormal_Text_CareForBattleWillRestoreMons::
# 498 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Excuse me…\p"
	.string "Would you care for a battle?\n"
	.string "I'll restore your POKéMON if you win.$"

BattleFrontier_BattlePikeRoomNormal_Text_NowShallWe::
# 506 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Very well…\n"
	.string "Now, shall we?$"

BattleFrontier_BattlePikeRoomNormal_Text_HowUnsportingOfYou::
# 512 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I see…\n"
	.string "How unsporting of you…$"

BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreMonsAsPromised::
# 518 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Magnificent…\p"
	.string "As promised, I shall restore your\n"
	.string "POKéMON to full health.$"

BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell2::
# 526 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The best of luck to you.\n"
	.string "Farewell.$"

BattleFrontier_BattlePikeRoomNormal_Text_WatchOut::
# 531 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Oh, my!\p"
	.string "Watch out!$"

BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop::
# 537 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Now, now!\n"
	.string "KIRLIA, stop that!$"

BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop::
# 542 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Now, now!\n"
	.string "DUSCLOPS, stop that!$"

BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedToxic::
# 547 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used TOXIC!$"

BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis::
# 551 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used HYPNOSIS!$"

BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave::
# 555 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used THUNDER WAVE!$"

BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp::
# 559 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used WILL-O-WISP!$"

BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp::
# 563 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "DUSCLOPS used WILL-O-WISP!$"

BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam::
# 567 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "DUSCLOPS used ICE BEAM!$"

BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough::
# 571 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Look here!\n"
	.string "That's quite enough!$"

BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia::
# 576 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I must apologize to you…\p"
	.string "My KIRLIA has a TIMID nature…$"

BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops::
# 582 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I must apologize to you…\p"
	.string "My DUSCLOPS has a TIMID nature…$"

BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled::
# 588 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "It attacks without warning if it is\n"
	.string "startled by another person…\p"
	.string "Are you and your POKéMON all right?$"

BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine::
# 595 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I do apologize for what happened…\n"
	.string "I do hope your POKéMON are fine.$"

BattleFrontier_BattlePikeRoomNormal_Text_Silence::
# 600 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … …$"

BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer::
# 605 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Welcome…\p"
	.string "Here, we will have you battle\n"
	.string "a somewhat-tough TRAINER…$"

BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth::
# 612 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "How wonderful…\p"
	.string "To honor your victory, your POKéMON\n"
	.string "shall be restored to full health…$"

BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge2::
# 619 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I urge you to enjoy the rest of your\n"
	.string "Battle Choice challenge…$"

BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen::
# 624 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I am LUCY…\n"
	.string "I am the law here…\l"
	.string "For I am the PIKE QUEEN…\p"
	.string "You already know it, but to advance,\n"
	.string "you must defeat me…\p"
	.string "…I'm not one for idle chatter.\n"
	.string "Hurry. Come on…$"

BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck::
# 636 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Your luck…\n"
	.string "I hope you didn't use it all up here…$"

BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass::
# 641 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "LUCY: … … … … … …\n"
	.string "Show me your FRONTIER PASS…$"

BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol::
# 646 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The Luck Symbol was embossed on\n"
	.string "the FRONTIER PASS!$"

BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear::
# 651 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…That's all there is…\n"
	.string "Disappear already…$"

BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain::
# 656 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "LUCY: …You again…\p"
	.string "… … … … … …\p"
	.string "…I've trampled flowers and braved\n"
	.string "storms to get to where I am…\p"
	.string "I don't feel any compulsion to keep\n"
	.string "losing to the same opponent…\p"
	.string "… … … … … …\n"
	.string "Fine… I'll do it…$"

BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn::
# 671 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Now!\n"
	.string "Come on!$"

BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass::
# 676 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "LUCY: … … … … … …\p"
	.string "…FRONTIER PASS…$"

BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine::
# 682 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The Luck Symbol took on\n"
	.string "a golden shine!$"

BattleFrontier_BattlePikeRoomNormal_Text_IWontForget::
# 687 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…You, I won't forget…\n"
	.string "…Ever…$"

BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal::
# 692 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
	.string "Giggle…\n"
	.string "You seem to be bereft of luck…\p"
	.string "If only you hadn't chosen this room,\n"
	.string "your POKéMON could have been healed…$"

BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealOne::
# 702 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
	.string "Since you have chosen this room, I will\n"
	.string "restore one POKéMON to full health…$"

BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealTwo::
# 709 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
	.string "Since you have chosen this room, I will\n"
	.string "restore two POKéMON to full health…$"

BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreAllMons::
# 717 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
	.string "Giggle…\n"
	.string "You should thank your lucky stars…\p"
	.string "Since you have chosen this room,\n"
	.string "all your POKéMON will be restored…$"

BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster::
# 727 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I shall go fetch our master…$"

BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreTwoMons::
# 731 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Ah, you're a lucky one!\n"
	.string "I'm in good spirits now.\p"
	.string "I will restore two of your POKéMON\n"
	.string "to full health!$"
