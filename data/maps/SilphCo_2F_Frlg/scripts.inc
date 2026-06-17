SilphCo_2F_Frlg_MapScripts::
# 2 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SilphCo_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_2F_DOOR_1, SilphCo_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
SilphCo_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_2F_DOOR_2, SilphCo_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5
SilphCo_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

SilphCo_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	call EventScript_Close2FDoor1
	goto SilphCo_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

SilphCo_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 7 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	call EventScript_Close2FDoor2
	goto SilphCo_2F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4


SilphCo_2F_EventScript_ThunderWaveTutor::
# 14 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	goto EventScript_ThunderWaveTutor
	end


SilphCo_2F_EventScript_FloorSign::
# 19 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_2F_EventScript_Connor::
# 24 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_CONNOR, SilphCo_2F_Text_ConnorIntro, SilphCo_2F_Text_ConnorDefeat
# 25 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_ConnorPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_2F_EventScript_Jerry::
# 30 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JERRY, SilphCo_2F_Text_JerryIntro, SilphCo_2F_Text_JerryDefeat
# 31 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_2F_EventScript_Grunt1::
# 36 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_23, SilphCo_2F_Text_Grunt1Intro, SilphCo_2F_Text_Grunt1Defeat
# 37 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_2F_EventScript_Grunt2::
# 42 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_24, SilphCo_2F_Text_Grunt2Intro, SilphCo_2F_Text_Grunt2Defeat
# 43 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	msgbox SilphCo_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_2F_Text_ConnorIntro::
# 47 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Help!\n"
	.string "I'm a SILPH employee.$"

SilphCo_2F_Text_ConnorDefeat::
# 52 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "How did you know\n"
	.string "I was a ROCKET?$"

SilphCo_2F_Text_ConnorPostBattle::
# 57 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "I work for both SILPH and TEAM\n"
	.string "ROCKET.$"

SilphCo_2F_Text_JerryIntro::
# 62 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "It's off-limits here!\n"
	.string "Go home!$"

SilphCo_2F_Text_JerryDefeat::
# 67 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "You're good.$"

SilphCo_2F_Text_JerryPostBattle::
# 71 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Can you solve the maze in here?\n"
	.string "It's not easy, I tell you!$"

SilphCo_2F_Text_Grunt1Intro::
# 76 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "No kids are allowed in here!$"

SilphCo_2F_Text_Grunt1Defeat::
# 80 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Tough!$"

SilphCo_2F_Text_Grunt1PostBattle::
# 84 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Diamond-shaped tiles are teleport\n"
	.string "blocks.\p"
	.string "They're transporters for this\n"
	.string "high-tech building.$"

SilphCo_2F_Text_Grunt2Intro::
# 92 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Hey, kid!\n"
	.string "What are you wandering here for?$"

SilphCo_2F_Text_Grunt2Defeat::
# 97 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "I goofed!$"

SilphCo_2F_Text_Grunt2PostBattle::
# 101 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "SILPH CO. will be associated with\n"
	.string "TEAM ROCKET!$"

Text_ThunderWaveTeach::
# 106 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Eeek!\n"
	.string "No! Stop! Help!\p"
	.string "Oh, you're not with TEAM ROCKET.\n"
	.string "I'm sorry, I thought…\p"
	.string "Will you forgive me if I teach\n"
	.string "you the THUNDER WAVE technique?$"

Text_ThunderWaveDeclined::
# 117 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Oh…\n"
	.string "But THUNDER WAVE is convenient…$"

Text_ThunderWaveWhichMon::
# 122 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "Which POKéMON should I teach\n"
	.string "THUNDER WAVE?$"

Text_ThunderWaveTaught::
# 127 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "THUNDER WAVE causes paralysis in\n"
	.string "the target POKéMON.\p"
	.string "A paralyzed POKéMON may be unable\n"
	.string "to move in battle.\p"
	.string "It's an ELECTRIC-type move, so it\n"
	.string "won't work on some POKéMON.$"

SilphCo_2F_Text_FloorSign::
# 138 "data/maps/SilphCo_2F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
	.string "2F$"
