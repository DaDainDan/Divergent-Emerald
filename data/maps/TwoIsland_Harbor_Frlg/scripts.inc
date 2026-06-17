TwoIsland_Harbor_Frlg_MapScripts::
	.byte 0


TwoIsland_Harbor_EventScript_Sailor::
# 4 "data/maps/TwoIsland_Harbor_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/TwoIsland_Harbor_Frlg/scripts.pory"
	message Text_WhereDoYouWantToSail
# 6 "data/maps/TwoIsland_Harbor_Frlg/scripts.pory"
	waitmessage
# 7 "data/maps/TwoIsland_Harbor_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_TWO_ISLAND
# 8 "data/maps/TwoIsland_Harbor_Frlg/scripts.pory"
	goto EventScript_ChooseDestFromTwoIsland
	end

