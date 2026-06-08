FortreeCity_DecorationShop_MapScripts::
	.byte 0


FortreeCity_DecorationShop_EventScript_PokefanM::
# 4 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	msgbox FortreeCity_DecorationShop_Text_MerchandiseSentToPC, MSGBOX_NPC
	end


FortreeCity_DecorationShop_EventScript_Girl::
# 9 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	msgbox FortreeCity_DecorationShop_Text_BuyingDeskForDolls, MSGBOX_NPC
	end


FortreeCity_DecorationShop_EventScript_ClerkDesks::
# 14 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	lock_faceplayer
# 15 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	message gText_HowMayIServeYou
# 16 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	waitmessage
# 17 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	pokemartdecoration FortreeCity_DecorationShop_PokemartDecor_Desks
# 18 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 22 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_PokemartDecor_Desks:
# 23 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_SMALL_DESK
# 24 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_POKEMON_DESK
# 25 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_HEAVY_DESK
# 26 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_RAGGED_DESK
# 27 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_COMFORT_DESK
# 28 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_BRICK_DESK
# 29 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_CAMP_DESK
# 30 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_HARD_DESK
	.2byte ITEM_NONE

FortreeCity_DecorationShop_EventScript_ClerkChairs::
# 34 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	lock_faceplayer
# 35 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	message gText_HowMayIServeYou
# 36 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	waitmessage
# 37 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	pokemartdecoration FortreeCity_DecorationShop_PokemartDecor_Chairs
# 38 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 42 "data/maps/FortreeCity_DecorationShop/scripts.pory"
FortreeCity_DecorationShop_PokemartDecor_Chairs:
# 43 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_SMALL_CHAIR
# 44 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_POKEMON_CHAIR
# 45 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_HEAVY_CHAIR
# 46 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_RAGGED_CHAIR
# 47 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_COMFORT_CHAIR
# 48 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_BRICK_CHAIR
# 49 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_CAMP_CHAIR
# 50 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.2byte DECOR_HARD_CHAIR
	.2byte ITEM_NONE

FortreeCity_DecorationShop_Text_MerchandiseSentToPC::
# 53 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "Merchandise you buy here is sent to\n"
	.string "your own PC.\p"
	.string "That's fantastic! I wish they could\n"
	.string "also deliver me home like that.$"

FortreeCity_DecorationShop_Text_BuyingDeskForDolls::
# 61 "data/maps/FortreeCity_DecorationShop/scripts.pory"
	.string "I'm buying a pretty desk and I'm\n"
	.string "putting my cute DOLLS on it.\p"
	.string "If I don't, when I decorate my\n"
	.string "SECRET BASE, my DOLLS will get\l"
	.string "dirty or poked with splinters.$"
