SevenIsland_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SevenIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
	end


SevenIsland_PokemonCenter_1F_EventScript_Nurse::
# 10 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 11 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


SevenIsland_PokemonCenter_1F_EventScript_OldMan::
# 16 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections, MSGBOX_NPC
	end


SevenIsland_PokemonCenter_1F_EventScript_Sailor::
# 21 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere, MSGBOX_NPC
	end


SevenIsland_PokemonCenter_1F_EventScript_Beauty::
# 26 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower, MSGBOX_NPC
	end


SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections::
# 30 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "On this island, different events\n"
	.string "occur depending on connections.\p"
	.string "What are those connections?\p"
	.string "They are for you to discover on\n"
	.string "your own.$"

SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere::
# 40 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Did you ride a SEAGALLOP ferry\n"
	.string "to get here?\p"
	.string "There are at least ten of those\n"
	.string "high-speed ships.\p"
	.string "I don't know where they all go,\n"
	.string "though.$"

SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower::
# 51 "data/maps/SevenIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If you're confident, you should\n"
	.string "check out TRAINER TOWER.$"
