BattleFrontier_ExchangeServiceCorner_MapScripts::
	.byte 0


BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome::
# 4 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
# 5 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowBattlePointsWindow
	return


BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye::
# 10 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints, MSGBOX_DEFAULT
# 11 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
	release_end


BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk1::
# 16 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock_faceplayer
# 17 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK
# 18 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 19 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	end


BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1::
# 24 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_1
# 25 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 26 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 27 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 28 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 29 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_3
# 30 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_4
# 31 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_5
# 32 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_6
# 33 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_7
# 34 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_8
# 35 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_9
# 36 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_10
# 37 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_11
# 38 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_12
# 39 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 10, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_13
# 40 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_13
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1:
# 44 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_3:
# 29 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_KISS_POSTER, 16
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_4:
# 30 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_KISS_CUSHION, 32
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_5:
# 31 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_SMOOCHUM_DOLL, 32
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_6:
# 32 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_TOGEPI_DOLL, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_7:
# 33 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_MEOWTH_DOLL, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_8:
# 34 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_CLEFAIRY_DOLL, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_9:
# 35 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_DITTO_DOLL, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_10:
# 36 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_CYNDAQUIL_DOLL, 80
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_11:
# 37 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_CHIKORITA_DOLL, 80
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_12:
# 38 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_TOTODILE_DOLL, 80
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1_13:
# 41 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end


BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor::
# 49 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_GIFT_ITEM
# 50 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
# 51 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor_2
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor_1:
# 57 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor_2:
# 52 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor_5
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor_4:
# 55 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor_1

BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor_5:
# 53 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor_4


BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk2::
# 62 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock_faceplayer
# 63 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK
# 64 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 65 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	end


BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2::
# 70 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_2
# 71 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 72 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 73 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 74 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 75 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_3
# 76 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_4
# 77 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_5
# 78 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_6
# 79 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_7
# 80 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_8
# 81 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_8
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_1:
# 85 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_3:
# 75 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_LAPRAS_DOLL, 128
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_4:
# 76 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_SNORLAX_DOLL, 128
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_5:
# 77 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_VENUSAUR_DOLL, 256
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_6:
# 78 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_CHARIZARD_DOLL, 256
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_7:
# 79 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice DECOR_BLASTOISE_DOLL, 256
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2_8:
# 82 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end


BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor::
	checkdecorspace VAR_GIFT_ITEM
# 0 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor_2
# 95 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	copyvar VAR_0x8004, VAR_EXCHANGE_PRICE
# 96 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special TakeFrontierBattlePoints
# 97 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	adddecoration VAR_GIFT_ITEM
# 98 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special UpdateBattlePointsWindow
# 99 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	playse SE_SHOP
# 100 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC, MSGBOX_DEFAULT
# 101 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor_5
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor_4:
# 104 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor_2:
# 91 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_PCIsFull, MSGBOX_DEFAULT
# 92 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
	release_end

BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor_5:
# 102 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor_4


BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize::
# 109 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 110 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_TEMP_1, VAR_EXCHANGE_PRICE
	goto_if_ge BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_2
# 119 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
# 120 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_TEMP_2
# 121 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_6
# 122 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_7
# 123 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_8
# 124 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case EXCHANGE_CORNER_HOLD_ITEM_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_9
BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_4:
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_2:
# 111 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_TEMP_2
# 112 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_12
# 113 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_12
# 114 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_13
# 115 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case EXCHANGE_CORNER_HOLD_ITEM_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_13
BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_10:
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_6:
# 121 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_4

BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_7:
# 122 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_4

BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_8:
# 123 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_4

BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_9:
# 124 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_4

BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_12:
# 113 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_10

BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_13:
# 115 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize_10


BattleFrontier_ExchangeServiceCorner_EventScript_VitaminClerk::
# 130 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock_faceplayer
# 131 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK
# 132 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 133 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	end


BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin::
# 138 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_VITAMIN_VENDOR
# 139 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 140 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 141 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 142 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 143 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_3
# 144 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_4
# 145 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_5
# 146 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_6
# 147 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_7
# 148 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_8
# 149 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_9
# 150 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_9
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1:
# 154 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseItem
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_3:
# 143 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_PROTEIN, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_4:
# 144 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_CALCIUM, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_5:
# 145 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_IRON, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_6:
# 146 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_ZINC, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_7:
# 147 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_CARBOS, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_8:
# 148 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_HP_UP, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin_9:
# 151 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end


BattleFrontier_ExchangeServiceCorner_EventScript_HoldItemClerk::
# 159 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock_faceplayer
# 160 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK
# 161 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 162 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	end


BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem::
# 167 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR
# 168 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 169 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 170 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 171 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 172 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_3
# 173 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_4
# 174 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_5
# 175 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_6
# 176 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_7
# 177 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_8
# 178 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_9
# 179 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_10
# 180 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_11
# 181 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_12
# 182 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_12
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1:
# 186 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseItem
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_3:
# 172 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_LEFTOVERS, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_4:
# 173 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_WHITE_HERB, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_5:
# 174 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_QUICK_CLAW, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_6:
# 175 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_MENTAL_HERB, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_7:
# 176 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_BRIGHT_POWDER, 64
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_8:
# 177 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_CHOICE_BAND, 64
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_9:
# 178 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_KINGS_ROCK, 64
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_10:
# 179 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_FOCUS_BAND, 64
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_11:
# 180 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setitemandprice ITEM_SCOPE_LENS, 64
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_1

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem_12:
# 183 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end


BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseItem::
# 191 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_GIFT_ITEM
# 192 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
# 193 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseItem_2
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseItem_1:
# 199 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
	end

BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseItem_2:
# 194 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseItem_5
BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseItem_4:
# 197 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseItem_1

BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseItem_5:
# 195 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseItem_4


BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem::
	checkitemspace VAR_GIFT_ITEM
# 0 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem_2
# 209 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	copyvar VAR_0x8004, VAR_EXCHANGE_PRICE
# 210 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special TakeFrontierBattlePoints
# 211 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	additem VAR_GIFT_ITEM
# 212 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special UpdateBattlePointsWindow
# 213 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	playse SE_SHOP
# 214 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize, MSGBOX_DEFAULT
# 215 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	compare VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK
	goto_if_eq BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem_5
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem_4:
# 218 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem_2:
# 205 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
# 206 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
	release_end

BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem_5:
# 216 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem_4


BattleFrontier_ExchangeServiceCorner_EventScript_Man::
# 223 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll, MSGBOX_NPC
	end


BattleFrontier_ExchangeServiceCorner_EventScript_Sailor::
# 228 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher, MSGBOX_NPC
	end


BattleFrontier_ExchangeServiceCorner_EventScript_PokefanF::
# 233 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 234 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant, MSGBOX_DEFAULT
	release_end


BattleFrontier_ExchangeServiceCorner_EventScript_RichBoy::
# 239 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls, MSGBOX_NPC
	end


BattleFrontier_ExchangeServiceCorner_EventScript_Girl::
# 244 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord, MSGBOX_NPC
	end


BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize::
# 248 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hello, this is the EXCHANGE SERVICE\n"
	.string "CORNER.\p"
	.string "We exchange the Battle Points you\n"
	.string "have collected for lovely prizes.\p"
	.string "Please choose a prize from this list.$"

BattleFrontier_ExchangeServiceCorner_Text_PleaseChoosePrize::
# 258 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Please choose a prize from this list.$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase::
# 262 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You've chosen the {STR_VAR_1}.\n"
	.string "Is that correct?$"

BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC::
# 267 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Thank you!\n"
	.string "We'll send it to your PC at home.$"

BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize::
# 272 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Here is your prize!$"

BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints::
# 276 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I'm so sorry…\n"
	.string "You don't have enough Battle Points…$"

BattleFrontier_ExchangeServiceCorner_Text_PCIsFull::
# 281 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I'm so sorry…\n"
	.string "Your PC appears to be full…$"

BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt::
# 286 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I'm so sorry…\n"
	.string "You don't have space to hold it…$"

BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints::
# 291 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Thank you very much.\p"
	.string "Please visit us when you have\n"
	.string "saved up Battle Points.$"

BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls::
# 298 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Oh, they're so nice!\n"
	.string "I wish I had them!\l"
	.string "Cute cushions!\l"
	.string "Big plush DOLLS!\l"
	.string "Little plush DOLLS!\l"
	.string "I wish I had them all!$"

BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant::
# 307 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Leave it to your mommy!\p"
	.string "If it's anything you want, I'll go\n"
	.string "through anything to get it, honey!$"

BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher::
# 314 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "If I can get hold of the items here,\n"
	.string "my POKéMON will get tougher.\p"
	.string "You bet they will!\n"
	.string "No question about it!$"

BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll::
# 322 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hah?\n"
	.string "What are you gawking at?\p"
	.string "I don't like you staring at my plush\n"
	.string "doll like that.\p"
	.string "If you want it, go get one yourself!\n"
	.string "Isn't that right, SMOOCHUM?$"

BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord::
# 333 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Did you know?\p"
	.string "If you stretch your record at any of\n"
	.string "the BATTLE facilities, they start\l"
	.string "giving you more and more Battle Points.$"

BattleFrontier_ExchangeServiceCorner_Text_KissPosterDesc::
# 341 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A large poster with a SMOOCHUM print.$"

BattleFrontier_ExchangeServiceCorner_Text_KissCushionDesc::
# 345 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A SMOOCHUM cushion.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_SmoochumDollDesc::
# 350 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A SMOOCHUM DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_TogepiDollDesc::
# 355 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A TOGEPI DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_MeowthDollDesc::
# 360 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A MEOWTH DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_ClefairyDollDesc::
# 365 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A CLEFAIRY DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_DittoDollDesc::
# 370 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A DITTO DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_CyndaquilDollDesc::
# 375 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A CYNDAQUIL DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_ChikoritaDollDesc::
# 380 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A CHIKORITA DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_TotodileDollDesc::
# 385 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A TOTODILE DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc::
# 390 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A large DOLL.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_ProteinDesc::
# 395 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat ATTACK of one\n"
	.string "POKéMON.$"

BattleFrontier_ExchangeServiceCorner_Text_CalciumDesc::
# 400 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat SP. ATK of one\n"
	.string "POKéMON.$"

BattleFrontier_ExchangeServiceCorner_Text_IronDesc::
# 405 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat DEFENSE of one\n"
	.string "POKéMON.$"

BattleFrontier_ExchangeServiceCorner_Text_ZincDesc::
# 410 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat SP. DEF of one\n"
	.string "POKéMON.$"

BattleFrontier_ExchangeServiceCorner_Text_CarbosDesc::
# 415 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat SPEED of one\n"
	.string "POKéMON.$"

BattleFrontier_ExchangeServiceCorner_Text_HPUpDesc::
# 420 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the HP of one POKéMON.$"

BattleFrontier_ExchangeServiceCorner_Text_LeftoversDesc::
# 424 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that gradually restores\n"
	.string "HP in battle.$"

BattleFrontier_ExchangeServiceCorner_Text_WhiteHerbDesc::
# 429 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that restores any\n"
	.string "lowered stat.$"

BattleFrontier_ExchangeServiceCorner_Text_QuickClawDesc::
# 434 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that occasionally allows\n"
	.string "the first strike.$"

BattleFrontier_ExchangeServiceCorner_Text_MentalHerbDesc::
# 439 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that snaps POKéMON out\n"
	.string "of infatuation.$"

BattleFrontier_ExchangeServiceCorner_Text_BrightpowderDesc::
# 444 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that casts a glare to\n"
	.string "reduce accuracy.$"

BattleFrontier_ExchangeServiceCorner_Text_ChoiceBandDesc::
# 449 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises a move's power, but permits\n"
	.string "only that move.$"

BattleFrontier_ExchangeServiceCorner_Text_KingsRockDesc::
# 454 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that may cause flinching\n"
	.string "when the foe is hit.$"

BattleFrontier_ExchangeServiceCorner_Text_FocusBandDesc::
# 459 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that occasionally\n"
	.string "prevents fainting.$"

BattleFrontier_ExchangeServiceCorner_Text_ScopeLensDesc::
# 464 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that raises the\n"
	.string "critical-hit rate.$"
