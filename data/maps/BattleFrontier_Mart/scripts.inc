BattleFrontier_Mart_MapScripts::
	.byte 0


BattleFrontier_Mart_EventScript_Clerk::
# 4 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock_faceplayer
# 5 "data/maps/BattleFrontier_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmessage
# 7 "data/maps/BattleFrontier_Mart/scripts.pory"
	pokemart BattleFrontier_Mart_Pokemart
# 8 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 12 "data/maps/BattleFrontier_Mart/scripts.pory"
BattleFrontier_Mart_Pokemart:
# 13 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 14 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 15 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 16 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 17 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 18 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 19 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 20 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 21 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 22 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_IRON
# 23 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 24 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 25 "data/maps/BattleFrontier_Mart/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

BattleFrontier_Mart_EventScript_OldMan::
# 29 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ChaperonGrandson, MSGBOX_NPC
	end


BattleFrontier_Mart_EventScript_OldWoman::
# 34 "data/maps/BattleFrontier_Mart/scripts.pory"
	lock
# 35 "data/maps/BattleFrontier_Mart/scripts.pory"
	applymovement LOCALID_FRONTIER_MART_OLD_WOMAN, Common_Movement_FaceDown
# 36 "data/maps/BattleFrontier_Mart/scripts.pory"
	waitmovement 0
# 37 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_ProteinMakeNiceGift, MSGBOX_DEFAULT
	release_end


BattleFrontier_Mart_EventScript_Boy::
# 42 "data/maps/BattleFrontier_Mart/scripts.pory"
	msgbox BattleFrontier_Mart_Text_FacilitiesDontAllowItems, MSGBOX_NPC
	end


BattleFrontier_Mart_Text_ChaperonGrandson::
# 46 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "We came here to chaperon our\n"
	.string "grandson.\p"
	.string "But since we're here, we thought\n"
	.string "we should get some souvenirs.$"

BattleFrontier_Mart_Text_ProteinMakeNiceGift::
# 54 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "Dear, what do you think of this?\n"
	.string "Wouldn't this make a nice gift?\p"
	.string "It's…PRO…TE…IN?\n"
	.string "It sounds delicious, doesn't it?$"

BattleFrontier_Mart_Text_FacilitiesDontAllowItems::
# 62 "data/maps/BattleFrontier_Mart/scripts.pory"
	.string "A lot of the BATTLE FRONTIER's\n"
	.string "facilities don't allow the use of items\l"
	.string "during battles.\p"
	.string "That rule makes things tougher than\n"
	.string "they already are!$"
