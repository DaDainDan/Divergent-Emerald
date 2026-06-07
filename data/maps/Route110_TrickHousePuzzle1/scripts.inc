Route110_TrickHousePuzzle1_MapScripts::
# 2 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle1_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route110_TrickHousePuzzle1_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_1_STATE, 2
	goto_if_eq Route110_TrickHousePuzzle1_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route110_TrickHousePuzzle1_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

Route110_TrickHousePuzzle1_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
	goto Route110_TrickHousePuzzle1_MapScripts_MAP_SCRIPT_ON_LOAD_1


Route110_TrickHousePuzzle1_EventScript_Scroll::
# 11 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	lockall
# 12 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_1_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle1_EventScript_Scroll_2
Route110_TrickHousePuzzle1_EventScript_Scroll_1:
# 16 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle1_EventScript_Scroll_2:
# 13 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_1_STATE, 1
# 14 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle1_EventScript_Scroll_1


Route110_TrickHousePuzzle1_EventScript_Sally::
# 21 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_SALLY, Route110_TrickHousePuzzle1_Text_SallyIntro, Route110_TrickHousePuzzle1_Text_SallyDefeat
# 22 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_SallyPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle1_EventScript_Eddie::
# 27 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_EDDIE, Route110_TrickHousePuzzle1_Text_EddieIntro, Route110_TrickHousePuzzle1_Text_EddieDefeat
# 28 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_EddiePostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle1_EventScript_Robin::
# 33 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	trainerbattle_single TRAINER_ROBIN, Route110_TrickHousePuzzle1_Text_RobinIntro, Route110_TrickHousePuzzle1_Text_RobinDefeat
# 34 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_RobinPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened::
# 38 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is fabulous.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle1_Text_SallyIntro::
# 48 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "I'll hack and slash my way to victory\n"
	.string "with the CUT we just learned!$"

Route110_TrickHousePuzzle1_Text_SallyDefeat::
# 53 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Why are you so serious?$"

Route110_TrickHousePuzzle1_Text_SallyPostBattle::
# 57 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "I never get tired of hacking\n"
	.string "and slashing!$"

Route110_TrickHousePuzzle1_Text_EddieIntro::
# 62 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "I wandered into this weird house\n"
	.string "by accident…$"

Route110_TrickHousePuzzle1_Text_EddieDefeat::
# 67 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "And now I've lost…$"

Route110_TrickHousePuzzle1_Text_EddiePostBattle::
# 71 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "I lost my way, I lost a battle, and I'm\n"
	.string "now even more lost… I can't get out…$"

Route110_TrickHousePuzzle1_Text_RobinIntro::
# 76 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "Just who is the TRICK MASTER?$"

Route110_TrickHousePuzzle1_Text_RobinDefeat::
# 80 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "I lost while I was lost in thought!$"

Route110_TrickHousePuzzle1_Text_RobinPostBattle::
# 84 "data/maps/Route110_TrickHousePuzzle1/scripts.pory"
	.string "You're strong!\n"
	.string "Just who are you?$"
