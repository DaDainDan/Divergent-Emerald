Route114_FossilManiacsHouse_MapScripts::
# 2 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route114_FossilManiacsHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	setflag FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE
	end


Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother::
# 9 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	lock_faceplayer
# 10 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_DIG, Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_2
# 14 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother, MSGBOX_DEFAULT
	giveitem ITEM_TM_DIG
# 0 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_5
Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_4:
# 18 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	setflag FLAG_RECEIVED_TM_DIG
	release_end

Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_2:
# 11 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance, MSGBOX_DEFAULT
	release_end

Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_5:
# 16 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother_4


Route114_FossilManiacsHouse_EventScript_RockDisplay::
# 23 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_RocksFillDisplayCase, MSGBOX_SIGN
	end


Route114_FossilManiacsHouse_EventScript_Bookshelf::
# 28 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	msgbox Route114_FossilManiacsHouse_Text_CrammedWithBooks, MSGBOX_SIGN
	end


Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother::
# 32 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "My big brother's the FOSSIL MANIAC…\n"
	.string "He's a nice guy who loves FOSSILS…\p"
	.string "He loves digging holes, too…\n"
	.string "He dug this hole by himself…\p"
	.string "You can have this, so you can DIG\n"
	.string "holes just like my big brother…$"

Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance::
# 43 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "If you make a POKéMON DIG inside a\n"
	.string "cave, you're returned to the entrance…$"

Route114_FossilManiacsHouse_Text_RocksFillDisplayCase::
# 48 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "Rocks in peculiar shapes fill\n"
	.string "the display case…$"

Route114_FossilManiacsHouse_Text_CrammedWithBooks::
# 53 "data/maps/Route114_FossilManiacsHouse/scripts.pory"
	.string "THE COMPOSITION OF STRATA…\n"
	.string "HOW RAIN SHAPES THE LAND…\l"
	.string "STONES, SOIL, AND ROCK…\p"
	.string "It's crammed with books.$"
