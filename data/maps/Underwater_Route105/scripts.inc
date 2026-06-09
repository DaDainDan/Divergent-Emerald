Underwater_Route105_MapScripts::
# 2 "data/maps/Underwater_Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Underwater_Route105_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Underwater_Route105_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Underwater_Route105/scripts.pory"
	call AbnormalWeather_Underwater_SetupEscapeWarp
	end

