SkyPillar_Outside_MapScripts::
# 2 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_LOAD
# 20 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SkyPillar_Outside/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 3
	goto_if_eq SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/SkyPillar_Outside/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_ge SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	goto SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 7 "data/maps/SkyPillar_Outside/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	goto SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 8 "data/maps/SkyPillar_Outside/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_LOAD:
# 14 "data/maps/SkyPillar_Outside/scripts.pory"
	goto_if_set FLAG_WALLACE_GOES_TO_SKY_PILLAR, SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_LOAD_2
SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 15 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 4, METATILE_Pacifidlog_SkyPillar_DoorOpen_Top, FALSE
# 16 "data/maps/SkyPillar_Outside/scripts.pory"
	setmetatile 14, 5, METATILE_Pacifidlog_SkyPillar_DoorOpen_Bottom, FALSE
	goto SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_LOAD_1

SkyPillar_Outside_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 21 "data/maps/SkyPillar_Outside/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, SkyPillar_Outside_EventScript_WallaceScene
	.2byte 0


SkyPillar_Outside_EventScript_WallaceScene::
# 26 "data/maps/SkyPillar_Outside/scripts.pory"
	lockall
# 27 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, SkyPillar_Outside_EventScript_WallaceScene_Movement_0
# 28 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 29 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 30 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 31 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_OpenedDoorToSkyPillar, MSGBOX_DEFAULT
# 32 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 33 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 34 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1
# 35 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 1
# 36 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 8
# 37 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 3
# 38 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 39 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 40 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 40
# 41 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_EarthquakeNotMomentToWaste, MSGBOX_DEFAULT
# 42 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_PLAYER, SkyPillar_Outside_EventScript_WallaceScene_Movement_1
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, SkyPillar_Outside_EventScript_WallaceScene_Movement_2
# 45 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 46 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8004, 1
# 47 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8005, 3
# 48 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8006, 20
# 49 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_0x8007, 5
# 50 "data/maps/SkyPillar_Outside/scripts.pory"
	special ShakeCamera
# 51 "data/maps/SkyPillar_Outside/scripts.pory"
	waitstate
# 52 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 53 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_StepFasterLeft
# 54 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 55 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 10
# 56 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_StepFasterRight
# 57 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 58 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 20
# 59 "data/maps/SkyPillar_Outside/scripts.pory"
	applymovement LOCALID_SKY_PILLAR_WALLACE, Common_Movement_StepFasterDown
# 60 "data/maps/SkyPillar_Outside/scripts.pory"
	waitmovement 0
# 61 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 62 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_SituationGettingWorse, MSGBOX_DEFAULT
# 63 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 64 "data/maps/SkyPillar_Outside/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 65 "data/maps/SkyPillar_Outside/scripts.pory"
	setweather WEATHER_ABNORMAL
# 66 "data/maps/SkyPillar_Outside/scripts.pory"
	doweather
# 67 "data/maps/SkyPillar_Outside/scripts.pory"
	special WaitWeather
# 68 "data/maps/SkyPillar_Outside/scripts.pory"
	delay 30
# 69 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_GotToGoBackForSootopolis, MSGBOX_DEFAULT
# 70 "data/maps/SkyPillar_Outside/scripts.pory"
	closemessage
# 71 "data/maps/SkyPillar_Outside/scripts.pory"
	playse SE_EXIT
# 72 "data/maps/SkyPillar_Outside/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 73 "data/maps/SkyPillar_Outside/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 74 "data/maps/SkyPillar_Outside/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 4
# 75 "data/maps/SkyPillar_Outside/scripts.pory"
	removeobject LOCALID_SKY_PILLAR_WALLACE
# 76 "data/maps/SkyPillar_Outside/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 77 "data/maps/SkyPillar_Outside/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 78 "data/maps/SkyPillar_Outside/scripts.pory"
	releaseall
	end


SkyPillar_Outside_EventScript_Wallace::
	end


SkyPillar_Outside_EventScript_ClosedDoor::
# 87 "data/maps/SkyPillar_Outside/scripts.pory"
	msgbox SkyPillar_Outside_Text_DoorIsClosed, MSGBOX_SIGN
	end


# 27 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_WallaceScene_Movement_0:
# 27 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 27 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 27 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 27 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 27 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 27 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 27 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_down
# 27 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 27 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 27 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
	step_end

# 43 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_WallaceScene_Movement_1:
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 43 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
	step_end

# 44 "data/maps/SkyPillar_Outside/scripts.pory"
SkyPillar_Outside_EventScript_WallaceScene_Movement_2:
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_left
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_right
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
# 44 "data/maps/SkyPillar_Outside/scripts.pory"
	walk_up
	step_end

SkyPillar_Outside_Text_DoorIsClosed::
# 91 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "The door is closed.$"

SkyPillar_Outside_Text_OpenedDoorToSkyPillar::
# 95 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: Oh, my, I'm terribly sorry!\p"
	.string "In my haste, I didn't notice that\n"
	.string "I'd left you behind!\p"
	.string "I've opened the locked door of\n"
	.string "the SKY PILLAR.\p"
	.string "{PLAYER}{KUN}, let's be on our way!$"

SkyPillar_Outside_Text_EarthquakeNotMomentToWaste::
# 107 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: It's an earthquake!\p"
	.string "There's not a moment to waste!\n"
	.string "We've got to hurry!$"

SkyPillar_Outside_Text_SituationGettingWorse::
# 114 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: Hmm…\n"
	.string "The situation is getting worse…$"

SkyPillar_Outside_Text_GotToGoBackForSootopolis::
# 119 "data/maps/SkyPillar_Outside/scripts.pory"
	.string "WALLACE: This isn't good…\p"
	.string "The weather distortion is spreading\n"
	.string "even here…\p"
	.string "{PLAYER}{KUN}.\p"
	.string "RAYQUAZA should be farther up\n"
	.string "from here.\p"
	.string "I'm worried about SOOTOPOLIS.\n"
	.string "I've got to go back.\p"
	.string "Everything is in your hands now.\n"
	.string "Don't fail us!$"
