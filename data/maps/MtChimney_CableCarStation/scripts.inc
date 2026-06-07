MtChimney_CableCarStation_MapScripts::
# 2 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MtChimney_CableCarStation/scripts.pory"
	compare VAR_CABLE_CAR_STATION_STATE, 1
	goto_if_eq MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, 5, 4
# 5 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, MOVEMENT_TYPE_FACE_RIGHT
	goto MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/MtChimney_CableCarStation/scripts.pory"
	map_script_2 VAR_CABLE_CAR_STATION_STATE, 1, MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 11 "data/maps/MtChimney_CableCarStation/scripts.pory"
	lockall
# 12 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement LOCALID_PLAYER, MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 13 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 14 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitmovement 0
# 15 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 0
# 16 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, 6, 7
# 17 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setobjectmovementtype LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, MOVEMENT_TYPE_FACE_DOWN
# 18 "data/maps/MtChimney_CableCarStation/scripts.pory"
	releaseall
	end


MtChimney_CableCarStation_EventScript_Attendant::
# 25 "data/maps/MtChimney_CableCarStation/scripts.pory"
	lock_faceplayer
# 26 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_CableCarReadyGetOn, MSGBOX_YESNO
# 27 "data/maps/MtChimney_CableCarStation/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MtChimney_CableCarStation_EventScript_Attendant_2
# 39 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_RideAnotherTime, MSGBOX_DEFAULT
MtChimney_CableCarStation_EventScript_Attendant_1:
	release_end

MtChimney_CableCarStation_EventScript_Attendant_2:
# 28 "data/maps/MtChimney_CableCarStation/scripts.pory"
	msgbox MtChimney_CableCarStation_Text_StepThisWay, MSGBOX_DEFAULT
# 29 "data/maps/MtChimney_CableCarStation/scripts.pory"
	closemessage
# 30 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_CABLE_CAR_ATTENDANT, MtChimney_CableCarStation_EventScript_Attendant_Movement_0
# 31 "data/maps/MtChimney_CableCarStation/scripts.pory"
	applymovement LOCALID_PLAYER, MtChimney_CableCarStation_EventScript_Attendant_Movement_1
# 32 "data/maps/MtChimney_CableCarStation/scripts.pory"
	waitmovement 0
# 33 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_0x8004, TRUE
# 34 "data/maps/MtChimney_CableCarStation/scripts.pory"
	setvar VAR_CABLE_CAR_STATION_STATE, 2
# 35 "data/maps/MtChimney_CableCarStation/scripts.pory"
	incrementgamestat GAME_STAT_RODE_CABLE_CAR
# 36 "data/maps/MtChimney_CableCarStation/scripts.pory"
	special CableCarWarp
# 37 "data/maps/MtChimney_CableCarStation/scripts.pory"
	special CableCar
	goto MtChimney_CableCarStation_EventScript_Attendant_1


# 12 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 12 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 12 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 12 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 12 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
	step_end

# 13 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 13 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
# 13 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_right
# 13 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
# 13 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_down
	step_end

# 30 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_Attendant_Movement_0:
# 30 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 30 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 30 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_left
# 30 "data/maps/MtChimney_CableCarStation/scripts.pory"
	step_faster_right
	step_end

# 31 "data/maps/MtChimney_CableCarStation/scripts.pory"
MtChimney_CableCarStation_EventScript_Attendant_Movement_1:
# 31 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 31 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 31 "data/maps/MtChimney_CableCarStation/scripts.pory"
	walk_up
# 31 "data/maps/MtChimney_CableCarStation/scripts.pory"
	delay_16
	step_end

MtChimney_CableCarStation_Text_CableCarReadyGetOn::
# 44 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "The CABLE CAR is ready to go down.\n"
	.string "Would you like to be on it?$"

MtChimney_CableCarStation_Text_StepThisWay::
# 49 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Please step this way.$"

MtChimney_CableCarStation_Text_RideAnotherTime::
# 53 "data/maps/MtChimney_CableCarStation/scripts.pory"
	.string "Please ride with us another time.$"
