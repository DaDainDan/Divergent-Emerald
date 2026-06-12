SouthernIsland_Exterior_MapScripts::
# 2 "data/maps/SouthernIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SouthernIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SouthernIsland_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setflag FLAG_LANDMARK_SOUTHERN_ISLAND
	end


SouthernIsland_Exterior_EventScript_Sailor::
# 9 "data/maps/SouthernIsland_Exterior/scripts.pory"
	lock_faceplayer
# 10 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox EventTicket_Text_SouthernIslandSailBack, MSGBOX_YESNO
# 11 "data/maps/SouthernIsland_Exterior/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SouthernIsland_Exterior_EventScript_Sailor_2
# 15 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 16 "data/maps/SouthernIsland_Exterior/scripts.pory"
	closemessage
# 17 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_StepFasterDown
# 18 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement 0
# 19 "data/maps/SouthernIsland_Exterior/scripts.pory"
	delay 30
# 20 "data/maps/SouthernIsland_Exterior/scripts.pory"
	hideobjectat LOCALID_SOUTHERN_ISLAND_SAILOR, MAP_SOUTHERN_ISLAND_EXTERIOR
# 21 "data/maps/SouthernIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, LOCALID_SOUTHERN_ISLAND_SS_TIDAL
# 22 "data/maps/SouthernIsland_Exterior/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 23 "data/maps/SouthernIsland_Exterior/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 24 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitstate
	release_end

SouthernIsland_Exterior_EventScript_Sailor_2:
# 12 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
	release_end


Ferry_EventScript_DepartIslandSouth::
# 29 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 30 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement 0
	return


Ferry_EventScript_DepartIslandWest::
# 35 "data/maps/SouthernIsland_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Ferry_EventScript_DepartIslandWest_Movement_0
# 36 "data/maps/SouthernIsland_Exterior/scripts.pory"
	waitmovement 0
	return


SouthernIsland_Exterior_EventScript_Sign::
# 41 "data/maps/SouthernIsland_Exterior/scripts.pory"
	msgbox SouthernIsland_Exterior_Text_Sign, MSGBOX_SIGN
	end


# 35 "data/maps/SouthernIsland_Exterior/scripts.pory"
Ferry_EventScript_DepartIslandWest_Movement_0:
# 35 "data/maps/SouthernIsland_Exterior/scripts.pory"
	walk_left
# 35 "data/maps/SouthernIsland_Exterior/scripts.pory"
	step_faster_down
	step_end
