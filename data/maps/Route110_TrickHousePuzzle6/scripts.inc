Route110_TrickHousePuzzle6_MapScripts::
# 2 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle6_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHousePuzzle6_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Route110_TrickHousePuzzle6_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	special RotatingGate_InitPuzzle
	end

Route110_TrickHousePuzzle6_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 8 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, Route110_TrickHousePuzzle6_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

Route110_TrickHousePuzzle6_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 9 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
	end


Route110_TrickHousePuzzle6_EventScript_Scroll::
# 16 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	lockall
# 17 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_6_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle6_EventScript_Scroll_2
Route110_TrickHousePuzzle6_EventScript_Scroll_1:
# 21 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle6_EventScript_Scroll_2:
# 18 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_6_STATE, 1
# 19 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle6_EventScript_Scroll_1


Route110_TrickHousePuzzle6_EventScript_Sophia::
# 26 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	trainerbattle_single TRAINER_SOPHIA, Route110_TrickHousePuzzle6_Text_SophiaIntro, Route110_TrickHousePuzzle6_Text_SophiaDefeat
# 27 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_SophiaPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle6_EventScript_Benny::
# 32 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	trainerbattle_single TRAINER_BENNY, Route110_TrickHousePuzzle6_Text_BennyIntro, Route110_TrickHousePuzzle6_Text_BennyDefeat
# 33 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_BennyPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle6_EventScript_Sebastian::
# 38 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	trainerbattle_single TRAINER_SEBASTIAN, Route110_TrickHousePuzzle6_Text_SebastianIntro, Route110_TrickHousePuzzle6_Text_SebastianDefeat
# 39 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_SebastianPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened::
# 43 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is my life.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle6_Text_SophiaIntro::
# 53 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "When I heard there was a strange\n"
	.string "house, I had to check it out.$"

Route110_TrickHousePuzzle6_Text_SophiaDefeat::
# 58 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "I've discovered a tough TRAINER!$"

Route110_TrickHousePuzzle6_Text_SophiaPostBattle::
# 62 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "I'm sure having a good time checking\n"
	.string "this place out.\p"
	.string "It's a challenge I've found worth\n"
	.string "repeating!$"

Route110_TrickHousePuzzle6_Text_BennyIntro::
# 70 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Maybe I could get my BIRD POKéMON\n"
	.string "to fly over the wall…$"

Route110_TrickHousePuzzle6_Text_BennyDefeat::
# 75 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Gwaaah! I blew it!$"

Route110_TrickHousePuzzle6_Text_BennyPostBattle::
# 79 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Ehehehe… I guess I lost because\n"
	.string "I was trying to cheat.$"

Route110_TrickHousePuzzle6_Text_SebastianIntro::
# 84 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "I'm getting dizzy from these rotating\n"
	.string "doors…$"

Route110_TrickHousePuzzle6_Text_SebastianDefeat::
# 89 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "Everything's spinning around and\n"
	.string "around. I can't take this anymore…$"

Route110_TrickHousePuzzle6_Text_SebastianPostBattle::
# 94 "data/maps/Route110_TrickHousePuzzle6/scripts.pory"
	.string "You don't seem to be affected at all.\n"
	.string "Or do you have your poker face on?$"
