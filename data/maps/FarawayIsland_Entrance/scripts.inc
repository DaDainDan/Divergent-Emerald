FarawayIsland_Entrance_MapScripts::
# 2 "data/maps/FarawayIsland_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FarawayIsland_Entrance_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FarawayIsland_Entrance_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FarawayIsland_Entrance/scripts.pory"
	setflag FLAG_ARRIVED_ON_FARAWAY_ISLAND
	end


FarawayIsland_Entrance_EventScript_SetCloudsWeather::
# 9 "data/maps/FarawayIsland_Entrance/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 10 "data/maps/FarawayIsland_Entrance/scripts.pory"
	doweather
	end


FarawayIsland_Entrance_EventScript_ClearWeather::
# 15 "data/maps/FarawayIsland_Entrance/scripts.pory"
	setweather WEATHER_NONE
# 16 "data/maps/FarawayIsland_Entrance/scripts.pory"
	doweather
	end


FarawayIsland_Entrance_EventScript_Sailor::
# 21 "data/maps/FarawayIsland_Entrance/scripts.pory"
	lock_faceplayer
# 22 "data/maps/FarawayIsland_Entrance/scripts.pory"
	msgbox FarawayIsland_Entrance_Text_SailorReturn, MSGBOX_YESNO
# 23 "data/maps/FarawayIsland_Entrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FarawayIsland_Entrance_EventScript_Sailor_2
# 27 "data/maps/FarawayIsland_Entrance/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 28 "data/maps/FarawayIsland_Entrance/scripts.pory"
	closemessage
# 29 "data/maps/FarawayIsland_Entrance/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_StepFasterDown
# 30 "data/maps/FarawayIsland_Entrance/scripts.pory"
	waitmovement 0
# 31 "data/maps/FarawayIsland_Entrance/scripts.pory"
	delay 30
# 32 "data/maps/FarawayIsland_Entrance/scripts.pory"
	hideobjectat LOCALID_FARAWAY_ISLAND_SAILOR, MAP_FARAWAY_ISLAND_ENTRANCE
# 33 "data/maps/FarawayIsland_Entrance/scripts.pory"
	setvar VAR_0x8004, LOCALID_FARAWAY_ISLAND_SS_TIDAL
# 34 "data/maps/FarawayIsland_Entrance/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 35 "data/maps/FarawayIsland_Entrance/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 36 "data/maps/FarawayIsland_Entrance/scripts.pory"
	waitstate
	release_end

FarawayIsland_Entrance_EventScript_Sailor_2:
# 24 "data/maps/FarawayIsland_Entrance/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
	release_end


FarawayIsland_Entrance_EventScript_Sign::
# 41 "data/maps/FarawayIsland_Entrance/scripts.pory"
	msgbox FarawayIsland_Entrance_Text_Sign, MSGBOX_SIGN
	end

