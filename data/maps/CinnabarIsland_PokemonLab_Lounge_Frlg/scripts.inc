CinnabarIsland_PokemonLab_Lounge_Frlg_MapScripts::
	.byte 0


CinnabarIsland_PokemonLab_Lounge_EventScript_Scientist::
# 4 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_FoundFossilInMtMoon, MSGBOX_NPC
	end


CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton::
# 9 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	lock_faceplayer
# 10 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ELECTRODE
# 11 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 12 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto_if_set FLAG_DID_ESPHERE_TRADE, CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_2
# 16 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWouldYouTradeForMon, MSGBOX_YESNO
# 17 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_5
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_4:
# 20 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 21 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_8
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_7:
# 24 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 25 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_11
# 30 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	call EventScript_DoInGameTrade
# 31 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_Thanks
# 32 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	setflag FLAG_DID_ESPHERE_TRADE
	release_end

CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_2:
# 13 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_HasTradedMonGrownStronger
	release_end

CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_5:
# 18 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_4

CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_8:
# 22 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_7

CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton_11:
# 26 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 27 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_ThisIsntMon
	release_end


CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade::
# 37 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_WellIfYouDontWantTo
	release_end


CinnabarIsland_PokemonLab_Lounge_EventScript_Norma::
# 42 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	lock_faceplayer
# 43 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TANGELA
# 44 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 45 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 46 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 47 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto_if_set FLAG_DID_TANGENY_TRADE, CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_2
# 51 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWantToTradeForMon, MSGBOX_YESNO
# 52 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_5
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_4:
# 55 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	special ChoosePartyMon
# 56 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 57 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_8
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_7:
# 60 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 61 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 62 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 63 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_11
# 68 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 69 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 70 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	special CreateInGameTradePokemon
# 71 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	special DoInGameTradeScene
# 72 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_ThanksYoureAPal
# 73 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	setflag FLAG_DID_TANGENY_TRADE
	release_end

CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_2:
# 48 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_HowIsMyOldMon
	release_end

CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_5:
# 53 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_4

CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_8:
# 58 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_7

CinnabarIsland_PokemonLab_Lounge_EventScript_Norma_11:
# 64 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 65 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_ThisIsNoMon
	release_end


CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade::
# 78 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	msgbox Trade_Text_ThatsTooBad
	release_end


CinnabarIsland_PokemonLab_Lounge_Text_FoundFossilInMtMoon::
# 82 "data/maps/CinnabarIsland_PokemonLab_Lounge_Frlg/scripts.pory"
	.string "I found this most remarkable fossil\n"
	.string "inside MT. MOON.\p"
	.string "I think it's of a rare, prehistoric\n"
	.string "POKéMON.$"
