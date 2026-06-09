SeafloorCavern_Entrance_MapScripts::
# 2 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeafloorCavern_Entrance_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SeafloorCavern_Entrance_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setdivewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
# 4 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setescapewarp MAP_UNDERWATER_SEAFLOOR_CAVERN, 6, 5
	end


SeafloorCavern_Entrance_EventScript_Grunt::
# 10 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	lockall
# 11 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	compare VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1
	goto_if_eq SeafloorCavern_Entrance_EventScript_Grunt_2
# 20 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitse
# 21 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	playse SE_PIN
# 22 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_ExclamationMark
# 23 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 24 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_Delay48
# 25 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 26 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 20
# 27 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	switch VAR_FACING
# 28 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	case DIR_WEST, SeafloorCavern_Entrance_EventScript_Grunt_12
# 29 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	case DIR_EAST, SeafloorCavern_Entrance_EventScript_Grunt_13
# 30 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	case DIR_NORTH, SeafloorCavern_Entrance_EventScript_Grunt_14
SeafloorCavern_Entrance_EventScript_Grunt_10:
# 32 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 33 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	delay 30
# 34 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	setvar VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1
# 35 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	copyobjectxytoperm LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT
# 36 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep, MSGBOX_DEFAULT
SeafloorCavern_Entrance_EventScript_Grunt_1:
# 38 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	closemessage
# 39 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_StepFasterUp
# 40 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 41 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	releaseall
	end

SeafloorCavern_Entrance_EventScript_Grunt_2:
# 12 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	switch VAR_FACING
# 13 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	case DIR_WEST, SeafloorCavern_Entrance_EventScript_Grunt_7
# 14 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	case DIR_EAST, SeafloorCavern_Entrance_EventScript_Grunt_8
# 15 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	case DIR_NORTH, SeafloorCavern_Entrance_EventScript_Grunt_9
SeafloorCavern_Entrance_EventScript_Grunt_5:
# 17 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	waitmovement 0
# 18 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	msgbox SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort, MSGBOX_DEFAULT
	goto SeafloorCavern_Entrance_EventScript_Grunt_1

SeafloorCavern_Entrance_EventScript_Grunt_7:
# 13 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_StepFasterRight
	goto SeafloorCavern_Entrance_EventScript_Grunt_5

SeafloorCavern_Entrance_EventScript_Grunt_8:
# 14 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_StepFasterLeft
	goto SeafloorCavern_Entrance_EventScript_Grunt_5

SeafloorCavern_Entrance_EventScript_Grunt_9:
# 15 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_StepFasterDown
	goto SeafloorCavern_Entrance_EventScript_Grunt_5

SeafloorCavern_Entrance_EventScript_Grunt_12:
# 28 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_StepFasterRight
	goto SeafloorCavern_Entrance_EventScript_Grunt_10

SeafloorCavern_Entrance_EventScript_Grunt_13:
# 29 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_StepFasterLeft
	goto SeafloorCavern_Entrance_EventScript_Grunt_10

SeafloorCavern_Entrance_EventScript_Grunt_14:
# 30 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, Common_Movement_StepFasterDown
	goto SeafloorCavern_Entrance_EventScript_Grunt_10


SeafloorCavern_Entrance_Text_HearMagmaNearMossdeep::
# 45 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "Hey!\n"
	.string "I remember your face!\p"
	.string "If you're here, it must mean that\n"
	.string "you're about to mess with us again!\p"
	.string "A punk like you, do you really think\n"
	.string "you can take on TEAM AQUA?\p"
	.string "I'd say you're too early by about\n"
	.string "a trillion years!\p"
	.string "You're a perfect fit for the likes of\n"
	.string "TEAM MAGMA!\p"
	.string "Speaking of TEAM MAGMA, I hear they\n"
	.string "were spotted near MOSSDEEP.\p"
	.string "That bunch of goons, they sure don't\n"
	.string "look good near the sea!$"

SeafloorCavern_Entrance_Text_HearMagmaNearMossdeepShort::
# 68 "data/maps/SeafloorCavern_Entrance/scripts.pory"
	.string "A punk like you, do you really think\n"
	.string "you can take on TEAM AQUA?\p"
	.string "I'd say you're too early by about\n"
	.string "a trillion years!\p"
	.string "You're a perfect fit for the likes of\n"
	.string "TEAM MAGMA!\p"
	.string "Speaking of TEAM MAGMA, I hear they\n"
	.string "were spotted near MOSSDEEP.\p"
	.string "That bunch of goons, they sure don't\n"
	.string "look good near the sea!$"
