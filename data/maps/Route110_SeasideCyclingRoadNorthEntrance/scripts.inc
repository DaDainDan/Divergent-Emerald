Route110_SeasideCyclingRoadNorthEntrance_MapScripts::
# 2 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_SeasideCyclingRoadNorthEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route110_SeasideCyclingRoadNorthEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_CYCLING_CHALLENGE_STATE, 3
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 3 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_CYCLING_CHALLENGE_STATE, 2
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route110_SeasideCyclingRoadNorthEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route110_SeasideCyclingRoadNorthEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
	goto Route110_SeasideCyclingRoadNorthEntrance_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Route110_SeasideCyclingRoadNorthEntrance_EventScript_Clerk::
# 11 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lock_faceplayer
# 12 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad, MSGBOX_DEFAULT
	release_end


Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck::
# 17 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 18 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 19 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_2
Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_1:
# 22 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_5
# 30 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 31 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 32 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
	end

Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_2:
# 20 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 1
	goto Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_1

Route110_SeasideCyclingRoadNorthEntrance_EventScript_BikeCheck_5:
# 23 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk, MSGBOX_DEFAULT
# 24 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	closemessage
# 25 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 26 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
	end


Route110_SeasideCyclingRoadNorthEntrance_EventScript_ClearCyclingRoad::
# 37 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	lockall
# 38 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 0
# 39 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 40 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 41 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	releaseall
	end


Route110_SeasideCyclingRoadNorthEntrance_Text_GoAllOutOnCyclingRoad::
# 45 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "On CYCLING ROAD, you can go all out\n"
	.string "and cycle as fast as you'd like.\p"
	.string "It feels great to go that fast, but try\n"
	.string "not to crash into anyone!$"

Route110_SeasideCyclingRoadNorthEntrance_Text_TooDangerousToWalk::
# 53 "data/maps/Route110_SeasideCyclingRoadNorthEntrance/scripts.pory"
	.string "Sorry, you can't walk on CYCLING\n"
	.string "ROAD. It's too dangerous.\p"
	.string "Please come back with a BIKE.$"
