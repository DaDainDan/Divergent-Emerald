VermilionCity_Mart_Frlg_MapScripts::
	.byte 0


VermilionCity_Mart_EventScript_CooltrainerF::
# 4 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	msgbox VermilionCity_Mart_Text_MonsGoodOrBadDependingOnTrainer, MSGBOX_NPC
	end


VermilionCity_Mart_EventScript_BaldingMan::
# 9 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	msgbox VermilionCity_Mart_Text_TeamRocketAreWickedPeople, MSGBOX_NPC
	end


VermilionCity_Mart_EventScript_Clerk::
# 14 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	lock_faceplayer
# 15 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 16 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	waitmessage
# 17 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	pokemart VermilionCity_Mart_Items
# 18 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 22 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
VermilionCity_Mart_Items:
# 23 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POKE_BALL
# 24 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 25 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 26 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 27 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_AWAKENING
# 28 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 29 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

VermilionCity_Mart_Text_TeamRocketAreWickedPeople::
# 32 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "There are wicked people who will\n"
	.string "use POKéMON for criminal acts.\p"
	.string "TEAM ROCKET traffics in rare\n"
	.string "POKéMON, for example.\p"
	.string "They also abandon POKéMON that\n"
	.string "they consider unpopular or useless.\p"
	.string "That's the sort of horrid people\n"
	.string "they are, TEAM ROCKET.$"

VermilionCity_Mart_Text_MonsGoodOrBadDependingOnTrainer::
# 46 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "I think POKéMON can be good or\n"
	.string "bad. It depends on the TRAINER.$"
