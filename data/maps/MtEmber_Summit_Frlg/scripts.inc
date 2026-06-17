MtEmber_Summit_Frlg_MapScripts::
# 2 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtEmber_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

MtEmber_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_MOLTRES, MtEmber_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MtEmber_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

MtEmber_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	clearflag FLAG_HIDE_MOLTRES
	goto MtEmber_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MtEmber_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 9 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, MtEmber_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_3
MtEmber_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

MtEmber_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 10 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto MtEmber_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

MtEmber_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MtEmber_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto MtEmber_Summit_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1


MtEmber_Summit_EventScript_Moltres::
# 17 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	lock_faceplayer
# 18 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setwildbattle SPECIES_MOLTRES, 50
# 19 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitse
# 20 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 21 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	message Text_Gyaoo
# 22 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitmessage
# 23 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitmoncry
# 24 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	delay 10
# 25 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 26 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	waitbuttonpress
# 27 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 28 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 29 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 31 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	case B_OUTCOME_WON, MtEmber_Summit_EventScript_Moltres_3
# 35 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	case B_OUTCOME_RAN, MtEmber_Summit_EventScript_Moltres_4
# 36 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, MtEmber_Summit_EventScript_Moltres_4
MtEmber_Summit_EventScript_Moltres_1:
# 40 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MOLTRES
	release_end

MtEmber_Summit_EventScript_Moltres_3:
# 33 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MOLTRES
# 34 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
	goto MtEmber_Summit_EventScript_Moltres_1

MtEmber_Summit_EventScript_Moltres_4:
# 37 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_MOLTRES
# 38 "data/maps/MtEmber_Summit_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
	goto MtEmber_Summit_EventScript_Moltres_1

