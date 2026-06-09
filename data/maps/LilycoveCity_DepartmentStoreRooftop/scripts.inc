LilycoveCity_DepartmentStoreRooftop_MapScripts::
# 2 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_DepartmentStoreRooftop_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

LilycoveCity_DepartmentStoreRooftop_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getpokenewsactive POKENEWS_LILYCOVE
# 4 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 7 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
LilycoveCity_DepartmentStoreRooftop_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

LilycoveCity_DepartmentStoreRooftop_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
	goto LilycoveCity_DepartmentStoreRooftop_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


LilycoveCity_DepartmentStoreRooftop_EventScript_SaleWoman::
# 14 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock_faceplayer
# 15 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message gText_HowMayIServeYou
# 16 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 17 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	pokemartdecoration LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale
# 18 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 22 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
LilycoveCity_DepartmentStoreRooftop_PokemartDecor_ClearOutSale:
# 23 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_MUD_BALL
# 24 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_FENCE_LENGTH
# 25 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_FENCE_WIDTH
# 26 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_TIRE
# 27 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_BREAKABLE_DOOR
# 28 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_SOLID_BOARD
# 29 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_SAND_ORNAMENT
# 30 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_STAND
# 31 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_SLIDE
# 32 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_TV
# 33 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_ROUND_TV
# 34 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_CUTE_TV
# 35 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_WAILMER_DOLL
# 36 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.2byte DECOR_RHYDON_DOLL
	.2byte ITEM_NONE

LilycoveCity_DepartmentStoreRooftop_EventScript_Man::
# 40 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lock_faceplayer
# 41 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	getpokenewsactive POKENEWS_LILYCOVE
# 42 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_Man_2
# 46 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales, MSGBOX_DEFAULT
	release_end

LilycoveCity_DepartmentStoreRooftop_EventScript_Man_2:
# 43 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale, MSGBOX_DEFAULT
	release_end


LilycoveCity_DepartmentStoreRooftop_EventScript_ThirstyMan::
# 51 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty, MSGBOX_NPC
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_VendingMachine::
# 56 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	lockall
# 57 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
# 58 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 59 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	showmoneybox 0, 0
# 60 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink::
# 65 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	multichoice 16, 0, MULTI_VENDING_MACHINE, FALSE
# 66 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 67 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	switch VAR_TEMP_1
# 68 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 0, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_3
# 69 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 1, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_4
# 70 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case 2, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_5
# 72 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink, MSGBOX_DEFAULT
# 73 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_1:
# 75 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	switch VAR_TEMP_0
# 76 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case ITEM_FRESH_WATER, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_9
# 77 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case ITEM_SODA_POP, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_10
# 78 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case ITEM_LEMONADE, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_11
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_7:
# 80 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_13
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_12:
	checkitemspace VAR_TEMP_0
# 0 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_16
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_15:
# 87 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	switch VAR_TEMP_0
# 88 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case ITEM_FRESH_WATER, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_20
# 89 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case ITEM_SODA_POP, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_21
# 90 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	case ITEM_LEMONADE, LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_22
LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_18:
# 92 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	updatemoneybox
# 93 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_0
# 94 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 95 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 96 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_GiveDrink
# 97 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_RandomExtraDrink
# 98 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_RandomExtraDrink
# 99 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_3:
# 68 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_FRESH_WATER
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_1

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_4:
# 69 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_SODA_POP
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_1

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_5:
# 70 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	setvar VAR_TEMP_0, ITEM_LEMONADE
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_1

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_9:
# 76 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 200
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_7

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_10:
# 77 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 300
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_7

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_11:
# 78 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	checkmoney 350
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_7

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_13:
# 81 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 82 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_12

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_16:
# 85 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_15

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_20:
# 88 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 200
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_18

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_21:
# 89 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 300
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_18

LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_22:
# 90 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	removemoney 350
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink_18


LilycoveCity_DepartmentStoreRooftop_EventScript_GiveDrink::
# 104 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	additem VAR_TEMP_0
# 105 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_0
# 106 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	bufferstdstring STR_VAR_3, STDSTRING_ITEMS
# 107 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	return


LilycoveCity_DepartmentStoreRooftop_EventScript_RandomExtraDrink::
	random 64
# 0 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne LilycoveCity_DepartmentStoreRooftop_EventScript_RandomExtraDrink_2
	checkitemspace VAR_TEMP_0
# 0 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStoreRooftop_EventScript_RandomExtraDrink_3
LilycoveCity_DepartmentStoreRooftop_EventScript_RandomExtraDrink_1:
# 118 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	playse SE_VEND
# 119 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
# 120 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	call LilycoveCity_DepartmentStoreRooftop_EventScript_GiveDrink
	return

LilycoveCity_DepartmentStoreRooftop_EventScript_RandomExtraDrink_2:
# 113 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_RandomExtraDrink_1

LilycoveCity_DepartmentStoreRooftop_EventScript_RandomExtraDrink_3:
# 116 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_RandomExtraDrink_1


LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseNewDrink::
# 125 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	message LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike
# 126 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	waitmessage
# 127 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ChooseDrink
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_NoRoomForDrink::
# 132 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 133 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	goto LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine
	end


LilycoveCity_DepartmentStoreRooftop_EventScript_ExitVendingMachine::
# 138 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	hidemoneybox
# 139 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	releaseall
	end


LilycoveCity_DepartmentStoreRooftop_Text_SetDatesForClearOutSales::
# 143 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Don't they have set dates for their\n"
	.string "clear-out sales?\p"
	.string "I watch TV, but they never show any\n"
	.string "commercials.$"

LilycoveCity_DepartmentStoreRooftop_Text_BeenWaitingForClearOutSale::
# 151 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Yes! I've been waiting a long time for\n"
	.string "this clear-out sale.\p"
	.string "They have items that you can only get\n"
	.string "here. I'm going to load up, that I am!$"

LilycoveCity_DepartmentStoreRooftop_Text_BoneDryThirsty::
# 159 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Ohh… I'm bone-dry thirsty!$"

LilycoveCity_DepartmentStoreRooftop_Text_WhichDrinkWouldYouLike::
# 163 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "It's a VENDING MACHINE.\n"
	.string "Which drink would you like?$"

LilycoveCity_DepartmentStoreRooftop_Text_CanOfDrinkDroppedDown::
# 168 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Clang!\p"
	.string "A can of {STR_VAR_1} dropped down.$"

LilycoveCity_DepartmentStoreRooftop_Text_ExtraCanOfDrinkDroppedDown::
# 174 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Clang!\p"
	.string "Score! An extra can of {STR_VAR_1}\n"
	.string "dropped down!$"

LilycoveCity_DepartmentStoreRooftop_Text_NotEnoughMoney::
# 181 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Not enough money…$"

LilycoveCity_DepartmentStoreRooftop_Text_DecidedAgainstBuyingDrink::
# 185 "data/maps/LilycoveCity_DepartmentStoreRooftop/scripts.pory"
	.string "Decided against buying a drink.$"
