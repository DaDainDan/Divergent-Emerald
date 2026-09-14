Route130_MapScripts::
# 2 "data/maps/Route130/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route130_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route130_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route130/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 5
	goto_if_ge Route130_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
Route130_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	specialvar VAR_RESULT, IsMirageIslandPresent
# 0 "data/maps/Route130/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route130_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 11 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_HIDE_MIRAGE_ISLAND_BERRY_TREE
# 12 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_12
# 13 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_13
# 14 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_14
# 15 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_15
# 16 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_16
# 17 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_17
# 18 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_18
# 19 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_19
# 20 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1A
# 21 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1B
# 22 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1C
# 23 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1D
# 24 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1E
# 25 "data/maps/Route130/scripts.pory"
	setflag FLAG_TEMP_1F
# 26 "data/maps/Route130/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE130
	end

Route130_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Route130/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto Route130_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route130_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 3 "data/maps/Route130/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route130_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto Route130_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route130_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 7 "data/maps/Route130/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE130_MIRAGE_ISLAND
	end


Route130_EventScript_MeadowLady::
# 32 "data/maps/Route130/scripts.pory"
	lock_faceplayer
# 33 "data/maps/Route130/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_PETAL_DANCE, Route130_EventScript_MeadowLady_2
# 42 "data/maps/Route130/scripts.pory"
	msgbox Route130_EventScript_MeadowLady_Text_2, MSGBOX_DEFAULT
Route130_EventScript_MeadowLady_1:
	release_end

Route130_EventScript_MeadowLady_2:
# 34 "data/maps/Route130/scripts.pory"
	msgbox Route130_EventScript_MeadowLady_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_TM_PETAL_DANCE
# 0 "data/maps/Route130/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route130_EventScript_MeadowLady_5
# 38 "data/maps/Route130/scripts.pory"
	setflag FLAG_RECEIVED_TM_PETAL_DANCE
# 39 "data/maps/Route130/scripts.pory"
	msgbox Route130_EventScript_MeadowLady_Text_1, MSGBOX_DEFAULT
	goto Route130_EventScript_MeadowLady_1

Route130_EventScript_MeadowLady_5:
# 36 "data/maps/Route130/scripts.pory"
	call Common_EventScript_ShowBagIsFull
	goto Route130_EventScript_MeadowLady_1


Route130_EventScript_Rodney::
# 48 "data/maps/Route130/scripts.pory"
	trainerbattle_single TRAINER_RODNEY, Route130_Text_RodneyIntro, Route130_Text_RodneyDefeat
# 49 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
	end


Route130_EventScript_Katie::
# 54 "data/maps/Route130/scripts.pory"
	trainerbattle_single TRAINER_KATIE, Route130_Text_KatieIntro, Route130_Text_KatieDefeat
# 55 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_KatiePostBattle, MSGBOX_AUTOCLOSE
	end


Route130_EventScript_Santiago::
# 60 "data/maps/Route130/scripts.pory"
	trainerbattle_single TRAINER_SANTIAGO, Route130_Text_SantiagoIntro, Route130_Text_SantiagoDefeat
# 61 "data/maps/Route130/scripts.pory"
	msgbox Route130_Text_SantiagoPostBattle, MSGBOX_AUTOCLOSE
	end


Route130_EventScript_MeadowLady_Text_0:
# 34 "data/maps/Route130/scripts.pory"
	.string "Greetings.$"

Route130_EventScript_MeadowLady_Text_1:
# 39 "data/maps/Route130/scripts.pory"
	.string "You are gay.$"

Route130_EventScript_MeadowLady_Text_2:
# 42 "data/maps/Route130/scripts.pory"
	.string "I love you!$"
