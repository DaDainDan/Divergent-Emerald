SlateportCity_Mart_MapScripts::
	.byte 0


SlateportCity_Mart_EventScript_Clerk::
# 4 "data/maps/SlateportCity_Mart/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SlateportCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 7 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_Mart_Pokemart
# 8 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 12 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Pokemart:
# 13 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 14 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 15 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 16 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 17 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 18 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MAX_ELIXIR
# 19 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 20 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_MAX_LURE
	.2byte ITEM_NONE

SlateportCity_Mart_EventScript_EnhancementClerk::
# 24 "data/maps/SlateportCity_Mart/scripts.pory"
	lock_faceplayer
# 25 "data/maps/SlateportCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 26 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 27 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_Mart_Pokemart_Enhancement
# 28 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 32 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Pokemart_Enhancement:
# 33 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 34 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 35 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 36 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 37 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 38 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 39 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 40 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

SlateportCity_Mart_EventScript_BlackBelt::
# 44 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
	end


SlateportCity_Mart_EventScript_Man::
# 49 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
	end


SlateportCity_Mart_Text_SomeItemsOnlyAtMart::
# 53 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "The MARKET does have some interesting\n"
	.string "merchandise.\p"
	.string "But there are some items you can only\n"
	.string "get at a POKéMON MART.$"

SlateportCity_Mart_Text_GreatBallIsBetter::
# 61 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "A GREAT BALL is better than a POKé BALL\n"
	.string "at catching POKéMON.\p"
	.string "With this, I should be able to get that\n"
	.string "elusive POKéMON…$"
