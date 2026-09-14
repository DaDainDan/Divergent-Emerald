AlteringCave_B2F_MapScripts::
	.byte 0


AlteringCave_B2F_EventScript_MoveTutor::
# 4 "data/maps/AlteringCave_B2F/scripts.pory"
	lock_faceplayer
# 5 "data/maps/AlteringCave_B2F/scripts.pory"
	goto_if_unset FLAG_MET_ALTERING_CAVE_TERRAIN_TUTOR, AlteringCave_B2F_EventScript_MoveTutor_2
AlteringCave_B2F_EventScript_MoveTutor_1:
# 9 "data/maps/AlteringCave_B2F/scripts.pory"
	msgbox AlteringCave_B2F_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 10 "data/maps/AlteringCave_B2F/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_TERRAIN_MOVE_TUTOR
# 11 "data/maps/AlteringCave_B2F/scripts.pory"
	setvar VAR_0x8006, 0
# 12 "data/maps/AlteringCave_B2F/scripts.pory"
	goto AlteringCave_B2F_EventScript_ChooseTerrainMove
	end

AlteringCave_B2F_EventScript_MoveTutor_2:
# 6 "data/maps/AlteringCave_B2F/scripts.pory"
	msgbox AlteringCave_B2F_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 7 "data/maps/AlteringCave_B2F/scripts.pory"
	setflag FLAG_MET_ALTERING_CAVE_TERRAIN_TUTOR
	goto AlteringCave_B2F_EventScript_MoveTutor_1


AlteringCave_B2F_EventScript_ChooseTerrainMove::
# 17 "data/maps/AlteringCave_B2F/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_TERRAIN_MOVE_TUTOR
# 18 "data/maps/AlteringCave_B2F/scripts.pory"
	special ShowScrollableMultichoice
# 19 "data/maps/AlteringCave_B2F/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 20 "data/maps/AlteringCave_B2F/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/AlteringCave_B2F/scripts.pory"
	case 0, AlteringCave_B2F_EventScript_ChooseTerrainMove_3
# 22 "data/maps/AlteringCave_B2F/scripts.pory"
	case 1, AlteringCave_B2F_EventScript_ChooseTerrainMove_4
# 23 "data/maps/AlteringCave_B2F/scripts.pory"
	case 2, AlteringCave_B2F_EventScript_ChooseTerrainMove_5
# 24 "data/maps/AlteringCave_B2F/scripts.pory"
	case 3, AlteringCave_B2F_EventScript_ChooseTerrainMove_6
# 25 "data/maps/AlteringCave_B2F/scripts.pory"
	case 4, AlteringCave_B2F_EventScript_ChooseTerrainMove_7
# 26 "data/maps/AlteringCave_B2F/scripts.pory"
	case 5, AlteringCave_B2F_EventScript_ChooseTerrainMove_8
# 27 "data/maps/AlteringCave_B2F/scripts.pory"
	case 6, AlteringCave_B2F_EventScript_ChooseTerrainMove_9
# 28 "data/maps/AlteringCave_B2F/scripts.pory"
	case 7, AlteringCave_B2F_EventScript_ChooseTerrainMove_10
# 29 "data/maps/AlteringCave_B2F/scripts.pory"
	case 8, AlteringCave_B2F_EventScript_ChooseTerrainMove_11
# 30 "data/maps/AlteringCave_B2F/scripts.pory"
	case MULTI_B_PRESSED, AlteringCave_B2F_EventScript_ChooseTerrainMove_11
AlteringCave_B2F_EventScript_ChooseTerrainMove_1:
# 33 "data/maps/AlteringCave_B2F/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 34 "data/maps/AlteringCave_B2F/scripts.pory"
	msgbox AlteringCave_B2F_EventScript_MoveTutor_Text_0, MSGBOX_YESNO
# 35 "data/maps/AlteringCave_B2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq AlteringCave_B2F_EventScript_ChooseTerrainMove_13
AlteringCave_B2F_EventScript_ChooseTerrainMove_12:
	checkitem ITEM_NUGGET
# 0 "data/maps/AlteringCave_B2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AlteringCave_B2F_EventScript_ChooseTerrainMove_16
# 55 "data/maps/AlteringCave_B2F/scripts.pory"
	msgbox AlteringCave_B2F_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 56 "data/maps/AlteringCave_B2F/scripts.pory"
	goto AlteringCave_B2F_EventScript_ExitTutorMoveSelect
	end

AlteringCave_B2F_EventScript_ChooseTerrainMove_3:
# 21 "data/maps/AlteringCave_B2F/scripts.pory"
	setvar VAR_0x8005, MOVE_GRASSY_TERRAIN
	goto AlteringCave_B2F_EventScript_ChooseTerrainMove_1

AlteringCave_B2F_EventScript_ChooseTerrainMove_4:
# 22 "data/maps/AlteringCave_B2F/scripts.pory"
	setvar VAR_0x8005, MOVE_ELECTRIC_TERRAIN
	goto AlteringCave_B2F_EventScript_ChooseTerrainMove_1

AlteringCave_B2F_EventScript_ChooseTerrainMove_5:
# 23 "data/maps/AlteringCave_B2F/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_TERRAIN
	goto AlteringCave_B2F_EventScript_ChooseTerrainMove_1

AlteringCave_B2F_EventScript_ChooseTerrainMove_6:
# 24 "data/maps/AlteringCave_B2F/scripts.pory"
	setvar VAR_0x8005, MOVE_MISTY_TERRAIN
	goto AlteringCave_B2F_EventScript_ChooseTerrainMove_1

AlteringCave_B2F_EventScript_ChooseTerrainMove_7:
# 25 "data/maps/AlteringCave_B2F/scripts.pory"
	setvar VAR_0x8005, MOVE_BUGGY_TERRAIN
	goto AlteringCave_B2F_EventScript_ChooseTerrainMove_1

AlteringCave_B2F_EventScript_ChooseTerrainMove_8:
# 26 "data/maps/AlteringCave_B2F/scripts.pory"
	setvar VAR_0x8005, MOVE_FAULTY_TERRAIN
	goto AlteringCave_B2F_EventScript_ChooseTerrainMove_1

AlteringCave_B2F_EventScript_ChooseTerrainMove_9:
# 27 "data/maps/AlteringCave_B2F/scripts.pory"
	setvar VAR_0x8005, MOVE_SPOOKY_TERRAIN
	goto AlteringCave_B2F_EventScript_ChooseTerrainMove_1

AlteringCave_B2F_EventScript_ChooseTerrainMove_10:
# 28 "data/maps/AlteringCave_B2F/scripts.pory"
	setvar VAR_0x8005, MOVE_TERRAIN_PULSE
	goto AlteringCave_B2F_EventScript_ChooseTerrainMove_1

AlteringCave_B2F_EventScript_ChooseTerrainMove_11:
# 31 "data/maps/AlteringCave_B2F/scripts.pory"
	goto AlteringCave_B2F_EventScript_ExitTutorMoveSelect
	goto AlteringCave_B2F_EventScript_ChooseTerrainMove_1

AlteringCave_B2F_EventScript_ChooseTerrainMove_13:
# 36 "data/maps/AlteringCave_B2F/scripts.pory"
	message AlteringCave_B2F_EventScript_MoveTutor_Text_0
# 37 "data/maps/AlteringCave_B2F/scripts.pory"
	waitmessage
# 38 "data/maps/AlteringCave_B2F/scripts.pory"
	setvar VAR_0x8006, 1
# 39 "data/maps/AlteringCave_B2F/scripts.pory"
	goto AlteringCave_B2F_EventScript_ChooseTerrainMove
	goto AlteringCave_B2F_EventScript_ChooseTerrainMove_12

AlteringCave_B2F_EventScript_ChooseTerrainMove_16:
# 42 "data/maps/AlteringCave_B2F/scripts.pory"
	msgbox AlteringCave_B2F_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/AlteringCave_B2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 44 "data/maps/AlteringCave_B2F/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 45 "data/maps/AlteringCave_B2F/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 46 "data/maps/AlteringCave_B2F/scripts.pory"
	waitstate
# 47 "data/maps/AlteringCave_B2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AlteringCave_B2F_EventScript_ChooseTerrainMove_19
# 51 "data/maps/AlteringCave_B2F/scripts.pory"
	msgbox AlteringCave_B2F_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 52 "data/maps/AlteringCave_B2F/scripts.pory"
	removeitem ITEM_NUGGET, 1
	release_end

AlteringCave_B2F_EventScript_ChooseTerrainMove_19:
# 48 "data/maps/AlteringCave_B2F/scripts.pory"
	msgbox AlteringCave_B2F_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


AlteringCave_B2F_EventScript_ExitTutorMoveSelect::
# 61 "data/maps/AlteringCave_B2F/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 62 "data/maps/AlteringCave_B2F/scripts.pory"
	msgbox AlteringCave_B2F_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


AlteringCave_B2F_EventScript_MoveTutor_Text_0:
# 6 "data/maps/AlteringCave_B2F/scripts.pory"
	.string "…$"

AlteringCave_B2F_Text_DeclineTutor::
# 66 "data/maps/AlteringCave_B2F/scripts.pory"
	.string "…$"

AlteringCave_B2F_Text_GrassyTerrainDesc::
# 70 "data/maps/AlteringCave_B2F/scripts.pory"
	.string "Creates a grassy\n"
	.string "field that heals\n"
	.string "all Pokémon.$"

AlteringCave_B2F_Text_ElectricTerrainDesc::
# 76 "data/maps/AlteringCave_B2F/scripts.pory"
	.string "Creates a field of\n"
	.string "voltage to double\n"
	.string "stat changes.$"

AlteringCave_B2F_Text_PsychicTerrainDesc::
# 82 "data/maps/AlteringCave_B2F/scripts.pory"
	.string "Creates a psychic\n"
	.string "field that negates\n"
	.string "priority.$"

AlteringCave_B2F_Text_MistyTerrainDesc::
# 88 "data/maps/AlteringCave_B2F/scripts.pory"
	.string "Creates a field of\n"
	.string "mist that negates\n"
	.string "status ailments.$"

AlteringCave_B2F_Text_BuggyTerrainDesc::
# 94 "data/maps/AlteringCave_B2F/scripts.pory"
	.string "Turns the field\n"
	.string "lucky and boosts\n"
	.string "effect chance.$"

AlteringCave_B2F_Text_FaultyTerrainDesc::
# 100 "data/maps/AlteringCave_B2F/scripts.pory"
	.string "Makes the field\n"
	.string "unstable, making\n"
	.string "priority random.$"

AlteringCave_B2F_Text_SpookyTerrainDesc::
# 106 "data/maps/AlteringCave_B2F/scripts.pory"
	.string "Creates a field of\n"
	.string "darkness that\n"
	.string "negates immunity.$"

AlteringCave_B2F_Text_TerrainPulseDesc::
# 112 "data/maps/AlteringCave_B2F/scripts.pory"
	.string "A beam of energy\n"
	.string "that changes type\n"
	.string "based on terrain.$"
