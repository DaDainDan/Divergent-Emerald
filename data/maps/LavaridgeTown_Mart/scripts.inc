LavaridgeTown_Mart_MapScripts::
	.byte 0


LavaridgeTown_Mart_EventScript_Clerk::
# 4 "data/maps/LavaridgeTown_Mart/scripts.pory"
	lock_faceplayer
# 5 "data/maps/LavaridgeTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/LavaridgeTown_Mart/scripts.pory"
	waitmessage
# 7 "data/maps/LavaridgeTown_Mart/scripts.pory"
	pokemart LavaridgeTown_Mart_Pokemart
# 8 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 12 "data/maps/LavaridgeTown_Mart/scripts.pory"
LavaridgeTown_Mart_Pokemart:
# 13 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 14 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 15 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 16 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 17 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 18 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 19 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 20 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 21 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
	.2byte ITEM_NONE

LavaridgeTown_Mart_EventScript_ExpertM::
# 25 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_XSpeedFirstStrike, MSGBOX_NPC
	end


LavaridgeTown_Mart_EventScript_OldWoman::
# 30 "data/maps/LavaridgeTown_Mart/scripts.pory"
	msgbox LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney, MSGBOX_NPC
	end


LavaridgeTown_Mart_Text_XSpeedFirstStrike::
# 34 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "Use X SPEED to add to a POKéMON's\n"
	.string "SPEED in battle.\p"
	.string "That will help it get in the first\n"
	.string "strike--a decided advantage!$"

LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney::
# 42 "data/maps/LavaridgeTown_Mart/scripts.pory"
	.string "On MT. CHIMNEY's peak, there's a local\n"
	.string "specialty that you can buy only there.\p"
	.string "Give it to a POKéMON--it will be elated.$"
