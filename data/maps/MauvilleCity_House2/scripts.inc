MauvilleCity_House2_MapScripts::
	.byte 0


MauvilleCity_House2_EventScript_Woman::
# 4 "data/maps/MauvilleCity_House2/scripts.pory"
	lock_faceplayer
# 5 "data/maps/MauvilleCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_COIN_CASE, MauvilleCity_House2_EventScript_Woman_2
# 9 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_BuyHarborMailAtSlateport, MSGBOX_DEFAULT
	checkmoney 1200
# 0 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_House2_EventScript_Woman_5
MauvilleCity_House2_EventScript_Woman_4:
	release_end

MauvilleCity_House2_EventScript_Woman_2:
# 6 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_UseCoinCaseAtGameCorner, MSGBOX_DEFAULT
	release_end

MauvilleCity_House2_EventScript_Woman_5:
# 11 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_TradeHarborMailForCoinCase, MSGBOX_YESNO
# 12 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_House2_EventScript_Woman_7
# 21 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_ThatsDisappointing, MSGBOX_DEFAULT
	goto MauvilleCity_House2_EventScript_Woman_4

MauvilleCity_House2_EventScript_Woman_7:
# 13 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_IllTradeYouCoinCase, MSGBOX_DEFAULT
	giveitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_House2_EventScript_Woman_11
MauvilleCity_House2_EventScript_Woman_10:
# 17 "data/maps/MauvilleCity_House2/scripts.pory"
	removemoney 1200
# 18 "data/maps/MauvilleCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_COIN_CASE
# 19 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_UseCoinCaseAtGameCorner, MSGBOX_DEFAULT
	goto MauvilleCity_House2_EventScript_Woman_4

MauvilleCity_House2_EventScript_Woman_11:
# 15 "data/maps/MauvilleCity_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_House2_EventScript_Woman_10


MauvilleCity_House2_Text_BuyHarborMailAtSlateport::
# 27 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "My husband has a huge gambling problem.\p"
	.string "I'd be willing to sell you his COIN CASE\n"
	.string "at a massive discount if you wanted.$"

MauvilleCity_House2_Text_TradeHarborMailForCoinCase::
# 34 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Okay, so you're interested?\n"
	.string "That'd really be a lifesaver!\p"
	.string "What would you say to ¥1200?$"

MauvilleCity_House2_Text_IllTradeYouCoinCase::
# 41 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Wonderful!\n"
	.string "Okay, here's the COIN CASE!$"

MauvilleCity_House2_Text_UseCoinCaseAtGameCorner::
# 46 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "You can use that COIN CASE at the GAME\n"
	.string "CORNER, but I'd be careful if I were you.\p"
	.string "It's really easy to get addicted and\n"
	.string "throw away a bunch of time and money.$"

MauvilleCity_House2_Text_ThatsDisappointing::
# 54 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Oh, that's disappointing.\n"
	.string "I really thought that was a steal.\p"
	.string "Would you at least put the word out\n"
	.string "that I'm trying to sell this thing?$"
