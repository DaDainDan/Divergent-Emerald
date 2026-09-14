MauvilleCity_Mart_MapScripts::
	.byte 0


MauvilleCity_Mart_EventScript_Clerk::
# 4 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock_faceplayer
# 5 "data/maps/MauvilleCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 7 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_Mart_Pokemart
# 8 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 12 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Pokemart:
# 13 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 14 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 15 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 16 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 17 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 18 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 19 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 20 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_LURE
	.2byte ITEM_NONE

MauvilleCity_Mart_EventScript_EnhancementClerk::
# 24 "data/maps/MauvilleCity_Mart/scripts.pory"
	lock_faceplayer
# 25 "data/maps/MauvilleCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 26 "data/maps/MauvilleCity_Mart/scripts.pory"
	waitmessage
# 27 "data/maps/MauvilleCity_Mart/scripts.pory"
	pokemart MauvilleCity_Mart_Pokemart_Enhancement
# 28 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 32 "data/maps/MauvilleCity_Mart/scripts.pory"
MauvilleCity_Mart_Pokemart_Enhancement:
# 33 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 34 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 35 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 36 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 37 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 38 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 39 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 40 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

MauvilleCity_Mart_EventScript_ExpertM::
# 44 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats, MSGBOX_NPC
	end


MauvilleCity_Mart_EventScript_Man::
# 49 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_DecisionsDetermineBattle, MSGBOX_NPC
	end


MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats::
# 53 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "There are items that temporarily\n"
	.string "elevate the stats of POKéMON.\p"
	.string "The ones I know you use in battle\n"
	.string "are X ATTACK and X DEFEND…\p"
	.string "I do believe that there are others\n"
	.string "like them.$"

MauvilleCity_Mart_Text_DecisionsDetermineBattle::
# 64 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Use a certain move, or use an item\n"
	.string "instead…\p"
	.string "The TRAINER's decisions determine how\n"
	.string "battles turn out, I think.$"
