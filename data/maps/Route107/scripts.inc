Route107_MapScripts::
	.byte 0


Route107_EventScript_Darrin::
# 4 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_DARRIN, Route107_Text_DarrinIntro, Route107_Text_DarrinDefeated
# 5 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_DarrinPostBattle, MSGBOX_AUTOCLOSE
	end


Route107_EventScript_Tony::
# 10 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_TONY_1, Route107_Text_TonyIntro, Route107_Text_TonyDefeated, Route107_EventScript_TonyRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route107/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route107_EventScript_Tony_2
# 16 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyPostBattle, MSGBOX_DEFAULT
	release_end

Route107_EventScript_Tony_2:
# 12 "data/maps/Route107/scripts.pory"
	trainerbattle_rematch TRAINER_TONY_1, Route107_Text_TonyRematchIntro, Route107_Text_TonyRematchDefeated
# 13 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route107_EventScript_TonyRegisterMatchCallAfterBattle::
# 21 "data/maps/Route107/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 22 "data/maps/Route107/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_TonyRegister, MSGBOX_DEFAULT
# 24 "data/maps/Route107/scripts.pory"
	register_matchcall TRAINER_TONY_1
	release_end


Route107_EventScript_Denise::
# 29 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_DENISE, Route107_Text_DeniseIntro, Route107_Text_DeniseDefeated
# 30 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_DenisePostBattle, MSGBOX_AUTOCLOSE
	end


Route107_EventScript_Beth::
# 35 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_BETH, Route107_Text_BethIntro, Route107_Text_BethDefeated
# 36 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_BethPostBattle, MSGBOX_AUTOCLOSE
	end


Route107_EventScript_Lisa::
# 41 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_LisaIntro, Route107_Text_LisaDefeated, Route107_Text_LisaNotEnoughPokemon
# 42 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
	end


Route107_EventScript_Ray::
# 47 "data/maps/Route107/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_RayIntro, Route107_Text_RayDefeated, Route107_Text_RayNotEnoughPokemon
# 48 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_RayPostBattle, MSGBOX_AUTOCLOSE
	end


Route107_EventScript_Camron::
# 53 "data/maps/Route107/scripts.pory"
	trainerbattle_single TRAINER_CAMRON, Route107_Text_CamronIntro, Route107_Text_CamronDefeated
# 54 "data/maps/Route107/scripts.pory"
	msgbox Route107_Text_CamronPostBattle, MSGBOX_AUTOCLOSE
	end

