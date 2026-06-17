TwoIsland_JoyfulGameCorner_Frlg_MapScripts::
# 2 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 23 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad_Frlg
# 11 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 18 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER, TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setobjectxyperm LOCALID_JOYFUL_GAME_CORNER_DADDY, 6, 2
# 5 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_JOYFUL_GAME_CORNER_DADDY, MOVEMENT_TYPE_FACE_DOWN
# 6 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_JOYFUL_GAME_CORNER_LOSTELLE, MOVEMENT_TYPE_LOOK_AROUND
# 7 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4
	goto TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 12 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
# 16 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, EventScript_CheckTurnAttendant_Frlg
	.2byte 0

TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 13 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

TwoIsland_JoyfulGameCorner_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 19 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 0, TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene
# 20 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, TwoIsland_JoyfulGameCorner_EventScript_FoundLostelleScene
# 21 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
	.2byte 0


TwoIsland_JoyfulGameCorner_EventScript_FoundLostelleScene::
# 27 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lockall
# 28 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 29 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_YouRescuedLostelle
# 30 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 31 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	special GetPlayerBigGuyGirlString
# 32 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_LostelleItsOkayDaddy
# 33 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 34 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_LOSTELLE, Common_Movement_StepFasterDown
# 35 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 36 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 3
# 37 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	releaseall
	end


TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene::
# 42 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lockall
# 43 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 44 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene_Movement_0
# 45 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 46 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_WhereHasLostelleGottenTo
# 47 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 48 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_StepFasterDown
# 49 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 50 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playse SE_PIN
# 51 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_ExclamationMark
# 52 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 53 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_Delay48
# 54 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 55 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene_Movement_1
# 56 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 57 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 58 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 59 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseHelpFindLostelle
# 60 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 61 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playse SE_DOOR
# 62 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitse
# 63 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene_Movement_2
# 64 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 65 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 66 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	addobject LOCALID_JOYFUL_GAME_CORNER_BIKER
# 67 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene_Movement_3
# 68 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 69 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_IsThisOnlyThreeIsland
# 70 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, Common_Movement_StepFasterRight
# 71 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 72 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_ThisIsTwoIslandMoveIt
# 73 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_TheseIslandsAreConfusing
# 74 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	closemessage
# 75 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, Common_Movement_StepFasterDown
# 76 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmovement 0
# 77 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playse SE_EXIT
# 78 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	removeobject LOCALID_JOYFUL_GAME_CORNER_BIKER
# 79 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	fadedefaultbgm
# 80 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay 60
# 81 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PunkScuffedUpMyFloor
# 82 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	clearflag FLAG_HIDE_THREE_ISLAND_LONE_BIKER
# 83 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 2
# 84 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 1
# 85 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	releaseall
	end


TwoIsland_JoyfulGameCorner_EventScript_InfoMan::
# 90 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lock_faceplayer
# 91 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4
	goto_if_eq TwoIsland_JoyfulGameCorner_EventScript_InfoMan_2
# 94 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, TwoIsland_JoyfulGameCorner_EventScript_InfoMan_3
TwoIsland_JoyfulGameCorner_EventScript_InfoMan_1:
# 98 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_NotRunningAnyGamesToday
	release_end

TwoIsland_JoyfulGameCorner_EventScript_InfoMan_2:
# 92 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto JoyfulGameCorner_EventScript_InfoMan2_Frlg
	goto TwoIsland_JoyfulGameCorner_EventScript_InfoMan_1

TwoIsland_JoyfulGameCorner_EventScript_InfoMan_3:
# 95 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_GetGamesGoingSoon
	release_end


TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy::
# 104 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lock_faceplayer
# 105 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4
	goto_if_eq TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_2
# 108 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER, TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_3
# 112 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 3
	goto_if_eq TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_4
TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_1:
# 115 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseGoToThreeIsland
	release_end

TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_2:
# 106 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto JoyfulGameCorner_EventScript_MinigameAttendant_Frlg
	goto TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_1

TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_3:
# 109 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_IllGetGameCornerRunning
	release_end

TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_4:
# 113 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite
	goto TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy_1


TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite::
# 120 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	goto_if_unset FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE, TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite_2
TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite_1:
	checkitemspace ITEM_MOON_STONE
# 0 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite_5
# 137 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	additem ITEM_MOON_STONE
# 138 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setflag FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER
# 139 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgreceiveditem TwoIsland_JoyfulGameCorner_Text_ReceivedMoonStoneFromLostellesDaddy, ITEM_MOON_STONE
	release_end

TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite_2:
# 121 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_ThisIsForMe
# 122 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2
# 123 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 124 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 125 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	message TwoIsland_JoyfulGameCorner_Text_HandedMeteoriteToLostellesDaddy
# 126 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitmessage
# 127 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	waitfanfare
# 128 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 129 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	removeitem ITEM_METEORITE
# 130 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_OhThisIsFromBill
	goto TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite_1

TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite_5:
# 133 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE
# 134 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_NotGoingToFitInBag
	release_end


TwoIsland_JoyfulGameCorner_EventScript_Lostelle::
# 144 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	lock_faceplayer
# 145 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseShowMeYouBeingCool
	release_end


# 44 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene_Movement_0:
# 44 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_left
# 44 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_right
# 44 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_right
# 44 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_8
# 44 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_faster_up
# 44 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_16
	step_end

# 55 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene_Movement_1:
# 55 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_faster_left
	step_end

# 63 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene_Movement_2:
# 63 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	walk_left
# 63 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_faster_right
	step_end

# 67 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene_Movement_3:
# 67 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_faster_left
# 67 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_8
# 67 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_faster_right
# 67 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	delay_8
# 67 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	step_faster_up
	step_end

TwoIsland_JoyfulGameCorner_Text_WhereHasLostelleGottenTo::
# 149 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Now, where's LOSTELLE gotten to\n"
	.string "today?\p"
	.string "She always brings me lunch every\n"
	.string "day right about now…$"

TwoIsland_JoyfulGameCorner_Text_PleaseHelpFindLostelle::
# 157 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Hm? You, there!\n"
	.string "Are you a friend of LOSTELLE's?\p"
	.string "Have you seen LOSTELLE around?\n"
	.string "I don't know where she might be.\l"
	.string "She should've been here long ago.\p"
	.string "LOSTELLE's a cutie - she got my\n"
	.string "looks - so what if someone…\p"
	.string "What if something's happened to\n"
	.string "my LOSTELLE?!\p"
	.string "Please, help me find her!\n"
	.string "Please go search THREE ISLAND!$"

TwoIsland_JoyfulGameCorner_Text_IsThisOnlyThreeIsland::
# 175 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Hah? What is this GAME CORNER?\n"
	.string "How much sadder can this get?\p"
	.string "Those clowns…\p"
	.string "They said they'd be waiting on the\n"
	.string "island, so where are they?\p"
	.string "Hey, you! Is this the only THREE\n"
	.string "ISLAND around here?$"

TwoIsland_JoyfulGameCorner_Text_ThisIsTwoIslandMoveIt::
# 188 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Try waking up before you crawl out\n"
	.string "of bed, you punk.\p"
	.string "This is TWO ISLAND!\p"
	.string "Move it! Get your filthy motorbike\n"
	.string "out of my place!$"

TwoIsland_JoyfulGameCorner_Text_TheseIslandsAreConfusing::
# 198 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Huh…\n"
	.string "Oh, oh, gotcha.\p"
	.string "Tch…\n"
	.string "These islands are confusing…$"

TwoIsland_JoyfulGameCorner_Text_PunkScuffedUpMyFloor::
# 206 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Would you look at that?\n"
	.string "That punk scuffed up my floor.$"

TwoIsland_JoyfulGameCorner_Text_PleaseGoToThreeIsland::
# 211 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Hey, but listen! I'm begging you,\n"
	.string "you have to go to THREE ISLAND.\p"
	.string "If anything were to happen to my\n"
	.string "LOSTELLE…\p"
	.string "My place is the house with the red\n"
	.string "roof on THREE ISLAND.\p"
	.string "She may just show up late here,\n"
	.string "so I can't run off anywhere.\p"
	.string "That's why I have to get you to do\n"
	.string "me this big favor.$"

TwoIsland_JoyfulGameCorner_Text_NotRunningAnyGamesToday::
# 228 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "I'm sorry.\n"
	.string "We're not running any games today.$"

TwoIsland_JoyfulGameCorner_Text_GetGamesGoingSoon::
# 233 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "We'll get the games going soon\n"
	.string "for you!$"

TwoIsland_JoyfulGameCorner_Text_YouRescuedLostelle::
# 238 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "So you rescued LOSTELLE?\n"
	.string "How can I thank you?\p"
	.string "LOSTELLE, darling, forgive me!\p"
	.string "Daddy didn't know you were scared\n"
	.string "and in trouble!$"

TwoIsland_JoyfulGameCorner_Text_LostelleItsOkayDaddy::
# 248 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "LOSTELLE: It's okay, Daddy.\n"
	.string "I got to be friends with {PLAYER}!$"

TwoIsland_JoyfulGameCorner_Text_ThisIsForMe::
# 253 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Oh, what's that?\n"
	.string "You're saying that this is for me?\p"
	.string "How did you know that I love rare\n"
	.string "rocks and gems?\p"
	.string "You sure know how to make a guy\n"
	.string "happy.$"

TwoIsland_JoyfulGameCorner_Text_HandedMeteoriteToLostellesDaddy::
# 264 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "{PLAYER} handed the METEORITE\n"
	.string "to LOSTELLE's daddy.$"

TwoIsland_JoyfulGameCorner_Text_OhThisIsFromBill::
# 269 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Oh, I see, this is from BILL!\n"
	.string "You have to thank him for me!\p"
	.string "You know, you've been fantastic.\n"
	.string "I want you to have this.$"

TwoIsland_JoyfulGameCorner_Text_ReceivedMoonStoneFromLostellesDaddy::
# 277 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "{PLAYER} received a MOON STONE\n"
	.string "from LOSTELLE's daddy.$"

TwoIsland_JoyfulGameCorner_Text_NotGoingToFitInBag::
# 282 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Your BAG's not going to fit another\n"
	.string "thing…$"

TwoIsland_JoyfulGameCorner_Text_IllGetGameCornerRunning::
# 287 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "All right, I'll get the GAME CORNER\n"
	.string "running right away.\p"
	.string "You have to come visit with a\n"
	.string "friend.$"

TwoIsland_JoyfulGameCorner_Text_PleaseShowMeYouBeingCool::
# 295 "data/maps/TwoIsland_JoyfulGameCorner_Frlg/scripts.pory"
	.string "Listen, listen!\p"
	.string "Please show me you being cool\n"
	.string "again!$"
