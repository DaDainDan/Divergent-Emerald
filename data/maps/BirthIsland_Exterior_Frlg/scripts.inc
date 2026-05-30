BirthIsland_Exterior_Frlg_MapScripts::
# 2 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 17 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
# 25 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD
	.byte 0

BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_BIRTH_ISLAND_EXTERIOR
# 4 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DEOXYS_N
# 5 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_DEOXYS_INTERACTION_STEP_COUNTER, 0
# 6 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_DEOXYS_INTERACTION_NUM, 0
# 7 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_set FLAG_FOUGHT_DEOXYS, BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 11 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_unset FLAG_DEOXYS_FLEW_AWAY, BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_HIDE_DEOXYS
# 9 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_HIDE_BIRTH_ISLAND_METEORITE
	return

BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	clearflag FLAG_HIDE_BIRTH_ISLAND_METEORITE
# 13 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	clearflag FLAG_DEOXYS_ROCK_COMPLETE
	return

BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 18 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2
BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_4
	goto BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 20 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_BIRTH_ISLAND_DEOXYS
	goto BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

BirthIsland_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD:
# 26 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	special SetDeoxysRockPalette
	end


BirthIsland_Exterior_Frlg_EventScript_Triangle::
# 32 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	lock_faceplayer
# 33 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	special DoDeoxysRockInteraction
# 34 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	switch VAR_RESULT
# 35 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 0, BirthIsland_Exterior_Frlg_EventScript_Triangle_3
# 36 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 1, BirthIsland_Exterior_Frlg_EventScript_Triangle_3
# 37 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 3, BirthIsland_Exterior_Frlg_EventScript_Triangle_3
# 38 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case 2, BirthIsland_Exterior_Frlg_EventScript_Triangle_4
BirthIsland_Exterior_Frlg_EventScript_Triangle_1:
	end

BirthIsland_Exterior_Frlg_EventScript_Triangle_3:
# 37 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	release_end
	goto BirthIsland_Exterior_Frlg_EventScript_Triangle_1

BirthIsland_Exterior_Frlg_EventScript_Triangle_4:
# 38 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto BirthIsland_Exterior_Frlg_EventScript_Deoxys
	goto BirthIsland_Exterior_Frlg_EventScript_Triangle_1


BirthIsland_Exterior_Frlg_EventScript_Deoxys::
# 45 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	addobject LOCALID_BIRTH_ISLAND_DEOXYS
# 46 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitse
# 47 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setfieldeffectargument 0, LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK
# 48 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setfieldeffectargument 1, MAP_NUM ( MAP_BIRTH_ISLAND_EXTERIOR_FRLG )
# 49 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP ( MAP_BIRTH_ISLAND_EXTERIOR_FRLG )
# 50 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	dofieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 51 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_DEOXYS, 0
# 52 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitfieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 53 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_BIRTH_ISLAND_DEOXYS, BirthIsland_Exterior_Frlg_EventScript_Deoxys_Movement_0
# 54 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 55 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitse
# 56 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 57 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	delay 40
# 58 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	waitmoncry
# 59 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_BIRTH_ISLAND_DEOXYS
# 60 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	seteventmon SPECIES_DEOXYS, 30
# 61 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 62 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 63 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 64 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 65 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	switch VAR_RESULT
# 66 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case B_OUTCOME_WON, BirthIsland_Exterior_Frlg_EventScript_Deoxys_3
# 71 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case B_OUTCOME_RAN, BirthIsland_Exterior_Frlg_EventScript_Deoxys_4
# 72 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, BirthIsland_Exterior_Frlg_EventScript_Deoxys_4
# 77 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_DEOXYS
# 78 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	release_end
	return

BirthIsland_Exterior_Frlg_EventScript_Deoxys_3:
# 67 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setflag FLAG_DEOXYS_FLEW_AWAY
# 68 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS
# 69 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
	end

BirthIsland_Exterior_Frlg_EventScript_Deoxys_4:
# 73 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS
# 74 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
	end


# 53 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
BirthIsland_Exterior_Frlg_EventScript_Deoxys_Movement_0:
# 53 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	creep_down
# 53 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	creep_down
# 53 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	creep_down
# 53 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	creep_down
# 53 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	creep_down
# 53 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	creep_down
# 53 "data/maps/BirthIsland_Exterior_Frlg/scripts.pory"
	creep_down
	step_end
