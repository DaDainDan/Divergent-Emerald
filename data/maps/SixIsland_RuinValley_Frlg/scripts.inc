SixIsland_RuinValley_Frlg_MapScripts::
# 2 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SixIsland_RuinValley_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SixIsland_RuinValley_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	goto_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
SixIsland_RuinValley_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

SixIsland_RuinValley_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	setmetatile 24, 24, METATILE_SeviiIslands67_DottedHoleDoor_Open, 0
	goto SixIsland_RuinValley_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1


SixIsland_RuinValley_EventScript_Scientist::
# 11 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	lock
# 12 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CantFigureOutHowToGetInside
# 13 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FacePlayer
# 14 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	waitmovement 0
# 15 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_IFoundThisPlace
# 16 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FaceOriginalDirection
# 17 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	waitmovement 0
	release_end


SixIsland_RuinValley_EventScript_DottedHoleDoor::
# 22 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	lockall
# 23 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	goto_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_DottedHoleDoor_2
# 28 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CheckDoorMoreThoroughly, MSGBOX_YESNO
# 29 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SixIsland_RuinValley_EventScript_DottedHoleDoor_5
# 34 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_SeveralDotsOnTheDoor
# 35 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	braillemsgbox Braille_Text_Cut
# 36 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	releaseall
	end

SixIsland_RuinValley_EventScript_DottedHoleDoor_2:
# 24 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_DoorIsOpen
# 25 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	releaseall
	end

SixIsland_RuinValley_EventScript_DottedHoleDoor_5:
# 30 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	msgbox SixIsland_RuinValley_Text_LeftDoorAlone
# 31 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	releaseall
	end


SixIsland_RuinValley_Text_CantFigureOutHowToGetInside::
# 40 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I can't figure out how I'm supposed\n"
	.string "to get inside.$"

SixIsland_RuinValley_Text_IFoundThisPlace::
# 45 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Let me tell you, I found this\n"
	.string "place.\p"
	.string "Don't look so envious, will you?$"

SixIsland_RuinValley_Text_CheckDoorMoreThoroughly::
# 52 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "The door doesn't budge at all.\n"
	.string "Check it more thoroughly?$"

SixIsland_RuinValley_Text_LeftDoorAlone::
# 57 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "{PLAYER} left the door alone.$"

SixIsland_RuinValley_Text_SeveralDotsOnTheDoor::
# 61 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "On closer inspection, there are\n"
	.string "several dots on the door…$"

SixIsland_RuinValley_Text_DoorIsOpen::
# 66 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "The door is open.$"

SixIsland_RuinValley_Text_StanlyIntro::
# 70 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "There appear to be many secrets\n"
	.string "still unsolved in this world.$"

SixIsland_RuinValley_Text_StanlyDefeat::
# 75 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Hmm…$"

SixIsland_RuinValley_Text_StanlyPostBattle::
# 79 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I suggest to you that you, too,\n"
	.string "give a thought to the secrets and\l"
	.string "mysteries of our world once a day.$"

SixIsland_RuinValley_Text_FosterIntro::
# 85 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I'm curious, what compelled you to\n"
	.string "come here?$"

SixIsland_RuinValley_Text_FosterDefeat::
# 90 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "It's been so long since I battled,\n"
	.string "my instincts are off.$"

SixIsland_RuinValley_Text_FosterPostBattle::
# 95 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "There are several ruins on the\n"
	.string "SEVII ISLANDS.\p"
	.string "The majority of them date back\n"
	.string "a long way.$"

SixIsland_RuinValley_Text_LarryIntro::
# 103 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "It's been said that there are\n"
	.string "mysterious stones on this island.\p"
	.string "I suspect it has something to do\n"
	.string "with the ruins here.$"

SixIsland_RuinValley_Text_LarryDefeat::
# 111 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Oh, interesting.$"

SixIsland_RuinValley_Text_LarryPostBattle::
# 115 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Those ruins over there…\p"
	.string "I haven't had any luck in finding\n"
	.string "how I can get inside.$"

SixIsland_RuinValley_Text_DarylIntro::
# 122 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "A battle with you, so high up!$"

SixIsland_RuinValley_Text_DarylDefeat::
# 126 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Oh, the heartbreak of losing so\n"
	.string "easily to you!$"

SixIsland_RuinValley_Text_DarylPostBattle::
# 131 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "Experience the joy of climbing!$"

SixIsland_RuinValley_Text_HectorIntro::
# 135 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "I'm pretty familiar with the land\n"
	.string "around these parts.$"

SixIsland_RuinValley_Text_HectorDefeat::
# 140 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "You don't need to be so pushy.\n"
	.string "I'll be happy to tell you.$"

SixIsland_RuinValley_Text_HectorPostBattle::
# 145 "data/maps/SixIsland_RuinValley_Frlg/scripts.pory"
	.string "The door to the ruins…\n"
	.string "It has these strange patterns\l"
	.string "engraved on the outside.\p"
	.string "I don't know what they mean,\n"
	.string "though.$"
