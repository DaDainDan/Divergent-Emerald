AbandonedShip_Corridors_B1F_MapScripts::
# 2 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_Corridors_B1F_MapScripts_MAP_SCRIPT_ON_RESUME
# 6 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AbandonedShip_Corridors_B1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

AbandonedShip_Corridors_B1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setdivewarp MAP_ABANDONED_SHIP_UNDERWATER1, 5, 4
	end

AbandonedShip_Corridors_B1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 7 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_unset FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 10 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
AbandonedShip_Corridors_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

AbandonedShip_Corridors_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 8 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
	goto AbandonedShip_Corridors_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_1


AbandonedShip_Corridors_B1F_EventScript_TuberM::
# 17 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_YayItsAShip, MSGBOX_NPC
	end


AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor::
# 22 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	lockall
# 23 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_set FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_2
	checkitem ITEM_STORAGE_KEY
# 0 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_3
# 30 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_InsertedStorageKey, MSGBOX_DEFAULT
# 31 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	playse SE_PIN
# 32 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	removeitem ITEM_STORAGE_KEY
# 33 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setflag FLAG_USED_STORAGE_KEY
# 34 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
# 35 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	special DrawWholeMapView
AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1:
# 37 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
	end

AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_2:
# 24 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Text_TheDoorIsOpen, MSGBOX_DEFAULT
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1

AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_3:
# 27 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DoorIsLocked, MSGBOX_DEFAULT
	goto AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor_1


AbandonedShip_Corridors_B1F_EventScript_Duncan::
# 42 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	trainerbattle_single TRAINER_DUNCAN, AbandonedShip_Corridors_B1F_Text_DuncanIntro, AbandonedShip_Corridors_B1F_Text_DuncanDefeat
# 43 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
	end


AbandonedShip_Corridors_B1F_Text_DuncanIntro::
# 47 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "When we go out to sea, we SAILORS\n"
	.string "always bring our POKéMON.\l"
	.string "How about a quick battle?$"

AbandonedShip_Corridors_B1F_Text_DuncanDefeat::
# 53 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Whoops, I'm sunk!$"

AbandonedShip_Corridors_B1F_Text_DuncanPostBattle::
# 57 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The ship's bottom has sunk into the\n"
	.string "depths.\p"
	.string "If a POKéMON knew how to go underwater,\n"
	.string "we might make some progress…$"

AbandonedShip_Corridors_B1F_Text_YayItsAShip::
# 65 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Yay!\n"
	.string "It's a ship!$"

AbandonedShip_Corridors_B1F_Text_DoorIsLocked::
# 70 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is locked.\p"
	.string "“STORAGE” is painted on the door.$"

AbandonedShip_Corridors_B1F_Text_InsertedStorageKey::
# 76 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "{PLAYER} inserted and turned the\n"
	.string "STORAGE KEY.\p"
	.string "The inserted KEY stuck fast,\n"
	.string "but the door opened.$"

AbandonedShip_Text_TheDoorIsOpen::
# 84 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is open.$"
