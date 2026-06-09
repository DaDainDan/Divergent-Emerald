LilycoveCity_DepartmentStore_3F_MapScripts::
	.byte 0


LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
# 4 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock_faceplayer
# 5 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 7 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins
# 8 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 12 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins:
# 13 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PROTEIN
# 14 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CALCIUM
# 15 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_IRON
# 16 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ZINC
# 17 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CARBOS
# 18 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
# 22 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock_faceplayer
# 23 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 24 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 25 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters
# 26 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 30 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters:
# 31 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SPEED
# 32 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 33 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ATTACK
# 34 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 35 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 36 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 37 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_NONE

LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
# 41 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
# 46 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_3F_EventScript_Woman::
# 51 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon::
# 55 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "For quickly toughening up POKéMON,\n"
	.string "items are the best.\p"
	.string "PROTEIN boosts ATTACK,\n"
	.string "and CALCIUM raises SP. ATK.$"

LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance::
# 63 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I want my POKéMON to have more\n"
	.string "endurance.\p"
	.string "I'm trying to decide whether to raise\n"
	.string "DEFENSE with IRON, or SP. DEF with ZINC.$"

LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon::
# 71 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I gave a CARBOS to my POKéMON,\n"
	.string "and its SPEED went up.$"
