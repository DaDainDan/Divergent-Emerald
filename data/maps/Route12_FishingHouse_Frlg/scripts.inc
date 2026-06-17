Route12_FishingHouse_Frlg_MapScripts::
	.byte 0


Route12_FishingHouse_EventScript_FishingGuruBrother::
# 4 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_SUPER_ROD, Route12_FishingHouse_EventScript_FishingGuruBrother_2
Route12_FishingHouse_EventScript_FishingGuruBrother_1:
# 8 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_DoYouLikeToFish, MSGBOX_YESNO
# 9 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route12_FishingHouse_EventScript_FishingGuruBrother_5
	checkitemspace ITEM_SUPER_ROD
# 0 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route12_FishingHouse_EventScript_FishingGuruBrother_6
# 16 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	additem ITEM_SUPER_ROD
# 17 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_TakeThisAndFish
# 18 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgreceiveditem Route12_FishingHouse_Text_ReceivedSuperRod, ITEM_SUPER_ROD
# 19 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_SUPER_ROD
# 20 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_IfYouCatchBigMagikarpShowMe
Route12_FishingHouse_EventScript_FishingGuruBrother_4:
	release_end

Route12_FishingHouse_EventScript_FishingGuruBrother_2:
# 6 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord
	goto Route12_FishingHouse_EventScript_FishingGuruBrother_1

Route12_FishingHouse_EventScript_FishingGuruBrother_5:
# 10 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_OhThatsDisappointing
	goto Route12_FishingHouse_EventScript_FishingGuruBrother_4

Route12_FishingHouse_EventScript_FishingGuruBrother_6:
# 13 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_NoRoomForGift
	goto Route12_FishingHouse_EventScript_FishingGuruBrother_4


Route12_FishingHouse_EventScript_CheckMagikarpRecord::
# 26 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_MAGIKARP
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 0 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route12_FishingHouse_EventScript_CheckMagikarpRecord_2
# 31 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special GetMagikarpSizeRecordInfo
# 32 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_OhMagikarpAllowMeToSee
# 33 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special ChoosePartyMon
# 34 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 35 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_lt Route12_FishingHouse_EventScript_CheckMagikarpRecord_5
Route12_FishingHouse_EventScript_CheckMagikarpRecord_4:
	release_end

Route12_FishingHouse_EventScript_CheckMagikarpRecord_2:
# 28 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_TryFishingBringMeMagikarp
	release_end

Route12_FishingHouse_EventScript_CheckMagikarpRecord_5:
# 36 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special CompareMagikarpSize
# 37 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route12_FishingHouse_EventScript_CheckMagikarpRecord_7
# 40 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route12_FishingHouse_EventScript_CheckMagikarpRecord_10
# 40 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Route12_FishingHouse_EventScript_CheckMagikarpRecord_10
Route12_FishingHouse_EventScript_CheckMagikarpRecord_9:
# 47 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_RECORD_SETTING_MAGIKARP
# 48 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_WhoaXInchesTakeThis
	giveitem ITEM_NET_BALL
# 0 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route12_FishingHouse_EventScript_CheckMagikarpRecord_20
# 53 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_LookForwardToGreaterRecords
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_4

Route12_FishingHouse_EventScript_CheckMagikarpRecord_7:
# 38 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_DoesntLookLikeMagikarp
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_4

Route12_FishingHouse_EventScript_CheckMagikarpRecord_8:
# 41 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	switch VAR_RESULT
# 42 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	case 2, Route12_FishingHouse_EventScript_CheckMagikarpRecord_17
# 43 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	case 4, Route12_FishingHouse_EventScript_CheckMagikarpRecord_18
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_4

Route12_FishingHouse_EventScript_CheckMagikarpRecord_10:
# 40 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_CheckMagikarpRecord_8
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_9

Route12_FishingHouse_EventScript_CheckMagikarpRecord_17:
# 42 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_HmmXInchesDoesntMeasureUp
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_4

Route12_FishingHouse_EventScript_CheckMagikarpRecord_18:
# 43 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_HuhXInchesSameSizeAsLast
	goto Route12_FishingHouse_EventScript_CheckMagikarpRecord_4

Route12_FishingHouse_EventScript_CheckMagikarpRecord_20:
# 50 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_NoRoomForGift
	release_end


Route12_FishingHouse_EventScript_MagikarpRecordSign::
# 60 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	lockall
# 61 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_MagikarpRecordSign_2
# 65 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_BlankChartOfSomeSort
Route12_FishingHouse_EventScript_MagikarpRecordSign_1:
# 67 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	releaseall
	end

Route12_FishingHouse_EventScript_MagikarpRecordSign_2:
# 62 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special GetMagikarpSizeRecordInfo
# 63 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_MostGiganticMagikarpXInches
	goto Route12_FishingHouse_EventScript_MagikarpRecordSign_1


Route12_FishingHouse_Text_DoYouLikeToFish::
# 71 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I'm the FISHING GURU's younger\n"
	.string "brother.\p"
	.string "I simply looove fishing!\n"
	.string "I can't bear to go without.\p"
	.string "Tell me, do you like to fish?$"

Route12_FishingHouse_Text_TakeThisAndFish::
# 81 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Grand! I like your style.\n"
	.string "I think we can be friends.\p"
	.string "Take this and fish, young friend!$"

Route12_FishingHouse_Text_ReceivedSuperRod::
# 88 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "{PLAYER} received a SUPER ROD from\n"
	.string "the FISHING GURU's brother.$"

Route12_FishingHouse_Text_IfYouCatchBigMagikarpShowMe::
# 93 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Fishing is a way of life!\n"
	.string "It is like the finest poetry.\p"
	.string "From the seas to rivers, go out\n"
	.string "and land the big one, my friend.\p"
	.string "Now, I have a request.\p"
	.string "If you catch a big MAGIKARP \n"
	.string "with that ROD, I want to see it.\p"
	.string "As much as I love to fish, I also\n"
	.string "love seeing gigantic MAGIKARP.$"

Route12_FishingHouse_Text_OhThatsDisappointing::
# 109 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Oh…\n"
	.string "That's so disappointing…$"

Route12_FishingHouse_Text_TryFishingBringMeMagikarp::
# 114 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Hello there, {PLAYER}!\n"
	.string "Have you been fishing?\p"
	.string "Try fishing with the SUPER ROD in\n"
	.string "any body of water.\p"
	.string "You'll find different POKéMON in\n"
	.string "different places.\p"
	.string "Oh, and don't forget to bring me\n"
	.string "gigantic MAGIKARP.$"

Route12_FishingHouse_Text_OhMagikarpAllowMeToSee::
# 128 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Oh? {PLAYER}?\n"
	.string "Why, if it isn't a MAGIKARP!\p"
	.string "Allow me to see it, quick!$"

Route12_FishingHouse_Text_WhoaXInchesTakeThis::
# 135 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "… … …Whoa!\n"
	.string "{STR_VAR_2} inches!\p"
	.string "You have a rare appreciation for\n"
	.string "the fine, poetic aspects of fishing!\p"
	.string "You must take this.\n"
	.string "I insist!$"

Route12_FishingHouse_Text_LookForwardToGreaterRecords::
# 146 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I'll look forward to seeing greater\n"
	.string "records from you!$"

Route12_FishingHouse_Text_HuhXInchesSameSizeAsLast::
# 151 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Huh?\n"
	.string "{STR_VAR_2} inches?\p"
	.string "This is the same size as the one\n"
	.string "I saw before.$"

Route12_FishingHouse_Text_HmmXInchesDoesntMeasureUp::
# 159 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Hmm…\n"
	.string "This one is {STR_VAR_2} inches long.\p"
	.string "It doesn't measure up to the\n"
	.string "{STR_VAR_3}-inch one you brought before.$"

Route12_FishingHouse_Text_DoesntLookLikeMagikarp::
# 167 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Uh… That doesn't look much like\n"
	.string "a MAGIKARP.$"

Route12_FishingHouse_Text_NoRoomForGift::
# 172 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Oh, no!\p"
	.string "I had a gift for you, but you have\n"
	.string "no room for it.$"

Route12_FishingHouse_Text_MostGiganticMagikarpXInches::
# 179 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "The most gigantic MAGIKARP\n"
	.string "I have ever witnessed…\p"
	.string "{STR_VAR_3} inches!$"

Route12_FishingHouse_Text_BlankChartOfSomeSort::
# 186 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "It's a blank chart of some sort.\p"
	.string "It has spaces for writing in\n"
	.string "records of some kind.$"
