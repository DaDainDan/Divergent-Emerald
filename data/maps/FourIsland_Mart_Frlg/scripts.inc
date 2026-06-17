FourIsland_Mart_Frlg_MapScripts::
	.byte 0


FourIsland_Mart_EventScript_Clerk::
# 4 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 7 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	pokemart FourIsland_Mart_Items
# 8 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 12 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
FourIsland_Mart_Items:
# 13 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 14 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 15 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_POTION
# 16 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 17 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 18 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 19 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 20 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

FourIsland_Mart_EventScript_Camper::
# 24 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	msgbox FourIsland_Mart_Text_IcefallCaveIsFrigid, MSGBOX_NPC
	end


FourIsland_Mart_Text_LoreleiGrewUpOnThisIsland::
# 28 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "We've had a great and powerful\n"
	.string "TRAINER grow up on this island.\p"
	.string "I bet even you'd know her.\n"
	.string "It's LORELEI of the ELITE FOUR!\p"
	.string "When LORELEI was just a tyke,\n"
	.string "I taught her about POKéMON.$"

FourIsland_Mart_Text_IcefallCaveIsFrigid::
# 39 "data/maps/FourIsland_Mart_Frlg/scripts.pory"
	.string "The SEVII ISLANDS are in a warm\n"
	.string "region overall.\p"
	.string "But there is one exception you\n"
	.string "need to know about.\p"
	.string "The ICEFALL CAVE is frigid because\n"
	.string "of the POKéMON that live in it.$"
