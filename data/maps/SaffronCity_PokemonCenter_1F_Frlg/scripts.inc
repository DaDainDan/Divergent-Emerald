SaffronCity_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SaffronCity_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_SAFFRON_CITY
	end


SaffronCity_PokemonCenter_1F_EventScript_Nurse::
# 10 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 11 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


SaffronCity_PokemonCenter_1F_EventScript_Gentleman::
# 16 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_SilphCoVictimOfFame, MSGBOX_NPC
	end


SaffronCity_PokemonCenter_1F_EventScript_Woman::
# 21 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_GrowthRatesDifferBySpecies, MSGBOX_NPC
	end


SaffronCity_PokemonCenter_1F_EventScript_Youngster::
# 26 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 27 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_eq SaffronCity_PokemonCenter_1F_EventScript_Youngster_2
# 31 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_GreatIfEliteFourCameBeatRockets
	release_end

SaffronCity_PokemonCenter_1F_EventScript_Youngster_2:
# 28 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_TeamRocketTookOff
	release_end


SaffronCity_PokemonCenter_1F_Text_GrowthRatesDifferBySpecies::
# 35 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON growth rates differ from\n"
	.string "species to species.$"

SaffronCity_PokemonCenter_1F_Text_SilphCoVictimOfFame::
# 40 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "SILPH CO. is widely known to all.\p"
	.string "It's a victim of its own fame - it\n"
	.string "attracted TEAM ROCKET.$"

SaffronCity_PokemonCenter_1F_Text_GreatIfEliteFourCameBeatRockets::
# 47 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Sigh…\n"
	.string "Wouldn't this be great?\p"
	.string "If the ELITE FOUR came and\n"
	.string "stomped TEAM ROCKET?$"

SaffronCity_PokemonCenter_1F_Text_TeamRocketTookOff::
# 55 "data/maps/SaffronCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TEAM ROCKET took off!\n"
	.string "We can go out safely again!\l"
	.string "That's great!$"
