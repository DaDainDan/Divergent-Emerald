Route110_TrickHousePuzzle8_MapScripts::
	.byte 0


Route110_TrickHousePuzzle8_EventScript_Scroll::
# 4 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	lockall
# 5 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle8_EventScript_Scroll_2
Route110_TrickHousePuzzle8_EventScript_Scroll_1:
# 9 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle8_EventScript_Scroll_2:
# 6 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 1
# 7 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle8_EventScript_Scroll_1


Route110_TrickHousePuzzle8_EventScript_Vincent::
# 14 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	trainerbattle_single TRAINER_VINCENT, Route110_TrickHousePuzzle8_Text_VincentIntro, Route110_TrickHousePuzzle8_Text_VincentDefeat
# 15 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle8_EventScript_Keira::
# 20 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	trainerbattle_single TRAINER_KEIRA, Route110_TrickHousePuzzle8_Text_KeiraIntro, Route110_TrickHousePuzzle8_Text_KeiraDefeat
# 21 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_KeiraPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle8_EventScript_Leroy::
# 26 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	trainerbattle_single TRAINER_LEROY, Route110_TrickHousePuzzle8_Text_LeroyIntro, Route110_TrickHousePuzzle8_Text_LeroyDefeat
# 27 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_LeroyPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened::
# 31 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER I love.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle8_Text_VincentIntro::
# 41 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Not many TRAINERS have made it\n"
	.string "this far.$"

Route110_TrickHousePuzzle8_Text_VincentDefeat::
# 46 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "That must mean you're tough, too…$"

Route110_TrickHousePuzzle8_Text_VincentPostBattle::
# 50 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "You've beaten the POKéMON LEAGUE\n"
	.string "CHAMPION? That's too much!$"

Route110_TrickHousePuzzle8_Text_KeiraIntro::
# 55 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Consider yourself lucky to be\n"
	.string "battling me!$"

Route110_TrickHousePuzzle8_Text_KeiraDefeat::
# 60 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "This isn't right!\n"
	.string "I can't lose!$"

Route110_TrickHousePuzzle8_Text_KeiraPostBattle::
# 65 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "It's a miracle that you beat me.\n"
	.string "You can brag about it.$"

Route110_TrickHousePuzzle8_Text_LeroyIntro::
# 70 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "You've been slugging through the TRICK\n"
	.string "HOUSE challenge, too.$"

Route110_TrickHousePuzzle8_Text_LeroyDefeat::
# 75 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "I see…\n"
	.string "You possess an extraordinary style.$"

Route110_TrickHousePuzzle8_Text_LeroyPostBattle::
# 80 "data/maps/Route110_TrickHousePuzzle8/scripts.pory"
	.string "Seeing someone like you should please\n"
	.string "the TRICK MASTER.$"
