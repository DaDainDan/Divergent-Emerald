ThreeIsland_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

ThreeIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_THREE_ISLAND
	end


ThreeIsland_PokemonCenter_1F_EventScript_Nurse::
# 10 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 11 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


ThreeIsland_PokemonCenter_1F_EventScript_Sailor::
# 16 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands, MSGBOX_NPC
	end


ThreeIsland_PokemonCenter_1F_EventScript_Lass::
# 21 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest, MSGBOX_NPC
	end


ThreeIsland_PokemonCenter_1F_EventScript_Rocker::
# 26 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto, MSGBOX_NPC
	end


ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto::
# 30 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Hey, did you hear the news?\p"
	.string "The PC network here can now link\n"
	.string "with PCs in KANTO.\p"
	.string "I don't know how that came about,\n"
	.string "but it's fantastic!$"

ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands::
# 40 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's impossible to SURF between the\n"
	.string "islands around these parts.\p"
	.string "The tides are too fast and\n"
	.string "treacherous.$"

ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest::
# 48 "data/maps/ThreeIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Let's crush BERRIES!\n"
	.string "…That'd be wasting BERRIES?\p"
	.string "You can always find some BERRIES\n"
	.string "on the ground in BERRY FOREST.$"
