Route119_WeatherInstitute_1F_MapScripts::
# 2 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route119_WeatherInstitute_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_WEATHER_INSTITUTE_STATE, 0
	goto_if_eq Route119_WeatherInstitute_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route119_WeatherInstitute_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route119_WeatherInstitute_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_LITTLE_BOY, 0, 5
# 5 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_LITTLE_BOY, MOVEMENT_TYPE_FACE_RIGHT
	goto Route119_WeatherInstitute_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Route119_WeatherInstitute_1F_EventScript_LittleBoy::
# 12 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock_faceplayer
# 13 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 14 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_WEATHER_INSTITUTE_STATE, 0
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_LittleBoy_2
# 18 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WowYoureStrong, MSGBOX_DEFAULT
	release_end

Route119_WeatherInstitute_1F_EventScript_LittleBoy_2:
# 15 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs, MSGBOX_DEFAULT
	release_end


Route119_WeatherInstitute_1F_EventScript_InstituteWorker1::
# 23 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock_faceplayer
# 24 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 25 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_2
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_1:
# 28 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_5
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_4:
# 31 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_8
# 31 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_0x8004, 2
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_8
# 35 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather, MSGBOX_DEFAULT
	release_end

Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_2:
# 26 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	addvar VAR_0x8004, 1
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_1

Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_5:
# 29 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	addvar VAR_0x8004, 1
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_4

Route119_WeatherInstitute_1F_EventScript_InstituteWorker1_8:
# 32 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_ProfStudyingRain, MSGBOX_DEFAULT
	release_end


Route119_WeatherInstitute_1F_EventScript_InstituteWorker2::
# 40 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo, MSGBOX_NPC
	end


Route119_WeatherInstitute_1F_EventScript_Bed::
# 45 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lockall
# 46 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
# 47 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 48 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 49 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	releaseall
	end


Route119_WeatherInstitute_1F_EventScript_Grunt1::
# 54 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
# 55 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


Route119_WeatherInstitute_1F_EventScript_Grunt4::
# 60 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
# 61 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end


Route119_WeatherInstitute_1F_EventScript_MoveTutor::
# 66 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock_faceplayer
# 67 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_unset FLAG_MET_WEATHER_INSTITUTE_TUTOR, Route119_WeatherInstitute_1F_EventScript_MoveTutor_2
Route119_WeatherInstitute_1F_EventScript_MoveTutor_1:
# 71 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 72 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_WEATHER_MOVE_TUTOR
# 73 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8006, 0
# 74 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove
	end

Route119_WeatherInstitute_1F_EventScript_MoveTutor_2:
# 68 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 69 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setflag FLAG_MET_WEATHER_INSTITUTE_TUTOR
	goto Route119_WeatherInstitute_1F_EventScript_MoveTutor_1


Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove::
# 79 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_WEATHER_MOVE_TUTOR
# 80 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	special ShowScrollableMultichoice
# 81 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 82 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	switch VAR_RESULT
# 83 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	case 0, Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_3
# 84 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	case 1, Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_4
# 85 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	case 2, Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_5
# 86 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	case 3, Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_6
# 87 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	case 4, Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_7
# 88 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	case 5, Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_8
# 89 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	case 6, Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_9
# 90 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	case MULTI_B_PRESSED, Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_9
Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_1:
# 93 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto Route119_WeatherInstitute_1F_EventScript_ConfirmMoveSelection
	end

Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_3:
# 83 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SUNNY_DAY
	goto Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_1

Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_4:
# 84 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_RAIN_DANCE
	goto Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_1

Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_5:
# 85 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SANDSTORM
	goto Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_1

Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_6:
# 86 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_SNOWSCAPE
	goto Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_1

Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_7:
# 87 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_STORM_CALL
	goto Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_1

Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_8:
# 88 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8005, MOVE_WEATHER_BALL
	goto Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_1

Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_9:
# 91 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto Route119_WeatherInstitute_1F_EventScript_ExitTutorMoveSelect
	goto Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove_1


Route119_WeatherInstitute_1F_EventScript_ExitTutorMoveSelect::
# 98 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 99 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


Route119_WeatherInstitute_1F_EventScript_ConfirmMoveSelection::
# 104 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 105 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_MoveTutor_Text_0, MSGBOX_YESNO
# 106 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_ConfirmMoveSelection_2
Route119_WeatherInstitute_1F_EventScript_ConfirmMoveSelection_1:
	checkitem ITEM_STARDUST
# 0 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_ConfirmMoveSelection_5
# 126 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 127 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto Route119_WeatherInstitute_1F_EventScript_ExitTutorMoveSelect
	end

Route119_WeatherInstitute_1F_EventScript_ConfirmMoveSelection_2:
# 107 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	message Route119_WeatherInstitute_1F_EventScript_MoveTutor_Text_0
# 108 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	waitmessage
# 109 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8006, 1
# 110 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto Route119_WeatherInstitute_1F_EventScript_ChooseWeatherMove
	goto Route119_WeatherInstitute_1F_EventScript_ConfirmMoveSelection_1

Route119_WeatherInstitute_1F_EventScript_ConfirmMoveSelection_5:
# 113 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 114 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 115 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 116 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 117 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	waitstate
# 118 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_ConfirmMoveSelection_8
# 122 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 123 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	removeitem ITEM_STARDUST, 1
	release_end

Route119_WeatherInstitute_1F_EventScript_ConfirmMoveSelection_8:
# 119 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


Route119_WeatherInstitute_1F_EventScript_MoveTutor_Text_0:
# 68 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "…$"

Route119_WeatherInstitute_1F_Text_DeclineTutor::
# 131 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "…$"

Route119_WeatherInstitute_1F_Text_Grunt1Intro::
# 135 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The BOSS got interested in\n"
	.string "the research they have going here,\l"
	.string "so he sent us out.\p"
	.string "You quit meddling!$"

Route119_WeatherInstitute_1F_Text_Grunt1Defeat::
# 143 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Blast it…\n"
	.string "Blasted by a kid…$"

Route119_WeatherInstitute_1F_Text_Grunt1PostBattle::
# 148 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Our BOSS knows everything.\p"
	.string "But I'm just a GRUNT. What would I know\n"
	.string "about what he's thinking?$"

Route119_WeatherInstitute_1F_Text_Grunt4Intro::
# 155 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\n"
	.string "What's a kid doing here?$"

Route119_WeatherInstitute_1F_Text_Grunt4Defeat::
# 160 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\n"
	.string "I lost?!$"

Route119_WeatherInstitute_1F_Text_Grunt4PostBattle::
# 165 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Oh, no…\n"
	.string "I'll catch an earful for losing to a kid…\p"
	.string "I should just take a nap in the bed…$"

Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs::
# 172 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "While I was sleeping, everyone went\n"
	.string "upstairs!$"

Route119_WeatherInstitute_1F_Text_WowYoureStrong::
# 177 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Wow, you're really strong!\p"
	.string "I wish I could be a POKéMON TRAINER\n"
	.string "like you!$"

Route119_WeatherInstitute_1F_Text_ProfStudyingRain::
# 184 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The PROFESSOR loves rain.\n"
	.string "That's a fact.\p"
	.string "But if it keeps raining, people will be in\n"
	.string "trouble. That's another fact.\p"
	.string "And thus, the PROFESSOR is studying\n"
	.string "if the rain can be put to good use.$"

Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather::
# 195 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "On the 2nd floor of the INSTITUTE,\n"
	.string "we study the weather patterns over\l"
	.string "the HOENN region.\p"
	.string "We've been noticing temporary and\n"
	.string "isolated cases of droughts and\l"
	.string "heavy rain lately…$"

Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo::
# 205 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Hello!\n"
	.string "We've been saved by your actions!\p"
	.string "What I don't understand is what on\n"
	.string "earth the AQUAS were up to.$"

Route119_WeatherInstitute_1F_Text_TakeRestInBed::
# 213 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "There's a bed…\n"
	.string "Let's take a rest.$"

Route119_WeatherInstitute_1F_Text_SunnyDayDesc::
# 218 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Turns the weather\n"
	.string "to harsh sunlight.\n"
	.string "Unique effects.$"

Route119_WeatherInstitute_1F_Text_RainDanceDesc::
# 224 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Turns the weather\n"
	.string "to heavy rain.\n"
	.string "Unique effects.$"

Route119_WeatherInstitute_1F_Text_SandstormDesc::
# 230 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Stirs up a storm\n"
	.string "of sand that can\n"
	.string "deal chip damage.$"

Route119_WeatherInstitute_1F_Text_SnowscapeDesc::
# 236 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Turns the weather\n"
	.string "to a snowstorm.\n"
	.string "Unique effects.$"

Route119_WeatherInstitute_1F_Text_StormCallDesc::
# 242 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Creates strong\n"
	.string "winds that negate\n"
	.string "weather for a bit.$"

Route119_WeatherInstitute_1F_Text_WeatherBallDesc::
# 248 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "A ball of energy\n"
	.string "that changes type\n"
	.string "based on weather.$"
