Route105_MapScripts::
# 2 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route105_MapScripts_MAP_SCRIPT_ON_LOAD
# 15 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route105_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route105_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route105_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route105/scripts.pory"
	goto_if_unset FLAG_REGI_DOORS_OPENED, Route105_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route105_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/Route105/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH
	goto_if_eq Route105_MapScripts_MAP_SCRIPT_ON_LOAD_5
Route105_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 10 "data/maps/Route105/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH
	goto_if_eq Route105_MapScripts_MAP_SCRIPT_ON_LOAD_8
Route105_MapScripts_MAP_SCRIPT_ON_LOAD_7:
	end

Route105_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/Route105/scripts.pory"
	setmetatile 9, 19, METATILE_General_RockWall_RockBase, TRUE
# 5 "data/maps/Route105/scripts.pory"
	setmetatile 9, 20, METATILE_General_RockWall_SandBase, TRUE
	goto Route105_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route105_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 8 "data/maps/Route105/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute105North
	goto Route105_MapScripts_MAP_SCRIPT_ON_LOAD_4

Route105_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 11 "data/maps/Route105/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute105South
	goto Route105_MapScripts_MAP_SCRIPT_ON_LOAD_7

Route105_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 16 "data/maps/Route105/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	goto_if_eq Route105_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route105_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 19 "data/maps/Route105/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH
	goto_if_eq Route105_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 20 "data/maps/Route105/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH
	goto_if_eq Route105_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route105_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

Route105_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 17 "data/maps/Route105/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
	goto Route105_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route105_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/Route105/scripts.pory"
	call AbnormalWeather_StartKyogreWeather
	goto Route105_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route105_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data/maps/Route105/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0


Route105_EventScript_Foster::
# 31 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, Route105_Text_FosterIntro, Route105_Text_FosterDefeated
# 32 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_FosterPostBattle, MSGBOX_AUTOCLOSE
	end


Route105_EventScript_Luis::
# 37 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_LUIS, Route105_Text_LuisIntro, Route105_Text_LuisDefeated
# 38 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
	end


Route105_EventScript_Dominik::
# 43 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_DOMINIK, Route105_Text_DominikIntro, Route105_Text_DominikDefeated
# 44 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_DominikPostBattle, MSGBOX_AUTOCLOSE
	end


Route105_EventScript_Beverly::
# 49 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_BEVERLY, Route105_Text_BeverlyIntro, Route105_Text_BeverlyDefeated
# 50 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_PostBattle, MSGBOX_AUTOCLOSE
	end


Route105_EventScript_Imani::
# 55 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_IMANI, Route105_Text_ImaniIntro, Route105_Text_ImaniDefeated
# 56 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_ImaniPostBattle, MSGBOX_AUTOCLOSE
	end


Route105_EventScript_Josue::
# 61 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_JOSUE, Route105_Text_JosueIntro, Route105_Text_JosueDefeated
# 62 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_JosuePostBattle, MSGBOX_AUTOCLOSE
	end


Route105_EventScript_Andres::
# 67 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_ANDRES_1, Route105_Text_AndresIntro, Route105_Text_AndresDefeated, Route105_EventScript_AndresRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route105/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route105_EventScript_Andres_2
# 73 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresPostBattle, MSGBOX_DEFAULT
	release_end

Route105_EventScript_Andres_2:
# 69 "data/maps/Route105/scripts.pory"
	trainerbattle_rematch TRAINER_ANDRES_1, Route105_Text_AndresRematchIntro, Route105_Text_AndresRematchDefeated
# 70 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route105_EventScript_AndresRegisterMatchCallAfterBattle::
# 78 "data/maps/Route105/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 79 "data/maps/Route105/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRegister, MSGBOX_DEFAULT
# 81 "data/maps/Route105/scripts.pory"
	register_matchcall TRAINER_ANDRES_1
	release_end


Route104_Text_DadPokenavCall::
# 85 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "{SPEAKER NAME_NORMAN}Oh, {PLAYER}?\p"
	.string "… … … … … …\n"
	.string "Where are you now?\l"
	.string "It sounds windy wherever you are.\p"
	.string "I just heard from DEVON's MR. STONE\n"
	.string "about your POKéNAV, so I decided\l"
	.string "to give you a call.\p"
	.string "It sounds like you're doing fine,\n"
	.string "so that's fine with me.\p"
	.string "You take care now.\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

Route104_Text_RegisteredDadInPokenav::
# 108 "data/maps/Route105/scripts.pory"
	.string "Registered DAD NORMAN\n"
	.string "in the POKéNAV.$"
