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


Route102_EventScript_Calvin::
# 24 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route102_EventScript_Calvin_2
# 30 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 31 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_Calvin_6
Route102_EventScript_Calvin_4:
# 35 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release_end

Route102_EventScript_Calvin_2:
# 26 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 27 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Calvin_5:
# 32 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 33 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
	goto Route102_EventScript_Calvin_4

Route102_EventScript_Calvin_6:
	specialvar VAR_RESULT, IsTrainerRegistered
# 0 "data/maps/Route102/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route102_EventScript_Calvin_5
	goto Route102_EventScript_Calvin_4


Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 40 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 41 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCallAfterBattle_2
Route102_EventScript_CalvinRegisterMatchCallAfterBattle_1:
	release_end

Route102_EventScript_CalvinRegisterMatchCallAfterBattle_2:
# 43 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 44 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
	goto Route102_EventScript_CalvinRegisterMatchCallAfterBattle_1


Route102_EventScript_Rick::
# 50 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 51 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end


Route102_EventScript_Tiana::
# 56 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 57 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end


Route102_EventScript_Allen::
# 62 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 63 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end


Route102_Text_WatchMeCatchPokemon::
# 67 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt::
# 78 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack::
# 83 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_Text_ImNotVeryTall::
# 88 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_CatchWholeBunchOfPokemon::
# 98 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route102_Text_RouteSignOldale::
# 103 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
	.string "{RIGHT_ARROW} OLDALE TOWN$"

Route102_Text_RouteSignPetalburg::
# 108 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
	.string "{LEFT_ARROW} PETALBURG CITY$"
