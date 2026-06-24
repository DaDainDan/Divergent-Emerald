Route128_MapScripts::
# 2 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route128_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route128_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route128_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route128/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route128_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route128_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route128_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Route128/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto Route128_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route128_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Route128/scripts.pory"
	map_script_2 VAR_ROUTE128_STATE, 1, Route128_EventScript_KyogreAwakenedScene
	.2byte 0


Route128_EventScript_KyogreAwakenedScene::
# 14 "data/maps/Route128/scripts.pory"
	lockall
# 15 "data/maps/Route128/scripts.pory"
	delay 20
# 16 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieLookAround
# 17 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 18 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieWhatHappened, MSGBOX_DEFAULT
# 19 "data/maps/Route128/scripts.pory"
	closemessage
# 20 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_EventScript_KyogreAwakenedScene_Movement_0
# 21 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 22 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieIOnlyWanted, MSGBOX_DEFAULT
# 23 "data/maps/Route128/scripts.pory"
	closemessage
# 24 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_EventScript_KyogreAwakenedScene_Movement_1
# 25 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Common_Movement_StepFasterUp
# 27 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieDoYouUnderstandNow, MSGBOX_DEFAULT
# 29 "data/maps/Route128/scripts.pory"
	closemessage
# 30 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_EventScript_KyogreAwakenedScene_Movement_2
# 31 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 33 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieResposibilityFallsToArchieAndMe, MSGBOX_DEFAULT
# 35 "data/maps/Route128/scripts.pory"
	closemessage
# 36 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_EventScript_KyogreAwakenedScene_Movement_3
# 37 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 38 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_EventScript_KyogreAwakenedScene_Movement_4
# 39 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieThisDefiesBelief, MSGBOX_DEFAULT
# 41 "data/maps/Route128/scripts.pory"
	closemessage
# 42 "data/maps/Route128/scripts.pory"
	delay 40
# 43 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_EventScript_KyogreAwakenedScene_Movement_5
# 44 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_EventScript_KyogreAwakenedScene_Movement_6
# 45 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_MAXIE
# 47 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_ARCHIE
# 48 "data/maps/Route128/scripts.pory"
	delay 100
# 49 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 50 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 51 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 52 "data/maps/Route128/scripts.pory"
	addobject LOCALID_ROUTE128_STEVEN
# 53 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Common_Movement_RunLeft
# 54 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 56 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWhatIsHappening, MSGBOX_DEFAULT
# 58 "data/maps/Route128/scripts.pory"
	closemessage
# 59 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Common_Movement_WalkUp
# 60 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 61 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWholeWorldWillDrown, MSGBOX_DEFAULT
# 63 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Common_Movement_StepFasterDown
# 64 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenImGoingToSootopolis, MSGBOX_DEFAULT
# 66 "data/maps/Route128/scripts.pory"
	closemessage
# 67 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Common_Movement_StepFasterDown
# 68 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route128/scripts.pory"
	delay 50
# 70 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 71 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 72 "data/maps/Route128/scripts.pory"
	delay 15
# 73 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_STEVEN
# 74 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 75 "data/maps/Route128/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 76 "data/maps/Route128/scripts.pory"
	setvar VAR_ROUTE128_STATE, 2
# 77 "data/maps/Route128/scripts.pory"
	releaseall
	end


# 81 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused1:
# 83 "data/maps/Route128/scripts.pory"
	run_left
	step_end

# 86 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused2:
# 88 "data/maps/Route128/scripts.pory"
	walk_left
# 88 "data/maps/Route128/scripts.pory"
	walk_left
# 88 "data/maps/Route128/scripts.pory"
	walk_left
# 88 "data/maps/Route128/scripts.pory"
	walk_left
# 88 "data/maps/Route128/scripts.pory"
	walk_left
# 88 "data/maps/Route128/scripts.pory"
	walk_left
# 89 "data/maps/Route128/scripts.pory"
	walk_up
# 89 "data/maps/Route128/scripts.pory"
	walk_up
# 89 "data/maps/Route128/scripts.pory"
	walk_up
# 89 "data/maps/Route128/scripts.pory"
	walk_up
# 89 "data/maps/Route128/scripts.pory"
	walk_up
# 89 "data/maps/Route128/scripts.pory"
	walk_up
	step_end

# 92 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieLookAround:
# 94 "data/maps/Route128/scripts.pory"
	run_down
# 95 "data/maps/Route128/scripts.pory"
	step_faster_left
# 96 "data/maps/Route128/scripts.pory"
	delay_16
# 97 "data/maps/Route128/scripts.pory"
	step_faster_right
# 98 "data/maps/Route128/scripts.pory"
	delay_16
# 98 "data/maps/Route128/scripts.pory"
	delay_16
# 99 "data/maps/Route128/scripts.pory"
	step_faster_down
	step_end

Route128_EventScript_Isaiah::
# 103 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ISAIAH_1, Route128_Text_IsaiahIntro, Route128_Text_IsaiahDefeat, Route128_EventScript_RegisterIsaiah
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route128/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route128_EventScript_Isaiah_2
# 109 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostBattle, MSGBOX_DEFAULT
	release_end

Route128_EventScript_Isaiah_2:
# 105 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_ISAIAH_1, Route128_Text_IsaiahRematchIntro, Route128_Text_IsaiahRematchDefeat
# 106 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostRematch, MSGBOX_AUTOCLOSE
	end


Route128_EventScript_RegisterIsaiah::
# 114 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 115 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahRegister, MSGBOX_DEFAULT
# 117 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_ISAIAH_1
	release_end


Route128_EventScript_Katelyn::
# 122 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_KATELYN_1, Route128_Text_KatelynIntro, Route128_Text_KatelynDefeat, Route128_EventScript_RegisterKatelyn
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route128/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route128_EventScript_Katelyn_2
# 128 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostBattle, MSGBOX_DEFAULT
	release_end

Route128_EventScript_Katelyn_2:
# 124 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_KATELYN_1, Route128_Text_KatelynRematchIntro, Route128_Text_KatelynRematchDefeat
# 125 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostRematch, MSGBOX_AUTOCLOSE
	end


Route128_EventScript_RegisterKatelyn::
# 133 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 134 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 135 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynRegister, MSGBOX_DEFAULT
# 136 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_KATELYN_1
	release_end


Route128_EventScript_Alexa::
# 141 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ALEXA, Route128_Text_AlexaIntro, Route128_Text_AlexaDefeat
# 142 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
	end


Route128_EventScript_Ruben::
# 147 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_RUBEN, Route128_Text_RubenIntro, Route128_Text_RubenDefeat
# 148 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_RubenPostBattle, MSGBOX_AUTOCLOSE
	end


Route128_EventScript_Wayne::
# 153 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, Route128_Text_WayneIntro, Route128_Text_WayneDefeat
# 154 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_WaynePostBattle, MSGBOX_AUTOCLOSE
	end


Route128_EventScript_Harrison::
# 159 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_HARRISON, Route128_Text_HarrisonIntro, Route128_Text_HarrisonDefeat
# 160 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_HarrisonPostBattle, MSGBOX_AUTOCLOSE
	end


Route128_EventScript_Carlee::
# 165 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_CARLEE, Route128_Text_CarleeIntro, Route128_Text_CarleeDefeat
# 166 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_CarleePostBattle, MSGBOX_AUTOCLOSE
	end


# 20 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene_Movement_0:
# 20 "data/maps/Route128/scripts.pory"
	lock_look
# 20 "data/maps/Route128/scripts.pory"
	creep_up
# 20 "data/maps/Route128/scripts.pory"
	delay_16
# 20 "data/maps/Route128/scripts.pory"
	unlock_look
	step_end

# 24 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene_Movement_1:
# 24 "data/maps/Route128/scripts.pory"
	walk_left
# 24 "data/maps/Route128/scripts.pory"
	step_faster_down
	step_end

# 30 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene_Movement_2:
# 30 "data/maps/Route128/scripts.pory"
	walk_right
# 30 "data/maps/Route128/scripts.pory"
	step_faster_down
	step_end

# 36 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene_Movement_3:
# 36 "data/maps/Route128/scripts.pory"
	run_left
# 36 "data/maps/Route128/scripts.pory"
	run_left
# 36 "data/maps/Route128/scripts.pory"
	run_left
# 36 "data/maps/Route128/scripts.pory"
	step_faster_right
	step_end

# 38 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene_Movement_4:
# 38 "data/maps/Route128/scripts.pory"
	walk_left
# 38 "data/maps/Route128/scripts.pory"
	walk_left
# 38 "data/maps/Route128/scripts.pory"
	delay_8
# 38 "data/maps/Route128/scripts.pory"
	delay_4
	step_end

# 43 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene_Movement_5:
# 43 "data/maps/Route128/scripts.pory"
	run_left
# 43 "data/maps/Route128/scripts.pory"
	run_left
# 43 "data/maps/Route128/scripts.pory"
	run_left
# 43 "data/maps/Route128/scripts.pory"
	run_up
# 43 "data/maps/Route128/scripts.pory"
	run_up
# 43 "data/maps/Route128/scripts.pory"
	run_up
# 43 "data/maps/Route128/scripts.pory"
	run_up
# 43 "data/maps/Route128/scripts.pory"
	run_up
# 43 "data/maps/Route128/scripts.pory"
	run_up
# 43 "data/maps/Route128/scripts.pory"
	run_up
	step_end

# 44 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene_Movement_6:
# 44 "data/maps/Route128/scripts.pory"
	delay_16
# 44 "data/maps/Route128/scripts.pory"
	delay_16
# 44 "data/maps/Route128/scripts.pory"
	run_up
# 44 "data/maps/Route128/scripts.pory"
	run_left
# 44 "data/maps/Route128/scripts.pory"
	run_up
# 44 "data/maps/Route128/scripts.pory"
	run_up
# 44 "data/maps/Route128/scripts.pory"
	run_up
# 44 "data/maps/Route128/scripts.pory"
	run_up
# 44 "data/maps/Route128/scripts.pory"
	run_up
# 44 "data/maps/Route128/scripts.pory"
	run_up
# 44 "data/maps/Route128/scripts.pory"
	run_up
# 44 "data/maps/Route128/scripts.pory"
	run_up
	step_end

Route128_Text_ArchieWhatHappened::
# 170 "data/maps/Route128/scripts.pory"
	.string "{SPEAKER NAME_ARCHIE}What happened…\n"
	.string "What is this wretched scene…\p"
	.string "Did I…make a horrible mistake?$"

Route128_Text_ArchieIOnlyWanted::
# 177 "data/maps/Route128/scripts.pory"
	.string "I…\n"
	.string "I only wanted…$"

Route128_Text_MaxieDoYouUnderstandNow::
# 182 "data/maps/Route128/scripts.pory"
	.string "{SPEAKER NAME_MAXIE}Do you understand now,\n"
	.string "ARCHIE?\p"
	.string "Do you finally see how disastrous\n"
	.string "your dream turned out to be?\p"
	.string "We have to hurry! We have to do\n"
	.string "something before the situation goes\l"
	.string "completely out of control!$"

Route128_Text_MaxieResposibilityFallsToArchieAndMe::
# 194 "data/maps/Route128/scripts.pory"
	.string "{SPEAKER NAME_MAXIE}{PLAYER}, don't say anything.\p"
	.string "I know that I have no right to be\n"
	.string "critical of ARCHIE…\p"
	.string "But the way things are now, I doubt\n"
	.string "that we humans will be capable of\l"
	.string "doing anything about it.\p"
	.string "But neither can we stand by and\n"
	.string "just watch helplessly.\p"
	.string "The responsibility for putting an end\n"
	.string "to this falls to ARCHIE and me…$"

Route128_Text_MaxieThisDefiesBelief::
# 211 "data/maps/Route128/scripts.pory"
	.string "{SPEAKER NAME_MAXIE}This defies belief…\p"
	.string "Those super-ancient POKéMON…\p"
	.string "Their power is unbelievable.\n"
	.string "They've upset the balance of nature…$"

Route128_Text_StevenWhatIsHappening::
# 220 "data/maps/Route128/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}{PLAYER}{KUN}!\n"
	.string "What is happening?$"

Route128_Text_StevenWholeWorldWillDrown::
# 225 "data/maps/Route128/scripts.pory"
	.string "This is terrible…\p"
	.string "After the scorching heat wave ended,\n"
	.string "this deluge began.\p"
	.string "If this doesn't stop, all of HOENN…\n"
	.string "No, the whole world will drown.\p"
	.string "This huge rain cloud is spreading\n"
	.string "from above SOOTOPOLIS…\p"
	.string "What in the world is taking place there?\p"
	.string "There's no point arguing here…\n"
	.string "SOOTOPOLIS might provide answers…$"

Route128_Text_StevenImGoingToSootopolis::
# 243 "data/maps/Route128/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
	.string "I don't know what you intend to do,\l"
	.string "but don't do anything reckless.\p"
	.string "Okay.\n"
	.string "I'm going to SOOTOPOLIS.$"
