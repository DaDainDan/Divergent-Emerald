MauvilleCity_House2_MapScripts::
	.byte 0


MauvilleCity_House2_EventScript_Woman::
# 4 "data/maps/MauvilleCity_House2/scripts.pory"
	lock_faceplayer
# 5 "data/maps/MauvilleCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_COIN_CASE, MauvilleCity_House2_EventScript_Woman_2
# 9 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_BuyHarborMailAtSlateport, MSGBOX_DEFAULT
	checkitem ITEM_HARBOR_MAIL
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
	goto MauvilleCity_House2_EventScript_AskToTradeForHarborMail
	goto MauvilleCity_House2_EventScript_Woman_4


MauvilleCity_House2_EventScript_AskToTradeForHarborMail::
# 17 "data/maps/MauvilleCity_House2/scripts.pory"
	playse SE_PIN
# 18 "data/maps/MauvilleCity_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 19 "data/maps/MauvilleCity_House2/scripts.pory"
	waitmovement 0
# 20 "data/maps/MauvilleCity_House2/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 21 "data/maps/MauvilleCity_House2/scripts.pory"
	waitmovement 0
# 22 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_TradeHarborMailForCoinCase, MSGBOX_YESNO
# 23 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_House2_EventScript_AskToTradeForHarborMail_2
# 32 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_ThatsDisappointing, MSGBOX_DEFAULT
MauvilleCity_House2_EventScript_AskToTradeForHarborMail_1:
	release_end

MauvilleCity_House2_EventScript_AskToTradeForHarborMail_2:
# 24 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_IllTradeYouCoinCase, MSGBOX_DEFAULT
	giveitem ITEM_COIN_CASE
# 0 "data/maps/MauvilleCity_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_House2_EventScript_AskToTradeForHarborMail_6
MauvilleCity_House2_EventScript_AskToTradeForHarborMail_5:
# 28 "data/maps/MauvilleCity_House2/scripts.pory"
	removeitem ITEM_HARBOR_MAIL
# 29 "data/maps/MauvilleCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_COIN_CASE
# 30 "data/maps/MauvilleCity_House2/scripts.pory"
	msgbox MauvilleCity_House2_Text_UseCoinCaseAtGameCorner, MSGBOX_DEFAULT
	goto MauvilleCity_House2_EventScript_AskToTradeForHarborMail_1

MauvilleCity_House2_EventScript_AskToTradeForHarborMail_6:
# 26 "data/maps/MauvilleCity_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_House2_EventScript_AskToTradeForHarborMail_5


MauvilleCity_House2_Text_BuyHarborMailAtSlateport::
# 37 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "If I had a BIKE, it'd be easy to cycle to\n"
	.string "SLATEPORT for some shopping.\p"
	.string "I'd be able to buy HARBOR MAIL at the\n"
	.string "POKéMON MART in SLATEPORT…$"

MauvilleCity_House2_Text_TradeHarborMailForCoinCase::
# 45 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Oh! You have HARBOR MAIL?\n"
	.string "Will you trade it for a COIN CASE?$"

MauvilleCity_House2_Text_IllTradeYouCoinCase::
# 50 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Oh, I'm so happy!\n"
	.string "Okay, I'll trade you a COIN CASE!$"

MauvilleCity_House2_Text_UseCoinCaseAtGameCorner::
# 55 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "That COIN CASE can be used\n"
	.string "at the GAME CORNER.$"

MauvilleCity_House2_Text_ThatsDisappointing::
# 60 "data/maps/MauvilleCity_House2/scripts.pory"
	.string "Oh, that's disappointing.\p"
	.string "A COIN CASE is needed for the\n"
	.string "GAME CORNER.$"
