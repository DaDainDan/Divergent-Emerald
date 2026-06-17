PokemonLeague_LoreleisRoom_Frlg_MapScripts::
# 2 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
# 7 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
# 16 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 20 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 26 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 4 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
	end

PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 11 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_POKEMON_LEAGUE, 1
	goto_if_eq PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5
PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 9 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
	goto PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 12 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
	goto PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4

PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM
	end

PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 21 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 22 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 27 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 0, PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

PokemonLeague_LoreleisRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 28 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	lockall
# 29 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 30 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 1
# 31 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	releaseall
	end


PokemonLeague_LoreleisRoom_EventScript_Lorelei::
# 38 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	lock_faceplayer
# 39 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 40 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_Lorelei_2
PokemonLeague_LoreleisRoom_EventScript_Lorelei_1:
# 61 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_PostBattle
	release_end

PokemonLeague_LoreleisRoom_EventScript_Lorelei_2:
# 41 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 0
# 42 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 1
# 43 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_Lorelei_5
PokemonLeague_LoreleisRoom_EventScript_Lorelei_4:
# 46 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_Lorelei_8
PokemonLeague_LoreleisRoom_EventScript_Lorelei_7:
# 49 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 50 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 51 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_Lorelei_11
PokemonLeague_LoreleisRoom_EventScript_Lorelei_10:
# 54 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_LoreleisRoom_EventScript_Lorelei_14
PokemonLeague_LoreleisRoom_EventScript_Lorelei_13:
# 57 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 58 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_LORELEI
# 59 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
	goto PokemonLeague_LoreleisRoom_EventScript_Lorelei_1

PokemonLeague_LoreleisRoom_EventScript_Lorelei_5:
# 44 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_Intro
	goto PokemonLeague_LoreleisRoom_EventScript_Lorelei_4

PokemonLeague_LoreleisRoom_EventScript_Lorelei_8:
# 47 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_RematchIntro
	goto PokemonLeague_LoreleisRoom_EventScript_Lorelei_7

PokemonLeague_LoreleisRoom_EventScript_Lorelei_11:
# 52 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI, PokemonLeague_LoreleisRoom_Text_Defeat
	goto PokemonLeague_LoreleisRoom_EventScript_Lorelei_10

PokemonLeague_LoreleisRoom_EventScript_Lorelei_14:
# 55 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI_2, PokemonLeague_LoreleisRoom_Text_Defeat
	goto PokemonLeague_LoreleisRoom_EventScript_Lorelei_13


PokemonLeague_LoreleisRoom_Text_Intro::
# 65 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Welcome to the POKéMON LEAGUE.\p"
	.string "I am LORELEI of the ELITE FOUR.\p"
	.string "No one can best me when it comes\n"
	.string "to icy POKéMON.\p"
	.string "Freezing moves are powerful.\p"
	.string "Your POKéMON will be at my mercy\n"
	.string "when they are frozen solid.\p"
	.string "Hahaha!\n"
	.string "Are you ready?{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_LoreleisRoom_Text_RematchIntro::
# 82 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "Welcome to the POKéMON LEAGUE.\p"
	.string "I, LORELEI of the ELITE FOUR,\n"
	.string "have returned!\p"
	.string "You know how it goes.\n"
	.string "No one can best me when it comes\l"
	.string "to icy POKéMON.\p"
	.string "Freezing moves are powerful.\p"
	.string "Your POKéMON will be at my mercy\n"
	.string "when they are frozen solid.\p"
	.string "Hahaha!\n"
	.string "Are you ready?{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_LoreleisRoom_Text_Defeat::
# 101 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "…Things shouldn't be this way!$"

PokemonLeague_LoreleisRoom_Text_PostBattle::
# 105 "data/maps/PokemonLeague_LoreleisRoom_Frlg/scripts.pory"
	.string "You're better than I thought.\n"
	.string "Go on ahead.\p"
	.string "You only got a taste of the\n"
	.string "POKéMON LEAGUE's power.$"
