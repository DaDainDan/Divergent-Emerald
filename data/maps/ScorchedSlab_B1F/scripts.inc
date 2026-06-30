ScorchedSlab_B1F_MapScripts::
# 4 "data/maps/ScorchedSlab_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_RESUME
# 10 "data/maps/ScorchedSlab_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_LOAD
# 42 "data/maps/ScorchedSlab_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 5 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_3
ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 6 "data/maps/ScorchedSlab_B1F/scripts.pory"
	removeobject LOCALID_SCORCHED_SLAB_REGIGIGAS
	goto ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_1

ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ScorchedSlab_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_1

ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 11 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto_if_unset FLAG_SYS_REGIGIGAS_PUZZLE_COMPLETED, ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_2
ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 24 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto_if_set FLAG_SYS_REGIGIGAS_PUZZLE_COMPLETED, ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_5
ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 13 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 11, 20, 0x2F9, TRUE
# 14 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 12, 20, 0x2F9, TRUE
# 15 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 13, 20, 0x2F9, TRUE
# 16 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 11, 21, 0x2F9, TRUE
# 17 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 12, 21, 0x2F9, TRUE
# 18 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 13, 21, 0x2F9, TRUE
# 20 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 12, 24, 0x2F9, TRUE
# 21 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 12, 25, 0x2F9, TRUE
# 22 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 12, 26, 0x2F9, TRUE
	goto ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_1

ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 26 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 10, 28, 0x201, FALSE
# 27 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 11, 28, 0x201, FALSE
# 28 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 11, 29, 0x201, FALSE
# 29 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 11, 30, 0x201, FALSE
# 30 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 12, 27, 0x201, FALSE
# 31 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 12, 28, 0x201, FALSE
# 32 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 12, 29, 0x201, FALSE
# 33 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 12, 30, 0x201, FALSE
# 34 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 12, 31, 0x201, FALSE
# 35 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 13, 28, 0x201, FALSE
# 36 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 13, 29, 0x201, FALSE
# 37 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 13, 30, 0x201, FALSE
# 38 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 14, 28, 0x201, FALSE
	goto ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_4

ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 43 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_REGIGIGAS, ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 44 "data/maps/ScorchedSlab_B1F/scripts.pory"
	clearflag FLAG_HIDE_REGIGIGAS
	goto ScorchedSlab_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


ScorchedSlab_B1F_EventScript_OpenRegiEntrance::
# 51 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto_if_set FLAG_TEMP_REGICE_REGIGIGAS_COMPLETE, ScorchedSlab_B1F_EventScript_OpenRegiEntrance_4
ScorchedSlab_B1F_EventScript_OpenRegiEntrance_1:
	end

ScorchedSlab_B1F_EventScript_OpenRegiEntrance_2:
# 53 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setvar VAR_0x8004, 1
# 54 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setvar VAR_0x8005, 1
# 55 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setvar VAR_0x8006, 8
# 56 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setvar VAR_0x8007, 5
# 57 "data/maps/ScorchedSlab_B1F/scripts.pory"
	special ShakeCamera
# 58 "data/maps/ScorchedSlab_B1F/scripts.pory"
	waitstate
# 59 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 11, 20, 0x30E, TRUE
# 60 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 12, 20, 0x2FE, TRUE
# 61 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 13, 20, 0x2FF, TRUE
# 62 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 11, 21, 0x316, TRUE
# 63 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 12, 21, 0x306, FALSE
# 64 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setmetatile 13, 21, 0x307, TRUE
# 65 "data/maps/ScorchedSlab_B1F/scripts.pory"
	special DrawWholeMapView
# 66 "data/maps/ScorchedSlab_B1F/scripts.pory"
	playse SE_BANG
# 67 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setflag FLAG_SYS_REGIGIGAS_PUZZLE_COMPLETED
# 68 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setvar VAR_SCORCHED_SLAB_STATE, 1
	goto ScorchedSlab_B1F_EventScript_OpenRegiEntrance_1

ScorchedSlab_B1F_EventScript_OpenRegiEntrance_3:
# 52 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto_if_set FLAG_TEMP_REGISTEEL_REGIGIGAS_COMPLETE, ScorchedSlab_B1F_EventScript_OpenRegiEntrance_2
	goto ScorchedSlab_B1F_EventScript_OpenRegiEntrance_1

ScorchedSlab_B1F_EventScript_OpenRegiEntrance_4:
# 51 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto_if_set FLAG_TEMP_REGIROCK_REGIGIGAS_COMPLETE, ScorchedSlab_B1F_EventScript_OpenRegiEntrance_3
	goto ScorchedSlab_B1F_EventScript_OpenRegiEntrance_1


ScorchedSlab_B1F_EventScript_FirstRegigigasTablet::
# 74 "data/maps/ScorchedSlab_B1F/scripts.pory"
	lockall
# 75 "data/maps/ScorchedSlab_B1F/scripts.pory"
	braillemsgbox ScorchedSlab_B1F_Braille_GodAndCreator
# 76 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setflag FLAG_TEMP_1
# 77 "data/maps/ScorchedSlab_B1F/scripts.pory"
	releaseall
	end


ScorchedSlab_B1F_EventScript_SecondRegigigasTablet::
# 82 "data/maps/ScorchedSlab_B1F/scripts.pory"
	lockall
# 83 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, ScorchedSlab_B1F_EventScript_SecondRegigigasTablet_2
ScorchedSlab_B1F_EventScript_SecondRegigigasTablet_1:
# 86 "data/maps/ScorchedSlab_B1F/scripts.pory"
	braillemsgbox ScorchedSlab_B1F_Braille_PowerOfThree
# 87 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setflag FLAG_START_REGIGIGAS_PUZZLE
# 88 "data/maps/ScorchedSlab_B1F/scripts.pory"
	releaseall
	end

ScorchedSlab_B1F_EventScript_SecondRegigigasTablet_2:
# 84 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto ScorchedSlab_B1F_EventScript_TabletUnreadable
	goto ScorchedSlab_B1F_EventScript_SecondRegigigasTablet_1


ScorchedSlab_B1F_EventScript_RegiceTablet::
# 93 "data/maps/ScorchedSlab_B1F/scripts.pory"
	lockall
# 94 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto_if_unset FLAG_START_REGIGIGAS_PUZZLE, ScorchedSlab_B1F_EventScript_RegiceTablet_2
ScorchedSlab_B1F_EventScript_RegiceTablet_1:
# 97 "data/maps/ScorchedSlab_B1F/scripts.pory"
	braillemsgbox ScorchedSlab_B1F_Braille_RevealSecrets
# 98 "data/maps/ScorchedSlab_B1F/scripts.pory"
	releaseall
	end

ScorchedSlab_B1F_EventScript_RegiceTablet_2:
# 95 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto ScorchedSlab_B1F_EventScript_TabletUnreadable
	goto ScorchedSlab_B1F_EventScript_RegiceTablet_1


ScorchedSlab_B1F_EventScript_RegirockTablet::
# 103 "data/maps/ScorchedSlab_B1F/scripts.pory"
	lockall
# 104 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto_if_unset FLAG_START_REGIGIGAS_PUZZLE, ScorchedSlab_B1F_EventScript_RegirockTablet_2
# 104 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto_if_unset FLAG_TEMP_REGICE_REGIGIGAS_COMPLETE, ScorchedSlab_B1F_EventScript_RegirockTablet_5
ScorchedSlab_B1F_EventScript_RegirockTablet_1:
# 107 "data/maps/ScorchedSlab_B1F/scripts.pory"
	braillemsgbox ScorchedSlab_B1F_Braille_CrushTheDebris
# 108 "data/maps/ScorchedSlab_B1F/scripts.pory"
	releaseall
	end

ScorchedSlab_B1F_EventScript_RegirockTablet_2:
# 105 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto ScorchedSlab_B1F_EventScript_TabletUnreadable
	goto ScorchedSlab_B1F_EventScript_RegirockTablet_1

ScorchedSlab_B1F_EventScript_RegirockTablet_5:
# 104 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto_if_unset FLAG_SYS_REGIGIGAS_PUZZLE_COMPLETED, ScorchedSlab_B1F_EventScript_RegirockTablet_2
	goto ScorchedSlab_B1F_EventScript_RegirockTablet_1


ScorchedSlab_B1F_EventScript_RegisteelTablet::
# 113 "data/maps/ScorchedSlab_B1F/scripts.pory"
	lockall
# 114 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto_if_unset FLAG_START_REGIGIGAS_PUZZLE, ScorchedSlab_B1F_EventScript_RegisteelTablet_2
# 114 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto_if_unset FLAG_TEMP_REGICE_REGIGIGAS_COMPLETE, ScorchedSlab_B1F_EventScript_RegisteelTablet_5
ScorchedSlab_B1F_EventScript_RegisteelTablet_1:
# 117 "data/maps/ScorchedSlab_B1F/scripts.pory"
	braillemsgbox ScorchedSlab_B1F_Braille_PaveTheWay
# 118 "data/maps/ScorchedSlab_B1F/scripts.pory"
	releaseall
	end

ScorchedSlab_B1F_EventScript_RegisteelTablet_2:
# 115 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto ScorchedSlab_B1F_EventScript_TabletUnreadable
	goto ScorchedSlab_B1F_EventScript_RegisteelTablet_1

ScorchedSlab_B1F_EventScript_RegisteelTablet_5:
# 114 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto_if_unset FLAG_SYS_REGIGIGAS_PUZZLE_COMPLETED, ScorchedSlab_B1F_EventScript_RegisteelTablet_2
	goto ScorchedSlab_B1F_EventScript_RegisteelTablet_1


ScorchedSlab_B1F_EventScript_TabletUnreadable::
# 123 "data/maps/ScorchedSlab_B1F/scripts.pory"
	msgbox ScorchedSlab_B1F_Text_UnreadableTablet, MSGBOX_DEFAULT
# 124 "data/maps/ScorchedSlab_B1F/scripts.pory"
	releaseall
	end


ScorchedSlab_B1F_EventScript_Regigigas::
# 129 "data/maps/ScorchedSlab_B1F/scripts.pory"
	lock_faceplayer
# 130 "data/maps/ScorchedSlab_B1F/scripts.pory"
	waitse
# 131 "data/maps/ScorchedSlab_B1F/scripts.pory"
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
# 132 "data/maps/ScorchedSlab_B1F/scripts.pory"
	delay 40
# 133 "data/maps/ScorchedSlab_B1F/scripts.pory"
	waitmoncry
# 134 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setwildbattle SPECIES_REGIGIGAS, 100
# 135 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 136 "data/maps/ScorchedSlab_B1F/scripts.pory"
	special StartRegiBattle
# 137 "data/maps/ScorchedSlab_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 138 "data/maps/ScorchedSlab_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 139 "data/maps/ScorchedSlab_B1F/scripts.pory"
	switch VAR_RESULT
# 140 "data/maps/ScorchedSlab_B1F/scripts.pory"
	case B_OUTCOME_WON, ScorchedSlab_B1F_EventScript_Regigigas_3
# 143 "data/maps/ScorchedSlab_B1F/scripts.pory"
	case B_OUTCOME_RAN, ScorchedSlab_B1F_EventScript_Regigigas_4
# 144 "data/maps/ScorchedSlab_B1F/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, ScorchedSlab_B1F_EventScript_Regigigas_4
ScorchedSlab_B1F_EventScript_Regigigas_1:
# 149 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setflag FLAG_DEFEATED_REGIGIGAS
	release_end

ScorchedSlab_B1F_EventScript_Regigigas_3:
# 141 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setflag FLAG_DEFEATED_REGIGIGAS
# 142 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ScorchedSlab_B1F_EventScript_Regigigas_1

ScorchedSlab_B1F_EventScript_Regigigas_4:
# 145 "data/maps/ScorchedSlab_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGIGIGAS
# 146 "data/maps/ScorchedSlab_B1F/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end


ScorchedSlab_B1F_Text_UnreadableTablet::
# 153 "data/maps/ScorchedSlab_B1F/scripts.pory"
	.string "Something is obscuring the markings on\n"
	.string "the tablet.$"
