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
	.2byte ITEM_GREAT_BALL
# 15 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 16 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 17 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 18 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 19 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 20 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 21 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 22 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 23 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 24 "data/maps/MauvilleCity_Mart/scripts.pory"
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_NONE

MauvilleCity_Mart_EventScript_ExpertM::
# 28 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats, MSGBOX_NPC
	end


MauvilleCity_Mart_EventScript_Man::
# 33 "data/maps/MauvilleCity_Mart/scripts.pory"
	msgbox MauvilleCity_Mart_Text_DecisionsDetermineBattle, MSGBOX_NPC
	end


MauvilleCity_Mart_Text_ItemsToTemporarilyElevateStats::
# 37 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "There are items that temporarily\n"
	.string "elevate the stats of POKéMON.\p"
	.string "The ones I know you use in battle\n"
	.string "are X ATTACK and X DEFEND…\p"
	.string "I do believe that there are others\n"
	.string "like them.$"

MauvilleCity_Mart_Text_DecisionsDetermineBattle::
# 48 "data/maps/MauvilleCity_Mart/scripts.pory"
	.string "Use a certain move, or use an item\n"
	.string "instead…\p"
	.string "The TRAINER's decisions determine how\n"
	.string "battles turn out, I think.$"
