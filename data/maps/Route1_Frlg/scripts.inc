Route1_Frlg_MapScripts::
	.byte 0


Route1_EventScript_MartClerk::
# 4 "data/maps/Route1_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/Route1_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_MartClerk_2
# 9 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_WorkAtPokeMartTakeSample
# 10 "data/maps/Route1_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
	checkitemspace ITEM_POTION
# 0 "data/maps/Route1_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route1_EventScript_MartClerk_5
Route1_EventScript_MartClerk_4:
# 14 "data/maps/Route1_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_POTION
# 15 "data/maps/Route1_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 16 "data/maps/Route1_Frlg/scripts.pory"
	message gText_ObtainedTheItem
# 17 "data/maps/Route1_Frlg/scripts.pory"
	waitmessage
# 18 "data/maps/Route1_Frlg/scripts.pory"
	waitfanfare
# 19 "data/maps/Route1_Frlg/scripts.pory"
	additem ITEM_POTION
# 20 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_PutPotionAway
# 21 "data/maps/Route1_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 22 "data/maps/Route1_Frlg/scripts.pory"
	setflag FLAG_GOT_POTION_ON_ROUTE_1
	release_end

Route1_EventScript_MartClerk_2:
# 6 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
	release_end

Route1_EventScript_MartClerk_5:
# 12 "data/maps/Route1_Frlg/scripts.pory"
	goto EventScript_BagIsFull
	goto Route1_EventScript_MartClerk_4


Route1_EventScript_Boy::
# 27 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
	end


Route1_EventScript_RouteSign::
# 32 "data/maps/Route1_Frlg/scripts.pory"
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
	end


Route1_Text_WorkAtPokeMartTakeSample::
# 36 "data/maps/Route1_Frlg/scripts.pory"
	.string "Hi!\n"
	.string "I work at a POKéMON MART.\p"
	.string "It's part of a convenient chain\n"
	.string "selling all sorts of items.\p"
	.string "Please, visit us in VIRIDIAN CITY.\p"
	.string "I know, I'll give you a sample.\n"
	.string "Here you go!$"

Route1_Text_ComeSeeUsIfYouNeedPokeBalls::
# 49 "data/maps/Route1_Frlg/scripts.pory"
	.string "Please come see us if you need\n"
	.string "POKé BALLS for catching POKéMON.$"

Route1_Text_PutPotionAway::
# 54 "data/maps/Route1_Frlg/scripts.pory"
	.string "{PLAYER} put the POTION away in\n"
	.string "the BAG's ITEMS POCKET.$"

Route1_Text_CanJumpFromLedges::
# 59 "data/maps/Route1_Frlg/scripts.pory"
	.string "See those ledges along the road?\p"
	.string "It's a bit scary, but you can jump\n"
	.string "from them.\p"
	.string "You can get back to PALLET TOWN\n"
	.string "quicker that way.$"

Route1_Text_RouteSign::
# 69 "data/maps/Route1_Frlg/scripts.pory"
	.string "ROUTE 1\n"
	.string "PALLET TOWN - VIRIDIAN CITY$"
