SSTidalCorridor_MapScripts::
# 2 "data/maps/SSTidalCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SSTidalCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SSTidalCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SSTidalCorridor/scripts.pory"
	map_script_2 VAR_SS_TIDAL_SCOTT_STATE, 0, SSTidalCorridor_EventScript_ScottScene
# 4 "data/maps/SSTidalCorridor/scripts.pory"
	map_script_2 VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_SLATEPORT, SSTidalCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
# 13 "data/maps/SSTidalCorridor/scripts.pory"
	map_script_2 VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_LILYCOVE, SSTidalCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2
# 21 "data/maps/SSTidalCorridor/scripts.pory"
	map_script_2 VAR_SS_TIDAL_STATE, SS_TIDAL_EXIT_CURRENTS_RIGHT, SSTidalCorridor_EventScript_HalfwayToLilycove
# 22 "data/maps/SSTidalCorridor/scripts.pory"
	map_script_2 VAR_SS_TIDAL_STATE, SS_TIDAL_EXIT_CURRENTS_LEFT, SSTidalCorridor_EventScript_ArrivedInSlateport
	.2byte 0

SSTidalCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 5 "data/maps/SSTidalCorridor/scripts.pory"
	special SetSSTidalFlag
# 6 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_DEPART_SLATEPORT
# 7 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 8 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 9 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_FastCurrentsHopeYouEnjoyVoyage, MSGBOX_DEFAULT
# 10 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
	end

SSTidalCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2:
# 14 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_DEPART_LILYCOVE
# 15 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 16 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 17 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_HopeYouEnjoyVoyage, MSGBOX_DEFAULT
# 18 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
	end


SSTidalCorridor_EventScript_ScottScene::
# 27 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 28 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_SS_TIDAL_SCOTT, SSTidalCorridor_EventScript_ScottScene_Movement_0
# 29 "data/maps/SSTidalCorridor/scripts.pory"
	waitmovement 0
# 30 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 31 "data/maps/SSTidalCorridor/scripts.pory"
	waitmovement 0
# 32 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_ScottBattleFrontierInvite, MSGBOX_DEFAULT
# 33 "data/maps/SSTidalCorridor/scripts.pory"
	closemessage
# 34 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, SSTidalCorridor_EventScript_ScottScene_Movement_1
# 35 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_SS_TIDAL_EXIT_SAILOR, SSTidalCorridor_EventScript_ScottScene_Movement_2
# 36 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_SS_TIDAL_SCOTT, SSTidalCorridor_EventScript_ScottScene_Movement_3
# 37 "data/maps/SSTidalCorridor/scripts.pory"
	waitmovement 0
# 38 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_EXIT
# 39 "data/maps/SSTidalCorridor/scripts.pory"
	waitse
# 40 "data/maps/SSTidalCorridor/scripts.pory"
	removeobject LOCALID_SS_TIDAL_SCOTT
# 41 "data/maps/SSTidalCorridor/scripts.pory"
	applymovement LOCALID_SS_TIDAL_EXIT_SAILOR, SSTidalCorridor_EventScript_ScottScene_Movement_4
# 42 "data/maps/SSTidalCorridor/scripts.pory"
	waitmovement 0
# 43 "data/maps/SSTidalCorridor/scripts.pory"
	delay 30
# 44 "data/maps/SSTidalCorridor/scripts.pory"
	setflag FLAG_MET_SCOTT_ON_SS_TIDAL
# 45 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_SCOTT_STATE, 1
# 46 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
	end


SSTidalCorridor_EventScript_ReachedStepCount::
# 51 "data/maps/SSTidalCorridor/scripts.pory"
	switch VAR_SS_TIDAL_STATE
# 52 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_DEPART_SLATEPORT, SSTidalCorridor_EventScript_ReachedStepCount_3
# 53 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_HALFWAY_SLATEPORT, SSTidalCorridor_EventScript_ReachedStepCount_4
SSTidalCorridor_EventScript_ReachedStepCount_1:
	end

SSTidalCorridor_EventScript_ReachedStepCount_3:
# 52 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_HalfwayToLilycove
	goto SSTidalCorridor_EventScript_ReachedStepCount_1

SSTidalCorridor_EventScript_ReachedStepCount_4:
# 53 "data/maps/SSTidalCorridor/scripts.pory"
	goto SSTidalCorridor_EventScript_ArrivedInSlateport
	goto SSTidalCorridor_EventScript_ReachedStepCount_1


SSTidalCorridor_EventScript_HalfwayToLilycove::
# 59 "data/maps/SSTidalCorridor/scripts.pory"
	special ResetSSTidalFlag
# 60 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_HALFWAY_LILYCOVE
# 61 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 62 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 63 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_HopeYouEnjoyVoyage, MSGBOX_DEFAULT
# 64 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
	end


SSTidalCorridor_EventScript_ArrivedInSlateport::
# 69 "data/maps/SSTidalCorridor/scripts.pory"
	special ResetSSTidalFlag
# 70 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_LAND_SLATEPORT
# 71 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 72 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 73 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_MadeLandInSlateport, MSGBOX_DEFAULT
# 74 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
	end


SSTidalRooms_EventScript_ProgessCruiseAfterBed::
# 79 "data/maps/SSTidalCorridor/scripts.pory"
	switch VAR_SS_TIDAL_STATE
# 80 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_DEPART_SLATEPORT, SSTidalRooms_EventScript_ProgessCruiseAfterBed_3
# 81 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_HALFWAY_LILYCOVE, SSTidalRooms_EventScript_ProgessCruiseAfterBed_3
# 86 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_DEPART_LILYCOVE, SSTidalRooms_EventScript_ProgessCruiseAfterBed_4
# 91 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_HALFWAY_SLATEPORT, SSTidalRooms_EventScript_ProgessCruiseAfterBed_5
SSTidalRooms_EventScript_ProgessCruiseAfterBed_1:
	return

SSTidalRooms_EventScript_ProgessCruiseAfterBed_3:
# 82 "data/maps/SSTidalCorridor/scripts.pory"
	special ResetSSTidalFlag
# 83 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_LAND_LILYCOVE
# 84 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 85 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_MadeLandInLilycove, MSGBOX_DEFAULT
	goto SSTidalRooms_EventScript_ProgessCruiseAfterBed_1

SSTidalRooms_EventScript_ProgessCruiseAfterBed_4:
# 87 "data/maps/SSTidalCorridor/scripts.pory"
	special SetSSTidalFlag
# 88 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_HALFWAY_SLATEPORT
# 89 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 90 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_FastCurrentsHopeYouEnjoyVoyage, MSGBOX_DEFAULT
	goto SSTidalRooms_EventScript_ProgessCruiseAfterBed_1

SSTidalRooms_EventScript_ProgessCruiseAfterBed_5:
# 92 "data/maps/SSTidalCorridor/scripts.pory"
	special ResetSSTidalFlag
# 93 "data/maps/SSTidalCorridor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_LAND_SLATEPORT
# 94 "data/maps/SSTidalCorridor/scripts.pory"
	playse SE_DING_DONG
# 95 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidal_Text_MadeLandInSlateport, MSGBOX_DEFAULT
	goto SSTidalRooms_EventScript_ProgessCruiseAfterBed_1


SSTidalCorridor_EventScript_Briney::
# 101 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_BrineyWelcomeAboard, MSGBOX_NPC
	end


SSTidalCorridor_EventScript_Peeko::
# 106 "data/maps/SSTidalCorridor/scripts.pory"
	lock_faceplayer
# 107 "data/maps/SSTidalCorridor/scripts.pory"
	waitse
# 108 "data/maps/SSTidalCorridor/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 109 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_Peeko, MSGBOX_DEFAULT
# 110 "data/maps/SSTidalCorridor/scripts.pory"
	waitmoncry
	release_end


SSTidalCorridor_EventScript_Cabin1Sign::
# 115 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_Cabin1, MSGBOX_SIGN
	end


SSTidalCorridor_EventScript_Cabin2Sign::
# 120 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_Cabin2, MSGBOX_SIGN
	end


SSTidalCorridor_EventScript_Cabin3Sign::
# 125 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_Cabin3, MSGBOX_SIGN
	end


SSTidalCorridor_EventScript_Cabin4Sign::
# 130 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_Cabin4, MSGBOX_SIGN
	end


SSTidalCorridor_EventScript_ExitSailor::
# 135 "data/maps/SSTidalCorridor/scripts.pory"
	lock_faceplayer
# 136 "data/maps/SSTidalCorridor/scripts.pory"
	switch VAR_SS_TIDAL_STATE
# 137 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_LAND_LILYCOVE, SSTidalCorridor_EventScript_ExitSailor_3
# 138 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_LAND_SLATEPORT, SSTidalCorridor_EventScript_ExitSailor_4
# 140 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_CanRestInCabin2, MSGBOX_DEFAULT
	release_end

SSTidalCorridor_EventScript_ExitSailor_1:
# 143 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_WeveArrived, MSGBOX_DEFAULT
# 144 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SNATCH, SSTidalCorridor_EventScript_ExitSailor_7
SSTidalCorridor_EventScript_ExitSailor_6:
# 147 "data/maps/SSTidalCorridor/scripts.pory"
	switch VAR_SS_TIDAL_STATE
# 148 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_DEPART_LILYCOVE, SSTidalCorridor_EventScript_ExitSailor_11
# 149 "data/maps/SSTidalCorridor/scripts.pory"
	case SS_TIDAL_DEPART_SLATEPORT, SSTidalCorridor_EventScript_ExitSailor_12
SSTidalCorridor_EventScript_ExitSailor_9:
# 151 "data/maps/SSTidalCorridor/scripts.pory"
	waitstate
	release_end

SSTidalCorridor_EventScript_ExitSailor_3:
# 137 "data/maps/SSTidalCorridor/scripts.pory"
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
	goto SSTidalCorridor_EventScript_ExitSailor_1

SSTidalCorridor_EventScript_ExitSailor_4:
# 138 "data/maps/SSTidalCorridor/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
	goto SSTidalCorridor_EventScript_ExitSailor_1

SSTidalCorridor_EventScript_ExitSailor_7:
# 145 "data/maps/SSTidalCorridor/scripts.pory"
	setflag FLAG_HIDE_SS_TIDAL_ROOMS_SNATCH_GIVER
	goto SSTidalCorridor_EventScript_ExitSailor_6

SSTidalCorridor_EventScript_ExitSailor_11:
# 148 "data/maps/SSTidalCorridor/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
	goto SSTidalCorridor_EventScript_ExitSailor_9

SSTidalCorridor_EventScript_ExitSailor_12:
# 149 "data/maps/SSTidalCorridor/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
	goto SSTidalCorridor_EventScript_ExitSailor_9


SSTidalCorridor_EventScript_Porthole::
# 156 "data/maps/SSTidalCorridor/scripts.pory"
	lockall
# 157 "data/maps/SSTidalCorridor/scripts.pory"
	compare VAR_SS_TIDAL_STATE, SS_TIDAL_DEPART_SLATEPORT
	goto_if_eq SSTidalCorridor_EventScript_Porthole_2
# 157 "data/maps/SSTidalCorridor/scripts.pory"
	compare VAR_SS_TIDAL_STATE, SS_TIDAL_HALFWAY_SLATEPORT
	goto_if_eq SSTidalCorridor_EventScript_Porthole_2
# 161 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_HorizonSpreadsBeyondPorthole, MSGBOX_DEFAULT
# 162 "data/maps/SSTidalCorridor/scripts.pory"
	releaseall
	end

SSTidalCorridor_EventScript_Porthole_2:
# 158 "data/maps/SSTidalCorridor/scripts.pory"
	special LookThroughPorthole
	end


SSTidalCorridor_EventScript_Sailor::
# 167 "data/maps/SSTidalCorridor/scripts.pory"
	lock_faceplayer
# 168 "data/maps/SSTidalCorridor/scripts.pory"
	goto_if_set FLAG_DEFEATED_SS_TIDAL_TRAINERS, SSTidalCorridor_EventScript_Sailor_2
# 171 "data/maps/SSTidalCorridor/scripts.pory"
	checktrainerflag TRAINER_PHILLIP
	goto_if 1, SSTidalCorridor_EventScript_Sailor_6
SSTidalCorridor_EventScript_Sailor_4:
# 178 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_VisitOtherCabins, MSGBOX_DEFAULT
SSTidalCorridor_EventScript_Sailor_1:
	release_end

SSTidalCorridor_EventScript_Sailor_2:
# 169 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_EnjoyYourCruise, MSGBOX_DEFAULT
	goto SSTidalCorridor_EventScript_Sailor_1

SSTidalCorridor_EventScript_Sailor_3:
# 174 "data/maps/SSTidalCorridor/scripts.pory"
	setflag FLAG_DEFEATED_SS_TIDAL_TRAINERS
# 175 "data/maps/SSTidalCorridor/scripts.pory"
	msgbox SSTidalCorridor_Text_EnjoyYourCruise, MSGBOX_DEFAULT
	goto SSTidalCorridor_EventScript_Sailor_1

SSTidalCorridor_EventScript_Sailor_5:
# 171 "data/maps/SSTidalCorridor/scripts.pory"
	checktrainerflag TRAINER_COLTON
	goto_if 1, SSTidalCorridor_EventScript_Sailor_10
	goto SSTidalCorridor_EventScript_Sailor_4

SSTidalCorridor_EventScript_Sailor_6:
# 171 "data/maps/SSTidalCorridor/scripts.pory"
	checktrainerflag TRAINER_LEONARD
	goto_if 1, SSTidalCorridor_EventScript_Sailor_5
	goto SSTidalCorridor_EventScript_Sailor_4

SSTidalCorridor_EventScript_Sailor_9:
# 172 "data/maps/SSTidalCorridor/scripts.pory"
	checktrainerflag TRAINER_THOMAS
	goto_if 1, SSTidalCorridor_EventScript_Sailor_14
	goto SSTidalCorridor_EventScript_Sailor_4

SSTidalCorridor_EventScript_Sailor_10:
# 172 "data/maps/SSTidalCorridor/scripts.pory"
	checktrainerflag TRAINER_MICAH
	goto_if 1, SSTidalCorridor_EventScript_Sailor_9
	goto SSTidalCorridor_EventScript_Sailor_4

SSTidalCorridor_EventScript_Sailor_13:
# 173 "data/maps/SSTidalCorridor/scripts.pory"
	checktrainerflag TRAINER_GARRET
	goto_if 1, SSTidalCorridor_EventScript_Sailor_17
	goto SSTidalCorridor_EventScript_Sailor_4

SSTidalCorridor_EventScript_Sailor_14:
# 172 "data/maps/SSTidalCorridor/scripts.pory"
	checktrainerflag TRAINER_LEA_AND_JED
	goto_if 1, SSTidalCorridor_EventScript_Sailor_13
	goto SSTidalCorridor_EventScript_Sailor_4

SSTidalCorridor_EventScript_Sailor_17:
# 173 "data/maps/SSTidalCorridor/scripts.pory"
	checktrainerflag TRAINER_NAOMI
	goto_if 1, SSTidalCorridor_EventScript_Sailor_3
	goto SSTidalCorridor_EventScript_Sailor_4


# 28 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ScottScene_Movement_0:
# 28 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 28 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 28 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 28 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 28 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 28 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 28 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
	step_end

# 34 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ScottScene_Movement_1:
# 34 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 34 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 34 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 34 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 34 "data/maps/SSTidalCorridor/scripts.pory"
	delay_8
# 34 "data/maps/SSTidalCorridor/scripts.pory"
	step_faster_down
	step_end

# 35 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ScottScene_Movement_2:
# 35 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 35 "data/maps/SSTidalCorridor/scripts.pory"
	walk_right
# 35 "data/maps/SSTidalCorridor/scripts.pory"
	walk_right
# 35 "data/maps/SSTidalCorridor/scripts.pory"
	step_faster_up
# 35 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 35 "data/maps/SSTidalCorridor/scripts.pory"
	step_faster_left
	step_end

# 36 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ScottScene_Movement_3:
# 36 "data/maps/SSTidalCorridor/scripts.pory"
	step_faster_down
# 36 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 36 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 36 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 36 "data/maps/SSTidalCorridor/scripts.pory"
	delay_16
# 36 "data/maps/SSTidalCorridor/scripts.pory"
	walk_down
# 36 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
	step_end

# 41 "data/maps/SSTidalCorridor/scripts.pory"
SSTidalCorridor_EventScript_ScottScene_Movement_4:
# 41 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 41 "data/maps/SSTidalCorridor/scripts.pory"
	walk_left
# 41 "data/maps/SSTidalCorridor/scripts.pory"
	step_faster_up
	step_end

SSTidalCorridor_Text_ScottBattleFrontierInvite::
# 183 "data/maps/SSTidalCorridor/scripts.pory"
	.string "{SPEAKER NAME_SCOTT}Well, hi, hi!\n"
	.string "{PLAYER}{KUN}, {PLAYER}{KUN}!\p"
	.string "Something's come up, so I have to\n"
	.string "disembark, but am I glad to see you!\p"
	.string "Congratulations, LEAGUE CHAMPION!\p"
	.string "There's a place I'd like to invite\n"
	.string "someone like you.\p"
	.string "It's the…\n"
	.string "BATTLE FRONTIER!\p"
	.string "What's the place like?\n"
	.string "You'll understand when you see it!\p"
	.string "I've spoken with the ship's CAPTAIN\n"
	.string "about this.\p"
	.string "The next time you take a ferry,\n"
	.string "you should be able to sail to\l"
	.string "the BATTLE FRONTIER.\p"
	.string "Okay, {PLAYER}{KUN}, I'll be waiting for you\n"
	.string "at the BATTLE FRONTIER!$"

SSTidal_Text_FastCurrentsHopeYouEnjoyVoyage::
# 212 "data/maps/SSTidalCorridor/scripts.pory"
	.string "This ferry is built to plow through\n"
	.string "fast-running currents.\p"
	.string "We hope you enjoy your voyage with us.\n"
	.string "Feel free to explore the ship.$"

SSTidal_Text_HopeYouEnjoyVoyage::
# 220 "data/maps/SSTidalCorridor/scripts.pory"
	.string "We hope you enjoy your voyage on\n"
	.string "our ferry.$"

SSTidal_Text_MadeLandInSlateport::
# 225 "data/maps/SSTidalCorridor/scripts.pory"
	.string "We have made land in SLATEPORT CITY.\n"
	.string "Thank you for sailing with us.$"

SSTidal_Text_MadeLandInLilycove::
# 230 "data/maps/SSTidalCorridor/scripts.pory"
	.string "We have made land in LILYCOVE CITY.\n"
	.string "Thank you for sailing with us.$"

SSTidalCorridor_Text_CanRestInCabin2::
# 235 "data/maps/SSTidalCorridor/scripts.pory"
	.string "It'll be some time before we make land,\n"
	.string "I reckon.\p"
	.string "You can rest up in your cabin if you'd\n"
	.string "like. Your cabin's No. 2.\p"
	.string "The bed in there is soft and plushy.\n"
	.string "I can attest to how comfy it is!$"

SSTidalCorridor_Text_WeveArrived::
# 246 "data/maps/SSTidalCorridor/scripts.pory"
	.string "We've arrived!$"

SSTidalCorridor_Text_VisitOtherCabins::
# 250 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Go visit other cabins.\n"
	.string "TRAINERS bored of the boat trip will\l"
	.string "be itching to battle.$"

SSTidalCorridor_Text_EnjoyYourCruise::
# 256 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Enjoy your cruise!$"

SSTidalCorridor_Text_HorizonSpreadsBeyondPorthole::
# 260 "data/maps/SSTidalCorridor/scripts.pory"
	.string "The horizon spreads beyond\n"
	.string "the porthole.$"

SSTidalCorridor_Text_BrineyWelcomeAboard::
# 265 "data/maps/SSTidalCorridor/scripts.pory"
	.string "MR. BRINEY: Welcome aboard, {PLAYER}{KUN}!\p"
	.string "They made me honorary captain of\n"
	.string "the S.S. TIDAL!\p"
	.string "You can call me CAPTAIN BRINEY now!\p"
	.string "You know, I retired once before,\n"
	.string "but when I saw this majestic ship…\p"
	.string "Let me just say, it stirred my sleeping\n"
	.string "soul as a sailor!$"

SSTidalCorridor_Text_Peeko::
# 280 "data/maps/SSTidalCorridor/scripts.pory"
	.string "PEEKO: Pihyo pihyohyo…$"

SSTidalCorridor_Text_Cabin1::
# 284 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Cabin 1$"

SSTidalCorridor_Text_Cabin2::
# 288 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Cabin 2$"

SSTidalCorridor_Text_Cabin3::
# 292 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Cabin 3$"

SSTidalCorridor_Text_Cabin4::
# 296 "data/maps/SSTidalCorridor/scripts.pory"
	.string "Cabin 4$"
