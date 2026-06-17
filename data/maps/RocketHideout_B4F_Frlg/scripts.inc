RocketHideout_B4F_Frlg_MapScripts::
# 4 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RocketHideout_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

RocketHideout_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 6 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	checktrainerflag TRAINER_TEAM_ROCKET_GRUNT_16
	goto_if 1, RocketHideout_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
RocketHideout_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 9 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	checktrainerflag TRAINER_TEAM_ROCKET_GRUNT_17
	goto_if 1, RocketHideout_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5
RocketHideout_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 12 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_ne RocketHideout_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_8
RocketHideout_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_7:
	end

RocketHideout_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 7 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto RocketHideout_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

RocketHideout_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 10 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto RocketHideout_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4

RocketHideout_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 13 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 17, 12, METATILE_SilphCo_HideoutBarrier_TopLeft_Floor, 1
# 14 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 18, 12, METATILE_SilphCo_HideoutBarrier_TopRight_Floor, 1
# 15 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 17, 13, METATILE_SilphCo_HideoutBarrier_BottomLeft, 1
# 16 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 18, 13, METATILE_SilphCo_HideoutBarrier_BottomRight, 1
# 17 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 17, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 18 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 18, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
	goto RocketHideout_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_7


RocketHideout_B4F_EventScript_Giovanni::
# 25 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	lock_faceplayer
# 26 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 0
# 27 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	message RocketHideout_B4F_Text_GiovanniIntro
# 28 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	waitmessage
# 29 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 30 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	waitbuttonpress
# 31 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI, RocketHideout_B4F_Text_GiovanniDefeat
# 32 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	msgbox RocketHideout_B4F_Text_GiovanniPostBattle
# 33 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 34 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	closemessage
# 35 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	removeobject LOCALID_HIDEOUT_GIOVANNI
# 36 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	addobject LOCALID_SILPH_SCOPE
# 37 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SILPH_SCOPE
# 38 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setflag FLAG_HIDE_CELADON_ROCKETS
# 39 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 40 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
	release_end


RocketHideout_B4F_EventScript_SilphScope::
# 45 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	lock_faceplayer
# 46 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_SCOPE
	giveitem ITEM_SILPH_SCOPE
# 0 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RocketHideout_B4F_EventScript_SilphScope_2
RocketHideout_B4F_EventScript_SilphScope_1:
	release_end

RocketHideout_B4F_EventScript_SilphScope_2:
# 48 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto EventScript_BagIsFull
	goto RocketHideout_B4F_EventScript_SilphScope_1


RocketHideout_B4F_EventScript_Grunt1::
# 54 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_18, RocketHideout_B4F_Text_Grunt1Intro, RocketHideout_B4F_Text_Grunt1Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt1
# 55 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt1PostBattle
	release_end


RocketHideout_B4F_EventScript_DefeatedGrunt1::
# 60 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt1PostBattle
# 61 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	addobject LOCALID_LIFT_KEY
# 62 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_LIFT_KEY
	release_end


RocketHideout_B4F_EventScript_LiftKey::
# 67 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	lock_faceplayer
# 68 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setflag FLAG_CAN_USE_ROCKET_HIDEOUT_LIFT
# 69 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	removeobject LOCALID_LIFT_KEY
	giveitem ITEM_LIFT_KEY
# 0 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RocketHideout_B4F_EventScript_LiftKey_2
RocketHideout_B4F_EventScript_LiftKey_1:
	release_end

RocketHideout_B4F_EventScript_LiftKey_2:
# 71 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto EventScript_BagIsFull
	goto RocketHideout_B4F_EventScript_LiftKey_1


RocketHideout_B4F_EventScript_Grunt2::
# 77 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_Text_Grunt2Intro, RocketHideout_B4F_Text_Grunt2Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt
# 78 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B4F_EventScript_Grunt3::
# 83 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_Text_Grunt3Intro, RocketHideout_B4F_Text_Grunt3Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt
# 84 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


RocketHideout_B4F_EventScript_DefeatedGrunt::
# 89 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 90 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	checktrainerflag TRAINER_TEAM_ROCKET_GRUNT_16
	goto_if 1, RocketHideout_B4F_EventScript_DefeatedGrunt_2
RocketHideout_B4F_EventScript_DefeatedGrunt_1:
# 93 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	checktrainerflag TRAINER_TEAM_ROCKET_GRUNT_17
	goto_if 1, RocketHideout_B4F_EventScript_DefeatedGrunt_5
RocketHideout_B4F_EventScript_DefeatedGrunt_4:
# 96 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq RocketHideout_B4F_EventScript_DefeatedGrunt_8
RocketHideout_B4F_EventScript_DefeatedGrunt_7:
	release_end

RocketHideout_B4F_EventScript_DefeatedGrunt_2:
# 91 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto RocketHideout_B4F_EventScript_DefeatedGrunt_1

RocketHideout_B4F_EventScript_DefeatedGrunt_5:
# 94 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto RocketHideout_B4F_EventScript_DefeatedGrunt_4

RocketHideout_B4F_EventScript_DefeatedGrunt_8:
# 97 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 17, 12, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 98 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 18, 12, METATILE_SilphCo_HideoutFloor, 0
# 99 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 17, 13, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 100 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 18, 13, METATILE_SilphCo_HideoutFloor, 0
# 101 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 17, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 102 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 18, 14, METATILE_SilphCo_HideoutFloor, 0
# 103 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 104 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	special DrawWholeMapView
# 105 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	waitse
	goto RocketHideout_B4F_EventScript_DefeatedGrunt_7


RocketHideout_B4F_Text_GiovanniIntro::
# 110 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "So! I must say, I am impressed you\n"
	.string "got here.\p"
	.string "TEAM ROCKET captures POKéMON from\n"
	.string "around the world.\p"
	.string "They're important tools for keeping\n"
	.string "our criminal enterprise going.\p"
	.string "I am the leader, GIOVANNI!\p"
	.string "For your insolence, you will feel a\n"
	.string "world of pain!$"

RocketHideout_B4F_Text_GiovanniDefeat::
# 126 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "WHAT!\n"
	.string "This can't be!$"

RocketHideout_B4F_Text_GiovanniPostBattle::
# 131 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "I see that you raise POKéMON with\n"
	.string "utmost care.\p"
	.string "A child like you would never\n"
	.string "understand what I hope to achieve.\p"
	.string "I shall step aside this time!\p"
	.string "I hope we meet again…$"

RocketHideout_B4F_Text_Grunt2Intro::
# 143 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "I know you!\n"
	.string "You ruined our plans at MT. MOON!$"

RocketHideout_B4F_Text_Grunt2Defeat::
# 148 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "Burned again!$"

RocketHideout_B4F_Text_Grunt2PostBattle::
# 152 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "Do you have something against TEAM\n"
	.string "ROCKET?$"

RocketHideout_B4F_Text_Grunt3Intro::
# 157 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "How can you not see the beauty of\n"
	.string "our evil?$"

RocketHideout_B4F_Text_Grunt3Defeat::
# 162 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "Ayaya!$"

RocketHideout_B4F_Text_Grunt3PostBattle::
# 166 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "BOSS!\n"
	.string "I'm sorry I failed you!$"

RocketHideout_B4F_Text_Grunt1Intro::
# 171 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "The elevator doesn't work?\n"
	.string "Who has the LIFT KEY?$"

RocketHideout_B4F_Text_Grunt1Defeat::
# 176 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "No!$"

RocketHideout_B4F_Text_Grunt1PostBattle::
# 180 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "Oh, no!\n"
	.string "I dropped the LIFT KEY!$"
