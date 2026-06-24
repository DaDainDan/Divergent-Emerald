EverGrandeCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

EverGrandeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY
# 4 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_MET_SCOTT_IN_EVERGRANDE, EverGrandeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
EverGrandeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

EverGrandeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
	goto EverGrandeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EverGrandeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 4 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, EverGrandeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto EverGrandeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


EverGrandeCity_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_EVER_GRANDE_NURSE
# 14 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
	release_end


EverGrandeCity_PokemonCenter_1F_EventScript_Woman::
# 21 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad, MSGBOX_NPC
	end


EverGrandeCity_PokemonCenter_1F_EventScript_ExpertM::
# 26 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon, MSGBOX_NPC
	end


EverGrandeCity_PokemonCenter_1F_EventScript_Scott::
# 31 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	lock_faceplayer
# 32 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou, MSGBOX_DEFAULT
# 33 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 34 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq EverGrandeCity_PokemonCenter_1F_EventScript_Scott_2
# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_EVER_GRANDE_SCOTT, EverGrandeCity_PokemonCenter_1F_EventScript_Scott_Movement_1
EverGrandeCity_PokemonCenter_1F_EventScript_Scott_1:
# 39 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 41 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 42 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 43 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	waitse
# 44 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_EVER_GRANDE_SCOTT
	release_end

EverGrandeCity_PokemonCenter_1F_EventScript_Scott_2:
# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_EVER_GRANDE_SCOTT, EverGrandeCity_PokemonCenter_1F_EventScript_Scott_Movement_0
	goto EverGrandeCity_PokemonCenter_1F_EventScript_Scott_1


# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Scott_Movement_0:
# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 35 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
	step_end

# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
EverGrandeCity_PokemonCenter_1F_EventScript_Scott_Movement_1:
# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_left
# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
# 37 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	walk_down
	step_end

EverGrandeCity_PokemonCenter_1F_Text_LeagueAfterVictoryRoad::
# 48 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The POKéMON LEAGUE is only a short\n"
	.string "distance after the VICTORY ROAD.\p"
	.string "If you've come this far, what choice\n"
	.string "do you have but to keep going?$"

EverGrandeCity_PokemonCenter_1F_Text_BelieveInYourPokemon::
# 56 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "The long and harrowing VICTORY ROAD…\p"
	.string "It's like reliving the path one has\n"
	.string "traveled in life…\p"
	.string "Believe in your POKéMON and give it\n"
	.string "your very best!$"

EverGrandeCity_PokemonCenter_1F_Text_ScottHappyForYou::
# 66 "data/maps/EverGrandeCity_PokemonCenter_1F/scripts.pory"
	.string "{SPEAKER NAME_SCOTT}{PLAYER}{KUN}, you've clawed your\n"
	.string "way up to face the POKéMON LEAGUE!\p"
	.string "I'm happy for you!\n"
	.string "You made my cheering worthwhile!\p"
	.string "{PLAYER}{KUN}, if you were to become\n"
	.string "the POKéMON LEAGUE CHAMPION…\p"
	.string "I'll get in touch with you then.\p"
	.string "Okay, {PLAYER}{KUN}.\n"
	.string "Go for greatness!$"
