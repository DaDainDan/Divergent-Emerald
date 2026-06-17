SilphCo_3F_Frlg_MapScripts::
# 2 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SilphCo_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_3F_DOOR_1, SilphCo_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
SilphCo_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_3F_DOOR_2, SilphCo_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5
SilphCo_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

SilphCo_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	call EventScript_Close3FDoor1
	goto SilphCo_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

SilphCo_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 7 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	call EventScript_Close3FDoor2
	goto SilphCo_3F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4


SilphCo_3F_EventScript_WorkerM::
# 14 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	lock_faceplayer
# 15 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_3F_EventScript_WorkerM_2
# 19 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	msgbox SilphCo_3F_Text_WhatAmIToDo
	release_end

SilphCo_3F_EventScript_WorkerM_2:
# 16 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	msgbox SilphCo_3F_Text_YouAndYourMonsSavedUs
	release_end


SilphCo_3F_EventScript_FloorSign::
# 24 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	msgbox SilphCo_3F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_3F_EventScript_Jose::
# 29 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JOSE, SilphCo_3F_Text_JoseIntro, SilphCo_3F_Text_JoseDefeat
# 30 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	msgbox SilphCo_3F_Text_JosePostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_3F_EventScript_Grunt::
# 35 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_25, SilphCo_3F_Text_GruntIntro, SilphCo_3F_Text_GruntDefeat
# 36 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	msgbox SilphCo_3F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_3F_Text_WhatAmIToDo::
# 40 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "I work for SILPH CO.\n"
	.string "What am I to do?$"

SilphCo_3F_Text_YouAndYourMonsSavedUs::
# 45 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "{PLAYER}!\n"
	.string "You and your POKéMON saved us!$"

SilphCo_3F_Text_GruntIntro::
# 50 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "Quit messing with us, kid!$"

SilphCo_3F_Text_GruntDefeat::
# 54 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "I give up!$"

SilphCo_3F_Text_GruntPostBattle::
# 58 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "A hint? You can open doors with\n"
	.string "a CARD KEY!$"

SilphCo_3F_Text_JoseIntro::
# 63 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "I support TEAM ROCKET more than\n"
	.string "I support SILPH CO.!$"

SilphCo_3F_Text_JoseDefeat::
# 68 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "You really got me!$"

SilphCo_3F_Text_JosePostBattle::
# 72 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "Humph…\p"
	.string "TEAM ROCKET said that if I helped\n"
	.string "them, they'd let me study POKéMON.$"

SilphCo_3F_Text_FloorSign::
# 79 "data/maps/SilphCo_3F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
	.string "3F$"
