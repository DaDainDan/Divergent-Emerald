PowerPlant_Frlg_MapScripts::
# 2 "data/maps/PowerPlant_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/PowerPlant_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_3
PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/PowerPlant_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/PowerPlant_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POWER_PLANT
# 10 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_ZAPDOS, PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1, PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 16 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2, PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	end

PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_HIDE_ZAPDOS
	goto PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 14 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_HIDE_POWER_PLANT_ELECTRODE_1
	goto PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 17 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_HIDE_POWER_PLANT_ELECTRODE_2
	goto PowerPlant_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_7


PowerPlant_EventScript_Zapdos::
# 24 "data/maps/PowerPlant_Frlg/scripts.pory"
	lock_faceplayer
# 25 "data/maps/PowerPlant_Frlg/scripts.pory"
	setwildbattle SPECIES_ZAPDOS, 50
# 26 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitse
# 27 "data/maps/PowerPlant_Frlg/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 28 "data/maps/PowerPlant_Frlg/scripts.pory"
	message Text_Gyaoo
# 29 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitmessage
# 30 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitmoncry
# 31 "data/maps/PowerPlant_Frlg/scripts.pory"
	delay 10
# 32 "data/maps/PowerPlant_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 33 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitbuttonpress
# 34 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 35 "data/maps/PowerPlant_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 36 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 37 "data/maps/PowerPlant_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 38 "data/maps/PowerPlant_Frlg/scripts.pory"
	switch VAR_RESULT
# 39 "data/maps/PowerPlant_Frlg/scripts.pory"
	case B_OUTCOME_WON, PowerPlant_EventScript_Zapdos_3
# 42 "data/maps/PowerPlant_Frlg/scripts.pory"
	case B_OUTCOME_RAN, PowerPlant_EventScript_Zapdos_4
# 43 "data/maps/PowerPlant_Frlg/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, PowerPlant_EventScript_Zapdos_4
PowerPlant_EventScript_Zapdos_1:
# 47 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_ZAPDOS
	release_end

PowerPlant_EventScript_Zapdos_3:
# 40 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_ZAPDOS
# 41 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
	goto PowerPlant_EventScript_Zapdos_1

PowerPlant_EventScript_Zapdos_4:
# 44 "data/maps/PowerPlant_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_ZAPDOS
# 45 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
	goto PowerPlant_EventScript_Zapdos_1


PowerPlant_EventScript_Electrode1::
# 52 "data/maps/PowerPlant_Frlg/scripts.pory"
	lock_faceplayer
# 53 "data/maps/PowerPlant_Frlg/scripts.pory"
	call PowerPlant_EventScript_ElectrodeBattle
# 54 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PowerPlant_EventScript_Electrode1_2
# 54 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq PowerPlant_EventScript_Electrode1_2
# 54 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq PowerPlant_EventScript_Electrode1_2
PowerPlant_EventScript_Electrode1_1:
# 58 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1
	release_end

PowerPlant_EventScript_Electrode1_2:
# 55 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1
# 56 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
	goto PowerPlant_EventScript_Electrode1_1


PowerPlant_EventScript_Electrode2::
# 63 "data/maps/PowerPlant_Frlg/scripts.pory"
	lock_faceplayer
# 64 "data/maps/PowerPlant_Frlg/scripts.pory"
	call PowerPlant_EventScript_ElectrodeBattle
# 65 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PowerPlant_EventScript_Electrode2_2
# 65 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq PowerPlant_EventScript_Electrode2_2
# 65 "data/maps/PowerPlant_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq PowerPlant_EventScript_Electrode2_2
PowerPlant_EventScript_Electrode2_1:
# 69 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2
	release_end

PowerPlant_EventScript_Electrode2_2:
# 66 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2
# 67 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
	goto PowerPlant_EventScript_Electrode2_1


PowerPlant_EventScript_ElectrodeBattle::
# 74 "data/maps/PowerPlant_Frlg/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 34
# 75 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitse
# 76 "data/maps/PowerPlant_Frlg/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 77 "data/maps/PowerPlant_Frlg/scripts.pory"
	delay 40
# 78 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitmoncry
# 79 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 80 "data/maps/PowerPlant_Frlg/scripts.pory"
	dowildbattle
# 81 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 82 "data/maps/PowerPlant_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
	return

