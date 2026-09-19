MauvilleCity_GameCorner_MapScripts::
	.byte 0


MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 13 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 14 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_EventScript_CoinsClerk_Text_0, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_CoinsClerk_2
# 34 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
# 35 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 36 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 37 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 0, 5
# 38 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinAmount
	end

MauvilleCity_GameCorner_EventScript_CoinsClerk_2:
# 17 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_YESNO
# 18 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_CoinsClerk_5
	checkmoney 5000
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_CoinsClerk_8
# 26 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney 5000
# 27 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
	giveitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_CoinsClerk_11
MauvilleCity_GameCorner_EventScript_CoinsClerk_10:
# 31 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EnjoyGameCorner, MSGBOX_DEFAULT
	release_end

MauvilleCity_GameCorner_EventScript_CoinsClerk_5:
# 19 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ReturnAnytime, MSGBOX_DEFAULT
	release_end

MauvilleCity_GameCorner_EventScript_CoinsClerk_8:
# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
	release_end

MauvilleCity_GameCorner_EventScript_CoinsClerk_11:
# 29 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_GameCorner_EventScript_CoinsClerk_10


MauvilleCity_GameCorner_EventScript_ChooseCoinAmount::
# 43 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 1, FALSE
# 44 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 45 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_3
# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_4
# 47 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_5
# 49 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
# 50 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 51 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox
	release_end

MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_1:
	checkcoins VAR_TEMP_1
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_1, VAR_0x8007
	goto_if_ge MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_8
	checkmoney VAR_0x8008
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_9
# 61 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins VAR_0x8009
# 62 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney VAR_0x8008
# 63 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 64 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox
# 65 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 66 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_7:
# 68 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_Text_0
# 69 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 70 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinAmount
	end

MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_3:
# 45 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setcurrencyexchange 2000, 100, COIN_LIMIT ( 100 )
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_1

MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_4:
# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setcurrencyexchange 10000, 500, COIN_LIMIT ( 500 )
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_1

MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_5:
# 47 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setcurrencyexchange 50000, 2500, COIN_LIMIT ( 2500 )
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_1

MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_8:
# 55 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_7

MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_9:
# 58 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_7


MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
# 75 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 76 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_2
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_1:
	release_end

MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_2:
# 78 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 79 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 80 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 0, 0
# 81 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
	goto MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_1


MauvilleCity_GameCorner_EventScript_ChooseDollPrize::
# 87 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_DOLLS, FALSE
# 88 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_3
# 90 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_4
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_5
# 92 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_6
# 93 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_7
# 95 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1:
# 97 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_GIFT_ITEM
# 98 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
	end

MauvilleCity_GameCorner_EventScript_ChooseDollPrize_3:
# 89 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setitemandprice DECOR_SEEDOT_DOLL, 500
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1

MauvilleCity_GameCorner_EventScript_ChooseDollPrize_4:
# 90 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setitemandprice DECOR_LOTAD_DOLL, 500
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1

MauvilleCity_GameCorner_EventScript_ChooseDollPrize_5:
# 91 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setitemandprice DECOR_TREECKO_DOLL, 1000
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1

MauvilleCity_GameCorner_EventScript_ChooseDollPrize_6:
# 92 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setitemandprice DECOR_TORCHIC_DOLL, 1000
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1

MauvilleCity_GameCorner_EventScript_ChooseDollPrize_7:
# 93 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setitemandprice DECOR_MUDKIP_DOLL, 1000
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1


MauvilleCity_GameCorner_EventScript_CancelDollSelect::
# 103 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox
	release_end


MauvilleCity_GameCorner_EventScript_ConfirmDollPrize::
# 109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsX, MSGBOX_YESNO
# 110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_2
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_1:
	checkcoins VAR_TEMP_2
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, VAR_EXCHANGE_PRICE
	goto_if_lt MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_5
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_4:
# 117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, VAR_GIFT_ITEM
	checkdecorspace VAR_GIFT_ITEM
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_8
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_7:
# 122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins VAR_EXCHANGE_PRICE
# 123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration VAR_GIFT_ITEM
# 124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox
# 125 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 126 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 127 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end

MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_2:
# 111 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_1

MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_5:
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_4

MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_8:
# 119 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 120 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_7


MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize::
# 132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
	return


MauvilleCity_GameCorner_EventScript_PrizeCornerTMs::
# 138 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 139 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_2
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_1:
	release_end

MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_2:
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 0, 0
# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
	goto MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_1


MauvilleCity_GameCorner_EventScript_ChooseTMPrize::
# 150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_TMS, FALSE
# 151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_3
# 153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_4
# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_5
# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_6
# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_7
# 157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_8
MauvilleCity_GameCorner_EventScript_ChooseTMPrize_8:
# 158 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1:
# 160 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_0x8004, VAR_GIFT_ITEM
# 161 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_GIFT_ITEM
# 162 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 164 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_ChooseTMPrize_10
MauvilleCity_GameCorner_EventScript_ChooseTMPrize_9:
# 167 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PurchaseTM
	end

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_3:
# 152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setitemandprice ITEM_TM_ENERGY_BALL, 3000
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_4:
# 153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setitemandprice ITEM_TM_AURA_SPHERE, 3000
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_5:
# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setitemandprice ITEM_TM_SLUDGE_BOMB, 3000
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_6:
# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setitemandprice ITEM_TM_POLLEN_PUFF, 3000
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_7:
# 156 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setitemandprice ITEM_TM_SHADOW_BALL, 3000
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_10:
# 165 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_9


MauvilleCity_GameCorner_EventScript_PurchaseTM::
	checkcoins VAR_TEMP_2
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, VAR_EXCHANGE_PRICE
	goto_if_lt MauvilleCity_GameCorner_EventScript_PurchaseTM_2
	checkitem VAR_GIFT_ITEM
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_GameCorner_EventScript_PurchaseTM_3
# 179 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins VAR_EXCHANGE_PRICE
# 180 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_GIFT_ITEM
# 181 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox
# 182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
MauvilleCity_GameCorner_EventScript_PurchaseTM_1:
# 185 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 186 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 187 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
	end

MauvilleCity_GameCorner_EventScript_PurchaseTM_2:
# 173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_PurchaseTM_1

MauvilleCity_GameCorner_EventScript_PurchaseTM_3:
# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
	goto MauvilleCity_GameCorner_EventScript_PurchaseTM_1


MauvilleCity_GameCorner_EventScript_CancelTMSelect::
# 192 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox
	release_end


MauvilleCity_GameCorner_EventScript_Woman2::
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_YESNO
# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_Woman2_2
	checkcoins VAR_TEMP_2
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, 250
	goto_if_lt MauvilleCity_GameCorner_EventScript_Woman2_5
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 250
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThanksSweetums, MSGBOX_DEFAULT
# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CHARM, MauvilleCity_GameCorner_EventScript_Woman2_8
MauvilleCity_GameCorner_EventScript_Woman2_7:
	release_end

MauvilleCity_GameCorner_EventScript_Woman2_2:
# 201 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_WhatABuzzkill, MSGBOX_DEFAULT
	release_end

MauvilleCity_GameCorner_EventScript_Woman2_5:
# 205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_Brokie, MSGBOX_DEFAULT
	release_end

MauvilleCity_GameCorner_EventScript_Woman2_8:
# 212 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GiftFromSweetCheeks, MSGBOX_DEFAULT
# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	giveitem ITEM_TM_CHARM
# 214 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_TM_CHARM
	goto MauvilleCity_GameCorner_EventScript_Woman2_7


MauvilleCity_GameCorner_EventScript_Gentleman::
# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
	end


MauvilleCity_GameCorner_EventScript_Girl::
# 225 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 226 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_Girl_2
MauvilleCity_GameCorner_EventScript_Girl_1:
# 247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
	release_end

MauvilleCity_GameCorner_EventScript_Girl_2:
# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
# 228 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_Girl_5
# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_STARTER_MON
# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case PC_CHOSE_TREECKO, MauvilleCity_GameCorner_EventScript_Girl_9
# 234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case PC_CHOSE_TORCHIC, MauvilleCity_GameCorner_EventScript_Girl_10
# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case PC_CHOSE_MUDKIP, MauvilleCity_GameCorner_EventScript_Girl_11
MauvilleCity_GameCorner_EventScript_Girl_7:
# 237 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, VAR_GIFT_ITEM
	checkdecorspace VAR_GIFT_ITEM
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_Girl_13
# 243 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 244 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration VAR_GIFT_ITEM
# 245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
	goto MauvilleCity_GameCorner_EventScript_Girl_1

MauvilleCity_GameCorner_EventScript_Girl_5:
# 229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
	release_end

MauvilleCity_GameCorner_EventScript_Girl_9:
# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_GIFT_ITEM, DECOR_TREECKO_DOLL
	goto MauvilleCity_GameCorner_EventScript_Girl_7

MauvilleCity_GameCorner_EventScript_Girl_10:
# 234 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_GIFT_ITEM, DECOR_TORCHIC_DOLL
	goto MauvilleCity_GameCorner_EventScript_Girl_7

MauvilleCity_GameCorner_EventScript_Girl_11:
# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_GIFT_ITEM, DECOR_MUDKIP_DOLL
	goto MauvilleCity_GameCorner_EventScript_Girl_7

MauvilleCity_GameCorner_EventScript_Girl_13:
# 239 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
	release_end


MauvilleCity_GameCorner_EventScript_PokefanM::
# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_GameCorner_EventScript_PokefanM_2
# 265 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
MauvilleCity_GameCorner_EventScript_PokefanM_1:
# 267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end

MauvilleCity_GameCorner_EventScript_PokefanM_2:
# 254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_LOADED_DICE, MauvilleCity_GameCorner_EventScript_PokefanM_5
	checkcoins VAR_TEMP_1
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_1, 5000
	goto_if_lt MauvilleCity_GameCorner_EventScript_PokefanM_5
# 258 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
	giveitem ITEM_LOADED_DICE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_PokefanM_11
MauvilleCity_GameCorner_EventScript_PokefanM_10:
# 262 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_LOADED_DICE
	goto MauvilleCity_GameCorner_EventScript_PokefanM_1

MauvilleCity_GameCorner_EventScript_PokefanM_5:
# 255 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_PokefanM_1

MauvilleCity_GameCorner_EventScript_PokefanM_11:
# 260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_GameCorner_EventScript_PokefanM_10


MauvilleCity_GameCorner_EventScript_OldMan::
# 272 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
# 274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


MauvilleCity_GameCorner_EventScript_Cook::
# 279 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
# 281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


MauvilleCity_GameCorner_EventScript_Man::
# 286 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
# 288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


MauvilleCity_GameCorner_EventScript_Maniac::
# 293 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


MauvilleCity_GameCorner_EventScript_Woman::
# 300 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
# 302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


MauvilleCity_GameCorner_EventScript_SlotMachine0::
# 307 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine1::
# 314 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine2::
# 321 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine3::
# 328 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine4::
# 335 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine5::
# 342 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine6::
# 349 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine7::
# 356 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine8::
# 363 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 364 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine9::
# 370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 371 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 372 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine10::
# 377 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 379 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine11::
# 384 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 385 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachineMain::
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachineMain_2
# 394 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 395 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
MauvilleCity_GameCorner_EventScript_SlotMachineMain_1:
# 397 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachineMain_2:
# 392 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain_1


MauvilleCity_GameCorner_EventScript_PrizeCornerMons::
# 402 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_GameCorner_EventScript_PrizeCornerMons_2
MauvilleCity_GameCorner_EventScript_PrizeCornerMons_1:
	release_end

MauvilleCity_GameCorner_EventScript_PrizeCornerMons_2:
# 405 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 406 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 407 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, 0
# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 0, 0
# 409 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon
	goto MauvilleCity_GameCorner_EventScript_PrizeCornerMons_1


MauvilleCity_GameCorner_EventScript_ReturnToChoosePrizeMon::
# 415 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 416 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 417 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon
	return


MauvilleCity_GameCorner_EventScript_ChoosePrizeMon::
# 421 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_MONS, FALSE
# 422 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 423 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_3
# 426 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_4
# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_5
# 432 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_6
# 435 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_7
# 439 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelMonSelect
MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_1:
# 441 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 442 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmonpic VAR_TEMP_TRANSFERRED_SPECIES, 10, 3
# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsX, MSGBOX_YESNO
# 444 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_10
MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_9:
# 447 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemonpic
	checkcoins VAR_RESULT
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, VAR_EXCHANGE_PRICE
	goto_if_lt MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_13
MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_12:
# 452 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_TEMP_TRANSFERRED_SPECIES
# 453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_VANILLITE, MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_17
# 454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_VAROOM, MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_18
# 455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_DITTO, MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_19
# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_PORYGON, MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_20
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case SPECIES_ROTOM, MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_21
MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_15:
# 459 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_0x8006, VAR_RESULT
# 460 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_23
# 465 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins VAR_EXCHANGE_PRICE
# 466 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox
# 467 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_Text_0
# 470 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 471 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitfanfare
# 472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 473 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_0x8006
# 474 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case MON_GIVEN_TO_PARTY, MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_27
# 479 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case MON_GIVEN_TO_PC, MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_28
MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_25:
# 485 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChoosePrizeMon
	end

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_3:
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_VANILLITE
# 425 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_EXCHANGE_PRICE, 500
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_1

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_4:
# 427 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_VAROOM
# 428 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_EXCHANGE_PRICE, 1500
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_1

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_5:
# 430 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DITTO
# 431 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_EXCHANGE_PRICE, 2500
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_1

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_6:
# 433 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PORYGON
# 434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_EXCHANGE_PRICE, 5000
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_1

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_7:
# 436 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ROTOM
# 437 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_EXCHANGE_PRICE, 5000
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_1

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_10:
# 445 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelMonSelect
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_9

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_13:
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 450 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChoosePrizeMon
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_12

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_17:
# 453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_VANILLITE, 8, ITEM_ICE_STONE
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_15

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_18:
# 454 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_VAROOM, 15
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_15

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_19:
# 455 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_DITTO, 20
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_15

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_20:
# 456 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_PORYGON, 25
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_15

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_21:
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givemon SPECIES_ROTOM, 25
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_15

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_23:
# 461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox gText_NoMoreRoomForPokemon
# 462 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox
	release_end

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_27:
# 475 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_29
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_25

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_28:
# 480 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_32
MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_31:
# 483 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_25

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_29:
# 476 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_25

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_32:
# 481 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_31


MauvilleCity_GameCorner_EventScript_CancelMonSelect::
# 490 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemonpic
# 491 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 492 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox
	release_end


MauvilleCity_GameCorner_EventScript_CoinsClerk_Text_0:
# 14 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome to MAUVILLE GAME CORNER!\n"
	.string "I'm the GAME CORNER's CASHIER!$"

MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_Text_0:
# 68 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Would you like any more COINS?$"

MauvilleCity_GameCorner_EventScript_ChoosePrizeMon_Text_0:
# 469 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1}!$"

MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner::
# 497 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is MAUVILLE GAME CORNER.$"

MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins::
# 501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm terribly sorry, but a COIN CASE\n"
	.string "is required to be served here.\p"
	.string "We offer COIN CASES for ¥10000.\p"
	.string "Would you like to purchase one?$"

MauvilleCity_GameCorner_Text_ReturnAnytime::
# 510 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry to hear that.\p"
	.string "Please come back anytime if you change\n"
	.string "your mind.$"

MauvilleCity_GameCorner_Text_EnjoyGameCorner::
# 517 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Now that you have a COIN CASE,\n"
	.string "you may be served.\p"
	.string "Please enjoy your time at MAUVILLE\n"
	.string "GAME CORNER!$"

MauvilleCity_GameCorner_Text_WereYouLookingForCoins::
# 525 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking to purchase COINS?\p"
	.string "The minimum is ¥2000 for 100 COINS.$"

MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins::
# 531 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you very much!\n"
	.string "Here are your COINS!$"

MauvilleCity_GameCorner_Text_DontHaveEnoughMoney::
# 536 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I'm sorry. \n"
	.string "You don't have the requisite funds.$"

MauvilleCity_GameCorner_Text_CoinCaseIsFull::
# 541 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
	.string "Your COIN CASE is full.$"

MauvilleCity_GameCorner_Text_DontNeedCoinsThen::
# 546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… You don't need COINS, then?\n"
	.string "Good luck on your adventure!$"

MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes::
# 551 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
	.string "You can exchange your COINS for\n"
	.string "prizes here.$"

MauvilleCity_GameCorner_Text_WhichPrize::
# 558 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which prize would you like?$"

MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX::
# 562 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
	.string "the {STR_VAR_1} {STR_VAR_2}?$"

MauvilleCity_GameCorner_Text_SendToYourHomePC::
# 567 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you!\n"
	.string "We'll send it to your PC at home.$"

MauvilleCity_GameCorner_Text_NotEnoughCoins::
# 572 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS.$"

MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor::
# 576 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There isn't any room available for\n"
	.string "placing {STR_VAR_1}.$"

MauvilleCity_GameCorner_Text_OhIsThatSo::
# 581 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, is that so? \n"
	.string "You need to save some COINS before\l"
	.string "coming back here.$"

MauvilleCity_GameCorner_Text_SoYourChoiceIsX::
# 587 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"

MauvilleCity_GameCorner_Text_HereYouGo::
# 591 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"

MauvilleCity_GameCorner_Text_CantCarryAnyMore::
# 595 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, you can't carry any more than that.$"

MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne::
# 599 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I made a mistake and got two of\n"
	.string "the same DOLLS.\p"
	.string "Would you like one of them?$"

MauvilleCity_GameCorner_Text_HereYouGo2::
# 606 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"

MauvilleCity_GameCorner_Text_YouWantItButNotNow::
# 610 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh?\n"
	.string "You want it, but not right now?$"

MauvilleCity_GameCorner_Text_DontBeNegative::
# 615 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, don't be so negative!\n"
	.string "You can have this!$"

MauvilleCity_GameCorner_Text_CantWinJackpot::
# 620 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There's a prize I want, but I can't win\n"
	.string "the jackpot.$"

MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor::
# 625 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, kid, if you want to play here,\n"
	.string "you need a COIN CASE.\p"
	.string "I think the young lady next door\n"
	.string "had one. Go see her!$"

MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone::
# 633 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "MAUVILLE has something for\n"
	.string "everyone.\p"
	.string "For me, it's the GAME CORNER.$"

MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates::
# 640 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The ROULETTE tables have different\n"
	.string "rates.\p"
	.string "Check your COINS if you're going to\n"
	.string "pick a table.$"

MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime::
# 648 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's easy to lose track of time in here. \n"
	.string "I should get back to work.$"

MauvilleCity_GameCorner_Text_RouletteOnlyLuck::
# 653 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This ROULETTE thing…\n"
	.string "It's rather demanding.\p"
	.string "Win or lose, it's only by luck.$"

MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed::
# 660 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Up to three COINS can be used to play\n"
	.string "the SLOTS.$"

MauvilleCity_GameCorner_Text_DifficultToStopOn7::
# 665 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's very difficult to make it stop\n"
	.string "right on “7.”\p"
	.string "If it stops on “7” during the REEL TIME\n"
	.string "bonus game, you'll receive extra COINS.$"

MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo::
# 673 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here's some information for you\n"
	.string "about the SLOTS.\p"
	.string "The more lightning bolts you stock,\n"
	.string "the more REEL TIME chances you get.\p"
	.string "In a game with the maximum five\n"
	.string "REEL TIME chances…\p"
	.string "It is possible to receive four regular\n"
	.string "bonuses, then a big bonus.\p"
	.string "That would total 660 COINS, but it's\n"
	.string "very difficult to get.$"

MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase::
# 690 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can't play if you don't have\n"
	.string "a COIN CASE.$"

MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay::
# 695 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, hon!!!\p"
	.string "Could you spare 250 COINS for a super\n"
	.string "cute girl like me?\p"
	.string "Pretty please?\n"
	.string "I think someone stole my purse.$"

MauvilleCity_GameCorner_Text_Brokie::
# 705 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "If you were a brokie, you should have\n"
	.string "just said so, hon!\p"
	.string "I'll pray that you stop being a loser!\n"
	.string "Okay!?$"

MauvilleCity_GameCorner_Text_WhatABuzzkill::
# 713 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Geez, you're such a buzzkill.\n"
	.string "Why couldn't you just help a girl out?$"

MauvilleCity_GameCorner_Text_ThanksSweetums::
# 718 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh my, thank you so much, sweetums.\n"
	.string "I'll surely win big this time.$"

MauvilleCity_GameCorner_Text_GiftFromSweetCheeks::
# 723 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You're so cute and sweet that I think\n"
	.string "I'll give you a gift.\p"
	.string "I think you might learn a lot from it.$"

MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins::
# 730 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Wow, that's a lot of COINS you've got.\n"
	.string "So, you're a high roller, are you?\p"
	.string "Why don't you take these special dice.\n"
	.string "Guys like us gotta look out for each\l"
	.string "other, don't ya know?$"
