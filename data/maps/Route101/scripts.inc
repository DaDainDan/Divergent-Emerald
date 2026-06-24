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


Route101_EventScript_PreventExitSouth::
# 42 "data/maps/Route101/scripts.pory"
	lockall
# 43 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 44 "data/maps/Route101/scripts.pory"
	closemessage
# 45 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 46 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route101/scripts.pory"
	releaseall
	end


Route101_EventScript_PreventExitWest::
# 52 "data/maps/Route101/scripts.pory"
	lockall
# 53 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 54 "data/maps/Route101/scripts.pory"
	closemessage
# 55 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 56 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route101/scripts.pory"
	releaseall
	end


Route101_EventScript_PreventExitNorth::
# 62 "data/maps/Route101/scripts.pory"
	lockall
# 63 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 64 "data/maps/Route101/scripts.pory"
	closemessage
# 65 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 66 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route101/scripts.pory"
	releaseall
	end


# 71 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 72 "data/maps/Route101/scripts.pory"
	run_up
# 72 "data/maps/Route101/scripts.pory"
	run_up
# 72 "data/maps/Route101/scripts.pory"
	run_up
# 73 "data/maps/Route101/scripts.pory"
	run_right
# 73 "data/maps/Route101/scripts.pory"
	run_right
# 73 "data/maps/Route101/scripts.pory"
	run_right
# 74 "data/maps/Route101/scripts.pory"
	run_down
# 74 "data/maps/Route101/scripts.pory"
	run_down
# 75 "data/maps/Route101/scripts.pory"
	run_left
# 75 "data/maps/Route101/scripts.pory"
	run_left
# 75 "data/maps/Route101/scripts.pory"
	run_left
# 76 "data/maps/Route101/scripts.pory"
	run_up
# 76 "data/maps/Route101/scripts.pory"
	run_up
# 77 "data/maps/Route101/scripts.pory"
	run_right
# 77 "data/maps/Route101/scripts.pory"
	run_right
# 77 "data/maps/Route101/scripts.pory"
	run_right
# 78 "data/maps/Route101/scripts.pory"
	run_down
# 78 "data/maps/Route101/scripts.pory"
	run_down
# 79 "data/maps/Route101/scripts.pory"
	run_left
# 79 "data/maps/Route101/scripts.pory"
	run_left
# 79 "data/maps/Route101/scripts.pory"
	run_left
# 80 "data/maps/Route101/scripts.pory"
	run_up
# 80 "data/maps/Route101/scripts.pory"
	run_up
# 81 "data/maps/Route101/scripts.pory"
	run_right
# 81 "data/maps/Route101/scripts.pory"
	run_right
# 81 "data/maps/Route101/scripts.pory"
	run_right
# 82 "data/maps/Route101/scripts.pory"
	run_down
# 82 "data/maps/Route101/scripts.pory"
	run_down
# 83 "data/maps/Route101/scripts.pory"
	run_left
# 83 "data/maps/Route101/scripts.pory"
	run_left
	step_end

# 86 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 87 "data/maps/Route101/scripts.pory"
	run_up
# 87 "data/maps/Route101/scripts.pory"
	run_up
# 88 "data/maps/Route101/scripts.pory"
	run_right
# 88 "data/maps/Route101/scripts.pory"
	run_right
# 88 "data/maps/Route101/scripts.pory"
	run_right
# 89 "data/maps/Route101/scripts.pory"
	run_down
# 89 "data/maps/Route101/scripts.pory"
	run_down
# 90 "data/maps/Route101/scripts.pory"
	run_left
# 90 "data/maps/Route101/scripts.pory"
	run_left
# 90 "data/maps/Route101/scripts.pory"
	run_left
# 91 "data/maps/Route101/scripts.pory"
	run_up
# 91 "data/maps/Route101/scripts.pory"
	run_up
# 92 "data/maps/Route101/scripts.pory"
	run_right
# 92 "data/maps/Route101/scripts.pory"
	run_right
# 92 "data/maps/Route101/scripts.pory"
	run_right
# 93 "data/maps/Route101/scripts.pory"
	run_down
# 93 "data/maps/Route101/scripts.pory"
	run_down
# 94 "data/maps/Route101/scripts.pory"
	run_left
# 94 "data/maps/Route101/scripts.pory"
	run_left
# 94 "data/maps/Route101/scripts.pory"
	run_left
# 95 "data/maps/Route101/scripts.pory"
	run_up
# 95 "data/maps/Route101/scripts.pory"
	run_up
# 96 "data/maps/Route101/scripts.pory"
	run_right
# 96 "data/maps/Route101/scripts.pory"
	run_right
# 96 "data/maps/Route101/scripts.pory"
	run_right
# 97 "data/maps/Route101/scripts.pory"
	run_down
# 97 "data/maps/Route101/scripts.pory"
	run_down
# 98 "data/maps/Route101/scripts.pory"
	run_left
# 98 "data/maps/Route101/scripts.pory"
	run_left
# 98 "data/maps/Route101/scripts.pory"
	run_left
	step_end

# 101 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 102 "data/maps/Route101/scripts.pory"
	walk_up
# 102 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

# 105 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 106 "data/maps/Route101/scripts.pory"
	walk_up
# 107 "data/maps/Route101/scripts.pory"
	walk_left
# 108 "data/maps/Route101/scripts.pory"
	walk_up
	step_end

Route101_EventScript_BirchsBag::
# 112 "data/maps/Route101/scripts.pory"
	lock_faceplayer
# 113 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 114 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 115 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 116 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ROUTE101_ZIGZAGOON
# 117 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_PLAYER, 6, 13
# 118 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 119 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 121 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ROUTE101_BIRCH, Common_Movement_WalkRight
# 122 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 124 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 125 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 126 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 127 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 128 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 129 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 130 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	checkplayergender
# 0 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route101_EventScript_BirchsBag_2
# 134 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
Route101_EventScript_BirchsBag_1:
# 136 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 137 "data/maps/Route101/scripts.pory"
	waitstate
	release_end

Route101_EventScript_BirchsBag_2:
# 132 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	goto Route101_EventScript_BirchsBag_1


Route101_EventScript_Calvin::
# 142 "data/maps/Route101/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route101_Text_CalvinIntro, Route101_Text_CalvinDefeated, Route101_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route101_EventScript_Calvin_2
# 148 "data/maps/Route101/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 149 "data/maps/Route101/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route101_EventScript_Calvin_6
Route101_EventScript_Calvin_4:
# 153 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release_end

Route101_EventScript_Calvin_2:
# 144 "data/maps/Route101/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route101_Text_CalvinRematchIntro, Route101_Text_CalvinRematchDefeated
# 145 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route101_EventScript_Calvin_5:
# 150 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_CalvinRegister, MSGBOX_DEFAULT
# 151 "data/maps/Route101/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
	goto Route101_EventScript_Calvin_4

Route101_EventScript_Calvin_6:
	specialvar VAR_RESULT, IsTrainerRegistered
# 0 "data/maps/Route101/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route101_EventScript_Calvin_5
	goto Route101_EventScript_Calvin_4


Route101_EventScript_CalvinRegisterMatchCallAfterBattle::
# 158 "data/maps/Route101/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 159 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route101/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route101_EventScript_CalvinRegisterMatchCallAfterBattle_2
Route101_EventScript_CalvinRegisterMatchCallAfterBattle_1:
	release_end

Route101_EventScript_CalvinRegisterMatchCallAfterBattle_2:
# 161 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 162 "data/maps/Route101/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
	goto Route101_EventScript_CalvinRegisterMatchCallAfterBattle_1


Route101_EventScript_Youngster::
# 169 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
	end


Route101_EventScript_Boy::
# 174 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
	end


Route101_EventScript_RouteSign::
# 179 "data/maps/Route101/scripts.pory"
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

Route101_Text_HelpMe::
# 183 "data/maps/Route101/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}H-help me!$"

Route101_Text_PleaseHelp::
# 187 "data/maps/Route101/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Hello! You over there!\n"
	.string "Please! Help!\p"
	.string "In my BAG!\n"
	.string "There's a POKé BALL!$"

Route101_Text_DontLeaveMe::
# 195 "data/maps/Route101/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Wh-Where are you going?!\n"
	.string "Don't leave me like this!$"

Route101_Text_YouSavedMe::
# 200 "data/maps/Route101/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Whew…\p"
	.string "I was in the tall grass studying wild\n"
	.string "POKéMON when I was jumped.\p"
	.string "You saved me.\n"
	.string "Thanks a lot!\p"
	.string "Oh?\p"
	.string "Hi, you're {PLAYER}{KUN}!\n"
	.string "I'm PROF. BIRCH.\p"
	.string "This is not the place to chat, so come\n"
	.string "by my POKéMON LAB later, okay?$"

Route101_Text_TakeTiredPokemonToPokeCenter::
# 218 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
	.string "a POKéMON CENTER.\p"
	.string "There's a POKéMON CENTER in OLDALE\n"
	.string "TOWN right close by.$"

Route101_Text_WildPokemonInTallGrass::
# 226 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
	.string "tall grass.\p"
	.string "If you want to catch POKéMON, you have\n"
	.string "to go into the tall grass and search.$"

Route101_Text_RouteSign::
# 234 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
	.string "{UP_ARROW} OLDALE TOWN$"
