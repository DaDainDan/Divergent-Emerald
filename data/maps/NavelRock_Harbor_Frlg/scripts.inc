NavelRock_Harbor_Frlg_MapScripts::
	.byte 0


NavelRock_Harbor_Frlg_EventScript_Sailor::
# 4 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	message Text_WhereDoYouWantToSail
# 6 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	waitmessage
# 7 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_NAVEL_ROCK
# 8 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	multichoice 20, 8, MULTI_SEAGALLOP_VERMILION, FALSE
# 9 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	case 0, NavelRock_Harbor_Frlg_EventScript_Sailor_3
# 11 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	case 1, NavelRock_Harbor_Frlg_EventScript_Sailor_4
# 12 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	case MULTI_B_PRESSED, NavelRock_Harbor_Frlg_EventScript_Sailor_4
NavelRock_Harbor_Frlg_EventScript_Sailor_1:
	end

NavelRock_Harbor_Frlg_EventScript_Sailor_3:
# 10 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	goto EventScript_SailToVermilionCity
	goto NavelRock_Harbor_Frlg_EventScript_Sailor_1

NavelRock_Harbor_Frlg_EventScript_Sailor_4:
# 13 "data/maps/NavelRock_Harbor_Frlg/scripts.pory"
	goto EventScript_CancelSail
	goto NavelRock_Harbor_Frlg_EventScript_Sailor_1

