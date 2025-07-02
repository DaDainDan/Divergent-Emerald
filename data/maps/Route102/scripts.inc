# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 3 "data/maps/Route102/scripts.pory"
	.byte 0
# 4 "data/maps/Route102/scripts.pory"

# 5 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 6 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 7 "data/maps/Route102/scripts.pory"
	end
# 8 "data/maps/Route102/scripts.pory"

# 9 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 10 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 11 "data/maps/Route102/scripts.pory"
	end
# 12 "data/maps/Route102/scripts.pory"

# 13 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 14 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 15 "data/maps/Route102/scripts.pory"
	end
# 16 "data/maps/Route102/scripts.pory"

# 17 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 18 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 19 "data/maps/Route102/scripts.pory"
	end
# 20 "data/maps/Route102/scripts.pory"

# 21 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 22 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 23 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/Route102/scripts.pory"
	end
# 25 "data/maps/Route102/scripts.pory"

# 26 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 27 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 28 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/Route102/scripts.pory"
	end
# 30 "data/maps/Route102/scripts.pory"

# 31 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 32 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 33 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/Route102/scripts.pory"
	end
# 35 "data/maps/Route102/scripts.pory"

# 36 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 37 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 38 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 39 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 40 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 41 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 42 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 43 "data/maps/Route102/scripts.pory"

# 44 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 45 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 46 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 47 "data/maps/Route102/scripts.pory"

# 48 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 49 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 50 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 51 "data/maps/Route102/scripts.pory"

# 52 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 53 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 54 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 55 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 56 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 57 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 58 "data/maps/Route102/scripts.pory"

# 59 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 60 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 61 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 62 "data/maps/Route102/scripts.pory"

# 63 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 64 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 65 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 66 "data/maps/Route102/scripts.pory"

# 67 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 68 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 69 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"
