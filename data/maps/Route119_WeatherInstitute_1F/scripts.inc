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


Route119_WeatherInstitute_1F_Text_Grunt1Intro::
# 65 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The BOSS got interested in\n"
	.string "the research they have going here,\l"
	.string "so he sent us out.\p"
	.string "You quit meddling!$"

Route119_WeatherInstitute_1F_Text_Grunt1Defeat::
# 73 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Blast it…\n"
	.string "Blasted by a kid…$"

Route119_WeatherInstitute_1F_Text_Grunt1PostBattle::
# 78 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Our BOSS knows everything.\p"
	.string "But I'm just a GRUNT. What would I know\n"
	.string "about what he's thinking?$"

Route119_WeatherInstitute_1F_Text_Grunt4Intro::
# 85 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\n"
	.string "What's a kid doing here?$"

Route119_WeatherInstitute_1F_Text_Grunt4Defeat::
# 90 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\n"
	.string "I lost?!$"

Route119_WeatherInstitute_1F_Text_Grunt4PostBattle::
# 95 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Oh, no…\n"
	.string "I'll catch an earful for losing to a kid…\p"
	.string "I should just take a nap in the bed…$"

Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs::
# 102 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "While I was sleeping, everyone went\n"
	.string "upstairs!$"

Route119_WeatherInstitute_1F_Text_WowYoureStrong::
# 107 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Wow, you're really strong!\p"
	.string "I wish I could be a POKéMON TRAINER\n"
	.string "like you!$"

Route119_WeatherInstitute_1F_Text_ProfStudyingRain::
# 114 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The PROFESSOR loves rain.\n"
	.string "That's a fact.\p"
	.string "But if it keeps raining, people will be in\n"
	.string "trouble. That's another fact.\p"
	.string "And thus, the PROFESSOR is studying\n"
	.string "if the rain can be put to good use.$"

Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather::
# 125 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "On the 2nd floor of the INSTITUTE,\n"
	.string "we study the weather patterns over\l"
	.string "the HOENN region.\p"
	.string "We've been noticing temporary and\n"
	.string "isolated cases of droughts and\l"
	.string "heavy rain lately…$"

Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo::
# 135 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Hello!\n"
	.string "We've been saved by your actions!\p"
	.string "What I don't understand is what on\n"
	.string "earth the AQUAS were up to.$"

Route119_WeatherInstitute_1F_Text_TakeRestInBed::
# 143 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "There's a bed…\n"
	.string "Let's take a rest.$"
