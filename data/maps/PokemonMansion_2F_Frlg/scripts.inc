PokemonMansion_2F_Frlg_MapScripts::
# 2 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

PokemonMansion_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	goto_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
PokemonMansion_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

PokemonMansion_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_PressSwitch_2F
	goto PokemonMansion_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1


PokemonMansion_2F_EventScript_Statue::
# 11 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	lockall
# 12 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 13 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 14 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 15 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	special DrawWholeMapView
# 16 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	waitse
# 17 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	releaseall
	end


PokemonMansion_2F_EventScript_DiaryJuly5th::
# 22 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_NewMonDiscoveredInGuyanaJungle, MSGBOX_SIGN
	end


PokemonMansion_2F_EventScript_DiaryJuly10th::
# 27 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_ChristenedDiscoveredMonMew, MSGBOX_SIGN
	end


PokemonMansion_2F_EventScript_Arnie::
# 32 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_ARNIE, PokemonMansion_1F_Text_ArnieIntro, PokemonMansion_1F_Text_ArnieDefeat
# 33 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_ArniePostBattle, MSGBOX_AUTOCLOSE
	end


PokemonMansion_Text_PressSecretSwitch::
# 37 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "A secret switch!\p"
	.string "Press it?$"

PokemonMansion_Text_WhoWouldnt::
# 43 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Who wouldn't?$"

PokemonMansion_Text_NotQuiteYet::
# 47 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Not quite yet!$"

PokemonMansion_1F_Text_ArnieIntro::
# 51 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "I can't get out!\n"
	.string "This old place is one big puzzle.$"

PokemonMansion_1F_Text_ArnieDefeat::
# 56 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Oh, no!\n"
	.string "My bag of loot!$"

PokemonMansion_1F_Text_ArniePostBattle::
# 61 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "The switches here open and close\n"
	.string "alternating sets of doors.$"

PokemonMansion_1F_Text_NewMonDiscoveredInGuyanaJungle::
# 66 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Diary: July 5\n"
	.string "Guyana, South America\p"
	.string "A new POKéMON was discovered deep\n"
	.string "in the jungle.$"

PokemonMansion_1F_Text_ChristenedDiscoveredMonMew::
# 74 "data/maps/PokemonMansion_2F_Frlg/scripts.pory"
	.string "Diary: July 10\n"
	.string "We christened the newly discovered\l"
	.string "POKéMON, MEW.$"
