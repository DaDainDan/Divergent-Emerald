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
	.2byte ITEM_POKE_BALL
# 14 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 15 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 16 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 17 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 18 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 19 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 20 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 21 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_NONE

SlateportCity_Mart_EventScript_BlackBelt::
# 25 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
	end


SlateportCity_Mart_EventScript_Man::
# 30 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
	end


SlateportCity_Mart_Text_SomeItemsOnlyAtMart::
# 34 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "The MARKET does have some interesting\n"
	.string "merchandise.\p"
	.string "But there are some items you can only\n"
	.string "get at a POKéMON MART.$"

SlateportCity_Mart_Text_GreatBallIsBetter::
# 42 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "A GREAT BALL is better than a POKé BALL\n"
	.string "at catching POKéMON.\p"
	.string "With this, I should be able to get that\n"
	.string "elusive POKéMON…$"
