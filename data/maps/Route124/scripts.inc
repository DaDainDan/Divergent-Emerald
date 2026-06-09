Route124_MapScripts::
# 2 "data/maps/Route124/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route124_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route124/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route124_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route124_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route124_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Route124/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto Route124_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Route124_EventScript_HuntersHouseSign::
# 11 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_HuntersHouse, MSGBOX_SIGN
	end


Route124_EventScript_Spencer::
# 16 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_SPENCER, Route124_Text_SpencerIntro, Route124_Text_SpencerDefeat
# 17 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_SpencerPostBattle, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_Roland::
# 22 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_ROLAND, Route124_Text_RolandIntro, Route124_Text_RolandDefeat
# 23 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RolandPostBattle, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_Jenny::
# 28 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_JENNY_1, Route124_Text_JennyIntro, Route124_Text_JennyDefeat, Route124_EventScript_RegisterJenny
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route124/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_EventScript_Jenny_2
# 34 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostBattle, MSGBOX_DEFAULT
	release_end

Route124_EventScript_Jenny_2:
# 30 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch TRAINER_JENNY_1, Route124_Text_JennyRematchIntro, Route124_Text_JennyRematchDefeat
# 31 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyPostRematch, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_RegisterJenny::
# 39 "data/maps/Route124/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 40 "data/maps/Route124/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_JennyRegister, MSGBOX_DEFAULT
# 42 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_JENNY_1
	release_end


Route124_EventScript_Grace::
# 47 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_GRACE, Route124_Text_GraceIntro, Route124_Text_GraceDefeat
# 48 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_GracePostBattle, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_Chad::
# 53 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_CHAD, Route124_Text_ChadIntro, Route124_Text_ChadDefeat
# 54 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_ChadPostBattle, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_Lila::
# 59 "data/maps/Route124/scripts.pory"
	trainerbattle_double TRAINER_LILA_AND_ROY_1, Route124_Text_LilaIntro, Route124_Text_LilaDefeat, Route124_Text_LilaNotEnoughMons, Route124_EventScript_RegisterLilaAndRoy
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route124/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_EventScript_Lila_2
# 65 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostBattle, MSGBOX_DEFAULT
	release_end

Route124_EventScript_Lila_2:
# 61 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_LilaRematchIntro, Route124_Text_LilaRematchDefeat, Route124_Text_LilaRematchNotEnoughMons
# 62 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaPostRematch, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_RegisterLilaAndRoy::
# 70 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_LilaRoyRegister, MSGBOX_DEFAULT
# 71 "data/maps/Route124/scripts.pory"
	register_matchcall TRAINER_LILA_AND_ROY_1
	release_end


Route124_EventScript_Roy::
# 76 "data/maps/Route124/scripts.pory"
	trainerbattle_double TRAINER_LILA_AND_ROY_1, Route124_Text_RoyIntro, Route124_Text_RoyDefeat, Route124_Text_RoyNotEnoughMons, Route124_EventScript_RegisterLilaAndRoy
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route124/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_EventScript_Roy_2
# 82 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostBattle, MSGBOX_DEFAULT
	release_end

Route124_EventScript_Roy_2:
# 78 "data/maps/Route124/scripts.pory"
	trainerbattle_rematch_double TRAINER_LILA_AND_ROY_1, Route124_Text_RoyRematchIntro, Route124_Text_RoyRematchDefeat, Route124_Text_RoyRematchNotEnoughMons
# 79 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_RoyPostRematch, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_Declan::
# 87 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_DECLAN, Route124_Text_DeclanIntro, Route124_Text_DeclanDefeat
# 88 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_DeclanPostBattle, MSGBOX_AUTOCLOSE
	end


Route124_EventScript_Isabella::
# 93 "data/maps/Route124/scripts.pory"
	trainerbattle_single TRAINER_ISABELLA, Route124_Text_IsabellaIntro, Route124_Text_IsabellaDefeat
# 94 "data/maps/Route124/scripts.pory"
	msgbox Route124_Text_IsabellaPostBattle, MSGBOX_AUTOCLOSE
	end


Route124_Text_HuntersHouse::
# 98 "data/maps/Route124/scripts.pory"
	.string "HUNTER'S HOUSE$"
