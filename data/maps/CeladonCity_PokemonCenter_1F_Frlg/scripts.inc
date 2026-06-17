CeladonCity_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CeladonCity_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CELADON_CITY
	end


CeladonCity_PokemonCenter_1F_EventScript_Nurse::
# 10 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 11 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


CeladonCity_PokemonCenter_1F_EventScript_Gentleman::
# 16 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeladonCity_PokemonCenter_1F_Text_PokeFluteAwakensSleepingMons, MSGBOX_NPC
	end


CeladonCity_PokemonCenter_1F_EventScript_CooltrainerF::
# 21 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeladonCity_PokemonCenter_1F_Text_RodeHereFromFuchsia, MSGBOX_NPC
	end


CeladonCity_PokemonCenter_1F_EventScript_Youngster::
# 26 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CeladonCity_PokemonCenter_1F_Text_GoToCyclingRoadIfIHadBike, MSGBOX_NPC
	end


CeladonCity_PokemonCenter_1F_Text_PokeFluteAwakensSleepingMons::
# 30 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "A POKé FLUTE awakens sleeping\n"
	.string "POKéMON. You know that.\p"
	.string "It does so with a sound that only\n"
	.string "they can hear.$"

CeladonCity_PokemonCenter_1F_Text_RodeHereFromFuchsia::
# 38 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I rode here from FUCHSIA.\p"
	.string "It's an uphill ride on CYCLING\n"
	.string "ROAD, so I'm exhausted.$"

CeladonCity_PokemonCenter_1F_Text_GoToCyclingRoadIfIHadBike::
# 45 "data/maps/CeladonCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If I had a BIKE, I would go to\n"
	.string "CYCLING ROAD!$"
