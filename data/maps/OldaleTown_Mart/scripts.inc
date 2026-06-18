OldaleTown_Mart_MapScripts::
	.byte 0


OldaleTown_Mart_EventScript_Clerk::
# 4 "data/maps/OldaleTown_Mart/scripts.pory"
	lock_faceplayer
# 5 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_Clerk_2
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
OldaleTown_Mart_EventScript_Clerk_1:
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end

OldaleTown_Mart_EventScript_Clerk_2:
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
	goto OldaleTown_Mart_EventScript_Clerk_1


	.align 2
# 16 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LURE
	.2byte ITEM_NONE

	.align 2
# 24 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 25 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 26 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 30 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_LURE
	.2byte ITEM_NONE

OldaleTown_Mart_EventScript_Woman::
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	lock_faceplayer
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_Woman_2
# 38 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
OldaleTown_Mart_EventScript_Woman_1:
	release_end

OldaleTown_Mart_EventScript_Woman_2:
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
	goto OldaleTown_Mart_EventScript_Woman_1


OldaleTown_Mart_EventScript_Boy::
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
	end


OldaleTown_Mart_Text_PokeBallsAreSoldOut::
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out, so\n"
	.string "I can't stock up on POKé BALLS.$"

OldaleTown_Mart_Text_ImGoingToBuyPokeBalls::
# 53 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I buy plenty of POKé BALLS so I won't\n"
	.string "run out when I try to catch POKéMON!$"

OldaleTown_Mart_Text_RestoreHPWithPotion::
# 58 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "It's important to stock up on POTIONS\n"
	.string "so you can keep your POKéMON healthy.\p"
	.string "Don't be stingy about using them.\n"
	.string "If your POKéMON faints, POTIONS won't\l"
	.string "be able to revive them.$"
