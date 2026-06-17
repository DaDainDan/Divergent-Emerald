FiveIsland_RocketWarehouse_Frlg_MapScripts::
# 5 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_RocketWarehouse_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
# 11 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_RocketWarehouse_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FiveIsland_RocketWarehouse_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 6 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	checktrainerflag TRAINER_TEAM_ROCKET_ADMIN
	goto_if 1, FiveIsland_RocketWarehouse_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
FiveIsland_RocketWarehouse_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

FiveIsland_RocketWarehouse_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 7 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
	goto FiveIsland_RocketWarehouse_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

FiveIsland_RocketWarehouse_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND_ROCKET_WAREHOUSE
	end


FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry::
# 18 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setmetatile 26, 20, METATILE_SilphCo_Arrow_Up, 0
# 19 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setmetatile 27, 20, METATILE_SilphCo_Arrow_Up, 0
	return


FiveIsland_RocketWarehouse_EventScript_Cage::
# 24 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	lockall
# 25 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FiveIsland_RocketWarehouse_EventScript_Cage_2
# 28 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_ManyMonsLockedInPen
FiveIsland_RocketWarehouse_EventScript_Cage_1:
# 30 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	releaseall
	end

FiveIsland_RocketWarehouse_EventScript_Cage_2:
# 26 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_PenUnlockedMonsFled
	goto FiveIsland_RocketWarehouse_EventScript_Cage_1


FiveIsland_RocketWarehouse_EventScript_Computer::
# 35 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_ReportWithGraphsAndText, MSGBOX_SIGN
	end


FiveIsland_RocketWarehouse_EventScript_Admin2Trigger::
# 40 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	lockall
# 41 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN2, Common_Movement_StepFasterLeft
# 42 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 43 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
# 44 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	releaseall
	end


FiveIsland_RocketWarehouse_EventScript_Gideon::
# 49 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_GIDEON, FiveIsland_RocketWarehouse_Text_GideonIntro, FiveIsland_RocketWarehouse_Text_GideonDefeat, FiveIsland_RocketWarehouse_EventScript_DefeatedGideon
# 50 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, FiveIsland_RocketWarehouse_EventScript_Gideon_2
# 55 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe, MSGBOX_AUTOCLOSE
	end

FiveIsland_RocketWarehouse_EventScript_Gideon_2:
# 51 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 5
# 52 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GiovannisKidHasRedHair, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_DefeatedGideon::
# 60 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GideonPostBattle
# 61 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setflag FLAG_RECOVERED_SAPPHIRE
# 62 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	giveitem ITEM_SAPPHIRE
	release_end


FiveIsland_RocketWarehouse_EventScript_Grunt2::
# 67 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_47, FiveIsland_RocketWarehouse_Text_Grunt2Intro, FiveIsland_RocketWarehouse_Text_Grunt2Defeat
# 68 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_Grunt3::
# 73 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_48, FiveIsland_RocketWarehouse_Text_Grunt3Intro, FiveIsland_RocketWarehouse_Text_Grunt3Defeat
# 74 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_Admin2::
# 79 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN_2, FiveIsland_RocketWarehouse_Text_Admin2Intro, FiveIsland_RocketWarehouse_Text_Admin2Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2
# 80 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2::
# 85 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 86 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare VAR_0x8004, 24
	goto_if_le FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2_2
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2_1:
# 90 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle
# 91 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	closemessage
# 92 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 93 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_GRUNT2
# 94 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_GRUNT3
# 95 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_ADMIN2
# 96 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	removeobject LOCALID_WAREHOUSE_ADMIN1
# 97 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setflag FLAG_HIDE_FIVE_ISLAND_ROCKETS
# 98 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 99 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
# 100 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE
	release_end

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2_2:
# 87 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 88 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2_1


FiveIsland_RocketWarehouse_EventScript_Grunt1::
# 105 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_42, FiveIsland_RocketWarehouse_Text_Grunt1Intro, FiveIsland_RocketWarehouse_Text_Grunt1Defeat
# 106 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_Admin1::
# 111 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_Text_Admin1Intro, FiveIsland_RocketWarehouse_Text_Admin1Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1
# 112 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough, MSGBOX_AUTOCLOSE
	end


FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1::
# 117 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 0 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare VAR_RESULT, DIR_NORTH
	goto_if_eq FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_3
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_1:
# 122 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin1PostBattle
# 123 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	closemessage
# 124 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	switch VAR_0x8004
# 126 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	case 25, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_9
# 127 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	case 26, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_10
# 128 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	case 27, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_10
# 125 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_Movement_0
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_6:
# 130 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 131 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	playse SE_PIN
# 132 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
# 133 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	special DrawWholeMapView
# 134 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitse
# 135 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare VAR_0x8004, 27
	goto_if_le FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_12
# 138 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_StepFasterDown
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_11:
# 140 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
# 141 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough
	release_end

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_2:
# 119 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 120 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	waitmovement 0
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_1

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_3:
# 118 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	compare VAR_0x8004, 27
	goto_if_ne FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_2
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_1

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_9:
# 126 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_Movement_1
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_6

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_10:
# 128 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_StepFasterUp
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_6

FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_12:
# 136 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	applymovement LOCALID_WAREHOUSE_ADMIN1, Common_Movement_StepFasterLeft
	goto FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_11


# 125 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_Movement_0:
# 125 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_right
# 125 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_right
# 125 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	step_faster_up
	step_end

# 126 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1_Movement_1:
# 126 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	walk_right
# 126 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	step_faster_up
	step_end

FiveIsland_RocketWarehouse_Text_ManyMonsLockedInPen::
# 145 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "There are many POKéMON locked\n"
	.string "away in the pen…$"

FiveIsland_RocketWarehouse_Text_PenUnlockedMonsFled::
# 150 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "The pen door is unlocked.\n"
	.string "The POKéMON appear to have fled.$"

FiveIsland_RocketWarehouse_Text_Grunt2Intro::
# 155 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Did you come here knowing it's\n"
	.string "TEAM ROCKET's WAREHOUSE?$"

FiveIsland_RocketWarehouse_Text_Grunt2Defeat::
# 160 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "What do you think you're doing?!$"

FiveIsland_RocketWarehouse_Text_Grunt2PostBattle::
# 164 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "TEAM ROCKET broke up?\n"
	.string "What planet are you from?$"

FiveIsland_RocketWarehouse_Text_Grunt1Intro::
# 169 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Oh, now your POKéMON look strong.\n"
	.string "You're willing to sell them?\p"
	.string "Oh?\n"
	.string "You wanted to battle?$"

FiveIsland_RocketWarehouse_Text_Grunt1Defeat::
# 177 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Oh, but…\n"
	.string "Too much!$"

FiveIsland_RocketWarehouse_Text_Grunt1PostBattle::
# 182 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "We can give you a great price.\n"
	.string "Sell us your POKéMON!$"

FiveIsland_RocketWarehouse_Text_Grunt3Intro::
# 187 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I got word about you from the\n"
	.string "others.\p"
	.string "But there's no way a kid like you'd\n"
	.string "know our BOSS GIOVANNI!$"

FiveIsland_RocketWarehouse_Text_Grunt3Defeat::
# 195 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Don't…you…dare…laugh…$"

FiveIsland_RocketWarehouse_Text_Grunt3PostBattle::
# 199 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Don't mess in the doings of adults,\n"
	.string "you jumped-up pip-squeak!$"

FiveIsland_RocketWarehouse_Text_Admin1Intro::
# 204 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I don't know or care if what I'm\n"
	.string "doing is right or wrong…\p"
	.string "I just put my faith in GIOVANNI\n"
	.string "and do as I am told.$"

FiveIsland_RocketWarehouse_Text_Admin1Defeat::
# 212 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I…\n"
	.string "I'm shattered…$"

FiveIsland_RocketWarehouse_Text_Admin1PostBattle::
# 217 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "You're doing things according to\n"
	.string "your beliefs and morals.\p"
	.string "I understand now…$"

FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough::
# 224 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I've made it so you can come back\n"
	.string "in through there.\p"
	.string "Why don't you go get rested and\n"
	.string "refreshed for what lies ahead?\p"
	.string "The ADMIN after me outranks me\n"
	.string "thoroughly as a TRAINER.\p"
	.string "You'd better steel yourself for one\n"
	.string "harsh challenge.$"

FiveIsland_RocketWarehouse_Text_Admin2Intro::
# 238 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "That's quite enough of you \n"
	.string "playing the hero, kid.\p"
	.string "Spreading lies about how TEAM\n"
	.string "ROCKET has disbanded…\p"
	.string "It's such an obvious attempt to\n"
	.string "cause confusion in our ranks.\p"
	.string "Fortunately, we're not so ignorant\n"
	.string "to fall for the lies of a child!\p"
	.string "And now, I'll show you how scary\n"
	.string "an angry adult can be!$"

FiveIsland_RocketWarehouse_Text_Admin2Defeat::
# 255 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Urgh…\n"
	.string "You were too strong…\p"
	.string "…\n"
	.string "Th-that's GIOVANNI's BADGE!\p"
	.string "So it's true?\n"
	.string "TEAM ROCKET really has disbanded?$"

FiveIsland_RocketWarehouse_Text_Admin2PostBattle::
# 266 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "We will abandon this WAREHOUSE…\p"
	.string "But don't think this is over.\n"
	.string "I won't let this be the end.\p"
	.string "I will find GIOVANNI.\n"
	.string "And I will resurrect TEAM ROCKET!\l"
	.string "I will…\p"
	.string "Until then, farewell!$"

FiveIsland_RocketWarehouse_Text_ReportWithGraphsAndText::
# 279 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "A report with graphs and text is on\n"
	.string "the PC monitor.\p"
	.string "“The Influence of Magnetic Waves\n"
	.string "on POKéMON Evolution”…\p"
	.string "… … … … … …\p"
	.string "It's too difficult to understand…$"

FiveIsland_RocketWarehouse_Text_GideonIntro::
# 291 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "I almost managed to sell the\n"
	.string "SAPPHIRE for huge money…\p"
	.string "Then, you just had to come along\n"
	.string "and blow the whole deal apart!\p"
	.string "Fufu… Fufufufu…\n"
	.string "There's no forgiveness for you!$"

FiveIsland_RocketWarehouse_Text_GideonDefeat::
# 302 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "Gah! Darn!\n"
	.string "Darn! Darn!$"

FiveIsland_RocketWarehouse_Text_GideonPostBattle::
# 307 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "If I can't sell it, it's worthless!\n"
	.string "Go ahead, take it!$"

FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe::
# 312 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "What do you want now?\n"
	.string "Go on, get lost, leave me be.$"

FiveIsland_RocketWarehouse_Text_GiovannisKidHasRedHair::
# 317 "data/maps/FiveIsland_RocketWarehouse_Frlg/scripts.pory"
	.string "What, you again?\p"
	.string "You… You're not GIOVANNI's kid,\n"
	.string "are you?\p"
	.string "No, that can't be right!\n"
	.string "GIOVANNI's kid has red hair.\p"
	.string "You don't have any reasons for\n"
	.string "bugging me. Leave me alone!$"
