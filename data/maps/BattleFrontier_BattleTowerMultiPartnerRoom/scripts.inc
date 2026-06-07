BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts::
# 2 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_RESUME
# 6 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 21 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 27 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	pyramid_resetparty
	end

BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
# 11 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
# 12 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
# 13 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
# 14 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
# 15 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
# 16 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1
# 17 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2
# 18 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_loadpartners
	end

BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner
	goto BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 22 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 23 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 28 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom
# 29 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 30 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lockall
# 31 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_3, 0
# 32 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator
	end


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner::
# 39 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BOY_1
# 40 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BOY_1
# 41 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_BOY_1
# 42 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_BOY_1
# 43 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_BOY_1
# 44 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_BOY_1
# 45 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_BOY_1
# 46 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_BOY_1
# 47 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 48 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_3, 1
# 49 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setobjectxyperm LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, 10, 2
	end


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom::
# 54 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lockall
# 55 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 56 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 57 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom_Movement_0
# 58 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 59 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	copyobjectxytoperm LOCALID_TOWER_PARTNER_ROOM_ATTENDANT
# 60 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 61 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 62 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner, MSGBOX_DEFAULT
# 63 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	special HealPlayerParty
# 64 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 65 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	releaseall
	end


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant::
# 70 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock_faceplayer
# 71 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	message BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner
# 72 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 73 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 74 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant_2
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant_1:
# 78 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner2, MSGBOX_DEFAULT
	release_end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant_2:
# 75 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
# 76 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant_1


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator::
# 83 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner, MSGBOX_DEFAULT
# 84 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	closemessage
# 85 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, Common_Movement_StepFasterUp
# 86 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 87 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	opendoor 10, 1
# 88 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitdooranim
# 89 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator_Movement_0
# 90 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator_Movement_1
# 91 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 92 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	closedoor 10, 1
# 93 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitdooranim
# 94 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 1, 6
# 95 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitstate
# 96 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	releaseall
	end


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorEast:
# 102 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator_Movement_0
# 103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorEast_Movement_0
# 104 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
	return


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorWest:
# 110 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator_Movement_0
# 111 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorWest_Movement_0
# 112 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
	return


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner1::
# 117 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock_faceplayer
# 118 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 0
# 119 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner::
# 124 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_2
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_1:
# 127 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_INTRO
# 128 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 129 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 130 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_MON1
# 131 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 132 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 133 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_MON2_ASK
# 134 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 135 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 136 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_5
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_4:
# 139 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_ACCEPT
# 140 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 141 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
# 142 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	closemessage
# 143 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_8
# 146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_Movement_1
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_7:
# 148 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmovement 0
# 149 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 150 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
# 151 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_PARTNER_ROOM, 10, 3
# 152 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitstate
	release_end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_2:
# 125 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_1

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_5:
# 137 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_4

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_8:
# 144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_Movement_0
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_7


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner::
# 157 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	tower_dopartnermsg PARTNER_MSGID_REJECT
# 158 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitmessage
# 159 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	waitbuttonpress
	release_end


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner2::
# 164 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock_faceplayer
# 165 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 166 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner3::
# 171 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock_faceplayer
# 172 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 2
# 173 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner4::
# 178 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock_faceplayer
# 179 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 3
# 180 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner5::
# 185 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock_faceplayer
# 186 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 4
# 187 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner6::
# 192 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock_faceplayer
# 193 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 5
# 194 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner7::
# 199 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock_faceplayer
# 200 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 6
# 201 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end


BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner8::
# 206 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	lock_faceplayer
# 207 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	setvar VAR_TEMP_2, 7
# 208 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end


# 57 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom_Movement_0:
# 57 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_left
# 57 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	step_faster_down
	step_end

# 89 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator_Movement_0:
# 89 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 89 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
	step_end

# 90 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator_Movement_1:
# 90 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 90 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 90 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
	step_end

# 103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorEast_Movement_0:
# 103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_right
# 103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
	step_end

# 111 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorWest_Movement_0:
# 111 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_left
# 111 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	walk_up
# 111 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	set_invisible
	step_end

# 144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_Movement_0:
# 144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	run_left
# 144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	run_up
# 144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	run_up
# 144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	run_up
# 144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	run_up
# 144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	run_up
# 144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	run_up
# 144 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	run_up
	step_end

# 146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_Movement_1:
# 146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	run_up
# 146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	run_up
# 146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	run_up
# 146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	run_up
# 146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	run_up
# 146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	run_up
# 146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	run_up
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner::
# 212 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please find a partner from out of\n"
	.string "the TRAINERS gathered here.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner::
# 217 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}, you have not found a partner\n"
	.string "for your tag team.\p"
	.string "Would you like to quit looking and\n"
	.string "return to the reception counter?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner2::
# 225 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Then, please find a partner from\n"
	.string "the TRAINERS gathered here.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner::
# 230 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you for choosing a partner.\p"
	.string "I will now show you to your\n"
	.string "MULTI BATTLE ROOM.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Intro::
# 237 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice.\n"
	.string "You can call me {STR_VAR_3}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon1::
# 242 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "On {STR_VAR_1}'s advice, I brought\n"
	.string "one {STR_VAR_3} with {STR_VAR_2} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon2Ask::
# 247 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Please, let me join you as a tag team.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Accept::
# 253 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you!\n"
	.string "I'll go register right now.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Reject::
# 258 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I really wanted to form a tag team\n"
	.string "with you, {PLAYER}…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Intro::
# 263 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am {STR_VAR_1}'s no. {STR_VAR_2} apprentice.\n"
	.string "My name is {STR_VAR_3}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon1::
# 268 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I got advice from {STR_VAR_1} and chose\n"
	.string "one {STR_VAR_3} with {STR_VAR_2} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon2Ask::
# 273 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Please, let's form a tag team!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Accept::
# 279 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you very much!\n"
	.string "I'll be done with registration quickly!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Reject::
# 284 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}, I was hoping that I could\n"
	.string "partner up with you…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Intro::
# 289 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Um, my name's {STR_VAR_3}, and I'm\n"
	.string "{STR_VAR_1}'s no. {STR_VAR_2} apprentice.\p"
	.string "Snivel…\p"
	.string "I'm sorry!\n"
	.string "This tension is making me cry…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon1::
# 299 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} advised me, so I have\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon2Ask::
# 304 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Snivel…\n"
	.string "Please, please team up with me!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Accept::
# 311 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, really? You will?\n"
	.string "Awesome! Wicked! Awoooh!\p"
	.string "Oh… I'm sorry…\n"
	.string "I'm so happy, I'm crying…\p"
	.string "I'll go register right away.\n"
	.string "Please don't go away!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Reject::
# 322 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, b-but…\n"
	.string "Sob… Waaaaah!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Intro::
# 327 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi, there! I'm {STR_VAR_3}!\n"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon1::
# 332 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} recommended my crew.\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon2Ask::
# 337 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1},\n"
	.string "that's what I have! Cool, huh?\p"
	.string "So come on!\n"
	.string "Let's form a tag team!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Accept::
# 345 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yay! Great!\n"
	.string "Okay, I'll go register, okay?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Reject::
# 350 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Aww, why?\n"
	.string "I wanted to team up, {PLAYER}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Intro::
# 355 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_3}, the no. {STR_VAR_2} apprentice\n"
	.string "of the famous {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon1::
# 360 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I looked to {STR_VAR_3} for advice.\n"
	.string "One {STR_VAR_1}-using {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon2Ask::
# 365 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_2} with {STR_VAR_1},\n"
	.string "that's my pair.\p"
	.string "Please, will you join me in\n"
	.string "a tag team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Accept::
# 373 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you!\n"
	.string "I'll register right away!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Reject::
# 378 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{PLAYER}, I had been hoping to join\n"
	.string "you in a tag team…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Intro::
# 383 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Um… I'm sincerely happy that you\n"
	.string "would take the time to talk to me.\p"
	.string "I'm {STR_VAR_3}.\n"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon1::
# 391 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} gave me advice.\n"
	.string "I'm very grateful for it.\p"
	.string "I have a team of one {STR_VAR_2}\n"
	.string "with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon2Ask::
# 399 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\n"
	.string "I know I'm asking a lot…\p"
	.string "I don't think you'll be willing to,\n"
	.string "but may I join you as a partner?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Accept::
# 407 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Really? I can't believe it!\n"
	.string "I can't believe you'll let me join you!\l"
	.string "I… I won't let you down!\p"
	.string "Um… If it's really okay, I'll go register\n"
	.string "right this instant!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Reject::
# 416 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh…\n"
	.string "I didn't think I was good enough…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Intro::
# 421 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi, I'm {STR_VAR_3}.\n"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon1::
# 426 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} told me that it would be\n"
	.string "good to make this team:\l"
	.string "one {STR_VAR_1}-using {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon2Ask::
# 432 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_2} that knows how\n"
	.string "to use {STR_VAR_1}.\p"
	.string "Not bad, huh?\n"
	.string "Want me to team up with you?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Accept::
# 440 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Okay, glad to join you!\n"
	.string "I hope you won't mess things up for me!\l"
	.string "I'll do my registration now.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Reject::
# 446 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Huh? Why did you turn me down?\n"
	.string "You're no judge of character!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Intro::
# 451 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_3} and I'm a TRIATHLETE.\n"
	.string "I'm busy every day what with jogging,\l"
	.string "training, and rapping.\p"
	.string "I also happen to be {STR_VAR_1}'s\n"
	.string "no. {STR_VAR_2} apprentice.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon1::
# 460 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "This is what {STR_VAR_3} recommended.\n"
	.string "One {STR_VAR_1}-using {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon2Ask::
# 465 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_1}-using\n"
	.string "{STR_VAR_2}.\p"
	.string "I put a lot of effort into raising\n"
	.string "them, even though I'm busy.\p"
	.string "Let's form a tag team\n"
	.string "and give it a go!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Accept::
# 476 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thanks, that's the spirit!\n"
	.string "Hang tight while I go register, okay?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Reject::
# 481 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I took time from my busy schedule\n"
	.string "to be here! Give me a break!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Intro::
# 486 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi!\n"
	.string "How's it going?\p"
	.string "I'm {STR_VAR_3}, {STR_VAR_1}'s\n"
	.string "no. {STR_VAR_2} apprentice. Glad to meet you!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon1::
# 494 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Listen, listen! You have to hear about\n"
	.string "the POKéMON {STR_VAR_3} recommended.\l"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon2Ask::
# 500 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\n"
	.string "Of course I raised them superbly!\p"
	.string "So, want to team up?\n"
	.string "I'm sure it'll be a great combo!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Accept::
# 508 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yay, I think this will be fun!\n"
	.string "I'll go register!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Reject::
# 513 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, you're mean!\n"
	.string "I come recommended, you know.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Intro::
# 518 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please let me introduce myself.\n"
	.string "I am {STR_VAR_3}.\p"
	.string "I serve as {STR_VAR_1}'s\n"
	.string "no. {STR_VAR_2} apprentice.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon1::
# 526 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I sought the sage advice of\n"
	.string "{STR_VAR_3} and raised my team\l"
	.string "of one {STR_VAR_2} with {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon2Ask::
# 532 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Please agree to a tag team with me!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Accept::
# 538 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh… I'm delighted!\n"
	.string "I promise to give you my best!\p"
	.string "Of course I will register us!\n"
	.string "Please wait!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Reject::
# 546 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I had been hoping to join you,\n"
	.string "{PLAYER}…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Intro::
# 551 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Eek! You spoke to me!\n"
	.string "I… I'm overjoyed!\p"
	.string "I'm {STR_VAR_3}! I'm {STR_VAR_1}'s\n"
	.string "no. {STR_VAR_2} apprentice!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon1::
# 559 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "On {STR_VAR_3}'s advice, I trained\n"
	.string "one {STR_VAR_1}-using {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon2Ask::
# 564 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_1}-using\n"
	.string "{STR_VAR_2}.\p"
	.string "Please, can you grant me my wish?\n"
	.string "I want to be your tag-team partner!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Accept::
# 572 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Eek! I… I feel giddy!\n"
	.string "Thank you so much!\l"
	.string "I'll go register us right away!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Reject::
# 578 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Waaah! Don't you feel any pity?\n"
	.string "But that makes you cooler…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Intro::
# 583 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yeehaw! I'm {STR_VAR_1}'s\n"
	.string "no. {STR_VAR_2} apprentice!\p"
	.string "{STR_VAR_3}'s my name, hello, hello!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon1::
# 590 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My mentor {STR_VAR_3} recommended\n"
	.string "one {STR_VAR_1}-master {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon2Ask::
# 595 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_1}-master\n"
	.string "{STR_VAR_2}.\p"
	.string "Good stuff, huh?\n"
	.string "You'll partner with me, won't you?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Accept::
# 603 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Okay, excellent!\n"
	.string "I'll get the registration done quickly!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Reject::
# 608 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Gwaaah!\n"
	.string "You're a calculating one, {PLAYER}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Intro::
# 613 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hey! There's big trouble! This is\n"
	.string "the BATTLE TOWER's last day!\p"
	.string "… … … … … …\n"
	.string "I'm only joking!\p"
	.string "People call me {STR_VAR_3} and I do, too!\n"
	.string "I'm {STR_VAR_1}'s 1,000th apprentice!\l"
	.string "Actually, I'm no. {STR_VAR_2}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon1::
# 625 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} gave me some advice.\n"
	.string "{STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon2Ask::
# 630 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} with {STR_VAR_1}.\n"
	.string "I've got ten of each kind!\l"
	.string "Actually, just one of each!\p"
	.string "How about it?\n"
	.string "Want to try tag battles with me?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Accept::
# 639 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yippee!\n"
	.string "I'll give you a POKéMON as my thanks!\p"
	.string "Just joking! But I will really go do\n"
	.string "the registration, okay?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Reject::
# 647 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, that's so cold! I'll have to wreck\n"
	.string "the BATTLE TOWER for that!\p"
	.string "Of course I won't!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Intro::
# 654 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hey, there, I'm rockin' and a-rollin'!\n"
	.string "POKéMON, I be controllin'!\p"
	.string "I'm {STR_VAR_3} the rappin' SAILOR.\n"
	.string "Don't be mistakin' me for no wailer!\p"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice.\n"
	.string "Me, you shouldn't be quick to dismiss!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon1::
# 665 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "With the advice of {STR_VAR_3} I did\n"
	.string "abide, put together my team of pride!\l"
	.string "One {STR_VAR_1}-using {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon2Ask::
# 671 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_1}-using\n"
	.string "{STR_VAR_2}!\p"
	.string "Our meeting we should commemorate,\n"
	.string "with a tag-team victory to celebrate!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Accept::
# 679 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hey, hey, I like your style!\n"
	.string "Our registration, I will go file!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Reject::
# 684 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, hey, {PLAYER}, now that's cold!\n"
	.string "If I may be so bold!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Intro::
# 689 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yippee-yahoo!\n"
	.string "Oh, don't run! I was just having fun!\p"
	.string "Howdy! I'm {STR_VAR_3}!\n"
	.string "I'm {STR_VAR_1}'s no. {STR_VAR_2} apprentice!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon1::
# 697 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} told me what to do.\n"
	.string "So one {STR_VAR_1}-using {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon2Ask::
# 702 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_1}-using\n"
	.string "{STR_VAR_2}, I did choose.\p"
	.string "So, what do you say?\n"
	.string "Come on, make my day!\p"
	.string "Please, I'm begging you!\n"
	.string "Let me join you, don't leave me blue!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Accept::
# 713 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yeahah! Luck is with me!\n"
	.string "It sure makes me happy!\p"
	.string "Before we go join the fray,\n"
	.string "I'll go register right away!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Reject::
# 721 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You're turning me down?\n"
	.string "{PLAYER}, you're making me frown!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Intro::
# 726 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Cough!\p"
	.string "Oh, sorry, I have a cold.\n"
	.string "My POKéMON are fine, though.\p"
	.string "My name's {STR_VAR_3}, {STR_VAR_1}'s\n"
	.string "no. {STR_VAR_2} apprentice. Cough!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon1::
# 736 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I took {STR_VAR_3}'s advice to heart\n"
	.string "and put together my team of\l"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon2Ask::
# 742 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "I trained them every day,\n"
	.string "even in wind and rain.\p"
	.string "That's why I have this cold,\n"
	.string "I think.\p"
	.string "That's what I'm about.\n"
	.string "Want to be my tag partner?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Accept::
# 755 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thanks, I appreciate this!\n"
	.string "Cough, cough!\l"
	.string "Hang on while I go register.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Reject::
# 761 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, you won't?\n"
	.string "{PLAYER}, I think we'd make a good pair.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Intro::
# 766 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, hello!\n"
	.string "This is nerve-racking.\p"
	.string "I'm {STR_VAR_3}.\n"
	.string "I'm the no. {STR_VAR_2} apprentice of {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon1::
# 774 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} said this team'll be good--\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon2Ask::
# 779 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "I'm feeling self-conscious about this,\n"
	.string "but will you let me join you?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Accept::
# 786 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, gee, thank you!\n"
	.string "I feel bashful, but I'll do my best!\p"
	.string "I'll go get the registration done.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Reject::
# 793 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, please don't say no!\n"
	.string "I feel self-conscious enough already…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Intro::
# 798 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am {STR_VAR_3}, and that's no lie.\n"
	.string "I am {STR_VAR_1}'s no. {STR_VAR_2} apprentice.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon1::
# 803 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_3} recommended my team.\p"
	.string "Since the advice sounded sincere,\n"
	.string "I decided to bring with me\l"
	.string "my {STR_VAR_1}-using {STR_VAR_2} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon2Ask::
# 811 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "my {STR_VAR_1}-using {STR_VAR_2}.\p"
	.string "If possible, I would like you to accept\n"
	.string "me as your tag-team partner.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Accept::
# 818 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You really will accept me?\n"
	.string "It would be too terrible otherwise.\p"
	.string "But since you've agreed, this is fine.\n"
	.string "I shall go register the both of us.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Reject::
# 826 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hm? Now why would you refuse?\n"
	.string "Is this your idea of a joke?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassIntro::
# 831 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}, and I'm a LASS!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon1::
# 835 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What I have are one {STR_VAR_2}\n"
	.string "that uses {STR_VAR_1} and one$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon2Ask::
# 840 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_2} that uses {STR_VAR_1}.\n"
	.string "Those are what I have with me.\p"
	.string "Will you be my partner?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassAccept::
# 847 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you!\n"
	.string "I'll go do the registration!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassReject::
# 852 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You don't want to be my partner?\n"
	.string "You'll regret it later!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterIntro::
# 857 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hello!\p"
	.string "I'm YOUNGSTER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon1::
# 863 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Want to know what I have?\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon2Ask::
# 868 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "You'll be my tag-team partner,\n"
	.string "won't you?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterAccept::
# 875 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yay!\n"
	.string "I'll go and register, okay?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterReject::
# 880 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Aww! If you'd form a tag team with\n"
	.string "my POKéMON, we'd be unstoppable!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerIntro::
# 885 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yahoo!\n"
	.string "I'm HIKER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon1::
# 890 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Know what I have with me?\n"
	.string "My {STR_VAR_1}-using {STR_VAR_2} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon2Ask::
# 895 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "my {STR_VAR_1}-using {STR_VAR_2}!\p"
	.string "Sounds good, eh?\n"
	.string "Want to form a tag team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerAccept::
# 902 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yahoo!\n"
	.string "I'll go do the registering, then.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerReject::
# 907 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I would've liked to battle with you\n"
	.string "at my side.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyIntro::
# 912 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hello!\n"
	.string "I'm {STR_VAR_1}, and I'm a BEAUTY!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon1::
# 917 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Do you know what I've been raising?\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon2Ask::
# 922 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "What do you think?\n"
	.string "Want to make a tag team together?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyAccept::
# 929 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Wonderful!\n"
	.string "I'll get the registration done now!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyReject::
# 934 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "How disappointing!\p"
	.string "We two together--we would've been\n"
	.string "the best!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanIntro::
# 941 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yo!\p"
	.string "You know who I am?\n"
	.string "I'm {STR_VAR_1} the FISHERMAN!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon1::
# 948 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I've got with me a team of one\n"
	.string "{STR_VAR_1}-using {STR_VAR_2} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon2Ask::
# 953 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_1}-using {STR_VAR_2}.\p"
	.string "So, how about it?\n"
	.string "Will you battle at my side?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanAccept::
# 960 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Good, good!\n"
	.string "Leave it up to me!\p"
	.string "I'll go and register us now.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanReject::
# 967 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We matched up perfectly, too…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyIntro::
# 971 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Glad to make your acquaintance.\n"
	.string "I am {STR_VAR_1}, a LADY.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon1::
# 976 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am accompanied by a team of\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon2Ask::
# 981 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "I hope I meet your approval.\n"
	.string "For I wish to have you as my partner.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyAccept::
# 988 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I thank you sincerely.\n"
	.string "I shall handle the registration.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyReject::
# 993 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm sure that you will regret not\n"
	.string "having me as your partner.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFIntro::
# 998 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm TRIATHLETE {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon1::
# 1002 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What I have…\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon2Ask::
# 1007 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\n"
	.string "That's my pair!\p"
	.string "Please?\n"
	.string "Will you form a tag team with me?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFAccept::
# 1015 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Gee, thanks!\n"
	.string "I'll go register at the counter.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFReject::
# 1020 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We two together, we would've been\n"
	.string "tough for certain!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherIntro::
# 1025 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hiya!\n"
	.string "I'm BUG CATCHER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon1::
# 1030 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Check out what I have!\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon2Ask::
# 1035 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "So, listen!\n"
	.string "Do you want to form a tag team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherAccept::
# 1042 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Gotcha!\p"
	.string "I'll go do the registration stuff\n"
	.string "at the counter.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherReject::
# 1049 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Aww, my POKéMON are awesome.\n"
	.string "I hope you won't regret this!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMIntro::
# 1054 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Good day!\n"
	.string "I'm SCHOOL KID {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon1::
# 1059 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What I've been raising are one\n"
	.string "{STR_VAR_2} that uses {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon2Ask::
# 1064 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_2} that uses\n"
	.string "{STR_VAR_1}.\p"
	.string "Not too bad, don't you think?\n"
	.string "Would you care to form a tag team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMAccept::
# 1072 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you very much!\n"
	.string "I'll get done with the registration.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMReject::
# 1077 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "That's too bad…\p"
	.string "I was hoping that I could learn\n"
	.string "from you as your partner…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyIntro::
# 1084 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yo! Let me tell you who I am!\n"
	.string "I'm RICH BOY {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon1::
# 1089 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Guess what I got!\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon2Ask::
# 1094 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "I'm willing to offer you the chance\n"
	.string "to be in a tag team with me.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyAccept::
# 1101 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Smart move!\p"
	.string "I'll finish up the registration\n"
	.string "process quick!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyReject::
# 1108 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You'd turn me of all people down?\n"
	.string "You'll regret that decision for sure!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltIntro::
# 1113 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hiyah!\n"
	.string "I am BLACK BELT {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon1::
# 1118 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "As my companions, I have\n"
	.string "one {STR_VAR_2} using {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon2Ask::
# 1123 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_2} using\n"
	.string "{STR_VAR_1}.\p"
	.string "Please, grant me my wish!\n"
	.string "Allow me to be your tag partner!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltAccept::
# 1131 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hiyah!\n"
	.string "I will go register forthwith!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltReject::
# 1136 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I see… I hope for an opportunity\n"
	.string "the next time we meet…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFIntro::
# 1141 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi, there!\n"
	.string "I'm {STR_VAR_1}, and I'm a TUBER!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon1::
# 1146 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'll tell you what I have.\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon2Ask::
# 1151 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\n"
	.string "May I please be on your tag team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFAccept::
# 1156 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you!\n"
	.string "I'll go register us now!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFReject::
# 1161 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "If we'd become partners, we could\n"
	.string "have been so strong!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacIntro::
# 1166 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Greetings…\n"
	.string "I am HEX MANIAC {STR_VAR_1}…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon1::
# 1171 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I bear with me one {STR_VAR_1}-using\n"
	.string "{STR_VAR_2} together with one$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon2Ask::
# 1176 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}-using {STR_VAR_2}…\p"
	.string "I beseech you…\n"
	.string "Join me in a tag team…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacAccept::
# 1183 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I thank you…\n"
	.string "I shall register us…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacReject::
# 1188 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I so longed to join you…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMIntro::
# 1192 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "How do you do? I'm {STR_VAR_1},\n"
	.string "and I'm a POKéMON BREEDER!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon1::
# 1197 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm raising a couple good ones!\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon2Ask::
# 1202 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "How about it?\n"
	.string "Feel like making a tag team with me?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMAccept::
# 1209 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you kindly!\p"
	.string "I'll go take care of the registration\n"
	.string "stuff, so you wait right here!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMReject::
# 1216 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I was looking forward to being\n"
	.string "your partner…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFIntro::
# 1221 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Well, hello!\n"
	.string "I'm TRIATHLETE {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon1::
# 1226 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Want to know what I run with?\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon2Ask::
# 1231 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Well?\n"
	.string "Want to be in a tag team with me?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFAccept::
# 1238 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Good going!\p"
	.string "I'll be quick and get the registration\n"
	.string "all done!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFReject::
# 1245 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You and me, we would've been tops.\n"
	.string "It's too bad…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMIntro::
# 1250 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hey, there! My name's {STR_VAR_1}!\n"
	.string "I'm a TRIATHLETE!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon1::
# 1255 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I go on runs with my durable team--\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon2Ask::
# 1260 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Not too shabby, huh?\n"
	.string "We should be in a tag team together!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMAccept::
# 1267 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "All right!\n"
	.string "I'll go register in a flash!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMReject::
# 1272 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I really wanted to battle as your\n"
	.string "tag-team partner…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlIntro::
# 1277 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm BATTLE GIRL {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon1::
# 1281 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I've been toughening up one\n"
	.string "{STR_VAR_1}-using {STR_VAR_2} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon2Ask::
# 1286 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_1}-using {STR_VAR_2}!\p"
	.string "Do you like that combo?\n"
	.string "How about you and me join up?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlAccept::
# 1293 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Why, thanks!\p"
	.string "I'll get the registration done\n"
	.string "right now!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlReject::
# 1300 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "With you, I thought we could form\n"
	.string "the ultimate tag team…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMIntro::
# 1305 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm TRIATHLETE {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon1::
# 1309 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I've been running with one {STR_VAR_2}\n"
	.string "that knows how to use {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon2Ask::
# 1314 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "We could be in a tag team.\n"
	.string "Wouldn't that be great?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMAccept::
# 1321 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you!\p"
	.string "I'll go register us, and that's\n"
	.string "right now!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMReject::
# 1328 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Aww, that's too bad. We would've been\n"
	.string "the toughest tag team around!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMIntro::
# 1333 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Me?\n"
	.string "I'm TUBER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon1::
# 1338 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What do I have with me?\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon2Ask::
# 1343 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Hey?\n"
	.string "You'll team up with me, right?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMAccept::
# 1350 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Okay!\p"
	.string "I'll go register!\n"
	.string "Let's be excellent together!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMReject::
# 1357 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My POKéMON are tough for sure…\n"
	.string "It's too bad you don't want to team up.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristIntro::
# 1362 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yay-hey!\n"
	.string "Call me GUITARIST {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon1::
# 1367 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Check out my entourage!\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon2Ask::
# 1372 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Yay-hey! Pretty wild, huh?\n"
	.string "We'll have to do a duet in a tag team!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristAccept::
# 1379 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yay-hey! Right on!\n"
	.string "I'll do that registration stuff now!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristReject::
# 1384 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My POKéMON rock hard!\n"
	.string "You'll be sorry, I tell you!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanIntro::
# 1389 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Pleased to meet you.\n"
	.string "I am {STR_VAR_1}, a GENTLEMAN.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon1::
# 1394 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I am accompanied by my trusted\n"
	.string "{STR_VAR_1}-using {STR_VAR_2} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon2Ask::
# 1399 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_1}-using {STR_VAR_2}.\p"
	.string "May I ask you to join me in a tag-team\n"
	.string "partnership arrangement?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanAccept::
# 1406 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ah, I thank you for your trust.\n"
	.string "I shall be done with the registration.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanReject::
# 1411 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "That is most unfortunate…\p"
	.string "I shall look forward to the next\n"
	.string "opportunity…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMIntro::
# 1418 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hello, I'm {STR_VAR_1},\n"
	.string "and I'm a POKéFAN.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon1::
# 1423 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I have with me now one {STR_VAR_2}\n"
	.string "that knows the move {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon2Ask::
# 1428 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Do you like what you see?\n"
	.string "Why don't you be my tag partner?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMAccept::
# 1435 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you!\n"
	.string "I'll look after the registration!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMReject::
# 1440 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My POKéMON are top grade…\n"
	.string "It's too bad you can't appreciate that.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMIntro::
# 1445 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hm!\n"
	.string "I am {STR_VAR_1}, and an EXPERT am I!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon1::
# 1450 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The POKéMON that I've toughened up are\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon2Ask::
# 1455 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "What say you to a tag team with me?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMAccept::
# 1461 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hm!\n"
	.string "I shall register us right away!\l"
	.string "Let us both do our best!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMReject::
# 1467 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I will hope that your choice is\n"
	.string "indeed correct…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFIntro::
# 1472 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hello, hello.\n"
	.string "I'm {STR_VAR_1}, and I'm an EXPERT.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon1::
# 1477 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I've raised my POKéMON thoroughly.\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon2Ask::
# 1482 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}--\n"
	.string "they're what I have.\p"
	.string "Wouldn't you like to team up with me?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFAccept::
# 1489 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Good, good.\n"
	.string "I'll see to the registration right away.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFReject::
# 1494 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Perhaps we can form a team the next\n"
	.string "time we meet.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerIntro::
# 1499 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm DRAGON TAMER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon1::
# 1503 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The team I've been toughening up is\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon2Ask::
# 1508 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "How about it?\n"
	.string "Want to be my partner?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerAccept::
# 1515 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Okay, I'll give it my best!\n"
	.string "I'll go register now, all right?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerReject::
# 1520 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You're not going to find many tougher\n"
	.string "partners than me!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperIntro::
# 1525 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm BIRD KEEPER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon1::
# 1529 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What POKéMON do I have?\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon2Ask::
# 1534 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Don't you think we'd make a decent\n"
	.string "tag team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperAccept::
# 1541 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Great, thanks!\n"
	.string "I'll look after the registration!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperReject::
# 1546 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My POKéMON and I are strong.\n"
	.string "What a letdown.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyIntro::
# 1551 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm NINJA BOY {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon1::
# 1555 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My POKéMON team consists of one\n"
	.string "{STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon2Ask::
# 1560 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Let's be in a tag team together!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyAccept::
# 1566 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yay!\n"
	.string "Let me go register!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyReject::
# 1571 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You'll regret not having my tough\n"
	.string "POKéMON on your side!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyIntro::
# 1576 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hello!\n"
	.string "I'm PARASOL LADY {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon1::
# 1581 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Escorting me now are my {STR_VAR_2}\n"
	.string "that uses {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon2Ask::
# 1586 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} that uses\n"
	.string "{STR_VAR_1}.\p"
	.string "Aren't they nice?\n"
	.string "Care to join us in a tag team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyAccept::
# 1594 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thanks a bunch!\p"
	.string "I'll go register at the counter.\n"
	.string "Let's not disappoint each other!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyReject::
# 1601 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My POKéMON are tremendously strong.\n"
	.string "How disappointing…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacIntro::
# 1606 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hello.\n"
	.string "I'm {STR_VAR_1}, and I'm a BUG MANIAC!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon1::
# 1611 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I have found my POKéMON, yes.\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon2Ask::
# 1616 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}--\n"
	.string "they are what I found.\p"
	.string "Could I interest you in forming\n"
	.string "a tag team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacAccept::
# 1624 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Okay!\n"
	.string "Understood!\p"
	.string "I won't be long with the registration!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacReject::
# 1631 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "With the POKéMON I found, we wouldn't\n"
	.string "have lost…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorIntro::
# 1636 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ahoy, there!\n"
	.string "I'm SAILOR {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon1::
# 1641 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Let me show you my pride and joy!\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon2Ask::
# 1646 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Of course you're not going to turn\n"
	.string "me down. We will team up, right?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorAccept::
# 1653 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I didn't expect any less!\n"
	.string "I'll go register now.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorReject::
# 1658 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We would've stormed through\n"
	.string "the opposition! Too bad!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorIntro::
# 1663 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi, I'm {STR_VAR_1}.\n"
	.string "I'm a COLLECTOR.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon1::
# 1668 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The jewels in my collection are\n"
	.string "my {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon2Ask::
# 1673 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Swell, huh?\n"
	.string "We should be in a team together.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorAccept::
# 1680 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Oh, yeah!\p"
	.string "Well, let's not waste any time.\n"
	.string "I'll go register the two of us.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorReject::
# 1687 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Well, that's upsetting.\n"
	.string "You don't appreciate my POKéMON.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMIntro::
# 1692 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Howdy, I'm {STR_VAR_1}.\n"
	.string "I'm a POKéMON RANGER.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon1::
# 1697 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Keeping me company are one\n"
	.string "{STR_VAR_1}-using {STR_VAR_2} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon2Ask::
# 1702 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Don't you think we'd make an impressive\n"
	.string "tag team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMAccept::
# 1709 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "That's super!\n"
	.string "I'll deal with the registration now.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMReject::
# 1714 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Next time, choose my POKéMON,\n"
	.string "will you?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFIntro::
# 1719 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My name's {STR_VAR_1}.\n"
	.string "I'm a POKéMON RANGER!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon1::
# 1724 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Let me tell you about my team. I have\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon2Ask::
# 1729 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "How would you like to form a tag team\n"
	.string "with my little posse?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFAccept::
# 1736 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "We'll be at our best!\n"
	.string "I'll get the registration done quick!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFReject::
# 1741 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I hope you'll choose my POKéMON\n"
	.string "next time.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyIntro::
# 1746 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Pleased to meet you. I'm {STR_VAR_1}.\n"
	.string "I consider myself an AROMA LADY.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon1::
# 1751 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I travel with one {STR_VAR_2}\n"
	.string "that uses {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon2Ask::
# 1756 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} that uses\n"
	.string "{STR_VAR_1}.\p"
	.string "I hope they strike your fancy.\n"
	.string "Would you care to be my partner?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyAccept::
# 1764 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm honored by your acceptance.\n"
	.string "I will go register right this instant.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyReject::
# 1769 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "It would be wonderful if we could form\n"
	.string "a tag team the next time we meet.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacIntro::
# 1774 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Want to know who I am?\n"
	.string "I'm {STR_VAR_1}, the RUIN MANIAC!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon1::
# 1779 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The POKéMON that I have with me are\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon2Ask::
# 1784 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Intriguing, eh?\n"
	.string "How about you and I partner up?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacAccept::
# 1791 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "That's a sound decision!\n"
	.string "I'll go do the registration paperwork.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacReject::
# 1796 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hmm…\n"
	.string "I think my POKéMON are tough…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMIntro::
# 1801 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm COOLTRAINER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon1::
# 1805 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The POKéMON I have right now are one\n"
	.string "{STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon2Ask::
# 1810 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\n"
	.string "Cool, huh?\p"
	.string "Don't you think it'd be pretty cool\n"
	.string "if we made a tag team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMAccept::
# 1818 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Cool!\n"
	.string "I'll go do the registration in a flash!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMReject::
# 1823 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I thought that we'd make just\n"
	.string "the greatest team ever.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFIntro::
# 1828 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm COOLTRAINER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon1::
# 1832 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The team I've been raising has one\n"
	.string "{STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon2Ask::
# 1837 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Does that sound okay?\n"
	.string "How about we become tag partners?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFAccept::
# 1844 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sounds A-OK!\n"
	.string "I'd better do the registration.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFReject::
# 1849 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I was thinking how we would be\n"
	.string "one tough team…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacIntro::
# 1854 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Heyo!\n"
	.string "I'm {STR_VAR_1}, the POKéMANIAC!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon1::
# 1859 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What does a guy like me have?\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon2Ask::
# 1864 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1},\n"
	.string "that's what!\p"
	.string "Let's do it!\n"
	.string "We'll stomp around as a tag team!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacAccept::
# 1872 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Good call!\n"
	.string "I'll register the both of us!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacReject::
# 1877 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My POKéMON are brutal!\n"
	.string "It's not my fault if you regret this!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerIntro::
# 1882 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yo, there!\n"
	.string "I'm KINDLER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon1::
# 1887 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You know what my training cooked up?\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon2Ask::
# 1892 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Well, what do you say?\n"
	.string "Want to form a tag team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerAccept::
# 1899 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "All right!\n"
	.string "I'll get on with the registration.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerReject::
# 1904 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Promise you'll partner up with me\n"
	.string "the next time we run into each other.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperIntro::
# 1909 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}, and I'm a CAMPER!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon1::
# 1913 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I've been raising one {STR_VAR_1}-\n"
	.string "using {STR_VAR_2} and one$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon2Ask::
# 1918 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "{STR_VAR_1}-using {STR_VAR_2}.\p"
	.string "Do you think it'd be fun to team up?\n"
	.string "I bet it would be!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperAccept::
# 1925 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Yeah!\n"
	.string "Off I go to register!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperReject::
# 1930 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Next time, okay?\n"
	.string "I want to be on your team.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerIntro::
# 1935 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hello!\n"
	.string "I'm {STR_VAR_1}, and I'm a PICNICKER!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon1::
# 1940 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The POKéMON I've been taking are\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon2Ask::
# 1945 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Are you interested in joining me\n"
	.string "on a tag team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerAccept::
# 1952 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Why, thank you!\n"
	.string "I will do the registration now.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerReject::
# 1957 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "It would be nice if I could join you\n"
	.string "some other time.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMIntro::
# 1962 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm PSYCHIC {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon1::
# 1966 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The twosome I've been raising are\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon2Ask::
# 1971 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Would you like to form a tag team\n"
	.string "with me?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMAccept::
# 1978 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Sure thing!\n"
	.string "I'll take care of the registration!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMReject::
# 1983 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "If we meet again, that's when I'd like\n"
	.string "to team up with you.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFIntro::
# 1988 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}.\n"
	.string "I'm a PSYCHIC.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon1::
# 1993 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon2Ask::
# 1997 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}--\n"
	.string "they're my disciples.\p"
	.string "Doesn't the idea of forming a tag-team\n"
	.string "partnership intrigue you?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFAccept::
# 2005 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you.\n"
	.string "I'll go deal with the registration.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFReject::
# 2010 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I hope there will be another chance\n"
	.string "to forge an alliance.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFIntro::
# 2015 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm SCHOOL KID {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon1::
# 2019 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_1}-using {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon2Ask::
# 2023 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_1}-using\n"
	.string "{STR_VAR_2} are my POKéMON pair.\p"
	.string "May I please be your partner on\n"
	.string "a tag team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFAccept::
# 2031 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Ooh, thank you!\n"
	.string "I'll register at the counter right away!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFReject::
# 2036 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Please?\n"
	.string "May I join you the next time?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFIntro::
# 2041 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hiya! The name's {STR_VAR_1}!\n"
	.string "I'm a POKéMON BREEDER!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon1::
# 2046 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The POKéMON I've raised are one\n"
	.string "{STR_VAR_1}-using {STR_VAR_2} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon2Ask::
# 2051 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_1}-using {STR_VAR_2}.\p"
	.string "Sound interesting?\n"
	.string "How about we form a tag team, then?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFAccept::
# 2058 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "All righty!\n"
	.string "You leave the registration to me!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFReject::
# 2063 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You have to team up with me next time,\n"
	.string "all right?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFIntro::
# 2068 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm {STR_VAR_1}, and I'm proud to say\n"
	.string "that I am a POKéFAN.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon1::
# 2073 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "The darling POKéMON I've raised are\n"
	.string "one {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon2Ask::
# 2078 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}.\p"
	.string "Aren't they just the cutest?\n"
	.string "We ought to make a team!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFAccept::
# 2085 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Thank you, dear!\n"
	.string "I'll be on my way to register!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFReject::
# 2090 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "My darling POKéMON are the best,\n"
	.string "I'll have you know. How annoying!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFIntro::
# 2095 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi, I'm SWIMMER {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon1::
# 2099 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_1}-using {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon2Ask::
# 2103 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "and one {STR_VAR_1}-using\n"
	.string "{STR_VAR_2} are what I've trained.\p"
	.string "You and me, let's make a tag team.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFAccept::
# 2110 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "That's cool!\n"
	.string "I'll register the two of us.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFReject::
# 2115 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "If we meet again, you owe me\n"
	.string "a tag team!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMIntro::
# 2120 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "What's happening?\n"
	.string "I'm {STR_VAR_1}, and I'm a TRIATHLETE.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon1::
# 2125 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I got a couple decent POKéMON.\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon2Ask::
# 2130 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "It'd be neat if we made a tag team\n"
	.string "together, so how about it?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMAccept::
# 2137 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Right on!\n"
	.string "You wait while I register, okay?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMReject::
# 2142 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I expect you'll let me join you\n"
	.string "next time, how's that?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFIntro::
# 2147 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I'm the TRIATHLETE {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon1::
# 2151 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon2Ask::
# 2155 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "another {STR_VAR_2} that knows how\n"
	.string "to use {STR_VAR_1}. That's my pair.\p"
	.string "What do you think?\n"
	.string "We'd make a good team, I'd say.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFAccept::
# 2163 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "I like that answer!\n"
	.string "I'll get done with registration fast!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFReject::
# 2168 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "You'll give me another chance to form\n"
	.string "a partnership, won't you?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMIntro::
# 2173 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Hi, there! Hello!\n"
	.string "I'm {STR_VAR_1}, and I'm a SWIMMER!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon1::
# 2178 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Check out what I've been raising!\n"
	.string "One {STR_VAR_2} with {STR_VAR_1} and$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon2Ask::
# 2183 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "one {STR_VAR_2} with {STR_VAR_1}!\p"
	.string "Sweet, huh?\n"
	.string "It'd be sweet to form a team, too!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMAccept::
# 2190 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "Much obliged!\n"
	.string "I'll get this registration thing done!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMReject::
# 2195 "data/maps/BattleFrontier_BattleTowerMultiPartnerRoom/scripts.pory"
	.string "If we meet again, you have to team up\n"
	.string "with me. You'll do that, right?$"
