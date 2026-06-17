SevenIsland_Mart_Frlg_MapScripts::
	.byte 0


SevenIsland_Mart_EventScript_Clerk::
# 4 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 7 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	pokemart SevenIsland_Mart_Items
# 8 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 12 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
SevenIsland_Mart_Items:
# 13 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 14 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 15 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 16 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_POTION
# 17 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 18 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 19 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 20 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 21 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

SevenIsland_Mart_EventScript_Lass::
# 25 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	msgbox SevenIsland_Mart_Text_MonHavePersonalitiesOfTheirOwn, MSGBOX_NPC
	end


SevenIsland_Mart_EventScript_Hiker::
# 30 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	msgbox SevenIsland_Mart_Text_PreparationsCompleteForRuins, MSGBOX_NPC
	end


SevenIsland_Mart_EventScript_Fisher::
# 35 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	msgbox SevenIsland_Mart_Text_NeedToFishOnSevenIsland, MSGBOX_NPC
	end


SevenIsland_Mart_Text_MonHavePersonalitiesOfTheirOwn::
# 39 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "POKéMON have personalities of their\n"
	.string "own, just like people.\p"
	.string "My PIKACHU has a HASTY nature,\n"
	.string "so it grew to be a speedy POKéMON.$"

SevenIsland_Mart_Text_PreparationsCompleteForRuins::
# 47 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "Okay, preparations are complete\n"
	.string "for me to explore the RUINS.$"

SevenIsland_Mart_Text_NeedToFishOnSevenIsland::
# 52 "data/maps/SevenIsland_Mart_Frlg/scripts.pory"
	.string "I need to fish on SEVEN ISLAND.\p"
	.string "That will complete my fishing tour\n"
	.string "of the SEVII ISLANDS.\p"
	.string "I'd better stock up on some\n"
	.string "POKé BALLS first, though.$"
