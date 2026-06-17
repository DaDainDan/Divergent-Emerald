PokemonLeague_LancesRoom_Frlg_MapScripts::
# 2 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
# 7 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
# 16 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 22 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 4 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
	end

PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_POKEMON_LEAGUE, 4
	goto_if_eq PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 11 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LANCE, PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5
PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 9 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_LancesRoom_EventScript_SetEntryClosed
	goto PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 12 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpenLance
	goto PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4

PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 17 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 18 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 23 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 3, PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

PokemonLeague_LancesRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 24 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	lockall
# 25 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_LancesRoom_Movement_WalkThroughCorridor
# 26 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	waitmovement 0
# 27 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 28 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_LancesRoom_EventScript_SetEntryClosed
# 29 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	playse SE_UNLOCK
# 30 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	special DrawWholeMapView
# 31 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	waitse
# 32 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 4
# 33 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	releaseall
	end


PokemonLeague_LancesRoom_EventScript_SetEntryClosed::
# 40 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 5, 14, METATILE_PokemonLeague_Entry_TopLeft_Closed, 1
# 41 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 6, 14, METATILE_PokemonLeague_Entry_TopMid_Closed, 1
# 42 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 7, 14, METATILE_PokemonLeague_Entry_TopRight_Closed, 1
# 43 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 5, 15, METATILE_PokemonLeague_Entry_BottomLeft_Closed, 1
# 44 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 6, 15, METATILE_PokemonLeague_Entry_BottomMid_Closed, 1
# 45 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 7, 15, METATILE_PokemonLeague_Entry_BottomRight_Closed, 1
# 46 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 6, 16, METATILE_PokemonLeague_Floor_ShadeFull_Lance, 0
# 47 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setmetatile 7, 16, METATILE_PokemonLeague_Floor_ShadeFull_Lance, 0
	return


# 51 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_Movement_WalkThroughCorridor:
# 53 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 53 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 54 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 54 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 54 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 54 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 54 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 54 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 55 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_down
# 56 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 56 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 56 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 56 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 56 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 56 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 56 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 56 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 56 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 56 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 56 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 57 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 57 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 57 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 57 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 57 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 57 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 57 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
# 57 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_up
	step_end

PokemonLeague_LancesRoom_EventScript_Lance::
# 61 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	lock_faceplayer
# 62 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LANCE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 63 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LANCE, PokemonLeague_LancesRoom_EventScript_Lance_2
# 67 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LANCE, 0
# 68 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	famechecker FAMECHECKER_LANCE, 1
# 69 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_LancesRoom_EventScript_Lance_5
# 72 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LancesRoom_Text_Intro
PokemonLeague_LancesRoom_EventScript_Lance_4:
# 74 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 75 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 76 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_LancesRoom_EventScript_Lance_9
# 79 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LANCE, PokemonLeague_LancesRoom_Text_Defeat
PokemonLeague_LancesRoom_EventScript_Lance_8:
# 81 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 82 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 83 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	special Script_TryGainNewFanFromCounterFrlg
# 84 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_LANCE
# 85 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_OpenDoorLance
# 86 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LancesRoom_Text_PostBattle
# 87 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	closemessage
	release_end

PokemonLeague_LancesRoom_EventScript_Lance_2:
# 64 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LancesRoom_Text_PostBattle
	release_end

PokemonLeague_LancesRoom_EventScript_Lance_5:
# 70 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_LancesRoom_Text_RematchIntro
	goto PokemonLeague_LancesRoom_EventScript_Lance_4

PokemonLeague_LancesRoom_EventScript_Lance_9:
# 77 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LANCE_2, PokemonLeague_LancesRoom_Text_Defeat
	goto PokemonLeague_LancesRoom_EventScript_Lance_8


PokemonLeague_LancesRoom_EventScript_LanceMoveOutOfWayLeft::
# 92 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	applymovement LOCALID_LANCE, PokemonLeague_LancesRoom_EventScript_LanceMoveOutOfWayLeft_Movement_0
# 93 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	waitmovement 0
	return


PokemonLeague_LancesRoom_EventScript_LanceMoveOutOfWayRight::
# 98 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	applymovement LOCALID_LANCE, PokemonLeague_LancesRoom_EventScript_LanceMoveOutOfWayRight_Movement_0
# 99 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	waitmovement 0
	return


# 92 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_LanceMoveOutOfWayLeft_Movement_0:
# 92 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_left
# 92 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	step_faster_right
	step_end

# 98 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
PokemonLeague_LancesRoom_EventScript_LanceMoveOutOfWayRight_Movement_0:
# 98 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	walk_right
# 98 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	step_faster_left
	step_end

PokemonLeague_LancesRoom_Text_Intro::
# 103 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "Ah! I've heard about you,\n"
	.string "{PLAYER}!\p"
	.string "I lead the ELITE FOUR.\p"
	.string "You can call me LANCE the dragon\n"
	.string "TRAINER.\p"
	.string "You know that dragons are\n"
	.string "mythical POKéMON.\p"
	.string "They're hard to catch and raise,\n"
	.string "but their powers are superior.\p"
	.string "They're virtually indestructible.\n"
	.string "There's no being clever with them.\p"
	.string "Well, are you ready to lose?\p"
	.string "Your LEAGUE challenge ends with\n"
	.string "me, {PLAYER}!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_LancesRoom_Text_RematchIntro::
# 127 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "Ah!\n"
	.string "So, you've returned, {PLAYER}!\p"
	.string "I lead the ELITE FOUR.\p"
	.string "You can call me LANCE the dragon\n"
	.string "TRAINER.\p"
	.string "You know that dragons are\n"
	.string "mythical POKéMON.\p"
	.string "They're hard to catch and raise,\n"
	.string "but their powers are superior.\p"
	.string "They're virtually indestructible.\n"
	.string "There's no being clever with them.\p"
	.string "Well, are you ready to lose?\p"
	.string "Your LEAGUE challenge ends with\n"
	.string "me, {PLAYER}!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_LancesRoom_Text_Defeat::
# 151 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "That's it!\p"
	.string "I hate to admit it, but you are a\n"
	.string "POKéMON master!$"

PokemonLeague_LancesRoom_Text_PostBattle::
# 158 "data/maps/PokemonLeague_LancesRoom_Frlg/scripts.pory"
	.string "I still can't believe my dragons\n"
	.string "lost to you, {PLAYER}.\p"
	.string "You are now the POKéMON LEAGUE\n"
	.string "CHAMPION!\p"
	.string "…Or, you would have been, but\n"
	.string "you have one more challenge left.\p"
	.string "There is one more TRAINER to face!\n"
	.string "His name is…\p"
	.string "{RIVAL}!\p"
	.string "He beat the ELITE FOUR before\n"
	.string "you.\p"
	.string "He is the real POKéMON LEAGUE\n"
	.string "CHAMPION.$"
