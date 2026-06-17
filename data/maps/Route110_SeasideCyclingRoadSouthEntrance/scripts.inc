Route110_SeasideCyclingRoadSouthEntrance_MapScripts::
	.byte 0


Route110_SeasideCyclingRoadSouthEntrance_EventScript_Clerk::
# 4 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lock_faceplayer
# 5 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_GoAllOutOnCyclingRoad, MSGBOX_DEFAULT
	release_end


Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck::
# 10 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lockall
# 11 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 12 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck_2
# 18 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 19 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck_1:
# 21 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
	end

Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck_2:
# 13 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_TooDangerousToWalk, MSGBOX_DEFAULT
# 14 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	closemessage
# 15 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
# 16 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	waitmovement 0
	goto Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck_1


Route110_SeasideCyclingRoadSouthEntrance_EventScript_ClearCyclingRoad::
# 26 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	lockall
# 27 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 28 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 29 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	releaseall
	end


Route110_SeasideCyclingRoadSouthEntrance_Text_GoAllOutOnCyclingRoad::
# 33 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "On CYCLING ROAD, you can go all out\n"
	.string "and cycle as fast as you'd like.\p"
	.string "It feels great to go that fast, but try\n"
	.string "not to crash into anyone!$"

Route110_SeasideCyclingRoadSouthEntrance_Text_TooDangerousToWalk::
# 41 "data/maps/Route110_SeasideCyclingRoadSouthEntrance/scripts.pory"
	.string "Sorry, you can't walk on CYCLING\n"
	.string "ROAD. It's too dangerous.\p"
	.string "Please come back with a BIKE.$"
