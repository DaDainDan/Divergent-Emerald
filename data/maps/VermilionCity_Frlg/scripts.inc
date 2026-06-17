VermilionCity_Frlg_MapScripts::
# 2 "data/maps/VermilionCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/VermilionCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VermilionCity_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

VermilionCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/VermilionCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VERMILION_CITY
# 4 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_set FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION, VermilionCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
VermilionCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

VermilionCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/VermilionCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
	goto VermilionCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

VermilionCity_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/VermilionCity_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VERMILION_CITY, 2, VermilionCity_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

VermilionCity_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 11 "data/maps/VermilionCity_Frlg/scripts.pory"
	lockall
# 12 "data/maps/VermilionCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, VermilionCity_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 13 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmovement 0
# 14 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 3
# 15 "data/maps/VermilionCity_Frlg/scripts.pory"
	releaseall
	end


VermilionCity_EventScript_Woman::
# 22 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_GrimerMultipliesInSludge, MSGBOX_NPC
	end


VermilionCity_EventScript_OldMan1::
# 27 "data/maps/VermilionCity_Frlg/scripts.pory"
	lock_faceplayer
# 28 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VERMILION_CITY, 3
	goto_if_eq VermilionCity_EventScript_OldMan1_2
# 32 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_DidYouSeeSSAnneInHarbor
	release_end

VermilionCity_EventScript_OldMan1_2:
# 29 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_SSAnneHasDepartedForYear
	release_end


VermilionCity_EventScript_FerrySailor::
# 37 "data/maps/VermilionCity_Frlg/scripts.pory"
	lock_faceplayer
# 38 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VERMILION_CITY, 3
	goto_if_eq VermilionCity_EventScript_FerrySailor_2
# 42 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_WelcomeToTheSSAnne
	release_end

VermilionCity_EventScript_FerrySailor_2:
# 39 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_Seagallop
	release_end


VermilionCity_EventScript_Seagallop::
# 47 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 48 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
	goto_if_ge VermilionCity_EventScript_Seagallop_2
# 62 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1
	goto_if_ge VermilionCity_EventScript_Seagallop_3
VermilionCity_EventScript_Seagallop_1:
# 76 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_TheShipSetSail
	return

VermilionCity_EventScript_Seagallop_2:
# 49 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_CheckHasMysticTicket
# 50 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq VermilionCity_EventScript_Seagallop_7
VermilionCity_EventScript_Seagallop_6:
# 53 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_CheckHasAuroraTicket
# 54 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq VermilionCity_EventScript_Seagallop_15
VermilionCity_EventScript_Seagallop_14:
# 57 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 58 "data/maps/VermilionCity_Frlg/scripts.pory"
	message VermilionCity_Text_BoardSeagallopRainbowPass
# 59 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmessage
# 60 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SeviiDestinationsPage1
	goto VermilionCity_EventScript_Seagallop_1

VermilionCity_EventScript_Seagallop_3:
# 63 "data/maps/VermilionCity_Frlg/scripts.pory"
	message VermilionCity_Text_BoardSeagallopTriPass
# 64 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmessage
# 65 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 66 "data/maps/VermilionCity_Frlg/scripts.pory"
	multichoice 19, 5, MULTI_SEAGALLOP_123, FALSE
# 67 "data/maps/VermilionCity_Frlg/scripts.pory"
	switch VAR_RESULT
# 68 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 0, VermilionCity_EventScript_Seagallop_10
# 69 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 1, VermilionCity_EventScript_Seagallop_11
# 70 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 2, VermilionCity_EventScript_Seagallop_12
# 71 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 3, VermilionCity_EventScript_Seagallop_13
# 72 "data/maps/VermilionCity_Frlg/scripts.pory"
	case MULTI_B_PRESSED, VermilionCity_EventScript_Seagallop_13
	goto VermilionCity_EventScript_Seagallop_1

VermilionCity_EventScript_Seagallop_7:
# 51 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticTicket
	goto VermilionCity_EventScript_Seagallop_6

VermilionCity_EventScript_Seagallop_10:
# 68 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SailToOneIsland2
	goto VermilionCity_EventScript_Seagallop_1

VermilionCity_EventScript_Seagallop_11:
# 69 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SailToTwoIsland2
	goto VermilionCity_EventScript_Seagallop_1

VermilionCity_EventScript_Seagallop_12:
# 70 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SailToThreeIsland2
	goto VermilionCity_EventScript_Seagallop_1

VermilionCity_EventScript_Seagallop_13:
# 73 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_CancelSail
	goto VermilionCity_EventScript_Seagallop_1

VermilionCity_EventScript_Seagallop_15:
# 55 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasAuroraTicket
	goto VermilionCity_EventScript_Seagallop_14


VermilionCity_EventScript_CheckHasMysticTicket::
# 81 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_NAVEL_ROCK, VermilionCity_EventScript_CheckHasMysticTicket_2
	checkitem ITEM_MYSTIC_TICKET
# 0 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VermilionCity_EventScript_CheckHasMysticTicket_2
VermilionCity_EventScript_CheckHasMysticTicket_1:
# 84 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetResultTrue
	end

VermilionCity_EventScript_CheckHasMysticTicket_2:
# 82 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetResultFalse
	goto VermilionCity_EventScript_CheckHasMysticTicket_1


VermilionCity_EventScript_CheckHasAuroraTicket::
# 89 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_BIRTH_ISLAND, VermilionCity_EventScript_CheckHasAuroraTicket_2
	checkitem ITEM_AURORA_TICKET
# 0 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VermilionCity_EventScript_CheckHasAuroraTicket_2
VermilionCity_EventScript_CheckHasAuroraTicket_1:
# 92 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetResultTrue
	end

VermilionCity_EventScript_CheckHasAuroraTicket_2:
# 90 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetResultFalse
	goto VermilionCity_EventScript_CheckHasAuroraTicket_1


VermilionCity_EventScript_HasMysticTicket::
# 97 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_CheckHasAuroraTicket
# 98 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq VermilionCity_EventScript_HasMysticTicket_2
VermilionCity_EventScript_HasMysticTicket_1:
# 101 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_SHOWN_MYSTIC_TICKET, VermilionCity_EventScript_HasMysticTicket_5
VermilionCity_EventScript_HasMysticTicket_4:
# 104 "data/maps/VermilionCity_Frlg/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 105 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmessage
# 106 "data/maps/VermilionCity_Frlg/scripts.pory"
	multichoice 17, 6, MULTI_SEVII_NAVEL, FALSE
# 107 "data/maps/VermilionCity_Frlg/scripts.pory"
	switch VAR_RESULT
# 108 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 0, VermilionCity_EventScript_HasMysticTicket_9
# 109 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 1, VermilionCity_EventScript_HasMysticTicket_10
# 110 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 2, VermilionCity_EventScript_HasMysticTicket_11
# 111 "data/maps/VermilionCity_Frlg/scripts.pory"
	case MULTI_B_PRESSED, VermilionCity_EventScript_HasMysticTicket_11
VermilionCity_EventScript_HasMysticTicket_7:
	end

VermilionCity_EventScript_HasMysticTicket_2:
# 99 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_HasMysticAndAuroraTickets
	goto VermilionCity_EventScript_HasMysticTicket_1

VermilionCity_EventScript_HasMysticTicket_5:
# 102 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_ShowMysticTicket
	goto VermilionCity_EventScript_HasMysticTicket_4

VermilionCity_EventScript_HasMysticTicket_9:
# 108 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SeviiDestinationsPage1
	goto VermilionCity_EventScript_HasMysticTicket_7

VermilionCity_EventScript_HasMysticTicket_10:
# 109 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SailToNavelRock
	goto VermilionCity_EventScript_HasMysticTicket_7

VermilionCity_EventScript_HasMysticTicket_11:
# 112 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_CancelSail
	goto VermilionCity_EventScript_HasMysticTicket_7


VermilionCity_EventScript_ShowMysticTicket::
# 118 "data/maps/VermilionCity_Frlg/scripts.pory"
	setflag FLAG_SHOWN_MYSTIC_TICKET
# 119 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_OhMysticTicketTakeYouToNavelRock
	return


VermilionCity_EventScript_HasAuroraTicket::
# 124 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_SHOWN_AURORA_TICKET, VermilionCity_EventScript_HasAuroraTicket_2
VermilionCity_EventScript_HasAuroraTicket_1:
# 127 "data/maps/VermilionCity_Frlg/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 128 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmessage
# 129 "data/maps/VermilionCity_Frlg/scripts.pory"
	multichoice 13, 6, MULTI_SEVII_BIRTH, FALSE
# 130 "data/maps/VermilionCity_Frlg/scripts.pory"
	switch VAR_RESULT
# 131 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 0, VermilionCity_EventScript_HasAuroraTicket_6
# 132 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 1, VermilionCity_EventScript_HasAuroraTicket_7
# 133 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 2, VermilionCity_EventScript_HasAuroraTicket_8
# 134 "data/maps/VermilionCity_Frlg/scripts.pory"
	case MULTI_B_PRESSED, VermilionCity_EventScript_HasAuroraTicket_8
VermilionCity_EventScript_HasAuroraTicket_4:
	end

VermilionCity_EventScript_HasAuroraTicket_2:
# 125 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_ShowAuroraTicket
	goto VermilionCity_EventScript_HasAuroraTicket_1

VermilionCity_EventScript_HasAuroraTicket_6:
# 131 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SeviiDestinationsPage1
	goto VermilionCity_EventScript_HasAuroraTicket_4

VermilionCity_EventScript_HasAuroraTicket_7:
# 132 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SailToBirthIsland
	goto VermilionCity_EventScript_HasAuroraTicket_4

VermilionCity_EventScript_HasAuroraTicket_8:
# 135 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_CancelSail
	goto VermilionCity_EventScript_HasAuroraTicket_4


VermilionCity_EventScript_ShowAuroraTicket::
# 141 "data/maps/VermilionCity_Frlg/scripts.pory"
	setflag FLAG_SHOWN_AURORA_TICKET
# 142 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_OhAuroraTicketTakeYouToBirthIsland
	return


VermilionCity_EventScript_HasMysticAndAuroraTickets::
# 147 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_SHOWN_MYSTIC_TICKET, VermilionCity_EventScript_HasMysticAndAuroraTickets_2
VermilionCity_EventScript_HasMysticAndAuroraTickets_1:
# 150 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_SHOWN_AURORA_TICKET, VermilionCity_EventScript_HasMysticAndAuroraTickets_5
VermilionCity_EventScript_HasMysticAndAuroraTickets_4:
# 153 "data/maps/VermilionCity_Frlg/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 154 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmessage
# 155 "data/maps/VermilionCity_Frlg/scripts.pory"
	multichoice 13, 5, MULTI_SEVII_NAVEL_BIRTH, FALSE
# 156 "data/maps/VermilionCity_Frlg/scripts.pory"
	switch VAR_RESULT
# 157 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 0, VermilionCity_EventScript_HasMysticAndAuroraTickets_9
# 158 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 1, VermilionCity_EventScript_HasMysticAndAuroraTickets_10
# 159 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 2, VermilionCity_EventScript_HasMysticAndAuroraTickets_11
# 160 "data/maps/VermilionCity_Frlg/scripts.pory"
	case 3, VermilionCity_EventScript_HasMysticAndAuroraTickets_12
# 161 "data/maps/VermilionCity_Frlg/scripts.pory"
	case MULTI_B_PRESSED, VermilionCity_EventScript_HasMysticAndAuroraTickets_12
VermilionCity_EventScript_HasMysticAndAuroraTickets_7:
	end

VermilionCity_EventScript_HasMysticAndAuroraTickets_2:
# 148 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_ShowMysticTicket
	goto VermilionCity_EventScript_HasMysticAndAuroraTickets_1

VermilionCity_EventScript_HasMysticAndAuroraTickets_5:
# 151 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_ShowAuroraTicket
	goto VermilionCity_EventScript_HasMysticAndAuroraTickets_4

VermilionCity_EventScript_HasMysticAndAuroraTickets_9:
# 157 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SeviiDestinationsPage1
	goto VermilionCity_EventScript_HasMysticAndAuroraTickets_7

VermilionCity_EventScript_HasMysticAndAuroraTickets_10:
# 158 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SailToNavelRock
	goto VermilionCity_EventScript_HasMysticAndAuroraTickets_7

VermilionCity_EventScript_HasMysticAndAuroraTickets_11:
# 159 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SailToBirthIsland
	goto VermilionCity_EventScript_HasMysticAndAuroraTickets_7

VermilionCity_EventScript_HasMysticAndAuroraTickets_12:
# 162 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_CancelSail
	goto VermilionCity_EventScript_HasMysticAndAuroraTickets_7


EventScript_SailToNavelRock::
# 168 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_Seagallop10Departing
# 169 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 170 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_NAVEL_ROCK
# 171 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetSail
	end


EventScript_SailToBirthIsland::
# 176 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_Seagallop12Departing
# 177 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 178 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_BIRTH_ISLAND
# 179 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto EventScript_SetSail
	end


Vermilion_EventScript_Unused::
	release_end


VermilionCity_EventScript_CheckTicketLeft::
# 189 "data/maps/VermilionCity_Frlg/scripts.pory"
	lockall
# 190 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket
	end


VermilionCity_EventScript_CheckTicketRight::
# 195 "data/maps/VermilionCity_Frlg/scripts.pory"
	lockall
# 196 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket
	end


VermilionCity_EventScript_ExitedTicketCheck::
# 201 "data/maps/VermilionCity_Frlg/scripts.pory"
	lockall
# 202 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0
# 203 "data/maps/VermilionCity_Frlg/scripts.pory"
	releaseall
	end


VermilionCity_EventScript_CheckTicket::
# 208 "data/maps/VermilionCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 209 "data/maps/VermilionCity_Frlg/scripts.pory"
	applymovement LOCALID_VERMILION_FERRY_SAILOR, Common_Movement_StepFasterLeft
# 210 "data/maps/VermilionCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 211 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmovement 0
# 212 "data/maps/VermilionCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VERMILION_CITY, 3
	goto_if_eq VermilionCity_EventScript_CheckTicket_2
VermilionCity_EventScript_CheckTicket_1:
# 217 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_DoYouHaveATicket
# 218 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_SS_TICKET, VermilionCity_EventScript_CheckTicket_5
VermilionCity_EventScript_CheckTicket_4:
# 223 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_FlashedSSTicket
# 224 "data/maps/VermilionCity_Frlg/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 1
# 225 "data/maps/VermilionCity_Frlg/scripts.pory"
	releaseall
	end

VermilionCity_EventScript_CheckTicket_2:
# 213 "data/maps/VermilionCity_Frlg/scripts.pory"
	call VermilionCity_EventScript_Seagallop
# 214 "data/maps/VermilionCity_Frlg/scripts.pory"
	closemessage
# 215 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_WalkUpPier
	goto VermilionCity_EventScript_CheckTicket_1

VermilionCity_EventScript_CheckTicket_5:
# 219 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_DontHaveNeededSSTicket
# 220 "data/maps/VermilionCity_Frlg/scripts.pory"
	closemessage
# 221 "data/maps/VermilionCity_Frlg/scripts.pory"
	goto VermilionCity_EventScript_WalkUpPier
	goto VermilionCity_EventScript_CheckTicket_4


VermilionCity_EventScript_Sailor::
# 230 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_SSAnneVisitsOnceAYear, MSGBOX_NPC
	end


VermilionCity_EventScript_OaksAide::
# 235 "data/maps/VermilionCity_Frlg/scripts.pory"
	lock_faceplayer
# 236 "data/maps/VermilionCity_Frlg/scripts.pory"
	setflag FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION
# 237 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_Route2AideHasPackageForYou
	release_end


VermilionCity_EventScript_OldMan2::
# 242 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_BuildingOnThisLand, MSGBOX_NPC
	end


VermilionCity_EventScript_Machop::
# 247 "data/maps/VermilionCity_Frlg/scripts.pory"
	lock_faceplayer
# 248 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitse
# 249 "data/maps/VermilionCity_Frlg/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
# 250 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_Machop
# 251 "data/maps/VermilionCity_Frlg/scripts.pory"
	waitmoncry
# 252 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_MachopStompingLandFlat
	release_end


VermilionCity_EventScript_CitySign::
# 257 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_CitySign, MSGBOX_SIGN
	end


VermilionCity_EventScript_SnorlaxNotice::
# 262 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_SnorlaxBlockingRoute12, MSGBOX_SIGN
	end


VermilionCity_EventScript_PokemonFanClubSign::
# 267 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_PokemonFanClubSign, MSGBOX_SIGN
	end


VermilionCity_EventScript_GymSign::
# 272 "data/maps/VermilionCity_Frlg/scripts.pory"
	lockall
# 273 "data/maps/VermilionCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 0
# 274 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_GymSign
# 275 "data/maps/VermilionCity_Frlg/scripts.pory"
	releaseall
	end


VermilionCity_EventScript_HarborSign::
# 280 "data/maps/VermilionCity_Frlg/scripts.pory"
	msgbox VermilionCity_Text_VermilionHarbor, MSGBOX_SIGN
	end


# 12 "data/maps/VermilionCity_Frlg/scripts.pory"
VermilionCity_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 12 "data/maps/VermilionCity_Frlg/scripts.pory"
	walk_up
# 12 "data/maps/VermilionCity_Frlg/scripts.pory"
	walk_up
	step_end

VermilionCity_Text_GrimerMultipliesInSludge::
# 284 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "We're careful about pollution here.\p"
	.string "We've heard GRIMER multiplies in\n"
	.string "toxic sludge.$"

VermilionCity_Text_DidYouSeeSSAnneInHarbor::
# 291 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Did you see the S.S. ANNE moored\n"
	.string "in the harbor?$"

VermilionCity_Text_SSAnneHasDepartedForYear::
# 296 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "So, the S.S. ANNE has departed?\p"
	.string "She'll be back in VERMILION about\n"
	.string "this time next year.$"

VermilionCity_Text_BuildingOnThisLand::
# 303 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "I'm putting up a building on this\n"
	.string "plot of land. I own it all.\p"
	.string "My POKéMON is tamping the land\n"
	.string "to lay the foundation.$"

VermilionCity_Text_Machop::
# 311 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "MACHOP: Guoh! Gogogoh!$"

VermilionCity_Text_MachopStompingLandFlat::
# 315 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "A MACHOP is stomping the land flat.$"

VermilionCity_Text_SSAnneVisitsOnceAYear::
# 319 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "The S.S. ANNE is a famous luxury\n"
	.string "cruise ship.\p"
	.string "It visits VERMILION once a year.$"

VermilionCity_Text_CitySign::
# 326 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "VERMILION CITY\n"
	.string "The Port of Exquisite Sunsets$"

VermilionCity_Text_SnorlaxBlockingRoute12::
# 331 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "NOTICE!\p"
	.string "ROUTE 12 may be blocked off by a\n"
	.string "sleeping POKéMON.\p"
	.string "Detour through ROCK TUNNEL to\n"
	.string "LAVENDER TOWN.\p"
	.string "VERMILION POLICE$"

VermilionCity_Text_PokemonFanClubSign::
# 343 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "POKéMON FAN CLUB\n"
	.string "All POKéMON fans welcome!$"

VermilionCity_Text_GymSign::
# 348 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "VERMILION CITY POKéMON GYM\n"
	.string "LEADER: LT. SURGE\l"
	.string "The Lightning American!$"

VermilionCity_Text_VermilionHarbor::
# 354 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "VERMILION HARBOR$"

VermilionCity_Text_WelcomeToTheSSAnne::
# 358 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Welcome to the S.S. ANNE!$"

VermilionCity_Text_DoYouHaveATicket::
# 362 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Welcome to the S.S. ANNE!\p"
	.string "Excuse me, do you have a ticket?$"

VermilionCity_Text_FlashedSSTicket::
# 368 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "{FONT_NORMAL}{PLAYER} flashed the S.S. TICKET!\p"
	.string "{FONT_MALE}Great!\n"
	.string "Welcome to the S.S. ANNE!$"

VermilionCity_Text_DontHaveNeededSSTicket::
# 375 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "{FONT_NORMAL}{PLAYER} doesn't have the needed\n"
	.string "S.S. TICKET.\p"
	.string "{FONT_MALE}Sorry!\p"
	.string "You need a ticket to get aboard.$"

VermilionCity_Text_TheShipSetSail::
# 384 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "The ship set sail.$"

VermilionCity_Text_BoardSeagallopTriPass::
# 388 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Ah, you have a TRI-PASS.\p"
	.string "Would you like to board\n"
	.string "a SEAGALLOP ferry?$"

VermilionCity_Text_Seagallop7Departing::
# 395 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Okay, everything's in order.\p"
	.string "SEAGALLOP HI-SPEED 7 will be\n"
	.string "departing immediately.$"

VermilionCity_Text_BoardSeagallopRainbowPass::
# 402 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Ah, you have a RAINBOW PASS.\p"
	.string "Would you like to board\n"
	.string "a SEAGALLOP ferry?$"

VermilionCity_Text_OhMysticTicketTakeYouToNavelRock::
# 409 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Oh! That's a MYSTICTICKET!\n"
	.string "Now that is rare.\p"
	.string "We'll be happy to take you to\n"
	.string "NAVEL ROCK anytime.$"

VermilionCity_Text_OhAuroraTicketTakeYouToBirthIsland::
# 417 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Oh! That's an AURORATICKET!\n"
	.string "Now that is rare.\p"
	.string "We'll be happy to take you to\n"
	.string "BIRTH ISLAND anytime.$"

VermilionCity_Text_BoardSeagallopFerry::
# 425 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Would you like to board\n"
	.string "a SEAGALLOP ferry?$"

VermilionCity_Text_Seagallop10Departing::
# 430 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Okay, everything's in order for you\n"
	.string "to board a special ferry.\p"
	.string "SEAGALLOP HI-SPEED 10 will be\n"
	.string "departing immediately.$"

VermilionCity_Text_Seagallop12Departing::
# 438 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Okay, everything's in order for you\n"
	.string "to board a special ferry.\p"
	.string "SEAGALLOP HI-SPEED 12 will be\n"
	.string "departing immediately.$"

VermilionCity_Text_Route2AideHasPackageForYou::
# 446 "data/maps/VermilionCity_Frlg/scripts.pory"
	.string "Oh, hello, {PLAYER}!\n"
	.string "How are you doing?\p"
	.string "It's me, one of PROF. OAK's AIDES.\p"
	.string "Did you meet the other AIDE?\p"
	.string "He had a package from PROF. OAK\n"
	.string "for you, {PLAYER}.\p"
	.string "He said he'd look for you around\n"
	.string "ROUTE 2, {PLAYER}.\p"
	.string "If you're in the ROUTE 2 area,\n"
	.string "please look for him.$"
