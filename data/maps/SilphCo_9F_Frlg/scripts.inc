SilphCo_9F_Frlg_MapScripts::
# 2 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_9F_DOOR_1, SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_9F_DOOR_2, SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5
SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 9 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_9F_DOOR_3, SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_8
SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 12 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_9F_DOOR_4, SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_11
SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_10:
	end

SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	call EventScript_Close9FDoor1
	goto SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 7 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	call EventScript_Close9FDoor2
	goto SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4

SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 10 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	call EventScript_Close9FDoor3
	goto SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_7

SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 13 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	call EventScript_Close9FDoor4
	goto SilphCo_9F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_10


SilphCo_9F_EventScript_HealWoman::
# 20 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	lock_faceplayer
# 21 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_9F_EventScript_HealWoman_2
# 25 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_YouShouldTakeQuickNap
# 26 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	closemessage
# 27 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 28 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_DontGiveUp
	release_end

SilphCo_9F_EventScript_HealWoman_2:
# 22 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_ThankYouSoMuch
	release_end


SilphCo_9F_EventScript_FloorSign::
# 33 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_9F_EventScript_Ed::
# 38 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_ED, SilphCo_9F_Text_EdIntro, SilphCo_9F_Text_EdDefeat
# 39 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_EdPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_9F_EventScript_Grunt1::
# 44 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_37, SilphCo_9F_Text_Grunt1Intro, SilphCo_9F_Text_Grunt1Defeat
# 45 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_9F_EventScript_Grunt2::
# 50 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_38, SilphCo_9F_Text_Grunt2Intro, SilphCo_9F_Text_Grunt2Defeat
# 51 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	msgbox SilphCo_9F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_9F_Text_YouShouldTakeQuickNap::
# 55 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "You look tired.\n"
	.string "You should take a quick nap.$"

SilphCo_9F_Text_DontGiveUp::
# 60 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Don't give up!$"

SilphCo_9F_Text_ThankYouSoMuch::
# 64 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Thank you so much.$"

SilphCo_9F_Text_Grunt1Intro::
# 68 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Your POKéMON seem to adore you,\n"
	.string "kid!$"

SilphCo_9F_Text_Grunt1Defeat::
# 73 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Ghaaah!$"

SilphCo_9F_Text_Grunt1PostBattle::
# 77 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "If I had started as a TRAINER at\n"
	.string "your age…$"

SilphCo_9F_Text_EdIntro::
# 82 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Your POKéMON have weak points!\n"
	.string "I can nail them!$"

SilphCo_9F_Text_EdDefeat::
# 87 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "You hammered me!$"

SilphCo_9F_Text_EdPostBattle::
# 91 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Exploiting weak spots does work.\n"
	.string "Think about type advantages.$"

SilphCo_9F_Text_Grunt2Intro::
# 96 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "I am one of the four ROCKET\n"
	.string "BROTHERS!$"

SilphCo_9F_Text_Grunt2Defeat::
# 101 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "Warg!\n"
	.string "Brothers, I lost!$"

SilphCo_9F_Text_Grunt2PostBattle::
# 106 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "My brothers will avenge me!$"

SilphCo_9F_Text_FloorSign::
# 110 "data/maps/SilphCo_9F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
	.string "9F$"
