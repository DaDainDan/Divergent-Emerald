Route125_MapScripts::
# 2 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route125_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route125_MapScripts_MAP_SCRIPT_ON_LOAD
# 23 "data/maps/Route125/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route125_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route125_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route125/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route125_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route125_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/Route125/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	goto_if_eq Route125_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route125_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 9 "data/maps/Route125/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST
	goto_if_eq Route125_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 9 "data/maps/Route125/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST
	goto_if_eq Route125_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Route125_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	end

Route125_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Route125/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto Route125_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route125_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 7 "data/maps/Route125/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
	goto Route125_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route125_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 10 "data/maps/Route125/scripts.pory"
	call AbnormalWeather_StartKyogreWeather
	goto Route125_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Route125_MapScripts_MAP_SCRIPT_ON_LOAD:
# 15 "data/maps/Route125/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_WEST
	goto_if_eq Route125_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route125_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 18 "data/maps/Route125/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_125_EAST
	goto_if_eq Route125_MapScripts_MAP_SCRIPT_ON_LOAD_5
Route125_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

Route125_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 16 "data/maps/Route125/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute125West
	goto Route125_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route125_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 19 "data/maps/Route125/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute125East
	goto Route125_MapScripts_MAP_SCRIPT_ON_LOAD_4

Route125_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 24 "data/maps/Route125/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0


Route125_EventScript_Nolen::
# 29 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_NOLEN, Route125_Text_NolenIntro, Route125_Text_NolenDefeat
# 30 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_NolenPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Stan::
# 35 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_STAN, Route125_Text_StanIntro, Route125_Text_StanDefeat
# 36 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_StanPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Tanya::
# 41 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_TANYA, Route125_Text_TanyaIntro, Route125_Text_TanyaDefeat
# 42 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_TanyaPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Sharon::
# 47 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_SHARON, Route125_Text_SharonIntro, Route125_Text_SharonDefeat
# 48 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_SharonPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Ernest::
# 53 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_ERNEST_1, Route125_Text_ErnestIntro, Route125_Text_ErnestDefeat, Route125_EventScript_RegisterErnest
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route125/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route125_EventScript_Ernest_2
# 59 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestPostBattle, MSGBOX_DEFAULT
	release_end

Route125_EventScript_Ernest_2:
# 55 "data/maps/Route125/scripts.pory"
	trainerbattle_rematch TRAINER_ERNEST_1, Route125_Text_ErnestRematchIntro, Route125_Text_ErnestRematchDefeat
# 56 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_RegisterErnest::
# 64 "data/maps/Route125/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 65 "data/maps/Route125/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_ErnestRegister, MSGBOX_DEFAULT
# 67 "data/maps/Route125/scripts.pory"
	register_matchcall TRAINER_ERNEST_1
	release_end


Route125_EventScript_Kim::
# 72 "data/maps/Route125/scripts.pory"
	trainerbattle_double TRAINER_KIM_AND_IRIS, Route125_Text_KimIntro, Route125_Text_KimDefeat, Route125_Text_KimNotEnoughMons
# 73 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_KimPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Iris::
# 78 "data/maps/Route125/scripts.pory"
	trainerbattle_double TRAINER_KIM_AND_IRIS, Route125_Text_IrisIntro, Route125_Text_IrisDefeat, Route125_Text_IrisNotEnoughMons
# 79 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Presley::
# 84 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_PRESLEY, Route125_Text_PresleyIntro, Route125_Text_PresleyDefeat
# 85 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_PresleyPostBattle, MSGBOX_AUTOCLOSE
	end


Route125_EventScript_Auron::
# 90 "data/maps/Route125/scripts.pory"
	trainerbattle_single TRAINER_AURON, Route125_Text_AuronIntro, Route125_Text_AuronDefeat
# 91 "data/maps/Route125/scripts.pory"
	msgbox Route125_Text_AuronPostBattle, MSGBOX_AUTOCLOSE
	end

