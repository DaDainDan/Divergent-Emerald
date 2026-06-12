SlateportCity_BattleTentLobby_MapScripts::
# 2 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 12 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SlateportCity_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, SlateportCity_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 7 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, SlateportCity_BattleTentLobby_EventScript_QuitWithoutSaving
# 8 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, SlateportCity_BattleTentLobby_EventScript_ResumeChallenge
# 9 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, SlateportCity_BattleTentLobby_EventScript_WonChallenge
# 10 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, SlateportCity_BattleTentLobby_EventScript_LostChallenge
	.2byte 0

SlateportCity_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_getstatus
	end

SlateportCity_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 13 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SlateportCity_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

SlateportCity_BattleTentLobby_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 14 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


SlateportCity_BattleTentLobby_EventScript_QuitWithoutSaving::
# 22 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 23 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 24 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 25 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 26 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 27 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 28 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	releaseall
	end


SlateportCity_BattleTentLobby_EventScript_WonChallenge::
# 33 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 34 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_WonThreeMatchesReturnMons
# 35 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 36 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_setrandomprize
# 37 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 38 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_save 0
# 39 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 40 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitse
# 41 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_GivePrize
	return


SlateportCity_BattleTentLobby_EventScript_GivePrize::
# 45 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_AwardYouThisPrize, MSGBOX_DEFAULT
# 46 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_giveprize
# 47 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_BattleTentLobby_EventScript_GivePrize_2
# 51 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 52 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleTowerLobby_Text_ReceivedPrize
# 53 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 54 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 55 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitfanfare
SlateportCity_BattleTentLobby_EventScript_GivePrize_1:
# 57 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
# 58 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 59 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 60 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	releaseall
	end

SlateportCity_BattleTentLobby_EventScript_GivePrize_2:
# 48 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_NoRoomInBagMakeRoom, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentLobby_EventScript_GivePrize_1


SlateportCity_BattleTentLobby_EventScript_LostChallenge::
# 65 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 66 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_ReturnRentalMonsSaveResults
# 67 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 68 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 69 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_save 0
# 70 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 71 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitse
	end


SlateportCity_BattleTentLobby_EventScript_ResumeChallenge::
# 76 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 77 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_BeenWaitingForYou
# 78 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 79 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_save CHALLENGE_STATUS_SAVING
# 80 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 81 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitse
# 82 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 83 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 84 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_0x8006, 2
# 85 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_EnterChallenge
	end


SlateportCity_BattleTentLobby_EventScript_Attendant::
# 90 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lock_faceplayer
# 91 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_getprize
# 92 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, ITEM_NONE
	goto_if_ne SlateportCity_BattleTentLobby_EventScript_Attendant_2
SlateportCity_BattleTentLobby_EventScript_Attendant_1:
# 95 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 96 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_WelcomeToBattleTent, MSGBOX_DEFAULT
# 97 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge
	end

SlateportCity_BattleTentLobby_EventScript_Attendant_2:
# 93 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_GivePrize
	goto SlateportCity_BattleTentLobby_EventScript_Attendant_1


SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge::
# 102 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message SlateportCity_BattleTentLobby_Text_TakeChallenge
# 103 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 104 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 105 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 0, SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_3
# 107 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 1, SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_4
# 110 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 2, SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_5
# 111 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_5
SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_1:
	end

SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_3:
# 106 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge
	goto SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_1

SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_4:
# 108 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSlateportTent, MSGBOX_DEFAULT
# 109 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge
	goto SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_1

SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_5:
# 111 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_CancelChallenge
	goto SlateportCity_BattleTentLobby_EventScript_AskEnterChallenge_1


SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge::
# 117 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_FACTORY
# 118 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 119 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
# 120 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 121 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 122 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case YES, SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge_3
# 123 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case NO, SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge_4
# 124 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge_4
SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge_1:
	end

SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge_3:
# 122 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge
	goto SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge_1

SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge_4:
# 125 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 126 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_CancelChallenge
	goto SlateportCity_BattleTentLobby_EventScript_TryEnterChallenge_1


SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge::
# 132 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 133 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 134 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	slateporttent_init
# 135 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 136 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 137 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 138 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	delay 2
# 139 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 140 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 141 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge_2
SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge_1:
# 145 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_0x8006, 0
# 146 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_EnterChallenge
	end

SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge_2:
# 142 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 143 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_CancelChallenge
	goto SlateportCity_BattleTentLobby_EventScript_SaveBeforeChallenge_1


SlateportCity_BattleTentLobby_EventScript_EnterChallenge::
# 151 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_StepThisWay, MSGBOX_DEFAULT
# 152 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closemessage
# 153 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_ATTENDANT, SlateportCity_BattleTentLobby_EventScript_EnterChallenge_Movement_0
# 154 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_BattleTentLobby_EventScript_EnterChallenge_Movement_0
# 155 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmovement 0
# 156 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	opendoor 6, 1
# 157 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitdooranim
# 158 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_ATTENDANT, SlateportCity_BattleTentLobby_EventScript_EnterChallenge_Movement_1
# 159 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_BattleTentLobby_EventScript_EnterChallenge_Movement_2
# 160 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmovement 0
# 161 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	closedoor 6, 1
# 162 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitdooranim
# 163 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_CORRIDOR, 2, 7
# 164 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 165 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitstate
	end


SlateportCity_BattleTentLobby_EventScript_CancelChallenge::
# 170 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_LookForwardToNextVisit, MSGBOX_DEFAULT
	release_end


# 175 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_Movement_UnusedEnterDoor::
# 177 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 177 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 177 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 178 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	set_invisible
	step_end

SlateportCity_BattleTentLobby_EventScript_TormentGiver::
# 182 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lock_faceplayer
# 183 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_TORMENT, SlateportCity_BattleTentLobby_EventScript_TormentGiver_2
# 187 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_CouldntFindMonForMe, MSGBOX_DEFAULT
	giveitem ITEM_TM_TORMENT
# 0 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_BattleTentLobby_EventScript_TormentGiver_5
SlateportCity_BattleTentLobby_EventScript_TormentGiver_4:
# 191 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	setflag FLAG_RECEIVED_TM_TORMENT
# 192 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainTorment, MSGBOX_DEFAULT
	release_end

SlateportCity_BattleTentLobby_EventScript_TormentGiver_2:
# 184 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainTorment, MSGBOX_DEFAULT
	release_end

SlateportCity_BattleTentLobby_EventScript_TormentGiver_5:
# 189 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SlateportCity_BattleTentLobby_EventScript_TormentGiver_4


SlateportCity_BattleTentLobby_EventScript_Man::
# 197 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_IllTryUsingBugMons, MSGBOX_NPC
	end


SlateportCity_BattleTentLobby_EventScript_Girl::
# 202 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_BattleEvenWithoutToughMons, MSGBOX_NPC
	end


SlateportCity_BattleTentLobby_EventScript_Woman::
# 207 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_NiceIfMoreSelection, MSGBOX_NPC
	end


SlateportCity_BattleTentLobby_EventScript_RulesBoard::
# 212 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	lockall
# 213 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattleFactoryLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 214 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
	end


SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard::
# 219 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleFactoryLobby_Text_ReadWhichHeading
# 220 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	waitmessage
# 221 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	multichoice 17, 0, MULTI_SLATEPORT_TENT_RULES, FALSE
# 222 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 223 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 0, SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_3
# 224 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 1, SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_4
# 225 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 2, SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_5
# 226 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 3, SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_6
# 227 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 4, SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_7
# 228 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case 5, SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_8
# 229 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_8
SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_1:
# 233 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard
	end

SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_3:
# 223 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainBasicRules, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_1

SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_4:
# 224 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSwapPartnerRules, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_1

SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_5:
# 225 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSwapNumberRules, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_1

SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_6:
# 226 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainSwapNotes, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_1

SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_7:
# 227 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	msgbox SlateportCity_BattleTentLobby_Text_ExplainMonRules, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_1

SlateportCity_BattleTentLobby_EventScript_ReadRulesBoard_8:
# 230 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	releaseall
	end


# 153 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_EnterChallenge_Movement_0:
# 153 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 153 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 153 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
	step_end

# 158 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_EnterChallenge_Movement_1:
# 158 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 158 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	set_invisible
	step_end

# 159 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
SlateportCity_BattleTentLobby_EventScript_EnterChallenge_Movement_2:
# 159 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 159 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	walk_up
# 159 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	set_invisible
	step_end

SlateportCity_BattleTentLobby_Text_CouldntFindMonForMe::
# 237 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "So, like, I couldn't find myself any\n"
	.string "POKéMON that were, like, for me.\p"
	.string "So, I figured, like, hey, I should file\n"
	.string "a complaint to the guy there?\p"
	.string "And he wouldn't hear me out, like, hey!\n"
	.string "So, like, total bummer, man!\p"
	.string "Hey, like, you! Zip it, you know?\n"
	.string "Just, you know, take this!$"

SlateportCity_BattleTentLobby_Text_ExplainTorment::
# 251 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "That's, like, TM41, you know?\n"
	.string "Hey, it's TORMENT, you hearing me?\p"
	.string "Like, it won't let the other guy\n"
	.string "use the same move twice in a row, see?\p"
	.string "Hey, now, you listen here, like,\n"
	.string "I'm not laying a torment on you!$"

SlateportCity_BattleTentLobby_Text_IllTryUsingBugMons::
# 262 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "I don't really like BUG POKéMON,\n"
	.string "but maybe I'll try using some for\l"
	.string "a change of pace.\p"
	.string "Who knows, I might even get to like\n"
	.string "them!$"

SlateportCity_BattleTentLobby_Text_BattleEvenWithoutToughMons::
# 271 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "You can battle all you want here even\n"
	.string "if you don't have any tough POKéMON.$"

SlateportCity_BattleTentLobby_Text_NiceIfMoreSelection::
# 276 "data/maps/SlateportCity_BattleTentLobby/scripts.pory"
	.string "Wouldn't it be nice if they had more of\n"
	.string "a selection?$"
