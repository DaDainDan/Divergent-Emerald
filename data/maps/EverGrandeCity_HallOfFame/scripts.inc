EverGrandeCity_HallOfFame_MapScripts::
# 2 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_HallOfFame_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_HallOfFame_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

EverGrandeCity_HallOfFame_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame
	.2byte 0

EverGrandeCity_HallOfFame_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

EverGrandeCity_HallOfFame_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 7 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame::
# 14 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	lockall
# 15 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_WALLACE, EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_Movement_0
# 16 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_Movement_0
# 17 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 18 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_WALLACE, Common_Movement_StepFasterRight
# 19 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 20 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 21 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions, MSGBOX_DEFAULT
# 22 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	closemessage
# 23 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	giveitem ITEM_CATCHING_CHARM
# 24 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_WALLACE, EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_Movement_1
# 25 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_Movement_1
# 26 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 27 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 20
# 28 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_WALLACE, Common_Movement_StepFasterRight
# 29 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 30 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 31 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames, MSGBOX_DEFAULT
# 32 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	closemessage
# 33 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_WALLACE, Common_Movement_StepFasterUp
# 34 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 35 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 36 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 20
# 37 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 38 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 39 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 40
# 40 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setvar VAR_TEMP_1, 1
# 41 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
	checkplayergender
# 0 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_2
# 45 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_1:
# 47 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 48 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	special GameClear
# 49 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	releaseall
	end

EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_2:
# 43 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	goto EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_1


# 15 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_Movement_0:
# 15 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 15 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 15 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 15 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 15 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 15 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
	step_end

# 24 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame_Movement_1:
# 24 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 24 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 24 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 24 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 24 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
	step_end

EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions::
# 53 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "{SPEAKER NAME_WALLACE}This room…\p"
	.string "This is where we keep records of\n"
	.string "POKéMON that prevailed through\l"
	.string "harsh battles.\p"
	.string "It is here that the LEAGUE CHAMPIONS\n"
	.string "are honored.$"

EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames::
# 64 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "{SPEAKER NAME_WALLACE}Come on, let's record your\n"
	.string "name as a TRAINER who triumphed over\l"
	.string "the POKéMON LEAGUE, and the names of\l"
	.string "the partners who battled with you.$"
