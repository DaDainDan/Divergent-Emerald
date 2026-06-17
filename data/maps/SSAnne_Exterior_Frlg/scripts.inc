SSAnne_Exterior_Frlg_MapScripts::
# 2 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SSAnne_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SSAnne_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SSAnne_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SSANNE_EXTERIOR
	end

SSAnne_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VERMILION_CITY, 1, SSAnne_Exterior_ExitSSAnne
	.2byte 0


SSAnne_Exterior_ExitSSAnne::
# 12 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	lockall
# 13 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 14 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	compare VAR_0x8005, 6
	goto_if_le SSAnne_Exterior_ExitSSAnne_2
# 17 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
SSAnne_Exterior_ExitSSAnne_1:
# 19 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 20 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	fadenewbgm MUS_RG_SURF
# 21 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	delay 50
# 22 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	special DoSSAnneDepartureCutscene
# 23 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	waitstate
# 24 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_SS_ANNE
# 25 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_Exterior_ExitSSAnne_Movement_1
# 26 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 27 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 2
# 28 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0
# 29 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	warp MAP_VERMILION_CITY, 23, 34
# 30 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	waitstate
# 31 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	releaseall
	end

SSAnne_Exterior_ExitSSAnne_2:
# 15 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_Exterior_ExitSSAnne_Movement_0
	goto SSAnne_Exterior_ExitSSAnne_1


# 15 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_ExitSSAnne_Movement_0:
# 15 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 15 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 15 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 15 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 15 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 15 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 15 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 15 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
# 15 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_down
	step_end

# 25 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
SSAnne_Exterior_ExitSSAnne_Movement_1:
# 25 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 25 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 25 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 25 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 25 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 25 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 25 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 25 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
# 25 "data/maps/SSAnne_Exterior_Frlg/scripts.pory"
	walk_up
	step_end
