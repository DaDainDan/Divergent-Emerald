MarineCave_End_MapScripts::
# 2 "data/maps/MarineCave_End/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MarineCave_End_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/MarineCave_End/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MarineCave_End_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MarineCave_End_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/MarineCave_End/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, MarineCave_End_MapScripts_MAP_SCRIPT_ON_RESUME_3
MarineCave_End_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

MarineCave_End_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/MarineCave_End/scripts.pory"
	removeobject LOCALID_MARINE_CAVE_KYOGRE
	goto MarineCave_End_MapScripts_MAP_SCRIPT_ON_RESUME_1

MarineCave_End_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/MarineCave_End/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MarineCave_End_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto MarineCave_End_MapScripts_MAP_SCRIPT_ON_RESUME_1

MarineCave_End_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/MarineCave_End/scripts.pory"
	goto_if_unset FLAG_DEFEATED_KYOGRE, MarineCave_End_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MarineCave_End_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

MarineCave_End_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/MarineCave_End/scripts.pory"
	clearflag FLAG_HIDE_MARINE_CAVE_KYOGRE
# 11 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto MarineCave_End_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


MarineCave_End_EventScript_Kyogre::
# 18 "data/maps/MarineCave_End/scripts.pory"
	lockall
# 19 "data/maps/MarineCave_End/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 20 "data/maps/MarineCave_End/scripts.pory"
	waitmovement 0
# 21 "data/maps/MarineCave_End/scripts.pory"
	applymovement LOCALID_MARINE_CAVE_KYOGRE, MarineCave_End_Movement_KyogreApproach
# 22 "data/maps/MarineCave_End/scripts.pory"
	waitmovement 0
# 23 "data/maps/MarineCave_End/scripts.pory"
	waitse
# 24 "data/maps/MarineCave_End/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 25 "data/maps/MarineCave_End/scripts.pory"
	delay 40
# 26 "data/maps/MarineCave_End/scripts.pory"
	waitmoncry
# 27 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_MARINE_CAVE_KYOGRE
# 28 "data/maps/MarineCave_End/scripts.pory"
	setwildbattle SPECIES_KYOGRE, 70
# 29 "data/maps/MarineCave_End/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/MarineCave_End/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 31 "data/maps/MarineCave_End/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 32 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_TEMP_1, 0
# 33 "data/maps/MarineCave_End/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/MarineCave_End/scripts.pory"
	switch VAR_RESULT
# 35 "data/maps/MarineCave_End/scripts.pory"
	case B_OUTCOME_WON, MarineCave_End_EventScript_Kyogre_3
# 39 "data/maps/MarineCave_End/scripts.pory"
	case B_OUTCOME_RAN, MarineCave_End_EventScript_Kyogre_4
# 40 "data/maps/MarineCave_End/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, MarineCave_End_EventScript_Kyogre_4
MarineCave_End_EventScript_Kyogre_1:
# 44 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 45 "data/maps/MarineCave_End/scripts.pory"
	setflag FLAG_DEFEATED_KYOGRE
# 46 "data/maps/MarineCave_End/scripts.pory"
	releaseall
	end

MarineCave_End_EventScript_Kyogre_3:
# 36 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 37 "data/maps/MarineCave_End/scripts.pory"
	setflag FLAG_DEFEATED_KYOGRE
# 38 "data/maps/MarineCave_End/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MarineCave_End_EventScript_Kyogre_1

MarineCave_End_EventScript_Kyogre_4:
# 41 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_0x8004, SPECIES_KYOGRE
# 42 "data/maps/MarineCave_End/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	goto MarineCave_End_EventScript_Kyogre_1


# 50 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_Movement_KyogreApproach:
# 52 "data/maps/MarineCave_End/scripts.pory"
	init_affine_anim
# 53 "data/maps/MarineCave_End/scripts.pory"
	walk_down_start_affine
# 54 "data/maps/MarineCave_End/scripts.pory"
	delay_16
# 54 "data/maps/MarineCave_End/scripts.pory"
	delay_16
# 55 "data/maps/MarineCave_End/scripts.pory"
	walk_down_affine
# 56 "data/maps/MarineCave_End/scripts.pory"
	delay_16
# 56 "data/maps/MarineCave_End/scripts.pory"
	delay_16
# 57 "data/maps/MarineCave_End/scripts.pory"
	walk_down_affine
	step_end
