FuchsiaCity_House2_Frlg_MapScripts::
	.byte 0


FuchsiaCity_House2_EventScript_FishingGurusBrother::
# 4 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_GOOD_ROD, FuchsiaCity_House2_EventScript_FishingGurusBrother_2
# 9 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_DoYouLikeToFish, MSGBOX_YESNO
# 10 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FuchsiaCity_House2_EventScript_FishingGurusBrother_5
# 21 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_OhThatsDisappointing
	release_end

FuchsiaCity_House2_EventScript_FishingGurusBrother_2:
# 6 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_HowAreTheFishBiting
	release_end

FuchsiaCity_House2_EventScript_FishingGurusBrother_5:
# 11 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_LikeYourStyleTakeThis
	checkitemspace ITEM_GOOD_ROD
# 0 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FuchsiaCity_House2_EventScript_FishingGurusBrother_8
# 16 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	giveitem_msg FuchsiaCity_House2_Text_ReceivedGoodRod, ITEM_GOOD_ROD
# 17 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_GoodRodCanCatchBetterMons
# 18 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	setflag FLAG_GOT_GOOD_ROD
	release_end

FuchsiaCity_House2_EventScript_FishingGurusBrother_8:
# 13 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	msgbox FuchsiaCity_House2_Text_YouHaveNoRoomForGift
	release_end


FuchsiaCity_House2_Text_DoYouLikeToFish::
# 25 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "I'm the FISHING GURU's older\n"
	.string "brother.\p"
	.string "I simply looove fishing!\n"
	.string "I can't bear to go without.\p"
	.string "Tell me, do you like to fish?$"

FuchsiaCity_House2_Text_LikeYourStyleTakeThis::
# 35 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Grand! I like your style.\n"
	.string "I think we can be friends.\p"
	.string "Take this and fish, young friend!$"

FuchsiaCity_House2_Text_ReceivedGoodRod::
# 42 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "{PLAYER} received a GOOD ROD from\n"
	.string "the FISHING GURU's brother.$"

FuchsiaCity_House2_Text_GoodRodCanCatchBetterMons::
# 47 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Fishing is a way of life!\n"
	.string "It is like the finest poetry.\p"
	.string "A crummy OLD ROD could only catch\n"
	.string "MAGIKARP, yes?\p"
	.string "But with a GOOD ROD, you can\n"
	.string "catch much better POKéMON.$"

FuchsiaCity_House2_Text_OhThatsDisappointing::
# 58 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Oh…\n"
	.string "That's so disappointing…$"

FuchsiaCity_House2_Text_HowAreTheFishBiting::
# 63 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Hello there, {PLAYER}!\p"
	.string "How are the fish biting?$"

FuchsiaCity_House2_Text_YouHaveNoRoomForGift::
# 69 "data/maps/FuchsiaCity_House2_Frlg/scripts.pory"
	.string "Oh, no!\p"
	.string "I had a gift for you, but you have\n"
	.string "no room for it!$"
