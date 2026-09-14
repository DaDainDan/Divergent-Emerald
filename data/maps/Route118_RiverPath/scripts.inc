Route118_RiverPath_MapScripts::
	.byte 0


Route118_RiverPath_EventScript_GoodRodFisherman::
# 4 "data/maps/Route118_RiverPath/scripts.pory"
	lock_faceplayer
# 5 "data/maps/Route118_RiverPath/scripts.pory"
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Route118_RiverPath_EventScript_GoodRodFisherman_2
# 9 "data/maps/Route118_RiverPath/scripts.pory"
	msgbox Route118_RiverPath_Text_YouAgreeGoodRodIsGood, MSGBOX_YESNO
# 10 "data/maps/Route118_RiverPath/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route118_RiverPath_EventScript_GoodRodFisherman_5
# 18 "data/maps/Route118_RiverPath/scripts.pory"
	msgbox Route118_RiverPath_Text_DontYouLikeToFish, MSGBOX_DEFAULT
Route118_RiverPath_EventScript_GoodRodFisherman_4:
	release_end

Route118_RiverPath_EventScript_GoodRodFisherman_2:
# 6 "data/maps/Route118_RiverPath/scripts.pory"
	msgbox Route118_RiverPath_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
	release_end

Route118_RiverPath_EventScript_GoodRodFisherman_5:
# 11 "data/maps/Route118_RiverPath/scripts.pory"
	msgbox Route118_RiverPath_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_GOOD_ROD
# 0 "data/maps/Route118_RiverPath/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route118_RiverPath_EventScript_GoodRodFisherman_9
Route118_RiverPath_EventScript_GoodRodFisherman_8:
# 15 "data/maps/Route118_RiverPath/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 16 "data/maps/Route118_RiverPath/scripts.pory"
	msgbox Route118_RiverPath_Text_TryYourLuckFishing, MSGBOX_DEFAULT
	goto Route118_RiverPath_EventScript_GoodRodFisherman_4

Route118_RiverPath_EventScript_GoodRodFisherman_9:
# 13 "data/maps/Route118_RiverPath/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route118_RiverPath_EventScript_GoodRodFisherman_8


Route118_RiverPath_EventScript_Cheyenne::
# 24 "data/maps/Route118_RiverPath/scripts.pory"
	trainerbattle_single TRAINER_CHEYENNE, Route118_RiverPath_Text_CheyenneIntro, Route118_RiverPath_Text_CheyenneDefeat, Route118_RiverPath_EventScript_Cheyenne_GiveConfuseRay
# 25 "data/maps/Route118_RiverPath/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CONFUSE_RAY, Route118_RiverPath_EventScript_Cheyenne_2
Route118_RiverPath_EventScript_Cheyenne_1:
# 28 "data/maps/Route118_RiverPath/scripts.pory"
	msgbox Route118_RiverPath_Text_CheyennePostBattle, MSGBOX_AUTOCLOSE
	end

Route118_RiverPath_EventScript_Cheyenne_2:
# 26 "data/maps/Route118_RiverPath/scripts.pory"
	goto Route118_RiverPath_EventScript_Cheyenne_GiveConfuseRay
	goto Route118_RiverPath_EventScript_Cheyenne_1


Route118_RiverPath_EventScript_Cheyenne_GiveConfuseRay::
# 33 "data/maps/Route118_RiverPath/scripts.pory"
	msgbox Route118_RiverPath_Text_DarkEnergy, MSGBOX_DEFAULT
# 34 "data/maps/Route118_RiverPath/scripts.pory"
	giveitem ITEM_TM_CONFUSE_RAY
# 35 "data/maps/Route118_RiverPath/scripts.pory"
	setflag FLAG_RECEIVED_TM_CONFUSE_RAY
	end


Route118_RiverPath_Text_YouAgreeGoodRodIsGood::
# 39 "data/maps/Route118_RiverPath/scripts.pory"
	.string "Hmm!\n"
	.string "A GOOD ROD is really good!\p"
	.string "Wouldn't you agree?$"

Route118_RiverPath_Text_IdenticalMindsTakeThis::
# 46 "data/maps/Route118_RiverPath/scripts.pory"
	.string "Hmm!\n"
	.string "We're of identical minds!\p"
	.string "Hmm!\n"
	.string "Take this GOOD ROD!$"

Route118_RiverPath_Text_TryYourLuckFishing::
# 54 "data/maps/Route118_RiverPath/scripts.pory"
	.string "Wherever there's water, try your luck\n"
	.string "at fishing.$"

Route118_RiverPath_Text_DontYouLikeToFish::
# 59 "data/maps/Route118_RiverPath/scripts.pory"
	.string "Don't you like to fish?$"

Route118_RiverPath_Text_TryCatchingMonWithGoodRod::
# 63 "data/maps/Route118_RiverPath/scripts.pory"
	.string "Try catching all sorts of POKéMON\n"
	.string "with your GOOD ROD.$"

Route118_RiverPath_Text_DarkEnergy::
# 68 "data/maps/Route118_RiverPath/scripts.pory"
	.string "There is clearly a twinge of dark energy\n"
	.string "within your heart.\p"
	.string "Perhaps, I should give you this.$"
