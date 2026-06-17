CeruleanCity_House5_Frlg_MapScripts::
	.byte 0


CeruleanCity_House5_EventScript_BerryPowderMan::
# 4 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POWDER_JAR, CeruleanCity_House5_EventScript_BerryPowderMan_2
CeruleanCity_House5_EventScript_BerryPowderMan_1:
# 10 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_AnyInterestInBerries, MSGBOX_YESNO
# 11 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeruleanCity_House5_EventScript_BerryPowderMan_5
# 14 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_GOT_BERRY_POUCH, CeruleanCity_House5_EventScript_BerryPowderMan_6
# 18 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_HaveJustTheThing
# 19 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setflag FLAG_GOT_POWDER_JAR
	giveitem ITEM_POWDER_JAR
# 0 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeruleanCity_House5_EventScript_BerryPowderMan_11
CeruleanCity_House5_EventScript_BerryPowderMan_10:
# 23 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_GoCrushBerriesAtDirectCorner
CeruleanCity_House5_EventScript_BerryPowderMan_4:
	release_end

CeruleanCity_House5_EventScript_BerryPowderMan_2:
# 6 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 7 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_HaveYouBroughtBerryPowder
# 8 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
	goto CeruleanCity_House5_EventScript_BerryPowderMan_1

CeruleanCity_House5_EventScript_BerryPowderMan_5:
# 12 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_TakeInterestInAllSortsOfThings
	goto CeruleanCity_House5_EventScript_BerryPowderMan_4

CeruleanCity_House5_EventScript_BerryPowderMan_6:
# 15 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_WhyMustYouLieNoBerries
	goto CeruleanCity_House5_EventScript_BerryPowderMan_4

CeruleanCity_House5_EventScript_BerryPowderMan_11:
# 21 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto EventScript_BagIsFull
	goto CeruleanCity_House5_EventScript_BerryPowderMan_10


CeruleanCity_House5_EventScript_ChooseExchangeItem::
# 29 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	message CeruleanCity_House5_Text_ExchangeWithWhat
# 30 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	waitmessage
# 31 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 32 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special ShowScrollableMultichoice
# 33 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	switch VAR_RESULT
# 34 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 0, CeruleanCity_House5_EventScript_ChooseExchangeItem_3
# 35 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 1, CeruleanCity_House5_EventScript_ChooseExchangeItem_4
# 36 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 2, CeruleanCity_House5_EventScript_ChooseExchangeItem_5
# 37 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 3, CeruleanCity_House5_EventScript_ChooseExchangeItem_6
# 38 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 4, CeruleanCity_House5_EventScript_ChooseExchangeItem_7
# 39 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 5, CeruleanCity_House5_EventScript_ChooseExchangeItem_8
# 40 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 6, CeruleanCity_House5_EventScript_ChooseExchangeItem_9
# 41 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 7, CeruleanCity_House5_EventScript_ChooseExchangeItem_10
# 42 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 8, CeruleanCity_House5_EventScript_ChooseExchangeItem_11
# 43 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 9, CeruleanCity_House5_EventScript_ChooseExchangeItem_12
# 44 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 10, CeruleanCity_House5_EventScript_ChooseExchangeItem_13
# 45 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case 11, CeruleanCity_House5_EventScript_ChooseExchangeItem_14
# 46 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	case MULTI_B_PRESSED, CeruleanCity_House5_EventScript_ChooseExchangeItem_14
CeruleanCity_House5_EventScript_ChooseExchangeItem_1:
# 51 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	bufferitemname STR_VAR_1, VAR_GIFT_ITEM
# 52 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem
	end

CeruleanCity_House5_EventScript_ChooseExchangeItem_3:
# 34 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setitemandprice ITEM_ENERGY_POWDER, 50
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_4:
# 35 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setitemandprice ITEM_ENERGY_ROOT, 80
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_5:
# 36 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setitemandprice ITEM_HEAL_POWDER, 50
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_6:
# 37 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setitemandprice ITEM_REVIVAL_HERB, 300
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_7:
# 38 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setitemandprice ITEM_PROTEIN, 1000
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_8:
# 39 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setitemandprice ITEM_IRON, 1000
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_9:
# 40 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setitemandprice ITEM_CARBOS, 1000
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_10:
# 41 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setitemandprice ITEM_CALCIUM, 1000
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_11:
# 42 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setitemandprice ITEM_ZINC, 1000
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_12:
# 43 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setitemandprice ITEM_HP_UP, 1000
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_13:
# 44 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	setitemandprice ITEM_PP_UP, 3000
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem_1

CeruleanCity_House5_EventScript_ChooseExchangeItem_14:
# 47 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_SeeMeIfYoudLikeToTradePowder
# 48 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special RemoveBerryPowderVendorMenu
	release_end


CeruleanCity_House5_EventScript_ExchangePowderForItem::
# 57 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_YoullExchangeBerryPowderForItem, MSGBOX_YESNO
# 58 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CeruleanCity_House5_EventScript_ExchangePowderForItem_2
CeruleanCity_House5_EventScript_ExchangePowderForItem_1:
# 61 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_EXCHANGE_PRICE
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 0 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeruleanCity_House5_EventScript_ExchangePowderForItem_5
	giveitem VAR_GIFT_ITEM
# 0 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeruleanCity_House5_EventScript_ExchangePowderForItem_6
# 70 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_EXCHANGE_PRICE
# 71 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special TakeBerryPowder
# 72 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 73 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_TradeMoreBerryPowder, MSGBOX_YESNO
# 74 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CeruleanCity_House5_EventScript_ExchangePowderForItem_11
CeruleanCity_House5_EventScript_ExchangePowderForItem_10:
# 77 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_HopeToSeeYouAgain
CeruleanCity_House5_EventScript_ExchangePowderForItem_4:
# 79 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special RemoveBerryPowderVendorMenu
	release_end

CeruleanCity_House5_EventScript_ExchangePowderForItem_2:
# 59 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem_1

CeruleanCity_House5_EventScript_ExchangePowderForItem_5:
# 63 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox CeruleanCity_House1_Text_DontHaveEnoughBerryPowder
# 64 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem_4

CeruleanCity_House5_EventScript_ExchangePowderForItem_6:
# 67 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	msgbox gText_TheBagIsFull
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem_4

CeruleanCity_House5_EventScript_ExchangePowderForItem_11:
# 75 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	goto CeruleanCity_House5_EventScript_ChooseExchangeItem
	goto CeruleanCity_House5_EventScript_ExchangePowderForItem_10


CeruleanCity_House5_EventScript_BerryCrushRankings::
# 84 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	lockall
# 85 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	special ShowBerryCrushRankings
# 86 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	releaseall
	end


CeruleanCity_House1_Text_AnyInterestInBerries::
# 90 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "I concoct a variety of medicine\n"
	.string "from BERRY POWDER.\p"
	.string "Using good BERRY POWDER, I can\n"
	.string "make any kind of medicine.\p"
	.string "Now tell me, have you any interest\n"
	.string "in BERRIES?$"

CeruleanCity_House1_Text_HaveJustTheThing::
# 101 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Ah, good! For you, then, I have\n"
	.string "just the thing.$"

CeruleanCity_House1_Text_GoCrushBerriesAtDirectCorner::
# 106 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "There's something new on the second\n"
	.string "floor of POKéMON CENTERS, at the\l"
	.string "DIRECT CORNER.\p"
	.string "They installed a Wireless Adapter\n"
	.string "machine for crushing BERRIES.\p"
	.string "This is where you come in.\p"
	.string "I have a favor to ask, one that\n"
	.string "I can entrust only to you.\p"
	.string "Could you make BERRY POWDER for\n"
	.string "me using that machine?\p"
	.string "Don't forget, the machine is at the\n"
	.string "DIRECT CORNER of POKéMON CENTERS.\p"
	.string "I'll concoct medicine for you if\n"
	.string "you bring me some BERRY POWDER.\p"
	.string "Don't forget, crush BERRIES into\n"
	.string "BERRY POWDER and bring it to me.$"

CeruleanCity_House1_Text_WhyMustYouLieNoBerries::
# 132 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Why must you lie to me?\p"
	.string "How many BERRIES do you have?\n"
	.string "Not a one!$"

CeruleanCity_House1_Text_TakeInterestInAllSortsOfThings::
# 139 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "You have no interest in BERRIES?\p"
	.string "Young one, it's important to take an\n"
	.string "interest in all sorts of things.$"

CeruleanCity_House1_Text_HaveYouBroughtBerryPowder::
# 146 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Er-hem! Have you brought me some\n"
	.string "BERRY POWDER?$"

CeruleanCity_House5_Text_ExchangeWithWhat::
# 151 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "With what would you like to \n"
	.string "exchange it?$"

CeruleanCity_House1_Text_YoullExchangeBerryPowderForItem::
# 156 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Fine, you'll exchange your BERRY\n"
	.string "POWDER for one {STR_VAR_1}?$"

CeruleanCity_House1_Text_DontHaveEnoughBerryPowder::
# 161 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Hm? You don't have enough\n"
	.string "BERRY POWDER.$"

CeruleanCity_House1_Text_TradeMoreBerryPowder::
# 166 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "This is fine BERRY POWDER indeed.\n"
	.string "It will make excellent medicine.\p"
	.string "Would you like to trade more BERRY\n"
	.string "POWDER for something else?$"

CeruleanCity_House1_Text_HopeToSeeYouAgain::
# 174 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "That's fine, then.\n"
	.string "I'll hope to see you back again.$"

CeruleanCity_House1_Text_SeeMeIfYoudLikeToTradePowder::
# 179 "data/maps/CeruleanCity_House5_Frlg/scripts.pory"
	.string "Come see me if you'd like to trade\n"
	.string "your BERRY POWDER.$"
