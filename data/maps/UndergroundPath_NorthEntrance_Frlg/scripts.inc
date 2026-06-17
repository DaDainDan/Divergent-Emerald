UndergroundPath_NorthEntrance_Frlg_MapScripts::
	.byte 0


UndergroundPath_NorthEntrance_EventScript_Saige::
# 4 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NIDORAN
# 6 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 7 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	goto_if_set FLAG_DID_MS_NIDO_TRADE, UndergroundPath_NorthEntrance_EventScript_Saige_2
# 11 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWantToTradeForMon, MSGBOX_YESNO
# 12 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq UndergroundPath_NorthEntrance_EventScript_Saige_5
UndergroundPath_NorthEntrance_EventScript_Saige_4:
# 15 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 16 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge UndergroundPath_NorthEntrance_EventScript_Saige_8
UndergroundPath_NorthEntrance_EventScript_Saige_7:
# 19 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 20 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne UndergroundPath_NorthEntrance_EventScript_Saige_11
# 25 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 26 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	msgbox Trade_Text_ThanksYoureAPal
# 27 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	setflag FLAG_DID_MS_NIDO_TRADE
	release_end

UndergroundPath_NorthEntrance_EventScript_Saige_2:
# 8 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	msgbox Trade_Text_HowIsMyOldMon
	release_end

UndergroundPath_NorthEntrance_EventScript_Saige_5:
# 13 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	goto UndergroundPath_NorthEntrance_EventScript_DeclineTrade
	goto UndergroundPath_NorthEntrance_EventScript_Saige_4

UndergroundPath_NorthEntrance_EventScript_Saige_8:
# 17 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	goto UndergroundPath_NorthEntrance_EventScript_DeclineTrade
	goto UndergroundPath_NorthEntrance_EventScript_Saige_7

UndergroundPath_NorthEntrance_EventScript_Saige_11:
# 21 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 22 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	msgbox Trade_Text_ThisIsNoMon
	release_end


UndergroundPath_NorthEntrance_EventScript_DeclineTrade::
# 32 "data/maps/UndergroundPath_NorthEntrance_Frlg/scripts.pory"
	msgbox Trade_Text_ThatsTooBad
	release_end

