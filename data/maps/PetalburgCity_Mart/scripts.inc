# 1 "data/maps/PetalburgCity_Mart/scripts.pory"

# 2 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_MapScripts::
# 3 "data/maps/PetalburgCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/PetalburgCity_Mart/scripts.pory"

# 5 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Clerk::
# 6 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock
# 7 "data/maps/PetalburgCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/PetalburgCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/PetalburgCity_Mart/scripts.pory"
	goto_if_set FLAG_PETALBURG_MART_EXPANDED_ITEMS, PetalburgCity_Mart_EventScript_ExpandedItems
# 11 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Basic
# 12 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 14 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 15 "data/maps/PetalburgCity_Mart/scripts.pory"

# 16 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 17 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Basic:
# 18 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 19 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 21 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 22 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 23 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemartlistend
# 24 "data/maps/PetalburgCity_Mart/scripts.pory"

# 25 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_ExpandedItems::
# 26 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Expanded
# 27 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 28 "data/maps/PetalburgCity_Mart/scripts.pory"
	release
# 29 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 30 "data/maps/PetalburgCity_Mart/scripts.pory"

# 31 "data/maps/PetalburgCity_Mart/scripts.pory"
	.align 2
# 32 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Expanded:
# 33 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 34 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 35 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 36 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 37 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 38 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 39 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemartlistend
# 40 "data/maps/PetalburgCity_Mart/scripts.pory"

# 41 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Woman::
# 42 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_WeakWillGrowStronger, MSGBOX_NPC
# 43 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 44 "data/maps/PetalburgCity_Mart/scripts.pory"

# 45 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Boy::
# 46 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_RepelIsUseful, MSGBOX_NPC
# 47 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 48 "data/maps/PetalburgCity_Mart/scripts.pory"

# 49 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_EventScript_Man::
# 50 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou, MSGBOX_NPC
# 51 "data/maps/PetalburgCity_Mart/scripts.pory"
	end
# 52 "data/maps/PetalburgCity_Mart/scripts.pory"

# 53 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_WeakWillGrowStronger:
# 54 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Even if a POKéMON is weak now,\n"
# 55 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "it will grow stronger.\p"
# 56 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "The most important thing is love!\n"
# 57 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Love for your POKéMON!$"
# 58 "data/maps/PetalburgCity_Mart/scripts.pory"

# 59 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_RepelIsUseful:
# 60 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you use REPEL?\n"
# 61 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "It keeps POKéMON away, so it's\l"
# 62 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "useful when you're in a hurry.$"
# 63 "data/maps/PetalburgCity_Mart/scripts.pory"

# 64 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou:
# 65 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you have any ANTIDOTES with\n"
# 66 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "you?\p"
# 67 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "If you walk around with a poisoned\n"
# 68 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "POKéMON, it will lose HP until it faints.\l"
# 69 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Take some ANTIDOTES with you.$"
