DesertRuins_MapScripts::
# 2 "data/maps/DesertRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, DesertRuins_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/DesertRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DesertRuins_MapScripts_MAP_SCRIPT_ON_LOAD
# 19 "data/maps/DesertRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DesertRuins_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DesertRuins_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/DesertRuins/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, DesertRuins_MapScripts_MAP_SCRIPT_ON_RESUME_3
DesertRuins_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

DesertRuins_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/DesertRuins/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto DesertRuins_MapScripts_MAP_SCRIPT_ON_RESUME_1

DesertRuins_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/DesertRuins/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq DesertRuins_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto DesertRuins_MapScripts_MAP_SCRIPT_ON_RESUME_1

DesertRuins_MapScripts_MAP_SCRIPT_ON_LOAD:
# 9 "data/maps/DesertRuins/scripts.pory"
	goto_if_unset FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_MapScripts_MAP_SCRIPT_ON_LOAD_2
DesertRuins_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

DesertRuins_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 10 "data/maps/DesertRuins/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 11 "data/maps/DesertRuins/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 12 "data/maps/DesertRuins/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 13 "data/maps/DesertRuins/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 14 "data/maps/DesertRuins/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 15 "data/maps/DesertRuins/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	goto DesertRuins_MapScripts_MAP_SCRIPT_ON_LOAD_1

DesertRuins_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_LANDMARK_DESERT_RUINS
# 21 "data/maps/DesertRuins/scripts.pory"
	goto_if_unset FLAG_DEFEATED_REGIROCK, DesertRuins_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
DesertRuins_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

DesertRuins_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 22 "data/maps/DesertRuins/scripts.pory"
	clearflag FLAG_HIDE_REGIROCK
	goto DesertRuins_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


DesertRuins_EventScript_CaveEntranceMiddle::
# 29 "data/maps/DesertRuins/scripts.pory"
	lockall
# 30 "data/maps/DesertRuins/scripts.pory"
	goto_if_set FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_EventScript_CaveEntranceMiddle_2
# 33 "data/maps/DesertRuins/scripts.pory"
	braillemsgbox DesertRuins_Braille_UseRockSmash
DesertRuins_EventScript_CaveEntranceMiddle_1:
# 35 "data/maps/DesertRuins/scripts.pory"
	releaseall
	end

DesertRuins_EventScript_CaveEntranceMiddle_2:
# 31 "data/maps/DesertRuins/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	goto DesertRuins_EventScript_CaveEntranceMiddle_1


DesertRuins_EventScript_CaveEntranceSide::
# 40 "data/maps/DesertRuins/scripts.pory"
	lockall
# 41 "data/maps/DesertRuins/scripts.pory"
	braillemsgbox DesertRuins_Braille_UseRockSmash
# 42 "data/maps/DesertRuins/scripts.pory"
	releaseall
	end


DesertRuins_EventScript_Regirock::
# 47 "data/maps/DesertRuins/scripts.pory"
	lock_faceplayer
# 48 "data/maps/DesertRuins/scripts.pory"
	waitse
# 49 "data/maps/DesertRuins/scripts.pory"
	playmoncry SPECIES_REGIROCK, CRY_MODE_ENCOUNTER
# 50 "data/maps/DesertRuins/scripts.pory"
	delay 40
# 51 "data/maps/DesertRuins/scripts.pory"
	waitmoncry
# 52 "data/maps/DesertRuins/scripts.pory"
	setwildbattle SPECIES_REGIROCK, 40
# 53 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 54 "data/maps/DesertRuins/scripts.pory"
	special StartRegiBattle
# 55 "data/maps/DesertRuins/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 56 "data/maps/DesertRuins/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 57 "data/maps/DesertRuins/scripts.pory"
	switch VAR_RESULT
# 58 "data/maps/DesertRuins/scripts.pory"
	case B_OUTCOME_WON, DesertRuins_EventScript_Regirock_3
# 61 "data/maps/DesertRuins/scripts.pory"
	case B_OUTCOME_RAN, DesertRuins_EventScript_Regirock_4
# 62 "data/maps/DesertRuins/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, DesertRuins_EventScript_Regirock_4
DesertRuins_EventScript_Regirock_1:
# 66 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_DEFEATED_REGIROCK
	release_end

DesertRuins_EventScript_Regirock_3:
# 59 "data/maps/DesertRuins/scripts.pory"
	setflag FLAG_DEFEATED_REGIROCK
# 60 "data/maps/DesertRuins/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto DesertRuins_EventScript_Regirock_1

DesertRuins_EventScript_Regirock_4:
# 63 "data/maps/DesertRuins/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGIROCK
# 64 "data/maps/DesertRuins/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	goto DesertRuins_EventScript_Regirock_1

