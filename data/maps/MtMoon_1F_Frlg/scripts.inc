MtMoon_1F_Frlg_MapScripts::
# 2 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MtMoon_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_MT_MOON_1F
	end


MtMoon_1F_EventScript_ZubatSign::
# 9 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_ZubatIsABloodsucker, MSGBOX_SIGN
	end


MtMoon_1F_EventScript_Marcos::
# 14 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_HIKER_MARCOS, MtMoon_1F_Text_MarcosIntro, MtMoon_1F_Text_MarcosDefeat
# 15 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Josh::
# 20 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOSH, MtMoon_1F_Text_JoshIntro, MtMoon_1F_Text_JoshDefeat
# 21 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Miriam::
# 26 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_MIRIAM, MtMoon_1F_Text_MiriamIntro, MtMoon_1F_Text_MiriamDefeat
# 27 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_MiriamPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Iris::
# 32 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_IRIS, MtMoon_1F_Text_IrisIntro, MtMoon_1F_Text_IrisDefeat
# 33 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_IrisPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Jovan::
# 38 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_JOVAN, MtMoon_1F_Text_JovanIntro, MtMoon_1F_Text_JovanDefeat
# 39 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_JovanPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Kent::
# 44 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_KENT, MtMoon_1F_Text_KentIntro, MtMoon_1F_Text_KentDefeat
# 45 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_KentPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_EventScript_Robby::
# 50 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ROBBY, MtMoon_1F_Text_RobbyIntro, MtMoon_1F_Text_RobbyDefeat
# 51 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	msgbox MtMoon_1F_Text_RobbyPostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_1F_Text_MarcosIntro::
# 55 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "WHOA!\n"
	.string "You shocked me!\l"
	.string "…Oh, you're just a kid!$"

MtMoon_1F_Text_MarcosDefeat::
# 61 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Wow!\n"
	.string "Shocked again!$"

MtMoon_1F_Text_MarcosPostBattle::
# 66 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Kids like you shouldn't be\n"
	.string "wandering around here in the dark.$"

MtMoon_1F_Text_JoshIntro::
# 71 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Did you come to explore the cave,\n"
	.string "too?$"

MtMoon_1F_Text_JoshDefeat::
# 76 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Losing stinks!\n"
	.string "It's so uncool.$"

MtMoon_1F_Text_JoshPostBattle::
# 81 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I came all the way down here to\n"
	.string "show off to girls.$"

MtMoon_1F_Text_MiriamIntro::
# 86 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Wow! It's way bigger in here than\n"
	.string "I thought!$"

MtMoon_1F_Text_MiriamDefeat::
# 91 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "I lost it!$"

MtMoon_1F_Text_MiriamPostBattle::
# 96 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "How do you get out of here?\n"
	.string "It's so big, I may get lost.$"

MtMoon_1F_Text_JovanIntro::
# 101 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "What!\n"
	.string "Don't sneak up on me!$"

MtMoon_1F_Text_JovanDefeat::
# 106 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "My POKéMON won't do!$"

MtMoon_1F_Text_JovanPostBattle::
# 110 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I have to find stronger POKéMON.\n"
	.string "Where might they be?$"

MtMoon_1F_Text_IrisIntro::
# 115 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "What?\n"
	.string "I'm waiting for my friends to find\l"
	.string "me here.$"

MtMoon_1F_Text_IrisDefeat::
# 121 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I lost?$"

MtMoon_1F_Text_IrisPostBattle::
# 125 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I came because I heard there are\n"
	.string "some very rare fossils here.$"

MtMoon_1F_Text_KentIntro::
# 130 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Suspicious men are in the cave.\n"
	.string "What about you?$"

MtMoon_1F_Text_KentDefeat::
# 135 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "You got me!$"

MtMoon_1F_Text_KentPostBattle::
# 139 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I saw them!\n"
	.string "I'm sure they're from TEAM ROCKET!$"

MtMoon_1F_Text_RobbyIntro::
# 144 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "You need to go through this cave\n"
	.string "to get to CERULEAN CITY.$"

MtMoon_1F_Text_RobbyDefeat::
# 149 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "I lost.$"

MtMoon_1F_Text_RobbyPostBattle::
# 153 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "ZUBAT is tough!\n"
	.string "But if you can catch one, you'll\l"
	.string "be able to count on it.$"

MtMoon_1F_Text_ZubatIsABloodsucker::
# 159 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Beware!\n"
	.string "ZUBAT is a bloodsucker!$"

MtMoon_1F_Text_BrockHelpsExcavateFossils::
# 164 "data/maps/MtMoon_1F_Frlg/scripts.pory"
	.string "Hi, I'm excavating for fossils here\n"
	.string "under MT. MOON.\p"
	.string "Sometimes, BROCK of PEWTER GYM\n"
	.string "lends me a hand.$"
