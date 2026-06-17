Route20_Frlg_MapScripts::
# 2 "data/maps/Route20_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route20_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route20_Frlg/scripts.pory"
	goto_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, Route20_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route20_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/Route20_Frlg/scripts.pory"
	goto_if_unset FLAG_STOPPED_SEAFOAM_B4F_CURRENT, Route20_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route20_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

Route20_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_1
# 5 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_2
# 6 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_1
# 7 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_2
# 8 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_1
# 9 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_2
# 10 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_1
# 11 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_2
	goto Route20_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route20_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 14 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_3
# 15 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_4
# 16 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_5
# 17 "data/maps/Route20_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_6
# 18 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_1
# 19 "data/maps/Route20_Frlg/scripts.pory"
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_2
	goto Route20_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


Route20_EventScript_SeafoamIslandsSign::
# 26 "data/maps/Route20_Frlg/scripts.pory"
	msgbox Route20_Text_SeafoamIslands, MSGBOX_SIGN
	end


Route20_Text_BarryIntro::
# 30 "data/maps/Route20_Frlg/scripts.pory"
	.string "The water is shallow here.\n"
	.string "There are many people swimming.$"

Route20_Text_BarryDefeat::
# 35 "data/maps/Route20_Frlg/scripts.pory"
	.string "Splash!$"

Route20_Text_BarryPostBattle::
# 39 "data/maps/Route20_Frlg/scripts.pory"
	.string "I wish I could ride my POKéMON.\n"
	.string "I bet you're not tired.$"

Route20_Text_ShirleyIntro::
# 44 "data/maps/Route20_Frlg/scripts.pory"
	.string "SEAFOAM is a quiet getaway.\n"
	.string "I'm vacationing here.$"

Route20_Text_ShirleyDefeat::
# 49 "data/maps/Route20_Frlg/scripts.pory"
	.string "Quit it!$"

Route20_Text_ShirleyPostBattle::
# 53 "data/maps/Route20_Frlg/scripts.pory"
	.string "There's a huge cavern underneath\n"
	.string "this island.$"

Route20_Text_TiffanyIntro::
# 58 "data/maps/Route20_Frlg/scripts.pory"
	.string "I love floating with the fishes\n"
	.string "here among the waves.$"

Route20_Text_TiffanyDefeat::
# 63 "data/maps/Route20_Frlg/scripts.pory"
	.string "Yowch!$"

Route20_Text_TiffanyPostBattle::
# 67 "data/maps/Route20_Frlg/scripts.pory"
	.string "Want to float with me?$"

Route20_Text_IreneIntro::
# 71 "data/maps/Route20_Frlg/scripts.pory"
	.string "Are you on vacation, too?$"

Route20_Text_IreneDefeat::
# 75 "data/maps/Route20_Frlg/scripts.pory"
	.string "No mercy at all!$"

Route20_Text_IrenePostBattle::
# 79 "data/maps/Route20_Frlg/scripts.pory"
	.string "SEAFOAM used to be a single island\n"
	.string "in the distant past.$"

Route20_Text_DeanIntro::
# 84 "data/maps/Route20_Frlg/scripts.pory"
	.string "Check out my buff physique!$"

Route20_Text_DeanDefeat::
# 88 "data/maps/Route20_Frlg/scripts.pory"
	.string "Wimpy!$"

Route20_Text_DeanPostBattle::
# 92 "data/maps/Route20_Frlg/scripts.pory"
	.string "I should've been buffing up my\n"
	.string "POKéMON, not me!$"

Route20_Text_DarrinIntro::
# 97 "data/maps/Route20_Frlg/scripts.pory"
	.string "Why are you riding a POKéMON?\n"
	.string "Can't you swim?$"

Route20_Text_DarrinDefeat::
# 102 "data/maps/Route20_Frlg/scripts.pory"
	.string "Ouch!\n"
	.string "Torpedoed!$"

Route20_Text_DarrinPostBattle::
# 107 "data/maps/Route20_Frlg/scripts.pory"
	.string "Riding a POKéMON sure looks fun!$"

Route20_Text_RogerIntro::
# 111 "data/maps/Route20_Frlg/scripts.pory"
	.string "I rode my bird POKéMON here.$"

Route20_Text_RogerDefeat::
# 115 "data/maps/Route20_Frlg/scripts.pory"
	.string "Oh, no!\n"
	.string "Now what am I to do?$"

Route20_Text_RogerPostBattle::
# 120 "data/maps/Route20_Frlg/scripts.pory"
	.string "My birds are exhausted.\n"
	.string "They can't FLY me back!$"

Route20_Text_NoraIntro::
# 125 "data/maps/Route20_Frlg/scripts.pory"
	.string "My boyfriend gave me big pearls.$"

Route20_Text_NoraDefeat::
# 129 "data/maps/Route20_Frlg/scripts.pory"
	.string "Oh, no!\n"
	.string "My pearls were in them!$"

Route20_Text_NoraPostBattle::
# 134 "data/maps/Route20_Frlg/scripts.pory"
	.string "Will my pearls grow bigger inside\n"
	.string "CLOYSTER?$"

Route20_Text_MissyIntro::
# 139 "data/maps/Route20_Frlg/scripts.pory"
	.string "I swam here from CINNABAR ISLAND.\n"
	.string "It wasn't easy, I tell you.$"

Route20_Text_MissyDefeat::
# 144 "data/maps/Route20_Frlg/scripts.pory"
	.string "I'm so disappointed!$"

Route20_Text_MissyPostBattle::
# 148 "data/maps/Route20_Frlg/scripts.pory"
	.string "POKéMON have taken over an\n"
	.string "abandoned mansion on CINNABAR.\p"
	.string "They call it the POKéMON MANSION\n"
	.string "now.$"

Route20_Text_MelissaIntro::
# 156 "data/maps/Route20_Frlg/scripts.pory"
	.string "CINNABAR, in the west, has a LAB\n"
	.string "for POKéMON.\p"
	.string "My daddy works there.$"

Route20_Text_MelissaDefeat::
# 163 "data/maps/Route20_Frlg/scripts.pory"
	.string "Wait!\n"
	.string "You're supposed to wait!$"

Route20_Text_MelissaPostBattle::
# 168 "data/maps/Route20_Frlg/scripts.pory"
	.string "CINNABAR is a volcanic island.\p"
	.string "I heard it rose out of the sea\n"
	.string "when a volcano erupted.$"

Route20_Text_SeafoamIslands::
# 175 "data/maps/Route20_Frlg/scripts.pory"
	.string "SEAFOAM ISLANDS$"

Route20_Text_MistyTrainsHere::
# 179 "data/maps/Route20_Frlg/scripts.pory"
	.string "Strong TRAINERS and WATER POKéMON\n"
	.string "are common sights in these parts.\p"
	.string "They say that MISTY of the\n"
	.string "CERULEAN GYM trains here.$"
