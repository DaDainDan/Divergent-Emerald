TerraCave_End_MapScripts::
# 2 "data/maps/TerraCave_End/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TerraCave_End_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/TerraCave_End/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TerraCave_End_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TerraCave_End_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/TerraCave_End/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, TerraCave_End_MapScripts_MAP_SCRIPT_ON_RESUME_3
TerraCave_End_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

TerraCave_End_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/TerraCave_End/scripts.pory"
	removeobject LOCALID_TERRA_CAVE_GROUDON
	goto TerraCave_End_MapScripts_MAP_SCRIPT_ON_RESUME_1

TerraCave_End_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/TerraCave_End/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq TerraCave_End_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto TerraCave_End_MapScripts_MAP_SCRIPT_ON_RESUME_1

TerraCave_End_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/TerraCave_End/scripts.pory"
	goto_if_unset FLAG_DEFEATED_GROUDON, TerraCave_End_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
TerraCave_End_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

TerraCave_End_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/TerraCave_End/scripts.pory"
	clearflag FLAG_HIDE_TERRA_CAVE_GROUDON
# 11 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto TerraCave_End_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


TerraCave_End_EventScript_Groudon::
# 18 "data/maps/TerraCave_End/scripts.pory"
	lockall
# 19 "data/maps/TerraCave_End/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 20 "data/maps/TerraCave_End/scripts.pory"
	waitmovement 0
# 21 "data/maps/TerraCave_End/scripts.pory"
	applymovement LOCALID_TERRA_CAVE_GROUDON, TerraCave_End_Movement_GroudonApproach
# 22 "data/maps/TerraCave_End/scripts.pory"
	waitmovement 0
# 23 "data/maps/TerraCave_End/scripts.pory"
	waitse
# 24 "data/maps/TerraCave_End/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 25 "data/maps/TerraCave_End/scripts.pory"
	delay 40
# 26 "data/maps/TerraCave_End/scripts.pory"
	waitmoncry
# 27 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_TERRA_CAVE_GROUDON
# 28 "data/maps/TerraCave_End/scripts.pory"
	setwildbattle SPECIES_GROUDON, 70
# 29 "data/maps/TerraCave_End/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/TerraCave_End/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 31 "data/maps/TerraCave_End/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 32 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_TEMP_1, 0
# 33 "data/maps/TerraCave_End/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/TerraCave_End/scripts.pory"
	switch VAR_RESULT
# 35 "data/maps/TerraCave_End/scripts.pory"
	case B_OUTCOME_WON, TerraCave_End_EventScript_Groudon_3
# 39 "data/maps/TerraCave_End/scripts.pory"
	case B_OUTCOME_RAN, TerraCave_End_EventScript_Groudon_4
# 40 "data/maps/TerraCave_End/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, TerraCave_End_EventScript_Groudon_4
TerraCave_End_EventScript_Groudon_1:
# 44 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 45 "data/maps/TerraCave_End/scripts.pory"
	setflag FLAG_DEFEATED_GROUDON
# 46 "data/maps/TerraCave_End/scripts.pory"
	releaseall
	end

TerraCave_End_EventScript_Groudon_3:
# 36 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 37 "data/maps/TerraCave_End/scripts.pory"
	setflag FLAG_DEFEATED_GROUDON
# 38 "data/maps/TerraCave_End/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto TerraCave_End_EventScript_Groudon_1

TerraCave_End_EventScript_Groudon_4:
# 41 "data/maps/TerraCave_End/scripts.pory"
	setvar VAR_0x8004, SPECIES_GROUDON
# 42 "data/maps/TerraCave_End/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	goto TerraCave_End_EventScript_Groudon_1


# 50 "data/maps/TerraCave_End/scripts.pory"
TerraCave_End_Movement_GroudonApproach:
# 52 "data/maps/TerraCave_End/scripts.pory"
	init_affine_anim
# 53 "data/maps/TerraCave_End/scripts.pory"
	walk_down_start_affine
# 54 "data/maps/TerraCave_End/scripts.pory"
	delay_16
# 54 "data/maps/TerraCave_End/scripts.pory"
	delay_16
# 55 "data/maps/TerraCave_End/scripts.pory"
	walk_down_affine
# 56 "data/maps/TerraCave_End/scripts.pory"
	delay_16
# 56 "data/maps/TerraCave_End/scripts.pory"
	delay_16
# 57 "data/maps/TerraCave_End/scripts.pory"
	walk_down_affine
	step_end
