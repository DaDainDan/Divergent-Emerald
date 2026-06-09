EverGrandeCity_MapScripts::
# 2 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


EverGrandeCity_EventScript_VictoryRoadSign::
# 11 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
	end


EverGrandeCity_EventScript_CitySign::
# 16 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
	end


EverGrandeCity_EventScript_PokemonLeagueSign::
# 21 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
	end


EverGrandeCity_EventScript_SetVisitedEverGrande::
# 26 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 27 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


EverGrandeCity_Text_EnteringVictoryRoad::
# 31 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"

EverGrandeCity_Text_EnteringPokemonLeague::
# 35 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
	.string "CENTER GATE$"

EverGrandeCity_Text_CitySign::
# 40 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
	.string "“The paradise of flowers, the sea,\n"
	.string "and POKéMON.”$"
