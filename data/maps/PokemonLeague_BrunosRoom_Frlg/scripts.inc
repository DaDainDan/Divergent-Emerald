PokemonLeague_BrunosRoom_Frlg_MapScripts::
# 2 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
# 7 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
# 16 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 22 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 4 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
	end

PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 11 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_POKEMON_LEAGUE, 2
	goto_if_eq PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5
PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 9 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
	goto PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 12 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
	goto PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4

PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 17 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 18 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 23 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 1, PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

PokemonLeague_BrunosRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 24 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	lockall
# 25 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 26 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 2
# 27 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	releaseall
	end


PokemonLeague_BrunosRoom_EventScript_Bruno::
# 34 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	lock_faceplayer
# 35 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 36 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_unset FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_Bruno_2
PokemonLeague_BrunosRoom_EventScript_Bruno_1:
# 55 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 56 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	closemessage
# 57 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	switch VAR_FACING
# 58 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	case DIR_NORTH, PokemonLeague_BrunosRoom_EventScript_Bruno_6
# 59 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	case DIR_SOUTH, PokemonLeague_BrunosRoom_EventScript_Bruno_7
# 60 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	case DIR_WEST, PokemonLeague_BrunosRoom_EventScript_Bruno_8
# 61 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	case DIR_EAST, PokemonLeague_BrunosRoom_EventScript_Bruno_8
PokemonLeague_BrunosRoom_EventScript_Bruno_4:
# 63 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	waitmovement 0
	release_end

PokemonLeague_BrunosRoom_EventScript_Bruno_2:
# 37 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 0
# 38 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 1
# 39 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_Bruno_10
# 42 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_Intro
PokemonLeague_BrunosRoom_EventScript_Bruno_9:
# 44 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 45 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 46 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_BrunosRoom_EventScript_Bruno_14
# 49 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO, PokemonLeague_BrunosRoom_Text_Defeat
PokemonLeague_BrunosRoom_EventScript_Bruno_13:
# 51 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 52 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_BRUNO
# 53 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_1

PokemonLeague_BrunosRoom_EventScript_Bruno_6:
# 58 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_StepFasterRight
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_4

PokemonLeague_BrunosRoom_EventScript_Bruno_7:
# 59 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_StepFasterLeft
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_4

PokemonLeague_BrunosRoom_EventScript_Bruno_8:
# 61 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_StepFasterDown
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_4

PokemonLeague_BrunosRoom_EventScript_Bruno_10:
# 40 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_RematchIntro
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_9

PokemonLeague_BrunosRoom_EventScript_Bruno_14:
# 47 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO_2, PokemonLeague_BrunosRoom_Text_Defeat
	goto PokemonLeague_BrunosRoom_EventScript_Bruno_13


PokemonLeague_BrunosRoom_Text_Intro::
# 67 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "I am BRUNO of the ELITE FOUR!\p"
	.string "Through rigorous training, people\n"
	.string "and POKéMON can become stronger\l"
	.string "without limit.\p"
	.string "I've lived and trained with my\n"
	.string "fighting POKéMON!\l"
	.string "And that will never change!\p"
	.string "{PLAYER}!\p"
	.string "We will grind you down with our\n"
	.string "superior power!\p"
	.string "Hoo hah!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_BrunosRoom_Text_RematchIntro::
# 86 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "I am BRUNO of the ELITE FOUR!\p"
	.string "Through rigorous training, people\n"
	.string "and POKéMON can become stronger\l"
	.string "without limit.\p"
	.string "I've lived and trained with my\n"
	.string "fighting POKéMON!\l"
	.string "And that will never change!\p"
	.string "{PLAYER}!\p"
	.string "We will grind you down with our\n"
	.string "superior power!\p"
	.string "Hoo hah!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_BrunosRoom_Text_Defeat::
# 105 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "Why?\n"
	.string "How could I lose?$"

PokemonLeague_BrunosRoom_Text_PostBattle::
# 110 "data/maps/PokemonLeague_BrunosRoom_Frlg/scripts.pory"
	.string "My job is done.\n"
	.string "Go face your next challenge.$"
