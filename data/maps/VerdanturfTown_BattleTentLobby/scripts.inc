VerdanturfTown_BattleTentLobby_MapScripts::
# 2 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 12 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, VerdanturfTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

VerdanturfTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, VerdanturfTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 7 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, VerdanturfTown_BattleTentLobby_EventScript_QuitWithoutSaving
# 8 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, VerdanturfTown_BattleTentLobby_EventScript_ResumeChallenge
# 9 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, VerdanturfTown_BattleTentLobby_EventScript_WonChallenge
# 10 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, VerdanturfTown_BattleTentLobby_EventScript_LostChallenge
	.2byte 0

VerdanturfTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_getstatus
	end

VerdanturfTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 13 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, VerdanturfTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

VerdanturfTown_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 14 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


VerdanturfTown_BattleTentLobby_EventScript_QuitWithoutSaving::
# 22 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 23 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge, MSGBOX_DEFAULT
# 24 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 25 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 26 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 27 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 28 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
	end


VerdanturfTown_BattleTentLobby_EventScript_WonChallenge::
# 33 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 34 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak, MSGBOX_DEFAULT
# 35 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message VerdanturfTown_BattleTentLobby_Text_FeatWillBeRecorded
# 36 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 37 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_setrandomprize
# 38 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 39 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_save 0
# 40 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 41 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitse
	return


VerdanturfTown_BattleTentLobby_EventScript_GivePrize::
# 45 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_PresentYouWithPrize, MSGBOX_DEFAULT
# 46 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_giveprize
# 47 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VerdanturfTown_BattleTentLobby_EventScript_GivePrize_2
# 51 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 52 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_ReceivedPrize
# 53 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 54 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 55 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitfanfare
# 56 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ReturnFortified, MSGBOX_DEFAULT
VerdanturfTown_BattleTentLobby_EventScript_GivePrize_1:
# 58 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 59 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 60 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
	end

VerdanturfTown_BattleTentLobby_EventScript_GivePrize_2:
# 48 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NoSpaceForPrize, MSGBOX_DEFAULT
# 49 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
	goto VerdanturfTown_BattleTentLobby_EventScript_GivePrize_1


VerdanturfTown_BattleTentLobby_EventScript_LostChallenge::
# 65 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 66 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message VerdanturfTown_BattleTentLobby_Text_ResultsWillBeRecorded
# 67 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 68 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 69 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_save 0
# 70 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 71 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitse
# 72 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ReturnFortified, MSGBOX_DEFAULT
# 73 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 74 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 75 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
	end


VerdanturfTown_BattleTentLobby_EventScript_ResumeChallenge::
# 80 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 81 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting, MSGBOX_DEFAULT
# 82 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge
# 83 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 84 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_save CHALLENGE_STATUS_SAVING
# 85 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 86 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitse
# 87 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 88 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 89 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge
	end


VerdanturfTown_BattleTentLobby_EventScript_Attendant::
# 94 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock_faceplayer
# 95 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_getprize
# 96 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, ITEM_NONE
	goto_if_ne VerdanturfTown_BattleTentLobby_EventScript_Attendant_2
VerdanturfTown_BattleTentLobby_EventScript_Attendant_1:
# 101 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 102 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_WelcomeToBattleTent, MSGBOX_DEFAULT
# 103 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge
	end

VerdanturfTown_BattleTentLobby_EventScript_Attendant_2:
# 97 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 98 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak, MSGBOX_DEFAULT
# 99 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_GivePrize
	goto VerdanturfTown_BattleTentLobby_EventScript_Attendant_1


VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge::
# 108 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message VerdanturfTown_BattleTentLobby_Text_TakeChallenge
# 109 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 110 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 111 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 112 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 0, VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_3
# 113 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 1, VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_4
# 116 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 2, VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_5
# 117 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_5
VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_1:
	end

VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_3:
# 112 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge
	goto VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_1

VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_4:
# 114 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ExplainVerdanturfTent, MSGBOX_DEFAULT
# 115 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge
	goto VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_1

VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_5:
# 118 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge
	goto VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge_1


VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge::
# 124 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 125 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 126 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_RESULT, 2
# 127 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_checkineligible
# 128 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_0x8004, TRUE
	goto_if_eq VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_2
# 135 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
# 136 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 137 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 138 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8004, 1
# 139 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 140 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 141 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_5
VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_4:
# 144 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 145 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case YES, VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_13
# 147 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case NO, VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_14
# 148 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_14
VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_11:
	end

VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_2:
# 129 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 130 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_50, VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_9
# 131 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_10
VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_7:
	release_end

VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_5:
# 142 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
	goto VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_4

VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_9:
# 130 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
	goto VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_7

VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_10:
# 131 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
	goto VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_7

VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_13:
# 146 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge
	goto VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_11

VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_14:
# 149 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
	goto VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge_11


VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge::
# 155 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 156 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 157 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_init
# 158 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 159 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 160 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 161 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 162 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	delay 2
# 163 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 164 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 165 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge_2
VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge_1:
# 169 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge
	end

VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge_2:
# 166 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 167 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge
	goto VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge_1


VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge::
# 174 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 175 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 176 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_NowFollowMe, MSGBOX_DEFAULT
# 177 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 178 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_ATTENDANT, VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge_Movement_0
# 179 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge_Movement_0
# 180 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 181 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	opendoor 6, 1
# 182 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 183 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_VERDANTURF_TENT_ATTENDANT, VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge_Movement_1
# 184 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge_Movement_2
# 185 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 186 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closedoor 6, 1
# 187 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 188 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_CORRIDOR, 2, 7
# 189 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 190 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitstate
	end


VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge::
# 195 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 196 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge
	end


VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge::
# 201 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ReturnFortified, MSGBOX_DEFAULT
	release_end


VerdanturfTown_BattleTentLobby_EventScript_AttractGiver::
# 206 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock_faceplayer
# 207 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ATTRACT, VerdanturfTown_BattleTentLobby_EventScript_AttractGiver_2
# 211 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AttractionRunsDeep, MSGBOX_DEFAULT
	giveitem ITEM_TM_ATTRACT
# 0 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VerdanturfTown_BattleTentLobby_EventScript_AttractGiver_5
VerdanturfTown_BattleTentLobby_EventScript_AttractGiver_4:
# 215 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setflag FLAG_RECEIVED_TM_ATTRACT
# 216 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AttractionMutual, MSGBOX_DEFAULT
	release_end

VerdanturfTown_BattleTentLobby_EventScript_AttractGiver_2:
# 208 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AttractionMutual, MSGBOX_DEFAULT
	release_end

VerdanturfTown_BattleTentLobby_EventScript_AttractGiver_5:
# 213 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto VerdanturfTown_BattleTentLobby_EventScript_AttractGiver_4


VerdanturfTown_BattleTentLobby_EventScript_Boy1::
# 221 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_TaughtWhatKindsOfMoves, MSGBOX_NPC
	end


VerdanturfTown_BattleTentLobby_EventScript_Boy2::
# 226 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 227 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_MonsReluctantToUseDislikedMoves, MSGBOX_DEFAULT
	release_end


VerdanturfTown_BattleTentLobby_EventScript_Scott::
# 232 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock_faceplayer
# 233 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_VERDANTURF, VerdanturfTown_BattleTentLobby_EventScript_Scott_2
# 237 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ScottCanMeetToughTrainers, MSGBOX_DEFAULT
# 238 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 239 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_VERDANTURF
	release_end

VerdanturfTown_BattleTentLobby_EventScript_Scott_2:
# 234 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ScottVisitRegularly, MSGBOX_DEFAULT
	release_end


VerdanturfTown_BattleTentLobby_EventScript_LittleBoy::
# 244 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 245 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_GentleMonsScaryIfAngry, MSGBOX_DEFAULT
	release_end


VerdanturfTown_BattleTentLobby_EventScript_RulesBoard::
# 250 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 251 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 252 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
	end


VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard::
# 257 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading
# 258 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 259 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BATTLE_TENT_RULES
# 260 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special ShowScrollableMultichoice
# 261 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 262 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 0, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_3
# 263 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 1, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_4
# 264 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 2, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_5
# 265 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 3, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_6
# 266 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 4, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_7
# 267 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 5, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_8
# 268 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 6, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_9
# 269 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_9
VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1:
# 273 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
	end

VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_3:
# 262 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleTentLobby_Text_ExplainLevelRules, MSGBOX_DEFAULT
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1

VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_4:
# 263 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics, MSGBOX_DEFAULT
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1

VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_5:
# 264 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature, MSGBOX_DEFAULT
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1

VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_6:
# 265 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves, MSGBOX_DEFAULT
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1

VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_7:
# 266 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered, MSGBOX_DEFAULT
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1

VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_8:
# 267 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger, MSGBOX_DEFAULT
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_1

VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard_9:
# 270 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
	end


# 178 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge_Movement_0:
# 178 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 178 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 178 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
	step_end

# 183 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge_Movement_1:
# 183 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 183 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	set_invisible
	step_end

# 184 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge_Movement_2:
# 184 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 184 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 184 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	set_invisible
	step_end

VerdanturfTown_BattleTentLobby_Text_MonsReluctantToUseDislikedMoves::
# 277 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "If it doesn't like a certain move,\n"
	.string "a POKéMON will be reluctant to use it.\p"
	.string "It doesn't matter how strong it is,\n"
	.string "either.\p"
	.string "For example, a POKéMON with a GENTLE\n"
	.string "nature probably won't enjoy hurting\l"
	.string "its opponents.\p"
	.string "If it can't seem to live up to its\n"
	.string "potential, it's probably failing at\l"
	.string "using a disliked move against its will.$"

VerdanturfTown_BattleTentLobby_Text_GentleMonsScaryIfAngry::
# 293 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "My big sister is gentle usually.\n"
	.string "But when she gets angry,\l"
	.string "she's really, really scary!\p"
	.string "I bet a gentle POKéMON will be scary\n"
	.string "if it gets angry!$"

VerdanturfTown_BattleTentLobby_Text_AttractionRunsDeep::
# 302 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "My feelings toward my POKéMON…\n"
	.string "The attraction runs deep…\p"
	.string "Oh, hi, you didn't see that, did you?\n"
	.string "Well, it doesn't matter.\p"
	.string "How would you like this TM for\n"
	.string "your POKéMON?$"

VerdanturfTown_BattleTentLobby_Text_AttractionMutual::
# 313 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "My feelings toward my POKéMON…\n"
	.string "I'm sure the attraction is mutual!\p"
	.string "They battle exactly the way I want\n"
	.string "them to!$"

VerdanturfTown_BattleTentLobby_Text_TaughtWhatKindsOfMoves::
# 321 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "What kind of moves have you taught\n"
	.string "your POKéMON?\p"
	.string "I think you would give yourself\n"
	.string "an advantage if they knew how to\l"
	.string "heal or protect themselves.$"

VerdanturfTown_BattleTentLobby_Text_ScottCanMeetToughTrainers::
# 330 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "SCOTT: Hey there, {PLAYER}{KUN}!\n"
	.string "I thought I might see you here.\p"
	.string "A BATTLE TENT's a place where\n"
	.string "you can meet tough TRAINERS.\p"
	.string "It doesn't matter what the rules are,\n"
	.string "or how battles are waged, either.\p"
	.string "{PLAYER}{KUN}, I expect you to do\n"
	.string "the best you can!$"

VerdanturfTown_BattleTentLobby_Text_ScottVisitRegularly::
# 344 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "SCOTT: I visit here regularly in hopes\n"
	.string "of seeing tough TRAINERS in action\l"
	.string "in whatever the situation.$"
