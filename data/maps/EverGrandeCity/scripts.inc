EverGrandeCity_MapScripts::
# 2 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_set FLAG_HIDE_MIRAGE_ISLAND_MEADOW_LADY, EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 7 "data/maps/EverGrandeCity/scripts.pory"
	clearflag FLAG_HIDE_EVERGRANDE_CITY_MEADOW_LADY
	goto EverGrandeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


EverGrandeCity_EventScript_VictoryRoadSign::
# 14 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
	end


EverGrandeCity_EventScript_CitySign::
# 19 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
	end


EverGrandeCity_EventScript_PokemonLeagueSign::
# 24 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
	end


EverGrandeCity_EventScript_SetVisitedEverGrande::
# 29 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 30 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


EverGrandeCity_EventScript_MeadowLady::
# 35 "data/maps/EverGrandeCity/scripts.pory"
	lock_faceplayer
# 36 "data/maps/EverGrandeCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_REVIVAL_BLESSING, EverGrandeCity_EventScript_MeadowLady_2
# 45 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_MeadowLady_Text_2, MSGBOX_DEFAULT
EverGrandeCity_EventScript_MeadowLady_1:
	release_end

EverGrandeCity_EventScript_MeadowLady_2:
# 37 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_MeadowLady_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_TM_REVIVAL_BLESSING
# 0 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq EverGrandeCity_EventScript_MeadowLady_6
EverGrandeCity_EventScript_MeadowLady_5:
# 41 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_RECEIVED_TM_REVIVAL_BLESSING
# 42 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_MeadowLady_Text_1, MSGBOX_DEFAULT
	goto EverGrandeCity_EventScript_MeadowLady_1

EverGrandeCity_EventScript_MeadowLady_6:
# 39 "data/maps/EverGrandeCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto EverGrandeCity_EventScript_MeadowLady_5


EverGrandeCity_EventScript_MeadowLady_Text_0:
# 37 "data/maps/EverGrandeCity/scripts.pory"
	.string "Greetings.$"

EverGrandeCity_EventScript_MeadowLady_Text_1:
# 42 "data/maps/EverGrandeCity/scripts.pory"
	.string "You are gay.$"

EverGrandeCity_EventScript_MeadowLady_Text_2:
# 45 "data/maps/EverGrandeCity/scripts.pory"
	.string "I love you!$"

EverGrandeCity_Text_EnteringVictoryRoad::
# 50 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"

EverGrandeCity_Text_EnteringPokemonLeague::
# 54 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
	.string "CENTER GATE$"

EverGrandeCity_Text_CitySign::
# 59 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
	.string "“The paradise of flowers, the sea,\n"
	.string "and POKéMON.”$"
