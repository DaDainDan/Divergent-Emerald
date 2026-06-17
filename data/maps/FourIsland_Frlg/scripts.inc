FourIsland_Frlg_MapScripts::
# 2 "data/maps/FourIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 12 "data/maps/FourIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FourIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FourIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FourIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FOUR_ISLAND
# 4 "data/maps/FourIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_FOUR_ISLAND, 0
	goto_if_eq FourIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
FourIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_set FLAG_PENDING_DAYCARE_EGG, FourIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
FourIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

FourIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/FourIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_FOUR_ISLAND_RIVAL
	goto FourIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FourIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 8 "data/maps/FourIsland_Frlg/scripts.pory"
	setobjectxyperm LOCALID_FOUR_ISLAND_DAYCARE_MAN, 16, 14
	goto FourIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

FourIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/FourIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FOUR_ISLAND, 0, FourIsland_EventScript_RivalScene
	.2byte 0


FourIsland_EventScript_RivalScene::
# 18 "data/maps/FourIsland_Frlg/scripts.pory"
	lockall
# 19 "data/maps/FourIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 20 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_StepFasterDown
# 21 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmovement 0
# 22 "data/maps/FourIsland_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 23 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_ExclamationMark
# 24 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmovement 0
# 25 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_Delay48
# 26 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmovement 0
# 27 "data/maps/FourIsland_Frlg/scripts.pory"
	delay 25
# 28 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_EventScript_RivalScene_Movement_0
# 29 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmovement 0
# 30 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_RivalAlreadyGotEggBeSmellingYa
# 31 "data/maps/FourIsland_Frlg/scripts.pory"
	closemessage
# 32 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_EventScript_RivalScene_Movement_1
# 33 "data/maps/FourIsland_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_EventScript_RivalScene_Movement_2
# 34 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmovement 0
# 35 "data/maps/FourIsland_Frlg/scripts.pory"
	fadedefaultbgm
# 36 "data/maps/FourIsland_Frlg/scripts.pory"
	playse SE_EXIT
# 37 "data/maps/FourIsland_Frlg/scripts.pory"
	delay 35
# 38 "data/maps/FourIsland_Frlg/scripts.pory"
	removeobject LOCALID_FOUR_ISLAND_RIVAL
# 39 "data/maps/FourIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FOUR_ISLAND, 1
# 40 "data/maps/FourIsland_Frlg/scripts.pory"
	releaseall
	end


FourIsland_EventScript_DaycareMan::
# 45 "data/maps/FourIsland_Frlg/scripts.pory"
	lock_faceplayer
# 46 "data/maps/FourIsland_Frlg/scripts.pory"
	special GetDaycareMonNicknames
	specialvar VAR_RESULT, GetDaycareState
# 0 "data/maps/FourIsland_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
	goto_if_eq FourIsland_EventScript_DaycareMan_2
# 60 "data/maps/FourIsland_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq FourIsland_EventScript_DaycareMan_3
# 64 "data/maps/FourIsland_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
	goto_if_eq FourIsland_EventScript_DaycareMan_4
# 73 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_ImDaycareManSpeakToMyWife
FourIsland_EventScript_DaycareMan_1:
	release_end

FourIsland_EventScript_DaycareMan_2:
# 48 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_DoYouWantEgg, MSGBOX_YESNO
# 49 "data/maps/FourIsland_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FourIsland_EventScript_DaycareMan_10
FourIsland_EventScript_DaycareMan_9:
# 52 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
# 53 "data/maps/FourIsland_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FourIsland_EventScript_DaycareMan_13
FourIsland_EventScript_DaycareMan_12:
# 56 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_IllKeepIt
# 57 "data/maps/FourIsland_Frlg/scripts.pory"
	clearflag FLAG_PENDING_DAYCARE_EGG
# 58 "data/maps/FourIsland_Frlg/scripts.pory"
	special RejectEggFromDayCare
	goto FourIsland_EventScript_DaycareMan_1

FourIsland_EventScript_DaycareMan_3:
# 61 "data/maps/FourIsland_Frlg/scripts.pory"
	special GetDaycareMonNicknames
# 62 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_YourMonIsDoingFine
	goto FourIsland_EventScript_DaycareMan_1

FourIsland_EventScript_DaycareMan_4:
# 65 "data/maps/FourIsland_Frlg/scripts.pory"
	special GetDaycareMonNicknames
# 66 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_YourMonsAreDoingFine
# 67 "data/maps/FourIsland_Frlg/scripts.pory"
	special SetDaycareCompatibilityString
# 68 "data/maps/FourIsland_Frlg/scripts.pory"
	special ShowFieldMessageStringVar4
# 69 "data/maps/FourIsland_Frlg/scripts.pory"
	waitmessage
# 70 "data/maps/FourIsland_Frlg/scripts.pory"
	waitbuttonpress
	goto FourIsland_EventScript_DaycareMan_1

FourIsland_EventScript_DaycareMan_10:
# 50 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_DaycareAcceptEgg
	goto FourIsland_EventScript_DaycareMan_9

FourIsland_EventScript_DaycareMan_13:
# 54 "data/maps/FourIsland_Frlg/scripts.pory"
	goto FourIsland_EventScript_DaycareAcceptEgg
	goto FourIsland_EventScript_DaycareMan_12


FourIsland_EventScript_DaycareAcceptEgg::
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 0 "data/maps/FourIsland_Frlg/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ne FourIsland_EventScript_DaycareAcceptEgg_2
# 91 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_YouHaveNoRoomForIt
	release_end

FourIsland_EventScript_DaycareAcceptEgg_2:
# 80 "data/maps/FourIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 81 "data/maps/FourIsland_Frlg/scripts.pory"
	message DayCare_Text_ReceivedEgg
# 82 "data/maps/FourIsland_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 83 "data/maps/FourIsland_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 84 "data/maps/FourIsland_Frlg/scripts.pory"
	waitfanfare
# 85 "data/maps/FourIsland_Frlg/scripts.pory"
	waitbuttonpress
# 86 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox DayCare_Text_TakeGoodCareOfIt
# 87 "data/maps/FourIsland_Frlg/scripts.pory"
	special GiveEggFromDaycare
# 88 "data/maps/FourIsland_Frlg/scripts.pory"
	clearflag FLAG_PENDING_DAYCARE_EGG
	release_end


FourIsland_EventScript_OldWoman::
# 96 "data/maps/FourIsland_Frlg/scripts.pory"
	lock_faceplayer
# 97 "data/maps/FourIsland_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, FourIsland_EventScript_OldWoman_2
# 102 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_LoreleiHasReturned
	release_end

FourIsland_EventScript_OldWoman_2:
# 98 "data/maps/FourIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 5
# 99 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_LoreleiMetLaprasAsChild
	release_end


FourIsland_EventScript_LittleGirl::
# 107 "data/maps/FourIsland_Frlg/scripts.pory"
	lock_faceplayer
# 108 "data/maps/FourIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 4
# 109 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_LoreleiHasLotsOfStuffedDolls
	release_end


FourIsland_EventScript_FatMan::
# 114 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_MadeSlushieUsingIcefallCaveIce, MSGBOX_NPC
	end


FourIsland_EventScript_IslandSign::
# 119 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_IslandSign, MSGBOX_SIGN
	end


FourIsland_EventScript_LoreleisHouseSign::
# 124 "data/maps/FourIsland_Frlg/scripts.pory"
	msgbox FourIsland_Text_LoreleisHouse, MSGBOX_SIGN
	end


# 28 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_RivalScene_Movement_0:
# 28 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_right
# 28 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_right
# 28 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_down
# 28 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_down
	step_end

# 32 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_RivalScene_Movement_1:
# 32 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_left
# 32 "data/maps/FourIsland_Frlg/scripts.pory"
	step_faster_right
	step_end

# 33 "data/maps/FourIsland_Frlg/scripts.pory"
FourIsland_EventScript_RivalScene_Movement_2:
# 33 "data/maps/FourIsland_Frlg/scripts.pory"
	delay_16
# 33 "data/maps/FourIsland_Frlg/scripts.pory"
	delay_4
# 33 "data/maps/FourIsland_Frlg/scripts.pory"
	walk_down
	step_end

FourIsland_Text_IslandSign::
# 128 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "FOUR ISLAND\n"
	.string "The Warm, Blue, Floe Island$"

FourIsland_Text_LoreleiHasReturned::
# 133 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "LORELEI has returned.\p"
	.string "Did she find the city life too\n"
	.string "stressful, I wonder?$"

FourIsland_Text_LoreleiMetLaprasAsChild::
# 140 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "LORELEI has gone back.\p"
	.string "The LAPRAS she has, I imagine it\n"
	.string "to be the one she met as a child.\p"
	.string "I believe it was in ICEFALL CAVE\n"
	.string "that she caught it.\p"
	.string "Perhaps that POKéMON has been with\n"
	.string "her ever since.$"

FourIsland_Text_RivalAlreadyGotEggBeSmellingYa::
# 153 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "{RIVAL}: Hey!\n"
	.string "{PLAYER}!\p"
	.string "What are you doing here in the\n"
	.string "SEVII ISLANDS?\p"
	.string "You should quit copying me,\n"
	.string "you know?\p"
	.string "Anyways, I already got my POKéMON\n"
	.string "EGG, so I'm done with this island.\p"
	.string "Heh, I bet you don't even know\n"
	.string "about POKéMON EGGS.\p"
	.string "You'll never fill your NATIONAL\n"
	.string "POKéDEX that way.\p"
	.string "By the way, I saw someone we both\n"
	.string "know on this island.\p"
	.string "Why don't you go look around if\n"
	.string "it makes you curious?\p"
	.string "Me, I don't have the time to\n"
	.string "waste.\p"
	.string "Be smelling ya!$"

FourIsland_Text_LoreleiHasLotsOfStuffedDolls::
# 184 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Oh, you found me!\n"
	.string "Please don't tell LORELEI.\p"
	.string "Did you know that LORELEI has lots\n"
	.string "and lots of stuffed dolls?\p"
	.string "Every time she comes back to\n"
	.string "FOUR ISLAND, her collection grows!$"

FourIsland_Text_MadeSlushieUsingIcefallCaveIce::
# 195 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "Ooh, chilly!\p"
	.string "I made a slushie using ice I\n"
	.string "shaved inside ICEFALL CAVE.\p"
	.string "It's chilly and tasty!$"

FourIsland_Text_LoreleisHouse::
# 204 "data/maps/FourIsland_Frlg/scripts.pory"
	.string "LORELEI'S HOUSE$"
