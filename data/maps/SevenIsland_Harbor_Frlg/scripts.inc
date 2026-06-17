SevenIsland_Harbor_Frlg_MapScripts::
	.byte 0


SevenIsland_Harbor_EventScript_Sailor::
# 4 "data/maps/SevenIsland_Harbor_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SevenIsland_Harbor_Frlg/scripts.pory"
	message Text_WhereDoYouWantToSail
# 6 "data/maps/SevenIsland_Harbor_Frlg/scripts.pory"
	waitmessage
# 7 "data/maps/SevenIsland_Harbor_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_SEVEN_ISLAND
# 8 "data/maps/SevenIsland_Harbor_Frlg/scripts.pory"
	goto EventScript_ChooseDestFromIsland
	end

