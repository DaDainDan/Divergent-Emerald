CeruleanCave_B1F_Frlg_MapScripts::
# 2 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CeruleanCave_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCave_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CeruleanCave_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, CeruleanCave_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_3
CeruleanCave_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

CeruleanCave_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto CeruleanCave_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

CeruleanCave_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq CeruleanCave_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto CeruleanCave_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

CeruleanCave_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_MEWTWO, CeruleanCave_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
CeruleanCave_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

CeruleanCave_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_MEWTWO
	goto CeruleanCave_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


CeruleanCave_B1F_EventScript_Mewtwo::
# 17 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	lock_faceplayer
# 18 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitse
# 19 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
# 20 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	message CeruleanCave_B1F_Text_Mew
# 21 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitmessage
# 22 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitmoncry
# 23 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	delay 20
# 24 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 25 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitbuttonpress
# 26 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setwildbattle SPECIES_MEWTWO, 70
# 27 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 28 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 29 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 31 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	case B_OUTCOME_WON, CeruleanCave_B1F_EventScript_Mewtwo_3
# 35 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	case B_OUTCOME_RAN, CeruleanCave_B1F_EventScript_Mewtwo_4
# 36 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, CeruleanCave_B1F_EventScript_Mewtwo_4
CeruleanCave_B1F_EventScript_Mewtwo_1:
# 40 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MEWTWO
	release_end

CeruleanCave_B1F_EventScript_Mewtwo_3:
# 33 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MEWTWO
# 34 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
	goto CeruleanCave_B1F_EventScript_Mewtwo_1

CeruleanCave_B1F_EventScript_Mewtwo_4:
# 37 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEWTWO
# 38 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
	goto CeruleanCave_B1F_EventScript_Mewtwo_1


CeruleanCave_B1F_Text_Mew::
# 44 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	.string "Mew!$"
