Route108_MapScripts::
	.byte 0


Route108_EventScript_Jerome::
# 4 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_JEROME, Route108_Text_JeromeIntro, Route108_Text_JeromeDefeated
# 5 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
	end


Route108_EventScript_Matthew::
# 10 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_MATTHEW, Route108_Text_MatthewIntro, Route108_Text_MatthewDefeated
# 11 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
	end


Route108_EventScript_Tara::
# 16 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_TARA, Route108_Text_TaraIntro, Route108_Text_TaraDefeated
# 17 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
	end


Route108_EventScript_Christine::
# 22 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_CHRISTINE, Route108_Text_ChristineIntro, Route108_Text_ChristineDefeated
# 23 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_ChristinePostBattle, MSGBOX_AUTOCLOSE
	end


Route108_EventScript_Cory::
# 28 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_CORY_1, Route108_Text_CoryIntro, Route108_Text_CoryDefeated, Route108_EventScript_CoryRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route108/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route108_EventScript_Cory_2
# 34 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryPostBattle, MSGBOX_DEFAULT
	release_end

Route108_EventScript_Cory_2:
# 30 "data/maps/Route108/scripts.pory"
	trainerbattle_rematch TRAINER_CORY_1, Route108_Text_CoryRematchIntro, Route108_Text_CoryRematchDefeated
# 31 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route108_EventScript_CoryRegisterMatchCallAfterBattle::
# 39 "data/maps/Route108/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 40 "data/maps/Route108/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRegister, MSGBOX_DEFAULT
# 42 "data/maps/Route108/scripts.pory"
	register_matchcall TRAINER_CORY_1
	release_end

