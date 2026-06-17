LavenderTown_Mart_Frlg_MapScripts::
	.byte 0


LavenderTown_Mart_EventScript_BaldingMan::
# 4 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	msgbox LavenderTown_Mart_Text_SearchingForStatRaiseItems, MSGBOX_NPC
	end


LavenderTown_Mart_EventScript_Rocker::
# 9 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	msgbox LavenderTown_Mart_Text_DidYouBuyRevives, MSGBOX_NPC
	end


LavenderTown_Mart_EventScript_Youngster::
# 14 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	msgbox LavenderTown_Mart_Text_TrainerDuosCanChallengeYou, MSGBOX_NPC
	end


LavenderTown_Mart_EventScript_Clerk::
# 19 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	lock_faceplayer
# 20 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 21 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	waitmessage
# 22 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	pokemart LavenderTown_Mart_Items
# 23 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 27 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
LavenderTown_Mart_Items:
# 28 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 29 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 30 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 31 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 32 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 33 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 34 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 35 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 36 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

LavenderTown_Mart_Text_SearchingForStatRaiseItems::
# 39 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "I'm searching for items that raise\n"
	.string "the stats of POKéMON.\p"
	.string "They're effective over the course\n"
	.string "of a single battle.\p"
	.string "X ATTACK, X DEFEND, X SPEED, \n"
	.string "and X SPECIAL are what I'm after.\p"
	.string "Do you know where I can get them?$"

LavenderTown_Mart_Text_DidYouBuyRevives::
# 52 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "Did you buy some REVIVES?\n"
	.string "They revive any fainted POKéMON!$"

LavenderTown_Mart_Text_TrainerDuosCanChallengeYou::
# 57 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "Sometimes, a TRAINER duo will\n"
	.string "challenge you with two POKéMON\l"
	.string "at the same time.\p"
	.string "If that happens, you have to send\n"
	.string "out two POKéMON to battle, too.$"

LavenderTown_Mart_Text_SoldNuggetFromMountainsFor5000::
# 66 "data/maps/LavenderTown_Mart_Frlg/scripts.pory"
	.string "この　あいだ　やまおくで\n"
	.string "きんのたまを　ひろい　ましてね！\p"
	.string "つかえない　しなもの　ですが\n"
	.string "うったら　なんと　5000¥でした$"
