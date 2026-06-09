Route131_MapScripts::
# 2 "data/maps/Route131/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route131_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route131_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route131/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_ge Route131_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
Route131_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/Route131/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE131_SKY_PILLAR
	end

Route131_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Route131/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto Route131_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route131_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 3 "data/maps/Route131/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route131_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto Route131_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Route131_EventScript_Richard::
# 12 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_RICHARD, Route131_Text_RichardIntro, Route131_Text_RichardDefeat
# 13 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_RichardPostBattle, MSGBOX_AUTOCLOSE
	end


Route131_EventScript_Herman::
# 18 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_HERMAN, Route131_Text_HermanIntro, Route131_Text_HermanDefeat
# 19 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
	end


Route131_EventScript_Susie::
# 24 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_SUSIE, Route131_Text_SusieIntro, Route131_Text_SusieDefeat
# 25 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_SusiePostBattle, MSGBOX_AUTOCLOSE
	end


Route131_EventScript_Kara::
# 30 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_KARA, Route131_Text_KaraIntro, Route131_Text_KaraDefeat
# 31 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_KaraPostBattle, MSGBOX_AUTOCLOSE
	end


Route131_EventScript_Reli::
# 36 "data/maps/Route131/scripts.pory"
	trainerbattle_double TRAINER_RELI_AND_IAN, Route131_Text_ReliIntro, Route131_Text_ReliDefeat, Route131_Text_ReliNotEnoughMons
# 37 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_ReliPostBattle, MSGBOX_AUTOCLOSE
	end


Route131_EventScript_Ian::
# 42 "data/maps/Route131/scripts.pory"
	trainerbattle_double TRAINER_RELI_AND_IAN, Route131_Text_IanIntro, Route131_Text_IanDefeat, Route131_Text_IanNotEnoughMons
# 43 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_IanPostBattle, MSGBOX_AUTOCLOSE
	end


Route131_EventScript_Talia::
# 48 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_TALIA, Route131_Text_TaliaIntro, Route131_Text_TaliaDefeat
# 49 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_TaliaPostBattle, MSGBOX_AUTOCLOSE
	end


Route131_EventScript_Kevin::
# 54 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_KEVIN, Route131_Text_KevinIntro, Route131_Text_KevinDefeat
# 55 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
	end

