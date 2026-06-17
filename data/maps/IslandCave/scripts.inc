IslandCave_MapScripts::
# 2 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IslandCave_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IslandCave_MapScripts_MAP_SCRIPT_ON_LOAD
# 19 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IslandCave_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

IslandCave_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, IslandCave_MapScripts_MAP_SCRIPT_ON_RESUME_3
IslandCave_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

IslandCave_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/IslandCave/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto IslandCave_MapScripts_MAP_SCRIPT_ON_RESUME_1

IslandCave_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/IslandCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq IslandCave_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto IslandCave_MapScripts_MAP_SCRIPT_ON_RESUME_1

IslandCave_MapScripts_MAP_SCRIPT_ON_LOAD:
# 9 "data/maps/IslandCave/scripts.pory"
	goto_if_unset FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_MapScripts_MAP_SCRIPT_ON_LOAD_2
IslandCave_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

IslandCave_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 10 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 11 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 12 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 13 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 14 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 15 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	goto IslandCave_MapScripts_MAP_SCRIPT_ON_LOAD_1

IslandCave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_LANDMARK_ISLAND_CAVE
# 21 "data/maps/IslandCave/scripts.pory"
	call IslandCave_EventScript_ClearSteps
# 22 "data/maps/IslandCave/scripts.pory"
	goto_if_unset FLAG_DEFEATED_REGICE, IslandCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
IslandCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

IslandCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 23 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_HIDE_REGICE
	goto IslandCave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


IslandCave_EventScript_OpenRegiEntrance::
# 30 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
# 31 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 32 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
# 33 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
# 34 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
# 35 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
# 36 "data/maps/IslandCave/scripts.pory"
	special DrawWholeMapView
# 37 "data/maps/IslandCave/scripts.pory"
	playse SE_BANG
# 38 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_SYS_BRAILLE_REGICE_COMPLETED
	end


IslandCave_EventScript_CaveEntranceMiddle::
# 43 "data/maps/IslandCave/scripts.pory"
	lockall
# 44 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_TEMP_REGICE_PUZZLE_FAILED, IslandCave_EventScript_CaveEntranceMiddle_2
IslandCave_EventScript_CaveEntranceMiddle_1:
# 47 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_CaveEntranceMiddle_5
# 52 "data/maps/IslandCave/scripts.pory"
	braillemessage IslandCave_Braille_RunLapAroundWall
# 53 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 54 "data/maps/IslandCave/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 55 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CloseBrailleMsg
	end

IslandCave_EventScript_CaveEntranceMiddle_2:
# 45 "data/maps/IslandCave/scripts.pory"
	call IslandCave_EventScript_ClearSteps
	goto IslandCave_EventScript_CaveEntranceMiddle_1

IslandCave_EventScript_CaveEntranceMiddle_5:
# 48 "data/maps/IslandCave/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 49 "data/maps/IslandCave/scripts.pory"
	releaseall
	end


IslandCave_EventScript_CaveEntranceSide::
# 60 "data/maps/IslandCave/scripts.pory"
	lockall
# 61 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_TEMP_REGICE_PUZZLE_FAILED, IslandCave_EventScript_CaveEntranceSide_2
IslandCave_EventScript_CaveEntranceSide_1:
# 64 "data/maps/IslandCave/scripts.pory"
	braillemessage IslandCave_Braille_RunLapAroundWall
# 65 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_CaveEntranceSide_5
IslandCave_EventScript_CaveEntranceSide_4:
# 68 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 69 "data/maps/IslandCave/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 70 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CloseBrailleMsg
	end

IslandCave_EventScript_CaveEntranceSide_2:
# 62 "data/maps/IslandCave/scripts.pory"
	call IslandCave_EventScript_ClearSteps
	goto IslandCave_EventScript_CaveEntranceSide_1

IslandCave_EventScript_CaveEntranceSide_5:
# 66 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CloseBrailleMsg
	goto IslandCave_EventScript_CaveEntranceSide_4


IslandCave_EventScript_CloseBrailleMsg::
# 75 "data/maps/IslandCave/scripts.pory"
	waitbuttonpress
# 76 "data/maps/IslandCave/scripts.pory"
	closebraillemessage
# 77 "data/maps/IslandCave/scripts.pory"
	releaseall
	end


IslandCave_EventScript_ClearSteps::
# 82 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_1, 0
# 83 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_2, 0
# 84 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_3, 0
# 85 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_TEMP_REGICE_PUZZLE_FAILED
	return


IslandCave_EventScript_Regice::
# 90 "data/maps/IslandCave/scripts.pory"
	lock_faceplayer
# 91 "data/maps/IslandCave/scripts.pory"
	waitse
# 92 "data/maps/IslandCave/scripts.pory"
	playmoncry SPECIES_REGICE, CRY_MODE_ENCOUNTER
# 93 "data/maps/IslandCave/scripts.pory"
	delay 40
# 94 "data/maps/IslandCave/scripts.pory"
	waitmoncry
# 95 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_REGICE, 40
# 96 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 97 "data/maps/IslandCave/scripts.pory"
	special StartRegiBattle
# 98 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 99 "data/maps/IslandCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 100 "data/maps/IslandCave/scripts.pory"
	switch VAR_RESULT
# 101 "data/maps/IslandCave/scripts.pory"
	case B_OUTCOME_WON, IslandCave_EventScript_Regice_3
# 104 "data/maps/IslandCave/scripts.pory"
	case B_OUTCOME_RAN, IslandCave_EventScript_Regice_4
# 105 "data/maps/IslandCave/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, IslandCave_EventScript_Regice_4
IslandCave_EventScript_Regice_1:
# 110 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_DEFEATED_REGICE
	release_end

IslandCave_EventScript_Regice_3:
# 102 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_DEFEATED_REGICE
# 103 "data/maps/IslandCave/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto IslandCave_EventScript_Regice_1

IslandCave_EventScript_Regice_4:
# 106 "data/maps/IslandCave/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGICE
# 107 "data/maps/IslandCave/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end

