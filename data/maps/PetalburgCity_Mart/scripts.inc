PetalburgCity_Mart_MapScripts::
	.byte 0


PetalburgCity_Mart_EventScript_Clerk::
# 4 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock_faceplayer
# 5 "data/maps/PetalburgCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 7 "data/maps/PetalburgCity_Mart/scripts.pory"
	goto_if_set FLAG_PETALBURG_MART_EXPANDED_ITEMS, PetalburgCity_Mart_EventScript_Clerk_2
# 10 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Basic
PetalburgCity_Mart_EventScript_Clerk_1:
# 12 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end

PetalburgCity_Mart_EventScript_Clerk_2:
# 8 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Expanded
	goto PetalburgCity_Mart_EventScript_Clerk_1


PetalburgCity_Mart_EventScript_EnhancementClerk::
# 17 "data/maps/PetalburgCity_Mart/scripts.pory"
	lock_faceplayer
# 18 "data/maps/PetalburgCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 19 "data/maps/PetalburgCity_Mart/scripts.pory"
	waitmessage
# 20 "data/maps/PetalburgCity_Mart/scripts.pory"
	pokemart PetalburgCity_Mart_Pokemart_Enhancement
# 21 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 25 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Basic:
# 26 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 27 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 28 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 29 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 30 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 31 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_LURE
	.2byte ITEM_NONE

	.align 2
# 34 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Expanded:
# 35 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 36 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 37 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 38 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 39 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_MAX_ELIXIR
# 40 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 41 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_LURE
	.2byte ITEM_NONE

	.align 2
# 44 "data/maps/PetalburgCity_Mart/scripts.pory"
PetalburgCity_Mart_Pokemart_Enhancement:
# 45 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 46 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 47 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 48 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 49 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 50 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 51 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 52 "data/maps/PetalburgCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

PetalburgCity_Mart_EventScript_Woman::
# 56 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_WeakWillGrowStronger, MSGBOX_NPC
	end


PetalburgCity_Mart_EventScript_Boy::
# 61 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_RepelIsUseful, MSGBOX_NPC
	end


PetalburgCity_Mart_EventScript_Man::
# 66 "data/maps/PetalburgCity_Mart/scripts.pory"
	msgbox PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou, MSGBOX_NPC
	end


PetalburgCity_Mart_Text_WeakWillGrowStronger::
# 70 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Even if a POKéMON is weak now,\n"
	.string "it will grow stronger.\p"
	.string "The most important thing is love!\n"
	.string "Love for your POKéMON!$"

PetalburgCity_Mart_Text_RepelIsUseful::
# 78 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you use REPEL?\n"
	.string "It keeps POKéMON away, so it's\l"
	.string "useful when you're in a hurry.$"

PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou::
# 84 "data/maps/PetalburgCity_Mart/scripts.pory"
	.string "Do you have any ANTIDOTES with\n"
	.string "you?\p"
	.string "If you walk around with a poisoned\n"
	.string "POKéMON, it will lose HP until it faints.\l"
	.string "Take some ANTIDOTES with you.$"
