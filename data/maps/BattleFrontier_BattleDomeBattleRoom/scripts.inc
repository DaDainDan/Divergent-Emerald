BattleFrontier_BattleDomeBattleRoom_MapScripts::
# 11 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 34 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_RESUME
# 28 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 31 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 13 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_setopponentgfx
# 14 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 15 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_TEMP_F, VAR_RESULT
# 17 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, DOME_ROUND1
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 25 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx
	end

BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	random 2
# 19 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_TEMP_D, VAR_RESULT
# 20 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_D, 0
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	goto BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_DOME_AUDIENCE_WALKING, 2, 0
# 22 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setobjectmovementtype LOCALID_DOME_AUDIENCE_WALKING, MOVEMENT_TYPE_FACE_RIGHT
	goto BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_RESUME:
# 35 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_RESUME_2
BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 36 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience
	goto BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_RESUME_1

BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 29 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom
	.2byte 0

BattleFrontier_BattleDomeBattleRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 32 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects
	.2byte 0


BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx::
	checkplayergender
# 0 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_2
# 46 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_1:
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_2:
# 44 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx_1


BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects::
# 52 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	hideobjectat LOCALID_DOME_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM
# 53 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience
# 54 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_SetPlayerGfx
# 55 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 56 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_SetInvisible
# 57 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 58 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, DOME_FINAL
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_2
# 61 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_getbrainstatus
# 62 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_TEMP_E, VAR_RESULT
# 63 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_5
# 66 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_setbrainobj
# 67 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setobjectxyperm LOCALID_DOME_OPPONENT, 13, 9
# 68 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	removeobject LOCALID_DOME_OPPONENT
# 69 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 1
# 70 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	addobject LOCALID_DOME_OPPONENT
# 71 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_Movement_0
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_2:
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_5:
	end


BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience::
# 77 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_TEMP_F
# 78 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_3
# 79 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_4
# 80 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_5
BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_1:
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_3:
# 78 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound2Audience
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_4:
# 79 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddSemifinalAudience
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_5:
# 80 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AddFinalAudience
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AddAudience_1


BattleFrontier_BattleDomeBattleRoom_EventScript_AddRound2Audience::
# 86 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 87 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 88 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 89 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 90 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 91 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 0
# 92 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 93 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 94 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 95 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 96 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AddSemifinalAudience::
# 101 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 102 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 103 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 104 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 7, 9, 0
# 105 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 106 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 10, 12, 0
# 107 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 108 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 0
# 109 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 2, 1
# 110 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 16, 3, 1
# 111 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 17, 4, 1
# 112 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 113 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 9, 1
# 114 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 115 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 23, 13, 1
# 116 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 117 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 118 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 5, 2
# 119 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 120 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 6, 2
# 121 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 31, 8, 2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_AddFinalAudience::
# 126 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 0, 2, 0
# 127 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 1, 3, 0
# 128 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 2, 15, 0
# 129 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 3, 5, 0
# 130 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 4, 6, 0
# 131 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 5, 7, 0
# 132 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 6, 8, 0
# 133 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 7, 9, 0
# 134 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 8, 10, 0
# 135 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 9, 11, 0
# 136 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 10, 12, 0
# 137 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 11, 13, 0
# 138 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 12, 14, 0
# 139 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 13, 15, 2
# 140 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 14, 12, 2
# 141 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 15, 2, 1
# 142 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 16, 3, 1
# 143 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 17, 4, 1
# 144 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 18, 6, 1
# 145 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 19, 7, 1
# 146 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 9, 1
# 147 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 21, 10, 1
# 148 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 22, 11, 1
# 149 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 23, 13, 1
# 150 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 24, 14, 1
# 151 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 15, 1
# 152 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 2, 2
# 153 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 27, 3, 2
# 154 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 5, 2
# 155 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCHOOL_KID_M, 29, 5, 1
# 156 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 6, 2
# 157 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 31, 8, 2
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom::
# 162 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lockall
# 163 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 164 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, DOME_ROUND1
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_2
BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_1:
# 169 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, Common_Movement_StepDown
# 170 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 171 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer
# 172 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome, MSGBOX_DEFAULT
# 173 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 174 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	showobjectat LOCALID_DOME_PLAYER, MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM
# 175 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_Movement_1
# 176 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_2:
# 165 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_D, 0
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_4
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_1

BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_4:
# 166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_AUDIENCE_WALKING, BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_Movement_0
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_1


BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer::
# 181 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 182 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 183 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 184 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_FINAL
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_2
BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_1:
# 187 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_E, FRONTIER_BRAIN_NOT_READY
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_5
BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_4:
# 190 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_2:
# 185 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_5:
# 188 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceReactToPlayer_4


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent::
# 195 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_getopponentname
# 196 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer, MSGBOX_DEFAULT
# 197 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 198 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, Common_Movement_WalkRight
# 199 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, Common_Movement_WalkLeft
# 200 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 201 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	tower_getopponentintro 0
# 202 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 203 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 204 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_initopponentparty
# 205 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle
# 206 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 0
# 207 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 208 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case B_OUTCOME_WON, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_3
# 209 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case B_OUTCOME_LOST, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_4
# 210 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case B_OUTCOME_FORFEITED, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_4
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_1:
# 212 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 1
# 213 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_Draw
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_3:
# 208 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_1

BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_4:
# 210 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleOpponent_1


BattleFrontier_BattleDomeBattleRoom_EventScript_Draw::
# 218 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait, MSGBOX_DEFAULT
# 219 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 220 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 221 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 222 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
# 223 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_REFEREE, BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_Movement_0
# 224 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 225 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, Common_Movement_StepFasterLeft
# 226 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 227 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 180
# 228 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_REFEREE, BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_Movement_1
# 229 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 230 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_2
BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_1:
# 233 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_compareseeds
# 234 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_5
BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_4:
# 237 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_2:
# 231 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_1

BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_5:
# 235 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_4


BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent::
# 242 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, Common_Movement_StepDown
# 243 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 244 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_getopponentname
# 245 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_TEMP_2
# 246 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case 2, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_3
# 247 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_4
# 250 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_5
BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_1:
# 254 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 255 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 256 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 257 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
# 258 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_LOST_MATCH
# 259 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobbyLost
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_3:
# 246 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTucker
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_1

BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_4:
# 248 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_gettrainername STR_VAR_2
# 249 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_1

BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_5:
# 251 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_gettrainername STR_VAR_1
# 252 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_LostToOpponent_1


BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobbyLost::
# 264 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 265 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby
	end


BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent::
# 270 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, Common_Movement_StepDown
# 271 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 272 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_TEMP_2
# 273 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case 0, BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_3
# 274 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case 1, BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_4
BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_1:
# 276 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 277 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 278 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
# 279 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_getroundtext
# 280 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_WON_MATCH
# 281 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 282 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	addvar VAR_RESULT, 1
# 283 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 284 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, DOME_ROUNDS_COUNT
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_6
BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_5:
# 287 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_0x8006, 1
# 288 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_PRE_BATTLE_ROOM, 5, 3
# 289 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitstate
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_3:
# 273 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_1

BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_4:
# 274 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_1

BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_6:
# 285 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_DefeatedOpponent_5


BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney::
# 293 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, Common_Movement_WalkUp
# 294 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 295 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 296 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_OPEN
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_2
# 299 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ, MSGBOX_DEFAULT
BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_1:
# 301 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	special DoDomeConfetti
# 302 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 303 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 304 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 60
# 305 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 306 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_2:
# 297 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney_1


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer::
# 311 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_get DOME_DATA_ATTEMPTED_CHALLENGE
# 312 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_2
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_1:
# 315 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_get DOME_DATA_HAS_WON_CHALLENGE
# 316 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_5
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_4:
# 319 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_get DOME_DATA_WIN_STREAK_ACTIVE
# 320 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_8
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_7:
# 323 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_2:
# 313 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_5:
# 317 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_4

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_8:
# 321 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayer_7


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt::
# 328 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 329 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 330 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_3
# 331 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_4
# 332 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_5
# 333 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_6
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_1:
# 335 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_3:
# 330 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_4:
# 331 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_RisingStar
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_5:
# 332 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_6:
# 333 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerFirstAttempt_1


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon::
# 340 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 341 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 342 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_3
# 343 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_4
# 344 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_5
# 345 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_6
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_1:
# 347 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_3:
# 342 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_4:
# 343 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_5:
# 344 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_6:
# 345 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerNeverWon_1


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion::
# 352 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_TEMP_F, DOME_FINAL
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_2
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_1:
# 355 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_TEMP_E
# 356 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_SILVER, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_6
# 357 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_6
# 358 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_7
# 359 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_7
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_4:
# 361 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_2:
# 353 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_6:
# 357 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_4

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_7:
# 359 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampion_4


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker::
# 365 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 366 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 367 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_3
# 368 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_4
# 369 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_5
# 370 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_6
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_1:
# 372 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_3:
# 367 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_4:
# 368 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_5:
# 369 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_6:
# 370 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerChampionNoTucker_1


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak::
# 377 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 378 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 379 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND1, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_3
# 380 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_ROUND2, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_4
# 381 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_SEMIFINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_5
# 382 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case DOME_FINAL, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_6
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_1:
# 384 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_3:
# 379 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_4:
# 380 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_5:
# 381 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_6:
# 382 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnouncePlayerBrokenStreak_1


BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker::
# 389 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_TEMP_E
# 390 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_SILVER, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_3
# 391 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_3
# 392 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_4
# 393 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_4
# 394 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_5
BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_1:
# 396 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_3:
# 391 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_4:
# 393 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker, MSGBOX_DEFAULT
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_1

BattleFrontier_BattleDomeBattleRoom_EventScript_AnnounceTucker_5:
	end


BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter::
# 401 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 402 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_AUDIENCE_TWIN, BattleFrontier_BattleDomeBattleRoom_Movement_AudienceTwinJump
# 403 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_ANNOUNCER, BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerMoveForTuckerEntrance
# 404 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_Movement_TuckerEnterAndDance
# 405 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 406 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 407 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 408 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 409 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 410 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 411 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 412 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 413 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 414 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 415 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 416 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 417 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 418 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 419 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 420 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 421 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant
# 422 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 423 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 424 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 425 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 426 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_TEMP_E
# 427 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_3
# 428 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_4
# 429 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_5
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_1:
# 431 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 432 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_7
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_6:
# 435 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro, MSGBOX_DEFAULT
# 436 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 437 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_3:
# 427 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_1

BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_4:
# 428 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_1

BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_5:
# 429 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_1

BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_7:
# 433 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerEnter_6


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver::
# 442 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy, MSGBOX_DEFAULT
# 443 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerStart
# 444 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_2
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_1:
# 447 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 448 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_Movement_0
# 449 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 450 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass, MSGBOX_DEFAULT
# 451 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 452 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol
# 453 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 454 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitfanfare
# 455 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_givesymbol
# 456 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime, MSGBOX_DEFAULT
# 457 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_2:
# 445 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_1


BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro::
# 462 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 463 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_ne BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro_2
BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro_1:
# 466 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro, MSGBOX_DEFAULT
# 467 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 468 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro_2:
# 464 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_TuckerGoldIntro_1


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold::
# 473 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess, MSGBOX_DEFAULT
# 474 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerStart
# 475 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_2
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_1:
# 478 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 479 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_Movement_0
# 480 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 481 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed, MSGBOX_DEFAULT
# 482 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 483 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	message BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine
# 484 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmessage
# 485 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitfanfare
# 486 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_givesymbol
# 487 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter, MSGBOX_DEFAULT
# 488 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_2:
# 476 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WonTourney
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerGold_1


BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerStart::
# 493 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTucker, MSGBOX_DEFAULT
# 494 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	closemessage
# 495 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_PLAYER, Common_Movement_WalkRight
# 496 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	applymovement LOCALID_DOME_OPPONENT, Common_Movement_WalkLeft
# 497 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitmovement 0
# 498 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle
# 499 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	switch VAR_RESULT
# 500 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case B_OUTCOME_LOST, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerStart_3
# 501 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case B_OUTCOME_FORFEITED, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerStart_3
# 509 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	case B_OUTCOME_DREW, BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerStart_4
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerStart_1:
# 513 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer, MSGBOX_DEFAULT
# 514 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_WON_MATCH
# 515 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_getsymbols
	return

BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerStart_3:
# 502 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	msgbox BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker, MSGBOX_DEFAULT
# 503 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	playse SE_M_ENCORE2
# 504 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	call BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround
# 505 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitse
# 506 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resolvewinners DOME_PLAYER_LOST_MATCH
# 507 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 508 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerStart_1

BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerStart_4:
# 510 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_2, 2
# 511 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_Draw
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerStart_1


BattleFrontier_BattleDomeBattleRoom_EventScript_DoDomeBattle::
# 520 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	frontier_set FRONTIER_DATA_RECORD_DISABLED, FALSE
# 521 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	special HealPlayerParty
# 522 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_9, 1
# 523 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_DOME
# 524 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitstate
# 525 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	setvar VAR_TEMP_9, 0
# 526 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_restorehelditems
# 527 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	special HealPlayerParty
# 528 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	dome_resetsketch
	return


BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby::
# 533 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 534 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	compare VAR_RESULT, FRONTIER_MODE_DOUBLES
	goto_if_eq BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_2
# 537 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_LOBBY, 5, 11
BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_1:
# 539 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	waitstate
	end

BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_2:
# 535 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_LOBBY, 17, 11
	goto BattleFrontier_BattleDomeBattleRoom_EventScript_WarpToLobby_1


BattleFrontier_BattleDomeBattleRoom_EventScript_AudienceLookAround::
# 544 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 0, DIR_EAST
# 545 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 2, DIR_EAST
# 546 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 4, DIR_EAST
# 547 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 6, DIR_EAST
# 548 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 8, DIR_EAST
# 549 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 10, DIR_WEST
# 550 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 12, DIR_WEST
# 551 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 14, DIR_WEST
# 552 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 16, DIR_WEST
# 553 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 18, DIR_WEST
# 554 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 20, DIR_EAST
# 555 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 22, DIR_EAST
# 556 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 24, DIR_EAST
# 557 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 26, DIR_EAST
# 558 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 28, DIR_EAST
# 559 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 30, DIR_EAST
# 560 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
# 561 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 0, DIR_SOUTH
# 562 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 2, DIR_SOUTH
# 563 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 4, DIR_SOUTH
# 564 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 6, DIR_SOUTH
# 565 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 8, DIR_SOUTH
# 566 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 10, DIR_SOUTH
# 567 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 12, DIR_SOUTH
# 568 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 14, DIR_SOUTH
# 569 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 16, DIR_SOUTH
# 570 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 18, DIR_SOUTH
# 571 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 20, DIR_SOUTH
# 572 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 22, DIR_SOUTH
# 573 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 24, DIR_SOUTH
# 574 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 26, DIR_SOUTH
# 575 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 28, DIR_SOUTH
# 576 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 30, DIR_SOUTH
# 577 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
# 578 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 1, DIR_EAST
# 579 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 3, DIR_EAST
# 580 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 5, DIR_EAST
# 581 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 7, DIR_EAST
# 582 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 9, DIR_EAST
# 583 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 11, DIR_WEST
# 584 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 13, DIR_WEST
# 585 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 15, DIR_WEST
# 586 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 17, DIR_WEST
# 587 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 19, DIR_WEST
# 588 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 21, DIR_EAST
# 589 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 23, DIR_EAST
# 590 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 25, DIR_EAST
# 591 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 27, DIR_WEST
# 592 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 31, DIR_WEST
# 593 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
# 594 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 1, DIR_SOUTH
# 595 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 3, DIR_SOUTH
# 596 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 5, DIR_SOUTH
# 597 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 7, DIR_SOUTH
# 598 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 9, DIR_SOUTH
# 599 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 11, DIR_SOUTH
# 600 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 13, DIR_SOUTH
# 601 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 15, DIR_SOUTH
# 602 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 17, DIR_SOUTH
# 603 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 19, DIR_SOUTH
# 604 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 21, DIR_SOUTH
# 605 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 23, DIR_SOUTH
# 606 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 25, DIR_SOUTH
# 607 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 27, DIR_SOUTH
# 608 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	turnvobject 31, DIR_SOUTH
# 609 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay 20
	return


# 613 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_TuckerEnterAndDance:
# 614 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_visible
# 615 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 615 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 615 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 616 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 617 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 618 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 619 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 620 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 621 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 622 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 623 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 624 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 625 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 626 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 627 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 628 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 629 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 630 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	run_up
# 630 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	run_up
# 631 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 632 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 633 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 634 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 635 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 636 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 637 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 638 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 639 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 640 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 641 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 642 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 643 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 644 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 645 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_look
# 646 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 647 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lock_look
# 648 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 648 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 649 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_look
# 650 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 651 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lock_look
# 652 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_2_left
# 653 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_look
# 654 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 655 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 656 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 657 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 658 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 659 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 660 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 661 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 662 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 663 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 664 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 665 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 666 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 667 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 668 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 669 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 670 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 671 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 672 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 673 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 674 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 675 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 676 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 677 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 678 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 679 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 680 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 681 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 682 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 683 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 684 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 685 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	lock_look
# 686 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 687 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	creep_right
# 688 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 689 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	creep_right
# 690 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	unlock_look
# 691 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 692 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 693 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_up
# 693 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_up
# 694 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 695 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 695 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 695 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 696 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_up
# 697 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 698 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 699 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 699 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 700 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 701 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 702 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 703 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 704 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_right
# 705 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 706 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_down
# 707 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_2
# 708 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_left
# 709 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 710 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 710 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
	step_end

# 713 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_AnnouncerMoveForTuckerEntrance:
# 714 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 714 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 715 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 715 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 716 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_faster_right
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 717 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 718 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 718 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 719 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_faster_down
	step_end

# 722 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_Movement_AudienceTwinJump:
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 723 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 724 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_8
# 725 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	disable_landing_effect
# 726 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_down
# 727 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_4
# 728 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	jump_in_place_down
# 729 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	enable_landing_effect
	step_end

# 71 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_SetUpObjects_Movement_0:
# 71 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	face_up
# 71 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_invisible
	step_end

# 166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_Movement_0:
# 166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_down
# 166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 166 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	step_faster_down
	step_end

# 175 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_EnterRoom_Movement_1:
# 175 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	set_visible
# 175 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	delay_16
# 175 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 175 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 175 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_up
# 175 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 175 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
	step_end

# 223 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_Movement_0:
# 223 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 223 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 223 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
# 223 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_right
	step_end

# 228 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_Draw_Movement_1:
# 228 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 228 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 228 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 228 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
	step_end

# 448 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
BattleFrontier_BattleDomeBattleRoom_EventScript_BattleTuckerSilver_Movement_0:
# 448 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
# 448 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	walk_left
	step_end

BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome::
# 732 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} has entered the BATTLE DOME!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer::
# 736 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{STR_VAR_1}\n"
	.string "match!\p"
	.string "{PLAYER} versus {STR_VAR_2}!\p"
	.string "Let the battle begin!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner::
# 745 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the winner!\n"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner::
# 750 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{STR_VAR_2} is the winner!\n"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ::
# 755 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Level 50\n"
	.string "Battle Tournament Champion!\p"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp::
# 762 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Open Level\n"
	.string "Battle Tournament Champion!\p"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait::
# 769 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "What an unbelievable finish!\n"
	.string "We have a double knockout!\p"
	.string "In this event, the Battle Tournament\n"
	.string "rules call for a REFEREE'S decision.\p"
	.string "Please wait while the judging\n"
	.string "is under way.$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer::
# 780 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The REFEREES have reached\n"
	.string "a decision!\p"
	.string "The winner is…\n"
	.string "Oh, my goodness!\l"
	.string "The winner is {STR_VAR_1}!\l"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer::
# 790 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The REFEREES have reached\n"
	.string "a decision!\p"
	.string "The winner is…\n"
	.string "Oh, my goodness!\l"
	.string "The winner is {PLAYER}!\l"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope::
# 800 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The bright new hope!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_RisingStar::
# 806 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The rising star!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship::
# 812 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will this TRAINER race to\n"
	.string "the championship?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry::
# 819 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can the feat of a championship\n"
	.string "on the first try be achieved?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged::
# 826 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can the loss of the last match\n"
	.string "be avenged?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship::
# 833 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The TRAINER is on fire for\n"
	.string "the first championship try!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal::
# 840 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "A win here means this TRAINER\n"
	.string "advances to the final!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue::
# 847 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will the long-held dream of\n"
	.string "a championship finally come true?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion::
# 854 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The invincible champion!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer::
# 860 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can anyone hope to beat this\n"
	.string "TRAINER?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer::
# 867 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Do battles exist solely for\n"
	.string "this TRAINER?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle::
# 874 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The current champion aiming to\n"
	.string "retain the title!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned::
# 881 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The former champion has returned!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned::
# 887 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The former toughness has returned!\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals::
# 893 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will this TRAINER do as expected\n"
	.string "and advance to the finals?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory::
# 900 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Will the former champ regain\n"
	.string "lost glory?\p"
	.string "$"

BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster::
# 907 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Feel the glow of a true master!$"

BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker::
# 911 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "And now… The TRAINER standing in\n"
	.string "{PLAYER}'s record-setting path…\p"
	.string "Yes! The one and only!\n"
	.string "The BATTLE DOME COMMISSIONER!\l"
	.string "Our very own DOME ACE!\l"
	.string "Make way for TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant::
# 921 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Spectators: TUCKER! TUCKER!\n"
	.string "TUCKER! TUCKER! TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro::
# 926 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{SPEAKER NAME_TUCKER}Ahahah!\p"
	.string "Do you hear it? This crowd!\n"
	.string "They're all itching to see our match!\p"
	.string "Ahahah!\p"
	.string "I bet you're twitching all over from\n"
	.string "the tension of getting to battle me!\p"
	.string "But don't you worry about a thing!\p"
	.string "I'm the no. 1 star of the BATTLE DOME!\n"
	.string "I, TUCKER the DOME ACE, will bathe you\l"
	.string "in my brilliant glow!$"

BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy::
# 944 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Your strategy!\n"
	.string "Let's see it!$"

BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer::
# 949 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Unbelievable! It's incredible!\n"
	.string "The victor is {PLAYER}!$"

BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker::
# 954 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The winner is TUCKER!\n"
	.string "The DOME ACE has prevailed!\p"
	.string "Congratulations, TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass::
# 961 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{SPEAKER NAME_TUCKER}Rules are rules!\n"
	.string "Let me see your FRONTIER PASS.$"

BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol::
# 966 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The Tactics Symbol was embossed on\n"
	.string "the FRONTIER PASS!$"

BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime::
# 971 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "… … … … … …\p"
	.string "I sorely underestimated you. I won't\n"
	.string "make the same mistake next time…$"

BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched::
# 978 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Can the win streak be stretched?\n"
	.string "The confidence is there!$"

BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker::
# 983 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "Ladies and gentlemen!\n"
	.string "Boys, girls, and POKéMON!\p"
	.string "Finally!\n"
	.string "Finally, the legend has returned!\p"
	.string "Yes, the name of that legend!\n"
	.string "Our very own DOME ACE!\l"
	.string "It's none other than TUCKER!$"

BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro::
# 995 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{SPEAKER NAME_TUCKER}Ah…\n"
	.string "The pummeling roar of the crowd…\l"
	.string "Their furnace-like heat of excitement…\l"
	.string "This is a wonderful place…\p"
	.string "To the crowd, I am the DOME ACE…\n"
	.string "I represent their hopes and dreams…\l"
	.string "I must never fade from their sight…\p"
	.string "I must burn!\n"
	.string "Brighter and more brilliant!\l"
	.string "I must light all that gather here!$"

BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess::
# 1010 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "I will unleash all the power that\n"
	.string "I possess! Right here and now!$"

BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed::
# 1015 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{SPEAKER NAME_TUCKER}You're genuinely fantastic!\p"
	.string "Never before! I haven't ever lost in the\n"
	.string "times I've had to unleash my power.\p"
	.string "Yes, quite fantastic!\n"
	.string "Your FRONTIER PASS, please?$"

BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine::
# 1025 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The Tactics Symbol took on\n"
	.string "a golden shine!$"

BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter::
# 1030 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "You're strong, but above all,\n"
	.string "you have a unique charm!\p"
	.string "In you, I see a definite potential for\n"
	.string "a superstar like me.\p"
	.string "I will very much look forward to\n"
	.string "our next encounter!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ2::
# 1042 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Level 50\n"
	.string "Battle Tournament Champion!\p"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp2::
# 1050 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "{PLAYER} is the Open Level\n"
	.string "Battle Tournament Champion!\p"
	.string "Congratulations!$"

BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTucker::
# 1057 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The final match!\p"
	.string "{PLAYER} versus the DOME ACE, TUCKER!\p"
	.string "Let the battle begin!$"

BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTucker::
# 1065 "data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.pory"
	.string "The REFEREES have reached\n"
	.string "a decision!\p"
	.string "The winner is…\n"
	.string "Oh, my goodness!\l"
	.string "The winner is our very own DOME ACE!\l"
	.string "It's TUCKER!\p"
	.string "Congratulations! And thank you!\n"
	.string "Let's hear it for the DOME ACE, TUCKER!$"
