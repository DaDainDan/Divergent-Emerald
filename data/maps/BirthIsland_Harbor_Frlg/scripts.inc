BirthIsland_Harbor_Frlg_MapScripts::
	.byte 0


BirthIsland_Harbor_EventScript_Sailor_Frlg::
# 4 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	message Text_WhereDoYouWantToSail
# 6 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	waitmessage
# 7 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_BIRTH_ISLAND
# 8 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	multichoice 20, 8, MULTI_SEAGALLOP_VERMILION, FALSE
# 9 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	case 0, BirthIsland_Harbor_EventScript_Sailor_Frlg_3
# 11 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	case 1, BirthIsland_Harbor_EventScript_Sailor_Frlg_4
# 12 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	case MULTI_B_PRESSED, BirthIsland_Harbor_EventScript_Sailor_Frlg_4
BirthIsland_Harbor_EventScript_Sailor_Frlg_1:
	end

BirthIsland_Harbor_EventScript_Sailor_Frlg_3:
# 10 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	goto EventScript_SailToVermilionCity
	goto BirthIsland_Harbor_EventScript_Sailor_Frlg_1

BirthIsland_Harbor_EventScript_Sailor_Frlg_4:
# 13 "data/maps/BirthIsland_Harbor_Frlg/scripts.pory"
	goto EventScript_CancelSail
	goto BirthIsland_Harbor_EventScript_Sailor_Frlg_1

