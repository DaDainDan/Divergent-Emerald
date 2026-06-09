LilycoveCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LilycoveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
# 4 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	special SetLilycoveLadyGfx
# 6 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LilycoveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LilycoveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

LilycoveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON
	goto LilycoveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LilycoveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 10 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON
	goto LilycoveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


LilycoveCity_PokemonCenter_1F_EventScript_Nurse::
# 18 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_LILYCOVE_NURSE
# 19 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 20 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 21 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
	release_end


LilycoveCity_PokemonCenter_1F_EventScript_Boy::
# 26 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon, MSGBOX_NPC
	end


LilycoveCity_PokemonCenter_1F_EventScript_Maniac::
# 31 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	lock_faceplayer
# 32 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_PokemonCenter_1F_EventScript_Maniac_2
# 36 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels, MSGBOX_DEFAULT
	release_end

LilycoveCity_PokemonCenter_1F_EventScript_Maniac_2:
# 33 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels, MSGBOX_DEFAULT
	release_end


LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon::
# 40 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "I wonder how many kinds of POKéMON\n"
	.string "there are in the world.\p"
	.string "It'd be great to cross seas and\n"
	.string "trade POKéMON with people far away.$"

LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels::
# 48 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "I've been hearing about some rotten\n"
	.string "scoundrels who steal POKéMON and rip\l"
	.string "off METEORITES.$"

LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels::
# 54 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "Those rotten scoundrels who steal\n"
	.string "POKéMON and rip off METEORITES…\p"
	.string "I haven't seen them around recently.$"
