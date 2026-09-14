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


Route115_WildSet2Trigger::
# 26 "data/maps/Route115/scripts.pory"
	setvar VAR_ROUTE115_WILD_SET, 1
	return


Route115_WildSet1Trigger::
# 31 "data/maps/Route115/scripts.pory"
	setvar VAR_ROUTE115_WILD_SET, 0
	return


Route115_EventScript_Woman::
# 36 "data/maps/Route115/scripts.pory"
	lock_faceplayer
# 37 "data/maps/Route115/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_REJUVENATE, Route115_EventScript_Woman_2
# 41 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KeepYourPokemonHealthy, MSGBOX_NPC
	giveitem ITEM_TM_REFRESH
# 0 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route115_EventScript_Woman_5
Route115_EventScript_Woman_4:
# 45 "data/maps/Route115/scripts.pory"
	setflag FLAG_RECEIVED_TM_REJUVENATE
	release_end

Route115_EventScript_Woman_2:
# 38 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NeverKnowWhenCavePokemonWillAppear, MSGBOX_NPC
	release_end

Route115_EventScript_Woman_5:
# 43 "data/maps/Route115/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route115_EventScript_Woman_4


Route115_EventScript_Raymond::
# 50 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_RAYMOND, Route115_Text_RaymondIntro, Route115_Text_RaymondDefeat
# 51 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_RaymondPostBattle, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_RouteSignRustboro::
# 56 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_RouteSignRustboro, MSGBOX_SIGN
	end


Route115_EventScript_MeteorFallsSign::
# 61 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MeteorFallsSign, MSGBOX_SIGN
	end


Route115_EventScript_Timothy::
# 66 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_TIMOTHY_1, Route115_Text_TimothyIntro, Route115_Text_TimothyDefeat, Route115_EventScript_RegisterTimothy
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route115_EventScript_Timothy_2
# 72 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostBattle, MSGBOX_DEFAULT
	release_end

Route115_EventScript_Timothy_2:
# 68 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_TIMOTHY_1, Route115_Text_TimothyRematchIntro, Route115_Text_TimothyRematchDefeat
# 69 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostRematch, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_RegisterTimothy::
# 77 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 78 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyRegister, MSGBOX_DEFAULT
# 80 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_TIMOTHY_1
	release_end


Route115_EventScript_Koichi::
# 85 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KOICHI, Route115_Text_KoichiIntro, Route115_Text_KoichiDefeat
# 86 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KoichiPostBattle, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_Oscar::
# 91 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_OSCAR_1, Route115_Text_OscarIntro, Route115_Text_OscarDefeat, Route115_EventScript_RegisterOscar
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route115_EventScript_Oscar_2
# 97 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_OscarPostBattle, MSGBOX_DEFAULT
	release_end

Route115_EventScript_Oscar_2:
# 93 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_OSCAR_1, Route115_Text_OscarRematchIntro, Route115_Text_OscarRematchDefeat
# 94 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_OscarPostRematch, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_RegisterOscar::
# 102 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 103 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_OscarRegister, MSGBOX_DEFAULT
# 105 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_OSCAR_1
	release_end


Route115_EventScript_Cyndy::
# 110 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat, Route115_EventScript_RegisterCyndy
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route115/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route115_EventScript_Cyndy_2
# 116 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_DEFAULT
	release_end

Route115_EventScript_Cyndy_2:
# 112 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_CYNDY_1, Route115_Text_CyndyRematchIntro, Route115_Text_CyndyRematchDefeat
# 113 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostRematch, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_RegisterCyndy::
# 121 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 122 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 123 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyRegister, MSGBOX_DEFAULT
# 124 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_CYNDY_1
	release_end


Route115_EventScript_Hector::
# 129 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HECTOR, Route115_Text_HectorIntro, Route115_Text_HectorDefeat
# 130 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_Kyra::
# 135 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route115_Text_KyraIntro, Route115_Text_KyraDefeat
# 136 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_Jaiden::
# 141 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_JAIDEN, Route115_Text_JaidenIntro, Route115_Text_JaidenDefeat
# 142 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_JaidenPostBattle, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_Amber::
# 147 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_AMBER, Route115_Text_AmberIntro, Route115_Text_AmberDefeat
# 148 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_AmberPostBattle, MSGBOX_AUTOCLOSE
	end


Route115_EventScript_Helene::
# 153 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HELENE, Route115_Text_HeleneIntro, Route115_Text_HeleneDefeat
# 154 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HelenePostBattle, MSGBOX_AUTOCLOSE
	end


Route115_Text_NeverKnowWhenCavePokemonWillAppear::
# 158 "data/maps/Route115/scripts.pory"
	.string "Be sure to use that TM a lot!\p"
	.string "Staying hydrated is important for\n"
	.string "people and POKéMON!$"

Route115_Text_RouteSignRustboro::
# 165 "data/maps/Route115/scripts.pory"
	.string "ROUTE 115\n"
	.string "{DOWN_ARROW} RUSTBORO CITY$"

Route115_Text_MeteorFallsSign::
# 170 "data/maps/Route115/scripts.pory"
	.string "METEOR FALLS\n"
	.string "FALLARBOR TOWN THROUGH HERE$"

Route115_Text_KeepYourPokemonHealthy::
# 175 "data/maps/Route115/scripts.pory"
	.string "Water is the source of life.\p"
	.string "Certain POKéMON can use it to restore\n"
	.string "their health and fortitude.\p"
	.string "You can teach them how with this\n"
	.string "technical machine.$"
