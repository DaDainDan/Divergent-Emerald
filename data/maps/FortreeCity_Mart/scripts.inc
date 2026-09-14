FortreeCity_Mart_MapScripts::
	.byte 0


FortreeCity_Mart_EventScript_Clerk::
# 4 "data/maps/FortreeCity_Mart/scripts.pory"
	lock_faceplayer
# 5 "data/maps/FortreeCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/FortreeCity_Mart/scripts.pory"
	waitmessage
# 7 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemart FortreeCity_Mart_Pokemart
# 8 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 12 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Pokemart:
# 13 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 14 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 15 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 16 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 17 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 18 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 19 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 20 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_LURE
	.2byte ITEM_NONE

FortreeCity_Mart_EventScript_EnhancementClerk::
# 24 "data/maps/FortreeCity_Mart/scripts.pory"
	lock_faceplayer
# 25 "data/maps/FortreeCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 26 "data/maps/FortreeCity_Mart/scripts.pory"
	waitmessage
# 27 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemart FortreeCity_Mart_Pokemart_Enhancement
# 28 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 32 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Pokemart_Enhancement:
# 33 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 34 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 35 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 36 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 37 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 38 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 39 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 40 "data/maps/FortreeCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

FortreeCity_Mart_EventScript_Woman::
# 44 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_SuperRepelBetter, MSGBOX_NPC
	end


FortreeCity_Mart_EventScript_Girl::
# 49 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_StockUpOnItems, MSGBOX_NPC
	end


FortreeCity_Mart_EventScript_Boy::
# 54 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_RareCandyMakesMonGrow, MSGBOX_NPC
	end


FortreeCity_Mart_Text_SuperRepelBetter::
# 58 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "SUPER REPEL lasts a long time,\n"
	.string "and it gets the job done.\p"
	.string "It's much better than an ordinary\n"
	.string "REPEL.$"

FortreeCity_Mart_Text_StockUpOnItems::
# 66 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "I always stock up on more items than\n"
	.string "I'm sure I'll need.\p"
	.string "You never know what might happen.\n"
	.string "Better to be safe than sorry!$"

FortreeCity_Mart_Text_RareCandyMakesMonGrow::
# 74 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "A RARE CANDY makes a POKéMON grow\n"
	.string "immediately by one level.$"
