VermilionCity_House1_Frlg_MapScripts::
	.byte 0


VermilionCity_House1_EventScript_FishingGuru::
# 4 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_OLD_ROD, VermilionCity_House1_EventScript_FishingGuru_2
# 9 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish, MSGBOX_YESNO
# 10 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VermilionCity_House1_EventScript_FishingGuru_5
# 22 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_OhThatsSoDisappointing
	release_end

VermilionCity_House1_EventScript_FishingGuru_2:
# 6 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_HowAreTheFishBiting
	release_end

VermilionCity_House1_EventScript_FishingGuru_5:
	checkitemspace ITEM_OLD_ROD
# 0 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VermilionCity_House1_EventScript_FishingGuru_8
# 15 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	additem ITEM_OLD_ROD
# 16 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_TakeThisAndFish
# 17 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgreceiveditem VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru, ITEM_OLD_ROD
# 18 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	setflag FLAG_GOT_OLD_ROD
# 19 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_FishingIsAWayOfLife
	release_end

VermilionCity_House1_EventScript_FishingGuru_8:
# 12 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	msgbox VermilionCity_House1_Text_NoRoomForNiceGift
	release_end


VermilionCity_House1_Text_ImFishingGuruDoYouLikeToFish::
# 26 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "I'm the FISHING GURU!\p"
	.string "I simply looove fishing!\n"
	.string "I can't bear to go without.\p"
	.string "Tell me, do you like to fish?$"

VermilionCity_House1_Text_TakeThisAndFish::
# 35 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Grand! I like your style.\n"
	.string "I think we can be friends.\p"
	.string "Take this and fish, young friend!$"

VermilionCity_House1_Text_ReceivedOldRodFromFishingGuru::
# 42 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "{PLAYER} received an OLD ROD from\n"
	.string "the FISHING GURU.$"

VermilionCity_House1_Text_FishingIsAWayOfLife::
# 47 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Fishing is a way of life!\n"
	.string "It is like the finest poetry.\p"
	.string "From the seas to rivers, go out\n"
	.string "and land the big one, my friend.$"

VermilionCity_House1_Text_OhThatsSoDisappointing::
# 55 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Oh…\n"
	.string "That's so disappointing…$"

VermilionCity_House1_Text_HowAreTheFishBiting::
# 60 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Hello there, {PLAYER}!\p"
	.string "How are the fish biting?$"

VermilionCity_House1_Text_NoRoomForNiceGift::
# 66 "data/maps/VermilionCity_House1_Frlg/scripts.pory"
	.string "Oh, no!\p"
	.string "I had a nice gift for you, but you\n"
	.string "have no room for it!$"
