MossdeepCity_Mart_MapScripts::
	.byte 0


MossdeepCity_Mart_EventScript_Clerk::
# 4 "data/maps/MossdeepCity_Mart/scripts.pory"
	lock_faceplayer
# 5 "data/maps/MossdeepCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/MossdeepCity_Mart/scripts.pory"
	waitmessage
# 7 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemart MossdeepCity_Mart_Pokemart
# 8 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 12 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Pokemart:
# 13 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 14 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 15 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 16 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 17 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 18 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 19 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 20 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 21 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_NONE

MossdeepCity_Mart_EventScript_Woman::
# 25 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_ReviveIsFantastic, MSGBOX_NPC
	end


MossdeepCity_Mart_EventScript_Boy::
# 30 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_MaxRepelLastsLongest, MSGBOX_NPC
	end


MossdeepCity_Mart_EventScript_Sailor::
# 35 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_NetAndDiveBallsRare, MSGBOX_NPC
	end


MossdeepCity_Mart_Text_ReviveIsFantastic::
# 39 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "REVIVE is fantastic!\p"
	.string "Give it to a fainted POKéMON,\n"
	.string "and the POKéMON will arise.\p"
	.string "But be careful, REVIVE doesn't restore\n"
	.string "the used-up PP of moves.$"

MossdeepCity_Mart_Text_MaxRepelLastsLongest::
# 49 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "MAX REPEL keeps all weak POKéMON away.\p"
	.string "Out of all the REPEL sprays, it lasts\n"
	.string "the longest.$"

MossdeepCity_Mart_Text_NetAndDiveBallsRare::
# 56 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "The NET and DIVE BALLS are rare POKé\n"
	.string "BALLS that are only made in MOSSDEEP.\p"
	.string "A NET BALL is effective against\n"
	.string "BUG-type and WATER-type POKéMON.\p"
	.string "A DIVE BALL works best on POKéMON\n"
	.string "at the bottom of the sea.$"
