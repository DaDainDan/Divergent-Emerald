Route119_WeatherInstitute_2F_MapScripts::
# 2 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_WEATHER_INSTITUTE_STATE, 0
	goto_if_eq Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_WEATHER_INSTITUTE_STATE, 1
	goto_if_eq Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 11 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	end

Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 1, 6
# 5 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
	goto Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 8 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 4, 6
# 9 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
	goto Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 12 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 2, 2
# 13 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_UP
	goto Route119_WeatherInstitute_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7


Route119_WeatherInstitute_2F_EventScript_Grunt5::
# 20 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
# 21 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end


Route119_WeatherInstitute_2F_EventScript_Grunt2::
# 26 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route119_WeatherInstitute_2F_Text_Grunt2Intro, Route119_WeatherInstitute_2F_Text_Grunt2Defeat
# 27 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


Route119_WeatherInstitute_2F_EventScript_Grunt3::
# 32 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
# 33 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


Route119_WeatherInstitute_2F_EventScript_Shelly::
# 38 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ShellyIntro, Route119_WeatherInstitute_2F_Text_ShellyDefeat, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated
# 39 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
	end


Route119_WeatherInstitute_2F_EventScript_ShellyDefeated::
# 44 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 46 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Movement_0
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Movement_1
# 49 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy, MSGBOX_DEFAULT
# 51 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 52 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 53 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_ExclamationMark
# 54 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_Delay48
# 56 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre, MSGBOX_DEFAULT
# 58 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 59 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
# 60 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 61 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadedefaultbgm
# 62 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 63 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
# 64 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
# 65 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_1
# 66 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_2
# 67 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_SHELLY
# 68 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_4
# 69 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3
# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Movement_2
# 71 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Movement_3
# 74 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyobjectxytoperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST
# 76 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
	end


Route119_WeatherInstitute_2F_EventScript_ReceiveCastform::
# 81 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
# 82 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CASTFORM_NORMAL
	givemon SPECIES_CASTFORM_NORMAL, 25, ITEM_MYSTIC_WATER
# 0 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_2
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_1:
# 86 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 87 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 88 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
# 89 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 90 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitfanfare
# 91 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM_NORMAL
# 92 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 93 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	switch VAR_0x8007
# 94 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case MON_GIVEN_TO_PARTY, Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_6
# 99 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	case MON_GIVEN_TO_PC, Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_7
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_4:
# 105 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
# 106 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_RECEIVED_CASTFORM
	release_end

Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_2:
# 84 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_1

Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_6:
# 95 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_8
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_4

Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_7:
# 100 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_11
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_10:
# 103 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_4

Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_8:
# 96 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 97 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_4

Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_11:
# 101 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform_10


Route119_WeatherInstitute_2F_EventScript_WeatherScientist::
# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock_faceplayer
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_WeatherScientist_2
# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
	end

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_2:
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_WeatherScientist_5
Route119_WeatherInstitute_2F_EventScript_WeatherScientist_4:
# 116 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
	release_end

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_5:
# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
	goto Route119_WeatherInstitute_2F_EventScript_WeatherScientist_4


Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather::
# 124 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 125 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_2
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_1:
# 128 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_5
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_4:
# 131 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_0x8004, 2
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_8
# 135 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_11
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_10:
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
# 0 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_14
# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
	release_end

Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_2:
# 126 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_0x8004, 1
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_1

Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_5:
# 129 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_0x8004, 1
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_4

Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_8:
# 132 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
	release_end

Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_11:
# 136 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special CreateAbnormalWeatherEvent
# 137 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_10

Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather_14:
# 140 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
	release_end


# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Movement_0:
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	run_left
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	run_left
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	run_left
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	run_left
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	run_left
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	run_left
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	run_left
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	run_left
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	run_left
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	run_left
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	run_left
	step_end

# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Movement_1:
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	ride_water_current_up
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_faster_down
	step_end

# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Movement_2:
# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_down
# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_faster_left
	step_end

# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated_Movement_3:
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
	step_end

Route119_WeatherInstitute_2F_Text_Grunt2Intro::
# 147 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The INSTITUTE created a type of\n"
	.string "POKéMON that has something to do with\l"
	.string "the weather. We're here to take them!$"

Route119_WeatherInstitute_2F_Text_Grunt2Defeat::
# 153 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Our plan's being spoiled by a kid?$"

Route119_WeatherInstitute_2F_Text_Grunt2PostBattle::
# 157 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "If the POKéMON they made here can\n"
	.string "control the weather freely, then we of\l"
	.string "TEAM AQUA definitely need it!$"

Route119_WeatherInstitute_2F_Text_Grunt3Intro::
# 163 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We're TEAM AQUA!\n"
	.string "We appear wherever anything rare is\l"
	.string "found!$"

Route119_WeatherInstitute_2F_Text_Grunt3Defeat::
# 169 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You got me!$"

Route119_WeatherInstitute_2F_Text_Grunt3PostBattle::
# 173 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You don't have any idea what we of\n"
	.string "TEAM AQUA are working towards!\l"
	.string "You stay out of our way!$"

Route119_WeatherInstitute_2F_Text_Grunt5Intro::
# 179 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Don't tell me you're looking for that\n"
	.string "weather POKéMON, too?\p"
	.string "That's a no-no!\n"
	.string "We were here to get it first!$"

Route119_WeatherInstitute_2F_Text_Grunt5Defeat::
# 187 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Oh, will you look at my POKéMON?$"

Route119_WeatherInstitute_2F_Text_Grunt5PostBattle::
# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Humph, so what?\n"
	.string "What we want…\p"
	.string "What we really want isn't here…\n"
	.string "Ihihihihi…$"

Route119_WeatherInstitute_2F_Text_ShellyIntro::
# 199 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\p"
	.string "You're going to meddle in TEAM AQUA's\n"
	.string "affairs?\p"
	.string "You're either absolutely fearless,\n"
	.string "simply ignorant, or both!\p"
	.string "You're so cute, you're disgusting!\n"
	.string "I'll put you down, kiddy!$"

Route119_WeatherInstitute_2F_Text_ShellyDefeat::
# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\n"
	.string "You're disgustingly strong!$"

Route119_WeatherInstitute_2F_Text_ShellyPostBattle::
# 217 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It's bad enough to have TEAM MAGMA\n"
	.string "blunder about, but now there's you!\p"
	.string "What makes you want to sniff around\n"
	.string "in our business, anyway?$"

Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy::
# 225 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have a situation here!\p"
	.string "A TEAM MAGMA mob just passed\n"
	.string "the WEATHER INSTITUTE.\p"
	.string "They appear to be headed for\n"
	.string "MT. PYRE!$"

Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre::
# 235 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What?!\p"
	.string "We can't waste any more time here!\n"
	.string "We have to hurry to MT. PYRE, too!\p"
	.string "Ahahahaha!\n"
	.string "TEAM MAGMA, just you wait!$"

Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon::
# 245 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Thanks!\n"
	.string "Thanks to you, we're safe!\p"
	.string "It might be an odd way of thanking you,\n"
	.string "but take this POKéMON.$"

Route119_WeatherInstitute_2F_Text_NoRoomForPokemon::
# 253 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hm? You don't seem to have any room\n"
	.string "for this POKéMON.$"

Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform::
# 258 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} received CASTFORM!$"

Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather::
# 262 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That POKéMON changes shape according\n"
	.string "to the weather conditions.\p"
	.string "There're plenty of them in the\n"
	.string "INSTITUTE--go ahead and take it.$"

Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous::
# 270 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I've been researching rain for many\n"
	.string "years, but it's ridiculous to think that\l"
	.string "humans can freely change the weather.$"

Route119_WeatherInstitute_2F_Text_GroudonWeather::
# 276 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
	.string "the HOENN region.\p"
	.string "Presently, a drought has been recorded\n"
	.string "in {STR_VAR_1}.\p"
	.string "Could that mean, somewhere near\n"
	.string "{STR_VAR_1}…$"

Route119_WeatherInstitute_2F_Text_KyogreWeather::
# 287 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
	.string "the HOENN region.\p"
	.string "Presently, heavy rainfall has been\n"
	.string "recorded over {STR_VAR_1}.\p"
	.string "Could that mean, somewhere near\n"
	.string "{STR_VAR_1}…$"

Route119_WeatherInstitute_2F_Text_NoAbnormalWeather::
# 298 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Abnormal weather conditions are\n"
	.string "no longer being reported.\p"
	.string "The occasional rainfall is a blessing,\n"
	.string "really.$"
