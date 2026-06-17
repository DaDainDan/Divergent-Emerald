SilphCo_4F_Frlg_MapScripts::
# 2 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SilphCo_4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_4F_DOOR_1, SilphCo_4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
SilphCo_4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_4F_DOOR_2, SilphCo_4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5
SilphCo_4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

SilphCo_4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	call EventScript_Close4FDoor1
	goto SilphCo_4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

SilphCo_4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 7 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	call EventScript_Close4FDoor2
	goto SilphCo_4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4


SilphCo_4F_EventScript_WorkerM::
# 14 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	lock_faceplayer
# 15 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_4F_EventScript_WorkerM_2
# 19 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_CantYouSeeImHiding
	release_end

SilphCo_4F_EventScript_WorkerM_2:
# 16 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_TeamRocketIsGone
	release_end


SilphCo_4F_EventScript_FloorSign::
# 24 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_4F_EventScript_Rodney::
# 29 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_RODNEY, SilphCo_4F_Text_RodneyIntro, SilphCo_4F_Text_RodneyDefeat
# 30 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_4F_EventScript_Grunt1::
# 35 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_26, SilphCo_4F_Text_Grunt1Intro, SilphCo_4F_Text_Grunt1Defeat
# 36 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_4F_EventScript_Grunt2::
# 41 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_27, SilphCo_4F_Text_Grunt2Intro, SilphCo_4F_Text_Grunt2Defeat
# 42 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	msgbox SilphCo_4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_4F_Text_CantYouSeeImHiding::
# 46 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Sssh!\n"
	.string "Can't you see I'm hiding?$"

SilphCo_4F_Text_TeamRocketIsGone::
# 51 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Huh?\n"
	.string "TEAM ROCKET is gone?$"

SilphCo_4F_Text_Grunt1Intro::
# 56 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "TEAM ROCKET has taken control\n"
	.string "of SILPH CO.!$"

SilphCo_4F_Text_Grunt1Defeat::
# 61 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Arrgh!$"

SilphCo_4F_Text_Grunt1PostBattle::
# 65 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Fwahahaha!\n"
	.string "My BOSS has been after this place!$"

SilphCo_4F_Text_RodneyIntro::
# 70 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "My POKéMON is my loyal servant.$"

SilphCo_4F_Text_RodneyDefeat::
# 74 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Darn!\n"
	.string "You weak POKéMON!$"

SilphCo_4F_Text_RodneyPostBattle::
# 79 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "The doors are electronically\n"
	.string "locked.\p"
	.string "It takes a CARD KEY to open the\n"
	.string "doors here.$"

SilphCo_4F_Text_Grunt2Intro::
# 87 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Intruder spotted!$"

SilphCo_4F_Text_Grunt2Defeat::
# 91 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "Who are you?$"

SilphCo_4F_Text_Grunt2PostBattle::
# 95 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "I better tell the BOSS on 11F!$"

SilphCo_4F_Text_FloorSign::
# 99 "data/maps/SilphCo_4F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
	.string "4F$"
