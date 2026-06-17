CinnabarIsland_Mart_Frlg_MapScripts::
	.byte 0


CinnabarIsland_Mart_EventScript_Woman::
# 4 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	msgbox CinnabarIsland_Mart_Text_DontTheyHaveXAttack, MSGBOX_NPC
	end


CinnabarIsland_Mart_EventScript_Scientist::
# 9 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	msgbox CinnabarIsland_Mart_Text_ExtraItemsNeverHurt, MSGBOX_NPC
	end


CinnabarIsland_Mart_EventScript_Clerk::
# 14 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	lock_faceplayer
# 15 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 16 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 17 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	pokemart CinnabarIsland_Mart_Items
# 18 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 22 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
CinnabarIsland_Mart_Items:
# 23 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 24 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 25 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 26 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 27 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 28 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 29 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

CinnabarIsland_Mart_Text_DontTheyHaveXAttack::
# 32 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.string "Don't they have X ATTACK?\p"
	.string "I like it because it raises the\n"
	.string "ATTACK stat in battle.$"

CinnabarIsland_Mart_Text_ExtraItemsNeverHurt::
# 39 "data/maps/CinnabarIsland_Mart_Frlg/scripts.pory"
	.string "It never hurts to have extra items.\n"
	.string "You never know what might happen.$"
