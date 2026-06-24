MauvilleCity_BikeShop_MapScripts::
	.byte 0


MauvilleCity_BikeShop_EventScript_Rydel::
# 4 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	lock_faceplayer
# 5 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE, MauvilleCity_BikeShop_EventScript_Rydel_2
# 16 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_unset FLAG_DECLINED_BIKE, MauvilleCity_BikeShop_EventScript_Rydel_5
MauvilleCity_BikeShop_EventScript_Rydel_4:
# 19 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 20 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_BikeShop_EventScript_Rydel_11
# 24 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_DECLINED_BIKE
# 25 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_GuessYouDontNeedBike, MSGBOX_DEFAULT
MauvilleCity_BikeShop_EventScript_Rydel_10:
	release_end

MauvilleCity_BikeShop_EventScript_Rydel_2:
# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_WantToSwitchBikes, MSGBOX_YESNO
# 7 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_BikeShop_EventScript_Rydel_8
MauvilleCity_BikeShop_EventScript_Rydel_7:
# 10 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MauvilleCity_BikeShop_EventScript_Rydel_15
	end

MauvilleCity_BikeShop_EventScript_Rydel_5:
# 17 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_RydelGreeting, MSGBOX_DEFAULT
	goto MauvilleCity_BikeShop_EventScript_Rydel_4

MauvilleCity_BikeShop_EventScript_Rydel_8:
# 8 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_SwitchBikes
	goto MauvilleCity_BikeShop_EventScript_Rydel_7

MauvilleCity_BikeShop_EventScript_Rydel_11:
# 21 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 22 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseBike
	goto MauvilleCity_BikeShop_EventScript_Rydel_10

MauvilleCity_BikeShop_EventScript_Rydel_15:
# 11 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HappyYouLikeIt, MSGBOX_DEFAULT
	release_end


MauvilleCity_BikeShop_EventScript_ChooseBike::
# 31 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne
# 32 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 33 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 21, 8, MULTI_BIKE, TRUE
# 34 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 35 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_ChooseBike_3
# 38 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_ChooseBike_4
MauvilleCity_BikeShop_EventScript_ChooseBike_1:
# 42 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_BikeShop_EventScript_ChooseBike_6
MauvilleCity_BikeShop_EventScript_ChooseBike_5:
# 45 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
	end

MauvilleCity_BikeShop_EventScript_ChooseBike_3:
# 36 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseMachBike, MSGBOX_DEFAULT
# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
	goto MauvilleCity_BikeShop_EventScript_ChooseBike_1

MauvilleCity_BikeShop_EventScript_ChooseBike_4:
# 39 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseAcroBike, MSGBOX_DEFAULT
# 40 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
	goto MauvilleCity_BikeShop_EventScript_ChooseBike_1

MauvilleCity_BikeShop_EventScript_ChooseBike_6:
# 43 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_BikeShop_EventScript_ChooseBike_5


MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes::
# 50 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes, MSGBOX_DEFAULT
# 51 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	special SwapRegisteredBike
	release_end


MauvilleCity_BikeShop_EventScript_SwitchBikes::
# 57 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_IllSwitchBikes, MSGBOX_DEFAULT
	checkitem ITEM_ACRO_BIKE
# 0 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_BikeShop_EventScript_SwitchBikes_2
	checkitem ITEM_MACH_BIKE
# 0 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_BikeShop_EventScript_SwitchBikes_3
# 70 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_OhYourBikeIsInPC, MSGBOX_DEFAULT
	release_end

MauvilleCity_BikeShop_EventScript_SwitchBikes_1:
# 73 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 74 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
	end

MauvilleCity_BikeShop_EventScript_SwitchBikes_2:
# 59 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedAcroForMach, MSGBOX_DEFAULT
# 60 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 61 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
	goto MauvilleCity_BikeShop_EventScript_SwitchBikes_1

MauvilleCity_BikeShop_EventScript_SwitchBikes_3:
# 65 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedMachForAcro, MSGBOX_DEFAULT
# 66 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 67 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
	goto MauvilleCity_BikeShop_EventScript_SwitchBikes_1


MauvilleCity_BikeShop_EventScript_Assistant::
# 79 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HandbooksAreInBack, MSGBOX_NPC
	end


MauvilleCity_BikeShop_EventScript_MachBikeHandbook::
# 84 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_MachHandbookWhichPage
# 85 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 86 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
	end


MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage::
# 91 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_MACH_BIKE_INFO, FALSE
# 92 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_3
# 94 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_4
# 95 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_5
# 96 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_6
# 97 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_6
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_1:
# 100 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 101 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
	end

MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_3:
# 93 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToRideMachBike
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_1

MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_4:
# 94 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToTurnMachBike
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_1

MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_5:
# 95 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_SandySlopes
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_1

MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage_6:
	release_end


MauvilleCity_BikeShop_EventScript_AcroBikeHandbook::
# 106 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_AcroHandbookWhichPage
# 107 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 108 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
	end


MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage::
# 113 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_ACRO_BIKE_INFO, FALSE
# 114 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_3
# 116 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_4
# 117 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_5
# 118 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_6
# 119 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_6
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_1:
# 122 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 123 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
	end

MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_3:
# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Wheelies
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_1

MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_4:
# 116 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_BunnyHops
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_1

MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_5:
# 117 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Jumps
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_1

MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage_6:
	release_end


MauvilleCity_BikeShop_Text_RydelGreeting::
# 127 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, well, what have we here?\n"
	.string "A most energetic customer!\p"
	.string "Me? You may call me RYDEL.\n"
	.string "I'm the owner of this cycle shop.$"

MauvilleCity_BikeShop_Text_DidYouComeFromFarAway::
# 135 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{SPEAKER NAME_RYDEL}Your RUNNING SHOES…\n"
	.string "They're awfully filthy.\p"
	.string "Did you come from far away?$"

MauvilleCity_BikeShop_Text_GuessYouDontNeedBike::
# 142 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{SPEAKER NAME_RYDEL}Is that right?\p"
	.string "Then, I guess you have no need for\n"
	.string "any of my BIKES.$"

MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne::
# 149 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{SPEAKER NAME_RYDEL}Hm, hm… … … … …\p"
	.string "You're saying that you came all this\n"
	.string "way from LITTLEROOT?\p"
	.string "My goodness!\n"
	.string "That's ridiculously far!\p"
	.string "If you had one of my BIKES, you could\n"
	.string "go anywhere easily while feeling the\l"
	.string "gentle caress of the wind!\p"
	.string "I'll tell you what!\n"
	.string "I'll give you a BIKE!\p"
	.string "Oh, wait a second!\p"
	.string "I forgot to tell you that there are\n"
	.string "two kinds of BIKES!\p"
	.string "They are the MACH BIKE and\n"
	.string "the ACRO BIKE!\p"
	.string "The MACH BIKE is for cyclists who want\n"
	.string "to feel the wind with their bodies!\p"
	.string "And an ACRO BIKE is for those who\n"
	.string "prefer technical rides!\p"
	.string "I'm a real sweetheart, so you can\n"
	.string "have whichever one you like!\p"
	.string "Which one will you choose?$"

MauvilleCity_BikeShop_Text_ChoseMachBike::
# 185 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the MACH BIKE.$"

MauvilleCity_BikeShop_Text_ChoseAcroBike::
# 189 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the ACRO BIKE.$"

MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes::
# 193 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{SPEAKER NAME_RYDEL}If you get the urge to switch\n"
	.string "BIKES, just come see me!$"

MauvilleCity_BikeShop_Text_WantToSwitchBikes::
# 198 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{SPEAKER NAME_RYDEL}Oh? Were you thinking about\n"
	.string "switching BIKES?$"

MauvilleCity_BikeShop_Text_IllSwitchBikes::
# 203 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{SPEAKER NAME_RYDEL}Okay, no problem!\n"
	.string "I'll switch BIKES for you!$"

MauvilleCity_BikeShop_Text_ExchangedMachForAcro::
# 208 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the MACH BIKE exchanged\n"
	.string "for an ACRO BIKE.$"

MauvilleCity_BikeShop_Text_ExchangedAcroForMach::
# 213 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the ACRO BIKE exchanged\n"
	.string "for a MACH BIKE.$"

MauvilleCity_BikeShop_Text_HappyYouLikeIt::
# 218 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{SPEAKER NAME_RYDEL}Good, good!\n"
	.string "I'm happy that you like it!$"

MauvilleCity_BikeShop_Text_OhYourBikeIsInPC::
# 223 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh? What happened to that BIKE\n"
	.string "I gave you?\p"
	.string "Oh, I get it, you stored it using your PC.\p"
	.string "Well, take it out of PC storage,\n"
	.string "and I'll be happy to exchange it!\p"
	.string "May the wind always be at your back\n"
	.string "on your adventure!$"

MauvilleCity_BikeShop_Text_HandbooksAreInBack::
# 236 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm learning about BIKES while\n"
	.string "I work here.\p"
	.string "If you need advice on how to ride your\n"
	.string "BIKE, there're a couple handbooks in\l"
	.string "the back.$"

MauvilleCity_BikeShop_Text_MachHandbookWhichPage::
# 245 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the MACH BIKE.\p"
	.string "Which page do you want to read?$"

MauvilleCity_BikeShop_Text_HowToRideMachBike::
# 251 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A BIKE moves in the direction that\n"
	.string "the + Control Pad is pressed.\p"
	.string "It will speed up once it gets rolling.\p"
	.string "To stop, release the + Control Pad.\n"
	.string "The BIKE will slow to a stop.\p"
	.string "Want to read a different page?$"

MauvilleCity_BikeShop_Text_HowToTurnMachBike::
# 263 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A MACH BIKE is speedy, but it can't\n"
	.string "stop very quickly.\p"
	.string "It gets a little tricky to get around\n"
	.string "a corner.\p"
	.string "Release the + Control Pad a little\n"
	.string "before the corner and slow down.\p"
	.string "Want to read a different page?$"

MauvilleCity_BikeShop_Text_SandySlopes::
# 276 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "There are small sandy slopes\n"
	.string "throughout the HOENN region.\p"
	.string "The loose, crumbly sand makes it\n"
	.string "impossible to climb normally.\p"
	.string "But if you have a MACH BIKE, you can\n"
	.string "zip up a sandy slope.\p"
	.string "Want to read a different page?$"

MauvilleCity_BikeShop_Text_AcroHandbookWhichPage::
# 289 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the ACRO BIKE.\p"
	.string "Which page do you want to read?$"

MauvilleCity_BikeShop_Text_Wheelies::
# 295 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button while riding,\n"
	.string "and the front wheel lifts up.\p"
	.string "You can zip around with the front\n"
	.string "wheel up using the + Control Pad.\p"
	.string "This technique is called a wheelie.\p"
	.string "Want to read a different page?$"

MauvilleCity_BikeShop_Text_BunnyHops::
# 307 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Keeping the B Button pressed,\n"
	.string "your BIKE can hop on the spot.\p"
	.string "This technique is called a bunny hop.\p"
	.string "You can ride while hopping, too.\p"
	.string "Want to read a different page?$"

MauvilleCity_BikeShop_Text_Jumps::
# 318 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button and the + Control\n"
	.string "Pad at the same time to jump.\p"
	.string "Press the + Control Pad to the side\n"
	.string "to jump sideways.\p"
	.string "Press it backwards to make the BIKE\n"
	.string "change directions while jumping.\p"
	.string "Want to read a different page?$"
