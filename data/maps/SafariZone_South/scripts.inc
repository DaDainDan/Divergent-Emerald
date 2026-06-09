SafariZone_South_MapScripts::
# 2 "data/maps/SafariZone_South/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZone_South_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/SafariZone_South/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SafariZone_South_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SafariZone_South_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SafariZone_South/scripts.pory"
	compare VAR_SAFARI_ZONE_STATE, 2
	goto_if_eq SafariZone_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SafariZone_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

SafariZone_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/SafariZone_South/scripts.pory"
	setobjectxyperm LOCALID_SAFARI_EXIT_ATTENDANT, 31, 34
	goto SafariZone_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SafariZone_South_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/SafariZone_South/scripts.pory"
	map_script_2 VAR_SAFARI_ZONE_STATE, 2, SafariZone_South_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

SafariZone_South_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 10 "data/maps/SafariZone_South/scripts.pory"
	lockall
# 11 "data/maps/SafariZone_South/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 12 "data/maps/SafariZone_South/scripts.pory"
	waitmovement 0
# 13 "data/maps/SafariZone_South/scripts.pory"
	applymovement LOCALID_SAFARI_EXIT_ATTENDANT, SafariZone_South_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 14 "data/maps/SafariZone_South/scripts.pory"
	waitmovement 0
# 15 "data/maps/SafariZone_South/scripts.pory"
	setobjectxyperm LOCALID_SAFARI_EXIT_ATTENDANT, 32, 34
# 16 "data/maps/SafariZone_South/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 17 "data/maps/SafariZone_South/scripts.pory"
	releaseall
	end


SafariZone_South_EventScript_Boy::
# 24 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_Boy, MSGBOX_NPC
	end


SafariZone_South_EventScript_Man::
# 29 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_Man, MSGBOX_NPC
	end


SafariZone_South_EventScript_Youngster::
# 34 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_Youngster, MSGBOX_NPC
	end


SafariZone_South_EventScript_ExitAttendant::
# 39 "data/maps/SafariZone_South/scripts.pory"
	lock_faceplayer
# 40 "data/maps/SafariZone_South/scripts.pory"
	goto_if_unset FLAG_GOOD_LUCK_SAFARI_ZONE, SafariZone_South_EventScript_ExitAttendant_2
# 45 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_StillHaveTimeExit, MSGBOX_YESNO
# 46 "data/maps/SafariZone_South/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SafariZone_South_EventScript_ExitAttendant_5
SafariZone_South_EventScript_ExitAttendant_4:
# 49 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_EnjoyTheRestOfYourAdventure, MSGBOX_DEFAULT
	release_end

SafariZone_South_EventScript_ExitAttendant_2:
# 41 "data/maps/SafariZone_South/scripts.pory"
	setflag FLAG_GOOD_LUCK_SAFARI_ZONE
# 42 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_GoodLuck, MSGBOX_DEFAULT
	release_end

SafariZone_South_EventScript_ExitAttendant_5:
# 47 "data/maps/SafariZone_South/scripts.pory"
	goto SafariZone_South_EventScript_ExitEarly
	goto SafariZone_South_EventScript_ExitAttendant_4


SafariZone_South_EventScript_ExitEarly::
# 54 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_ExitEarlyThankYouForPlaying, MSGBOX_DEFAULT
# 55 "data/maps/SafariZone_South/scripts.pory"
	closemessage
# 56 "data/maps/SafariZone_South/scripts.pory"
	switch VAR_FACING
# 57 "data/maps/SafariZone_South/scripts.pory"
	case DIR_NORTH, SafariZone_South_EventScript_ExitEarly_3
# 61 "data/maps/SafariZone_South/scripts.pory"
	case DIR_EAST, SafariZone_South_EventScript_ExitEarly_4
SafariZone_South_EventScript_ExitEarly_1:
# 66 "data/maps/SafariZone_South/scripts.pory"
	waitmovement 0
# 67 "data/maps/SafariZone_South/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 1
# 68 "data/maps/SafariZone_South/scripts.pory"
	special ExitSafariMode
# 69 "data/maps/SafariZone_South/scripts.pory"
	warpdoor MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
# 70 "data/maps/SafariZone_South/scripts.pory"
	waitstate
	end

SafariZone_South_EventScript_ExitEarly_3:
# 58 "data/maps/SafariZone_South/scripts.pory"
	applymovement LOCALID_SAFARI_EXIT_ATTENDANT, SafariZone_South_EventScript_ExitEarly_Movement_0
# 59 "data/maps/SafariZone_South/scripts.pory"
	waitmovement 0
# 60 "data/maps/SafariZone_South/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto SafariZone_South_EventScript_ExitEarly_1

SafariZone_South_EventScript_ExitEarly_4:
# 62 "data/maps/SafariZone_South/scripts.pory"
	applymovement LOCALID_SAFARI_EXIT_ATTENDANT, SafariZone_South_EventScript_ExitEarly_Movement_1
# 63 "data/maps/SafariZone_South/scripts.pory"
	waitmovement 0
# 64 "data/maps/SafariZone_South/scripts.pory"
	applymovement LOCALID_PLAYER, SafariZone_South_EventScript_ExitEarly_Movement_2
	goto SafariZone_South_EventScript_ExitEarly_1


SafariZone_South_EventScript_ConstructionWorker1::
# 75 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_AreaOffLimits1, MSGBOX_NPC
	end


SafariZone_Southeast_EventScript_ExpansionZoneAttendant::
# 80 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Southeast_Text_ExpansionIsFinished, MSGBOX_NPC
	end


SafariZone_South_EventScript_ConstructionWorker2::
# 85 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_South_Text_AreaOffLimits2, MSGBOX_NPC
	end


SafariZone_Southeast_EventScript_LittleGirl::
# 90 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Southeast_Text_LittleGirl, MSGBOX_NPC
	end


SafariZone_Southeast_EventScript_FatMan::
# 95 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Southeast_Text_FatMan, MSGBOX_NPC
	end


SafariZone_Southeast_EventScript_RichBoy::
# 100 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Southeast_Text_RichBoy, MSGBOX_NPC
	end


SafariZone_Northeast_EventScript_Boy::
# 105 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Northeast_Text_Boy, MSGBOX_NPC
	end


SafariZone_Northeast_EventScript_Woman::
# 110 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Northeast_Text_Woman, MSGBOX_NPC
	end


SafariZone_Northeast_EventScript_Girl::
# 115 "data/maps/SafariZone_South/scripts.pory"
	msgbox SafariZone_Northeast_Text_Girl, MSGBOX_NPC
	end


# 13 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 13 "data/maps/SafariZone_South/scripts.pory"
	walk_right
# 13 "data/maps/SafariZone_South/scripts.pory"
	step_faster_down
	step_end

# 58 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitEarly_Movement_0:
# 58 "data/maps/SafariZone_South/scripts.pory"
	walk_left
# 58 "data/maps/SafariZone_South/scripts.pory"
	step_faster_right
	step_end

# 62 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitEarly_Movement_1:
# 62 "data/maps/SafariZone_South/scripts.pory"
	walk_down
# 62 "data/maps/SafariZone_South/scripts.pory"
	step_faster_up
	step_end

# 64 "data/maps/SafariZone_South/scripts.pory"
SafariZone_South_EventScript_ExitEarly_Movement_2:
# 64 "data/maps/SafariZone_South/scripts.pory"
	walk_right
# 64 "data/maps/SafariZone_South/scripts.pory"
	step_faster_up
	step_end
