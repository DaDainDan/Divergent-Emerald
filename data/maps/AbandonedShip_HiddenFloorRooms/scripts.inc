AbandonedShip_HiddenFloorRooms_MapScripts::
# 2 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AbandonedShip_HiddenFloorRooms_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AbandonedShip_HiddenFloorRooms_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle
	.2byte 0


AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle::
# 16 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setvar VAR_TEMP_1, 1
# 17 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 18 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setvar VAR_TEMP_4, 1
# 19 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_TEMP_2, 21
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_2
# 22 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_TEMP_2, 36
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_3
# 25 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_TEMP_3, 2
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_4
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_1:
# 28 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	switch VAR_TEMP_4
# 29 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 1, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10
# 30 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 3, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_11
# 31 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 4, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_12
# 32 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 5, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_13
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_8:
	end

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_2:
# 20 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 1
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_1

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_3:
# 23 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 2
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_1

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_4:
# 26 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 3
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_1

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_10:
# 29 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_8

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_11:
# 30 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_8

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_12:
# 31 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_8

AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_13:
# 32 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5
	goto AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle_8


AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1::
# 38 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 39 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 10, 10, 0
	specialvar VAR_RESULT, FoundAbandonedShipRoom4Key
# 0 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1_2
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1_1:
# 43 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 44 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
	end

AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1_2:
# 41 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 1, 12, 0
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1_1


AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3::
	specialvar VAR_RESULT, FoundAbandonedShipRoom1Key
# 0 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_2
# 52 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 53 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 42, 10, 0
# 54 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 55 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
	end

AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3_2:
	end


AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4::
# 60 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 61 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 8, 5, 0
# 62 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 11, 3, 0
	specialvar VAR_RESULT, FoundAbandonedShipRoom6Key
# 0 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4_2
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4_1:
# 66 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 67 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
	end

AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4_2:
# 64 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 1, 2, 0
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4_1


AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5::
# 72 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 73 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 16, 3, 0
# 74 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 25, 2, 0
# 75 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 24, 6, 0
	specialvar VAR_RESULT, FoundAbandonedShipRoom2Key
# 0 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5_2
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5_1:
# 79 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 80 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
	end

AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5_2:
# 77 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 20, 5, 0
	goto AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5_1


AbandonedShip_HiddenFloorRooms_EventScript_Trash::
# 85 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	lockall
# 86 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_HiddenFloorRooms_Text_BrightShinyTrash, MSGBOX_DEFAULT
# 87 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	releaseall
	end


AbandonedShip_HiddenFloorRooms_Text_BrightShinyTrash::
# 91 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.string "It's bright and shiny!\n"
	.string "But it's just trash…$"
