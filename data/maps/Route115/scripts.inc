Route115_MapScripts::
# 2 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route115_MapScripts_MAP_SCRIPT_ON_LOAD
# 11 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route115_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 20 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route115_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route115_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route115/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST
	goto_if_eq Route115_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route115_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/Route115/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST
	goto_if_eq Route115_MapScripts_MAP_SCRIPT_ON_LOAD_5
Route115_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

Route115_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/Route115/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute115West
	goto Route115_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route115_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 7 "data/maps/Route115/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute115East
	goto Route115_MapScripts_MAP_SCRIPT_ON_LOAD_4

Route115_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/Route115/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	goto_if_eq Route115_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route115_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/Route115/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST
	goto_if_eq Route115_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 15 "data/maps/Route115/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST
	goto_if_eq Route115_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route115_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

Route115_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 13 "data/maps/Route115/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
	goto Route115_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route115_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 16 "data/maps/Route115/scripts.pory"
	call AbnormalWeather_StartGroudonWeather
	goto Route115_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route115_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 21 "data/maps/Route115/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0


Route115_EventScript_Woman::
# 26 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NeverKnowWhenCavePokemonWillAppear, MSGBOX_NPC
	end


Route115_EventScript_RouteSignRustboro::
# 31 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_RouteSignRustboro, MSGBOX_SIGN
	end


Route115_EventScript_MeteorFallsSign::
# 36 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MeteorFallsSign, MSGBOX_SIGN
	end


Route115_EventScript_Timothy::
# 41 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_TIMOTHY_1, Route115_Text_TimothyIntro, Route115_Text_TimothyDefeat, Route115_EventScript_RegisterTimothy
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route115_EventScript_Timothy_2
# 47 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostBattle, MSGBOX_DEFAULT
	release_end

Route115_EventScript_Timothy_2:
# 43 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_TIMOTHY_1, Route115_Text_TimothyRematchIntro, Route115_Text_TimothyRematchDefeat
# 44 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostRematch, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_RegisterTimothy::
# 52 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 53 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyRegister, MSGBOX_DEFAULT
# 55 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_TIMOTHY_1
	release_end


Route115_EventScript_Koichi::
# 60 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KOICHI, Route115_Text_KoichiIntro, Route115_Text_KoichiDefeat
# 61 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KoichiPostBattle, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_Nob::
# 66 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_NOB_1, Route115_Text_NobIntro, Route115_Text_NobDefeat, Route115_EventScript_RegisterNob
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route115_EventScript_Nob_2
# 72 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostBattle, MSGBOX_DEFAULT
	release_end

Route115_EventScript_Nob_2:
# 68 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_NOB_1, Route115_Text_NobRematchIntro, Route115_Text_NobRematchDefeat
# 69 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostRematch, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_RegisterNob::
# 77 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 78 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobRegister, MSGBOX_DEFAULT
# 80 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_NOB_1
	release_end


Route115_EventScript_Cyndy::
# 85 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat, Route115_EventScript_RegisterCyndy
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route115_EventScript_Cyndy_2
# 91 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_DEFAULT
	release_end

Route115_EventScript_Cyndy_2:
# 87 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_CYNDY_1, Route115_Text_CyndyRematchIntro, Route115_Text_CyndyRematchDefeat
# 88 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostRematch, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_RegisterCyndy::
# 96 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 97 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyRegister, MSGBOX_DEFAULT
# 99 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_CYNDY_1
	release_end


Route115_EventScript_Hector::
# 104 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HECTOR, Route115_Text_HectorIntro, Route115_Text_HectorDefeat
# 105 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_Kyra::
# 110 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route115_Text_KyraIntro, Route115_Text_KyraDefeat
# 111 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_Jaiden::
# 116 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_JAIDEN, Route115_Text_JaidenIntro, Route115_Text_JaidenDefeat
# 117 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_JaidenPostBattle, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_Alix::
# 122 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_ALIX, Route115_Text_AlixIntro, Route115_Text_AlixDefeat
# 123 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_Helene::
# 128 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HELENE, Route115_Text_HeleneIntro, Route115_Text_HeleneDefeat
# 129 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HelenePostBattle, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_Marlene::
# 134 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_MARLENE, Route115_Text_MarleneIntro, Route115_Text_MarleneDefeat
# 135 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
	end


Route115_Text_NeverKnowWhenCavePokemonWillAppear::
# 139 "data/maps/Route115/scripts.pory"
	.string "Exploring a cave isn't like walking\n"
	.string "on a road.\p"
	.string "You never know when wild POKéMON will\n"
	.string "appear. It's full of suspense.$"

Route115_Text_RouteSignRustboro::
# 147 "data/maps/Route115/scripts.pory"
	.string "ROUTE 115\n"
	.string "{DOWN_ARROW} RUSTBORO CITY$"

Route115_Text_MeteorFallsSign::
# 152 "data/maps/Route115/scripts.pory"
	.string "METEOR FALLS\n"
	.string "FALLARBOR TOWN THROUGH HERE$"
