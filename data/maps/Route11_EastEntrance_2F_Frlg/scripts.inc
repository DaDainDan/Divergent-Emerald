Route11_EastEntrance_2F_Frlg_MapScripts::
	.byte 0


Route11_EastEntrance_2F_EventScript_LeftBinoculars::
# 6 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	lockall
# 7 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_WOKE_UP_ROUTE_12_SNORLAX, Route11_EastEntrance_2F_EventScript_LeftBinoculars_2
# 10 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_BigMonAsleepOnRoad
Route11_EastEntrance_2F_EventScript_LeftBinoculars_1:
# 12 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	releaseall
	end

Route11_EastEntrance_2F_EventScript_LeftBinoculars_2:
# 8 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_WhatABreathtakingView
	goto Route11_EastEntrance_2F_EventScript_LeftBinoculars_1


Route11_EastEntrance_2F_EventScript_RightBinoculars::
# 17 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_RockTunnelGoodRouteToLavender, MSGBOX_SIGN
	end


Route11_EastEntrance_2F_EventScript_Turner::
# 22 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	lock_faceplayer
# 23 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORINOA
# 24 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 25 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_DID_NINA_TRADE, Route11_EastEntrance_2F_EventScript_Turner_2
# 29 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_LookingForMonWannaTradeForMon, MSGBOX_YESNO
# 30 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route11_EastEntrance_2F_EventScript_Turner_5
Route11_EastEntrance_2F_EventScript_Turner_4:
# 33 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 34 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Route11_EastEntrance_2F_EventScript_Turner_8
Route11_EastEntrance_2F_EventScript_Turner_7:
# 37 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 38 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne Route11_EastEntrance_2F_EventScript_Turner_11
# 43 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 44 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_HeyThanks
# 45 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_DID_NINA_TRADE
	release_end

Route11_EastEntrance_2F_EventScript_Turner_2:
# 26 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
	release_end

Route11_EastEntrance_2F_EventScript_Turner_5:
# 31 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_DeclineTrade
	goto Route11_EastEntrance_2F_EventScript_Turner_4

Route11_EastEntrance_2F_EventScript_Turner_8:
# 35 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Route11_EastEntrance_2F_EventScript_DeclineTrade
	goto Route11_EastEntrance_2F_EventScript_Turner_7

Route11_EastEntrance_2F_EventScript_Turner_11:
# 39 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 40 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_WhatThatsNoMon
	release_end


Route11_EastEntrance_2F_EventScript_DeclineTrade::
# 50 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Trade_Text_AwwOhWell
	release_end


Route11_EastEntrance_2F_EventScript_Aide::
# 55 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	lock_faceplayer
# 56 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call Route11_EastEntrance_2F_EventScript_GetAideRequestInfo
# 57 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_ITEMFINDER, Route11_EastEntrance_2F_EventScript_Aide_2
# 61 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_GiveItemfinderIfCaught30, MSGBOX_YESNO
# 62 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route11_EastEntrance_2F_EventScript_Aide_5
Route11_EastEntrance_2F_EventScript_Aide_4:
# 65 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 66 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 67 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 68 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	call Route11_EastEntrance_2F_EventScript_GetAideRequestInfo
# 69 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_0x8006, 30
	goto_if_lt Route11_EastEntrance_2F_EventScript_Aide_8
Route11_EastEntrance_2F_EventScript_Aide_7:
# 72 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_GreatHereYouGo
	checkitemspace ITEM_ITEMFINDER
# 0 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route11_EastEntrance_2F_EventScript_Aide_11
Route11_EastEntrance_2F_EventScript_Aide_10:
# 76 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	giveitem_msg Route11_EastEntrance_2F_Text_ReceivedItemfinderFromAide, ITEM_ITEMFINDER
# 77 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_GOT_ITEMFINDER
# 78 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_ExplainItemfinder
	release_end

Route11_EastEntrance_2F_EventScript_Aide_2:
# 58 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	msgbox Route11_EastEntrance_2F_Text_ExplainItemfinder
	release_end

Route11_EastEntrance_2F_EventScript_Aide_5:
# 63 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_DeclineCheckMons
	goto Route11_EastEntrance_2F_EventScript_Aide_4

Route11_EastEntrance_2F_EventScript_Aide_8:
# 70 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_HaventCaughtEnough
	goto Route11_EastEntrance_2F_EventScript_Aide_7

Route11_EastEntrance_2F_EventScript_Aide_11:
# 74 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_NoRoomForItem
	goto Route11_EastEntrance_2F_EventScript_Aide_10


Route11_EastEntrance_2F_EventScript_GetAideRequestInfo::
# 83 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, 30
# 84 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_ITEMFINDER
	return


Route11_EastEntrance_2F_Text_GiveItemfinderIfCaught30::
# 88 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Hi! Remember me?\n"
	.string "I'm one of PROF. OAK's AIDES.\p"
	.string "If your POKéDEX has complete data\n"
	.string "on {STR_VAR_1} species, I'm supposed to\l"
	.string "give you a reward.\p"
	.string "PROF. OAK entrusted me with the\n"
	.string "{STR_VAR_2} for you.\p"
	.string "So, {PLAYER}, let me ask you.\p"
	.string "Have you gathered data on at least\n"
	.string "{STR_VAR_1} kinds of POKéMON?$"

Route11_EastEntrance_2F_Text_GreatHereYouGo::
# 105 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Great! You have caught or owned\n"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
	.string "Congratulations!\n"
	.string "Here you go!$"

Route11_EastEntrance_2F_Text_ReceivedItemfinderFromAide::
# 113 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_2}\n"
	.string "from the AIDE.$"

Route11_EastEntrance_2F_Text_ExplainItemfinder::
# 118 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "There are items on the ground that\n"
	.string "may be hidden from view.\p"
	.string "Use the ITEMFINDER to detect any\n"
	.string "hidden items close to you.\p"
	.string "The machine is a bit limited.\n"
	.string "It can't pinpoint item locations.\p"
	.string "What it does is show the direction\n"
	.string "where the item is.\p"
	.string "Use it to get your bearings, then\n"
	.string "search the suspect area by hand.$"

Route11_EastEntrance_2F_Text_BigMonAsleepOnRoad::
# 135 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "A big POKéMON is asleep on a road!$"

Route11_EastEntrance_2F_Text_WhatABreathtakingView::
# 142 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "What a breathtaking view!$"

Route11_EastEntrance_2F_Text_RockTunnelGoodRouteToLavender::
# 149 "data/maps/Route11_EastEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "To get to LAVENDER TOWN from\n"
	.string "CERULEAN CITY…\p"
	.string "ROCK TUNNEL appears to be a good\n"
	.string "route to take.$"
