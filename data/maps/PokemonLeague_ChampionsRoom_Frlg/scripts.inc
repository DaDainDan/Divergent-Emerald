PokemonLeague_ChampionsRoom_Frlg_MapScripts::
# 8 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
# 2 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 27 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 9 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 4
# 10 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 11 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	switch VAR_STARTER_MON
# 12 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	case CHOSE_BULBASAUR, PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_3
# 16 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	case CHOSE_SQUIRTLE, PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_4
# 20 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	case CHOSE_CHARMANDER, PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_5
PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_3:
# 13 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	checktrainerflag TRAINER_CHAMPION_FIRST_CHARMANDER
	goto_if 1, PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 13 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	checktrainerflag TRAINER_CHAMPION_REMATCH_CHARMANDER
	goto_if 1, PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_6
	goto PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 17 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	checktrainerflag TRAINER_CHAMPION_FIRST_BULBASAUR
	goto_if 1, PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_10
# 17 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	checktrainerflag TRAINER_CHAMPION_REMATCH_BULBASAUR
	goto_if 1, PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_10
	goto PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 21 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	checktrainerflag TRAINER_CHAMPION_FIRST_SQUIRTLE
	goto_if 1, PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_14
# 21 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	checktrainerflag TRAINER_CHAMPION_REMATCH_SQUIRTLE
	goto_if 1, PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_14
	goto PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 14 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_10:
# 18 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_14:
# 22 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

PokemonLeague_ChampionsRoom_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 28 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_EventScript_EnterRoom
	.2byte 0


PokemonLeague_ChampionsRoom_EventScript_EnterRoom::
# 33 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	lockall
# 34 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 35 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 36 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_Movement_0
# 37 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 38 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 20
# 39 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_2
# 42 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_Intro
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_1:
# 44 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
# 45 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_5
# 46 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	savebgm MUS_VICTORY_GYM_LEADER
# 47 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_6
# 54 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	switch VAR_STARTER_MON
# 55 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	case CHOSE_BULBASAUR, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_14
# 56 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	case CHOSE_SQUIRTLE, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_15
# 57 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	case CHOSE_CHARMANDER, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_16
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_5:
# 60 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_4
# 61 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	clearflag FLAG_TEMP_5
# 62 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_CHAMP
# 63 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setflag FLAG_TEMP_4
# 64 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_PostBattle
# 65 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	playbgm MUS_RG_SLOW_PALLET, 0
# 66 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_PROF_OAK
# 67 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakPlayer
# 68 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	closemessage
# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_Movement_1
# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_KANTO_CHAMPIONS_ROOM_RIVAL, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_Movement_2
# 71 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, PokemonLeague_ChampionsRoom_Movement_OakEnter
# 72 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 73 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 25
# 74 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetStarterPokemon
# 75 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_RESULT
# 76 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakCongratulations
# 77 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, Common_Movement_StepFasterRight
# 78 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_KANTO_CHAMPIONS_ROOM_RIVAL, Common_Movement_StepFasterLeft
# 79 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 80 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakImDisappointedRival
# 81 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	closemessage
# 82 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, Common_Movement_StepFasterDown
# 83 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 84 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 20
# 85 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakPlayerComeWithMe
# 86 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	closemessage
# 87 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay 13
# 88 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_PROF_OAK, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_Movement_3
# 89 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerExit
# 90 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitmovement 0
# 91 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 92 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	warp MAP_POKEMON_LEAGUE_HALL_OF_FAME, 5, 12
# 93 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	waitstate
# 94 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	releaseall
	end

PokemonLeague_ChampionsRoom_EventScript_EnterRoom_2:
# 40 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_RematchIntro
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_1

PokemonLeague_ChampionsRoom_EventScript_EnterRoom_6:
# 48 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	switch VAR_STARTER_MON
# 49 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	case CHOSE_BULBASAUR, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_10
# 50 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	case CHOSE_SQUIRTLE, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_11
# 51 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	case CHOSE_CHARMANDER, PokemonLeague_ChampionsRoom_EventScript_EnterRoom_12
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_5

PokemonLeague_ChampionsRoom_EventScript_EnterRoom_10:
# 49 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_CHARMANDER, PokemonLeague_ChampionsRoom_Text_Defeat
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_5

PokemonLeague_ChampionsRoom_EventScript_EnterRoom_11:
# 50 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_BULBASAUR, PokemonLeague_ChampionsRoom_Text_Defeat
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_5

PokemonLeague_ChampionsRoom_EventScript_EnterRoom_12:
# 51 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_SQUIRTLE, PokemonLeague_ChampionsRoom_Text_Defeat
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_5

PokemonLeague_ChampionsRoom_EventScript_EnterRoom_14:
# 55 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_CHARMANDER, PokemonLeague_ChampionsRoom_Text_Defeat
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_5

PokemonLeague_ChampionsRoom_EventScript_EnterRoom_15:
# 56 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_BULBASAUR, PokemonLeague_ChampionsRoom_Text_Defeat
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_5

PokemonLeague_ChampionsRoom_EventScript_EnterRoom_16:
# 57 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_SQUIRTLE, PokemonLeague_ChampionsRoom_Text_Defeat
	goto PokemonLeague_ChampionsRoom_EventScript_EnterRoom_5


PokemonLeague_ChampionsRoom_EventScript_QuestLogEnd::
# 99 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 100 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	releaseall
	end


# 104 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerExit:
# 106 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 107 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_left
# 108 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 108 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 108 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 109 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_right
# 110 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 110 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 110 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 110 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 111 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_8
# 112 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	set_invisible
	step_end

# 115 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_OakEnter:
# 117 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 117 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 118 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 118 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 118 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 118 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 118 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 119 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_left
# 120 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 120 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 121 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_faster_down
# 122 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
	step_end

# 36 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_Movement_0:
# 36 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 36 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 36 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 36 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 36 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 36 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 36 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 36 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 36 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 36 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
	step_end

# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_Movement_1:
# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_8
# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_faster_down
# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 69 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_faster_left
	step_end

# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_Movement_2:
# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_16
# 70 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	step_faster_left
	step_end

# 88 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom_Movement_3:
# 88 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 88 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 88 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_right
# 88 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 88 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 88 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 88 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	walk_up
# 88 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	delay_8
# 88 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	set_invisible
	step_end

PokemonLeague_ChampionsRoom_Text_Intro::
# 125 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\p"
	.string "I was looking forward to seeing\n"
	.string "you, {PLAYER}.\p"
	.string "My rival should be strong to keep\n"
	.string "me sharp.\p"
	.string "While working on my POKéDEX, I\n"
	.string "looked all over for POKéMON.\p"
	.string "Not only that, I assembled teams\n"
	.string "that would beat any POKéMON type.\p"
	.string "And now…\p"
	.string "I'm the POKéMON LEAGUE CHAMPION!\p"
	.string "{PLAYER}!\n"
	.string "Do you know what that means?\p"
	.string "I'll tell you.\p"
	.string "I am the most powerful TRAINER in\n"
	.string "the world!$"

PokemonLeague_ChampionsRoom_Text_RematchIntro::
# 153 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\p"
	.string "You came back, {PLAYER}!\n"
	.string "Hahah, that is so great!\p"
	.string "My rival should be strong to keep\n"
	.string "me sharp.\p"
	.string "While working on my POKéDEX, I\n"
	.string "looked all over for POKéMON.\p"
	.string "Not only that, I assembled teams\n"
	.string "that would beat any POKéMON type.\p"
	.string "And now…\p"
	.string "I'm the POKéMON LEAGUE CHAMPION!\p"
	.string "{PLAYER}!\n"
	.string "Do you know what that means?\p"
	.string "I'll tell you.\p"
	.string "I am the most powerful TRAINER in\n"
	.string "the world!$"

PokemonLeague_ChampionsRoom_Text_Defeat::
# 181 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "NO!\n"
	.string "That can't be!\l"
	.string "You beat me at my best!\p"
	.string "After all that work to become\n"
	.string "the LEAGUE CHAMP?\p"
	.string "My reign is over already?\n"
	.string "It's not fair!$"

PokemonLeague_ChampionsRoom_Text_Victory::
# 193 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "はーはッ！\n"
	.string "かった！　かった！　かった！\p"
	.string "{PLAYER}に　まける　ような\n"
	.string "おれさま　では　なーい！\p"
	.string "ま！　ポケモンの\n"
	.string "てんさい　{RIVAL}さま　あいてに\l"
	.string "ここまで　よく　がんばった！\p"
	.string "ほめて　つかわす！\n"
	.string "はーッ！　はーはッはッ！$"

PokemonLeague_ChampionsRoom_Text_PostBattle::
# 208 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "Why?\n"
	.string "Why did I lose?\p"
	.string "I never made any mistakes raising\n"
	.string "my POKéMON…\p"
	.string "Darn it! You're the new POKéMON\n"
	.string "LEAGUE CHAMPION!\p"
	.string "Although I don't like to admit it…$"

PokemonLeague_ChampionsRoom_Text_OakPlayer::
# 221 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: {PLAYER}!$"

PokemonLeague_ChampionsRoom_Text_OakCongratulations::
# 225 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: So, you've won!\n"
	.string "Sincerely, congratulations!\p"
	.string "You're the new POKéMON LEAGUE\n"
	.string "CHAMPION!\p"
	.string "You've grown up so much since you\n"
	.string "first left with {STR_VAR_1} to work\l"
	.string "on the POKéDEX.\p"
	.string "{PLAYER}, you have come of age!$"

PokemonLeague_ChampionsRoom_Text_OakImDisappointedRival::
# 239 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: {RIVAL}…\n"
	.string "I'm disappointed in you.\p"
	.string "I came when I heard you'd beaten\n"
	.string "the ELITE FOUR.\p"
	.string "But, when I got here, you had\n"
	.string "already lost!\p"
	.string "{RIVAL}, do you understand why\n"
	.string "you lost?\p"
	.string "You have forgotten to treat your\n"
	.string "POKéMON with love and trust.\p"
	.string "Without them, you will never\n"
	.string "become a CHAMP again!$"

PokemonLeague_ChampionsRoom_Text_OakPlayerComeWithMe::
# 259 "data/maps/PokemonLeague_ChampionsRoom_Frlg/scripts.pory"
	.string "OAK: {PLAYER}.\p"
	.string "You understand that your victory\n"
	.string "was not just your own doing.\p"
	.string "The bond you share with your\n"
	.string "POKéMON is marvelous.\p"
	.string "{PLAYER}!\n"
	.string "Come with me!$"
