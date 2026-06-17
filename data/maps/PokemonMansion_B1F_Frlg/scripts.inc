PokemonMansion_B1F_Frlg_MapScripts::
# 2 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

PokemonMansion_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	goto_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
PokemonMansion_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

PokemonMansion_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_PressSwitch_B1F
	goto PokemonMansion_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1


PokemonMansion_B1F_EventScript_Statue::
# 11 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	lockall
# 12 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 13 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 14 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 15 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 16 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	waitse
# 17 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	releaseall
	end


PokemonMansion_B1F_EventScript_DiarySep1st::
# 22 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	msgbox PokemonMansion_B1F_Text_MewtwoIsFarTooPowerful, MSGBOX_SIGN
	end


PokemonMansion_B1F_EventScript_Lewis::
# 27 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_LEWIS, PokemonMansion_B1F_Text_LewisIntro, PokemonMansion_B1F_Text_LewisDefeat
# 28 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	msgbox PokemonMansion_B1F_Text_LewisPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonMansion_B1F_EventScript_Ivan::
# 33 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_IVAN, PokemonMansion_B1F_Text_IvanIntro, PokemonMansion_B1F_Text_IvanDefeat
# 34 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	msgbox PokemonMansion_B1F_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonMansion_B1F_Text_LewisIntro::
# 38 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "Uh-oh…\n"
	.string "Where am I now?$"

PokemonMansion_B1F_Text_LewisDefeat::
# 43 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "Awooh!$"

PokemonMansion_B1F_Text_LewisPostBattle::
# 47 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "You can find stuff lying around.\n"
	.string "The residents must've left them.$"

PokemonMansion_B1F_Text_IvanIntro::
# 52 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "This place is ideal for a lab.\n"
	.string "Look at all this space.$"

PokemonMansion_B1F_Text_IvanDefeat::
# 57 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "What was that for?$"

PokemonMansion_B1F_Text_IvanPostBattle::
# 61 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "I like it here.\n"
	.string "It's conducive to my studies.$"

PokemonMansion_B1F_Text_MewtwoIsFarTooPowerful::
# 66 "data/maps/PokemonMansion_B1F_Frlg/scripts.pory"
	.string "Diary: Sept. 1\n"
	.string "MEWTWO is far too powerful.\p"
	.string "We have failed to curb its vicious\n"
	.string "tendencies…$"
