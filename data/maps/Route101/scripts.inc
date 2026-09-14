Route101_MapScripts::
# 2 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route101_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
	end

Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route101_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 8 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 9 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
	end


Route101_EventScript_StartBirchRescue::
# 16 "data/maps/Route101/scripts.pory"
	lockall
# 17 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 18 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 19 "data/maps/Route101/scripts.pory"
	closemessage
# 20 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_BIRCH, 0, 15
# 21 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ROUTE101_ZIGZAGOON, 0, 16
# 22 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_EventScript_StartBirchRescue_Movement_0
# 23 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_EventScript_StartBirchRescue_Movement_1
# 24 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_EventScript_StartBirchRescue_Movement_2
# 25 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 27 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_Movement_BirchRunInCircles
# 28 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_StepFasterRight
# 30 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_ZIGZAGOON, Route101_EventScript_StartBirchRescue_Movement_3
# 32 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Route101_EventScript_StartBirchRescue_Movement_4
# 33 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 35 "data/maps/Route101/scripts.pory"
	closemessage
# 36 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 37 "data/maps/Route101/scripts.pory"
	releaseall
	end


Route101_EventScript_PreventExit::
# 42 "data/maps/Route101/scripts.pory"
	lockall
# 43 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 44 "data/maps/Route101/scripts.pory"
	closemessage
# 45 "data/maps/Route101/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 46 "data/maps/Route101/scripts.pory"
	switch VAR_TEMP_0
# 47 "data/maps/Route101/scripts.pory"
	case 6, Route101_EventScript_PreventExit_3
# 49 "data/maps/Route101/scripts.pory"
	case 7, Route101_EventScript_PreventExit_4
# 52 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_EventScript_PreventExit_Movement_2
Route101_EventScript_PreventExit_1:
# 54 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route101/scripts.pory"
	releaseall
	end

Route101_EventScript_PreventExit_3:
# 48 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_EventScript_PreventExit_Movement_0
	goto Route101_EventScript_PreventExit_1

Route101_EventScript_PreventExit_4:
# 50 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Route101_EventScript_PreventExit_Movement_1
	goto Route101_EventScript_PreventExit_1


# 59 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 60 "data/maps/Route101/scripts.pory"
	run_up
# 60 "data/maps/Route101/scripts.pory"
	run_up
# 60 "data/maps/Route101/scripts.pory"
	run_up
# 61 "data/maps/Route101/scripts.pory"
	run_right
# 61 "data/maps/Route101/scripts.pory"
	run_right
# 61 "data/maps/Route101/scripts.pory"
	run_right
# 62 "data/maps/Route101/scripts.pory"
	run_down
# 62 "data/maps/Route101/scripts.pory"
	run_down
# 63 "data/maps/Route101/scripts.pory"
	run_left
# 63 "data/maps/Route101/scripts.pory"
	run_left
# 63 "data/maps/Route101/scripts.pory"
	run_left
# 64 "data/maps/Route101/scripts.pory"
	run_up
# 64 "data/maps/Route101/scripts.pory"
	run_up
# 65 "data/maps/Route101/scripts.pory"
	run_right
# 65 "data/maps/Route101/scripts.pory"
	run_right
# 65 "data/maps/Route101/scripts.pory"
	run_right
# 66 "data/maps/Route101/scripts.pory"
	run_down
# 66 "data/maps/Route101/scripts.pory"
	run_down
# 67 "data/maps/Route101/scripts.pory"
	run_left
# 67 "data/maps/Route101/scripts.pory"
	run_left
# 67 "data/maps/Route101/scripts.pory"
	run_left
# 68 "data/maps/Route101/scripts.pory"
	run_up
# 68 "data/maps/Route101/scripts.pory"
	run_up
# 69 "data/maps/Route101/scripts.pory"
	run_right
# 69 "data/maps/Route101/scripts.pory"
	run_right
# 69 "data/maps/Route101/scripts.pory"
	run_right
# 70 "data/maps/Route101/scripts.pory"
	run_down
# 70 "data/maps/Route101/scripts.pory"
	run_down
# 71 "data/maps/Route101/scripts.pory"
	run_left
# 71 "data/maps/Route101/scripts.pory"
	run_left
	step_end

# 74 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 75 "data/maps/Route101/scripts.pory"
	run_up
# 75 "data/maps/Route101/scripts.pory"
	run_up
# 76 "data/maps/Route101/scripts.pory"
	run_right
# 76 "data/maps/Route101/scripts.pory"
	run_right
# 76 "data/maps/Route101/scripts.pory"
	run_right
# 77 "data/maps/Route101/scripts.pory"
	run_down
# 77 "data/maps/Route101/scripts.pory"
	run_down
# 78 "data/maps/Route101/scripts.pory"
	run_left
# 78 "data/maps/Route101/scripts.pory"
	run_left
# 78 "data/maps/Route101/scripts.pory"
	run_left
# 79 "data/maps/Route101/scripts.pory"
	run_up
# 79 "data/maps/Route101/scripts.pory"
	run_up
# 80 "data/maps/Route101/scripts.pory"
	run_right
# 80 "data/maps/Route101/scripts.pory"
	run_right
# 80 "data/maps/Route101/scripts.pory"
	run_right
# 81 "data/maps/Route101/scripts.pory"
	run_down
# 81 "data/maps/Route101/scripts.pory"
	run_down
# 82 "data/maps/Route101/scripts.pory"
	run_left
# 82 "data/maps/Route101/scripts.pory"
	run_left
# 82 "data/maps/Route101/scripts.pory"
	run_left
# 83 "data/maps/Route101/scripts.pory"
	run_up
# 83 "data/maps/Route101/scripts.pory"
	run_up
# 84 "data/maps/Route101/scripts.pory"
	run_right
# 84 "data/maps/Route101/scripts.pory"
	run_right
# 84 "data/maps/Route101/scripts.pory"
	run_right
# 85 "data/maps/Route101/scripts.pory"
	run_down
# 85 "data/maps/Route101/scripts.pory"
	run_down
# 86 "data/maps/Route101/scripts.pory"
	run_left
# 86 "data/maps/Route101/scripts.pory"
	run_left
# 86 "data/maps/Route101/scripts.pory"
	run_left
	step_end

# 89 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 90 "data/maps/Route101/scripts.pory"
	walk_up
# 90 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 93 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 94 "data/maps/Route101/scripts.pory"
	walk_up
# 95 "data/maps/Route101/scripts.pory"
	walk_left
# 96 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

Route101_EventScript_BirchsBag::
# 100 "data/maps/Route101/scripts.pory"
	lock_faceplayer
# 101 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 102 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 103 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 104 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 105 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_PLAYER, 6, 13
# 106 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 107 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 109 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkRight
# 110 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 112 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 113 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 114 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 115 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 116 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 117 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 118 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
# 0 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101_EventScript_BirchsBag_2
# 122 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
Route101_EventScript_BirchsBag_1:
# 124 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 125 "data/maps/Route101/scripts.pory"
	waitstate
	release_end

Route101_EventScript_BirchsBag_2:
# 120 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	goto Route101_EventScript_BirchsBag_1


Route101_EventScript_Calvin::
# 130 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route101_Text_CalvinIntro, Route101_Text_CalvinDefeated, Route101_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route101_EventScript_Calvin_2
# 136 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 137 "data/maps/Route101/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route101_EventScript_Calvin_6
Route101_EventScript_Calvin_4:
# 141 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release_end

Route101_EventScript_Calvin_2:
# 132 "data/maps/Route101/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route101_Text_CalvinRematchIntro, Route101_Text_CalvinRematchDefeated
# 133 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route101_EventScript_Calvin_5:
# 138 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_CalvinRegister, MSGBOX_DEFAULT
# 139 "data/maps/Route101/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
	goto Route101_EventScript_Calvin_4

Route101_EventScript_Calvin_6:
	specialvar VAR_RESULT, IsTrainerRegistered
# 0 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route101_EventScript_Calvin_5
	goto Route101_EventScript_Calvin_4


Route101_EventScript_CalvinRegisterMatchCallAfterBattle::
# 146 "data/maps/Route101/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 147 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route101/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route101_EventScript_CalvinRegisterMatchCallAfterBattle_2
Route101_EventScript_CalvinRegisterMatchCallAfterBattle_1:
	release_end

Route101_EventScript_CalvinRegisterMatchCallAfterBattle_2:
# 149 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 150 "data/maps/Route101/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
	goto Route101_EventScript_CalvinRegisterMatchCallAfterBattle_1


Route101_EventScript_Youngster::
# 157 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
	end


Route101_EventScript_Boy::
# 162 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
	end


Route101_EventScript_RouteSign::
# 167 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
	end


# 22 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue_Movement_0:
# 22 "data/maps/Route101/scripts.pory"
	run_up
# 22 "data/maps/Route101/scripts.pory"
	run_up
# 22 "data/maps/Route101/scripts.pory"
	run_up
# 22 "data/maps/Route101/scripts.pory"
	run_up
# 22 "data/maps/Route101/scripts.pory"
	step_faster_left
	step_end

# 23 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue_Movement_1:
# 23 "data/maps/Route101/scripts.pory"
	run_right
# 23 "data/maps/Route101/scripts.pory"
	run_right
# 23 "data/maps/Route101/scripts.pory"
	run_right
# 23 "data/maps/Route101/scripts.pory"
	run_right
# 23 "data/maps/Route101/scripts.pory"
	run_up
# 23 "data/maps/Route101/scripts.pory"
	run_up
	step_end

# 24 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue_Movement_2:
# 24 "data/maps/Route101/scripts.pory"
	run_up
# 24 "data/maps/Route101/scripts.pory"
	run_right
# 24 "data/maps/Route101/scripts.pory"
	run_right
# 24 "data/maps/Route101/scripts.pory"
	run_right
# 24 "data/maps/Route101/scripts.pory"
	run_right
# 24 "data/maps/Route101/scripts.pory"
	run_up
	step_end

# 31 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue_Movement_3:
# 31 "data/maps/Route101/scripts.pory"
	step_fast_left
# 31 "data/maps/Route101/scripts.pory"
	step_fast_left
# 31 "data/maps/Route101/scripts.pory"
	step_fast_left
# 31 "data/maps/Route101/scripts.pory"
	step_fast_left
	step_end

# 32 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue_Movement_4:
# 32 "data/maps/Route101/scripts.pory"
	step_fast_right
# 32 "data/maps/Route101/scripts.pory"
	step_fast_right
# 32 "data/maps/Route101/scripts.pory"
	step_fast_right
# 32 "data/maps/Route101/scripts.pory"
	step_fast_right
	step_end

# 48 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExit_Movement_0:
# 48 "data/maps/Route101/scripts.pory"
	walk_right
	step_end

# 50 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExit_Movement_1:
# 50 "data/maps/Route101/scripts.pory"
	walk_down
	step_end

# 52 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExit_Movement_2:
# 52 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

Route101_Text_HelpMe::
# 171 "data/maps/Route101/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Hello?! You over there!\n"
	.string "H-help me!$"

Route101_Text_PleaseHelp::
# 176 "data/maps/Route101/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}In the BAG!\n"
	.string "Grab one of my POKé BALLS!$"

Route101_Text_DontLeaveMe::
# 181 "data/maps/Route101/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Wh-Where are you going?!\n"
	.string "Don't just leave me here!$"

Route101_Text_YouSavedMe::
# 186 "data/maps/Route101/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Whew…\n"
	.string "That was intense.\p"
	.string "I owe you big-time.\p"
	.string "He could've done some serious\n"
	.string "damage to me if you hadn't intervened.\p"
	.string "It's odd though, the POKéMON around\n"
	.string "here are typically harmless.\p"
	.string "I wonder if…\p"
	.string "Oh! I'm sorry.\n"
	.string "Let's go back to the lab to finish this\l"
	.string "conservation, okay?$"

Route101_Text_TakeTiredPokemonToPokeCenter::
# 205 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
	.string "a POKéMON CENTER.\p"
	.string "There's a POKéMON CENTER in OLDALE\n"
	.string "TOWN right close by.$"

Route101_Text_WildPokemonInTallGrass::
# 213 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
	.string "tall grass.\p"
	.string "If you want to catch POKéMON, you have\n"
	.string "to go into the tall grass and search.$"

Route101_Text_RouteSign::
# 221 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
	.string "{UP_ARROW} OLDALE TOWN$"
