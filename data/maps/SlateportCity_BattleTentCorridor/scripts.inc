SlateportCity_BattleTentCorridor_MapScripts::
# 3 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 6 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

SlateportCity_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, SlateportCity_BattleTentCorridor_EventScript_EnterCorridor
	.2byte 0

SlateportCity_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 7 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SlateportCity_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

SlateportCity_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 8 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 9 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	compare VAR_0x8006, 1
	goto_if_eq SlateportCity_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2
SlateportCity_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1:
# 13 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

SlateportCity_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2:
# 10 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	setobjectxy LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, 2, 2
# 11 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	turnobject LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, DIR_SOUTH
	goto SlateportCity_BattleTentCorridor_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1


SlateportCity_BattleTentCorridor_EventScript_EnterCorridor::
# 20 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	compare VAR_0x8006, 1
	goto_if_eq SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_2
SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_1:
# 29 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	setvar VAR_TEMP_0, 1
# 30 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_Movement_0
# 31 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_Movement_1
# 32 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 33 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	compare VAR_0x8006, 2
	goto_if_eq SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_5
SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_4:
# 38 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_generaterentalmons
# 39 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_generateopponentmons
# 40 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_HoldMonsChooseFromSelection, MSGBOX_DEFAULT
# 41 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 42 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_rentmons
# 43 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitstate
# 44 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
	return

SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_2:
# 21 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	factory_setopponentmons
# 22 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	factory_resethelditems
# 23 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_LetUsRestoreMons, MSGBOX_DEFAULT
# 24 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	playfanfare MUS_HEAL
# 25 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitfanfare
# 26 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	special HealPlayerParty
# 27 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
	goto SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_1

SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_5:
# 34 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	special SavePlayerParty
# 35 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	factory_setparties 0
# 36 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
	goto SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_4


SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom::
# 48 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_RightThisWay, MSGBOX_DEFAULT
# 49 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	closemessage
# 50 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, Common_Movement_StepFasterUp
# 51 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 52 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	opendoor 2, 1
# 53 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitdooranim
# 54 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_SLATEPORT_TENT_CORRIDOR_ATTENDANT, SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom_Movement_0
# 55 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom_Movement_1
# 56 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmovement 0
# 57 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	closedoor 2, 1
# 58 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitdooranim
# 59 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	warp MAP_SLATEPORT_CITY_BATTLE_TENT_BATTLE_ROOM, 4, 4
# 60 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitstate
	end


SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent::
# 65 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 66 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	switch VAR_RESULT
# 67 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 1, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_3
# 68 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 2, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_4
SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_1:
# 70 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmessage
# 71 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	multichoice 20, 6, MULTI_GO_ON_REST_RETIRE, TRUE
# 72 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	switch VAR_RESULT
# 73 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 0, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_7
# 74 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 1, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_8
# 75 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 2, SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_9
SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_5:
	end

SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_3:
# 67 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor2ndOpponent
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_1

SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_4:
# 68 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_ReadyFor3rdOpponent
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_1

SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_7:
# 73 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskSwapMon
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_5

SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_8:
# 74 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_5

SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_9:
# 75 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent_5


SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge::
# 81 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_SaveAndQuitGame, MSGBOX_YESNO
# 82 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge_2
# 91 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge_1:
	end

SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge_2:
# 83 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_SavingDataPleaseWait
# 84 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmessage
# 85 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_save CHALLENGE_STATUS_PAUSED
# 86 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	playse SE_SAVE
# 87 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitse
# 88 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	frontier_reset
	goto SlateportCity_BattleTentCorridor_EventScript_AskPauseChallenge_1


SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge::
# 97 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	message BattleFrontier_BattleFactoryPreBattleRoom_Text_RetireFromChallenge
# 98 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitmessage
# 99 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 100 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	switch VAR_RESULT
# 101 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 0, SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge_3
# 102 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case 1, SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge_4
# 103 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge_4
SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge_1:
	end

SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge_3:
# 101 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTent_EventScript_WarpToLobbyLost
	goto SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge_1

SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge_4:
# 104 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_AskReadyForOpponent
	goto SlateportCity_BattleTentCorridor_EventScript_AskRetireChallenge_1


SlateportCity_BattleTentCorridor_EventScript_AskSwapMon::
# 110 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_generateopponentmons
# 111 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_LikeToSwapMon, MSGBOX_YESNO
# 112 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_BattleTentCorridor_EventScript_AskSwapMon_2
SlateportCity_BattleTentCorridor_EventScript_AskSwapMon_1:
# 120 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	goto SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom
	end

SlateportCity_BattleTentCorridor_EventScript_AskSwapMon_2:
# 113 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 114 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	slateporttent_swapmons
# 115 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	waitstate
# 116 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne SlateportCity_BattleTentCorridor_EventScript_AskSwapMon_4
	goto SlateportCity_BattleTentCorridor_EventScript_AskSwapMon_1

SlateportCity_BattleTentCorridor_EventScript_AskSwapMon_4:
# 117 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	msgbox BattleFrontier_BattleFactoryPreBattleRoom_Text_YourSwapIsComplete, MSGBOX_DEFAULT
	goto SlateportCity_BattleTentCorridor_EventScript_AskSwapMon_1


# 30 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_Movement_0:
# 30 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 30 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 30 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 30 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 30 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	step_faster_down
	step_end

# 31 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_EnterCorridor_Movement_1:
# 31 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 31 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 31 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 31 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
	step_end

# 54 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom_Movement_0:
# 54 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 54 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	set_invisible
	step_end

# 55 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
SlateportCity_BattleTentCorridor_EventScript_EnterBattleRoom_Movement_1:
# 55 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 55 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	walk_up
# 55 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	set_invisible
	step_end

SlateportCity_ContestHall_Text_AdviceForContests::
# 126 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Want a tasty little bit of advice\n"
	.string "for CONTESTS?\p"
	.string "Using a certain move after another\n"
	.string "certain kind of move sometimes gets\l"
	.string "you extra attention.\p"
	.string "If you know what you're doing,\n"
	.string "you can score big in appeal.\p"
	.string "Of course, your opponents might try\n"
	.string "disrupting your POKéMON's showing.$"

SlateportCity_ContestHall_Text_MyPapaIsContestJudge::
# 141 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "My papa, he's a CONTEST JUDGE.\p"
	.string "I wonder what I should be when I\n"
	.string "grow up, a JUDGE or a GYM LEADER?$"

SlateportCity_ContestHall_Text_ImLikeMajorlyCheesed::
# 148 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Hey, man, I'm like majorly cheesed,\n"
	.string "you know. Like, you know, I just\l"
	.string "wanted to know why my POKéMON\l"
	.string "never won, you know, like, hey?\p"
	.string "So, like, I gave the JUDGE my two\n"
	.string "cents, you know, they're free.\p"
	.string "And he wouldn't hear me out, like, hey!\n"
	.string "So, like, total bummer, man!\p"
	.string "Hey, like, you! Zip it, you know?\n"
	.string "Just, you know, take this!$"

SlateportCity_ContestHall_Text_ExplainTorment::
# 164 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "That's, like, TM41, you know?\n"
	.string "Hey, it's TORMENT, you hearing me?\p"
	.string "Like, it won't let the other guy\n"
	.string "use the same move twice in a row, see?\p"
	.string "Hey, now, you listen here, like,\n"
	.string "I'm not laying a torment on you!$"

SlateportCity_ContestHall_Text_MCStepUpTakePartInContest::
# 175 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "MC: Oh, my, my!\n"
	.string "Now isn't that a dandy of a POKéMON?\p"
	.string "Please! Do step right up and take\n"
	.string "part in our splendid CONTESTS!\p"
	.string "You'll do well! I'm sure of it!\n"
	.string "My eyes have never failed me!$"

SlateportCity_ContestHall_Text_JudgeWouldntDoToMissContest::
# 186 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "JUDGE: Well, hello there!\n"
	.string "I see that you're a TRAINER!\p"
	.string "Then, it just wouldn't do for you\n"
	.string "to miss a POKéMON CONTEST!\p"
	.string "Get a CONTEST PASS in VERDANTURF\n"
	.string "CITY and enter anytime!$"

SlateportCity_ContestHall_Text_ItsAppealTime::
# 197 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "It's appeal time!\n"
	.string "What should I lead with?$"

SlateportCity_ContestHall_Text_DidntPayAttentionToAppeal::
# 202 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "They didn't pay much attention to\n"
	.string "my POKéMON's appeal…\p"
	.string "Humph, that JUDGE, he doesn't know\n"
	.string "a good thing when he sees it.$"

SlateportCity_ContestHall_Text_RewardWithSageAdvice::
# 210 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Oh, hi! You must be a serious fan to get\n"
	.string "this close to the action.\p"
	.string "I'll reward your enthusiasm with\n"
	.string "this sage advice.\p"
	.string "If a move goes over really well,\n"
	.string "the audience will get excited.\p"
	.string "The POKéMON that makes its appeal\n"
	.string "right when everyone's excited…\p"
	.string "Well, you'd think something good has\n"
	.string "to happen!$"

SlateportCity_ContestHall_Text_MoreFreakedOutThanMon::
# 227 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "I can't do this! I'm more freaked out\n"
	.string "than my POKéMON.\p"
	.string "I'm shivering and my heart is racing!$"

SlateportCity_ContestHall_Text_BattleAndContestAlike::
# 234 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "A battle and a CONTEST aren't the\n"
	.string "same, but they are alike, too.\p"
	.string "You need to work hard and believe\n"
	.string "in the POKéMON you've raised.$"

SlateportCity_ContestHall_Text_MonLooksOnTopOfGame::
# 242 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "That POKéMON looks like it's on top\n"
	.string "of its game, huh?\p"
	.string "A POKéMON that does good in the\n"
	.string "secondary judging seems to be more\l"
	.string "relaxed when it's doing appeals.$"

SlateportCity_ContestHall_Text_MyMonBetterThanThatLot::
# 251 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Will you look at that sorry sight?\p"
	.string "Heh, my POKéMON's absolutely better\n"
	.string "than that lot!$"

SlateportCity_ContestHall_Text_GetUrgeToMoveWithMon::
# 258 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "Don't you get the urge to move with\n"
	.string "POKéMON if they're putting on an\l"
	.string "energetic appeal?$"

SlateportCity_ContestHall_Text_HyperRankStage::
# 264 "data/maps/SlateportCity_BattleTentCorridor/scripts.pory"
	.string "POKéMON CONTESTS\n"
	.string "HYPER RANK STAGE!$"
