PokemonMansion_1F_Frlg_MapScripts::
# 2 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
# 8 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonMansion_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PokemonMansion_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	goto_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
PokemonMansion_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

PokemonMansion_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_PressSwitch_1F
	goto PokemonMansion_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

PokemonMansion_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_MANSION_1F
	end


PokemonMansion_1F_EventScript_Statue::
# 15 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	lockall
# 16 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 17 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 18 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 19 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 20 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	waitse
# 21 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	releaseall
	end


PokemonMansion_1F_EventScript_Ted::
# 26 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_TED, PokemonMansion_1F_Text_TedIntro, PokemonMansion_1F_Text_TedDefeat
# 27 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_TedPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonMansion_1F_EventScript_Johnson::
# 32 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOHNSON, PokemonMansion_1F_Text_JohnsonIntro, PokemonMansion_1F_Text_JohnsonDefeat
# 33 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonMansion_1F_Text_TedIntro::
# 37 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "Who are you?\n"
	.string "There shouldn't be anyone here.$"

PokemonMansion_1F_Text_TedDefeat::
# 42 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "Ouch!$"

PokemonMansion_1F_Text_TedPostBattle::
# 46 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "A key? I don't know what you're\n"
	.string "talking about.$"

PokemonMansion_1F_Text_JohnsonIntro::
# 51 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "W-w-waah! You startled me!\n"
	.string "I thought you were a ghost.$"

PokemonMansion_1F_Text_JohnsonDefeat::
# 56 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "Tch!\n"
	.string "I can't get any wins.$"

PokemonMansion_1F_Text_JohnsonPostBattle::
# 61 "data/maps/PokemonMansion_1F_Frlg/scripts.pory"
	.string "I was exploring here by myself,\n"
	.string "but I feel spooked.\p"
	.string "I ought to go soon.$"
