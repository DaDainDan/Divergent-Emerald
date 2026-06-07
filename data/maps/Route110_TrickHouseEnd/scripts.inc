Route110_TrickHouseEnd_MapScripts::
# 2 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 22 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_RESUME_2
Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setmetatile 10, 1, METATILE_GenericBuilding_TrickHouse_Door_Closed, TRUE
	goto Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_RESUME_1

Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_1, 0
# 10 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_2, 0
# 11 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	special SetTrickHouseNuggetFlag
	end

Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 16 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_1, 1
# 17 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setmetatile 10, 1, METATILE_GenericBuilding_TrickHouse_Door_Closed, TRUE
# 18 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	special DrawWholeMapView
	end

Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 23 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

Route110_TrickHouseEnd_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 24 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	addobject LOCALID_TRICK_MASTER_END
# 25 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	showobjectat LOCALID_TRICK_MASTER_END, MAP_ROUTE110_TRICK_HOUSE_END
# 26 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	turnobject LOCALID_TRICK_MASTER_END, DIR_EAST
	end


Route110_TrickHouseEnd_EventScript_TrickMaster::
# 33 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	lock_faceplayer
# 34 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouveMadeItToMe, MSGBOX_DEFAULT
# 35 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_2, 1
# 36 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 37 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 0, Route110_TrickHouseEnd_EventScript_TrickMaster_3
# 40 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 1, Route110_TrickHouseEnd_EventScript_TrickMaster_4
# 43 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 2, Route110_TrickHouseEnd_EventScript_TrickMaster_5
# 46 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 3, Route110_TrickHouseEnd_EventScript_TrickMaster_6
# 49 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 4, Route110_TrickHouseEnd_EventScript_TrickMaster_7
# 52 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 5, Route110_TrickHouseEnd_EventScript_TrickMaster_8
# 55 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 6, Route110_TrickHouseEnd_EventScript_TrickMaster_9
# 58 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 7, Route110_TrickHouseEnd_EventScript_TrickMaster_10
Route110_TrickHouseEnd_EventScript_TrickMaster_1:
# 61 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 62 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	giveitem VAR_GIFT_ITEM
# 0 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_TrickHouseEnd_EventScript_TrickMaster_12
Route110_TrickHouseEnd_EventScript_TrickMaster_11:
# 68 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 69 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 70 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
	release_end

Route110_TrickHouseEnd_EventScript_TrickMaster_3:
# 38 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToPlantTrees, MSGBOX_DEFAULT
# 39 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_RARE_CANDY
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1

Route110_TrickHouseEnd_EventScript_TrickMaster_4:
# 41 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToMakeMaze, MSGBOX_DEFAULT
# 42 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_TIMER_BALL
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1

Route110_TrickHouseEnd_EventScript_TrickMaster_5:
# 44 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToPreparePanels, MSGBOX_DEFAULT
# 45 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_HARD_STONE
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1

Route110_TrickHouseEnd_EventScript_TrickMaster_6:
# 47 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToShoveBoulders, MSGBOX_DEFAULT
# 48 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_SMOKE_BALL
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1

Route110_TrickHouseEnd_EventScript_TrickMaster_7:
# 50 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls, MSGBOX_DEFAULT
# 51 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_TM_TAUNT
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1

Route110_TrickHouseEnd_EventScript_TrickMaster_8:
# 53 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToInstallDoors, MSGBOX_DEFAULT
# 54 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_MAGNET
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1

Route110_TrickHouseEnd_EventScript_TrickMaster_9:
# 56 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightSettingUpArrows, MSGBOX_DEFAULT
# 57 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_PP_MAX
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1

Route110_TrickHouseEnd_EventScript_TrickMaster_10:
# 59 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_1

Route110_TrickHouseEnd_EventScript_TrickMaster_12:
# 64 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Common_EventScript_BagIsFull
# 65 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_NoRoomForThis, MSGBOX_DEFAULT
# 66 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
	goto Route110_TrickHouseEnd_EventScript_TrickMaster_11


Route110_TrickHouseEnd_EventScript_CompletedPuzzle8::
# 75 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightPolishingFloors, MSGBOX_DEFAULT
# 76 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 77 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	switch VAR_FACING
# 78 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case DIR_SOUTH, Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_3
# 79 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case DIR_NORTH, Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_4
# 80 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case DIR_WEST, Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_5
# 81 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case DIR_EAST, Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_6
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_1:
# 83 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 30
# 85 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry, MSGBOX_DEFAULT
# 86 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 87 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_FacePlayer
# 88 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 30
# 90 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent, MSGBOX_DEFAULT
# 91 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 92 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	multichoice 0, 0, MULTI_TENT, TRUE
# 93 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	switch VAR_RESULT
# 94 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 0, Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_9
# 95 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	givedecoration DECOR_BLUE_TENT
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_7:
# 97 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_12
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_11:
# 102 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_LeavingOnJourney, MSGBOX_DEFAULT
# 103 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 104 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	special ResetTrickHouseNuggetFlag
	release_end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_3:
# 78 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_StepFasterDown
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_1

Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_4:
# 79 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_StepFasterUp
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_1

Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_5:
# 80 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_StepFasterLeft
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_1

Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_6:
# 81 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_StepFasterRight
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_1

Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_9:
# 94 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	givedecoration DECOR_RED_TENT
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_7

Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_12:
# 98 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 99 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_NoRoomInPC, MSGBOX_DEFAULT
# 100 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
	goto Route110_TrickHouseEnd_EventScript_CompletedPuzzle8_11


Route110_TrickHouseEnd_EventScript_TrickMasterExit::
# 109 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Route110_TrickHouse_Movement_TrickMasterSpin
# 110 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	playse SE_M_EXPLOSION
# 112 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Route110_TrickHouseEnd_EventScript_TrickMasterExit_Movement_0
# 113 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 114 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	removeobject LOCALID_TRICK_MASTER_END
# 115 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	addvar VAR_TRICK_HOUSE_LEVEL, 1
	return


Route110_TrickHouseEnd_EventScript_TrickMasterExitTrigger::
# 120 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	lockall
# 121 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	turnobject LOCALID_TRICK_MASTER_END, DIR_WEST
# 122 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	playse SE_PIN
# 123 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_ExclamationMark
# 124 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 20
# 126 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER_END, Route110_TrickHouseEnd_EventScript_TrickMasterExitTrigger_Movement_0
# 127 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 128 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	playse SE_M_EXPLOSION
# 129 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 130 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YoureIgnoringMe, MSGBOX_DEFAULT
# 132 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 133 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 134 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 135 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 4
# 136 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	turnobject LOCALID_TRICK_MASTER_END, DIR_EAST
# 137 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	releaseall
	end


# 112 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterExit_Movement_0:
# 112 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	face_up
# 112 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	disable_anim
# 112 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	slide_up
# 112 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	slide_up
# 112 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	slide_up
# 112 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	slide_up
# 112 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	slide_up
# 112 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	slide_up
	step_end

# 126 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterExitTrigger_Movement_0:
# 126 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	jump_in_place_left
	step_end

Route110_TrickHouseEnd_Text_YouveMadeItToMe::
# 141 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Aak!\n"
	.string "You've made it to me?\l"
	.string "Hmmm… You're sharp!$"

Route110_TrickHouseEnd_Text_AllNightToPlantTrees::
# 147 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to plant all those\n"
	.string "trees…\p"
	.string "You're almost my equal in greatness by\n"
	.string "one, two, three, four, five, six places!$"

Route110_TrickHouseEnd_Text_AllNightToMakeMaze::
# 155 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to make the maze…\p"
	.string "You're almost my equal in greatness by\n"
	.string "one, two, three, four, five places!$"

Route110_TrickHouseEnd_Text_AllNightToPreparePanels::
# 162 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to prepare\n"
	.string "the wall panels…\p"
	.string "You're almost my equal in greatness by\n"
	.string "one, two, three, four places!$"

Route110_TrickHouseEnd_Text_AllNightToShoveBoulders::
# 170 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to shove in those\n"
	.string "boulders…\p"
	.string "You're almost my equal in greatness by\n"
	.string "one, two, three places!$"

Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls::
# 178 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to make MECHADOLLS\n"
	.string "and another to think up the quiz…\p"
	.string "You're almost my equal in greatness by\n"
	.string "one, two places!$"

Route110_TrickHouseEnd_Text_AllNightToInstallDoors::
# 186 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to install\n"
	.string "the doors…\p"
	.string "You're almost my equal in greatness!$"

Route110_TrickHouseEnd_Text_AllNightSettingUpArrows::
# 193 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night setting up arrows…\p"
	.string "You're my equal in greatness!$"

Route110_TrickHouseEnd_Text_AllNightPolishingFloors::
# 199 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night polishing floors…\p"
	.string "You're above me in greatness!\n"
	.string "Possibly…$"

Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry::
# 206 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Wh-what should I do?\n"
	.string "My fountain of ideas for tricks has\l"
	.string "run dry…\p"
	.string "Perhaps it is time I toured the country\n"
	.string "on a quest to devise new tricks…$"

Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent::
# 215 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "I hate to admit defeat, but you have\n"
	.string "bested me!\p"
	.string "Still, you must have been reeled in by\n"
	.string "my charisma for you to visit me again\l"
	.string "and again. Yes, you must have!\p"
	.string "But that has nothing to do with my\n"
	.string "losing!\p"
	.string "In recognition of the friendship\n"
	.string "between you, the driven, and the genius\l"
	.string "that is myself, I demand that you take\l"
	.string "this keepsake!\p"
	.string "Actually there are two--\n"
	.string "a RED TENT and a BLUE TENT.\l"
	.string "Which do you prefer?$"

Route110_TrickHouseEnd_Text_NoRoomInPC::
# 236 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "What? No room in your PC?\n"
	.string "What am I to make of that?\p"
	.string "I wish I could say that, but I am much\n"
	.string "too kind and caring, so come back later!$"

Route110_TrickHouseEnd_Text_LeavingOnJourney::
# 244 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "… … … … … …\p"
	.string "I am leaving on a journey of discovery.\n"
	.string "A quest in search of new tricks.\p"
	.string "I wish that you will one day visit and\n"
	.string "entertain me again.\p"
	.string "And now, farewell!$"

Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward::
# 256 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Fine!\n"
	.string "You have earned this reward!$"

Route110_TrickHouseEnd_Text_NoRoomForThis::
# 261 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "What? Have you no room for this?\n"
	.string "What manner of items do you carry?\p"
	.string "But fine, since you've reached me,\n"
	.string "your reward will be with me till later.$"

Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou::
# 269 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Scrub that smug smirk from your face!\n"
	.string "It's much too early to think you've won!\p"
	.string "I'll make new tricks to stump you, I will.\n"
	.string "You may mock me only when you're done.\p"
	.string "Come back for the next exciting\n"
	.string "installment!$"

Route110_TrickHouseEnd_Text_YoureIgnoringMe::
# 280 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Now, now! You're ignoring me now?\n"
	.string "Now that, I consider heartbreaking!$"
