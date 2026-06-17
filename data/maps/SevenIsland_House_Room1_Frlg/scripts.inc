SevenIsland_House_Room1_Frlg_MapScripts::
# 4 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_House_Room1_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 18 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SevenIsland_House_Room1_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SevenIsland_House_Room1_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special ValidateEReaderTrainer
# 6 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SevenIsland_House_Room1_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SevenIsland_House_Room1_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 0
	goto_if_ne SevenIsland_House_Room1_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SevenIsland_House_Room1_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

SevenIsland_House_Room1_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setvar VAR_TEMP_1, TRUE
# 8 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setobjectxyperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, 4, 2
# 9 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN
# 10 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setmaplayoutindex LAYOUT_SEVEN_ISLAND_HOUSE_ROOM1_DOOR_OPEN
	goto SevenIsland_House_Room1_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SevenIsland_House_Room1_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 13 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setobjectxyperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, 3, 2
# 14 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, MOVEMENT_TYPE_FACE_RIGHT
	goto SevenIsland_House_Room1_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SevenIsland_House_Room1_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 19 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
# 20 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
# 21 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
	.2byte 0


SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle::
# 26 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	lockall
# 27 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 28 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 29 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 30 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_Movement_0
# 31 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 32 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN
# 33 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 34 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 35 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	switch VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1
# 36 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	case 1, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_3
# 37 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	case 2, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_4
# 38 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	case 3, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_5
SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_1:
# 40 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special LoadPlayerParty
# 41 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 0
# 42 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	releaseall
	end

SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_3:
# 36 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_AstoundingBattle
	goto SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_1

SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_4:
# 37 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_FeelYourDisappointment
	goto SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_1

SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_5:
# 38 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_DrawWasIt
	goto SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_1


SevenIsland_House_Room1_EventScript_OldWoman::
# 47 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	lock_faceplayer
# 48 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special ValidateEReaderTrainer
# 49 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SevenIsland_House_Room1_EventScript_OldWoman_2
# 53 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_TEMP_1, TRUE
	goto_if_eq SevenIsland_House_Room1_EventScript_OldWoman_5
SevenIsland_House_Room1_EventScript_OldWoman_4:
# 56 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles
	release_end

SevenIsland_House_Room1_EventScript_OldWoman_2:
# 50 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles
	release_end

SevenIsland_House_Room1_EventScript_OldWoman_5:
# 54 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting
	goto SevenIsland_House_Room1_EventScript_OldWoman_4


SevenIsland_House_Room1_EventScript_TrainerVisiting::
# 61 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special SavePlayerParty
# 62 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special BufferEReaderTrainerName
# 63 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_ChallengeVisitingTrainer, MSGBOX_YESNO
# 64 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SevenIsland_House_Room1_EventScript_TrainerVisiting_2
SevenIsland_House_Room1_EventScript_TrainerVisiting_1:
# 67 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_LimitThreeMonsPerSide
# 68 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special ChooseHalfPartyForBattle
# 70 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SevenIsland_House_Room1_EventScript_TrainerVisiting_5
SevenIsland_House_Room1_EventScript_TrainerVisiting_4:
# 73 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_SaveProgressBeforeBattle, MSGBOX_YESNO
# 74 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SevenIsland_House_Room1_EventScript_TrainerVisiting_8
SevenIsland_House_Room1_EventScript_TrainerVisiting_7:
# 77 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special LoadPlayerParty
# 78 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	call Common_EventScript_SaveGame
# 79 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SevenIsland_House_Room1_EventScript_TrainerVisiting_11
SevenIsland_House_Room1_EventScript_TrainerVisiting_10:
# 82 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special SavePlayerParty
# 83 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special ReducePlayerPartyToSelectedMons
# 84 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_DontHoldAnythingBack
# 85 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	closemessage
# 86 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	switch VAR_FACING
# 87 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	case DIR_NORTH, SevenIsland_House_Room1_EventScript_TrainerVisiting_15
# 90 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	case DIR_EAST, SevenIsland_House_Room1_EventScript_TrainerVisiting_16
# 93 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	case DIR_WEST, SevenIsland_House_Room1_EventScript_TrainerVisiting_17
SevenIsland_House_Room1_EventScript_TrainerVisiting_13:
# 97 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitmovement 0
# 98 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	warp MAP_SEVEN_ISLAND_HOUSE_ROOM2, 3, 1
# 99 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	waitstate
	release_end

SevenIsland_House_Room1_EventScript_TrainerVisiting_2:
# 65 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_DeclineBattle
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting_1

SevenIsland_House_Room1_EventScript_TrainerVisiting_5:
# 71 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_DeclineBattle
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting_4

SevenIsland_House_Room1_EventScript_TrainerVisiting_8:
# 75 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_DeclineBattle
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting_7

SevenIsland_House_Room1_EventScript_TrainerVisiting_11:
# 80 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	goto SevenIsland_House_Room1_EventScript_DeclineBattle
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting_10

SevenIsland_House_Room1_EventScript_TrainerVisiting_15:
# 88 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_EventScript_TrainerVisiting_Movement_0
# 89 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_EventScript_TrainerVisiting_Movement_1
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting_13

SevenIsland_House_Room1_EventScript_TrainerVisiting_16:
# 91 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_EventScript_TrainerVisiting_Movement_2
# 92 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_EventScript_TrainerVisiting_Movement_3
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting_13

SevenIsland_House_Room1_EventScript_TrainerVisiting_17:
# 94 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_EventScript_TrainerVisiting_Movement_0
# 95 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_EventScript_TrainerVisiting_Movement_4
	goto SevenIsland_House_Room1_EventScript_TrainerVisiting_13


SevenIsland_House_Room1_EventScript_DeclineBattle::
# 104 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	special LoadPlayerParty
# 105 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OhYouWontBattle
	release_end


SevenIsland_House_Room1_EventScript_Box::
# 110 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_SlightBreezeAroundBox, MSGBOX_SIGN
	end


# 30 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle_Movement_0:
# 30 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_right
# 30 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_faster_down
	step_end

# 88 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_Movement_0:
# 88 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_left
# 88 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_faster_right
	step_end

# 89 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_Movement_1:
# 89 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	delay_16
# 89 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_up
# 89 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_up
	step_end

# 91 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_Movement_2:
# 91 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_right
# 91 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	step_faster_left
	step_end

# 92 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_Movement_3:
# 92 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	delay_16
# 92 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_right
# 92 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_up
	step_end

# 95 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
SevenIsland_House_Room1_EventScript_TrainerVisiting_Movement_4:
# 95 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	delay_16
# 95 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_left
# 95 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	walk_up
	step_end

SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles::
# 114 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "I may not look like much now,\n"
	.string "but when I was younger…\p"
	.string "I flew everywhere, challenging\n"
	.string "TRAINERS wherever I found them.\p"
	.string "Now, my only source of enjoyment\n"
	.string "is reminiscing about the past while\l"
	.string "watching battles.$"

SevenIsland_House_Room1_Text_SlightBreezeAroundBox::
# 126 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "There is a slight breeze blowing\n"
	.string "around the box.$"

SevenIsland_House_Room1_Text_ChallengeVisitingTrainer::
# 131 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Ah!\n"
	.string "Welcome, my friend!\p"
	.string "Let me tell you something. There's\n"
	.string "a hidden room in the basement.\p"
	.string "A TRAINER named {STR_VAR_1} is\n"
	.string "waiting there now.\p"
	.string "Tell me, you did come to challenge\n"
	.string "{STR_VAR_1}, am I right?$"

SevenIsland_House_Room1_Text_OhYouWontBattle::
# 145 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Oh…\n"
	.string "You won't battle…\p"
	.string "I see, I see.\n"
	.string "… …\p"
	.string "Well, perhaps if you change your\n"
	.string "mind, do come back.$"

SevenIsland_House_Room1_Text_LimitThreeMonsPerSide::
# 156 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Ah!\n"
	.string "You will battle for me?\p"
	.string "It was worth my time moving the\n"
	.string "box aside, then.\p"
	.string "… …\n"
	.string "But there is one slight problem.\p"
	.string "This hidden room is not built very\n"
	.string "sturdy.\p"
	.string "Can I get you to limit it to\n"
	.string "battles of three POKéMON per side?$"

SevenIsland_House_Room1_Text_SaveProgressBeforeBattle::
# 173 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Fine! Before your battle, would\n"
	.string "you like to save your game?$"

SevenIsland_House_Room1_Text_DontHoldAnythingBack::
# 178 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "All right.\n"
	.string "Don't hold anything back!$"

SevenIsland_House_Room1_Text_StrVar1_1::
# 184 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "{STR_VAR_1}$"

SevenIsland_House_Room2_Text_MatchEndedUpDraw::
# 188 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "The match ended up a draw.$"

SevenIsland_House_Room1_Text_DrawWasIt::
# 192 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "A draw, was it?\p"
	.string "However, let me say that it was\n"
	.string "a worthy spectacle.\p"
	.string "I'd say it was a wonderful battle\n"
	.string "with a real sense of depth!$"

SevenIsland_House_Room1_Text_StrVar1_2::
# 203 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "{STR_VAR_1}$"

SevenIsland_House_Room1_Text_AstoundingBattle::
# 207 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Bravo!\p"
	.string "Bravo, indeed!\n"
	.string "What an astounding battle!\p"
	.string "It was so astounding, why, it keeps\n"
	.string "filling my eyes with tears!\p"
	.string "The thrust and parry of expertly\n"
	.string "used techniques!\p"
	.string "The clash of power upon power!\p"
	.string "Yes!\n"
	.string "It was sheer magnificence!$"

SevenIsland_House_Room1_Text_StrVar1_3::
# 226 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "{STR_VAR_1}$"

SevenIsland_House_Room1_Text_FeelYourDisappointment::
# 230 "data/maps/SevenIsland_House_Room1_Frlg/scripts.pory"
	.string "Too bad!\n"
	.string "I feel your disappointment.\p"
	.string "However, that disappointment is\n"
	.string "what will make you better.\p"
	.string "Use it, learn from it, and make it\n"
	.string "motivate you to seek greatness.\p"
	.string "Forget not this disappointment\n"
	.string "and redouble your training!$"
