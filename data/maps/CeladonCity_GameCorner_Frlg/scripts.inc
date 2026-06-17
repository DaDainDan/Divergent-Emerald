CeladonCity_GameCorner_Frlg_MapScripts::
# 2 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CeladonCity_GameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

CeladonCity_GameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_OPENED_ROCKET_HIDEOUT, CeladonCity_GameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
CeladonCity_GameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

CeladonCity_GameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 15, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 5 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 6 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 2, METATILE_GameCorner_Floor_ShadeFull, 0
# 7 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 3, METATILE_GameCorner_PurpleWall_Floor, 1
# 8 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 3, METATILE_GameCorner_PurpleWall_Floor, 1
	goto CeladonCity_GameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1


CeladonCity_GameCorner_EventScript_InfoClerk::
# 15 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CanExchangeCoinsNextDoor, MSGBOX_NPC
	end


CeladonCity_GameCorner_EventScript_CoinsClerk::
# 20 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock_faceplayer
# 21 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	showmoneybox 0, 0
# 22 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	showcoinsbox 1, 6
# 23 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	message CeladonCity_GameCorner_Text_WelcomeBuySomeCoins
# 24 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitmessage
# 25 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	multichoice 13, 0, MULTI_GAME_CORNER_COIN_PURCHASE_COUNTER, FALSE
# 26 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	copyvar VAR_0x8006, VAR_RESULT
# 27 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeladonCity_GameCorner_EventScript_CoinsClerk_2
# 27 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeladonCity_GameCorner_EventScript_CoinsClerk_2
CeladonCity_GameCorner_EventScript_CoinsClerk_1:
# 30 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_ComePlaySometime
# 31 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
	end

CeladonCity_GameCorner_EventScript_CoinsClerk_2:
# 28 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ChooseCoinPrice
	goto CeladonCity_GameCorner_EventScript_CoinsClerk_1


CeladonCity_GameCorner_EventScript_ChooseCoinPrice::
# 36 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_ChooseCoinPrice_2
CeladonCity_GameCorner_EventScript_ChooseCoinPrice_1:
# 40 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	switch VAR_0x8006
# 41 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	case 0, CeladonCity_GameCorner_EventScript_ChooseCoinPrice_6
# 42 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	case 1, CeladonCity_GameCorner_EventScript_ChooseCoinPrice_7
CeladonCity_GameCorner_EventScript_ChooseCoinPrice_4:
# 44 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_BuyCoins
	end

CeladonCity_GameCorner_EventScript_ChooseCoinPrice_2:
# 37 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SorryDontHaveCoinCase
# 38 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
	goto CeladonCity_GameCorner_EventScript_ChooseCoinPrice_1

CeladonCity_GameCorner_EventScript_ChooseCoinPrice_6:
# 41 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setcurrencyexchange 1000, 50, COIN_LIMIT_50
	goto CeladonCity_GameCorner_EventScript_ChooseCoinPrice_4

CeladonCity_GameCorner_EventScript_ChooseCoinPrice_7:
# 42 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setcurrencyexchange 10000, 500, COIN_LIMIT_500
	goto CeladonCity_GameCorner_EventScript_ChooseCoinPrice_4


CeladonCity_GameCorner_EventScript_BuyCoins::
	checkcoins VAR_TEMP_1
# 0 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_TEMP_1, VAR_0x8007
	goto_if_ge CeladonCity_GameCorner_EventScript_BuyCoins_2
	checkmoney VAR_0x8008
# 0 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_GameCorner_EventScript_BuyCoins_3
# 56 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins VAR_0x8009
# 57 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	removemoney VAR_0x8008
# 58 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	updatemoneybox
# 59 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	updatecoinsbox 0, 5
# 60 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 61 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_HereAreYourCoins
CeladonCity_GameCorner_EventScript_BuyCoins_1:
# 63 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_ClerkEnd
	end

CeladonCity_GameCorner_EventScript_BuyCoins_2:
# 50 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CoinCaseIsFull
	goto CeladonCity_GameCorner_EventScript_BuyCoins_1

CeladonCity_GameCorner_EventScript_BuyCoins_3:
# 53 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CantAffordCoins
	goto CeladonCity_GameCorner_EventScript_BuyCoins_1


CeladonCity_GameCorner_EventScript_ClerkEnd::
# 68 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	hidemoneybox
# 69 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	hidecoinsbox 0, 5
	release_end


CeladonCity_GameCorner_EventScript_BaldingMan::
# 74 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock_faceplayer
# 75 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_RumoredTeamRocketRunsThisPlace
# 76 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


CeladonCity_GameCorner_EventScript_Woman1::
# 81 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock_faceplayer
# 82 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_ThinkMachinesHaveDifferentOdds
# 83 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


CeladonCity_GameCorner_EventScript_Fisher::
# 88 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock_faceplayer
# 89 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_10_COINS_FROM_GAMBLER, CeladonCity_GameCorner_EventScript_Fisher_2
CeladonCity_GameCorner_EventScript_Fisher_1:
# 93 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DoYouWantToPlay
# 94 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_Fisher_5
	checkcoins VAR_TEMP_1
# 0 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_TEMP_1, COIN_LIMIT_10
	goto_if_ge CeladonCity_GameCorner_EventScript_Fisher_6
# 101 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 10
# 102 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 103 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received10CoinsFromMan
# 104 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 105 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitse
# 106 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_10_COINS_FROM_GAMBLER
CeladonCity_GameCorner_EventScript_Fisher_4:
# 108 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end

CeladonCity_GameCorner_EventScript_Fisher_2:
# 90 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WinsComeAndGo
# 91 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	goto CeladonCity_GameCorner_EventScript_Fisher_1

CeladonCity_GameCorner_EventScript_Fisher_5:
# 95 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
	goto CeladonCity_GameCorner_EventScript_Fisher_4

CeladonCity_GameCorner_EventScript_Fisher_6:
# 98 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DontNeedMyCoins
	goto CeladonCity_GameCorner_EventScript_Fisher_4


CeladonCity_GameCorner_EventScript_GamblerNoCoinCase::
# 113 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 114 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_DontHaveCoinCase
# 115 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


CeladonCity_GameCorner_EventScript_GymGuy::
# 120 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock_faceplayer
# 121 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_ERIKA, CeladonCity_GameCorner_EventScript_GymGuy_2
# 124 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GymGuyAdvice
CeladonCity_GameCorner_EventScript_GymGuy_1:
# 126 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end

CeladonCity_GameCorner_EventScript_GymGuy_2:
# 122 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_RareMonsForCoins
	goto CeladonCity_GameCorner_EventScript_GymGuy_1


CeladonCity_GameCorner_EventScript_Woman2::
# 131 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock_faceplayer
# 132 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WinOrLoseItsOnlyLuck
# 133 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


CeladonCity_GameCorner_EventScript_OldMan::
# 138 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock_faceplayer
# 139 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SoEasyToGetHooked
# 140 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


CeladonCity_GameCorner_EventScript_Scientist::
# 145 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock_faceplayer
# 146 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_20_COINS_FROM_GAMBLER, CeladonCity_GameCorner_EventScript_Scientist_2
CeladonCity_GameCorner_EventScript_Scientist_1:
# 150 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WantSomeCoins
# 151 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_Scientist_5
	checkcoins VAR_TEMP_1
# 0 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_TEMP_1, COIN_LIMIT_20
	goto_if_ge CeladonCity_GameCorner_EventScript_Scientist_6
# 158 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 20
# 159 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 160 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received20CoinsFromNiceGuy
# 161 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 162 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitse
# 163 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_20_COINS_FROM_GAMBLER
CeladonCity_GameCorner_EventScript_Scientist_4:
# 165 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end

CeladonCity_GameCorner_EventScript_Scientist_2:
# 147 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_NeedMoreCoinsForMonIWant
# 148 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	goto CeladonCity_GameCorner_EventScript_Scientist_1

CeladonCity_GameCorner_EventScript_Scientist_5:
# 152 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
	goto CeladonCity_GameCorner_EventScript_Scientist_4

CeladonCity_GameCorner_EventScript_Scientist_6:
# 155 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_YouHaveLotsOfCoins
	goto CeladonCity_GameCorner_EventScript_Scientist_4


CeladonCity_GameCorner_EventScript_Gentleman::
# 170 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lock_faceplayer
# 171 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_20_COINS_FROM_GAMBLER_2, CeladonCity_GameCorner_EventScript_Gentleman_2
CeladonCity_GameCorner_EventScript_Gentleman_1:
# 175 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_HereAreSomeCoinsShoo
# 176 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_Gentleman_5
	checkcoins VAR_TEMP_1
# 0 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	compare VAR_TEMP_1, COIN_LIMIT_20
	goto_if_ge CeladonCity_GameCorner_EventScript_Gentleman_6
# 183 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	addcoins 20
# 184 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 185 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_Received20CoinsFromMan
# 186 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_SHOP
# 187 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitse
# 188 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_20_COINS_FROM_GAMBLER_2
CeladonCity_GameCorner_EventScript_Gentleman_4:
# 190 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end

CeladonCity_GameCorner_EventScript_Gentleman_2:
# 172 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_WatchReelsClosely
# 173 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	goto CeladonCity_GameCorner_EventScript_Gentleman_1

CeladonCity_GameCorner_EventScript_Gentleman_5:
# 177 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_GamblerNoCoinCase
	goto CeladonCity_GameCorner_EventScript_Gentleman_4

CeladonCity_GameCorner_EventScript_Gentleman_6:
# 180 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_YouveGotPlentyCoins
	goto CeladonCity_GameCorner_EventScript_Gentleman_4


CeladonCity_GameCorner_EventScript_SlotMachine0::
# 195 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 196 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 197 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


# 201 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"

# 202 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_SlotMachine::
# 203 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_SlotMachineNoCoinCase
# 204 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SlotMachineWantToPlay, MSGBOX_YESNO
# 205 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_EventScript_DontPlaySlotMachine
# 206 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 0, LOCALID_PLAYER
# 207 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
#ifdef BUGFIX
# 208 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 1, MAP_NUM(MAP_CELADON_CITY_GAME_CORNER)
# 209 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP(MAP_CELADON_CITY_GAME_CORNER)
# 210 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
#else
# 211 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	@ Map num/group were provided in the wrong order
# 212 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 1, MAP_GROUP(MAP_CELADON_CITY_GAME_CORNER)
# 213 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setfieldeffectargument 2, MAP_NUM(MAP_CELADON_CITY_GAME_CORNER)
# 214 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
#endif
# 215 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	dofieldeffect FLDEFF_SMILEY_FACE_ICON
# 216 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitfieldeffect FLDEFF_SMILEY_FACE_ICON
# 217 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetRandomSlotMachineId
# 218 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playslotmachine VAR_RESULT
# 219 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
# 220 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	end

CeladonCity_GameCorner_EventScript_DontPlaySlotMachine::
# 224 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
	end


CeladonCity_GameCorner_EventScript_SlotMachine1::
# 229 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 230 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 231 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine2::
# 236 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 237 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 238 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine3::
# 243 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 244 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 245 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine4::
# 250 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 251 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 4
# 252 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine5::
# 257 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 258 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 5
# 259 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine6::
# 264 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 265 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 6
# 266 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine7::
# 271 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 272 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 7
# 273 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine8::
# 278 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 279 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 8
# 280 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine9::
# 285 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 286 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 9
# 287 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine10::
# 292 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 293 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 10
# 294 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine11::
# 299 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 300 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 11
# 301 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine12::
# 306 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 307 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 12
# 308 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine13::
# 313 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 314 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 13
# 315 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine14::
# 320 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 321 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 14
# 322 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine15::
# 327 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 328 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 15
# 329 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine16::
# 334 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 335 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 16
# 336 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine17::
# 341 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 342 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 17
# 343 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine18::
# 348 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 349 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 18
# 350 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine19::
# 355 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 356 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 19
# 357 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine20::
# 362 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 363 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 20
# 364 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachine21::
# 369 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 370 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setvar VAR_0x8004, 21
# 371 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto CeladonCity_GameCorner_EventScript_SlotMachine
	end


CeladonCity_GameCorner_EventScript_SlotMachineNoCoinCase::
# 376 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_CoinCaseIsRequired
# 377 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
	end


CeladonCity_GameCorner_EventScript_Poster::
# 382 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	lockall
# 383 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SwitchBehindPosterPushIt
# 384 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_OPENED_ROCKET_HIDEOUT, CeladonCity_GameCorner_EventScript_Poster_2
CeladonCity_GameCorner_EventScript_Poster_1:
# 394 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	releaseall
	end

CeladonCity_GameCorner_EventScript_Poster_2:
# 385 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	playse SE_UNLOCK
# 386 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 15, 2, METATILE_GameCorner_Floor_StairsTop, 0
# 387 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 2, METATILE_GameCorner_StairsTop, 1
# 388 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 2, METATILE_GameCorner_StairsBottom, 1
# 389 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 16, 3, METATILE_GameCorner_PurpleWall_StairsTop, 1
# 390 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setmetatile 17, 3, METATILE_GameCorner_PurpleWall_stairsBottom, 1
# 391 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	special DrawWholeMapView
# 392 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	setflag FLAG_OPENED_ROCKET_HIDEOUT
	goto CeladonCity_GameCorner_EventScript_Poster_1


CeladonCity_GameCorner_EventScript_RocketGrunt::
# 399 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_7, CeladonCity_GameCorner_Text_GruntIntro, CeladonCity_GameCorner_Text_GruntDefeat, CeladonCity_GameCorner_EventScript_DefeatedGrunt
# 400 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_GameCorner_EventScript_DefeatedGrunt::
# 405 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_GruntPostBattle
# 406 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	closemessage
# 407 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	switch VAR_FACING
# 408 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	case DIR_WEST, CeladonCity_GameCorner_EventScript_DefeatedGrunt_3
# 409 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	applymovement LOCALID_GAME_CORNER_GRUNT, CeladonCity_GameCorner_EventScript_DefeatedGrunt_Movement_1
CeladonCity_GameCorner_EventScript_DefeatedGrunt_1:
# 411 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	waitmovement 0
# 412 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	removeobject LOCALID_GAME_CORNER_GRUNT
	release_end

CeladonCity_GameCorner_EventScript_DefeatedGrunt_3:
# 408 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	applymovement LOCALID_GAME_CORNER_GRUNT, CeladonCity_GameCorner_EventScript_DefeatedGrunt_Movement_0
	goto CeladonCity_GameCorner_EventScript_DefeatedGrunt_1


CeladonCity_GameCorner_EventScript_UnusableSlotMachine1::
# 417 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_OutOfOrder, MSGBOX_SIGN
	end


CeladonCity_GameCorner_EventScript_UnusableSlotMachine2::
# 422 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_OutToLunch, MSGBOX_SIGN
	end


CeladonCity_GameCorner_EventScript_UnusableSlotMachine3::
# 427 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SomeonesKeys, MSGBOX_SIGN
	end


# 408 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_DefeatedGrunt_Movement_0:
# 408 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_down
# 408 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 408 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 408 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_up
# 408 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 408 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 408 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 408 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
	step_end

# 409 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
CeladonCity_GameCorner_EventScript_DefeatedGrunt_Movement_1:
# 409 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 409 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 409 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 409 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 409 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
# 409 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	walk_right
	step_end

CeladonCity_GameCorner_Text_CanExchangeCoinsNextDoor::
# 431 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Welcome!\p"
	.string "You can exchange your COINS for\n"
	.string "fabulous prizes next door.$"

CeladonCity_GameCorner_Text_WelcomeBuySomeCoins::
# 438 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Welcome to ROCKET GAME CORNER!\p"
	.string "Do you need some game COINS?\n"
	.string "Would you like to buy some?$"

CeladonCity_GameCorner_Text_ComePlaySometime::
# 445 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "No?\n"
	.string "Please come play sometime!$"

CeladonCity_GameCorner_Text_SorryDontHaveCoinCase::
# 450 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Oh, I'm sorry.\n"
	.string "You don't have a COIN CASE.$"

CeladonCity_GameCorner_Text_CoinCaseIsFull::
# 455 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Whoops!\n"
	.string "Your COIN CASE is full.$"

CeladonCity_GameCorner_Text_CantAffordCoins::
# 460 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You can't afford the COINS.$"

CeladonCity_GameCorner_Text_HereAreYourCoins::
# 464 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Thank you.\n"
	.string "Here are your COINS!$"

CeladonCity_GameCorner_Text_RumoredTeamRocketRunsThisPlace::
# 469 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Keep this quiet.\p"
	.string "It's rumored that this place is run\n"
	.string "by TEAM ROCKET.$"

CeladonCity_GameCorner_Text_ThinkMachinesHaveDifferentOdds::
# 476 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "I think these machines have\n"
	.string "different odds.$"

CeladonCity_GameCorner_Text_DoYouWantToPlay::
# 481 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Kid, do you want to play?$"

CeladonCity_GameCorner_Text_Received10CoinsFromMan::
# 485 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received 10 COINS\n"
	.string "from the man.$"

CeladonCity_GameCorner_Text_DontNeedMyCoins::
# 490 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You don't need my COINS!$"

CeladonCity_GameCorner_Text_WinsComeAndGo::
# 494 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Wins seem to come and go.\n"
	.string "Nothing's a sure thing.$"

CeladonCity_GameCorner_Text_WinOrLoseItsOnlyLuck::
# 499 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "These slot games…\n"
	.string "Win or lose, it's only by luck.$"

CeladonCity_GameCorner_Text_GymGuyAdvice::
# 504 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Hey!\p"
	.string "You have better things to do,\n"
	.string "champ in the making!\p"
	.string "CELADON GYM's LEADER is ERIKA.\p"
	.string "She is a user of GRASS-type\n"
	.string "POKéMON, and at one with nature.\p"
	.string "She might appear docile because of\n"
	.string "her flower arranging…\p"
	.string "But she's not one to be taken\n"
	.string "lightly!$"

CeladonCity_GameCorner_Text_RareMonsForCoins::
# 522 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "They offer rare POKéMON that can\n"
	.string "be exchanged for your COINS.\p"
	.string "But, I just can't seem to win!$"

CeladonCity_GameCorner_Text_SoEasyToGetHooked::
# 529 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Games are scary!\n"
	.string "It's so easy to get hooked!$"

CeladonCity_GameCorner_Text_WantSomeCoins::
# 534 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "What's up?\n"
	.string "Want some COINS?$"

CeladonCity_GameCorner_Text_Received20CoinsFromNiceGuy::
# 539 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received 20 COINS\n"
	.string "from the nice guy.$"

CeladonCity_GameCorner_Text_YouHaveLotsOfCoins::
# 544 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You have lots of COINS!$"

CeladonCity_GameCorner_Text_NeedMoreCoinsForMonIWant::
# 548 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Darn! I need more COINS for the\n"
	.string "POKéMON I want!$"

CeladonCity_GameCorner_Text_HereAreSomeCoinsShoo::
# 553 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Hey, what? You're throwing me off!\n"
	.string "Here are some COINS, so shoo!$"

CeladonCity_GameCorner_Text_Received20CoinsFromMan::
# 558 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received 20 COINS\n"
	.string "from the man.$"

CeladonCity_GameCorner_Text_YouveGotPlentyCoins::
# 563 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "You've got plenty of your own\n"
	.string "COINS!$"

CeladonCity_GameCorner_Text_WatchReelsClosely::
# 568 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "The trick is to watch the reels\n"
	.string "closely.$"

CeladonCity_GameCorner_Text_GruntIntro::
# 573 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "I'm guarding this poster!\n"
	.string "Go away, or else!$"

CeladonCity_GameCorner_Text_GruntDefeat::
# 578 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Dang!$"

CeladonCity_GameCorner_Text_GruntPostBattle::
# 582 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "The TEAM ROCKET HIDEOUT might\n"
	.string "be discovered!\p"
	.string "I better tell BOSS!$"

CeladonCity_GameCorner_Text_SwitchBehindPosterPushIt::
# 589 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Hey!\p"
	.string "A switch behind the poster!?\n"
	.string "Let's push it!$"

CeladonCity_GameCorner_Text_CoinCaseIsRequired::
# 596 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "A COIN CASE is required…$"

CeladonCity_GameCorner_Text_DontHaveCoinCase::
# 600 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Oops!\n"
	.string "Don't have the COIN CASE!$"

CeladonCity_GameCorner_Text_SlotMachineWantToPlay::
# 605 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "A slot machine!\n"
	.string "Want to play?$"

CeladonCity_GameCorner_Text_OutOfOrder::
# 610 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "OUT OF ORDER\n"
	.string "This is broken.$"

CeladonCity_GameCorner_Text_OutToLunch::
# 615 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "OUT TO LUNCH\n"
	.string "This is reserved.$"

CeladonCity_GameCorner_Text_SomeonesKeys::
# 620 "data/maps/CeladonCity_GameCorner_Frlg/scripts.pory"
	.string "Someone's keys!\n"
	.string "They'll be back.$"
