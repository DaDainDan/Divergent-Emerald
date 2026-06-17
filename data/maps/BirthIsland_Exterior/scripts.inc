BirthIsland_Exterior_MapScripts::
# 2 "data/maps/BirthIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 18 "data/maps/BirthIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_RESUME
# 26 "data/maps/BirthIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD
	.byte 0

BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_MAP_SCRIPT_CHECKED_DEOXYS
# 4 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 5 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_DEOXYS_ROCK_STEP_COUNT, 0
# 6 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_DEOXYS_ROCK_LEVEL, 0
# 7 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_set FLAG_BATTLED_DEOXYS, BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 11 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_DEFEATED_DEOXYS, BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_HIDE_DEOXYS
# 9 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE
	goto BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/BirthIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE
# 13 "data/maps/BirthIsland_Exterior/scripts.pory"
	clearflag FLAG_DEOXYS_ROCK_COMPLETE
	goto BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_RESUME:
# 19 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_RESUME_2
BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/BirthIsland_Exterior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_RESUME_4
	goto BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_RESUME_1

BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 21 "data/maps/BirthIsland_Exterior/scripts.pory"
	removeobject LOCALID_BIRTH_ISLAND_DEOXYS
	goto BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_RESUME_1

BirthIsland_Exterior_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD:
# 27 "data/maps/BirthIsland_Exterior/scripts.pory"
	special SetDeoxysRockPalette
	end


BirthIsland_Exterior_EventScript_Triangle::
# 33 "data/maps/BirthIsland_Exterior/scripts.pory"
	lock_faceplayer
# 34 "data/maps/BirthIsland_Exterior/scripts.pory"
	special DoDeoxysRockInteraction
# 35 "data/maps/BirthIsland_Exterior/scripts.pory"
	compare VAR_RESULT, DEOXYS_ROCK_SOLVED
	goto_if_eq BirthIsland_Exterior_EventScript_Triangle_2
BirthIsland_Exterior_EventScript_Triangle_1:
	release_end

BirthIsland_Exterior_EventScript_Triangle_2:
# 36 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto BirthIsland_Exterior_EventScript_Deoxys
	goto BirthIsland_Exterior_EventScript_Triangle_1


BirthIsland_Exterior_EventScript_Deoxys::
# 45 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitse
# 46 "data/maps/BirthIsland_Exterior/scripts.pory"
	setfieldeffectargument 0, LOCALID_BIRTH_ISLAND_EXTERIOR_ROCK
# 47 "data/maps/BirthIsland_Exterior/scripts.pory"
	setfieldeffectargument 1, MAP_NUM ( MAP_BIRTH_ISLAND_EXTERIOR )
# 48 "data/maps/BirthIsland_Exterior/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP ( MAP_BIRTH_ISLAND_EXTERIOR )
# 49 "data/maps/BirthIsland_Exterior/scripts.pory"
	dofieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 50 "data/maps/BirthIsland_Exterior/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_DEOXYS, FALSE
# 51 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 52 "data/maps/BirthIsland_Exterior/scripts.pory"
	addobject LOCALID_BIRTH_ISLAND_DEOXYS
# 53 "data/maps/BirthIsland_Exterior/scripts.pory"
	applymovement LOCALID_BIRTH_ISLAND_DEOXYS, BirthIsland_Exterior_EventScript_Deoxys_Movement_0
# 54 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmovement 0
# 55 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitse
# 56 "data/maps/BirthIsland_Exterior/scripts.pory"
	playmoncry SPECIES_DEOXYS_NORMAL, CRY_MODE_ENCOUNTER
# 57 "data/maps/BirthIsland_Exterior/scripts.pory"
	delay 40
# 58 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmoncry
# 59 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_BIRTH_ISLAND_DEOXYS
# 60 "data/maps/BirthIsland_Exterior/scripts.pory"
	seteventmon SPECIES_DEOXYS_NORMAL, 30
# 61 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 62 "data/maps/BirthIsland_Exterior/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 63 "data/maps/BirthIsland_Exterior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 64 "data/maps/BirthIsland_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 65 "data/maps/BirthIsland_Exterior/scripts.pory"
	switch VAR_RESULT
# 66 "data/maps/BirthIsland_Exterior/scripts.pory"
	case B_OUTCOME_WON, BirthIsland_Exterior_EventScript_Deoxys_3
# 71 "data/maps/BirthIsland_Exterior/scripts.pory"
	case B_OUTCOME_RAN, BirthIsland_Exterior_EventScript_Deoxys_4
# 72 "data/maps/BirthIsland_Exterior/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, BirthIsland_Exterior_EventScript_Deoxys_4
# 77 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_BATTLED_DEOXYS
	release_end

BirthIsland_Exterior_EventScript_Deoxys_3:
# 67 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_DEFEATED_DEOXYS
# 68 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS_NORMAL
# 69 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end

BirthIsland_Exterior_EventScript_Deoxys_4:
# 73 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS_NORMAL
# 74 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end


# 53 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_Deoxys_Movement_0:
# 53 "data/maps/BirthIsland_Exterior/scripts.pory"
	creep_down
# 53 "data/maps/BirthIsland_Exterior/scripts.pory"
	creep_down
# 53 "data/maps/BirthIsland_Exterior/scripts.pory"
	creep_down
# 53 "data/maps/BirthIsland_Exterior/scripts.pory"
	creep_down
# 53 "data/maps/BirthIsland_Exterior/scripts.pory"
	creep_down
# 53 "data/maps/BirthIsland_Exterior/scripts.pory"
	creep_down
# 53 "data/maps/BirthIsland_Exterior/scripts.pory"
	creep_down
	step_end
