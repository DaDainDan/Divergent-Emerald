Route102_MapScripts::
	.byte 0


Route102_EventScript_LittleBoy::
# 4 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	end


Route102_EventScript_RouteSignOldale::
# 9 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end


Route102_EventScript_RouteSignPetalburg::
# 14 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end


Route102_EventScript_Boy::
# 19 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end


Route102_EventScript_Avery::
# 24 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_AVERY, Route102_Text_AveryIntro, Route102_Text_AveryDefeated
# 25 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AveryPostBattle, MSGBOX_AUTOCLOSE
	end


Route102_EventScript_Noah::
# 30 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_NOAH, Route102_Text_NoahIntro, Route102_Text_NoahDefeated
# 36 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_NoahPostBattle, MSGBOX_AUTOCLOSE
	end


Route102_EventScript_Tiana::
# 41 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 42 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end


Route102_Text_WatchMeCatchPokemon::
# 112 "data/maps/Route102/scripts.pory"
	.string "{SPEAKER NAME_WALLY}{PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt::
# 123 "data/maps/Route102/scripts.pory"
	.string "{SPEAKER NAME_WALLY}I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack::
# 128 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_Text_ImNotVeryTall::
# 133 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_CatchWholeBunchOfPokemon::
# 143 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route102_Text_RouteSignOldale::
# 148 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
	.string "{RIGHT_ARROW} OLDALE TOWN$"

Route102_Text_RouteSignPetalburg::
# 153 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
	.string "{LEFT_ARROW} PETALBURG CITY$"
