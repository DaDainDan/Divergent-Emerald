FourIsland_IcefallCave_Back_Frlg_MapScripts::
# 2 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_IcefallCave_Back_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FourIsland_IcefallCave_Back_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1
	goto_if_eq FourIsland_IcefallCave_Back_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
FourIsland_IcefallCave_Back_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

FourIsland_IcefallCave_Back_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	setflag FLAG_HIDE_ICEFALL_CAVE_LORELEI
	goto FourIsland_IcefallCave_Back_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene::
# 11 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	lockall
# 12 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 13 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiKeepHandsOffMons
# 14 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET1, Common_Movement_StepDown
# 15 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 16 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 17 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ShutItLadyLeaveUsBe
# 18 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	closemessage
# 19 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	playse SE_PIN
# 20 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_ExclamationMark
# 21 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 22 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_StepFasterDown
# 23 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 24 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_Delay48
# 25 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 26 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 27 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiPlayerHelpMeKickPoachersOut
# 28 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	closemessage
# 29 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_StepFasterRight
# 30 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 31 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay 18
# 32 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_StepFasterDown
# 33 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 34 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay 35
# 35 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET3, FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_0
# 36 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_1
# 37 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_2
# 38 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 39 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET2, Common_Movement_StepDown
# 40 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 41 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 42 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 43 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_GruntIntro
# 44 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ICEFALL_ROCKET3
# 45 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_45, FourIsland_IcefallCave_Back_Text_GruntDefeat
# 46 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_StepUp
# 47 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 48 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 49 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiWhereHaveYouTakenMons
# 50 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 51 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_NotTellingYouThat
# 52 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 53 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	message FourIsland_IcefallCave_Back_Text_LoreleiWellDeepFreezeYou
# 54 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmessage
# 55 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitse
# 56 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_ENCOUNTER
# 57 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitbuttonpress
# 58 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmoncry
# 59 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_3
# 60 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 61 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 62 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_OkayRocketWareHouseFiveIsland
# 63 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	closemessage
# 64 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_4
# 65 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_5
# 66 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_6
# 67 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET2, FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_7
# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET3, FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_8
# 69 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 70 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	removeobject LOCALID_ICEFALL_ROCKET1
# 71 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	removeobject LOCALID_ICEFALL_ROCKET2
# 72 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	removeobject LOCALID_ICEFALL_ROCKET3
# 73 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay 50
# 74 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkRight
# 75 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 76 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 77 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 78 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 79 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful
# 80 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	setflag FLAG_HIDE_RUIN_VALLEY_SCIENTIST
# 81 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	clearflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 82 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1
# 83 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	releaseall
	end


# 87 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_UnusedPushRight:
# 89 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	lock_look
# 90 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_right
# 91 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	unlock_look
	step_end

# 94 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_UnusedWalkLeft:
# 96 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_left
# 96 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_left
	step_end

FourIsland_IcefallCave_Back_EventScript_Lorelei::
# 100 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful, MSGBOX_NPC
	end


# 35 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_0:
# 35 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 35 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_8
# 35 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_faster_right
	step_end

# 36 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_1:
# 36 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_left
# 36 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_up
	step_end

# 37 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_2:
# 37 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_up
# 37 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_up
# 37 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_right
# 37 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_up
	step_end

# 59 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_3:
# 59 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_fast_down
	step_end

# 64 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_4:
# 64 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_8
# 64 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_faster_right
# 64 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 64 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 64 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_faster_down
	step_end

# 65 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_5:
# 65 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 65 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_faster_left
# 65 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 65 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 65 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_faster_down
	step_end

# 66 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_6:
# 66 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_right
# 66 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_down
# 66 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 66 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 66 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 66 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 66 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 66 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 66 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
	step_end

# 67 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_7:
# 67 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 67 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_left
# 67 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_down
# 67 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 67 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 67 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 67 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 67 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 67 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 67 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
	step_end

# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene_Movement_8:
# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_down
# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_down
# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_right
# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_right
# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	run_down
	step_end

FourIsland_IcefallCave_Back_Text_LoreleiKeepHandsOffMons::
# 104 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "LORELEI: Keep your filthy hands\n"
	.string "off the POKéMON in the cave!\p"
	.string "Do as I say, or you'll have me to\n"
	.string "answer to!$"

FourIsland_IcefallCave_Back_Text_ShutItLadyLeaveUsBe::
# 112 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Aww, shut it, lady, and leave\n"
	.string "us be.\p"
	.string "Don't let your glasses get all\n"
	.string "steamed up!$"

FourIsland_IcefallCave_Back_Text_LoreleiPlayerHelpMeKickPoachersOut::
# 120 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "LORELEI: {PLAYER}?!\n"
	.string "What are you doing here?\p"
	.string "No, we can catch up later.\n"
	.string "Right now, I need your help.\p"
	.string "Help me kick these poachers out\n"
	.string "before they do anything else.\p"
	.string "They've been catching POKéMON\n"
	.string "here, then selling them off!\p"
	.string "Are you ready?\n"
	.string "You take that one, please!$"

FourIsland_IcefallCave_Back_Text_GruntIntro::
# 137 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "W-what?!\p"
	.string "Who says we can't do what we want\n"
	.string "with the POKéMON we catch?$"

FourIsland_IcefallCave_Back_Text_GruntDefeat::
# 144 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "We didn't plan on this!$"

FourIsland_IcefallCave_Back_Text_LoreleiWhereHaveYouTakenMons::
# 148 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "LORELEI: Humph.\n"
	.string "So despicably weak.\p"
	.string "You!\n"
	.string "Tell me!\p"
	.string "Where have you taken the captured\n"
	.string "POKéMON?\p"
	.string "I'm smashing your ring once and\n"
	.string "for all!$"

FourIsland_IcefallCave_Back_Text_NotTellingYouThat::
# 162 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "N-no way!\n"
	.string "I'm not telling you that!$"

FourIsland_IcefallCave_Back_Text_LoreleiWellDeepFreezeYou::
# 167 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "LORELEI: If you won't confess,\n"
	.string "we'll deep-freeze you.\p"
	.string "My LAPRAS is furious for what\n"
	.string "you've done to its friends.\p"
	.string "Go, LAPRAS!\n"
	.string "ICE BEAM…$"

FourIsland_IcefallCave_Back_Text_OkayRocketWareHouseFiveIsland::
# 178 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Wawaah! Okay!\n"
	.string "I'll talk!\p"
	.string "The POKéMON are in the ROCKET\n"
	.string "WAREHOUSE on FIVE ISLAND.\p"
	.string "There! I said it!\n"
	.string "We'll be going now!\p"
	.string "…But I doubt you'll ever make it\n"
	.string "into the ROCKET WAREHOUSE!\p"
	.string "Heheheheh!$"

FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful::
# 194 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "{PLAYER}, thank you.\n"
	.string "But this is awful…\p"
	.string "I was born and raised here on\n"
	.string "these islands.\p"
	.string "I had no idea that those horrible\n"
	.string "criminals were loose here…$"
