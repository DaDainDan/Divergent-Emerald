LilycoveCity_Harbor_MapScripts::
# 2 "data/maps/LilycoveCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LilycoveCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setescapewarp MAP_LILYCOVE_CITY, 12, 33
	end


LilycoveCity_Harbor_EventScript_FerryAttendant::
# 9 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock_faceplayer
# 10 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, LilycoveCity_Harbor_EventScript_FerryAttendant_2
# 14 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEonTicketState
# 15 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetAuroraTicketState
# 16 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetOldSeaMapState
# 17 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetMysticTicketState
# 18 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket
# 19 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetHasTicketsState
# 20 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_OLD_SEA_MAP_STATE, 2
	goto_if_eq LilycoveCity_Harbor_EventScript_FerryAttendant_5
# 20 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_FIRST_TIME_TICKETS_STATE, 4
	goto_if_eq LilycoveCity_Harbor_EventScript_FerryAttendant_5
LilycoveCity_Harbor_EventScript_FerryAttendant_4:
# 23 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_TEMP_FIRST_TIME_TICKETS_STATE
# 24 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 1, LilycoveCity_Harbor_EventScript_FerryAttendant_11
# 25 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 2, LilycoveCity_Harbor_EventScript_FerryAttendant_12
# 26 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 8, LilycoveCity_Harbor_EventScript_FerryAttendant_13
# 28 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 0, LilycoveCity_Harbor_EventScript_FerryAttendant_15
# 27 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime
LilycoveCity_Harbor_EventScript_FerryAttendant_9:
	end

LilycoveCity_Harbor_EventScript_FerryAttendant_2:
# 11 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_FerryUnavailable, MSGBOX_DEFAULT
	release_end

LilycoveCity_Harbor_EventScript_FerryAttendant_5:
# 21 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_4

LilycoveCity_Harbor_EventScript_FerryAttendant_11:
# 24 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_EonTicketFirstTime
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_9

LilycoveCity_Harbor_EventScript_FerryAttendant_12:
# 25 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_AuroraTicketFirstTime
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_9

LilycoveCity_Harbor_EventScript_FerryAttendant_13:
# 26 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_MysticTicketFirstTime
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_9

LilycoveCity_Harbor_EventScript_FerryAttendant_15:
# 29 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 30 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_FlashTicketWhereTo
# 31 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 32 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect
	goto LilycoveCity_Harbor_EventScript_FerryAttendant_9


LilycoveCity_Harbor_EventScript_GetEonTicketState::
# 38 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_EON_TICKET_STATE, 0
# 39 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_ENABLE_SHIP_SOUTHERN_ISLAND, LilycoveCity_Harbor_EventScript_GetEonTicketState_3
LilycoveCity_Harbor_EventScript_GetEonTicketState_1:
# 42 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SHOWN_EON_TICKET, LilycoveCity_Harbor_EventScript_GetEonTicketState_7
LilycoveCity_Harbor_EventScript_GetEonTicketState_6:
	return

LilycoveCity_Harbor_EventScript_GetEonTicketState_2:
# 40 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_EON_TICKET_STATE, 1
	goto LilycoveCity_Harbor_EventScript_GetEonTicketState_1

LilycoveCity_Harbor_EventScript_GetEonTicketState_3:
	checkitem ITEM_EON_TICKET
# 0 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_Harbor_EventScript_GetEonTicketState_2
	goto LilycoveCity_Harbor_EventScript_GetEonTicketState_1

LilycoveCity_Harbor_EventScript_GetEonTicketState_7:
# 43 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_EON_TICKET_STATE, 2
	goto LilycoveCity_Harbor_EventScript_GetEonTicketState_6


LilycoveCity_Harbor_EventScript_GetAuroraTicketState::
# 49 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_AURORA_TICKET_STATE, 0
# 50 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_ENABLE_SHIP_BIRTH_ISLAND, LilycoveCity_Harbor_EventScript_GetAuroraTicketState_3
LilycoveCity_Harbor_EventScript_GetAuroraTicketState_1:
# 53 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SHOWN_AURORA_TICKET, LilycoveCity_Harbor_EventScript_GetAuroraTicketState_7
LilycoveCity_Harbor_EventScript_GetAuroraTicketState_6:
	return

LilycoveCity_Harbor_EventScript_GetAuroraTicketState_2:
# 51 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_AURORA_TICKET_STATE, 1
	goto LilycoveCity_Harbor_EventScript_GetAuroraTicketState_1

LilycoveCity_Harbor_EventScript_GetAuroraTicketState_3:
	checkitem ITEM_AURORA_TICKET
# 0 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_Harbor_EventScript_GetAuroraTicketState_2
	goto LilycoveCity_Harbor_EventScript_GetAuroraTicketState_1

LilycoveCity_Harbor_EventScript_GetAuroraTicketState_7:
# 54 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_AURORA_TICKET_STATE, 2
	goto LilycoveCity_Harbor_EventScript_GetAuroraTicketState_6


LilycoveCity_Harbor_EventScript_GetOldSeaMapState::
# 60 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_OLD_SEA_MAP_STATE, 0
# 61 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_ENABLE_SHIP_FARAWAY_ISLAND, LilycoveCity_Harbor_EventScript_GetOldSeaMapState_3
LilycoveCity_Harbor_EventScript_GetOldSeaMapState_1:
# 64 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SHOWN_OLD_SEA_MAP, LilycoveCity_Harbor_EventScript_GetOldSeaMapState_7
LilycoveCity_Harbor_EventScript_GetOldSeaMapState_6:
	return

LilycoveCity_Harbor_EventScript_GetOldSeaMapState_2:
# 62 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_OLD_SEA_MAP_STATE, 1
	goto LilycoveCity_Harbor_EventScript_GetOldSeaMapState_1

LilycoveCity_Harbor_EventScript_GetOldSeaMapState_3:
	checkitem ITEM_OLD_SEA_MAP
# 0 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_Harbor_EventScript_GetOldSeaMapState_2
	goto LilycoveCity_Harbor_EventScript_GetOldSeaMapState_1

LilycoveCity_Harbor_EventScript_GetOldSeaMapState_7:
# 65 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_OLD_SEA_MAP_STATE, 2
	goto LilycoveCity_Harbor_EventScript_GetOldSeaMapState_6


LilycoveCity_Harbor_EventScript_GetMysticTicketState::
# 71 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_MYSTIC_TICKET_STATE, 0
# 72 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_ENABLE_SHIP_NAVEL_ROCK, LilycoveCity_Harbor_EventScript_GetMysticTicketState_3
LilycoveCity_Harbor_EventScript_GetMysticTicketState_1:
# 75 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SHOWN_MYSTIC_TICKET, LilycoveCity_Harbor_EventScript_GetMysticTicketState_7
LilycoveCity_Harbor_EventScript_GetMysticTicketState_6:
	return

LilycoveCity_Harbor_EventScript_GetMysticTicketState_2:
# 73 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_MYSTIC_TICKET_STATE, 1
	goto LilycoveCity_Harbor_EventScript_GetMysticTicketState_1

LilycoveCity_Harbor_EventScript_GetMysticTicketState_3:
	checkitem ITEM_MYSTIC_TICKET
# 0 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_Harbor_EventScript_GetMysticTicketState_2
	goto LilycoveCity_Harbor_EventScript_GetMysticTicketState_1

LilycoveCity_Harbor_EventScript_GetMysticTicketState_7:
# 76 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_MYSTIC_TICKET_STATE, 2
	goto LilycoveCity_Harbor_EventScript_GetMysticTicketState_6


LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket::
# 82 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_FIRST_TIME_TICKETS_STATE, 0
# 83 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_EON_TICKET_STATE, 2
	goto_if_eq LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_2
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_1:
# 86 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_AURORA_TICKET_STATE, 2
	goto_if_eq LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_5
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_4:
# 89 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_OLD_SEA_MAP_STATE, 2
	goto_if_eq LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_8
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_7:
# 92 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_MYSTIC_TICKET_STATE, 2
	goto_if_eq LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_11
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_10:
	return

LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_2:
# 84 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_FIRST_TIME_TICKETS_STATE, 1
	goto LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_1

LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_5:
# 87 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_FIRST_TIME_TICKETS_STATE, 2
	goto LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_4

LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_8:
# 90 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_FIRST_TIME_TICKETS_STATE, 4
	goto LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_7

LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_11:
# 93 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_FIRST_TIME_TICKETS_STATE, 8
	goto LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket_10


LilycoveCity_Harbor_EventScript_GetHasTicketsState::
# 99 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_HAS_TICKETS_STATE, 0
# 100 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_EON_TICKET_STATE, 1
	goto_if_eq LilycoveCity_Harbor_EventScript_GetHasTicketsState_2
LilycoveCity_Harbor_EventScript_GetHasTicketsState_1:
# 103 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_AURORA_TICKET_STATE, 1
	goto_if_eq LilycoveCity_Harbor_EventScript_GetHasTicketsState_5
LilycoveCity_Harbor_EventScript_GetHasTicketsState_4:
# 106 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_OLD_SEA_MAP_STATE, 1
	goto_if_eq LilycoveCity_Harbor_EventScript_GetHasTicketsState_8
LilycoveCity_Harbor_EventScript_GetHasTicketsState_7:
# 109 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_MYSTIC_TICKET_STATE, 1
	goto_if_eq LilycoveCity_Harbor_EventScript_GetHasTicketsState_11
LilycoveCity_Harbor_EventScript_GetHasTicketsState_10:
	return

LilycoveCity_Harbor_EventScript_GetHasTicketsState_2:
# 101 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_HAS_TICKETS_STATE, 1
	goto LilycoveCity_Harbor_EventScript_GetHasTicketsState_1

LilycoveCity_Harbor_EventScript_GetHasTicketsState_5:
# 104 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_HAS_TICKETS_STATE, 2
	goto LilycoveCity_Harbor_EventScript_GetHasTicketsState_4

LilycoveCity_Harbor_EventScript_GetHasTicketsState_8:
# 107 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_HAS_TICKETS_STATE, 4
	goto LilycoveCity_Harbor_EventScript_GetHasTicketsState_7

LilycoveCity_Harbor_EventScript_GetHasTicketsState_11:
# 110 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_HAS_TICKETS_STATE, 8
	goto LilycoveCity_Harbor_EventScript_GetHasTicketsState_10


LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime::
# 116 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_OLD_SEA_MAP
# 117 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ShowOldSeaMap, MSGBOX_DEFAULT
# 118 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 119 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 120 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OldSeaMapTooFar, MSGBOX_DEFAULT
# 121 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 122 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_StepFasterUp
# 123 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 124 "data/maps/LilycoveCity_Harbor/scripts.pory"
	playse SE_PIN
# 125 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_ExclamationMark
# 126 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 127 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_Delay48
# 128 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 129 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_FACING
# 130 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case DIR_NORTH, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_3
# 131 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case DIR_EAST, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_4
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_1:
# 133 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 134 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addobject LOCALID_LILYCOVE_HARBOR_BRINEY
# 135 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_FACING
# 136 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case DIR_NORTH, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_7
# 137 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case DIR_EAST, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_8
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_5:
# 139 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 140 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_BrineyHoldOnASecond, MSGBOX_DEFAULT
# 141 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_FACING
# 142 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case DIR_NORTH, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_11
# 143 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case DIR_EAST, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_12
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_9:
# 145 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 146 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_BrineyLetsSail, MSGBOX_DEFAULT
# 147 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 148 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_Movement_2
# 149 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_FACING
# 150 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case DIR_NORTH, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_15
# 153 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case DIR_EAST, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_16
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_13:
# 157 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 158 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_LILYCOVE_HARBOR_SS_TIDAL
# 159 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 160 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
# 161 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
	release_end

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_3:
# 130 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_Movement_0
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_1

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_4:
# 131 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_Movement_1
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_1

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_7:
# 136 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_StepFasterLeft
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_5

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_8:
# 137 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_StepFasterDown
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_5

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_11:
# 142 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_StepFasterDown
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_9

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_12:
# 143 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_BRINEY, Common_Movement_StepFasterLeft
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_9

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_15:
# 151 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_Movement_3
# 152 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_Movement_4
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_13

LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_16:
# 154 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_Movement_5
# 155 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_Movement_6
	goto LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_13


LilycoveCity_Harbor_EventScript_EonTicketFirstTime::
# 166 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_EON_TICKET
# 167 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x800A, 1
# 168 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeStart
	end


LilycoveCity_Harbor_EventScript_AuroraTicketFirstTime::
# 173 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_AURORA_TICKET
# 174 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x800A, 2
# 175 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeStart
	end


LilycoveCity_Harbor_EventScript_MysticTicketFirstTime::
# 180 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_MYSTIC_TICKET
# 181 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x800A, 3
# 182 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeStart
	end


LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeStart::
# 187 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 188 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 189 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 190 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_0x800A, 1
	goto_if_eq LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeStart_2
# 193 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OddTicketGetOnBoard, MSGBOX_DEFAULT
LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeStart_1:
# 195 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeEnd
	return

LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeStart_2:
# 191 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ShowEonTicket, MSGBOX_DEFAULT
	goto LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeStart_1


LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeEnd::
# 199 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 200 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 201 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_0x800A
# 202 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 1, LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeEnd_3
# 203 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 2, LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeEnd_4
# 204 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 3, LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeEnd_5
LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeEnd_1:
# 206 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
	release_end

LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeEnd_3:
# 202 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SOUTHERN_ISLAND_EXTERIOR, 13, 22
	goto LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeEnd_1

LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeEnd_4:
# 203 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BIRTH_ISLAND_HARBOR, 8, 4
	goto LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeEnd_1

LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeEnd_5:
# 204 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_NAVEL_ROCK_HARBOR, 8, 4
	goto LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeEnd_1


LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime::
# 211 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 212 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 213 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 214 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message EventTicket_Text_OddTicketsWhereTo
# 215 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 216 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 1
# 217 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special ScriptMenu_CreateLilycoveSSTidalMultichoice
# 218 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special GetLilycoveSSTidalSelection
# 219 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 220 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 2, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_3
# 223 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 3, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_4
# 226 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 4, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_5
# 229 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 5, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_6
# 234 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 6, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_7
# 235 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_7
LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1:
	release_end

LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_3:
# 221 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x800A, 1
# 222 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeEnd
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1

LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_4:
# 224 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x800A, 3
# 225 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeEnd
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1

LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_5:
# 227 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x800A, 2
# 228 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToLocationFirstTimeEnd
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1

LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_6:
# 230 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 231 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 232 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
# 233 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1

LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_7:
# 236 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 237 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 238 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_StepFasterUp
# 239 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 240 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 241 "data/maps/LilycoveCity_Harbor/scripts.pory"
	removeobject LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR
# 242 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 243 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_ATTENDANT, Common_Movement_StepFasterDown
# 244 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 245 "data/maps/LilycoveCity_Harbor/scripts.pory"
	showobjectat LOCALID_LILYCOVE_HARBOR_ATTENDANT, MAP_LILYCOVE_CITY_HARBOR
# 246 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 247 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
	goto LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime_1


LilycoveCity_Harbor_EventScript_GetEventTicketSailor::
# 253 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_StepFasterUp
# 254 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 255 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 256 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_LILYCOVE_CITY_HARBOR
# 257 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 60
# 258 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addobject LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR
# 259 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 260 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_FacePlayer
# 261 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
	return


LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect::
# 266 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 267 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special ScriptMenu_CreateLilycoveSSTidalMultichoice
# 268 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special GetLilycoveSSTidalSelection
# 269 "data/maps/LilycoveCity_Harbor/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 270 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_0x8007, 5
	goto_if_gt LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_2
# 274 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_0x8007, 2
	goto_if_lt LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_3
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1:
# 285 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_0x8007, 0
	goto_if_eq LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_7
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_6:
# 288 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 289 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_0x8007
# 290 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 0, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_15
# 291 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 1, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_16
# 292 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 2, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_17
# 293 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 3, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_18
# 294 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 4, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_19
# 295 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 5, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_20
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_13:
# 297 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
	release_end

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_2:
# 271 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
	release_end

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_3:
# 275 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_0x8007
# 276 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 0, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_11
# 277 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 1, LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_12
LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_9:
# 279 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_21
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_7:
# 286 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_LILYCOVE
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_6

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_11:
# 276 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SlateportItIs, MSGBOX_YESNO
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_9

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_12:
# 277 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_9

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_15:
# 290 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_13

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_16:
# 291 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_13

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_17:
# 292 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SOUTHERN_ISLAND_EXTERIOR, 13, 22
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_13

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_18:
# 293 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_NAVEL_ROCK_HARBOR, 8, 4
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_13

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_19:
# 294 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BIRTH_ISLAND_HARBOR, 8, 4
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_13

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_20:
# 295 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 13, 38
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_13

LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_21:
# 280 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_WhereWouldYouLikeToGo
# 281 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 282 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect
	goto LilycoveCity_Harbor_EventScript_FerryRegularLocationSelect_1


LilycoveCity_Harbor_EventScript_BoardFerryWithSailor::
# 302 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR, Common_Movement_StepFasterUp
# 303 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 304 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 305 "data/maps/LilycoveCity_Harbor/scripts.pory"
	removeobject LOCALID_LILYCOVE_HARBOR_FERRY_SAILOR
# 306 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryEnding
	return


LilycoveCity_Harbor_EventScript_BoardFerry::
# 311 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_PleaseBoard, MSGBOX_DEFAULT
# 312 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 313 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_StepFasterUp
# 314 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 315 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 316 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_LILYCOVE_CITY_HARBOR
# 317 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryEnding
	return


LilycoveCity_Harbor_EventScript_BoardFerryEnding::
# 322 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_FACING
# 323 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case DIR_NORTH, LilycoveCity_Harbor_EventScript_BoardFerryEnding_3
# 324 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case DIR_EAST, LilycoveCity_Harbor_EventScript_BoardFerryEnding_4
LilycoveCity_Harbor_EventScript_BoardFerryEnding_1:
# 326 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 327 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 328 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideplayer
# 329 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_LILYCOVE_HARBOR_SS_TIDAL
# 330 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
	return

LilycoveCity_Harbor_EventScript_BoardFerryEnding_3:
# 323 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto LilycoveCity_Harbor_EventScript_BoardFerryEnding_1

LilycoveCity_Harbor_EventScript_BoardFerryEnding_4:
# 324 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_Harbor_EventScript_BoardFerryEnding_Movement_0
	goto LilycoveCity_Harbor_EventScript_BoardFerryEnding_1


LilycoveCity_Harbor_EventScript_NoTicket::
# 336 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_NoTicket, MSGBOX_DEFAULT
	release_end


# 340 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_UnusedBoardFerry:
# 342 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
	step_end

LilycoveCity_Harbor_EventScript_Sailor::
# 346 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock_faceplayer
# 347 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_Harbor_EventScript_Sailor_2
# 351 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailorFerryUnavailable, MSGBOX_DEFAULT
	release_end

LilycoveCity_Harbor_EventScript_Sailor_2:
# 348 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailorFerryAvailable, MSGBOX_DEFAULT
	release_end


# 130 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_Movement_0:
# 130 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_faster_right
# 130 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock_look
# 130 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_left
# 130 "data/maps/LilycoveCity_Harbor/scripts.pory"
	unlock_look
	step_end

# 131 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_Movement_1:
# 131 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock_look
# 131 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_down
# 131 "data/maps/LilycoveCity_Harbor/scripts.pory"
	unlock_look
	step_end

# 148 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_Movement_2:
# 148 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_faster_up
# 148 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_8
# 148 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
	step_end

# 151 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_Movement_3:
# 151 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 151 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 151 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 151 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
	step_end

# 152 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_Movement_4:
# 152 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 152 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 152 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 152 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 152 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_faster_up
# 152 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 152 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
	step_end

# 154 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_Movement_5:
# 154 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 154 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 154 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_faster_up
# 154 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 154 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
	step_end

# 155 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime_Movement_6:
# 155 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 155 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 155 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 155 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 155 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 155 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
	step_end

# 324 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryEnding_Movement_0:
# 324 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 324 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_faster_up
	step_end

LilycoveCity_Harbor_Text_FerryUnavailable::
# 355 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I beg your pardon?\n"
	.string "You're looking for a ship?\p"
	.string "I'm sorry, the ferry service isn't\n"
	.string "available at present…$"

LilycoveCity_Harbor_Text_MayISeeYourTicket::
# 363 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
	.string "May I see your TICKET?$"

LilycoveCity_Harbor_Text_NoTicket::
# 368 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
	.string "I'm terribly sorry.\p"
	.string "You must have a TICKET to board\n"
	.string "the ferry.$"

LilycoveCity_Harbor_Text_FlashTicketWhereTo::
# 377 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
	.string "Perfect! That's all you need!\p"
	.string "And where would you like to go?$"

LilycoveCity_Harbor_Text_SailAnotherTime::
# 385 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"

LilycoveCity_Harbor_Text_SlateportItIs::
# 389 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"

LilycoveCity_Harbor_Text_BattleFrontierItIs::
# 393 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "BATTLE FRONTIER it is, then!$"

LilycoveCity_Harbor_Text_PleaseBoard::
# 397 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
	.string "departure.$"

LilycoveCity_Harbor_Text_WhereWouldYouLikeToGo::
# 402 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"

LilycoveCity_Harbor_Text_SailorFerryUnavailable::
# 406 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Until they finish making the ferry,\n"
	.string "we sailors have nothing to do…\p"
	.string "I wish they'd get a move on, the folks\n"
	.string "at the SHIPYARD in SLATEPORT.$"

LilycoveCity_Harbor_Text_SailorFerryAvailable::
# 414 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "The ferry S.S. TIDAL is finally in\n"
	.string "operation.\p"
	.string "The folks at the SHIPYARD in SLATEPORT\n"
	.string "must've worked extra hard.\p"
	.string "Well, it's my turn to get busy now!$"
