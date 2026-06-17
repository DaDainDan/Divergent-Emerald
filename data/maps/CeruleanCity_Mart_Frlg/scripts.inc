CeruleanCity_Mart_Frlg_MapScripts::
	.byte 0


CeruleanCity_Mart_EventScript_Youngster::
# 4 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	msgbox CeruleanCity_Mart_Text_RepelWorksOnWeakMons, MSGBOX_NPC
	end


CeruleanCity_Mart_EventScript_Woman::
# 9 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	msgbox CeruleanCity_Mart_Text_DoYouKnowAboutRareCandy, MSGBOX_NPC
	end


CeruleanCity_Mart_EventScript_Clerk::
# 14 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	lock_faceplayer
# 15 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 16 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	waitmessage
# 17 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	pokemart CeruleanCity_Mart_Items
# 18 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 22 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
CeruleanCity_Mart_Items:
# 23 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POKE_BALL
# 24 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 25 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POTION
# 26 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 28 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_AWAKENING
# 29 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 30 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 31 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

CeruleanCity_Mart_Text_RepelWorksOnWeakMons::
# 34 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "REPEL not only keeps bugs away,\n"
	.string "it also works on weak POKéMON.\p"
	.string "Put your strongest POKéMON at the\n"
	.string "left of the POKéMON LIST.\p"
	.string "If your first POKéMON is strong,\n"
	.string "REPEL's effect is boosted.$"

CeruleanCity_Mart_Text_DoYouKnowAboutRareCandy::
# 45 "data/maps/CeruleanCity_Mart_Frlg/scripts.pory"
	.string "Do you know about RARE CANDY?\n"
	.string "They don't sell it in shops.\p"
	.string "I think it makes POKéMON grow\n"
	.string "very quickly all of a sudden.$"
