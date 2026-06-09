AncientTomb_MapScripts::
# 2 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AncientTomb_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AncientTomb_MapScripts_MAP_SCRIPT_ON_LOAD
# 19 "data/maps/AncientTomb/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AncientTomb_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AncientTomb_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/AncientTomb/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, AncientTomb_MapScripts_MAP_SCRIPT_ON_RESUME_3
AncientTomb_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

AncientTomb_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/AncientTomb/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto AncientTomb_MapScripts_MAP_SCRIPT_ON_RESUME_1

AncientTomb_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/AncientTomb/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AncientTomb_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto AncientTomb_MapScripts_MAP_SCRIPT_ON_RESUME_1

AncientTomb_MapScripts_MAP_SCRIPT_ON_LOAD:
# 9 "data/maps/AncientTomb/scripts.pory"
	goto_if_unset FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_MapScripts_MAP_SCRIPT_ON_LOAD_2
AncientTomb_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

AncientTomb_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 10 "data/maps/AncientTomb/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 11 "data/maps/AncientTomb/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 12 "data/maps/AncientTomb/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 13 "data/maps/AncientTomb/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 14 "data/maps/AncientTomb/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 15 "data/maps/AncientTomb/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	goto AncientTomb_MapScripts_MAP_SCRIPT_ON_LOAD_1

AncientTomb_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_LANDMARK_ANCIENT_TOMB
# 21 "data/maps/AncientTomb/scripts.pory"
	goto_if_unset FLAG_DEFEATED_REGISTEEL, AncientTomb_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AncientTomb_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

AncientTomb_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 22 "data/maps/AncientTomb/scripts.pory"
	clearflag FLAG_HIDE_REGISTEEL
	goto AncientTomb_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


AncientTomb_EventScript_CaveEntranceMiddle::
# 29 "data/maps/AncientTomb/scripts.pory"
	lockall
# 30 "data/maps/AncientTomb/scripts.pory"
	goto_if_set FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED, AncientTomb_EventScript_CaveEntranceMiddle_2
# 35 "data/maps/AncientTomb/scripts.pory"
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
# 36 "data/maps/AncientTomb/scripts.pory"
	releaseall
	end

AncientTomb_EventScript_CaveEntranceMiddle_2:
# 31 "data/maps/AncientTomb/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 32 "data/maps/AncientTomb/scripts.pory"
	releaseall
	end


AncientTomb_EventScript_CaveEntranceSide::
# 41 "data/maps/AncientTomb/scripts.pory"
	lockall
# 42 "data/maps/AncientTomb/scripts.pory"
	braillemsgbox AncientTomb_Braille_ShineInTheMiddle
# 43 "data/maps/AncientTomb/scripts.pory"
	releaseall
	end


AncientTomb_EventScript_Registeel::
# 48 "data/maps/AncientTomb/scripts.pory"
	lock_faceplayer
# 49 "data/maps/AncientTomb/scripts.pory"
	waitse
# 50 "data/maps/AncientTomb/scripts.pory"
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
# 51 "data/maps/AncientTomb/scripts.pory"
	delay 40
# 52 "data/maps/AncientTomb/scripts.pory"
	waitmoncry
# 53 "data/maps/AncientTomb/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 40
# 54 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 55 "data/maps/AncientTomb/scripts.pory"
	special StartRegiBattle
# 56 "data/maps/AncientTomb/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 57 "data/maps/AncientTomb/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 58 "data/maps/AncientTomb/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/AncientTomb/scripts.pory"
	case B_OUTCOME_WON, AncientTomb_EventScript_Registeel_3
# 62 "data/maps/AncientTomb/scripts.pory"
	case B_OUTCOME_RAN, AncientTomb_EventScript_Registeel_4
# 63 "data/maps/AncientTomb/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, AncientTomb_EventScript_Registeel_4
AncientTomb_EventScript_Registeel_1:
# 67 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_DEFEATED_REGISTEEL
	release_end

AncientTomb_EventScript_Registeel_3:
# 60 "data/maps/AncientTomb/scripts.pory"
	setflag FLAG_DEFEATED_REGISTEEL
# 61 "data/maps/AncientTomb/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto AncientTomb_EventScript_Registeel_1

AncientTomb_EventScript_Registeel_4:
# 64 "data/maps/AncientTomb/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGISTEEL
# 65 "data/maps/AncientTomb/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	goto AncientTomb_EventScript_Registeel_1

