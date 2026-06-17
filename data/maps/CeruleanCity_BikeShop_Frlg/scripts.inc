CeruleanCity_BikeShop_Frlg_MapScripts::
	.byte 0


CeruleanCity_BikeShop_EventScript_Clerk::
# 4 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BICYCLE, CeruleanCity_BikeShop_EventScript_Clerk_2
# 8 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BIKE_VOUCHER, CeruleanCity_BikeShop_EventScript_Clerk_3
# 17 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	showmoneybox 0, 0
# 18 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	message CeruleanCity_BikeShop_Text_WelcomeToBikeShop
# 19 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	waitmessage
# 20 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	multichoice 11, 0, MULTI_BIKE_SHOP, FALSE
# 21 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	hidemoneybox
# 22 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	showmoneybox 0, 0
# 23 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CeruleanCity_BikeShop_EventScript_Clerk_8
CeruleanCity_BikeShop_EventScript_Clerk_7:
# 26 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_ThankYouComeAgain
# 27 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	hidemoneybox
CeruleanCity_BikeShop_EventScript_Clerk_1:
	release_end

CeruleanCity_BikeShop_EventScript_Clerk_2:
# 6 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_HowDoYouLikeNewBicycle
	goto CeruleanCity_BikeShop_EventScript_Clerk_1

CeruleanCity_BikeShop_EventScript_Clerk_3:
# 9 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_OhBikeVoucherHereYouGo
# 10 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgreceiveditem CeruleanCity_BikeShop_Text_ExchangedVoucherForBicycle, ITEM_BICYCLE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 11 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	setflag FLAG_GOT_BICYCLE
# 12 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	additem ITEM_BICYCLE
# 13 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	removeitem ITEM_BIKE_VOUCHER
# 14 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_ThankYouComeAgain
	goto CeruleanCity_BikeShop_EventScript_Clerk_1

CeruleanCity_BikeShop_EventScript_Clerk_8:
# 24 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_SorryYouCantAffordIt
	goto CeruleanCity_BikeShop_EventScript_Clerk_7


CeruleanCity_BikeShop_EventScript_NoRoomForBicycle::
# 34 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_MakeRoomForBicycle
	release_end


CeruleanCity_BikeShop_EventScript_Woman::
# 39 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_CityBikeGoodEnoughForMe, MSGBOX_NPC
	end


CeruleanCity_BikeShop_EventScript_Youngster::
# 44 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	lock_faceplayer
# 45 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BICYCLE, CeruleanCity_BikeShop_EventScript_Youngster_2
# 49 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_BikesCoolButExpensive
	release_end

CeruleanCity_BikeShop_EventScript_Youngster_2:
# 46 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_WowYourBikeIsCool
	release_end


CeruleanCity_BikeShop_EventScript_Bicycle::
# 54 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_ShinyNewBicycle, MSGBOX_SIGN
	end


CeruleanCity_BikeShop_Text_WelcomeToBikeShop::
# 58 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Hi!\n"
	.string "Welcome to our BIKE SHOP.\p"
	.string "Have we got just the BIKE for\n"
	.string "you!$"

CeruleanCity_BikeShop_Text_SorryYouCantAffordIt::
# 66 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Sorry!\n"
	.string "You can't afford it!$"

CeruleanCity_BikeShop_Text_OhBikeVoucherHereYouGo::
# 71 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Oh, that's…\p"
	.string "A BIKE VOUCHER!\p"
	.string "Okay!\n"
	.string "Here you go!$"

CeruleanCity_BikeShop_Text_ExchangedVoucherForBicycle::
# 80 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "{PLAYER} exchanged the\n"
	.string "BIKE VOUCHER for a BICYCLE.$"

CeruleanCity_BikeShop_Text_ThankYouComeAgain::
# 85 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Thank you!\n"
	.string "Come back again sometime!$"

CeruleanCity_BikeShop_Text_HowDoYouLikeNewBicycle::
# 90 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "How do you like your new BICYCLE?\n"
	.string "Do you like how it rides?\p"
	.string "You can take it out on CYCLING\n"
	.string "ROAD and even into caves!$"

CeruleanCity_BikeShop_Text_MakeRoomForBicycle::
# 98 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "You better make room for your\n"
	.string "BICYCLE!$"

CeruleanCity_BikeShop_Text_CityBikeGoodEnoughForMe::
# 103 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "A plain city bike is good enough\n"
	.string "for me.\p"
	.string "After all, you can't put a shopping\n"
	.string "basket on a mountain bike.$"

CeruleanCity_BikeShop_Text_BikesCoolButExpensive::
# 111 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "These bikes are cool, but they're\n"
	.string "way expensive!$"

CeruleanCity_BikeShop_Text_WowYourBikeIsCool::
# 116 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Wow.\n"
	.string "Your BIKE is really cool!$"

CeruleanCity_BikeShop_Text_GermanFoldableBicyleFinallyOnMarket::
# 122 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "ついに　はつばい！\p"
	.string "ドイツ　せい　さいこうきゅう\n"
	.string "おりたたみ　じてんしゃ！$"

CeruleanCity_BikeShop_Text_ShinyNewBicycle::
# 129 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "A shiny new BICYCLE!$"
