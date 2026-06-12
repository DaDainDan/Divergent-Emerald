SouthernIsland_Interior_MapScripts::
# 2 "data/maps/SouthernIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/SouthernIsland_Interior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME_3
SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject LOCALID_SOUTHERN_ISLAND_LATI
	goto SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME_1

SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_RESUME_1

SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_ROAMER_POKEMON, 0
	goto_if_eq SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 13 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIAS
# 14 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIAS
SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	checkplayergender
# 0 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 19 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	end

SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIOS
# 11 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIOS
	goto SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 17 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	goto SouthernIsland_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION_5


SouthernIsland_Interior_EventScript_TryLatiEncounter::
# 26 "data/maps/SouthernIsland_Interior/scripts.pory"
	lockall
# 27 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_0x8008, 12
# 28 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Lati
	end


SouthernIsland_Interior_EventScript_Lati::
# 33 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_TEMP_2, SouthernIsland_Interior_EventScript_Lati_2
# 33 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_DEFEATED_LATIAS_OR_LATIOS, SouthernIsland_Interior_EventScript_Lati_2
# 33 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIAS_OR_LATIOS, SouthernIsland_Interior_EventScript_Lati_2
# 33 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_SOUTHERN_ISLAND, SouthernIsland_Interior_EventScript_Lati_2
# 38 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_ENCOUNTERED_LATIAS_OR_LATIOS
# 39 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_2
# 40 "data/maps/SouthernIsland_Interior/scripts.pory"
	special SpawnCameraObject
# 41 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement LOCALID_CAMERA, SouthernIsland_Interior_EventScript_Lati_Movement_0
# 42 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 0
# 43 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 50
# 44 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitse
# 45 "data/maps/SouthernIsland_Interior/scripts.pory"
	playmoncry VAR_TEMP_4, CRY_MODE_NORMAL
# 46 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 30
# 47 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmoncry
# 48 "data/maps/SouthernIsland_Interior/scripts.pory"
	addobject LOCALID_SOUTHERN_ISLAND_LATI
# 49 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 30
# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement LOCALID_CAMERA, SouthernIsland_Interior_EventScript_Lati_Movement_1
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement LOCALID_SOUTHERN_ISLAND_LATI, SouthernIsland_Interior_EventScript_Lati_Movement_2
# 52 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 0
# 53 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 50
# 54 "data/maps/SouthernIsland_Interior/scripts.pory"
	special RemoveCameraObject
# 55 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SOUTHERN_ISLAND_LATI
# 56 "data/maps/SouthernIsland_Interior/scripts.pory"
	switch VAR_ROAMER_POKEMON
# 57 "data/maps/SouthernIsland_Interior/scripts.pory"
	case 0, SouthernIsland_Interior_EventScript_Lati_12
# 58 "data/maps/SouthernIsland_Interior/scripts.pory"
	seteventmon SPECIES_LATIAS, 50, ITEM_SOUL_DEW
SouthernIsland_Interior_EventScript_Lati_10:
# 60 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 61 "data/maps/SouthernIsland_Interior/scripts.pory"
	special BattleSetup_StartLatiBattle
# 62 "data/maps/SouthernIsland_Interior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 63 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 64 "data/maps/SouthernIsland_Interior/scripts.pory"
	switch VAR_RESULT
# 65 "data/maps/SouthernIsland_Interior/scripts.pory"
	case B_OUTCOME_WON, SouthernIsland_Interior_EventScript_Lati_16
# 69 "data/maps/SouthernIsland_Interior/scripts.pory"
	case B_OUTCOME_RAN, SouthernIsland_Interior_EventScript_Lati_17
# 70 "data/maps/SouthernIsland_Interior/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, SouthernIsland_Interior_EventScript_Lati_17
SouthernIsland_Interior_EventScript_Lati_14:
# 74 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS_OR_LATIOS
# 75 "data/maps/SouthernIsland_Interior/scripts.pory"
	releaseall
	end

SouthernIsland_Interior_EventScript_Lati_2:
# 34 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_Text_Sign, MSGBOX_DEFAULT
# 35 "data/maps/SouthernIsland_Interior/scripts.pory"
	releaseall
	end

SouthernIsland_Interior_EventScript_Lati_12:
# 57 "data/maps/SouthernIsland_Interior/scripts.pory"
	seteventmon SPECIES_LATIOS, 50, ITEM_SOUL_DEW
	goto SouthernIsland_Interior_EventScript_Lati_10

SouthernIsland_Interior_EventScript_Lati_16:
# 66 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_LATIAS_OR_LATIOS
# 67 "data/maps/SouthernIsland_Interior/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_4
# 68 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	goto SouthernIsland_Interior_EventScript_Lati_14

SouthernIsland_Interior_EventScript_Lati_17:
# 71 "data/maps/SouthernIsland_Interior/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_4
# 72 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	goto SouthernIsland_Interior_EventScript_Lati_14


# 41 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_Movement_0:
# 41 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 41 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 41 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
	step_end

# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_Movement_1:
# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
	step_faster_up
	step_end

# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati_Movement_2:
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
	step_end
