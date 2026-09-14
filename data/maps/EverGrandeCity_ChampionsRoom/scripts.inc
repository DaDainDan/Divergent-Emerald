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
	goto_if_set FLAG_SYS_GAME_CLEAR, EverGrandeCity_ChampionsRoom_EventScript_Wallace_2
EverGrandeCity_ChampionsRoom_EventScript_Wallace_1:
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
	checkplayergender
# 0 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Wallace_5
# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
EverGrandeCity_ChampionsRoom_EventScript_Wallace_4:
# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_RIVAL
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_EventScript_Wallace_Movement_0
# 49 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Wallace_9
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
EverGrandeCity_ChampionsRoom_EventScript_Wallace_8:
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_ExclamationMark
# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, Common_Movement_Delay48
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_Wallace_13
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
EverGrandeCity_ChampionsRoom_EventScript_Wallace_12:
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
	end

EverGrandeCity_ChampionsRoom_EventScript_Wallace_2:
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace_1

EverGrandeCity_ChampionsRoom_EventScript_Wallace_5:
# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace_4

EverGrandeCity_ChampionsRoom_EventScript_Wallace_9:
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace_8

EverGrandeCity_ChampionsRoom_EventScript_Wallace_13:
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace_12


EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_CHAMPIONS_ROOM_BIRCH
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_0
# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call ProfBirch_EventScript_RatePokedex
# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_StepFasterUp
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, Common_Movement_StepFasterDown
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_1
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_BIRCH, Common_Movement_StepFasterUp
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_RIVAL, EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_2
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
	checkplayergender
# 0 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_2
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_1:
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_3
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_4
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
	end

EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_2:
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_1


# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_faster_up
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_faster_right
# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_faster_up
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_faster_right
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
	step_end

EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame::
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	specialvar VAR_RESULT, GetChampionRematch
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	switch VAR_RESULT
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	case 0, EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_3
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	case 1, EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_4
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	case 2, EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_5
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	case 3, EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_6
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	case 4, EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_7
EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_1:
# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_1
# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_Text_0, MSGBOX_DEFAULT
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_WALLACE, EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_3
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_4
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
	end

EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_3:
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox WallaceRematchIntro, MSGBOX_DEFAULT
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
	goto EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_1

EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_4:
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox WallaceRematchIntro, MSGBOX_DEFAULT
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
	goto EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_1

EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_5:
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox WallaceRematchIntro, MSGBOX_DEFAULT
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
	goto EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_1

EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_6:
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox WallaceRematchIntro, MSGBOX_DEFAULT
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
	goto EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_1

EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_7:
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox WallaceRematchIntro, MSGBOX_DEFAULT
# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
	goto EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_1


# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
	step_end

# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Wallace_Movement_0:
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_faster_right
	step_end

# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_0:
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_faster_left
	step_end

# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_1:
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_faster_down
	step_end

# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_2:
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
	step_end

# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_3:
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
	step_end

# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF_Movement_4:
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
	step_end

EverGrandeCity_ChampionsRoom_EventScript_ChampionBattlePostGame_Text_0:
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "…$"

EverGrandeCity_ChampionsRoom_Text_IntroSpeech::
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_WALLACE}Welcome, {PLAYER}{KUN}.\p"
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
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I, the CHAMPION, fall in defeat…\p"
	.string "That was wonderful work.\n"
	.string "You were elegant, infuriatingly so.\l"
	.string "And yet it was utterly glorious!\p"
	.string "Kudos to you, {PLAYER}{KUN}!\p"
	.string "You are a truly noble POKéMON\n"
	.string "TRAINER!$"

EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech::
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_WALLACE}The POKéMON you sent into\n"
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
# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_MAY}{PLAYER}{KUN}!\p"
	.string "Here's some advice before you challenge\n"
	.string "the CHAMPION…$"

EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver::
# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_MAY}Huh?\n"
	.string "What, what, what?\p"
	.string "{PLAYER}{KUN}…\n"
	.string "Could it be that…\l"
	.string "It's already over?$"

EverGrandeCity_ChampionsRoom_Text_BrendanAdvice::
# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}{PLAYER}!\p"
	.string "How would you like some advice before\n"
	.string "you challenge the CHAMPION?…$"

EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon::
# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}{PLAYER}…\p"
	.string "Are you trying to tell me…\n"
	.string "You've beaten the CHAMPION?$"

EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex::
# 262 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_BIRCH}See?\n"
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
# 285 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_BIRCH}Anyways,\n"
	.string "congratulations!\p"
	.string "Now, go proudly into the final room!$"

EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe::
# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_WALLACE}{PLAYER}{KUN}…\p"
	.string "No, let me rephrase that properly.\p"
	.string "The new CHAMPION!\p"
	.string "Come with me.$"

EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside::
# 302 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_WALLACE}I'm sorry, but…\p"
	.string "From here on, only those TRAINERS who\n"
	.string "have become CHAMPIONS may enter.\p"
	.string "You'll have to wait outside with\n"
	.string "PROF. BIRCH.$"

EverGrandeCity_ChampionsRoom_Text_MayCongratulations::
# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_MAY}Groan…\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "I'm just joking! That's okay!\n"
	.string "That's the rule!\p"
	.string "{PLAYER}{KUN}!\n"
	.string "Honestly, congratulations!$"

EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations::
# 325 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}Whaaaat?! … … … … …\n"
	.string "… … … … … … … …\p"
	.string "It can't be helped if that's the rule.\p"
	.string "{PLAYER}, way to go!\n"
	.string "Congratulations!$"

WallaceRematchIntro::
# 335 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_WALLACE}…$"

WallaceRematchDefeat::
# 339 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_WALLACE}…$"

WallyRematchIntroDrive::
# 343 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_WALLACE}…$"

WallyRematchDefeatDrive::
# 347 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_WALLY}…$"

WallyRematchIntroBond::
# 351 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_WALLY}…$"

WallyRematchDefeatBond::
# 355 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{SPEAKER NAME_WALLY}…$"
