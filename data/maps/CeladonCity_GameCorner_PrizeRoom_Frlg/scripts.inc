CeladonCity_GameCorner_PrizeRoom_Frlg_MapScripts::
	.byte 0


CeladonCity_GameCorner_PrizeRoom_EventScript_BaldingMan::
# 4 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_FancyThatPorygon, MSGBOX_NPC
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_OldMan::
# 9 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_RakedItInToday, MSGBOX_NPC
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons::
# 14 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	lock_faceplayer
# 15 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_2
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_1:
# 18 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	showcoinsbox 1, 1
# 19 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 20 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 21 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 22 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	multichoice 11, 0, MULTI_GAME_CORNER_POKEMON_PRIZES, FALSE
# 23 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_6
# 25 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_7
# 26 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 2, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_8
# 27 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 3, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_9
# 28 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 4, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_10
# 29 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 5, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_11
# 30 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case MULTI_B_PRESSED, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_11
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_4:
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_2:
# 16 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_1

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_6:
# 24 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_Abra
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_7:
# 25 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_Clefairy
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_8:
# 26 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_DratiniPinsir
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_9:
# 27 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ScytherDratini
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_10:
# 28 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_Porygon
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_11:
# 31 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons_4


CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange::
# 37 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	hidecoinsbox 0, 0
	release_end


CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon::
# 42 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 43 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
# 44 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_2
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_1:
	checkcoins VAR_RESULT
# 0 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_EXCHANGE_PRICE
	goto_if_lt CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_5
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_4:
# 50 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 51 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_TEMP_TRANSFERRED_SPECIES
# 52 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_ABRA, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_9
# 53 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_CLEFAIRY, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_10
# 54 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_DRATINI, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_11
# 55 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_PORYGON, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_12
# 56 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_SCYTHER, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_13
# 57 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case SPECIES_PINSIR, CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_14
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7:
# 59 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_2:
# 45 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_1

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_5:
# 48 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_4

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_9:
# 52 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GiveAbra
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_10:
# 53 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GiveClefairy
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_11:
# 54 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GiveDratini
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_12:
# 55 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_GivePorygon
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_13:
# 56 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 25
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7

CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_14:
# 57 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 18
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon_7


# 63 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 64 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Abra::
# 65 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 66 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ABRA
# 67 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_EXCHANGE_PRICE, 180
# 68 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 69 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 70 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ABRA
# 71 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_EXCHANGE_PRICE, 120
# 72 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 73 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 74 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 75 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 76 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 77 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Clefairy::
# 78 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 79 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CLEFAIRY
# 80 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_EXCHANGE_PRICE, 500
# 81 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 82 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 83 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CLEFAIRY
# 84 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_EXCHANGE_PRICE, 750
# 85 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 86 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 87 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 88 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 89 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 90 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_DratiniPinsir::
# 91 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 92 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DRATINI
# 93 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_EXCHANGE_PRICE, 2800
# 94 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 95 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 96 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PINSIR
# 97 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_EXCHANGE_PRICE, 2500
# 98 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 99 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 100 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 101 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 102 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 103 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ScytherDratini::
# 104 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 105 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SCYTHER
# 106 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_EXCHANGE_PRICE, 5500
# 107 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 108 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 109 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DRATINI
# 110 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_EXCHANGE_PRICE, 4600
# 111 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 112 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 113 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 114 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 115 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 116 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Porygon::
# 117 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 118 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PORYGON
# 119 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_EXCHANGE_PRICE, 9999
# 120 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 121 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 122 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PORYGON
# 123 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setvar VAR_EXCHANGE_PRICE, 6500
# 124 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 125 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 126 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 127 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 128 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 129 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveAbra::
# 130 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 131 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 9
# 132 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 133 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 134 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 7
# 135 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 136 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 137 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 138 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 139 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 140 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveClefairy::
# 141 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 142 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 8
# 143 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 144 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 145 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 12
# 146 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 147 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 148 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 149 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 150 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 151 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveDratini::
# 152 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 153 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 18
# 154 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 155 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 156 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 24
# 157 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 158 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 159 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 160 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end
# 161 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"

# 162 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GivePorygon::
# 163 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef FIRERED
# 164 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 26
# 165 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#else
# 166 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#ifdef LEAFGREEN
# 167 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 18
# 168 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 169 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	#endif
# 170 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 171 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon::
# 175 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, CANT_GIVE_MON
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_2
# 181 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 182 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	removecoins VAR_EXCHANGE_PRICE
# 183 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	updatecoinsbox 0, 5
# 184 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 185 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 186 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message gText_PlayerObtainedTheMon
# 187 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 188 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitfanfare
# 189 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 190 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_0x8007
# 191 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case MON_GIVEN_TO_PARTY, CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_6
# 198 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case MON_GIVEN_TO_PC, CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_7
CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_4:
# 204 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_2:
# 176 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 177 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox gText_NoMoreRoomForPokemon
# 178 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	hidecoinsbox 0, 0
	release_end

CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_6:
# 192 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_8
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_4

CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_7:
# 199 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_11
CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_10:
# 202 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_4

CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_8:
# 193 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	getpartysize
# 194 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	subvar VAR_RESULT, 1
# 195 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 196 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_4

CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_11:
# 200 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon_10


CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase::
# 209 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 210 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_CoinCaseRequired
	release_end


CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins::
# 215 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_NeedMoreCoins
# 216 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end


CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs::
# 221 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	lock_faceplayer
# 222 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_2
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_1:
# 225 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	showcoinsbox 1, 1
# 226 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 227 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 228 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 229 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	multichoice 11, 0, MULTI_GAME_CORNER_TMPRIZES, FALSE
# 230 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 231 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_6
# 234 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_7
# 237 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 2, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_8
# 240 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 3, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_9
# 243 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 4, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_10
# 246 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 5, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_11
# 247 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case MULTI_B_PRESSED, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_11
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_4:
# 250 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantTM, MSGBOX_YESNO
# 251 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_13
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_12:
# 254 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_2:
# 223 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_1

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_6:
# 232 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setitemandprice ITEM_TM13, 4000
# 233 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_ICE_BEAM
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_7:
# 235 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setitemandprice ITEM_TM23, 3500
# 236 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_IRON_TAIL
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_8:
# 238 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setitemandprice ITEM_TM24, 3000
# 239 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_THUNDERBOLT
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_9:
# 241 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setitemandprice ITEM_TM30, 4500
# 242 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_SHADOW_BALL
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_10:
# 244 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setitemandprice ITEM_TM35, 4000
# 245 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FLAMETHROWER
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_11:
# 248 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_13:
# 252 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs_12


CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize::
# 259 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_GIFT_ITEM
	checkcoins VAR_RESULT
# 0 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, VAR_EXCHANGE_PRICE
	goto_if_lt CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_2
CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_1:
	checkitemspace VAR_GIFT_ITEM
# 0 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_5
# 269 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	removecoins VAR_EXCHANGE_PRICE
# 270 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	updatecoinsbox 0, 5
# 271 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	giveitem VAR_GIFT_ITEM
# 272 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_2:
# 261 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_1

CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize_5:
# 264 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 265 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox gText_TooBadBagIsFull
# 266 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	hidecoinsbox 0, 0
	release_end


CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems::
# 277 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	lock_faceplayer
# 278 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_2
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_1:
# 281 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	showcoinsbox 1, 1
# 282 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 283 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 284 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	waitmessage
# 285 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	multichoice 10, 0, MULTI_GAME_CORNER_BATTLE_ITEM_PRIZES, FALSE
# 286 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 287 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_6
# 288 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_7
# 289 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 2, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_8
# 290 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 3, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_9
# 291 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 4, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_10
# 292 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case 5, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_11
# 293 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	case MULTI_B_PRESSED, CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_11
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_4:
# 296 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_GIFT_ITEM
# 297 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
# 298 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_13
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_12:
# 301 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize
	end

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_2:
# 279 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_1

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_6:
# 287 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setitemandprice ITEM_SMOKE_BALL, 800
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_7:
# 288 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setitemandprice ITEM_MIRACLE_SEED, 1000
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_8:
# 289 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setitemandprice ITEM_CHARCOAL, 1000
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_9:
# 290 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setitemandprice ITEM_MYSTIC_WATER, 1000
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_10:
# 291 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	setitemandprice ITEM_YELLOW_FLUTE, 1600
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_11:
# 294 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_4

CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_13:
# 299 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems_12


CeladonCity_GameCorner_PrizeRoom_Text_FancyThatPorygon::
# 305 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "I sure do fancy that PORYGON!\n"
	.string "But, it's hard to win at slots!$"

CeladonCity_GameCorner_PrizeRoom_Text_RakedItInToday::
# 310 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Gahaha! I raked it in today!\n"
	.string "If only every day were like this…$"

CeladonCity_GameCorner_PrizeRoom_Text_CoinCaseRequired::
# 315 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "A COIN CASE is required…$"

CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes::
# 319 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "We exchange your COINS for prizes.$"

CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize::
# 323 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Which prize would you like?$"

CeladonCity_GameCorner_PrizeRoom_Text_HereYouGo::
# 327 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "はい どうぞ$"

CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize::
# 331 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "So, you want the {STR_VAR_1}?$"

CeladonCity_GameCorner_PrizeRoom_Text_YouWantTM::
# 335 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Okay, a TM of {STR_VAR_2}\n"
	.string "is what you want?$"

CeladonCity_GameCorner_PrizeRoom_Text_NeedMoreCoins::
# 340 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "Sorry, you'll need more COINS\n"
	.string "than that.$"

CeladonCity_GameCorner_PrizeRoom_Text_OopsNotEnoughRoom::
# 345 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "おきゃくさん もう もてないよ$"

CeladonCity_GameCorner_PrizeRoom_Text_OhFineThen::
# 349 "data/maps/CeladonCity_GameCorner_PrizeRoom_Frlg/scripts.pory"
	.string "あっ そう$"
