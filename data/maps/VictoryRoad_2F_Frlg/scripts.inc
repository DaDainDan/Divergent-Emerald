VictoryRoad_2F_Frlg_MapScripts::
# 2 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

VictoryRoad_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
	goto_if_ne VictoryRoad_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
VictoryRoad_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
	goto_if_ne VictoryRoad_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5
VictoryRoad_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

VictoryRoad_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_RockBarrier_Top, 1
# 5 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_RockBarrier_Bottom, 1
	goto VictoryRoad_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

VictoryRoad_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 8 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_RockBarrier_Top, 1
# 9 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_RockBarrier_Bottom, 1
	goto VictoryRoad_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4


VictoryRoad_2F_OnLoad::
	return


VictoryRoad_2F_EventScript_FloorSwitch1::
# 20 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	lockall
# 21 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
	goto_if_ne VictoryRoad_2F_EventScript_FloorSwitch1_2
VictoryRoad_2F_EventScript_FloorSwitch1_1:
# 30 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	releaseall
	end

VictoryRoad_2F_EventScript_FloorSwitch1_2:
# 22 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_Floor_Ledge_Top, 0
# 23 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_Floor_Ledge_Bottom, 0
# 24 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	playse SE_ICE_BREAK
# 25 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	special DrawWholeMapView
# 26 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	waitse
# 27 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER1
# 28 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
	goto VictoryRoad_2F_EventScript_FloorSwitch1_1


VictoryRoad_2F_EventScript_FloorSwitch2::
# 35 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	lockall
# 36 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
	goto_if_ne VictoryRoad_2F_EventScript_FloorSwitch2_2
VictoryRoad_2F_EventScript_FloorSwitch2_1:
# 45 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	releaseall
	end

VictoryRoad_2F_EventScript_FloorSwitch2_2:
# 37 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_Floor_Ledge_Top, 0
# 38 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_Floor_Ledge_Bottom, 0
# 39 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	playse SE_ICE_BREAK
# 40 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	special DrawWholeMapView
# 41 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	waitse
# 42 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_2F_BOULDER2
# 43 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
	goto VictoryRoad_2F_EventScript_FloorSwitch2_1


VictoryRoad_2F_EventScript_Dawson::
# 50 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_DAWSON, VictoryRoad_2F_Text_DawsonIntro, VictoryRoad_2F_Text_DawsonDefeat
# 51 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_2F_EventScript_Daisuke::
# 56 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_DAISUKE, VictoryRoad_2F_Text_DaisukeIntro, VictoryRoad_2F_Text_DaisukeDefeat
# 57 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_2F_EventScript_Nelson::
# 62 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NELSON, VictoryRoad_2F_Text_NelsonIntro, VictoryRoad_2F_Text_NelsonDefeat
# 63 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_NelsonPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_2F_EventScript_Gregory::
# 68 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_GREGORY, VictoryRoad_2F_Text_GregoryIntro, VictoryRoad_2F_Text_GregoryDefeat
# 69 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_2F_EventScript_Vincent::
# 74 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_VINCENT, VictoryRoad_2F_Text_VincentIntro, VictoryRoad_2F_Text_VincentDefeat
# 75 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	msgbox VictoryRoad_2F_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_2F_Text_DawsonIntro::
# 79 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "If you can get through here,\n"
	.string "you can go meet the ELITE FOUR.$"

VictoryRoad_2F_Text_DawsonDefeat::
# 84 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "No!\n"
	.string "Unbelievable!$"

VictoryRoad_2F_Text_DawsonPostBattle::
# 89 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "I can beat you when it comes to\n"
	.string "knowledge about POKéMON!$"

VictoryRoad_2F_Text_DaisukeIntro::
# 94 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "This here is VICTORY ROAD.\n"
	.string "It's the final test for TRAINERS!$"

VictoryRoad_2F_Text_DaisukeDefeat::
# 99 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Atcho!$"

VictoryRoad_2F_Text_DaisukePostBattle::
# 103 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "If you get stuck, try moving some\n"
	.string "boulders around.$"

VictoryRoad_2F_Text_NelsonIntro::
# 108 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Ah, so you wish to challenge the\n"
	.string "ELITE FOUR?$"

VictoryRoad_2F_Text_NelsonDefeat::
# 113 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "You got me!$"

VictoryRoad_2F_Text_NelsonPostBattle::
# 117 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "{RIVAL} also came through here.$"

VictoryRoad_2F_Text_VincentIntro::
# 121 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Come on!\n"
	.string "I'll whip you!$"

VictoryRoad_2F_Text_VincentDefeat::
# 126 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "I got whipped!$"

VictoryRoad_2F_Text_VincentPostBattle::
# 130 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "You earned the right to be on\n"
	.string "VICTORY ROAD…$"

VictoryRoad_2F_Text_GregoryIntro::
# 135 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Is VICTORY ROAD too tough?$"

VictoryRoad_2F_Text_GregoryDefeat::
# 139 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Well done!$"

VictoryRoad_2F_Text_GregoryPostBattle::
# 143 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "Many TRAINERS give up their\n"
	.string "challenge here and go home.$"

VictoryRoad_2F_Text_Gyaoo::
# 149 "data/maps/VictoryRoad_2F_Frlg/scripts.pory"
	.string "ギヤーオ！$"
