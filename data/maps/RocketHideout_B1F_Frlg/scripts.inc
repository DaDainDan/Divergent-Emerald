RocketHideout_B1F_Frlg_MapScripts::
# 2 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RocketHideout_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
# 13 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RocketHideout_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RocketHideout_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	checktrainerflag TRAINER_TEAM_ROCKET_GRUNT_12
	goto_if 0, RocketHideout_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
RocketHideout_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

RocketHideout_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 19, METATILE_SilphCo_HideoutBarrier_TopLeft_Floor, 1
# 5 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 19, METATILE_SilphCo_HideoutBarrier_TopRight_Floor, 1
# 6 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 20, METATILE_SilphCo_HideoutBarrier_BottomLeft, 1
# 7 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 20, METATILE_SilphCo_HideoutBarrier_BottomRight, 1
# 8 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 21, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 9 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 21, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
	goto RocketHideout_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

RocketHideout_B1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 14 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROCKET_HIDEOUT_B1F
	end


RocketHideout_B1F_EventScript_Grunt1::
# 20 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_8, RocketHideout_B1F_Text_Grunt1Intro, RocketHideout_B1F_Text_Grunt1Defeat
# 21 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B1F_EventScript_Grunt2::
# 26 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_9, RocketHideout_B1F_Text_Grunt2Intro, RocketHideout_B1F_Text_Grunt2Defeat
# 27 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B1F_EventScript_Grunt3::
# 32 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_10, RocketHideout_B1F_Text_Grunt3Intro, RocketHideout_B1F_Text_Grunt3Defeat
# 33 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B1F_EventScript_Grunt4::
# 38 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_11, RocketHideout_B1F_Text_Grunt4Intro, RocketHideout_B1F_Text_Grunt4Defeat
# 39 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B1F_EventScript_Grunt5::
# 44 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_12, RocketHideout_B1F_Text_Grunt5Intro, RocketHideout_B1F_Text_Grunt5Defeat, RocketHideout_B1F_EventScript_DefeatedGrunt5
# 45 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	msgbox RocketHideout_B1F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B1F_EventScript_DefeatedGrunt5::
# 50 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 19, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 51 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 19, METATILE_SilphCo_HideoutFloor, 0
# 52 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 20, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 53 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 20, METATILE_SilphCo_HideoutFloor, 0
# 54 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 20, 21, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 55 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	setmetatile 21, 21, METATILE_SilphCo_HideoutFloor, 0
# 56 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 57 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 58 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	waitse
	release_end


RocketHideout_B1F_Text_Grunt1Intro::
# 62 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Who are you?\n"
	.string "How did you get here?$"

RocketHideout_B1F_Text_Grunt1Defeat::
# 67 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Oww!\n"
	.string "Beaten!$"

RocketHideout_B1F_Text_Grunt1PostBattle::
# 72 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Blast it… You're dissing TEAM\n"
	.string "ROCKET, aren't you?$"

RocketHideout_B1F_Text_Grunt2Intro::
# 77 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "You broke into TEAM ROCKET's\n"
	.string "operation? What nerve!$"

RocketHideout_B1F_Text_Grunt2Defeat::
# 82 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Boom!$"

RocketHideout_B1F_Text_Grunt2PostBattle::
# 86 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "You're not going to get away with\n"
	.string "this, brat!$"

RocketHideout_B1F_Text_Grunt3Intro::
# 91 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Intruder alert!$"

RocketHideout_B1F_Text_Grunt3Defeat::
# 95 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "I can't do it!$"

RocketHideout_B1F_Text_Grunt3PostBattle::
# 99 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "SILPH SCOPE? Humph!\n"
	.string "I don't know where it is.$"

RocketHideout_B1F_Text_Grunt4Intro::
# 104 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Why did you come here?$"

RocketHideout_B1F_Text_Grunt4Defeat::
# 108 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "This won't do!$"

RocketHideout_B1F_Text_Grunt4PostBattle::
# 112 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Okay, I'll talk…\n"
	.string "Take the elevator to see my BOSS.$"

RocketHideout_B1F_Text_Grunt5Intro::
# 117 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Are you lost, you little mouse?$"

RocketHideout_B1F_Text_Grunt5Defeat::
# 121 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Why…?$"

RocketHideout_B1F_Text_Grunt5PostBattle::
# 125 "data/maps/RocketHideout_B1F_Frlg/scripts.pory"
	.string "Uh-oh, that ruckus somehow opened\n"
	.string "the door!$"
