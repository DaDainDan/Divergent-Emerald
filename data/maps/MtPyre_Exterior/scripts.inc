MtPyre_Exterior_MapScripts::
# 2 "data/maps/MtPyre_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MtPyre_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MtPyre_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 4 "data/maps/MtPyre_Exterior/scripts.pory"
	compare VAR_TEMP_1, 12
	goto_if_lt MtPyre_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MtPyre_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

MtPyre_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
	goto MtPyre_Exterior_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


MtPyre_Exterior_EventScript_FogTrigger::
# 12 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 13 "data/maps/MtPyre_Exterior/scripts.pory"
	doweather
	end


MtPyre_Exterior_EventScript_SunTrigger::
# 18 "data/maps/MtPyre_Exterior/scripts.pory"
	setweather WEATHER_SUNNY
# 19 "data/maps/MtPyre_Exterior/scripts.pory"
	doweather
	end

