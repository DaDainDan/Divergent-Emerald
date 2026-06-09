EverGrandeCity_GlaciasRoom_MapScripts::
# 11 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_LOAD
# 2 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 20 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_LOAD:
# 12 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2
EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 15 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	compare VAR_ELITE_4_STATE, 3
	goto_if_eq EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_LOAD_5
EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 13 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	goto EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1

EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 16 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	goto EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_LOAD_4

EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 2, EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lockall
# 5 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 6 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 3
# 7 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	releaseall
	end

EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 21 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

EverGrandeCity_GlaciasRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 22 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


EverGrandeCity_GlaciasRoom_EventScript_Glacia::
# 29 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	lock_faceplayer
# 30 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	goto_if_unset FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_Glacia_2
EverGrandeCity_GlaciasRoom_EventScript_Glacia_1:
# 37 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release_end

EverGrandeCity_GlaciasRoom_EventScript_Glacia_2:
# 31 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 32 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 33 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_Defeat
# 34 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
# 35 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	goto EverGrandeCity_GlaciasRoom_EventScript_Glacia_1


EverGrandeCity_GlaciasRoom_Text_IntroSpeech::
# 41 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Welcome, my name is GLACIA\n"
	.string "of the ELITE FOUR.\p"
	.string "I've traveled from afar to HOENN\n"
	.string "so that I may hone my ice skills.\p"
	.string "But all I have seen are challenges by\n"
	.string "weak TRAINERS and their POKéMON.\p"
	.string "What about you?\p"
	.string "It would please me to no end if I could\n"
	.string "go all out against you!$"

EverGrandeCity_GlaciasRoom_Text_Defeat::
# 57 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "You and your POKéMON…\n"
	.string "How hot your spirits burn!\p"
	.string "The all-consuming heat overwhelms.\p"
	.string "It's no surprise that my icy skills\n"
	.string "failed to harm you.$"

EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech::
# 67 "data/maps/EverGrandeCity_GlaciasRoom/scripts.pory"
	.string "Advance to the next room.\p"
	.string "And there, confirm the truly fearsome\n"
	.string "side of the POKéMON LEAGUE.$"
