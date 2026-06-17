SilphCo_8F_Frlg_MapScripts::
# 2 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_8F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SilphCo_8F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_8F_DOOR, SilphCo_8F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
SilphCo_8F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

SilphCo_8F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	call EventScript_Close8FDoor
	goto SilphCo_8F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1


SilphCo_8F_EventScript_WorkerM::
# 11 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	lock_faceplayer
# 12 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_8F_EventScript_WorkerM_2
# 16 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_WonderIfSilphIsFinished
	release_end

SilphCo_8F_EventScript_WorkerM_2:
# 13 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_ThanksForSavingUs
	release_end


SilphCo_8F_EventScript_FloorSign::
# 21 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_8F_EventScript_Parker::
# 26 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_PARKER, SilphCo_8F_Text_ParkerIntro, SilphCo_8F_Text_ParkerDefeat
# 27 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_8F_EventScript_Grunt1::
# 32 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_32, SilphCo_8F_Text_Grunt1Intro, SilphCo_8F_Text_Grunt1Defeat
# 33 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_8F_EventScript_Grunt2::
# 38 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_36, SilphCo_8F_Text_Grunt2Intro, SilphCo_8F_Text_Grunt2Defeat
# 39 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	msgbox SilphCo_8F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_8F_Text_WonderIfSilphIsFinished::
# 43 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "I wonder if SILPH is finished…$"

SilphCo_8F_Text_ThanksForSavingUs::
# 47 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "Thanks for saving us!$"

SilphCo_8F_Text_Grunt1Intro::
# 51 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "That's as far as you'll go!$"

SilphCo_8F_Text_Grunt1Defeat::
# 55 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "Not enough grit!$"

SilphCo_8F_Text_Grunt1PostBattle::
# 59 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "If you don't turn back…\n"
	.string "I'll call for backup!$"

SilphCo_8F_Text_ParkerIntro::
# 64 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "You're causing us problems!$"

SilphCo_8F_Text_ParkerDefeat::
# 68 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "Huh?\n"
	.string "I lost?$"

SilphCo_8F_Text_ParkerPostBattle::
# 73 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "So, what do you think of SILPH\n"
	.string "BUILDING's maze?$"

SilphCo_8F_Text_Grunt2Intro::
# 78 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "I am one of the four ROCKET\n"
	.string "BROTHERS!$"

SilphCo_8F_Text_Grunt2Defeat::
# 83 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "Whoo!\n"
	.string "Oh, Brothers!$"

SilphCo_8F_Text_Grunt2PostBattle::
# 88 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "I'll leave you up to my brothers.$"

SilphCo_8F_Text_FloorSign::
# 92 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
	.string "8F$"

SilphCo_8F_Text_ToRocketBossMonsAreTools::
# 97 "data/maps/SilphCo_8F_Frlg/scripts.pory"
	.string "TEAM ROCKET's BOSS is terribly\n"
	.string "cruel!\p"
	.string "To him, POKéMON are just tools to\n"
	.string "be used.\p"
	.string "What will happen if that tyrant\n"
	.string "takes over our company…$"
