ViridianForest_Frlg_MapScripts::
# 2 "data/maps/ViridianForest_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianForest_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ViridianForest_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ViridianForest_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_FOREST
	end


ViridianForest_EventScript_Youngster::
# 9 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_FriendsItchingToBattle, MSGBOX_NPC
	end


ViridianForest_EventScript_Boy::
# 14 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_RanOutOfPokeBalls, MSGBOX_NPC
	end


ViridianForest_EventScript_TrainerTips1::
# 19 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_AvoidGrassyAreasWhenWeak, MSGBOX_SIGN
	end


ViridianForest_EventScript_TrainerTips2::
# 24 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_UseAntidoteForPoison, MSGBOX_SIGN
	end


ViridianForest_EventScript_TrainerTips3::
# 29 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_ContactOakViaPCToRatePokedex, MSGBOX_SIGN
	end


ViridianForest_EventScript_TrainerTips4::
# 34 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_CantCatchOwnedMons, MSGBOX_SIGN
	end


ViridianForest_EventScript_TrainerTips5::
# 39 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_WeakenMonsBeforeCapture, MSGBOX_SIGN
	end


ViridianForest_EventScript_ExitSign::
# 44 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_LeavingViridianForest, MSGBOX_SIGN
	end


ViridianForest_EventScript_Rick::
# 49 "data/maps/ViridianForest_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_RICK, ViridianForest_Text_RickIntro, ViridianForest_Text_RickDefeat
# 50 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianForest_EventScript_Doug::
# 55 "data/maps/ViridianForest_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_DOUG, ViridianForest_Text_DougIntro, ViridianForest_Text_DougDefeat
# 56 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_DougPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianForest_EventScript_Sammy::
# 61 "data/maps/ViridianForest_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_SAMMY, ViridianForest_Text_SammyIntro, ViridianForest_Text_SammyDefeat
# 62 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_SammyPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianForest_EventScript_Anthony::
# 67 "data/maps/ViridianForest_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ANTHONY, ViridianForest_Text_AnthonyIntro, ViridianForest_Text_AnthonyDefeat
# 68 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianForest_EventScript_Charlie::
# 73 "data/maps/ViridianForest_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_CHARLIE, ViridianForest_Text_CharlieIntro, ViridianForest_Text_CharlieDefeat
# 74 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end


ViridianForest_Text_FriendsItchingToBattle::
# 78 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "I came here with some friends to\n"
	.string "catch us some BUG POKéMON!\p"
	.string "They're all itching to get into\n"
	.string "some POKéMON battles!$"

ViridianForest_Text_RickIntro::
# 86 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Hey! You have POKéMON!\n"
	.string "Come on!\l"
	.string "Let's battle 'em!$"

ViridianForest_Text_RickDefeat::
# 92 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "No!\n"
	.string "CATERPIE can't hack it!$"

ViridianForest_Text_RickPostBattle::
# 97 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Ssh! You'll scare the bugs away.\n"
	.string "Another time, okay?$"

ViridianForest_Text_DougIntro::
# 102 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Yo!\n"
	.string "You can't jam out if you're a\l"
	.string "POKéMON TRAINER!$"

ViridianForest_Text_DougDefeat::
# 108 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Huh?\n"
	.string "I ran out of POKéMON!$"

ViridianForest_Text_DougPostBattle::
# 113 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "That totally stinks! I'm going to\n"
	.string "catch some stronger ones!$"

ViridianForest_Text_SammyIntro::
# 118 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Hey, wait up!\n"
	.string "What's the hurry? Why the rush?$"

ViridianForest_Text_SammyDefeat::
# 123 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "I give!\n"
	.string "You're good at this!$"

ViridianForest_Text_SammyPostBattle::
# 128 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Sometimes, you can find stuff on\n"
	.string "the ground.\p"
	.string "I'm looking for the stuff I\n"
	.string "dropped. Can you help me?$"

ViridianForest_Text_AnthonyIntro::
# 136 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "I might be little, but I won't like\n"
	.string "it if you go easy on me!$"

ViridianForest_Text_AnthonyDefeat::
# 141 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Oh, boo.\n"
	.string "Nothing went right.$"

ViridianForest_Text_AnthonyPostBattle::
# 146 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "I lost some of my allowance…$"

ViridianForest_Text_CharlieIntro::
# 150 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Did you know that POKéMON evolve?$"

ViridianForest_Text_CharlieDefeat::
# 154 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "I lost!$"

ViridianForest_Text_CharliePostBattle::
# 159 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "BUG POKéMON evolve quickly.\n"
	.string "They're a lot of fun!$"

ViridianForest_Text_RanOutOfPokeBalls::
# 164 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "I was throwing POKé BALLS to\n"
	.string "catch POKéMON, and I ran out.\p"
	.string "That's why you can never have too\n"
	.string "many POKé BALLS.$"

ViridianForest_Text_AvoidGrassyAreasWhenWeak::
# 172 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "If your POKéMON are weak and you\n"
	.string "want to avoid battles, stay away\l"
	.string "from grassy areas!$"

ViridianForest_Text_UseAntidoteForPoison::
# 180 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "For poison, use ANTIDOTE!\n"
	.string "Get it at POKéMON MARTS!$"

ViridianForest_Text_ContactOakViaPCToRatePokedex::
# 185 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Contact PROF. OAK via a PC to\n"
	.string "get your POKéDEX evaluated!$"

ViridianForest_Text_CantCatchOwnedMons::
# 192 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "You can't catch a POKéMON that\n"
	.string "belongs to someone else.\p"
	.string "Throw POKé BALLS only at wild\n"
	.string "POKéMON to catch them!$"

ViridianForest_Text_WeakenMonsBeforeCapture::
# 202 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Weaken POKéMON before attempting\n"
	.string "capture!\p"
	.string "When healthy, they may escape!$"

ViridianForest_Text_LeavingViridianForest::
# 211 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "LEAVING VIRIDIAN FOREST\n"
	.string "PEWTER CITY AHEAD$"
