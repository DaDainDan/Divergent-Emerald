# 1 "data/maps/OldaleTown_Mart/scripts.pory"

# 2 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_MapScripts::
# 3 "data/maps/OldaleTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_Mart/scripts.pory"

# 5 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 15 "data/maps/OldaleTown_Mart/scripts.pory"

# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 23 "data/maps/OldaleTown_Mart/scripts.pory"

# 24 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 25 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 26 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 29 "data/maps/OldaleTown_Mart/scripts.pory"

# 30 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 31 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 32 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 37 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemartlistend
# 38 "data/maps/OldaleTown_Mart/scripts.pory"

# 39 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 41 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 42 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 43 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 45 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 46 "data/maps/OldaleTown_Mart/scripts.pory"

# 47 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 50 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 51 "data/maps/OldaleTown_Mart/scripts.pory"

# 52 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 53 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 54 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 55 "data/maps/OldaleTown_Mart/scripts.pory"

# 56 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 57 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out, so\n"
# 58 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I can't stock up POKé BALLS.$"
# 59 "data/maps/OldaleTown_Mart/scripts.pory"

# 60 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 61 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I buy plenty of POKé BALLS so I won't\n"
# 62 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "run out when I try to catch a Pokemon!$"
# 63 "data/maps/OldaleTown_Mart/scripts.pory"

# 64 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 65 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "It's important to stock up on Potions\n"
# 66 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "so you can keep your POKéMON healthy.\p"
# 67 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Don't be stingy about using them.\n"
# 68 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If your POKéMON faints, Potions won't\l"
# 69 "data/maps/OldaleTown_Mart/scripts.pory"
	.string	"be able to revive them.$"
