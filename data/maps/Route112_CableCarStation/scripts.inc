Route112_CableCarStation_MapScripts::
# 2 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route112_CableCarStation/scripts.pory"
	setescapewarp MAP_ROUTE112, 28, 28
# 4 "data/maps/Route112_CableCarStation/scripts.pory"
	compare VAR_CABLE_CAR_STATION_STATE, 2
	goto_if_eq Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, 7, 4
# 6 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, MOVEMENT_TYPE_FACE_LEFT
	goto Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/Route112_CableCarStation/scripts.pory"
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 2, Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 12 "data/maps/Route112_CableCarStation/scripts.pory"
	lockall
# 13 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_PLAYER, Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 14 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 15 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 16 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 0
# 17 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, 6, 7
# 18 "data/maps/Route112_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, MOVEMENT_TYPE_FACE_DOWN
# 19 "data/maps/Route112_CableCarStation/scripts.pory"
	releaseall
	end


Route112_CableCarStation_EventScript_Attendant::
# 26 "data/maps/Route112_CableCarStation/scripts.pory"
	lock_faceplayer
# 27 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
# 28 "data/maps/Route112_CableCarStation/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route112_CableCarStation_EventScript_Attendant_2
# 40 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_RideAnotherTime, MSGBOX_DEFAULT
Route112_CableCarStation_EventScript_Attendant_1:
	release_end

Route112_CableCarStation_EventScript_Attendant_2:
# 29 "data/maps/Route112_CableCarStation/scripts.pory"
	msgbox Route112_CableCarStation_Text_StepThisWay, MSGBOX_DEFAULT
# 30 "data/maps/Route112_CableCarStation/scripts.pory"
	closemessage
# 31 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_ROUTE112_CABLE_CAR_ATTENDANT, Route112_CableCarStation_EventScript_Attendant_Movement_0
# 32 "data/maps/Route112_CableCarStation/scripts.pory"
	applymovement LOCALID_PLAYER, Route112_CableCarStation_EventScript_Attendant_Movement_1
# 33 "data/maps/Route112_CableCarStation/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_0x8004, FALSE
# 35 "data/maps/Route112_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 1
# 36 "data/maps/Route112_CableCarStation/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 37 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCarWarp
# 38 "data/maps/Route112_CableCarStation/scripts.pory"
	special CableCar
	goto Route112_CableCarStation_EventScript_Attendant_1


# 13 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 13 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 13 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 13 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 13 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
	step_end

# 14 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 14 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
# 14 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_left
# 14 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
# 14 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_down
	step_end

# 31 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_Attendant_Movement_0:
# 31 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 31 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 31 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_right
# 31 "data/maps/Route112_CableCarStation/scripts.pory"
	step_faster_left
	step_end

# 32 "data/maps/Route112_CableCarStation/scripts.pory"
Route112_CableCarStation_EventScript_Attendant_Movement_1:
# 32 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 32 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 32 "data/maps/Route112_CableCarStation/scripts.pory"
	walk_up
# 32 "data/maps/Route112_CableCarStation/scripts.pory"
	delay_16
	step_end

Route112_CableCarStation_Text_CableCarReadyGetOn::
# 45 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "The CABLE CAR is ready to go up.\n"
	.string "Would you like to be on it?$"

Route112_CableCarStation_Text_StepThisWay::
# 50 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Please step this way.$"

Route112_CableCarStation_Text_RideAnotherTime::
# 54 "data/maps/Route112_CableCarStation/scripts.pory"
	.string "Please ride with us another time.$"
