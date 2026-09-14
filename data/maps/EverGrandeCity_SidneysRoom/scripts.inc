EverGrandeCity_SidneysRoom_MapScripts::
# 2 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_LOAD
# 17 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 22 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2
EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	compare VAR_ELITE_4_STATE, 1
	goto_if_eq EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_LOAD_5
EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	goto EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1

EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 7 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	goto EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_LOAD_4

EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 18 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 19 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
	end

EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 12 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 13 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 23 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 0, EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

EverGrandeCity_SidneysRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 24 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lockall
# 25 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 26 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 1
# 27 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	releaseall
	end


EverGrandeCity_SidneysRoom_EventScript_Sidney::
# 34 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lock_faceplayer
# 35 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, EverGrandeCity_SidneysRoom_EventScript_Sidney_2
# 50 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_unset FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_Sidney_5
EverGrandeCity_SidneysRoom_EventScript_Sidney_4:
# 57 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release_end

EverGrandeCity_SidneysRoom_EventScript_Sidney_2:
# 36 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_unset FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_Sidney_8
EverGrandeCity_SidneysRoom_EventScript_Sidney_7:
# 47 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostRematchSpeech, MSGBOX_DEFAULT
	release_end

EverGrandeCity_SidneysRoom_EventScript_Sidney_5:
# 51 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 52 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 53 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_SIDNEY, EverGrandeCity_SidneysRoom_Text_Defeat
# 54 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
# 55 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	goto EverGrandeCity_SidneysRoom_EventScript_Sidney_4

EverGrandeCity_SidneysRoom_EventScript_Sidney_8:
# 37 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 38 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeechRematch, MSGBOX_DEFAULT
# 39 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	specialvar VAR_RESULT, GetEliteFourRematch
# 40 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	switch VAR_RESULT
# 41 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	case 0, EverGrandeCity_SidneysRoom_EventScript_Sidney_12
# 42 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	case 1, EverGrandeCity_SidneysRoom_EventScript_Sidney_13
EverGrandeCity_SidneysRoom_EventScript_Sidney_10:
# 44 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
# 45 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	goto EverGrandeCity_SidneysRoom_EventScript_Sidney_7

EverGrandeCity_SidneysRoom_EventScript_Sidney_12:
# 41 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_SIDNEY_2, EverGrandeCity_SidneysRoom_Text_DefeatRematch
	goto EverGrandeCity_SidneysRoom_EventScript_Sidney_10

EverGrandeCity_SidneysRoom_EventScript_Sidney_13:
# 42 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_SIDNEY_3, EverGrandeCity_SidneysRoom_Text_DefeatRematch
	goto EverGrandeCity_SidneysRoom_EventScript_Sidney_10


EverGrandeCity_SidneysRoom_Text_IntroSpeech::
# 61 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Welcome, challenger!\n"
	.string "I'm SIDNEY of the ELITE FOUR.\p"
	.string "I like that look you're giving me.\n"
	.string "I guess you'll give me a good match.\l"
	.string "That's good! Looking real good!\p"
	.string "All right! You and me, let's enjoy\n"
	.string "a battle that can only be staged\l"
	.string "here in the POKéMON LEAGUE!$"

EverGrandeCity_SidneysRoom_Text_Defeat::
# 74 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Well, how do you like that? I lost!\n"
	.string "Eh, it was fun, so it doesn't matter.$"

EverGrandeCity_SidneysRoom_Text_PostBattleSpeech::
# 79 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Well, listen to what this loser has\n"
	.string "to say.\p"
	.string "You've got what it takes to go far.\n"
	.string "Now, go on to the next room and enjoy\l"
	.string "your next battle!$"

EverGrandeCity_SidneysRoom_Text_IntroSpeechRematch::
# 88 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Welcome, challenger!\n"
	.string "I'm SIDNEY of the ELITE FOUR.\p"
	.string "I like that look you're giving me.\n"
	.string "I guess you'll give me a good match.\l"
	.string "That's good! Looking real good!\p"
	.string "All right! You and me, let's enjoy\n"
	.string "a battle that can only be staged\l"
	.string "here in the POKéMON LEAGUE!$"

EverGrandeCity_SidneysRoom_Text_DefeatRematch::
# 101 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Well, how do you like that? I lost!\n"
	.string "Eh, it was fun, so it doesn't matter.$"

EverGrandeCity_SidneysRoom_Text_PostRematchSpeech::
# 106 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Well, listen to what this loser has\n"
	.string "to say.\p"
	.string "You've got what it takes to go far.\n"
	.string "Now, go on to the next room and enjoy\l"
	.string "your next battle!$"
