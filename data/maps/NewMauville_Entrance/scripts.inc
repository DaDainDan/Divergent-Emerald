NewMauville_Entrance_MapScripts::
# 2 "data/maps/NewMauville_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMauville_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD
# 13 "data/maps/NewMauville_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauville_Entrance_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

NewMauville_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/NewMauville_Entrance/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 0
	goto_if_eq NewMauville_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_2
NewMauville_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

NewMauville_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile0, TRUE
# 5 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile1, TRUE
# 6 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile2, TRUE
# 7 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile3, TRUE
# 8 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile4, TRUE
# 9 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile5, TRUE
	goto NewMauville_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_1

NewMauville_Entrance_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/NewMauville_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_NEW_MAUVILLE
	end


NewMauville_Entrance_EventScript_Door::
# 20 "data/maps/NewMauville_Entrance/scripts.pory"
	lockall
# 21 "data/maps/NewMauville_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 22 "data/maps/NewMauville_Entrance/scripts.pory"
	waitmovement 0
# 23 "data/maps/NewMauville_Entrance/scripts.pory"
	msgbox NewMauville_Entrance_Text_DoorIsLocked, MSGBOX_DEFAULT
	checkitem ITEM_BASEMENT_KEY
# 0 "data/maps/NewMauville_Entrance/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq NewMauville_Entrance_EventScript_Door_2
NewMauville_Entrance_EventScript_Door_1:
# 41 "data/maps/NewMauville_Entrance/scripts.pory"
	releaseall
	end

NewMauville_Entrance_EventScript_Door_2:
# 25 "data/maps/NewMauville_Entrance/scripts.pory"
	msgbox NewMauville_Entrance_Text_UseBasementKey, MSGBOX_YESNO
# 26 "data/maps/NewMauville_Entrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NewMauville_Entrance_EventScript_Door_5
# 30 "data/maps/NewMauville_Entrance/scripts.pory"
	msgbox NewMauville_Entrance_Text_UsedBasementKey, MSGBOX_DEFAULT
# 31 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile0, FALSE
# 32 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile1, FALSE
# 33 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile2, FALSE
# 34 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile3, TRUE
# 35 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile4, FALSE
# 36 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile5, TRUE
# 37 "data/maps/NewMauville_Entrance/scripts.pory"
	special DrawWholeMapView
# 38 "data/maps/NewMauville_Entrance/scripts.pory"
	playse SE_BANG
# 39 "data/maps/NewMauville_Entrance/scripts.pory"
	setvar VAR_NEW_MAUVILLE_STATE, 1
	goto NewMauville_Entrance_EventScript_Door_1

NewMauville_Entrance_EventScript_Door_5:
# 27 "data/maps/NewMauville_Entrance/scripts.pory"
	releaseall
	end


NewMauville_Entrance_Text_DoorIsLocked::
# 45 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "The door is locked.$"

NewMauville_Entrance_Text_UseBasementKey::
# 49 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "Use the BASEMENT KEY?$"

NewMauville_Entrance_Text_UsedBasementKey::
# 53 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "{PLAYER} used the BASEMENT KEY.\p"
	.string "The door opened!$"
