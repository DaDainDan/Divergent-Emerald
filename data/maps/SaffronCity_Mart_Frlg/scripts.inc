SaffronCity_Mart_Frlg_MapScripts::
	.byte 0


SaffronCity_Mart_EventScript_Lass::
# 4 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	msgbox SaffronCity_Mart_Text_ReviveIsCostly, MSGBOX_NPC
	end


SaffronCity_Mart_EventScript_Youngster::
# 9 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	msgbox SaffronCity_Mart_Text_MaxRepelMoreEffectiveThanSuper, MSGBOX_NPC
	end


SaffronCity_Mart_EventScript_Clerk::
# 14 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	lock_faceplayer
# 15 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 16 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	waitmessage
# 17 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	pokemart SaffronCity_Mart_Items
# 18 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 22 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
SaffronCity_Mart_Items:
# 23 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 24 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 25 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 26 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 27 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 28 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

SaffronCity_Mart_Text_MaxRepelMoreEffectiveThanSuper::
# 31 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "MAX REPEL keeps weaker POKéMON\n"
	.string "from appearing.\p"
	.string "MAX REPEL stays effective longer\n"
	.string "than SUPER REPEL.$"

SaffronCity_Mart_Text_ReviveIsCostly::
# 39 "data/maps/SaffronCity_Mart_Frlg/scripts.pory"
	.string "REVIVE is costly, but it revives\n"
	.string "fainted POKéMON!$"
