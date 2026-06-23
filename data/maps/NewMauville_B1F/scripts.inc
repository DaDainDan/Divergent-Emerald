NewMauville_B1F_MapScripts::
# 2 "data/maps/NewMauville_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NewMauville_B1F_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/NewMauville_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauville_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

NewMauville_B1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/NewMauville_B1F/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, NewMauville_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_3
NewMauville_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

NewMauville_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/NewMauville_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto NewMauville_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_1

NewMauville_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/NewMauville_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq NewMauville_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto NewMauville_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_1

NewMauville_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/NewMauville_B1F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_NEW_MAUVILLE_B1F_ROTOM, NewMauville_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
NewMauville_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

NewMauville_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/NewMauville_B1F/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_B1F_ROTOM
	goto NewMauville_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


NewMauville_B1F_EventScript_Rotom::
# 17 "data/maps/NewMauville_B1F/scripts.pory"
	lock_faceplayer
# 18 "data/maps/NewMauville_B1F/scripts.pory"
	setwildbattle SPECIES_ROTOM, 50
# 19 "data/maps/NewMauville_B1F/scripts.pory"
	waitse
# 20 "data/maps/NewMauville_B1F/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
# 21 "data/maps/NewMauville_B1F/scripts.pory"
	delay 40
# 22 "data/maps/NewMauville_B1F/scripts.pory"
	waitmoncry
# 23 "data/maps/NewMauville_B1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 24 "data/maps/NewMauville_B1F/scripts.pory"
	dowildbattle
# 25 "data/maps/NewMauville_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 26 "data/maps/NewMauville_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/NewMauville_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq NewMauville_B1F_EventScript_Rotom_2
# 27 "data/maps/NewMauville_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq NewMauville_B1F_EventScript_Rotom_2
# 27 "data/maps/NewMauville_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq NewMauville_B1F_EventScript_Rotom_2
NewMauville_B1F_EventScript_Rotom_1:
# 31 "data/maps/NewMauville_B1F/scripts.pory"
	setflag FLAG_DEFEATED_NEW_MAUVILLE_B1F_ROTOM
	release_end

NewMauville_B1F_EventScript_Rotom_2:
# 28 "data/maps/NewMauville_B1F/scripts.pory"
	setflag FLAG_DEFEATED_NEW_MAUVILLE_B1F_ROTOM
# 29 "data/maps/NewMauville_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto NewMauville_B1F_EventScript_Rotom_1

