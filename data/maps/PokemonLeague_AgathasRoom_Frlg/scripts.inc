PokemonLeague_AgathasRoom_Frlg_MapScripts::
# 2 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
# 7 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
# 16 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 22 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 4 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
	end

PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 11 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_POKEMON_LEAGUE, 3
	goto_if_eq PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5
PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 9 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
	goto PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 12 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
	goto PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4

PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 17 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 18 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 23 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 2, PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

PokemonLeague_AgathasRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 24 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	lockall
# 25 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 26 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 3
# 27 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	releaseall
	end


PokemonLeague_AgathasRoom_EventScript_Agatha::
# 34 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	lock_faceplayer
# 35 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_AGATHA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 36 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_EventScript_Agatha_2
# 40 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_AGATHA, 0
# 41 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_AGATHA, 4
# 42 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 4
# 43 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_AgathasRoom_EventScript_Agatha_5
# 46 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_Intro
PokemonLeague_AgathasRoom_EventScript_Agatha_4:
# 48 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 49 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 50 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PokemonLeague_AgathasRoom_EventScript_Agatha_9
# 53 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_AGATHA_2, PokemonLeague_AgathasRoom_Text_Defeat
PokemonLeague_AgathasRoom_EventScript_Agatha_8:
# 55 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 56 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_AGATHA
# 57 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 58 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_PostBattle
	release_end

PokemonLeague_AgathasRoom_EventScript_Agatha_2:
# 37 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_PostBattle
	release_end

PokemonLeague_AgathasRoom_EventScript_Agatha_5:
# 44 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_RematchIntro
	goto PokemonLeague_AgathasRoom_EventScript_Agatha_4

PokemonLeague_AgathasRoom_EventScript_Agatha_9:
# 51 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_AGATHA, PokemonLeague_AgathasRoom_Text_Defeat
	goto PokemonLeague_AgathasRoom_EventScript_Agatha_8


PokemonLeague_AgathasRoom_Text_Intro::
# 62 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "I am AGATHA of the ELITE FOUR.\p"
	.string "I hear OAK's taken a lot of\n"
	.string "interest in you, child.\p"
	.string "That old duff was once tough and\n"
	.string "handsome.\p"
	.string "But that was decades ago.\n"
	.string "He's a shadow of his former self.\p"
	.string "Now he just wants to fiddle with\n"
	.string "his POKéDEX.\p"
	.string "He's wrong.\n"
	.string "POKéMON are for battling!\p"
	.string "{PLAYER}! I'll show you how a real\n"
	.string "TRAINER battles!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_AgathasRoom_Text_RematchIntro::
# 84 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "I am AGATHA of the ELITE FOUR.\p"
	.string "You're the child that OAK's taken\n"
	.string "under his wing, aren't you?\p"
	.string "That old duff was once tough and\n"
	.string "handsome.\p"
	.string "But that was decades ago.\n"
	.string "He's a shadow of his former self.\p"
	.string "Now he just wants to fiddle with\n"
	.string "his POKéDEX.\p"
	.string "He's wrong.\n"
	.string "POKéMON are for battling!\p"
	.string "{PLAYER}! I'll show you how a real\n"
	.string "TRAINER battles!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_AgathasRoom_Text_Defeat::
# 106 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "Oh, my!\n"
	.string "You're something special, child!$"

PokemonLeague_AgathasRoom_Text_PostBattle::
# 111 "data/maps/PokemonLeague_AgathasRoom_Frlg/scripts.pory"
	.string "You win!\p"
	.string "I see what the old duff sees in\n"
	.string "you now.\p"
	.string "I have nothing else to say.\n"
	.string "Run along now, child!$"
