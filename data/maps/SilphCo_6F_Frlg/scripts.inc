SilphCo_6F_Frlg_MapScripts::
# 2 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_6F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SilphCo_6F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_6F_DOOR, SilphCo_6F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
SilphCo_6F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

SilphCo_6F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	call EventScript_Close6FDoor
	goto SilphCo_6F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1


SilphCo_6F_EventScript_WorkerM2::
# 11 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	lock_faceplayer
# 12 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_6F_EventScript_WorkerM2_2
# 16 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_TargetedSilphForOurMonProducts
	release_end

SilphCo_6F_EventScript_WorkerM2_2:
# 13 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_ComeWorkForSilphWhenYoureOlder
	release_end


SilphCo_6F_EventScript_WorkerM3::
# 21 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	lock_faceplayer
# 22 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_6F_EventScript_WorkerM3_2
# 26 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_RocketsTookOverBuilding
	release_end

SilphCo_6F_EventScript_WorkerM3_2:
# 23 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_BetterGetBackToWork
	release_end


SilphCo_6F_EventScript_WorkerM1::
# 31 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	lock_faceplayer
# 32 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_6F_EventScript_WorkerM1_2
# 36 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_HelpMePlease
	release_end

SilphCo_6F_EventScript_WorkerM1_2:
# 33 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_WeGotEngaged
	release_end


SilphCo_6F_EventScript_WorkerF1::
# 41 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	lock_faceplayer
# 42 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_6F_EventScript_WorkerF1_2
# 46 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_ThatManIsSuchACoward
	release_end

SilphCo_6F_EventScript_WorkerF1_2:
# 43 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_NeedsMeToLookAfterHim
	release_end


SilphCo_6F_EventScript_WorkerF2::
# 51 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	lock_faceplayer
# 52 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_6F_EventScript_WorkerF2_2
# 56 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_RocketsTryingToConquerWorld
	release_end

SilphCo_6F_EventScript_WorkerF2_2:
# 53 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_RocketsRanAwayBecauseOfYou
	release_end


SilphCo_6F_EventScript_FloorSign::
# 61 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_6F_EventScript_Taylor::
# 66 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_TAYLOR, SilphCo_6F_Text_TaylorIntro, SilphCo_6F_Text_TaylorDefeat
# 67 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_6F_EventScript_Grunt1::
# 72 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_30, SilphCo_6F_Text_Grunt1Intro, SilphCo_6F_Text_Grunt1Defeat
# 73 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_6F_EventScript_Grunt2::
# 78 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_31, SilphCo_6F_Text_Grunt2Intro, SilphCo_6F_Text_Grunt2Defeat
# 79 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_6F_Text_RocketsTookOverBuilding::
# 83 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "The ROCKETS came and took over\n"
	.string "the building!$"

SilphCo_6F_Text_BetterGetBackToWork::
# 88 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Well, better get back to work.$"

SilphCo_6F_Text_HelpMePlease::
# 92 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Oh dear, oh dear.\n"
	.string "Help me, please!$"

SilphCo_6F_Text_WeGotEngaged::
# 97 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "We got engaged.\n"
	.string "Heheh!$"

SilphCo_6F_Text_ThatManIsSuchACoward::
# 102 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "That man next to me…\n"
	.string "He's such a coward!$"

SilphCo_6F_Text_NeedsMeToLookAfterHim::
# 107 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "He's so helpless, he needed\n"
	.string "someone like me to look after him.$"

SilphCo_6F_Text_RocketsTryingToConquerWorld::
# 112 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "TEAM ROCKET is trying to conquer\n"
	.string "the world with POKéMON.$"

SilphCo_6F_Text_RocketsRanAwayBecauseOfYou::
# 117 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "TEAM ROCKET ran away, and it's all\n"
	.string "because of you!$"

SilphCo_6F_Text_TargetedSilphForOurMonProducts::
# 122 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "They must have targeted SILPH for\n"
	.string "our POKéMON products.$"

SilphCo_6F_Text_ComeWorkForSilphWhenYoureOlder::
# 127 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Come work for SILPH when you\n"
	.string "get older.$"

SilphCo_6F_Text_Grunt1Intro::
# 132 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "I am one of the four ROCKET\n"
	.string "BROTHERS!$"

SilphCo_6F_Text_Grunt1Defeat::
# 137 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Flame out!$"

SilphCo_6F_Text_Grunt1PostBattle::
# 141 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "No matter!\n"
	.string "My brothers will avenge me!$"

SilphCo_6F_Text_TaylorIntro::
# 146 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "That rotten PRESIDENT!\p"
	.string "Serves him right for shipping me\n"
	.string "off to the TIKSI BRANCH!\p"
	.string "That's why TEAM ROCKET came after\n"
	.string "us, I'm sure of it!$"

SilphCo_6F_Text_TaylorDefeat::
# 156 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Shoot!$"

SilphCo_6F_Text_TaylorPostBattle::
# 160 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "TIKSI BRANCH?\n"
	.string "It's in Russian no-man's-land!$"

SilphCo_6F_Text_Grunt2Intro::
# 165 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "You dare betray TEAM ROCKET?$"

SilphCo_6F_Text_Grunt2Defeat::
# 169 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "You traitor!$"

SilphCo_6F_Text_Grunt2PostBattle::
# 173 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "If you stand for justice, you\n"
	.string "betray us bad guys!$"

SilphCo_6F_Text_FloorSign::
# 178 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
	.string "6F$"
