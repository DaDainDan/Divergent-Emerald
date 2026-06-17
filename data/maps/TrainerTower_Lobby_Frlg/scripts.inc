TrainerTower_Lobby_Frlg_MapScripts::
# 2 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
# 14 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD
# 22 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 27 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
# 33 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 0
# 4 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_resumetimer
# 5 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_shouldexit
# 6 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2
TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 8 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_TEMP_0, 0
# 9 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setobjectxy LOCALID_PLAYER, 9, 7
# 10 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	goto TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD:
# 15 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	addobject LOCALID_TOWER_NURSE
# 16 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	addobject LOCALID_TOWER_MART_CLERK
# 17 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	addobject LOCALID_TOWER_RECEPTIONIST
# 18 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	addobject LOCALID_TOWER_COOLTRAINER_F
# 19 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	addobject LOCALID_TOWER_BALDING_MAN
	end

TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 23 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_TRAINER_TOWER_LOBBY
# 24 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
	end

TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 28 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	compare VAR_TEMP_D, 17
	goto_if_eq TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 29 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerTower_Floor_ShadeBottomLeft, 0
	goto TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

TrainerTower_Lobby_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 34 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerTower_Lobby_EventScript_Enter
# 35 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerTower_Lobby_EventScript_ExitElevator
	.2byte 0


TrainerTower_Lobby_EventScript_ExitElevator::
# 40 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lockall
# 41 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerTower_Lobby_EventScript_ExitElevator_Movement_0
# 42 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitmovement 0
# 43 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerTower_CounterBarrier, 1
# 44 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	special DrawWholeMapView
# 45 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	playse SE_CLICK
# 46 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitse
# 47 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_TEMP_D, 0
# 48 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	releaseall
	end


TrainerTower_Lobby_EventScript_Enter::
# 53 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_TEMP_0, 1
# 54 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_getchallengestatus
# 55 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	compare VAR_RESULT, TT_CHALLENGE_STATUS_LOST
	goto_if_eq TrainerTower_Lobby_EventScript_Enter_2
# 55 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	compare VAR_RESULT, TT_CHALLENGE_STATUS_UNK
	goto_if_eq TrainerTower_Lobby_EventScript_Enter_2
TrainerTower_Lobby_EventScript_Enter_1:
# 60 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	switch VAR_RESULT
# 61 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case TT_CHALLENGE_STATUS_LOST, TrainerTower_Lobby_EventScript_Enter_8
# 62 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case TT_CHALLENGE_STATUS_UNK, TrainerTower_Lobby_EventScript_Enter_9
	end

TrainerTower_Lobby_EventScript_Enter_2:
# 56 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lock_faceplayer
# 57 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 58 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
	goto TrainerTower_Lobby_EventScript_Enter_1

TrainerTower_Lobby_EventScript_Enter_6:
# 65 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	closemessage
# 66 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 67 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitmovement 0
# 68 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 0
	release_end

TrainerTower_Lobby_EventScript_Enter_8:
# 61 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_TooBadComeBackTryAgain
	goto TrainerTower_Lobby_EventScript_Enter_6

TrainerTower_Lobby_EventScript_Enter_9:
# 62 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_MoveCounterHereWhenTrainersSwitch
	goto TrainerTower_Lobby_EventScript_Enter_6


TrainerTower_Lobby_EventScript_Nurse::
# 73 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lock_faceplayer
# 74 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


TrainerTower_Lobby_EventScript_Receptionist::
# 79 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lock_faceplayer
# 80 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_getbeatchallenge
# 81 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TrainerTower_Lobby_EventScript_Receptionist_2
# 85 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_GiveItYourBest
	release_end

TrainerTower_Lobby_EventScript_Receptionist_2:
# 82 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_ThanksForCompeting
	release_end


TrainerTower_Lobby_EventScript_MartClerk::
# 90 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lock_faceplayer
# 91 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 92 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitmessage
# 93 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	pokemart TrainerTower_Lobby_Mart_Items
# 94 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 98 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_Mart_Items:
# 99 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 100 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 101 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 102 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_MAX_POTION
# 103 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 104 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 105 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 106 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 107 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

TrainerTower_Lobby_EventScript_EntryTrigger::
# 111 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lockall
# 112 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 113 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 114 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_WelcomeToTrainerTower
# 115 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_getnumfloors
# 116 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TrainerTower_Lobby_EventScript_EntryTrigger_2
# 119 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_TrainersUpToFloorNum
TrainerTower_Lobby_EventScript_EntryTrigger_1:
# 121 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge
	end

TrainerTower_Lobby_EventScript_EntryTrigger_2:
# 117 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_TrainersUpEighthFloor
	goto TrainerTower_Lobby_EventScript_EntryTrigger_1


TrainerTower_Lobby_EventScript_AskEnterChallenge::
# 126 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	message TrainerTower_Lobby_Text_LikeToChallengeTrainers
# 127 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitmessage
# 128 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	multichoice 18, 6, MULTI_YESNOINFO, FALSE
# 129 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	switch VAR_RESULT
# 130 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 0, TrainerTower_Lobby_EventScript_AskEnterChallenge_3
# 131 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 2, TrainerTower_Lobby_EventScript_AskEnterChallenge_4
# 134 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case 1, TrainerTower_Lobby_EventScript_AskEnterChallenge_5
# 135 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	case MULTI_B_PRESSED, TrainerTower_Lobby_EventScript_AskEnterChallenge_5
TrainerTower_Lobby_EventScript_AskEnterChallenge_1:
	end

TrainerTower_Lobby_EventScript_AskEnterChallenge_3:
# 130 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_ChooseChallenge
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge_1

TrainerTower_Lobby_EventScript_AskEnterChallenge_4:
# 132 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_ExplainTrainerTower
# 133 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge_1

TrainerTower_Lobby_EventScript_AskEnterChallenge_5:
# 136 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_DeclineChallenge
	goto TrainerTower_Lobby_EventScript_AskEnterChallenge_1


TrainerTower_Lobby_EventScript_ChooseChallenge::
# 142 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	multichoice 13, 3, MULTI_TRAINER_TOWER_MODE, FALSE
# 143 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt TrainerTower_Lobby_EventScript_ChooseChallenge_2
# 152 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	goto TrainerTower_Lobby_EventScript_DeclineChallenge
	end

TrainerTower_Lobby_EventScript_ChooseChallenge_2:
# 144 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 145 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 1
# 146 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	special HealPlayerParty
# 147 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_StartClockGetSetGo
# 148 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	ttower_startchallenge
# 149 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	releaseall
	end


TrainerTower_Lobby_EventScript_DeclineChallenge::
# 157 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_PleaseVisitUsAgain
# 158 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	closemessage
# 159 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 160 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	waitmovement 0
# 161 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	releaseall
	end


TrainerTower_Lobby_EventScript_ShowRecords::
# 166 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	lockall
# 167 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 168 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 169 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	special ShowTrainerHillRecords
# 170 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	releaseall
	end


TrainerTower_Lobby_EventScript_CooltrainerF::
# 175 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_WonderWhatKindsOfTrainers, MSGBOX_NPC
	end


TrainerTower_Lobby_EventScript_BaldingMan::
# 180 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	msgbox TrainerTower_Lobby_Text_StairsTougherThanAnyBattle, MSGBOX_NPC
	end


# 41 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
TrainerTower_Lobby_EventScript_ExitElevator_Movement_0:
# 41 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	walk_down
# 41 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	walk_down
	step_end

TrainerTower_Lobby_Text_WelcomeToTrainerTower::
# 185 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Hello!\p"
	.string "Welcome to TRAINER TOWER where\n"
	.string "TRAINERS gather from all over!$"

TrainerTower_Lobby_Text_TrainersUpToFloorNum::
# 192 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "TRAINERS from all over the world\n"
	.string "gather here to battle.\p"
	.string "Let me see…\p"
	.string "Right now, there are TRAINERS only\n"
	.string "up to Floor {STR_VAR_1}.$"

TrainerTower_Lobby_Text_TrainersUpEighthFloor::
# 202 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "TRAINERS are awaiting your\n"
	.string "challenge up to the eighth floor.$"

TrainerTower_Lobby_Text_LikeToChallengeTrainers::
# 207 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Would you like to challenge the\n"
	.string "waiting TRAINERS?$"

TrainerTower_Lobby_Text_StartClockGetSetGo::
# 212 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Okay, I'll get the clock started,\n"
	.string "so give it everything you have.\p"
	.string "On your marks…\p"
	.string "Get set…\p"
	.string "Go!$"

TrainerTower_Lobby_Text_PleaseVisitUsAgain::
# 223 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Please do visit us again!$"

TrainerTower_Lobby_Text_TooBadComeBackTryAgain::
# 227 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "That was too bad.\p"
	.string "I think you put in a tremendous\n"
	.string "effort in your battling.\p"
	.string "Please come back and try again!$"

TrainerTower_Lobby_Text_GiveItYourBest::
# 236 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I hope you give it your best.$"

TrainerTower_Lobby_Text_MoveCounterHereWhenTrainersSwitch::
# 240 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "When the TRAINERS switch places,\n"
	.string "the movement can be hectic.\p"
	.string "To avoid the stampede, we moved\n"
	.string "the reception counter here.\p"
	.string "I'm sorry for the inconvenience.$"

TrainerTower_Roof_Text_ImOwnerBattledPerfectly::
# 250 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Hello…\p"
	.string "I am the owner of this TOWER…\p"
	.string "How the sky soars above this\n"
	.string "rooftop…\p"
	.string "The caress of the winds up here…\p"
	.string "It's all so perfect…\p"
	.string "The way you battled…\n"
	.string "It, too, was perfection…$"

TrainerTower_Roof_Text_ThisIsForYou::
# 266 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "This is for you…$"

TrainerTower_Roof_Text_DoneItInRecordTime::
# 270 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "Stupendous!\p"
	.string "It's marvelous how you've come up\n"
	.string "here so quickly.\p"
	.string "The fact is, you've done it in\n"
	.string "record time…\p"
	.string "I'll have your record posted at\n"
	.string "the reception counter.$"

TrainerTower_Roof_Text_TookSweetTimeGettingHere::
# 284 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "You seem to have taken your sweet\n"
	.string "time getting here…$"

TrainerTower_Roof_Text_IdLikeToSeeBetterTime::
# 289 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "What I would like to see is a\n"
	.string "better time out of you…\p"
	.string "I'm counting on you.\p"
	.string "Until then, farewell…$"

TrainerTower_Text_XMinYZSec::
# 298 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.$"

TrainerTower_Lobby_Text_HereAreTheResults::
# 302 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "せいせきひょうです$"

TrainerTower_Lobby_Text_NeedTwoMonsForDouble::
# 306 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "This is a two-on-two battle.\p"
	.string "You may not battle unless you have\n"
	.string "at least two POKéMON.$"

TrainerTower_Lobby_Text_ExplainTrainerTower::
# 313 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Here at TRAINER TOWER, there is an\n"
	.string "event called TIME ATTACK.\p"
	.string "You will be timed on how quickly\n"
	.string "you can get from the reception\l"
	.string "counter to the OWNER on the roof.\p"
	.string "The best times will be recorded on\n"
	.string "the Time Board.\p"
	.string "Try competing with friends to see\n"
	.string "who can beat it the fastest.\p"
	.string "You will not earn any EXP. Points\n"
	.string "or money by beating TRAINERS here.$"

TrainerTower_Lobby_Text_ThanksForCompeting::
# 331 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Thank you for competing!$"

TrainerTower_Lobby_Text_WonderWhatKindsOfTrainers::
# 335 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "I'm here to see how good I am.\p"
	.string "I wonder what kinds of TRAINERS\n"
	.string "are waiting for me?\p"
	.string "It's nerve-racking!$"

TrainerTower_Lobby_Text_StairsTougherThanAnyBattle::
# 344 "data/maps/TrainerTower_Lobby_Frlg/scripts.pory"
	.string "Gasp, gasp…\n"
	.string "Gasp…\p"
	.string "Never mind battling! These stairs…\n"
	.string "They're tougher than any battle…$"
