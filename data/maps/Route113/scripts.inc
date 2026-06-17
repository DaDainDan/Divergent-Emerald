Route113_MapScripts::
# 2 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route113_MapScripts_MAP_SCRIPT_ON_RESUME
# 6 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route113_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Route113/scripts.pory"
	setstepcallback STEP_CB_ASH
	end

Route113_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/Route113/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 8 "data/maps/Route113/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 9 "data/maps/Route113/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_ge Route113_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 9 "data/maps/Route113/scripts.pory"
	compare VAR_TEMP_0, 84
	goto_if_le Route113_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route113_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route113_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/Route113/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
	goto Route113_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Route113_EventScript_Gentleman::
# 17 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_AshCanBeFashionedIntoGlass, MSGBOX_NPC
	end


Route113_EventScript_NinjaBoy::
# 22 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_FunWalkingThroughAsh, MSGBOX_NPC
	end


Route113_EventScript_RouteSign111::
# 27 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSign111, MSGBOX_SIGN
	end


Route113_EventScript_RouteSignFallarbor::
# 32 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSignFallarbor, MSGBOX_SIGN
	end


Route113_EventScript_GlassWorkshopSign::
# 37 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_GlassWorkshopSign, MSGBOX_SIGN
	end


Route113_EventScript_TrainerTipsRegisterKeyItems::
# 42 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TrainerTipsRegisterKeyItems, MSGBOX_SIGN
	end


Route113_EventScript_Jaylen::
# 47 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_JAYLEN, Route113_Text_JaylenIntro, Route113_Text_JaylenDefeat
# 48 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_JaylenPostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Dillon::
# 53 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_DILLON, Route113_Text_DillonIntro, Route113_Text_DillonDefeat
# 54 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Madeline::
# 59 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat, Route113_EventScript_RegisterMadeline
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route113/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route113_EventScript_Madeline_2
# 65 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostBattle, MSGBOX_DEFAULT
	release_end

Route113_EventScript_Madeline_2:
# 61 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_MADELINE_1, Route113_Text_MadelineRematchIntro, Route113_Text_MadelineRematchDefeat
# 62 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostRematch, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_RegisterMadeline::
# 70 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 71 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelineRegister, MSGBOX_DEFAULT
# 73 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_MADELINE_1
	release_end


Route113_EventScript_Lao::
# 78 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAO_1, Route113_Text_LaoIntro, Route113_Text_LaoDefeat, Route113_EventScript_RegisterLao
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route113/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route113_EventScript_Lao_2
# 84 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostBattle, MSGBOX_DEFAULT
	release_end

Route113_EventScript_Lao_2:
# 80 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_LAO_1, Route113_Text_LaoRematchIntro, Route113_Text_LaoRematchDefeat
# 81 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostRematch, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_RegisterLao::
# 89 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 90 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoRegister, MSGBOX_DEFAULT
# 92 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_LAO_1
	release_end


Route113_EventScript_Lung::
# 97 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LUNG, Route113_Text_LungIntro, Route113_Text_LungDefeat
# 98 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LungPostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Tori::
# 103 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_ToriIntro, Route113_Text_ToriDefeat, Route113_Text_ToriNotEnoughMons
# 104 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_ToriPostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Tia::
# 109 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_TiaIntro, Route113_Text_TiaDefeat, Route113_Text_TiaNotEnoughMons
# 110 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TiaPostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Sophie::
# 115 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_SOPHIE, Route113_Text_SophieIntro, Route113_Text_SophieDefeat
# 116 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_SophiePostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Coby::
# 121 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_COBY, Route113_Text_CobyIntro, Route113_Text_CobyDefeat
# 122 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_CobyPostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Lawrence::
# 127 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAWRENCE, Route113_Text_LawrenceIntro, Route113_Text_LawrenceDefeat
# 128 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LawrencePostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Wyatt::
# 133 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_WYATT, Route113_Text_WyattIntro, Route113_Text_WyattDefeat
# 134 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_WyattPostBattle, MSGBOX_AUTOCLOSE
	end


Route113_Text_AshCanBeFashionedIntoGlass::
# 138 "data/maps/Route113/scripts.pory"
	.string "Wahahaha! Today's technology is a\n"
	.string "wondrous thing!\p"
	.string "Take this volcanic ash here.\n"
	.string "It can be fashioned into glass.$"

Route113_Text_FunWalkingThroughAsh::
# 146 "data/maps/Route113/scripts.pory"
	.string "It's fun walking through the volcano's\n"
	.string "ashes on the ground and grass.\p"
	.string "You can see where you walked--it's\n"
	.string "really neat!$"

Route113_Text_RouteSign111::
# 154 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
	.string "{RIGHT_ARROW} ROUTE 111$"

Route113_Text_RouteSignFallarbor::
# 159 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
	.string "{LEFT_ARROW} FALLARBOR TOWN$"

Route113_Text_TrainerTipsRegisterKeyItems::
# 164 "data/maps/Route113/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "You may register one of the KEY ITEMS\n"
	.string "in your BAG as SELECT.\p"
	.string "Simply press SELECT to use\n"
	.string "the registered item conveniently.$"

Route113_Text_GlassWorkshopSign::
# 174 "data/maps/Route113/scripts.pory"
	.string "GLASS WORKSHOP\n"
	.string "“Turning Volcanic Ash into Glass Items”$"
