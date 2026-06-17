CeladonCity_DepartmentStore_5F_Frlg_MapScripts::
	.byte 0


CeladonCity_DepartmentStore_5F_EventScript_Gentleman::
# 4 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_5F_Text_ExplainStatEnhancers, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_5F_EventScript_Sailor::
# 9 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_5F_Text_HereForStatEnhancers, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_5F_EventScript_FloorSign::
# 14 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_5F_Text_Drugstore, MSGBOX_SIGN
	end


CeladonCity_DepartmentStore_5F_EventScript_ClerkXItems::
# 19 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	lock_faceplayer
# 20 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 21 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	waitmessage
# 22 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	pokemart CeladonCity_DepartmentStore_5F_XItems
# 23 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 27 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_5F_XItems:
# 28 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_X_ATTACK
# 29 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_X_DEFEND
# 30 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_X_SPEED
# 31 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_X_SPECIAL
# 32 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 33 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 34 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_NONE

CeladonCity_DepartmentStore_5F_EventScript_ClerkVitamins::
# 38 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	lock_faceplayer
# 39 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 40 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	waitmessage
# 41 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	pokemart CeladonCity_DepartmentStore_5F_Vitamins
# 42 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 46 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_5F_Vitamins:
# 47 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_HP_UP
# 48 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_PROTEIN
# 49 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_IRON
# 50 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_CALCIUM
# 51 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_ZINC
# 52 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.2byte ITEM_CARBOS
	.2byte ITEM_NONE

CeladonCity_DepartmentStore_5F_Text_ExplainStatEnhancers::
# 55 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "POKéMON stat enhancers can be\n"
	.string "bought only here.\p"
	.string "HP UP increases the base HP of a\n"
	.string "POKéMON.\p"
	.string "CALCIUM raises the base SP. ATK\n"
	.string "stat of one POKéMON.\p"
	.string "ZINC boosts the base SP. DEF stat\n"
	.string "of one POKéMON.\p"
	.string "CARBOS enhances the base SPEED\n"
	.string "stat.$"

CeladonCity_DepartmentStore_5F_Text_HereForStatEnhancers::
# 72 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "I'm here for POKéMON stat\n"
	.string "enhancers.\p"
	.string "PROTEIN increases the base ATTACK\n"
	.string "power.\p"
	.string "IRON increases the base DEFENSE\n"
	.string "stat.$"

CeladonCity_DepartmentStore_5F_Text_Drugstore::
# 83 "data/maps/CeladonCity_DepartmentStore_5F_Frlg/scripts.pory"
	.string "5F: DRUGSTORE$"
