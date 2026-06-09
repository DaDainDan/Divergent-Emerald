EverGrandeCity_ChampionsRoom_MapScripts::
# 2 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 12 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	end

EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 8 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 14 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 15 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp4
# 16 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 17 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 19 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
	end


EverGrandeCity_ChampionsRoom_EventScript_Wallace::
# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
	checkplayergender
# 0 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Wallace_2
# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
EverGrandeCity_ChampionsRoom_EventScript_Wallace_1:
# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_RIVAL
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_EventScript_Wallace_Movement_0
# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Wallace_6
# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
EverGrandeCity_ChampionsRoom_EventScript_Wallace_5:
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Wallace_10
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
EverGrandeCity_ChampionsRoom_EventScript_Wallace_9:
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
	end

EverGrandeCity_ChampionsRoom_EventScript_Wallace_2:
# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace_1

EverGrandeCity_ChampionsRoom_EventScript_Wallace_6:
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace_5

EverGrandeCity_ChampionsRoom_EventScript_Wallace_10:
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace_9


EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_BIRCH
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_0
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call ProfBirch_EventScript_RatePokedex
# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_StepFasterUp
# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_StepFasterDown
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_1
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, Common_Movement_StepFasterUp
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_2
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
	checkplayergender
# 0 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_2
# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_1:
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_3
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_4
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
	end

EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_2:
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_1


# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_faster_up
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_faster_right
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_faster_up
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_faster_right
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
	step_end

# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
	step_end

# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Wallace_Movement_0:
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_faster_right
	step_end

# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_0:
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_faster_left
	step_end

# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_1:
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_faster_down
	step_end

# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_2:
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
	step_end

# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_3:
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
	step_end

# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_4:
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_Text_IntroSpeech::
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: Welcome, {PLAYER}{KUN}.\p"
	.string "That incident in SOOTOPOLIS CITY…\n"
	.string "That was superb work, putting an end\l"
	.string "to that crisis all by yourself.\p"
	.string "Oops!\p"
	.string "It wouldn't be fair to say that you\n"
	.string "alone ended the crisis.\p"
	.string "You overcame that difficult situation\n"
	.string "by working as one with your POKéMON.\p"
	.string "We TRAINERS raise POKéMON by giving\n"
	.string "them items and by teaching them new\l"
	.string "techniques for battle.\p"
	.string "But we ourselves also learn many\n"
	.string "things from POKéMON.\p"
	.string "And this is where your achievements\n"
	.string "are put to the test against what\l"
	.string "others like you have achieved.\p"
	.string "Now!\p"
	.string "Who can most elegantly dance with\n"
	.string "their POKéMON in HOENN?\p"
	.string "Show me right here and now!$"

EverGrandeCity_ChampionsRoom_Text_Defeat::
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I, the CHAMPION, fall in defeat…\p"
	.string "That was wonderful work.\n"
	.string "You were elegant, infuriatingly so.\l"
	.string "And yet it was utterly glorious!\p"
	.string "Kudos to you, {PLAYER}{KUN}!\p"
	.string "You are a truly noble POKéMON\n"
	.string "TRAINER!$"

EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech::
# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: The POKéMON you sent into\n"
	.string "battle…\p"
	.string "At times they danced like a spring\n"
	.string "breeze, and at times they struck\l"
	.string "like lightning.\p"
	.string "It was with light, yet surefooted,\n"
	.string "elegance that you led your POKéMON.\p"
	.string "Even I felt bedazzled by your\n"
	.string "masterful performance!\p"
	.string "You now stand at the glorious peak\n"
	.string "of the POKéMON LEAGUE.\p"
	.string "I now proclaim you to be the new\n"
	.string "HOENN region…$"

EverGrandeCity_ChampionsRoom_Text_MayAdvice::
# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
	.string "Here's some advice before you challenge\n"
	.string "the CHAMPION…$"

EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver::
# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Huh?\n"
	.string "What, what, what?\p"
	.string "{PLAYER}{KUN}…\n"
	.string "Could it be that…\l"
	.string "It's already over?$"

EverGrandeCity_ChampionsRoom_Text_BrendanAdvice::
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}!\p"
	.string "How would you like some advice before\n"
	.string "you challenge the CHAMPION?…$"

EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon::
# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}…\p"
	.string "Are you trying to tell me…\n"
	.string "You've beaten the CHAMPION?$"

EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex::
# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: See?\n"
	.string "What did I tell you, {RIVAL}?\p"
	.string "Didn't I tell you that you don't need\n"
	.string "to worry about {PLAYER}{KUN}?\p"
	.string "… … … … … … … …\n"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
	.string "When I heard that you defeated your\n"
	.string "own father at the PETALBURG GYM,\l"
	.string "I thought perhaps you had a chance…\p"
	.string "But to think you've actually become\n"
	.string "the CHAMPION!\p"
	.string "Ah, yes!\p"
	.string "What became of your POKéDEX?\n"
	.string "Here, let me see.$"

EverGrandeCity_ChampionsRoom_Text_BirchCongratulations::
# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: Anyways,\n"
	.string "congratulations!\p"
	.string "Now, go proudly into the final room!$"

EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe::
# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: {PLAYER}{KUN}…\p"
	.string "No, let me rephrase that properly.\p"
	.string "The new CHAMPION!\p"
	.string "Come with me.$"

EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside::
# 264 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "WALLACE: I'm sorry, but…\p"
	.string "From here on, only those TRAINERS who\n"
	.string "have become CHAMPIONS may enter.\p"
	.string "You'll have to wait outside with\n"
	.string "PROF. BIRCH.$"

EverGrandeCity_ChampionsRoom_Text_MayCongratulations::
# 274 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Groan…\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "I'm just joking! That's okay!\n"
	.string "That's the rule!\p"
	.string "{PLAYER}{KUN}!\n"
	.string "Honestly, congratulations!$"

EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations::
# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: Whaaaat?! … … … … …\n"
	.string "… … … … … … … …\p"
	.string "It can't be helped if that's the rule.\p"
	.string "{PLAYER}, way to go!\n"
	.string "Congratulations!$"
