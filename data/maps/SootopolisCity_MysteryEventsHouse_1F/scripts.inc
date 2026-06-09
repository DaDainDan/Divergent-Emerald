SootopolisCity_MysteryEventsHouse_1F_MapScripts::
# 2 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	frontier_checkvisittrainer
# 4 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 0
	goto_if_ne SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 6 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MYSTERY_EVENTS_OLD_MAN, 3, 2
# 7 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MYSTERY_EVENTS_OLD_MAN, MOVEMENT_TYPE_FACE_DOWN
# 8 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setmaplayoutindex LAYOUT_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F_STAIRS_UNBLOCKED
	goto SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MYSTERY_EVENTS_OLD_MAN, 2, 2
# 12 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MYSTERY_EVENTS_OLD_MAN, MOVEMENT_TYPE_FACE_RIGHT
	goto SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SootopolisCity_MysteryEventsHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 1, SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle
# 18 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 2, SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle
# 19 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 3, SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle
	.2byte 0


SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle::
# 24 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	lockall
# 25 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 26 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 27 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_MYSTERY_EVENTS_OLD_MAN, SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_Movement_0
# 28 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 29 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	copyobjectxytoperm LOCALID_MYSTERY_EVENTS_OLD_MAN
# 30 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 31 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 32 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	switch VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE
# 33 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	case 1, SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_3
# 34 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	case 2, SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_4
# 35 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	case 3, SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_5
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_1:
# 37 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special LoadPlayerParty
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 0
# 39 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	releaseall
	end

SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_3:
# 33 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_ThatWasSuperlative, MSGBOX_DEFAULT
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_1

SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_4:
# 34 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou, MSGBOX_DEFAULT
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_1

SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_5:
# 35 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_BrilliantStandoff, MSGBOX_DEFAULT
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_1


SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan::
# 44 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	lock_faceplayer
# 45 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	frontier_checkvisittrainer
# 46 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan_2
# 50 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan_5
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan_4:
# 53 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_OnlyAmusementWatchingBattles, MSGBOX_DEFAULT
	release_end

SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan_2:
# 47 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_OnlyAmusementWatchingBattles, MSGBOX_DEFAULT
	release_end

SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan_5:
# 51 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_OldMan_4


SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting::
# 58 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special SavePlayerParty
# 59 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special BufferEReaderTrainerName
# 60 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_ChallengeVisitingTrainer, MSGBOX_YESNO
# 61 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_2
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_1:
# 64 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_KeepItTo3On3, MSGBOX_DEFAULT
# 65 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 66 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special ChooseHalfPartyForBattle
# 67 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_5
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_4:
# 70 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_SaveProgressBeforeBattle, MSGBOX_YESNO
# 71 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_8
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_7:
# 74 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special LoadPlayerParty
# 75 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	call Common_EventScript_SaveGame
# 76 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_11
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_10:
# 79 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special SavePlayerParty
# 80 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 81 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_HopeToSeeGoodMatch, MSGBOX_DEFAULT
# 82 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	closemessage
# 83 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	switch VAR_FACING
# 84 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	case DIR_NORTH, SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_15
# 87 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	case DIR_EAST, SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_16
# 90 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	case DIR_WEST, SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_17
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_13:
# 94 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitmovement 0
# 95 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	warp MAP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_B1F, 3, 1
# 96 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	waitstate
	release_end

SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_2:
# 62 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_DeclineBattle
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_1

SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_5:
# 68 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_DeclineBattle
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_4

SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_8:
# 72 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_DeclineBattle
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_7

SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_11:
# 77 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_DeclineBattle
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_10

SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_15:
# 85 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_Movement_0
# 86 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_Movement_1
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_13

SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_16:
# 88 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_Movement_2
# 89 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_Movement_3
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_13

SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_17:
# 91 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_Movement_0
# 92 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_Movement_4
	goto SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_13


SootopolisCity_MysteryEventsHouse_1F_EventScript_DeclineBattle::
# 101 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	special LoadPlayerParty
# 102 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_1F_Text_YouWontBattle, MSGBOX_DEFAULT
	release_end


# 27 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_OldManCommentOnBattle_Movement_0:
# 27 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_right
# 27 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_faster_down
	step_end

# 85 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_Movement_0:
# 85 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_left
# 85 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_faster_right
	step_end

# 86 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_Movement_1:
# 86 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	delay_16
# 86 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_up
# 86 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_up
	step_end

# 88 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_Movement_2:
# 88 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_right
# 88 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	step_faster_left
	step_end

# 89 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_Movement_3:
# 89 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	delay_16
# 89 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_right
# 89 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_up
	step_end

# 92 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_1F_EventScript_TrainerVisiting_Movement_4:
# 92 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	delay_16
# 92 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_left
# 92 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	walk_up
	step_end

SootopolisCity_MysteryEventsHouse_1F_Text_OnlyAmusementWatchingBattles::
# 106 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "When I was young, I traveled the world\n"
	.string "as a POKéMON TRAINER.\p"
	.string "Now that I've become an old buzzard,\n"
	.string "my only amusement is watching young\l"
	.string "TRAINERS battle.$"

SootopolisCity_MysteryEventsHouse_1F_Text_DoorAppearsToBeLocked::
# 115 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "The door appears to be locked.$"

SootopolisCity_MysteryEventsHouse_1F_Text_ChallengeVisitingTrainer::
# 119 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "A TRAINER named {STR_VAR_1}\n"
	.string "is visiting my home.\p"
	.string "Would you like to challenge\n"
	.string "{STR_VAR_1}?$"

SootopolisCity_MysteryEventsHouse_1F_Text_YouWontBattle::
# 127 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "You won't battle? I'm disappointed\n"
	.string "that I can't see you battle…$"

SootopolisCity_MysteryEventsHouse_1F_Text_KeepItTo3On3::
# 132 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Oh, good, good!\p"
	.string "But my house isn't all that sturdy.\p"
	.string "Could I ask you to keep it down to\n"
	.string "a 3-on-3 match?$"

SootopolisCity_MysteryEventsHouse_1F_Text_SaveProgressBeforeBattle::
# 141 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Before you two battle, you should\n"
	.string "save your progress.$"

SootopolisCity_MysteryEventsHouse_1F_Text_HopeToSeeGoodMatch::
# 146 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "I hope to see a good match!$"

SootopolisCity_MysteryEventsHouse_1F_Text_StrVar1Tie::
# 150 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "{STR_VAR_1}$"

SootopolisCity_MysteryEventsHouse_B1F_Text_MatchEndedUpDraw::
# 154 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "The match ended up a draw.$"

SootopolisCity_MysteryEventsHouse_1F_Text_BrilliantStandoff::
# 158 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "So, it became a standoff.\p"
	.string "It was a brilliant match in which\n"
	.string "neither side conceded a step!$"

SootopolisCity_MysteryEventsHouse_1F_Text_StrVar1Won::
# 165 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "{STR_VAR_1}$"

SootopolisCity_MysteryEventsHouse_1F_Text_ThatWasSuperlative::
# 169 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "That was superlative!\p"
	.string "Why, it was like seeing myself in\n"
	.string "my youth again!$"

SootopolisCity_MysteryEventsHouse_1F_Text_StrVar1Lost::
# 176 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "{STR_VAR_1}$"

SootopolisCity_MysteryEventsHouse_1F_Text_TooBadForYou::
# 180 "data/maps/SootopolisCity_MysteryEventsHouse_1F/scripts.pory"
	.string "Ah, too bad for you!\p"
	.string "But it was a good match.\n"
	.string "I hope you can win next time.$"
