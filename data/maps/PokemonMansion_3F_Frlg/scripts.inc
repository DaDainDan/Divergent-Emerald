PokemonMansion_3F_Frlg_MapScripts::
# 2 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

PokemonMansion_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	goto_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
PokemonMansion_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

PokemonMansion_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_PressSwitch_3F
	goto PokemonMansion_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1


PokemonMansion_3F_EventScript_Statue::
# 11 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	lockall
# 12 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 13 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 14 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 15 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	special DrawWholeMapView
# 16 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	waitse
# 17 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	releaseall
	end


PokemonMansion_3F_EventScript_DiaryFeb6th::
# 22 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_MewGaveBirthToMewtwo, MSGBOX_SIGN
	end


PokemonMansion_3F_EventScript_Simon::
# 27 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_SIMON, PokemonMansion_1F_Text_SimonIntro, PokemonMansion_1F_Text_SimonDefeat
# 28 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonMansion_3F_EventScript_Braydon::
# 33 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_BRAYDON, PokemonMansion_1F_Text_BraydonIntro, PokemonMansion_1F_Text_BraydonDefeat
# 34 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	msgbox PokemonMansion_1F_Text_BraydonPostBattle, MSGBOX_AUTOCLOSE
	end


PokemonMansion_1F_Text_SimonIntro::
# 38 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "This place is, like, huge!$"

PokemonMansion_1F_Text_SimonDefeat::
# 42 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Ayah!$"

PokemonMansion_1F_Text_SimonPostBattle::
# 46 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "I wonder where my partner went.$"

PokemonMansion_1F_Text_BraydonIntro::
# 50 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "My mentor once lived here.$"

PokemonMansion_1F_Text_BraydonDefeat::
# 54 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Whew!\n"
	.string "Overwhelming!$"

PokemonMansion_1F_Text_BraydonPostBattle::
# 59 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "So, you're stuck?\n"
	.string "Try jumping off over there!$"

PokemonMansion_1F_Text_MewGaveBirthToMewtwo::
# 64 "data/maps/PokemonMansion_3F_Frlg/scripts.pory"
	.string "Diary: Feb. 6\n"
	.string "MEW gave birth.\p"
	.string "We named the newborn MEWTWO.$"
