Route126_MapScripts::
# 2 "data/maps/Route126/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route126_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route126_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route126/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route126_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route126_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route126_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Route126/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto Route126_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Route126_EventScript_Barry::
# 11 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_BARRY, Route126_Text_BarryIntro, Route126_Text_BarryDefeat
# 12 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_BarryPostBattle, MSGBOX_AUTOCLOSE
	end


Route126_EventScript_Dean::
# 17 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_DEAN, Route126_Text_DeanIntro, Route126_Text_DeanDefeat
# 18 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_DeanPostBattle, MSGBOX_AUTOCLOSE
	end


Route126_EventScript_Nikki::
# 23 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_NIKKI, Route126_Text_NikkiIntro, Route126_Text_NikkiDefeat
# 24 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_NikkiPostBattle, MSGBOX_AUTOCLOSE
	end


Route126_EventScript_Brenda::
# 29 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_BRENDA, Route126_Text_BrendaIntro, Route126_Text_BrendaDefeat
# 30 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_BrendaPostBattle, MSGBOX_AUTOCLOSE
	end


Route126_EventScript_Leonardo::
# 35 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_LEONARDO, Route126_Text_LeonardoIntro, Route126_Text_LeonardoDefeat
# 36 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_LeonardoPostBattle, MSGBOX_AUTOCLOSE
	end


Route126_EventScript_Isobel::
# 41 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_ISOBEL, Route126_Text_IsobelIntro, Route126_Text_IsobelDefeat
# 42 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_IsobelPostBattle, MSGBOX_AUTOCLOSE
	end


Route126_EventScript_Sienna::
# 47 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_SIENNA, Route126_Text_SiennaIntro, Route126_Text_SiennaDefeat
# 48 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_SiennaPostBattle, MSGBOX_AUTOCLOSE
	end


Route126_EventScript_Pablo::
# 53 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_PABLO_1, Route126_Text_PabloIntro, Route126_Text_PabloDefeat, Route126_EventScript_RegisterPablo
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route126/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route126_EventScript_Pablo_2
# 59 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloPostBattle, MSGBOX_DEFAULT
	release_end

Route126_EventScript_Pablo_2:
# 55 "data/maps/Route126/scripts.pory"
	trainerbattle_rematch TRAINER_PABLO_1, Route126_Text_PabloRematchIntro, Route126_Text_PabloRematchDefeat
# 56 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloPostRematch, MSGBOX_AUTOCLOSE
	end


Route126_EventScript_RegisterPablo::
# 64 "data/maps/Route126/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 65 "data/maps/Route126/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloRegister, MSGBOX_DEFAULT
# 67 "data/maps/Route126/scripts.pory"
	register_matchcall TRAINER_PABLO_1
	release_end

