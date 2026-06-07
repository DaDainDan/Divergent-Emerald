AbandonedShip_HiddenFloorCorridors_MapScripts::
# 2 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_RESUME
# 6 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setdivewarp MAP_ABANDONED_SHIP_UNDERWATER1, 5, 4
	end

AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD:
# 7 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_unset FLAG_USED_ROOM_1_KEY, AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 10 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 3, 8, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 12 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_unset FLAG_USED_ROOM_2_KEY, AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_6
# 15 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 6, 8, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 17 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_unset FLAG_USED_ROOM_4_KEY, AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_10
# 20 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 3, 3, METATILE_InsideShip_DoorIndent_Unlocked, FALSE
AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 22 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_unset FLAG_USED_ROOM_6_KEY, AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_14
# 25 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 9, 3, METATILE_InsideShip_DoorIndent_Unlocked, FALSE
AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_13:
	end

AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 8 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 3, 8, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
	goto AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_1

AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 13 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 6, 8, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
	goto AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_5

AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 18 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 3, 3, METATILE_InsideShip_DoorIndent_Locked, FALSE
	goto AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_9

AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 23 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 9, 3, METATILE_InsideShip_DoorIndent_Locked, FALSE
	goto AbandonedShip_HiddenFloorCorridors_MapScripts_MAP_SCRIPT_ON_LOAD_13


AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door::
# 32 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	lockall
# 33 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_1_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_2
	checkitem ITEM_KEY_TO_ROOM_1
# 0 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_3
AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_1:
# 41 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
# 42 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	playse SE_PIN
# 43 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_1
# 44 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setflag FLAG_USED_ROOM_1_KEY
# 45 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 3, 8, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
# 46 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	special DrawWholeMapView
# 47 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_2:
# 34 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_1

AbandonedShip_HiddenFloorCorridors_EventScript_Room1Door_3:
# 37 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm1DoorIsLocked, MSGBOX_DEFAULT
# 38 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end


AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door::
# 52 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	lockall
# 53 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_2_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_2
	checkitem ITEM_KEY_TO_ROOM_2
# 0 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_3
AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_1:
# 61 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
# 62 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	playse SE_PIN
# 63 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_2
# 64 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setflag FLAG_USED_ROOM_2_KEY
# 65 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 6, 8, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
# 66 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	special DrawWholeMapView
# 67 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_2:
# 54 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_1

AbandonedShip_HiddenFloorCorridors_EventScript_Room2Door_3:
# 57 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm2DoorIsLocked, MSGBOX_DEFAULT
# 58 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end


AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door::
# 72 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	lockall
# 73 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_4_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_2
	checkitem ITEM_KEY_TO_ROOM_4
# 0 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_3
AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_1:
# 81 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
# 82 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	playse SE_PIN
# 83 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_4
# 84 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setflag FLAG_USED_ROOM_4_KEY
# 85 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 3, 3, METATILE_InsideShip_DoorIndent_Unlocked, FALSE
# 86 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	special DrawWholeMapView
# 87 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_2:
# 74 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_1

AbandonedShip_HiddenFloorCorridors_EventScript_Room4Door_3:
# 77 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm4DoorIsLocked, MSGBOX_DEFAULT
# 78 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end


AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door::
# 92 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	lockall
# 93 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto_if_set FLAG_USED_ROOM_6_KEY, AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_2
	checkitem ITEM_KEY_TO_ROOM_6
# 0 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_3
AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_1:
# 101 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_InsertedKey, MSGBOX_DEFAULT
# 102 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	playse SE_PIN
# 103 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	removeitem ITEM_KEY_TO_ROOM_6
# 104 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setflag FLAG_USED_ROOM_6_KEY
# 105 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	setmetatile 9, 3, METATILE_InsideShip_DoorIndent_Unlocked, FALSE
# 106 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	special DrawWholeMapView
# 107 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end

AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_2:
# 94 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	goto AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen
	goto AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_1

AbandonedShip_HiddenFloorCorridors_EventScript_Room6Door_3:
# 97 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_HiddenFloorCorridors_Text_Rm6DoorIsLocked, MSGBOX_DEFAULT
# 98 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end


AbandonedShip_HiddenFloorCorridors_EventScript_TheDoorIsOpen::
# 112 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	msgbox AbandonedShip_Text_TheDoorIsOpen, MSGBOX_DEFAULT
# 113 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	releaseall
	end


AbandonedShip_HiddenFloorCorridors_Text_Rm1DoorIsLocked::
# 117 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "The door is locked.\p"
	.string "“RM. 1” is painted on the door.$"

AbandonedShip_HiddenFloorCorridors_Text_Rm2DoorIsLocked::
# 123 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "The door is locked.\p"
	.string "“RM. 2” is painted on the door.$"

AbandonedShip_HiddenFloorCorridors_Text_Rm4DoorIsLocked::
# 129 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "The door is locked.\p"
	.string "“RM. 4” is painted on the door.$"

AbandonedShip_HiddenFloorCorridors_Text_Rm6DoorIsLocked::
# 135 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "The door is locked.\p"
	.string "“RM. 6” is painted on the door.$"

AbandonedShip_HiddenFloorCorridors_Text_InsertedKey::
# 141 "data/maps/AbandonedShip_HiddenFloorCorridors/scripts.pory"
	.string "{PLAYER} inserted and turned the\n"
	.string "KEY.\p"
	.string "The inserted KEY stuck fast,\n"
	.string "but the door opened.$"
