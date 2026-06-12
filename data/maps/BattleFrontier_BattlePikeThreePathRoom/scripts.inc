BattleFrontier_BattlePikeThreePathRoom_MapScripts::
# 2 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_RESUME
# 5 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 37 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_RESUME:
	return

BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 10 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
# 15 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_ResumeChallenge
# 16 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_5, 0, BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3
# 25 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_4
	.2byte 0

BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 7 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_getstatus
	end

BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 11 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 5, 6
# 12 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitstate
	end

BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3:
# 17 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_sethintroom
# 18 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_2
# 21 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	setvar VAR_TEMP_5, 255
BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_1:
	end

BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_2:
# 19 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	setvar VAR_TEMP_5, 1
	goto BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_3_1

BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_4:
# 26 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	applymovement LOCALID_PIKE_HINT_GIVER, BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_4_Movement_0
# 27 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitmovement 0
# 28 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lockall
# 29 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_TerrifyingEvent, MSGBOX_DEFAULT
# 30 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	releaseall
# 31 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	applymovement LOCALID_PIKE_HINT_GIVER, BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_4_Movement_1
# 32 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitmovement 0
# 33 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	setvar VAR_TEMP_5, 255
	end

BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 38 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 39 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	setvar VAR_TEMP_4, 1
# 40 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


BattleFrontier_BattlePikeThreePathRoom_EventScript_ResumeChallenge::
# 47 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lockall
# 48 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	message BattleFrontier_BattlePikeThreePathRoom_Text_AwaitingReturnSaveBeforeResume
# 49 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitmessage
# 50 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_save CHALLENGE_STATUS_SAVING
# 51 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	playse SE_SAVE
# 52 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitse
# 53 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 54 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 55 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	special SavePlayerParty
# 56 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 57 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_PleaseEnjoyChallenge, MSGBOX_DEFAULT
# 58 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	closemessage
# 59 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	releaseall
# 60 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_settrainers
# 61 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 99
	end


BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant::
# 66 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 67 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock_faceplayer
# 68 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 69 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 1, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_3
# 70 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 3, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_4
# 71 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 5, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_5
# 72 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 7, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_6
# 73 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 9, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_7
# 74 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 11, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_8
# 75 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case 13, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_9
BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1:
# 77 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_ContinueWithChallenge, MSGBOX_YESNO
# 78 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_11
BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_10:
	release_end

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_3:
# 69 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom1, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_4:
# 70 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom3, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_5:
# 71 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom5, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_6:
# 72 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom7, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_7:
# 73 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom9, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_8:
# 74 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom11, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_9:
# 75 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom13, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_1

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_11:
# 79 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SaveChallengeAndQuit, MSGBOX_YESNO
# 80 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_13
# 92 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	message BattleFrontier_BattlePikeThreePathRoom_Text_RetireFromChallenge
# 93 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitmessage
# 94 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 95 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_16
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_10

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_13:
# 81 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_saveparty
# 82 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	message BattleFrontier_BattlePikeThreePathRoom_Text_SavingYourData
# 83 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitmessage
# 84 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	special LoadPlayerParty
# 85 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_save CHALLENGE_STATUS_PAUSED
# 86 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	playse SE_SAVE
# 87 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	waitse
# 88 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	frontier_reset
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_16:
# 96 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	goto BattleFrontier_BattlePike_EventScript_Retire
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_10


BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver::
# 104 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_gethint
# 105 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	compare VAR_RESULT, PIKE_HINT_BRAIN
	goto_if_eq BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_2
# 110 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock_faceplayer
# 111 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_FindingItDifficultToChoose, MSGBOX_YESNO
# 112 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_5
# 115 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_gethintroomid
# 116 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 117 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_ROOM_LEFT, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_10
# 118 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_ROOM_CENTER, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_11
# 119 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_ROOM_RIGHT, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_12
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_8:
# 121 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	pike_gethint
# 122 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	switch VAR_RESULT
# 123 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_HINT_NOSTALGIA, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_14
# 124 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_HINT_WHISPERING, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_15
# 125 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_HINT_POKEMON, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_16
# 126 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	case PIKE_HINT_PEOPLE, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_17
BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_4:
	release_end

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_2:
# 106 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	lock_faceplayer
# 107 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_DreadfulPresence, MSGBOX_DEFAULT
	release_end

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_5:
# 113 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_ApologizeForImpertinence, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_4

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_10:
# 117 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutLeftPath, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_8

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_11:
# 118 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutCenterPath, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_8

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_12:
# 119 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutRightPath, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_8

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_14:
# 123 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_WaveOfNostaliga, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_4

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_15:
# 124 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_HeardWhispering, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_4

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_16:
# 125 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_AromaOfPokemon, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_4

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_17:
# 126 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_PresenceOfPeople, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_4


# 26 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_4_Movement_0:
# 26 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_left
# 26 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_left
# 26 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_down
# 26 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_down
# 26 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_down
# 26 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_down
	step_end

# 31 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
BattleFrontier_BattlePikeThreePathRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_4_Movement_1:
# 31 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_up
# 31 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_up
# 31 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_up
# 31 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_up
# 31 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_right
# 31 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	walk_right
# 31 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	face_down
	step_end

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom1::
# 132 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
	.string "the 1st room…$"

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom3::
# 137 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
	.string "the 3rd room…$"

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom5::
# 142 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
	.string "the 5th room…$"

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom7::
# 147 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
	.string "the 7th room…$"

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom9::
# 152 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
	.string "the 9th room…$"

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom11::
# 157 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
	.string "the 11th room…$"

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom13::
# 162 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "You are currently in\n"
	.string "the 13th room…$"

BattleFrontier_BattlePikeThreePathRoom_Text_ContinueWithChallenge::
# 167 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Will you continue with\n"
	.string "your challenge?$"

BattleFrontier_BattlePikeThreePathRoom_Text_SaveChallengeAndQuit::
# 172 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Would you like to save your challenge\n"
	.string "and quit the game for now?$"

BattleFrontier_BattlePikeThreePathRoom_Text_RetireFromChallenge::
# 177 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Do you wish to retire from your\n"
	.string "Battle Choice challenge?$"

BattleFrontier_BattlePikeThreePathRoom_Text_AwaitingReturnSaveBeforeResume::
# 182 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "We've been awaiting your return…\p"
	.string "Before resuming your Battle Choice\n"
	.string "challenge, let me save the game…$"

BattleFrontier_BattlePikeThreePathRoom_Text_PleaseEnjoyChallenge::
# 189 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Please do enjoy your Battle Choice\n"
	.string "challenge…$"

BattleFrontier_BattlePikeThreePathRoom_Text_SavingYourData::
# 194 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I am saving your data…\n"
	.string "A little time, please…$"

BattleFrontier_BattlePike_Text_PathBlockedNoTurningBack::
# 199 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "The path is blocked!\n"
	.string "And there is no turning back…$"

BattleFrontier_BattlePikeThreePathRoom_Text_FindingItDifficultToChoose::
# 204 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I beg your pardon, but…\p"
	.string "Are you perhaps finding it difficult\n"
	.string "to choose your path?$"

BattleFrontier_BattlePikeThreePathRoom_Text_ApologizeForImpertinence::
# 211 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I see…\n"
	.string "I apologize for my impertinence…$"

BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutRightPath::
# 216 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Ah, let me see… There is something\n"
	.string "about the path on the right…$"

BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutCenterPath::
# 221 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Ah, let me see… There is something\n"
	.string "about the path in the center…$"

BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutLeftPath::
# 226 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Ah, let me see… There is something\n"
	.string "about the path on the left…$"

BattleFrontier_BattlePikeThreePathRoom_Text_AromaOfPokemon::
# 231 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "It seems to have the distinct aroma\n"
	.string "of POKéMON wafting around it…$"

BattleFrontier_BattlePikeThreePathRoom_Text_PresenceOfPeople::
# 236 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "Is it… A TRAINER?\n"
	.string "I sense the presence of people…$"

BattleFrontier_BattlePikeThreePathRoom_Text_HeardWhispering::
# 241 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I seem to have heard something…\n"
	.string "It may have been whispering…$"

BattleFrontier_BattlePikeThreePathRoom_Text_WaveOfNostaliga::
# 246 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "For some odd reason, I felt a wave\n"
	.string "of nostalgia coming from it…$"

BattleFrontier_BattlePikeThreePathRoom_Text_TerrifyingEvent::
# 251 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "I am sorry to say…\p"
	.string "A terrifying event, yes, a horrible one,\n"
	.string "is about to befall you…\p"
	.string "I urge you to pay the utmost care\n"
	.string "and prepare for the worst…$"

BattleFrontier_BattlePikeThreePathRoom_Text_DreadfulPresence::
# 261 "data/maps/BattleFrontier_BattlePikeThreePathRoom/scripts.pory"
	.string "From every path I sense a dreadful\n"
	.string "presence…$"
