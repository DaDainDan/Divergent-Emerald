CeladonCity_DepartmentStore_Roof_Frlg_MapScripts::
	.byte 0


CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl::
# 4 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	lock_faceplayer
	checkitem ITEM_FRESH_WATER
# 0 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_4
CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_1:
# 9 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ImThirstyGiveHerDrink, MSGBOX_YESNO
# 10 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_9
# 13 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 14 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	message CeladonCity_DepartmentStore_Roof_Text_GiveWhichDrink
# 15 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	waitmessage
# 16 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
	checkitem ITEM_FRESH_WATER
# 0 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_12
CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_11:
	checkitem ITEM_SODA_POP
# 0 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_15
CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_14:
	checkitem ITEM_LEMONADE
# 0 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_18
CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_17:
# 26 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	dynmultipush CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_Text_3, 0
# 27 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 28 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_RESULT
# 29 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case ITEM_FRESH_WATER, CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_22
# 35 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case ITEM_SODA_POP, CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_23
# 41 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case ITEM_LEMONADE, CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_24
	release_end

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_2:
# 6 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ImThirstyIWantDrink
	release_end

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_3:
	checkitem ITEM_LEMONADE
# 0 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_2
	goto CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_1

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_4:
	checkitem ITEM_SODA_POP
# 0 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_3
	goto CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_1

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_9:
	release_end

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_12:
# 18 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	dynmultipush CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_Text_0, ITEM_FRESH_WATER
	goto CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_11

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_15:
# 21 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	dynmultipush CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_Text_1, ITEM_SODA_POP
	goto CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_14

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_18:
# 24 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	dynmultipush CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_Text_2, ITEM_LEMONADE
	goto CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_17

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_20:
# 50 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink
	end

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_22:
# 30 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	settradeitems ITEM_FRESH_WATER, ITEM_TM16
# 31 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM16_FROM_THIRSTY_GIRL, CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_27
CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_26:
# 34 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_YayFreshWaterHaveThis
	goto CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_20

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_23:
# 36 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	settradeitems ITEM_SODA_POP, ITEM_TM20
# 37 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM20_FROM_THIRSTY_GIRL, CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_30
CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_29:
# 40 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_YaySodaPopHaveThis
	goto CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_20

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_24:
# 42 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	settradeitems ITEM_LEMONADE, ITEM_TM33
# 43 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM33_FROM_THIRSTY_GIRL, CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_33
CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_32:
# 46 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_YayLemonadeHaveThis
	goto CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_20

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_27:
# 32 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll
	goto CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_26

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_30:
# 38 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll
	goto CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_29

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_33:
# 44 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll
	goto CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_32


CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink::
# 55 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_EXCHANGE_ITEM
# 56 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, VAR_GIFT_ITEM
# 57 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	removeitem VAR_EXCHANGE_ITEM
	checkitemspace VAR_GIFT_ITEM
# 0 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_2
# 62 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	additem VAR_GIFT_ITEM
# 63 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 64 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 65 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	message Text_ReceivedItemFromLittleGirl
# 66 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	waitmessage
# 67 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	waitfanfare
# 68 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	putitemaway VAR_GIFT_ITEM
# 69 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 70 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_EXCHANGE_ITEM
# 71 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case ITEM_FRESH_WATER, CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_6
# 74 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case ITEM_SODA_POP, CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_7
# 77 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case ITEM_LEMONADE, CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_8
CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_4:
	release_end

CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_2:
# 59 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_DontHaveSpaceForThis
	release_end

CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_6:
# 72 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setflag FLAG_GOT_TM16_FROM_THIRSTY_GIRL
# 73 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ExplainTM16
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_4

CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_7:
# 75 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setflag FLAG_GOT_TM20_FROM_THIRSTY_GIRL
# 76 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ExplainTM20
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_4

CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_8:
# 78 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setflag FLAG_GOT_TM33_FROM_THIRSTY_GIRL
# 79 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ExplainTM33
	goto CeladonCity_DepartmentStore_Roof_EventScript_GiveDrink_4


CeladonCity_DepartmentStore_Roof_EventScript_NotThirstyAfterAll::
# 85 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_ImNotThirstyAfterAll
	release_end


CeladonCity_DepartmentStore_Roof_EventScript_CooltrainerM::
# 90 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_MySisterIsImmature, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_Roof_EventScript_FloorSign::
# 95 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_FloorSign, MSGBOX_SIGN
	end


CeladonCity_DepartmentStore_Roof_EventScript_VendingMachine::
# 100 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	lockall
# 101 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	message CeladonCity_DepartmentStore_Roof_Text_VendingMachineWhatDoesItHave
# 102 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	waitmessage
# 103 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	showmoneybox 0, 0
# 104 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink
	end


CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink::
# 109 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	multichoice 12, 0, MULTI_CELADON_VENDING_MACHINE, FALSE
# 110 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 111 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 112 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 0, CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_3
# 113 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 1, CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_4
# 114 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	case 2, CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_5
# 116 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_NotThirsty
# 117 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine
CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_1:
	checkmoney VAR_EXCHANGE_PRICE
# 0 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_8
CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_7:
	checkitemspace VAR_GIFT_ITEM
# 0 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_11
CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_10:
# 127 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	removemoney VAR_EXCHANGE_PRICE
# 128 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	updatemoneybox
# 129 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_GIFT_ITEM
# 130 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	playse SE_VEND
# 131 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_DrinkCanPoppedOut
# 132 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	additem VAR_GIFT_ITEM
# 133 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	message CeladonCity_DepartmentStore_Roof_Text_VendingMachineWhatDoesItHave
# 134 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	waitmessage
# 135 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink
	end

CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_3:
# 112 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setitemandprice ITEM_FRESH_WATER, 200
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_1

CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_4:
# 113 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setitemandprice ITEM_SODA_POP, 300
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_1

CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_5:
# 114 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	setitemandprice ITEM_LEMONADE, 350
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_1

CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_8:
# 120 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_NotEnoughMoney
# 121 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_7

CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_11:
# 124 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_Roof_Text_NoMoreRoomForStuff
# 125 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	goto CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine
	goto CeladonCity_DepartmentStore_Roof_EventScript_ChooseDrink_10


CeladonCity_DepartmentStore_Roof_EventScript_ExitVendingMachine::
# 140 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	hidemoneybox
# 141 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	releaseall
	end


CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_Text_0:
# 18 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "FRESH WATER$"

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_Text_1:
# 21 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "SODA_POP$"

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_Text_2:
# 24 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "LEMONADE$"

CeladonCity_DepartmentStore_Roof_EventScript_ThirstyGirl_Text_3:
# 26 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "EXIT$"

CeladonCity_DepartmentStore_Roof_Text_ImThirstyGiveHerDrink::
# 145 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "I'm thirsty!\n"
	.string "I want something to drink!\p"
	.string "{FONT_NORMAL}Give her a drink?$"

CeladonCity_DepartmentStore_Roof_Text_GiveWhichDrink::
# 152 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Give her which drink?$"

CeladonCity_DepartmentStore_Roof_Text_YayFreshWaterHaveThis::
# 156 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Yay!\p"
	.string "FRESH WATER!\p"
	.string "Thank you!\n"
	.string "You can have this from me!$"

Text_ReceivedItemFromLittleGirl::
# 165 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "{PLAYER} received a {STR_VAR_2}\n"
	.string "from the little girl.$"

CeladonCity_DepartmentStore_Roof_Text_ExplainTM16::
# 170 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "TM16 contains LIGHT SCREEN.\p"
	.string "It's a move that weakens the power\n"
	.string "of special attacks by your foe.$"

CeladonCity_DepartmentStore_Roof_Text_YaySodaPopHaveThis::
# 177 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Yay!\p"
	.string "SODA POP!\p"
	.string "Thank you!\n"
	.string "You can have this from me!$"

CeladonCity_DepartmentStore_Roof_Text_ExplainTM20::
# 186 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "TM20 contains SAFEGUARD.\p"
	.string "It's a move that prevents status\n"
	.string "problems among your POKéMON.$"

CeladonCity_DepartmentStore_Roof_Text_YayLemonadeHaveThis::
# 193 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Yay!\p"
	.string "LEMONADE!\p"
	.string "Thank you!\n"
	.string "You can have this from me!$"

CeladonCity_DepartmentStore_Roof_Text_ExplainTM33::
# 202 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "TM33 contains REFLECT.\p"
	.string "It's a move that weakens the power\n"
	.string "of physical attacks by your foe.$"

CeladonCity_DepartmentStore_Roof_Text_DontHaveSpaceForThis::
# 209 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "You don't have space for this!$"

CeladonCity_DepartmentStore_Roof_Text_ImNotThirstyAfterAll::
# 213 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "No, thank you!\n"
	.string "I'm not thirsty after all!$"

CeladonCity_DepartmentStore_Roof_Text_MySisterIsImmature::
# 218 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "My sister is a TRAINER, believe it\n"
	.string "or not.\p"
	.string "But, she's so immature, she drives\n"
	.string "me nuts!$"

CeladonCity_DepartmentStore_Roof_Text_ImThirstyIWantDrink::
# 226 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "I'm thirsty!\n"
	.string "I want something to drink!$"

CeladonCity_DepartmentStore_Roof_Text_FloorSign::
# 231 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "ROOFTOP SQUARE:\n"
	.string "VENDING MACHINES$"

CeladonCity_DepartmentStore_Roof_Text_VendingMachineWhatDoesItHave::
# 236 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "A vending machine!\n"
	.string "What does it have?$"

CeladonCity_DepartmentStore_Roof_Text_NotEnoughMoney::
# 241 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Oops, not enough money!$"

CeladonCity_DepartmentStore_Roof_Text_DrinkCanPoppedOut::
# 245 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "A can of {STR_VAR_1} popped out!$"

CeladonCity_DepartmentStore_Roof_Text_NoMoreRoomForStuff::
# 249 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "There's no more room for stuff!$"

CeladonCity_DepartmentStore_Roof_Text_NotThirsty::
# 253 "data/maps/CeladonCity_DepartmentStore_Roof_Frlg/scripts.pory"
	.string "Not thirsty!$"
