PokemonTower_2F_Frlg_MapScripts::
	.byte 0


PokemonTower_2F_EventScript_Channeler::
# 4 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	msgbox PokemonTower_2F_Text_SilphScopeCouldUnmaskGhosts, MSGBOX_NPC
	end


PokemonTower_2F_EventScript_RivalTriggerRight::
# 9 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	lockall
# 10 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 11 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival
	end


PokemonTower_2F_EventScript_RivalTriggerDown::
# 16 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	lockall
# 17 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	goto PokemonTower_2F_EventScript_Rival
	end


PokemonTower_2F_EventScript_Rival::
# 23 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 24 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 25 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 26 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	case 0, PokemonTower_2F_EventScript_Rival_3
# 29 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	case 1, PokemonTower_2F_EventScript_Rival_4
PokemonTower_2F_EventScript_Rival_1:
# 33 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	waitmovement 0
# 34 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_ExclamationMark
# 35 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	waitmovement 0
# 36 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_Delay48
# 37 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	waitmovement 0
# 38 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	msgbox PokemonTower_2F_Text_RivalIntro
# 39 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_POKEMON_TOWER_RIVAL
# 40 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	switch VAR_STARTER_MON
# 41 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	case CHOSE_BULBASAUR, PokemonTower_2F_EventScript_Rival_7
# 42 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	case CHOSE_SQUIRTLE, PokemonTower_2F_EventScript_Rival_8
# 43 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	case CHOSE_CHARMANDER, PokemonTower_2F_EventScript_Rival_9
PokemonTower_2F_EventScript_Rival_5:
# 45 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	msgbox PokemonTower_2F_Text_RivalPostBattle
# 46 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	closemessage
# 47 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 48 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 49 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	case 0, PokemonTower_2F_EventScript_Rival_12
# 50 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	case 1, PokemonTower_2F_EventScript_Rival_13
PokemonTower_2F_EventScript_Rival_10:
# 52 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	playse SE_EXIT
# 53 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	delay 25
# 54 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	fadedefaultbgm
# 55 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_RIVAL
# 56 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_TOWER_2F, 1
# 57 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	releaseall
	end

PokemonTower_2F_EventScript_Rival_3:
# 27 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_StepFasterRight
# 28 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto PokemonTower_2F_EventScript_Rival_1

PokemonTower_2F_EventScript_Rival_4:
# 30 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, Common_Movement_StepFasterDown
# 31 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PokemonTower_2F_EventScript_Rival_1

PokemonTower_2F_EventScript_Rival_7:
# 41 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_POKEMON_TOWER_CHARMANDER, PokemonTower_2F_Text_RivalDefeat
	goto PokemonTower_2F_EventScript_Rival_5

PokemonTower_2F_EventScript_Rival_8:
# 42 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_POKEMON_TOWER_BULBASAUR, PokemonTower_2F_Text_RivalDefeat
	goto PokemonTower_2F_EventScript_Rival_5

PokemonTower_2F_EventScript_Rival_9:
# 43 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_POKEMON_TOWER_SQUIRTLE, PokemonTower_2F_Text_RivalDefeat
	goto PokemonTower_2F_EventScript_Rival_5

PokemonTower_2F_EventScript_Rival_12:
# 49 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, PokemonTower_2F_EventScript_Rival_Movement_0
	goto PokemonTower_2F_EventScript_Rival_10

PokemonTower_2F_EventScript_Rival_13:
# 50 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_RIVAL, PokemonTower_2F_EventScript_Rival_Movement_1
	goto PokemonTower_2F_EventScript_Rival_10


# 49 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_Movement_0:
# 49 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 49 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_right
# 49 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_right
# 49 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 49 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 49 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 49 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 49 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	step_faster_right
	step_end

# 50 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
PokemonTower_2F_EventScript_Rival_Movement_1:
# 50 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_right
# 50 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_right
# 50 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	step_faster_right
	step_end

PokemonTower_2F_Text_RivalIntro::
# 61 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\n"
	.string "What brings you here?\l"
	.string "Is your POKéMON dead?\p"
	.string "Hey! It's alive!\p"
	.string "I can at least make them faint!\n"
	.string "Let's go!$"

PokemonTower_2F_Text_RivalDefeat::
# 72 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "What?\n"
	.string "You stinker!\p"
	.string "I took it easy on you, too!$"

PokemonTower_2F_Text_RivalPostBattle::
# 79 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "How's your POKéDEX coming?\n"
	.string "I just caught a CUBONE!\p"
	.string "I can't find the bigger MAROWAK.\n"
	.string "Where could they be?\p"
	.string "I bet there aren't any left!\p"
	.string "Well, I better get going.\n"
	.string "I've got a lot to accomplish,\l"
	.string "unlike you.\p"
	.string "Smell ya later!$"

PokemonTower_2F_Text_SilphScopeCouldUnmaskGhosts::
# 95 "data/maps/PokemonTower_2F_Frlg/scripts.pory"
	.string "Even we could not identify the\n"
	.string "wayward ghosts.\p"
	.string "A SILPH SCOPE might be able to\n"
	.string "unmask them.$"
