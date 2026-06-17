NavelRock_Base_Frlg_MapScripts::
# 2 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	goto_if_set FLAG_FOUGHT_LUGIA, NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_LUGIA, NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setflag FLAG_HIDE_LUGIA
	goto NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 7 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	clearflag FLAG_HIDE_LUGIA
	goto NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 6 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	goto_if_unset FLAG_LUGIA_FLEW_AWAY, NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 12 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_3
NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 13 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	removeobject LOCALID_NAVEL_ROCK_LUGIA
	goto NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto NavelRock_Base_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1


NavelRock_Base_Frlg_EventScript_Lugia::
# 20 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	lock_faceplayer
# 21 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	waitse
# 22 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	delay 20
# 23 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 24 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 25 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8005, 3
# 26 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8006, 4
# 27 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8007, 2
# 28 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	special ShakeScreen
# 29 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	delay 30
# 30 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 31 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 32 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8005, 3
# 33 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8006, 4
# 34 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8007, 2
# 35 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	special ShakeScreen
# 36 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	delay 30
# 37 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	delay 50
# 38 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	waitse
# 39 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 40 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	waitmoncry
# 41 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	delay 20
# 42 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	seteventmon SPECIES_LUGIA, 70
# 43 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 44 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 45 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 46 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 47 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	switch VAR_RESULT
# 48 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	case B_OUTCOME_WON, NavelRock_Base_Frlg_EventScript_Lugia_3
# 52 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	case B_OUTCOME_RAN, NavelRock_Base_Frlg_EventScript_Lugia_4
# 53 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, NavelRock_Base_Frlg_EventScript_Lugia_4
NavelRock_Base_Frlg_EventScript_Lugia_1:
# 57 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_LUGIA
	release_end

NavelRock_Base_Frlg_EventScript_Lugia_3:
# 49 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setflag FLAG_LUGIA_FLEW_AWAY
# 50 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_LUGIA
# 51 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
	goto NavelRock_Base_Frlg_EventScript_Lugia_1

NavelRock_Base_Frlg_EventScript_Lugia_4:
# 54 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_LUGIA
# 55 "data/maps/NavelRock_Base_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
	goto NavelRock_Base_Frlg_EventScript_Lugia_1

