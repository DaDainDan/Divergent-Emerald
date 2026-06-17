SilphCo_10F_Frlg_MapScripts::
# 2 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_10F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SilphCo_10F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_10F_DOOR, SilphCo_10F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
SilphCo_10F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

SilphCo_10F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	call EventScript_Close10FDoor
	goto SilphCo_10F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1


SilphCo_10F_EventScript_WorkerF::
# 11 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	lock_faceplayer
# 12 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_10F_EventScript_WorkerF_2
# 16 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_WaaaImScared
	release_end

SilphCo_10F_EventScript_WorkerF_2:
# 13 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_KeepMeCryingASecret
	release_end


SilphCo_10F_EventScript_FloorSign::
# 21 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_10F_EventScript_Travis::
# 26 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_TRAVIS, SilphCo_10F_Text_TravisIntro, SilphCo_10F_Text_TravisDefeat
# 27 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_10F_EventScript_Grunt::
# 32 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_39, SilphCo_10F_Text_GruntIntro, SilphCo_10F_Text_GruntDefeat
# 33 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	msgbox SilphCo_10F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_10F_Text_GruntIntro::
# 37 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Welcome to 10F!\n"
	.string "So good of you to join me!$"

SilphCo_10F_Text_GruntDefeat::
# 42 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "I'm stunned!$"

SilphCo_10F_Text_GruntPostBattle::
# 46 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Nice try, but the boardroom is up\n"
	.string "one more floor.$"

SilphCo_10F_Text_TravisIntro::
# 51 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Enough of your silly games!$"

SilphCo_10F_Text_TravisDefeat::
# 55 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "No continues left!$"

SilphCo_10F_Text_TravisPostBattle::
# 59 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Are you satisfied with beating me?\n"
	.string "Then go on home!$"

SilphCo_10F_Text_WaaaImScared::
# 64 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "Waaaaa!\n"
	.string "I'm scared!$"

SilphCo_10F_Text_KeepMeCryingASecret::
# 69 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "About me crying…\n"
	.string "Please keep it a secret.$"

SilphCo_10F_Text_FloorSign::
# 74 "data/maps/SilphCo_10F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
	.string "10F$"
