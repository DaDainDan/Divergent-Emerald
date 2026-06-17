MtEmber_Exterior_Frlg_MapScripts::
# 2 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MtEmber_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MtEmber_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_MT_EMBER_EXTERIOR
# 4 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2
	goto_if_eq MtEmber_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MtEmber_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

MtEmber_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	call MtEmber_Exterior_EventScript_RocketsFaceDown
	goto MtEmber_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MtEmber_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 10 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
	goto_if_ge MtEmber_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
MtEmber_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

MtEmber_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 11 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setmetatile 42, 39, METATILE_MtEmber_CaveEntrance, 0
	goto MtEmber_Exterior_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1


MtEmber_Exterior_EventScript_RocketsFaceDown::
# 18 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT1, MOVEMENT_TYPE_FACE_DOWN
# 19 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT2, MOVEMENT_TYPE_FACE_DOWN
	return


MtEmber_Exterior_EventScript_Grunt1::
# 24 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	lock
# 25 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	checktrainerflag TRAINER_TEAM_ROCKET_GRUNT_43
	goto_if 1, MtEmber_Exterior_EventScript_Grunt1_2
# 28 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
	goto_if_eq MtEmber_Exterior_EventScript_Grunt1_3
# 40 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_WellTryDiggingHere
MtEmber_Exterior_EventScript_Grunt1_1:
	release_end

MtEmber_Exterior_EventScript_Grunt1_2:
# 26 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
	goto MtEmber_Exterior_EventScript_Grunt1_1

MtEmber_Exterior_EventScript_Grunt1_3:
# 29 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_FacePlayer
# 30 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 31 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 32 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1Intro
# 33 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_Text_Grunt1Defeat
# 34 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
# 35 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	checktrainerflag TRAINER_TEAM_ROCKET_GRUNT_44
	goto_if 1, MtEmber_Exterior_EventScript_Grunt1_7
	goto MtEmber_Exterior_EventScript_Grunt1_1

MtEmber_Exterior_EventScript_Grunt1_7:
# 36 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto MtEmber_Exterior_EventScript_DefeatedBothGrunts
	goto MtEmber_Exterior_EventScript_Grunt1_1


MtEmber_Exterior_EventScript_DefeatedBothGrunts::
# 46 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_WellRegroupDontStepInsideThere
# 47 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	closemessage
# 48 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 49 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_MT_EMBER_GRUNT1
# 50 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_MT_EMBER_GRUNT2
# 51 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	release_end


MtEmber_Exterior_EventScript_Grunt2::
# 56 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	lock_faceplayer
# 57 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	checktrainerflag TRAINER_TEAM_ROCKET_GRUNT_44
	goto_if 1, MtEmber_Exterior_EventScript_Grunt2_2
# 60 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
	goto_if_eq MtEmber_Exterior_EventScript_Grunt2_3
# 70 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_YoureInTheWayGetLost
# 71 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
MtEmber_Exterior_EventScript_Grunt2_1:
	release_end

MtEmber_Exterior_EventScript_Grunt2_2:
# 58 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
	goto MtEmber_Exterior_EventScript_Grunt2_1

MtEmber_Exterior_EventScript_Grunt2_3:
# 61 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 62 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2Intro
# 63 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_Text_Grunt2Defeat
# 64 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
# 65 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	checktrainerflag TRAINER_TEAM_ROCKET_GRUNT_43
	goto_if 1, MtEmber_Exterior_EventScript_Grunt2_7
	goto MtEmber_Exterior_EventScript_Grunt2_1

MtEmber_Exterior_EventScript_Grunt2_7:
# 66 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto MtEmber_Exterior_EventScript_DefeatedBothGrunts
	goto MtEmber_Exterior_EventScript_Grunt2_1


MtEmber_Exterior_EventScript_RocketPasswordScene::
# 77 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	lockall
# 78 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 79 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_PunchedThroughAtLast
# 80 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	message MtEmber_Exterior_Text_WhatsPasswordAgain
# 81 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmessage
# 82 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playse SE_PIN
# 83 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_QuestionMark
# 84 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 85 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitbuttonpress
# 86 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_FirstPasswordGoldeen
# 87 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_StepFasterDown
# 88 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 89 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playse SE_PIN
# 90 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_ExclamationMark
# 91 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 92 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_Delay48
# 93 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 94 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_StepFasterDown
# 95 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 96 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	call MtEmber_Exterior_EventScript_RocketsFaceDown
# 97 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_SnoopsBeenListeningIn
# 98 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2
# 99 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	releaseall
	end


MtEmber_Exterior_EventScript_Logan::
# 104 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_LOGAN, MtEmber_Exterior_Text_LoganIntro, MtEmber_Exterior_Text_LoganDefeat
# 105 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
	end


MtEmber_Exterior_EventScript_Beth::
# 110 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_BETH, MtEmber_Exterior_Text_BethIntro, MtEmber_Exterior_Text_BethDefeat
# 111 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_BethPostBattle, MSGBOX_AUTOCLOSE
	end


MtEmber_Exterior_EventScript_Jocelyn::
# 116 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CRUSH_GIRL_JOCELYN, MtEmber_Exterior_Text_JocelynIntro, MtEmber_Exterior_Text_JocelynDefeat
# 117 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end


Text_ExplosionTeach::
# 121 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Can you imagine?\n"
	.string "If this volcano were to erupt?\p"
	.string "The explosion would be the end of\n"
	.string "us. How terrifying is that?\p"
	.string "While we're terrified, would you\n"
	.string "like me to teach EXPLOSION?$"

Text_ExplosionDeclined::
# 132 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Yeah, you're right.\n"
	.string "It is too terrifying.$"

Text_ExplosionWhichMon::
# 137 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "You're terribly brave!\p"
	.string "Which POKéMON should I teach\n"
	.string "EXPLOSION?$"

Text_ExplosionTaught::
# 144 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Using EXPLOSION while on this\n"
	.string "volcano…\p"
	.string "What a terrifying thrill!$"

MtEmber_Exterior_Text_WellTryDiggingHere::
# 151 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Over here.\n"
	.string "We'll try digging here.\p"
	.string "That treasure the ADMINS've been\n"
	.string "talking about should be here.$"

MtEmber_Exterior_Text_YoureInTheWayGetLost::
# 159 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "What the…?\n"
	.string "You're in the way. Get lost.$"

MtEmber_Exterior_Text_PunchedThroughAtLast::
# 164 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Whew, punched through at last.\n"
	.string "Let's go treasure hunting!$"

MtEmber_Exterior_Text_WhatsPasswordAgain::
# 169 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Any treasure we find, we haul back\n"
	.string "to the WAREHOUSE, understood?\p"
	.string "…Oh, and what're the passwords?\n"
	.string "At the ROCKET WAREHOUSE, I mean.$"

MtEmber_Exterior_Text_FirstPasswordGoldeen::
# 177 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "What, you forgot the password?\n"
	.string "There're actually two.\p"
	.string "The first one's “GOLDEEN need\n"
	.string "log.”\p"
	.string "And the second one is…$"

MtEmber_Exterior_Text_SnoopsBeenListeningIn::
# 187 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Hey!\n"
	.string "This snoop's been listening in!$"

MtEmber_Exterior_Text_Grunt1Intro::
# 192 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "You've been eavesdropping on us,\n"
	.string "haven't you?$"

MtEmber_Exterior_Text_Grunt1Defeat::
# 197 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Huh, what?$"

MtEmber_Exterior_Text_Grunt1PostBattle::
# 201 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Why'd you have to win?$"

MtEmber_Exterior_Text_Grunt2Intro::
# 205 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Trying to horn in on our treasure?\n"
	.string "Don't bet on it!$"

MtEmber_Exterior_Text_Grunt2Defeat::
# 210 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Wait!\n"
	.string "But how?$"

MtEmber_Exterior_Text_Grunt2PostBattle::
# 215 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Develop amnesia conveniently and\n"
	.string "forget everything you heard!$"

MtEmber_Exterior_Text_WellRegroupDontStepInsideThere::
# 220 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "What a setback…\n"
	.string "We'll have to regroup.\p"
	.string "You! Don't even think about taking\n"
	.string "a step inside here!\p"
	.string "If you know what's good for you,\n"
	.string "don't even think about this!$"

MtEmber_Exterior_Text_LoganIntro::
# 231 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "An active volcano is one that's\n"
	.string "erupting, or about to.$"

MtEmber_Exterior_Text_LoganDefeat::
# 236 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Whew… That was hot!\n"
	.string "Sweat's erupting from me!$"

MtEmber_Exterior_Text_LoganPostBattle::
# 241 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "They say there're over 1,500\n"
	.string "active volcanoes in the world.\p"
	.string "Just thinking about them makes me\n"
	.string "feel all hot and gooey inside!$"

MtEmber_Exterior_Text_BethIntro::
# 249 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Do you know how caves form inside\n"
	.string "volcanoes?$"

MtEmber_Exterior_Text_BethDefeat::
# 254 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Atchah!\n"
	.string "You're shockingly good!$"

MtEmber_Exterior_Text_BethPostBattle::
# 259 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "When lava at the surface of magma\n"
	.string "hardens, and the magma inside flows\l"
	.string "out, caverns are left behind.$"

MtEmber_Exterior_Text_JocelynIntro::
# 265 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "I've been in training so I can mend\n"
	.string "my broken heart…\p"
	.string "It toughened me up physically at\n"
	.string "least! Hi-yah!$"

MtEmber_Exterior_Text_JocelynDefeat::
# 273 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "I think I tried to overdo it…$"

MtEmber_Exterior_Text_JocelynPostBattle::
# 277 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "The way you battle, it reminds me\n"
	.string "of the guy who dumped me…$"
