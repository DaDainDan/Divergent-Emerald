Route106_MapScripts::
	.byte 0


Route106_EventScript_TrainerTipsSign::
# 4 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
	end


Route106_EventScript_Douglas::
# 9 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
# 10 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
	end


Route106_EventScript_Kyla::
# 15 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
# 16 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
	end


Route106_EventScript_Elliot::
# 21 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_ELLIOT_1, Route106_Text_ElliotIntro, Route106_Text_ElliotDefeated, Route106_EventScript_ElliotRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route106/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route106_EventScript_Elliot_2
# 27 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
	release_end

Route106_EventScript_Elliot_2:
# 23 "data/maps/Route106/scripts.pory"
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
# 24 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
# 32 "data/maps/Route106/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 33 "data/maps/Route106/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
# 35 "data/maps/Route106/scripts.pory"
	register_matchcall TRAINER_ELLIOT_1
	release_end


Route106_EventScript_Ned::
# 40 "data/maps/Route106/scripts.pory"
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
# 41 "data/maps/Route106/scripts.pory"
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
	end


Route106_Text_TrainerTips::
# 45 "data/maps/Route106/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Advice on catching POKéMON with a ROD:\n"
	.string "Press the A Button if you get a bite.$"
