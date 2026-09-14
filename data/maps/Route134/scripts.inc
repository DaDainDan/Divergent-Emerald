Route134_MapScripts::
# 2 "data/maps/Route134/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route134_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route134_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Route134/scripts.pory"
	setdivewarp MAP_UNDERWATER_ROUTE134, 8, 6
	end


Route134_EventScript_Jack::
# 9 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_JACK, Route134_Text_JackIntro, Route134_Text_JackDefeat
# 10 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_JackPostBattle, MSGBOX_AUTOCLOSE
	end


Route134_EventScript_Ellie::
# 15 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_ELLIE, Route134_Text_EllieIntro, Route134_Text_EllieDefeat
# 16 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_ElliePostBattle, MSGBOX_AUTOCLOSE
	end


Route134_EventScript_Alex::
# 21 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_ALEX, Route134_Text_AlexIntro, Route134_Text_AlexDefeat
# 22 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_AlexPostBattle, MSGBOX_AUTOCLOSE
	end


Route134_EventScript_Aaron::
# 27 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_AARON, Route134_Text_AaronIntro, Route134_Text_AaronDefeat
# 28 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_AaronPostBattle, MSGBOX_AUTOCLOSE
	end


Route134_EventScript_Hitoshi::
# 33 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_HITOSHI, Route134_Text_HitoshiIntro, Route134_Text_HitoshiDefeat
# 34 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_HitoshiPostBattle, MSGBOX_AUTOCLOSE
	end


Route134_EventScript_Hudson::
# 39 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_HUDSON, Route134_Text_HudsonIntro, Route134_Text_HudsonDefeat
# 40 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_HudsonPostBattle, MSGBOX_AUTOCLOSE
	end


Route134_EventScript_Reyna::
# 45 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_REYNA, Route134_Text_ReynaIntro, Route134_Text_ReynaDefeat
# 46 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_ReynaPostBattle, MSGBOX_AUTOCLOSE
	end


Route134_EventScript_Natalie::
# 51 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_NATALIE, Route134_Text_NatalieIntro, Route134_Text_NatalieDefeat
# 52 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_NataliePostBattle, MSGBOX_AUTOCLOSE
	end


Route134_EventScript_Kelvin::
# 57 "data/maps/Route134/scripts.pory"
	trainerbattle_single TRAINER_KELVIN, Route134_Text_KelvinIntro, Route134_Text_KelvinDefeat
# 58 "data/maps/Route134/scripts.pory"
	msgbox Route134_Text_KelvinPostBattle, MSGBOX_AUTOCLOSE
	end

