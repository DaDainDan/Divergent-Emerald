ContestHall_MapScripts::
# 25 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ContestHall_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 31 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ContestHall_MapScripts_MAP_SCRIPT_ON_RESUME
# 37 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, ContestHall_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD
# 2 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, ContestHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 10 "data/maps/ContestHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ContestHall_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 26 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_ReadyContestMusic
# 27 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_0, 1
# 28 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_AddRandomAudienceMembers
	end

ContestHall_MapScripts_MAP_SCRIPT_ON_RESUME:
# 32 "data/maps/ContestHall/scripts.pory"
	compare VAR_TEMP_9, 1
	goto_if_eq ContestHall_MapScripts_MAP_SCRIPT_ON_RESUME_2
ContestHall_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

ContestHall_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 33 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_CreateAudience
	goto ContestHall_MapScripts_MAP_SCRIPT_ON_RESUME_1

ContestHall_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD:
# 38 "data/maps/ContestHall/scripts.pory"
	special LoadLinkContestPlayerPalettes
	end

ContestHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/ContestHall/scripts.pory"
	map_script_2 VAR_CONTEST_HALL_STATE, 1, ContestHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

ContestHall_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/ContestHall/scripts.pory"
	special LoadLinkContestPlayerPalettes
# 5 "data/maps/ContestHall/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 6 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_CreateAudience
	end

ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/ContestHall/scripts.pory"
	map_script_2 VAR_CONTEST_HALL_STATE, 1, ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 12 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_DoContest
# 13 "data/maps/ContestHall/scripts.pory"
	special ClearLinkContestFlags
# 14 "data/maps/ContestHall/scripts.pory"
	switch VAR_CONTEST_TYPE
# 15 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_NORMAL, ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
# 16 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_SUPER, ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
# 17 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_HYPER, ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
# 18 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_MASTER, ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
# 19 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_LINK, ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_4
ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 21 "data/maps/ContestHall/scripts.pory"
	waitstate
	end

ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3:
# 18 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 14, 4
	goto ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_4:
# 19 "data/maps/ContestHall/scripts.pory"
	warp MAP_LILYCOVE_CITY_CONTEST_LOBBY, 15, 4
	goto ContestHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1


ContestHall_EventScript_ReadyContestMusic::
# 44 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_TryWaitForLink
# 45 "data/maps/ContestHall/scripts.pory"
	special GetContestMultiplayerId
# 46 "data/maps/ContestHall/scripts.pory"
	switch VAR_RESULT
# 47 "data/maps/ContestHall/scripts.pory"
	case 0, ContestHall_EventScript_ReadyContestMusic_3
# 48 "data/maps/ContestHall/scripts.pory"
	case 1, ContestHall_EventScript_ReadyContestMusic_4
# 49 "data/maps/ContestHall/scripts.pory"
	case 2, ContestHall_EventScript_ReadyContestMusic_5
# 50 "data/maps/ContestHall/scripts.pory"
	case 3, ContestHall_EventScript_ReadyContestMusic_6
# 51 "data/maps/ContestHall/scripts.pory"
	case 4, ContestHall_EventScript_ReadyContestMusic_7
ContestHall_EventScript_ReadyContestMusic_1:
	return

ContestHall_EventScript_ReadyContestMusic_3:
# 47 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P1
	goto ContestHall_EventScript_ReadyContestMusic_1

ContestHall_EventScript_ReadyContestMusic_4:
# 48 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P2
	goto ContestHall_EventScript_ReadyContestMusic_1

ContestHall_EventScript_ReadyContestMusic_5:
# 49 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P3
	goto ContestHall_EventScript_ReadyContestMusic_1

ContestHall_EventScript_ReadyContestMusic_6:
# 50 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_LINK_CONTEST_P4
	goto ContestHall_EventScript_ReadyContestMusic_1

ContestHall_EventScript_ReadyContestMusic_7:
# 51 "data/maps/ContestHall/scripts.pory"
	savebgm MUS_CONTEST
	goto ContestHall_EventScript_ReadyContestMusic_1


ContestHall_EventScript_AddRandomAudienceMembers::
# 59 "data/maps/ContestHall/scripts.pory"
	call ContestHall_EventScript_GetRandomAudienceGfxId
# 60 "data/maps/ContestHall/scripts.pory"
	switch VAR_TEMP_0
# 61 "data/maps/ContestHall/scripts.pory"
	case 1, ContestHall_EventScript_AddRandomAudienceMembers_3
# 62 "data/maps/ContestHall/scripts.pory"
	case 2, ContestHall_EventScript_AddRandomAudienceMembers_4
# 63 "data/maps/ContestHall/scripts.pory"
	case 3, ContestHall_EventScript_AddRandomAudienceMembers_5
# 64 "data/maps/ContestHall/scripts.pory"
	case 4, ContestHall_EventScript_AddRandomAudienceMembers_6
# 65 "data/maps/ContestHall/scripts.pory"
	case 5, ContestHall_EventScript_AddRandomAudienceMembers_7
# 66 "data/maps/ContestHall/scripts.pory"
	case 6, ContestHall_EventScript_AddRandomAudienceMembers_8
# 67 "data/maps/ContestHall/scripts.pory"
	case 7, ContestHall_EventScript_AddRandomAudienceMembers_9
ContestHall_EventScript_AddRandomAudienceMembers_1:
# 69 "data/maps/ContestHall/scripts.pory"
	addvar VAR_TEMP_0, 1
# 70 "data/maps/ContestHall/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_lt ContestHall_EventScript_AddRandomAudienceMembers_11
ContestHall_EventScript_AddRandomAudienceMembers_10:
	return

ContestHall_EventScript_AddRandomAudienceMembers_3:
# 61 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_4, VAR_TEMP_1
	goto ContestHall_EventScript_AddRandomAudienceMembers_1

ContestHall_EventScript_AddRandomAudienceMembers_4:
# 62 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_5, VAR_TEMP_1
	goto ContestHall_EventScript_AddRandomAudienceMembers_1

ContestHall_EventScript_AddRandomAudienceMembers_5:
# 63 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_6, VAR_TEMP_1
	goto ContestHall_EventScript_AddRandomAudienceMembers_1

ContestHall_EventScript_AddRandomAudienceMembers_6:
# 64 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_7, VAR_TEMP_1
	goto ContestHall_EventScript_AddRandomAudienceMembers_1

ContestHall_EventScript_AddRandomAudienceMembers_7:
# 65 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_8, VAR_TEMP_1
	goto ContestHall_EventScript_AddRandomAudienceMembers_1

ContestHall_EventScript_AddRandomAudienceMembers_8:
# 66 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_9, VAR_TEMP_1
	goto ContestHall_EventScript_AddRandomAudienceMembers_1

ContestHall_EventScript_AddRandomAudienceMembers_9:
# 67 "data/maps/ContestHall/scripts.pory"
	copyvar VAR_OBJ_GFX_ID_A, VAR_TEMP_1
	goto ContestHall_EventScript_AddRandomAudienceMembers_1

ContestHall_EventScript_AddRandomAudienceMembers_11:
# 71 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_AddRandomAudienceMembers
	goto ContestHall_EventScript_AddRandomAudienceMembers_10


ContestHall_EventScript_GetRandomAudienceGfxId::
# 77 "data/maps/ContestHall/scripts.pory"
	setvar VAR_RESULT, 32
# 78 "data/maps/ContestHall/scripts.pory"
	special GenerateContestRand
# 79 "data/maps/ContestHall/scripts.pory"
	addvar VAR_RESULT, 1
# 80 "data/maps/ContestHall/scripts.pory"
	switch VAR_RESULT
# 81 "data/maps/ContestHall/scripts.pory"
	case 1, ContestHall_EventScript_GetRandomAudienceGfxId_3
# 82 "data/maps/ContestHall/scripts.pory"
	case 2, ContestHall_EventScript_GetRandomAudienceGfxId_4
# 83 "data/maps/ContestHall/scripts.pory"
	case 3, ContestHall_EventScript_GetRandomAudienceGfxId_5
# 84 "data/maps/ContestHall/scripts.pory"
	case 4, ContestHall_EventScript_GetRandomAudienceGfxId_6
# 85 "data/maps/ContestHall/scripts.pory"
	case 5, ContestHall_EventScript_GetRandomAudienceGfxId_7
# 86 "data/maps/ContestHall/scripts.pory"
	case 6, ContestHall_EventScript_GetRandomAudienceGfxId_8
# 87 "data/maps/ContestHall/scripts.pory"
	case 7, ContestHall_EventScript_GetRandomAudienceGfxId_9
# 88 "data/maps/ContestHall/scripts.pory"
	case 8, ContestHall_EventScript_GetRandomAudienceGfxId_10
# 89 "data/maps/ContestHall/scripts.pory"
	case 9, ContestHall_EventScript_GetRandomAudienceGfxId_11
# 90 "data/maps/ContestHall/scripts.pory"
	case 10, ContestHall_EventScript_GetRandomAudienceGfxId_12
# 91 "data/maps/ContestHall/scripts.pory"
	case 11, ContestHall_EventScript_GetRandomAudienceGfxId_13
# 92 "data/maps/ContestHall/scripts.pory"
	case 12, ContestHall_EventScript_GetRandomAudienceGfxId_14
# 93 "data/maps/ContestHall/scripts.pory"
	case 13, ContestHall_EventScript_GetRandomAudienceGfxId_15
# 94 "data/maps/ContestHall/scripts.pory"
	case 14, ContestHall_EventScript_GetRandomAudienceGfxId_16
# 95 "data/maps/ContestHall/scripts.pory"
	case 15, ContestHall_EventScript_GetRandomAudienceGfxId_17
# 96 "data/maps/ContestHall/scripts.pory"
	case 16, ContestHall_EventScript_GetRandomAudienceGfxId_18
# 97 "data/maps/ContestHall/scripts.pory"
	case 17, ContestHall_EventScript_GetRandomAudienceGfxId_19
# 98 "data/maps/ContestHall/scripts.pory"
	case 18, ContestHall_EventScript_GetRandomAudienceGfxId_20
# 99 "data/maps/ContestHall/scripts.pory"
	case 19, ContestHall_EventScript_GetRandomAudienceGfxId_21
# 100 "data/maps/ContestHall/scripts.pory"
	case 20, ContestHall_EventScript_GetRandomAudienceGfxId_22
# 101 "data/maps/ContestHall/scripts.pory"
	case 21, ContestHall_EventScript_GetRandomAudienceGfxId_23
# 102 "data/maps/ContestHall/scripts.pory"
	case 22, ContestHall_EventScript_GetRandomAudienceGfxId_24
# 103 "data/maps/ContestHall/scripts.pory"
	case 23, ContestHall_EventScript_GetRandomAudienceGfxId_25
# 104 "data/maps/ContestHall/scripts.pory"
	case 24, ContestHall_EventScript_GetRandomAudienceGfxId_26
# 105 "data/maps/ContestHall/scripts.pory"
	case 25, ContestHall_EventScript_GetRandomAudienceGfxId_27
# 106 "data/maps/ContestHall/scripts.pory"
	case 26, ContestHall_EventScript_GetRandomAudienceGfxId_28
# 107 "data/maps/ContestHall/scripts.pory"
	case 27, ContestHall_EventScript_GetRandomAudienceGfxId_29
# 108 "data/maps/ContestHall/scripts.pory"
	case 28, ContestHall_EventScript_GetRandomAudienceGfxId_30
# 109 "data/maps/ContestHall/scripts.pory"
	case 29, ContestHall_EventScript_GetRandomAudienceGfxId_31
# 110 "data/maps/ContestHall/scripts.pory"
	case 30, ContestHall_EventScript_GetRandomAudienceGfxId_32
# 111 "data/maps/ContestHall/scripts.pory"
	case 31, ContestHall_EventScript_GetRandomAudienceGfxId_33
# 112 "data/maps/ContestHall/scripts.pory"
	case 32, ContestHall_EventScript_GetRandomAudienceGfxId_34
ContestHall_EventScript_GetRandomAudienceGfxId_1:
	return

ContestHall_EventScript_GetRandomAudienceGfxId_3:
# 81 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_NINJA_BOY
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_4:
# 82 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_TWIN
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_5:
# 83 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BOY_1
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_6:
# 84 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_GIRL_1
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_7:
# 85 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_GIRL_2
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_8:
# 86 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_LITTLE_BOY
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_9:
# 87 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_LITTLE_GIRL
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_10:
# 88 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BOY_3
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_11:
# 89 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_GIRL_3
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_12:
# 90 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_RICH_BOY
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_13:
# 91 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_FAT_MAN
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_14:
# 92 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_POKEFAN_F
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_15:
# 93 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_MAN_1
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_16:
# 94 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_WOMAN_2
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_17:
# 95 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_EXPERT_M
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_18:
# 96 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_EXPERT_F
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_19:
# 97 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_POKEFAN_M
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_20:
# 98 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_WOMAN_4
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_21:
# 99 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_COOK
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_22:
# 100 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_LASS
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_23:
# 101 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_OLD_WOMAN
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_24:
# 102 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_CAMPER
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_25:
# 103 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_PICNICKER
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_26:
# 104 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_MAN_3
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_27:
# 105 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_WOMAN_5
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_28:
# 106 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_YOUNGSTER
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_29:
# 107 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BUG_CATCHER
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_30:
# 108 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_PSYCHIC_M
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_31:
# 109 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_LITTLE_BOY_3
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_32:
# 110 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BLACK_BELT
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_33:
# 111 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_BEAUTY
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1

ContestHall_EventScript_GetRandomAudienceGfxId_34:
# 112 "data/maps/ContestHall/scripts.pory"
	setvar VAR_TEMP_1, OBJ_EVENT_GFX_SCIENTIST_1
	goto ContestHall_EventScript_GetRandomAudienceGfxId_1


ContestHall_EventScript_CreateAudience::
# 118 "data/maps/ContestHall/scripts.pory"
	specialvar VAR_RESULT, IsWirelessContest
# 119 "data/maps/ContestHall/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ContestHall_EventScript_CreateAudience_2
ContestHall_EventScript_CreateAudience_1:
# 122 "data/maps/ContestHall/scripts.pory"
	switch VAR_CONTEST_TYPE
# 123 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_NORMAL, ContestHall_EventScript_CreateAudience_6
# 124 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_SUPER, ContestHall_EventScript_CreateAudience_7
# 125 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_HYPER, ContestHall_EventScript_CreateAudience_8
# 126 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_NPC_MASTER, ContestHall_EventScript_CreateAudience_9
# 127 "data/maps/ContestHall/scripts.pory"
	case CONTEST_TYPE_LINK, ContestHall_EventScript_CreateAudience_9
ContestHall_EventScript_CreateAudience_4:
	return

ContestHall_EventScript_CreateAudience_2:
# 120 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateWirelessContestAudience
	goto ContestHall_EventScript_CreateAudience_1

ContestHall_EventScript_CreateAudience_6:
# 123 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateNormalContestAudience
	goto ContestHall_EventScript_CreateAudience_4

ContestHall_EventScript_CreateAudience_7:
# 124 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateSuperContestAudience
	goto ContestHall_EventScript_CreateAudience_4

ContestHall_EventScript_CreateAudience_8:
# 125 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateHyperContestAudience
	goto ContestHall_EventScript_CreateAudience_4

ContestHall_EventScript_CreateAudience_9:
# 127 "data/maps/ContestHall/scripts.pory"
	goto ContestHall_EventScript_CreateMasterContestAudience
	goto ContestHall_EventScript_CreateAudience_4


ContestHall_EventScript_CreateNormalContestAudience::
# 133 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 20, 3, 2, 3, DIR_SOUTH
# 134 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
	return


ContestHall_EventScript_CreateSuperContestAudience::
# 139 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 140 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 141 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 142 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 3, 2, 8, 3, DIR_EAST
# 143 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 144 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 145 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 146 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 13, 12, 8, 3, DIR_WEST
# 147 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LASS, 20, 3, 2, 3, DIR_SOUTH
# 148 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
	return


ContestHall_EventScript_CreateHyperContestAudience::
# 153 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 154 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 155 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 156 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 3, 2, 8, 3, DIR_EAST
# 157 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 158 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 159 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 160 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 13, 12, 8, 3, DIR_WEST
# 161 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_EXPERT_F, 20, 3, 2, 3, DIR_SOUTH
# 162 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_2, 20, 6, 2, 3, DIR_SOUTH
# 163 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 20, 7, 2, 3, DIR_SOUTH
# 164 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 8, 2, 3, DIR_SOUTH
# 165 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 24, 11, 2, 3, DIR_SOUTH
# 166 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY, 25, 3, 9, 3, DIR_NORTH
# 167 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 4, 9, 3, DIR_NORTH
# 168 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FAT_MAN, 27, 5, 9, 3, DIR_NORTH
# 169 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 9, 9, 3, DIR_NORTH
# 170 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY_3, 29, 10, 9, 3, DIR_NORTH
# 171 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 11, 9, 3, DIR_NORTH
	return


ContestHall_EventScript_CreateMasterContestAudience::
# 176 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 177 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 178 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 179 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 3, 2, 8, 3, DIR_EAST
# 180 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MANIAC, 4, 1, 3, 3, DIR_EAST
# 181 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 6, 1, 5, 3, DIR_EAST
# 182 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 7, 1, 6, 3, DIR_EAST
# 183 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 9, 1, 8, 3, DIR_EAST
# 184 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 185 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 186 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 187 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 13, 12, 8, 3, DIR_WEST
# 188 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 14, 13, 3, 3, DIR_WEST
# 189 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F, 15, 13, 4, 3, DIR_WEST
# 190 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_4, 17, 13, 6, 3, DIR_WEST
# 191 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 18, 13, 7, 3, DIR_WEST
# 192 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_DEVON_EMPLOYEE, 19, 13, 8, 3, DIR_WEST
# 193 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_M, 20, 3, 2, 3, DIR_SOUTH
# 194 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_CAMPER, 21, 6, 2, 3, DIR_SOUTH
# 195 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_3, 22, 7, 2, 3, DIR_SOUTH
# 196 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
# 197 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SAILOR, 25, 3, 9, 3, DIR_NORTH
# 198 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_YOUNGSTER, 26, 4, 9, 3, DIR_NORTH
# 199 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 27, 5, 9, 3, DIR_NORTH
# 200 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HEX_MANIAC, 28, 9, 9, 3, DIR_NORTH
# 201 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_BOY_3, 29, 10, 9, 3, DIR_NORTH
# 202 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 30, 11, 9, 3, DIR_NORTH
	return


ContestHall_EventScript_CreateWirelessContestAudience::
# 207 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 0, 2, 3, 3, DIR_EAST
# 208 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_5, 1, 2, 4, 3, DIR_EAST
# 209 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_HIKER, 2, 2, 7, 3, DIR_EAST
# 210 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_LITTLE_GIRL, 3, 2, 8, 3, DIR_EAST
# 211 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MANIAC, 4, 1, 3, 3, DIR_EAST
# 212 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_5, 6, 1, 5, 3, DIR_EAST
# 213 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_4, 7, 1, 6, 3, DIR_EAST
# 214 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_GENTLEMAN, 9, 1, 8, 3, DIR_EAST
# 215 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_NINJA_BOY, 10, 12, 3, 3, DIR_WEST
# 216 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_2, 11, 12, 4, 3, DIR_WEST
# 217 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_WOMAN_3, 12, 12, 7, 3, DIR_WEST
# 218 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_BEAUTY, 13, 12, 8, 3, DIR_WEST
# 219 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_FISHERMAN, 14, 13, 3, 3, DIR_WEST
# 220 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_RUNNING_TRIATHLETE_F, 15, 13, 4, 3, DIR_WEST
# 221 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_4, 17, 13, 6, 3, DIR_WEST
# 222 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MART_EMPLOYEE, 18, 13, 7, 3, DIR_WEST
# 223 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_DEVON_EMPLOYEE, 19, 13, 8, 3, DIR_WEST
# 224 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_POKEFAN_M, 20, 3, 2, 3, DIR_SOUTH
# 225 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_CAMPER, 21, 6, 2, 3, DIR_SOUTH
# 226 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_MAN_3, 22, 7, 2, 3, DIR_SOUTH
# 227 "data/maps/ContestHall/scripts.pory"
	createvobject OBJ_EVENT_GFX_SCIENTIST_1, 24, 11, 2, 3, DIR_SOUTH
	return

