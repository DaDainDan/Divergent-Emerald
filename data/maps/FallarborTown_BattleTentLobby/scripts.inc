FallarborTown_BattleTentLobby_MapScripts::
# 2 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FallarborTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 12 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FallarborTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

FallarborTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, FallarborTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 7 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, FallarborTown_BattleTentLobby_EventScript_QuitWithoutSaving
# 8 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, FallarborTown_BattleTentLobby_EventScript_ResumeChallenge
# 9 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, FallarborTown_BattleTentLobby_EventScript_WonChallenge
# 10 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, FallarborTown_BattleTentLobby_EventScript_LostChallenge
	.2byte 0

FallarborTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_getstatus
	end

FallarborTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 13 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, FallarborTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

FallarborTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 14 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


FallarborTown_BattleTentLobby_EventScript_QuitWithoutSaving::
# 22 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 23 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 24 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 25 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 26 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 27 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 28 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	releaseall
	end


FallarborTown_BattleTentLobby_EventScript_WonChallenge::
# 33 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 34 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_BeatThreeTrainers, MSGBOX_DEFAULT
# 35 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message FallarborTown_BattleTentLobby_Text_WaitWhileSaveGame
# 36 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 37 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_setrandomprize
# 38 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 39 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_save 0
# 40 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 41 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitse
	end


FallarborTown_BattleTentLobby_EventScript_LostChallenge::
# 46 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 47 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message FallarborTown_BattleTentLobby_Text_ThankYouWaitWhileSaving
# 48 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 49 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 50 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_save 0
# 51 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 52 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitse
# 53 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 54 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 55 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 56 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	releaseall
	end


FallarborTown_BattleTentLobby_EventScript_ResumeChallenge::
# 61 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 62 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message FallarborTown_BattleTentLobby_Text_LookingForwardToArrival
# 63 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 64 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_save CHALLENGE_STATUS_SAVING
# 65 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 66 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitse
# 67 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 68 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 69 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_EnterChallenge
	return


FallarborTown_BattleTentLobby_EventScript_Attendant::
# 73 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lock_faceplayer
# 74 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_getprize
# 75 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, ITEM_NONE
	goto_if_ne FallarborTown_BattleTentLobby_EventScript_Attendant_2
# 98 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 99 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_WelcomeToBattleTent, MSGBOX_DEFAULT
# 100 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge
	return

FallarborTown_BattleTentLobby_EventScript_Attendant_2:
# 76 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 77 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_BeatThreeTrainers, MSGBOX_DEFAULT
# 78 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_PresentYouWithPrize, MSGBOX_DEFAULT
# 79 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_giveprize
# 80 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FallarborTown_BattleTentLobby_EventScript_Attendant_5
# 86 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 87 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message FallarborTown_BattleTentLobby_Text_ReceivedPrize
# 88 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 89 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 90 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitfanfare
# 91 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 92 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 93 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
FallarborTown_BattleTentLobby_EventScript_Attendant_4:
# 95 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	releaseall
	end

FallarborTown_BattleTentLobby_EventScript_Attendant_5:
# 81 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_BagFullReturnForPrize, MSGBOX_DEFAULT
# 82 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 83 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 84 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	goto FallarborTown_BattleTentLobby_EventScript_Attendant_4


FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge::
# 104 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message FallarborTown_BattleTentLobby_Text_TakeChallenge
# 105 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 106 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 107 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 108 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 0, FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_3
# 109 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 1, FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_4
# 112 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 2, FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_5
# 113 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_5
FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_1:
	end

FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_3:
# 108 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge
	goto FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_1

FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_4:
# 110 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_ExplainFallarborTent, MSGBOX_DEFAULT
# 111 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge
	goto FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_1

FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_5:
# 113 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_CancelChallenge
	goto FallarborTown_BattleTentLobby_EventScript_AskEnterChallenge_1


FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge::
# 119 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_ARENA
# 120 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 121 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_RESULT, 2
# 122 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_checkineligible
# 123 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_2
# 130 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
# 131 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 132 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 133 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8004, 2
# 134 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 135 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 136 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_5
FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_4:
# 139 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 140 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 141 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case YES, FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_13
# 142 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case NO, FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_14
# 143 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_14
FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_11:
	end

FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_2:
# 124 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 125 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_50, FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_9
# 126 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_10
FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_7:
	release_end

FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_5:
# 137 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
	goto FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_4

FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_9:
# 125 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
	goto FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_7

FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_10:
# 126 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
	goto FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_7

FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_13:
# 141 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_SaveBeforeChallenge
	goto FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_11

FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_14:
# 143 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
	goto FallarborTown_BattleTentLobby_EventScript_TryEnterChallenge_11


FallarborTown_BattleTentLobby_EventScript_SaveBeforeChallenge::
# 149 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 150 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 151 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	fallarbortent_init
# 152 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 153 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 154 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 155 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 156 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	delay 2
# 157 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 158 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 159 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FallarborTown_BattleTentLobby_EventScript_SaveBeforeChallenge_2
FallarborTown_BattleTentLobby_EventScript_SaveBeforeChallenge_1:
# 163 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_EnterChallenge
	return

FallarborTown_BattleTentLobby_EventScript_SaveBeforeChallenge_2:
# 160 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 161 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_CancelChallenge
	goto FallarborTown_BattleTentLobby_EventScript_SaveBeforeChallenge_1


FallarborTown_BattleTentLobby_EventScript_EnterChallenge::
# 167 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 168 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 169 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_GuideYouToBattleTent, MSGBOX_DEFAULT
# 170 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closemessage
# 171 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_ATTENDANT, FallarborTown_BattleTentLobby_EventScript_EnterChallenge_Movement_0
# 172 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, FallarborTown_BattleTentLobby_EventScript_EnterChallenge_Movement_0
# 173 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 174 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	opendoor 6, 1
# 175 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 176 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_FALLARBOR_TENT_ATTENDANT, FallarborTown_BattleTentLobby_EventScript_EnterChallenge_Movement_1
# 177 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, FallarborTown_BattleTentLobby_EventScript_EnterChallenge_Movement_2
# 178 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 179 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	closedoor 6, 1
# 180 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 181 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	warp MAP_FALLARBOR_TOWN_BATTLE_TENT_CORRIDOR, 2, 7
# 182 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 183 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitstate
	end


FallarborTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge::
# 188 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 189 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_CancelChallenge
	return


FallarborTown_BattleTentLobby_EventScript_CancelChallenge::
# 193 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
	release_end


FallarborTown_BattleTentLobby_EventScript_Hiker::
# 198 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_CameToCampOut, MSGBOX_NPC
	end


FallarborTown_BattleTentLobby_EventScript_LittleBoy::
# 203 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_MakeThinkImJustKid, MSGBOX_NPC
	end


FallarborTown_BattleTentLobby_EventScript_Lass::
# 208 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_FallarborTentMyFavorite, MSGBOX_NPC
	end


FallarborTown_BattleTentLobby_EventScript_Scott::
# 213 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lock_faceplayer
# 214 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_FALLARBOR, FallarborTown_BattleTentLobby_EventScript_Scott_2
# 218 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_ScottLookingForSomeone, MSGBOX_DEFAULT
# 219 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 220 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_FALLARBOR
	release_end

FallarborTown_BattleTentLobby_EventScript_Scott_2:
# 215 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox FallarborTown_BattleTentLobby_Text_ScottMakeChallenge, MSGBOX_DEFAULT
	release_end


FallarborTown_BattleTentLobby_EventScript_RulesBoard::
# 225 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	lockall
# 226 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 227 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard
	end


FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard::
# 232 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading
# 233 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	waitmessage
# 234 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	multichoice 17, 0, MULTI_FALLARBOR_TENT_RULES, FALSE
# 235 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 236 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 0, FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_3
# 237 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 1, FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_4
# 238 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 2, FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_5
# 239 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 3, FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_6
# 240 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 4, FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_7
# 241 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case 5, FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_8
# 242 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_8
FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_1:
# 246 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard
	end

FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_3:
# 236 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleTentLobby_Text_ExplainLevelRules, MSGBOX_DEFAULT
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_1

FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_4:
# 237 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules, MSGBOX_DEFAULT
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_1

FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_5:
# 238 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainMindRules, MSGBOX_DEFAULT
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_1

FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_6:
# 239 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules, MSGBOX_DEFAULT
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_1

FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_7:
# 240 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules, MSGBOX_DEFAULT
	goto FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_1

FallarborTown_BattleTentLobby_EventScript_ReadRulesBoard_8:
# 243 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	releaseall
	end


# 171 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_EnterChallenge_Movement_0:
# 171 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 171 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 171 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
	step_end

# 176 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_EnterChallenge_Movement_1:
# 176 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 176 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	set_invisible
	step_end

# 177 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
FallarborTown_BattleTentLobby_EventScript_EnterChallenge_Movement_2:
# 177 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 177 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	walk_up
# 177 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	set_invisible
	step_end

FallarborTown_BattleTentLobby_Text_MakeThinkImJustKid::
# 250 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "Fufufufufu.\p"
	.string "I'm going to make everyone think\n"
	.string "I'm just a kid and let them play down.\p"
	.string "Then, I'll shock them and grab\n"
	.string "the title!$"

FallarborTown_BattleTentLobby_Text_FallarborTentMyFavorite::
# 260 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "You know how BATTLE TENTS offer\n"
	.string "different events in different towns?\p"
	.string "My favorite is definitely the BATTLE\n"
	.string "TENT in FALLARBOR TOWN.\p"
	.string "I think it's fantastic how TRAINERS\n"
	.string "try to win with all their faith in\l"
	.string "their POKéMON.$"

FallarborTown_BattleTentLobby_Text_CameToCampOut::
# 272 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "I heard something about some tent,\n"
	.string "so I came to camp out.\p"
	.string "I didn't know that tents these days\n"
	.string "are so luxurious!\p"
	.string "Since I'm here, I may as well try\n"
	.string "my hand at battling!$"

FallarborTown_BattleTentLobby_Text_ScottLookingForSomeone::
# 283 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "SCOTT: Hi, {PLAYER}{KUN}!\n"
	.string "So you came out to this BATTLE TENT!\p"
	.string "The people in these parts tend to be\n"
	.string "easygoing and laid-back.\p"
	.string "But, you see, what I'm looking for are\n"
	.string "people with…\p"
	.string "How should I say this?\p"
	.string "Someone bursting with the desire\n"
	.string "and the drive to win.\p"
	.string "If there were a TRAINER like that,\n"
	.string "I'd immediately…\p"
	.string "Whoops! Never mind!\n"
	.string "Keep working at it!$"

FallarborTown_BattleTentLobby_Text_ScottMakeChallenge::
# 305 "data/maps/FallarborTown_BattleTentLobby/scripts.pory"
	.string "SCOTT: Instead of wasting your\n"
	.string "time with the likes of me, why not\l"
	.string "make a challenge?$"
