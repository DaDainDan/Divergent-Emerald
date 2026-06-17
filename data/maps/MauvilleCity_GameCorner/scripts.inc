MauvilleCity_GameCorner_MapScripts::
	.byte 0


MauvilleCity_GameCorner_EventScript_CoinsClerk::
# 15 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 16 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_CoinsClerk_2
# 21 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WereYouLookingForCoins
# 22 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 23 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showmoneybox 0, 0
# 24 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 6
# 25 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinAmount
	return

MauvilleCity_GameCorner_EventScript_CoinsClerk_2:
# 18 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins, MSGBOX_DEFAULT
	release_end


MauvilleCity_GameCorner_EventScript_ChooseCoinAmount::
# 29 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoicedefault 15, 0, MULTI_GAME_CORNER_COINS, 1, FALSE
# 30 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 31 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_3
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_4
# 34 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontNeedCoinsThen, MSGBOX_DEFAULT
# 35 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyCoinsEnd
MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_1:
# 37 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyCoins
	end

MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_3:
# 31 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setcurrencyexchange 1000, 50, COIN_LIMIT_50
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_1

MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_4:
# 32 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setcurrencyexchange 10000, 500, COIN_LIMIT_500
	goto MauvilleCity_GameCorner_EventScript_ChooseCoinAmount_1


MauvilleCity_GameCorner_EventScript_BuyCoins::
	checkcoins VAR_TEMP_1
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_1, VAR_0x8007
	goto_if_ge MauvilleCity_GameCorner_EventScript_BuyCoins_2
	checkmoney VAR_0x8008
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_BuyCoins_3
# 49 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins VAR_0x8009
# 50 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removemoney VAR_0x8008
# 51 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatemoneybox
# 52 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 6
# 53 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 54 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins, MSGBOX_DEFAULT
MauvilleCity_GameCorner_EventScript_BuyCoins_1:
# 56 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_BuyCoinsEnd
	end

MauvilleCity_GameCorner_EventScript_BuyCoins_2:
# 43 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinCaseIsFull, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_BuyCoins_1

MauvilleCity_GameCorner_EventScript_BuyCoins_3:
# 46 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_BuyCoins_1


MauvilleCity_GameCorner_EventScript_BuyCoinsEnd::
# 61 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidemoneybox
# 62 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 5
	release_end


MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
# 67 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 68 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_2
MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_1:
	release_end

MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_2:
# 70 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 71 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 72 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 73 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
	goto MauvilleCity_GameCorner_EventScript_PrizeCornerDolls_1


MauvilleCity_GameCorner_EventScript_ChooseDollPrize::
# 79 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_DOLLS, FALSE
# 80 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 81 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_3
# 82 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_4
# 83 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ChooseDollPrize_5
# 85 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1:
# 87 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_GIFT_ITEM
# 88 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize
	end

MauvilleCity_GameCorner_EventScript_ChooseDollPrize_3:
# 81 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_GIFT_ITEM, DECOR_TREECKO_DOLL
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1

MauvilleCity_GameCorner_EventScript_ChooseDollPrize_4:
# 82 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_GIFT_ITEM, DECOR_TORCHIC_DOLL
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1

MauvilleCity_GameCorner_EventScript_ChooseDollPrize_5:
# 83 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_GIFT_ITEM, DECOR_MUDKIP_DOLL
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize_1


MauvilleCity_GameCorner_EventScript_CancelDollSelect::
# 93 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 94 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
	release_end


MauvilleCity_GameCorner_EventScript_ConfirmDollPrize::
# 99 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsX, MSGBOX_YESNO
# 100 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_2
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_1:
	checkcoins VAR_TEMP_2
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, 1000
	goto_if_lt MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_5
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_4:
# 107 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, VAR_GIFT_ITEM
	checkdecorspace VAR_GIFT_ITEM
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_8
MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_7:
# 112 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins 1000
# 113 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	adddecoration VAR_GIFT_ITEM
# 114 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 115 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 116 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SendToYourHomePC, MSGBOX_DEFAULT
# 117 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	end

MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_2:
# 101 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelDollSelect
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_1

MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_5:
# 104 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
# 105 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_4

MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_8:
# 109 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 110 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize
	goto MauvilleCity_GameCorner_EventScript_ConfirmDollPrize_7


MauvilleCity_GameCorner_EventScript_ReturnToChooseDollPrize::
# 122 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 123 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 124 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseDollPrize
	return


MauvilleCity_GameCorner_EventScript_PrizeCornerTMs::
# 128 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 129 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes, MSGBOX_DEFAULT
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_2
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_1:
	release_end

MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_2:
# 131 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 132 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 133 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	showcoinsbox 1, 1
# 134 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
	goto MauvilleCity_GameCorner_EventScript_PrizeCornerTMs_1


MauvilleCity_GameCorner_EventScript_ChooseTMPrize::
# 140 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	multichoice 12, 0, MULTI_GAME_CORNER_TMS, FALSE
# 141 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 0, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_3
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 1, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_4
# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 2, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_5
# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 3, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_6
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 4, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_7
# 147 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case 5, MauvilleCity_GameCorner_EventScript_ChooseTMPrize_8
MauvilleCity_GameCorner_EventScript_ChooseTMPrize_8:
# 148 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1:
# 150 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	copyvar VAR_0x8004, VAR_GIFT_ITEM
# 151 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_GIFT_ITEM
# 152 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	special BufferTMHMMoveName
# 153 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX, MSGBOX_YESNO
# 154 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_ChooseTMPrize_10
MauvilleCity_GameCorner_EventScript_ChooseTMPrize_9:
# 157 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_PurchaseTM
	end

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_3:
# 142 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setitemandprice ITEM_TM_DOUBLE_TEAM, 1500
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_4:
# 143 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setitemandprice ITEM_TM_PSYCHIC, 3500
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_5:
# 144 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setitemandprice ITEM_TM_FLAMETHROWER, 4000
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_6:
# 145 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setitemandprice ITEM_TM_THUNDERBOLT, 4000
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_7:
# 146 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setitemandprice ITEM_TM_ICE_BEAM, 4000
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_1

MauvilleCity_GameCorner_EventScript_ChooseTMPrize_10:
# 155 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_CancelTMSelect
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize_9


MauvilleCity_GameCorner_EventScript_PurchaseTM::
	checkcoins VAR_TEMP_2
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_2, VAR_EXCHANGE_PRICE
	goto_if_lt MauvilleCity_GameCorner_EventScript_PurchaseTM_2
	checkitemspace VAR_GIFT_ITEM
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_PurchaseTM_3
# 169 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	removecoins VAR_EXCHANGE_PRICE
# 170 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	additem VAR_GIFT_ITEM
# 171 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	updatecoinsbox 1, 1
# 172 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
# 173 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo, MSGBOX_DEFAULT
MauvilleCity_GameCorner_EventScript_PurchaseTM_1:
# 175 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	message MauvilleCity_GameCorner_Text_WhichPrize
# 176 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	waitmessage
# 177 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_ChooseTMPrize
	end

MauvilleCity_GameCorner_EventScript_PurchaseTM_2:
# 163 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NotEnoughCoins, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_PurchaseTM_1

MauvilleCity_GameCorner_EventScript_PurchaseTM_3:
# 166 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_BagIsFull
	goto MauvilleCity_GameCorner_EventScript_PurchaseTM_1


MauvilleCity_GameCorner_EventScript_CancelTMSelect::
# 182 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_OhIsThatSo, MSGBOX_DEFAULT
# 183 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
	release_end


MauvilleCity_GameCorner_EventScript_Woman2::
# 188 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay, MSGBOX_NPC
	end


MauvilleCity_GameCorner_EventScript_Gentleman::
# 193 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
	end


MauvilleCity_GameCorner_EventScript_Girl::
# 198 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 199 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_Girl_2
# 203 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
# 204 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_GameCorner_EventScript_Girl_5
# 208 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	switch VAR_STARTER_MON
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case PC_CHOSE_TREECKO, MauvilleCity_GameCorner_EventScript_Girl_9
# 210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case PC_CHOSE_TORCHIC, MauvilleCity_GameCorner_EventScript_Girl_10
# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	case PC_CHOSE_MUDKIP, MauvilleCity_GameCorner_EventScript_Girl_11
MauvilleCity_GameCorner_EventScript_Girl_7:
# 213 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	bufferdecorationname STR_VAR_2, VAR_GIFT_ITEM
	checkdecorspace VAR_GIFT_ITEM
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_Girl_13
# 219 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
# 220 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	givedecoration VAR_GIFT_ITEM
# 221 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_STARTER_DOLL
# 222 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
	release_end

MauvilleCity_GameCorner_EventScript_Girl_2:
# 200 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
	release_end

MauvilleCity_GameCorner_EventScript_Girl_5:
# 205 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
	release_end

MauvilleCity_GameCorner_EventScript_Girl_9:
# 209 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_GIFT_ITEM, DECOR_TREECKO_DOLL
	goto MauvilleCity_GameCorner_EventScript_Girl_7

MauvilleCity_GameCorner_EventScript_Girl_10:
# 210 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_GIFT_ITEM, DECOR_TORCHIC_DOLL
	goto MauvilleCity_GameCorner_EventScript_Girl_7

MauvilleCity_GameCorner_EventScript_Girl_11:
# 211 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_GIFT_ITEM, DECOR_MUDKIP_DOLL
	goto MauvilleCity_GameCorner_EventScript_Girl_7

MauvilleCity_GameCorner_EventScript_Girl_13:
# 215 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 216 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
	release_end


MauvilleCity_GameCorner_EventScript_PokefanM::
# 227 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_GameCorner_EventScript_PokefanM_2
# 238 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor, MSGBOX_DEFAULT
MauvilleCity_GameCorner_EventScript_PokefanM_1:
# 240 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end

MauvilleCity_GameCorner_EventScript_PokefanM_2:
# 229 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_RECEIVED_20_COINS, MauvilleCity_GameCorner_EventScript_PokefanM_7
MauvilleCity_GameCorner_EventScript_PokefanM_6:
# 235 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_PokefanM_1

MauvilleCity_GameCorner_EventScript_PokefanM_5:
# 230 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setflag FLAG_RECEIVED_20_COINS
# 231 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	addcoins 20
# 232 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins, MSGBOX_DEFAULT
# 233 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playse SE_SHOP
	goto MauvilleCity_GameCorner_EventScript_PokefanM_1

MauvilleCity_GameCorner_EventScript_PokefanM_7:
	checkcoins VAR_TEMP_1
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq MauvilleCity_GameCorner_EventScript_PokefanM_5
	goto MauvilleCity_GameCorner_EventScript_PokefanM_6


MauvilleCity_GameCorner_EventScript_OldMan::
# 245 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 246 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates, MSGBOX_DEFAULT
# 247 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


MauvilleCity_GameCorner_EventScript_Cook::
# 252 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 253 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
# 254 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


MauvilleCity_GameCorner_EventScript_Man::
# 259 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 260 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
# 261 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


MauvilleCity_GameCorner_EventScript_Maniac::
# 266 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 267 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
# 268 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


MauvilleCity_GameCorner_EventScript_Woman::
# 273 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lock_faceplayer
# 274 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo, MSGBOX_DEFAULT
# 275 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


MauvilleCity_GameCorner_EventScript_SlotMachine0::
# 280 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 281 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 0
# 282 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine1::
# 287 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 288 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 289 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine2::
# 294 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 295 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 296 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine3::
# 301 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 302 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 303 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine4::
# 308 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 309 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 310 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine5::
# 315 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 316 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 5
# 317 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine6::
# 322 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 323 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 6
# 324 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine7::
# 329 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 330 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 7
# 331 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine8::
# 336 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 337 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 8
# 338 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine9::
# 343 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 344 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 9
# 345 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine10::
# 350 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 351 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 10
# 352 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachine11::
# 357 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	lockall
# 358 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 11
# 359 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain
	end


MauvilleCity_GameCorner_EventScript_SlotMachineMain::
	checkitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_GameCorner_EventScript_SlotMachineMain_2
# 367 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetSlotMachineId
# 368 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
MauvilleCity_GameCorner_EventScript_SlotMachineMain_1:
# 370 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	releaseall
	end

MauvilleCity_GameCorner_EventScript_SlotMachineMain_2:
# 365 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	msgbox MauvilleCity_GameCorner_Text_CantPlayWithNoCoinCase, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_SlotMachineMain_1


MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner::
# 374 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This is MAUVILLE GAME CORNER.$"

MauvilleCity_GameCorner_Text_NeedCoinCaseForCoins::
# 378 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Okay, you wanted some COINS for\n"
	.string "the games?\p"
	.string "But you don't have a COIN CASE for\n"
	.string "stowing the COINS.$"

MauvilleCity_GameCorner_Text_WereYouLookingForCoins::
# 386 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Were you looking for COINS?\p"
	.string "It's ¥1000 for 50 COINS.\n"
	.string "Would you like some?$"

MauvilleCity_GameCorner_Text_ThankYouHereAreYourCoins::
# 393 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you very much!\n"
	.string "Here are your COINS!$"

MauvilleCity_GameCorner_Text_DontHaveEnoughMoney::
# 398 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Um… You don't appear to have\n"
	.string "enough money…$"

MauvilleCity_GameCorner_Text_CoinCaseIsFull::
# 403 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh?\n"
	.string "Your COIN CASE is full.$"

MauvilleCity_GameCorner_Text_DontNeedCoinsThen::
# 408 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh… You don't need COINS, then?\n"
	.string "Good luck on your adventure!$"

MauvilleCity_GameCorner_Text_ExchangeCoinsForPrizes::
# 413 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Welcome.\p"
	.string "You can exchange your COINS for\n"
	.string "prizes here.$"

MauvilleCity_GameCorner_Text_WhichPrize::
# 420 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Which prize would you like?$"

MauvilleCity_GameCorner_Text_SoYourChoiceIsTheTMX::
# 424 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is\n"
	.string "the {STR_VAR_1} {STR_VAR_2}?$"

MauvilleCity_GameCorner_Text_SendToYourHomePC::
# 429 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Thank you!\n"
	.string "We'll send it to your PC at home.$"

MauvilleCity_GameCorner_Text_NotEnoughCoins::
# 434 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You don't have enough COINS.$"

MauvilleCity_GameCorner_Text_NoRoomForPlacingDecor::
# 438 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There isn't any room available for\n"
	.string "placing {STR_VAR_1}.$"

MauvilleCity_GameCorner_Text_OhIsThatSo::
# 443 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, is that so? \n"
	.string "You need to save some COINS before\l"
	.string "coming back here.$"

MauvilleCity_GameCorner_Text_SoYourChoiceIsX::
# 449 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "So your choice is {STR_VAR_1}?$"

MauvilleCity_GameCorner_Text_HereYouGo::
# 453 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"

MauvilleCity_GameCorner_Text_CantCarryAnyMore::
# 457 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, you can't carry any more than that.$"

MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne::
# 461 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "I made a mistake and got two of\n"
	.string "the same DOLLS.\p"
	.string "Would you like one of them?$"

MauvilleCity_GameCorner_Text_HereYouGo2::
# 468 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Here you go!$"

MauvilleCity_GameCorner_Text_YouWantItButNotNow::
# 472 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Huh?\n"
	.string "You want it, but not right now?$"

MauvilleCity_GameCorner_Text_DontBeNegative::
# 477 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Oh, don't be so negative!\n"
	.string "You can have this!$"

MauvilleCity_GameCorner_Text_CantWinJackpot::
# 482 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "There's a prize I want, but I can't win\n"
	.string "the jackpot.$"

MauvilleCity_GameCorner_Text_NeedCoinCaseGoNextDoor::
# 487 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Hey, kid, if you want to play here,\n"
	.string "you need a COIN CASE.\p"
	.string "I think the young lady next door\n"
	.string "had one. Go see her!$"

MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins::
# 495 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "My luck can only last so long.\n"
	.string "This is too much for me.\l"
	.string "Here, take some COINS!$"

MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone::
# 501 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "MAUVILLE has something for\n"
	.string "everyone.\p"
	.string "For me, it's the GAME CORNER.$"

MauvilleCity_GameCorner_Text_RouletteTablesDifferentRates::
# 508 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "The ROULETTE tables have different\n"
	.string "rates.\p"
	.string "Check your COINS if you're going to\n"
	.string "pick a table.$"

MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime::
# 516 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's easy to lose track of time in here. \n"
	.string "I should get back to work.$"

MauvilleCity_GameCorner_Text_CoinsAreNeededToPlay::
# 521 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "COINS are needed to play here\n"
	.string "in the GAME CORNER.$"

MauvilleCity_GameCorner_Text_RouletteOnlyLuck::
# 526 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "This ROULETTE thing…\n"
	.string "It's rather demanding.\p"
	.string "Win or lose, it's only by luck.$"

MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed::
# 533 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "Up to three COINS can be used to play\n"
	.string "the SLOTS.$"

MauvilleCity_GameCorner_Text_DifficultToStopOn7::
# 538 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "It's very difficult to make it stop\n"
	.string "right on “7.”\p"
	.string "If it stops on “7” during the REEL TIME\n"
	.string "bonus game, you'll receive extra COINS.$"

MauvilleCity_GameCorner_Text_HeresSomeSlotsInfo::
# 546 "data/maps/MauvilleCity_GameCorner/scripts.pory"
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
# 563 "data/maps/MauvilleCity_GameCorner/scripts.pory"
	.string "You can't play if you don't have\n"
	.string "a COIN CASE.$"
