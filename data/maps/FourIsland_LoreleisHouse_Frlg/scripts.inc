FourIsland_LoreleisHouse_Frlg_MapScripts::
# 2 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_LoreleisHouse_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FourIsland_LoreleisHouse_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	special UpdateLoreleiDollCollection
	end


FourIsland_LoreleisHouse_EventScript_Lorelei::
# 9 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	lock_faceplayer
# 10 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	goto_if_set FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei_2
# 13 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei_3
# 18 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland
FourIsland_LoreleisHouse_EventScript_Lorelei_1:
	release_end

FourIsland_LoreleisHouse_EventScript_Lorelei_2:
# 11 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow
	goto FourIsland_LoreleisHouse_EventScript_Lorelei_1

FourIsland_LoreleisHouse_EventScript_Lorelei_3:
# 14 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	setflag FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE
# 15 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile
	goto FourIsland_LoreleisHouse_EventScript_Lorelei_1


FourIsland_LoreleisHouse_EventScript_Doll::
# 24 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	lock
# 25 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore
	release_end


FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland::
# 29 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "LORELEI: There's something weighing\n"
	.string "heavily on my mind.\p"
	.string "If anything were to happen on\n"
	.string "the island where I was born…\p"
	.string "I wouldn't know about it if I were\n"
	.string "in the POKéMON LEAGUE.\p"
	.string "I wonder if that would make me\n"
	.string "irresponsible to my home…$"

FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile::
# 43 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "LORELEI: So, you managed to solve\n"
	.string "all the problems here?\p"
	.string "That's wonderful.\p"
	.string "That means there isn't any reason\n"
	.string "for me to be here all the time.\p"
	.string "Thank you…\p"
	.string "I'll return to the POKéMON LEAGUE\n"
	.string "in a short while.$"

FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow::
# 58 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "I don't know what will happen in\n"
	.string "the future, but…\p"
	.string "I will do what I can here and now.\n"
	.string "That's all I can do.$"

FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore::
# 66 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "Stuffed POKéMON dolls galore!$"
