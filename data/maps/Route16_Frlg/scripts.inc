Route16_Frlg_MapScripts::
# 2 "data/maps/Route16_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route16_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/Route16_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route16_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/Route16_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route16_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Route16_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Route16_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route16_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2
Route16_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

Route16_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Route16_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Route16_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

Route16_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/Route16_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE16, 1
	goto_if_eq Route16_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route16_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route16_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/Route16_Frlg/scripts.pory"
	setflag FLAG_SYS_ON_CYCLING_ROAD
	goto Route16_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route16_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 15 "data/maps/Route16_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ROUTE16, 1, Route16_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

Route16_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 16 "data/maps/Route16_Frlg/scripts.pory"
	special ForcePlayerOntoBike
	end


Route16_EventScript_Snorlax::
# 23 "data/maps/Route16_Frlg/scripts.pory"
	lock_faceplayer
# 24 "data/maps/Route16_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_POKE_FLUTE, Route16_EventScript_Snorlax_2
# 28 "data/maps/Route16_Frlg/scripts.pory"
	msgbox Text_WantToUsePokeFlute, MSGBOX_YESNO
# 29 "data/maps/Route16_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route16_EventScript_Snorlax_5
Route16_EventScript_Snorlax_4:
	release_end

Route16_EventScript_Snorlax_2:
# 25 "data/maps/Route16_Frlg/scripts.pory"
	msgbox Route16_Text_MonSprawledOutInSlumber
	release_end

Route16_EventScript_Snorlax_5:
# 30 "data/maps/Route16_Frlg/scripts.pory"
	call EventScript_AwakenSnorlax
# 31 "data/maps/Route16_Frlg/scripts.pory"
	setwildbattle SPECIES_SNORLAX, 30
# 32 "data/maps/Route16_Frlg/scripts.pory"
	waitse
# 33 "data/maps/Route16_Frlg/scripts.pory"
	playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
# 34 "data/maps/Route16_Frlg/scripts.pory"
	delay 40
# 35 "data/maps/Route16_Frlg/scripts.pory"
	waitmoncry
# 36 "data/maps/Route16_Frlg/scripts.pory"
	setflag FLAG_HIDE_ROUTE_16_SNORLAX
# 37 "data/maps/Route16_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 38 "data/maps/Route16_Frlg/scripts.pory"
	dowildbattle
# 39 "data/maps/Route16_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 40 "data/maps/Route16_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 41 "data/maps/Route16_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route16_EventScript_Snorlax_7
# 41 "data/maps/Route16_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq Route16_EventScript_Snorlax_7
# 41 "data/maps/Route16_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq Route16_EventScript_Snorlax_7
	goto Route16_EventScript_Snorlax_4

Route16_EventScript_Snorlax_7:
# 42 "data/maps/Route16_Frlg/scripts.pory"
	msgbox Text_SnorlaxReturnedToMountains
	goto Route16_EventScript_Snorlax_4


Route16_EventScript_CyclingRoadSign::
# 49 "data/maps/Route16_Frlg/scripts.pory"
	msgbox Route16_Text_CyclingRoadSign, MSGBOX_SIGN
	end


Route16_EventScript_RouteSign::
# 54 "data/maps/Route16_Frlg/scripts.pory"
	msgbox Route16_Text_RouteSign, MSGBOX_SIGN
	end


Route16_Text_LaoIntro::
# 58 "data/maps/Route16_Frlg/scripts.pory"
	.string "What do you want?$"

Route16_Text_LaoDefeat::
# 62 "data/maps/Route16_Frlg/scripts.pory"
	.string "Don't you dare laugh!$"

Route16_Text_LaoPostBattle::
# 66 "data/maps/Route16_Frlg/scripts.pory"
	.string "We like just hanging here.\n"
	.string "What's it to you?$"

Route16_Text_KojiIntro::
# 71 "data/maps/Route16_Frlg/scripts.pory"
	.string "Nice BIKE!\n"
	.string "Hand it over!$"

Route16_Text_KojiDefeat::
# 76 "data/maps/Route16_Frlg/scripts.pory"
	.string "Knockout!$"

Route16_Text_KojiPostBattle::
# 80 "data/maps/Route16_Frlg/scripts.pory"
	.string "Forget it, who needs your BIKE!$"

Route16_Text_LukeIntro::
# 84 "data/maps/Route16_Frlg/scripts.pory"
	.string "Come out and play, little mouse!$"

Route16_Text_LukeDefeat::
# 88 "data/maps/Route16_Frlg/scripts.pory"
	.string "You little rat!$"

Route16_Text_LukePostBattle::
# 92 "data/maps/Route16_Frlg/scripts.pory"
	.string "I hate losing!\n"
	.string "Get out of my face!$"

Route16_Text_HideoIntro::
# 97 "data/maps/Route16_Frlg/scripts.pory"
	.string "Hey, you just bumped me!$"

Route16_Text_HideoDefeat::
# 101 "data/maps/Route16_Frlg/scripts.pory"
	.string "Kaboom!$"

Route16_Text_HideoPostBattle::
# 105 "data/maps/Route16_Frlg/scripts.pory"
	.string "We'll always be hanging around here\n"
	.string "even if you don't like it.\p"
	.string "You can detour to VERMILION from\n"
	.string "FUCHSIA going along the coast.$"

Route16_Text_CamronIntro::
# 113 "data/maps/Route16_Frlg/scripts.pory"
	.string "I'm feeling hungry and mean!\n"
	.string "I need a punching bag!$"

Route16_Text_CamronDefeat::
# 118 "data/maps/Route16_Frlg/scripts.pory"
	.string "Bad, bad, bad!$"

Route16_Text_CamronPostBattle::
# 122 "data/maps/Route16_Frlg/scripts.pory"
	.string "If I'm going to have POKéMON, they\n"
	.string "may as well be ferocious.\p"
	.string "I'd use them to leave my enemies\n"
	.string "in tatters.$"

Route16_Text_RubenIntro::
# 130 "data/maps/Route16_Frlg/scripts.pory"
	.string "Hey, there!\n"
	.string "Let's have ourselves a good time!$"

Route16_Text_RubenDefeat::
# 135 "data/maps/Route16_Frlg/scripts.pory"
	.string "Don't make me mad!$"

Route16_Text_RubenPostBattle::
# 139 "data/maps/Route16_Frlg/scripts.pory"
	.string "I get my kicks by harassing people\n"
	.string "with my stinking POKéMON.\p"
	.string "They're great for startling people.\n"
	.string "And, they bite, too.$"

Route16_Text_MonSprawledOutInSlumber::
# 147 "data/maps/Route16_Frlg/scripts.pory"
	.string "A POKéMON is sprawled out in\n"
	.string "a deep and comfortable slumber.$"

Route16_Text_CyclingRoadSign::
# 152 "data/maps/Route16_Frlg/scripts.pory"
	.string "Enjoy the slope!\n"
	.string "CYCLING ROAD$"

Route16_Text_RouteSign::
# 157 "data/maps/Route16_Frlg/scripts.pory"
	.string "ROUTE 16\n"
	.string "CELADON CITY - FUCHSIA CITY$"

Route16_Text_JedIntro::
# 162 "data/maps/Route16_Frlg/scripts.pory"
	.string "{SPEAKER NAME_JED}Our love knows no bounds.\n"
	.string "We're in love and we show it!$"

Route16_Text_JedDefeat::
# 167 "data/maps/Route16_Frlg/scripts.pory"
	.string "{SPEAKER NAME_JED}Oh, no!\n"
	.string "My love has seen me as a loser!$"

Route16_Text_JedPostBattle::
# 172 "data/maps/Route16_Frlg/scripts.pory"
	.string "{SPEAKER NAME_JED}Listen, LEA.\n"
	.string "You need to focus less on me.$"

Route16_Text_JedNotEnoughMons::
# 177 "data/maps/Route16_Frlg/scripts.pory"
	.string "{SPEAKER NAME_JED}You have just one POKéMON?\n"
	.string "Is there no love in your heart?$"

Route16_Text_LeaIntro::
# 182 "data/maps/Route16_Frlg/scripts.pory"
	.string "{SPEAKER NAME_LEA}Sometimes, the intensity of\n"
	.string "our love scares me.$"

Route16_Text_LeaDefeat::
# 187 "data/maps/Route16_Frlg/scripts.pory"
	.string "{SPEAKER NAME_LEA}Ohh! But JED looks cool\n"
	.string "even in a loss!$"

Route16_Text_LeaPostBattle::
# 192 "data/maps/Route16_Frlg/scripts.pory"
	.string "{SPEAKER NAME_LEA}Ehehe, I'm sorry.\n"
	.string "JED is so cool.$"

Route16_Text_LeaNotEnoughMons::
# 197 "data/maps/Route16_Frlg/scripts.pory"
	.string "{SPEAKER NAME_LEA}Oh, you don't have two\n"
	.string "POKéMON with you?\p"
	.string "Doesn't it feel lonely for you or\n"
	.string "your POKéMON?$"
