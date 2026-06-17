SixIsland_Mart_Frlg_MapScripts::
	.byte 0


SixIsland_Mart_EventScript_Clerk::
# 4 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 7 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	pokemart SixIsland_Mart_Items
# 8 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 12 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
SixIsland_Mart_Items:
# 13 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 14 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 15 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_POTION
# 16 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 17 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 18 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 19 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 20 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_DREAM_MAIL
	.2byte ITEM_NONE

SixIsland_Mart_EventScript_Picnicker::
# 24 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	msgbox SixIsland_Mart_Text_ShouldBuyMailAndWriteLetter, MSGBOX_NPC
	end


SixIsland_Mart_Text_AgathaOldestEverEliteFourMember::
# 28 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "Play with POKéMON lots and live\n"
	.string "a long life!\p"
	.string "Take AGATHA, for example.\p"
	.string "She set a record for being the\n"
	.string "oldest-ever ELITE FOUR member.\p"
	.string "She spurs me to do bigger things.$"

SixIsland_Mart_Text_ShouldBuyMailAndWriteLetter::
# 40 "data/maps/SixIsland_Mart_Frlg/scripts.pory"
	.string "I should buy some MAIL and write\n"
	.string "him a letter…$"
