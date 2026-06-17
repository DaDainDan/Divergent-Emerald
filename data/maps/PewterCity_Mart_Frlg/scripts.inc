PewterCity_Mart_Frlg_MapScripts::
	.byte 0


PewterCity_Mart_EventScript_Youngster::
# 4 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	msgbox PewterCity_Mart_Text_BoughtWeirdFishFromShadyGuy, MSGBOX_NPC
	end


PewterCity_Mart_EventScript_Boy::
# 9 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	msgbox PewterCity_Mart_Text_GoodThingsIfRaiseMonsDiligently, MSGBOX_NPC
	end


PewterCity_Mart_EventScript_Clerk::
# 14 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	lock_faceplayer
# 15 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 16 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	waitmessage
# 17 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	pokemart PewterCity_Mart_Items
# 18 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 22 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
PewterCity_Mart_Items:
# 23 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POKE_BALL
# 24 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POTION
# 25 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 26 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 27 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_AWAKENING
# 28 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 29 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 30 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

PewterCity_Mart_Text_BoughtWeirdFishFromShadyGuy::
# 33 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "A shady old guy sucked me into\n"
	.string "buying this weird fish POKéMON!\p"
	.string "It's totally weak and it cost ¥500!$"

PewterCity_Mart_Text_GoodThingsIfRaiseMonsDiligently::
# 40 "data/maps/PewterCity_Mart_Frlg/scripts.pory"
	.string "Good things can happen if you raise\n"
	.string "POKéMON diligently.\p"
	.string "Even the weak ones can surprise\n"
	.string "you if you don't give up on them.$"
