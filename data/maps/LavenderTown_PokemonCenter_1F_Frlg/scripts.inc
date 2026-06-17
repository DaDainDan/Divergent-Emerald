LavenderTown_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LavenderTown_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_LAVENDER_TOWN
	end


LavenderTown_PokemonCenter_1F_EventScript_Nurse::
# 10 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 11 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


LavenderTown_PokemonCenter_1F_EventScript_Gentleman::
# 16 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox LavenderTown_PokemonCenter_1F_Text_RocketsDoAnythingForMoney, MSGBOX_NPC
	end


LavenderTown_PokemonCenter_1F_EventScript_Lass::
# 21 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox LavenderTown_PokemonCenter_1F_Text_CubonesMotherKilledByRockets, MSGBOX_NPC
	end


LavenderTown_PokemonCenter_1F_EventScript_Youngster::
# 26 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox LavenderTown_PokemonCenter_1F_Text_PeoplePayForCuboneSkulls, MSGBOX_NPC
	end


LavenderTown_PokemonCenter_1F_Text_RocketsDoAnythingForMoney::
# 30 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TEAM ROCKET will do anything for\n"
	.string "the sake of money!\p"
	.string "There is no job too dirty, no deed\n"
	.string "too heinous, no crime too wicked!$"

LavenderTown_PokemonCenter_1F_Text_CubonesMotherKilledByRockets::
# 38 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I saw CUBONE's mother trying to\n"
	.string "escape from TEAM ROCKET.\p"
	.string "She was killed trying to get away…$"

LavenderTown_PokemonCenter_1F_Text_PeoplePayForCuboneSkulls::
# 45 "data/maps/LavenderTown_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You know how the CUBONE species\n"
	.string "wears skulls, right?\p"
	.string "People will pay a lot for one.$"
