BattleFrontier_ReceptionGate_MapScripts::
# 19 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_ReceptionGate_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_ReceptionGate_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_ReceptionGate_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 20 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
	end

BattleFrontier_ReceptionGate_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	map_script_2 VAR_HAS_ENTERED_BATTLE_FRONTIER, 0, BattleFrontier_ReceptionGate_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

BattleFrontier_ReceptionGate_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lockall
# 5 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setvar VAR_HAS_ENTERED_BATTLE_FRONTIER, 1
# 6 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playse SE_PIN
# 7 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
# 8 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 9 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_Delay48
# 10 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 11 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay, MSGBOX_DEFAULT
# 12 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 13 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 14 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 15 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ScottScene
	end


BattleFrontier_ReceptionGate_EventScript_ScottScene::
# 26 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 27 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_IssueFrontierPass, MSGBOX_DEFAULT
# 28 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 29 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass
# 30 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitfanfare
# 31 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 32 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass, MSGBOX_DEFAULT
# 33 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setflag FLAG_SYS_FRONTIER_PASS
# 34 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
# 35 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame, MSGBOX_DEFAULT
# 36 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 37 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_StepFasterUp
# 38 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_StepFasterUp
# 39 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 40 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 41 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	playse SE_PIN
# 42 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, Common_Movement_ExclamationMark
# 43 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, Common_Movement_ExclamationMark
# 44 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 45 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 46 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay, MSGBOX_DEFAULT
# 47 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 48 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GREETER, BattleFrontier_ReceptionGate_EventScript_ScottScene_Movement_0
# 49 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_GUIDE, BattleFrontier_ReceptionGate_EventScript_ScottScene_Movement_1
# 50 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_ReceptionGate_EventScript_ScottScene_Movement_0
# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_EventScript_ScottScene_Movement_2
# 52 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 53 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere, MSGBOX_DEFAULT
# 54 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	closemessage
# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	applymovement LOCALID_FRONTIER_RECEPTION_SCOTT, BattleFrontier_ReceptionGate_EventScript_ScottScene_Movement_3
# 56 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmovement 0
# 57 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	removeobject LOCALID_FRONTIER_RECEPTION_SCOTT
# 58 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	releaseall
	end


# 63 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_Movement_WalkDown:
# 64 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 64 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
	step_end

BattleFrontier_ReceptionGate_EventScript_Greeter::
# 68 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock_faceplayer
# 69 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 70 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
	release_end


BattleFrontier_ReceptionGate_EventScript_FacilityGuide::
# 75 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock_faceplayer
# 76 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFacilities, MSGBOX_DEFAULT
# 77 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end


BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout::
# 82 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich2
# 83 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 84 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_RECEPTIONIST
# 85 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	special ShowScrollableMultichoice
# 86 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 87 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_3
# 88 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_4
# 89 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_5
# 90 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_6
# 91 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 4, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_7
# 92 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 5, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_8
# 93 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 6, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_9
# 94 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 7, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_10
# 95 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 8, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_11
# 96 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 9, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_12
# 97 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_12
BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1:
# 101 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_3:
# 87 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleTowerInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_4:
# 88 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleDomeInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_5:
# 89 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePalaceInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_6:
# 90 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleArenaInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_7:
# 91 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattleFactoryInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_8:
# 92 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePikeInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_9:
# 93 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePyramidInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_10:
# 94 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_RankingHallInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_11:
# 95 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseFacilityToLearnAbout_12:
# 98 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
	release_end


BattleFrontier_ReceptionGate_EventScript_RulesGuide::
# 106 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock_faceplayer
# 107 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToRules, MSGBOX_DEFAULT
# 108 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
	end


BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout::
# 113 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhat
# 114 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 115 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	multichoice 15, 0, MULTI_FRONTIER_RULES, FALSE
# 116 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 117 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_3
# 118 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_4
# 119 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_5
# 120 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_6
# 121 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 4, BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_7
# 122 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 5, BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_8
# 123 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_8
BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_1:
# 127 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_3:
# 117 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_LevelModeInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_4:
# 118 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_Level50Info, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_5:
# 119 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_OpenLevelInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_6:
# 120 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_MonEntryInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_7:
# 121 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_HoldItemsInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseRuleToLearnAbout_8:
# 124 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
	release_end


BattleFrontier_ReceptionGate_EventScript_FrontierPassGuide::
# 132 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	lock_faceplayer
# 133 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass, MSGBOX_DEFAULT
# 134 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
	end


BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout::
# 139 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	message BattleFrontier_ReceptionGate_Text_LearnAboutWhich1
# 140 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	waitmessage
# 141 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	multichoice 16, 4, MULTI_FRONTIER_PASS_INFO, FALSE
# 142 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	switch VAR_RESULT
# 143 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 0, BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_3
# 144 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 1, BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_4
# 145 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 2, BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_5
# 146 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case 3, BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_6
# 147 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_6
BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_1:
# 151 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout
	end

BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_3:
# 143 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_SymbolsInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_4:
# 144 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_RecordedBattleInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_5:
# 145 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_BattlePointsInfo, MSGBOX_DEFAULT
	goto BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_1

BattleFrontier_ReceptionGate_EventScript_ChooseFrontierPassInfoToLearnAbout_6:
# 148 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	msgbox BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier, MSGBOX_DEFAULT
	release_end


# 13 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 13 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 13 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 13 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
# 13 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
	step_end

# 48 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ScottScene_Movement_0:
# 48 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 48 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 48 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 48 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 48 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_faster_right
	step_end

# 49 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ScottScene_Movement_1:
# 49 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 49 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 49 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_16
# 49 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	delay_8
# 49 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	step_faster_left
	step_end

# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ScottScene_Movement_2:
# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_down
# 51 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_left
	step_end

# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
BattleFrontier_ReceptionGate_EventScript_ScottScene_Movement_3:
# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_right
# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
# 55 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	walk_up
	step_end

BattleFrontier_ReceptionGate_Text_FirstTimeHereThisWay::
# 155 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Is it your first time here?\n"
	.string "Please step this way!$"

BattleFrontier_ReceptionGate_Text_WelcomeToBattleFrontier::
# 160 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The front lines of POKéMON battling!\n"
	.string "Welcome to the BATTLE FRONTIER!$"

BattleFrontier_ReceptionGate_Text_IssueFrontierPass::
# 165 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "For a first-time visitor, we issue\n"
	.string "the FRONTIER PASS.\p"
	.string "It's for use at all the facilities\n"
	.string "in the BATTLE FRONTIER.\p"
	.string "Here you are!$"

BattleFrontier_ReceptionGate_Text_ObtainedFrontierPass::
# 175 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "{PLAYER} obtained\n"
	.string "the FRONTIER PASS.$"

BattleFrontier_ReceptionGate_Text_PlacedTrainerCardInFrontierPass::
# 180 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "{PLAYER} placed the TRAINER CARD\n"
	.string "in the FRONTIER PASS.$"

BattleFrontier_ReceptionGate_Text_EnjoyBattleFrontier::
# 185 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "We hope you enjoy all that the BATTLE\n"
	.string "FRONTIER has to offer!$"

BattleFrontier_ReceptionGate_Text_IfItIsntPlayerYouCame::
# 190 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "???: Well, if it isn't {PLAYER}{KUN}!\n"
	.string "You came out here!$"

BattleFrontier_ReceptionGate_Text_OhMrScottGoodDay::
# 195 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "GUIDE: Oh! MR. SCOTT, sir!\n"
	.string "Good day to you, sir!$"

BattleFrontier_ReceptionGate_Text_ScottGreatToSeeYouHere::
# 200 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "{SPEAKER NAME_SCOTT}It's great to see you here,\n"
	.string "it really is!\p"
	.string "I hope you'll take your time and\n"
	.string "explore everywhere.\p"
	.string "Naturally, I hope you'll also experience\n"
	.string "the pure essence of battling.\p"
	.string "I also have my quarters here, so feel\n"
	.string "free to visit if you have time.$"

BattleFrontier_ReceptionGate_Text_YourGuideToFacilities::
# 214 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I'm your guide to the various facilities\n"
	.string "here in the BATTLE FRONTIER.$"

BattleFrontier_ReceptionGate_Text_LearnAboutWhich2::
# 219 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Which would you like to learn about?$"

BattleFrontier_ReceptionGate_Text_BattleTowerInfo::
# 223 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "It is the gigantic tower considered\n"
	.string "to be the BATTLE FRONTIER's symbol.\p"
	.string "There are four kinds of BATTLE ROOMS\n"
	.string "in the tower for SINGLE, DOUBLE, MULTI,\l"
	.string "and LINK MULTI BATTLES.$"

BattleFrontier_ReceptionGate_Text_BattleDomeInfo::
# 232 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE DOME is the large building\n"
	.string "shaped like a huge egg.\p"
	.string "Events named Battle Tourneys are held\n"
	.string "in this facility.\p"
	.string "The Battle Tourneys are offered in\n"
	.string "two courses--for SINGLE and DOUBLE\l"
	.string "BATTLES.$"

BattleFrontier_ReceptionGate_Text_BattlePalaceInfo::
# 244 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE PALACE is the red building\n"
	.string "on the right of the BATTLE FRONTIER.\p"
	.string "There are two kinds of BATTLE HALLS\n"
	.string "for SINGLE and DOUBLE BATTLES.$"

BattleFrontier_ReceptionGate_Text_BattleArenaInfo::
# 252 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE ARENA is the dojo-like\n"
	.string "building at the center-right of\l"
	.string "the BATTLE FRONTIER.\p"
	.string "An event called the Set KO Tourney\n"
	.string "takes place at the BATTLE ARENA.$"

BattleFrontier_ReceptionGate_Text_BattleFactoryInfo::
# 261 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE FACTORY is the large\n"
	.string "building that is the closest to us.\p"
	.string "An event called the Battle Swap\n"
	.string "is conducted there.\p"
	.string "The Battle Swap event is offered in\n"
	.string "two courses for SINGLE and DOUBLE\l"
	.string "BATTLES.$"

BattleFrontier_ReceptionGate_Text_BattlePikeInfo::
# 273 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE PIKE is the building shaped\n"
	.string "like a POKéMON at the center-left of\l"
	.string "the BATTLE FRONTIER.\p"
	.string "An event called the Battle Choice\n"
	.string "is conducted there.$"

BattleFrontier_ReceptionGate_Text_BattlePyramidInfo::
# 282 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The BATTLE PYRAMID is the enormous\n"
	.string "pyramid.\p"
	.string "An event called the Battle Quest\n"
	.string "is conducted there.$"

BattleFrontier_ReceptionGate_Text_RankingHallInfo::
# 290 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The RANKING HALL is located near\n"
	.string "the BATTLE TOWER.\p"
	.string "There, you may see the most fantastic\n"
	.string "records left by the TRAINERS that\l"
	.string "took on the many challenges of\l"
	.string "the BATTLE FRONTIER.$"

BattleFrontier_ReceptionGate_Text_ExchangeCornerInfo::
# 300 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The EXCHANGE SERVICE CORNER is near\n"
	.string "the BATTLE TOWER.\p"
	.string "The Battle Points you have earned in\n"
	.string "the BATTLE FRONTIER may be exchanged\l"
	.string "for fabulous prizes there.$"

BattleFrontier_ReceptionGate_Text_YourGuideToRules::
# 309 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I'm your guide to the basic rules that\n"
	.string "are common to all the challenges\l"
	.string "offered by the facilities in the BATTLE\l"
	.string "FRONTIER.$"

BattleFrontier_ReceptionGate_Text_LearnAboutWhat::
# 316 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "What would you like to learn about?$"

BattleFrontier_ReceptionGate_Text_LevelModeInfo::
# 320 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "All the challenges at the BATTLE\n"
	.string "FRONTIER's facilities come in\l"
	.string "two courses--Level 50 and Open Level.$"

BattleFrontier_ReceptionGate_Text_Level50Info::
# 326 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Level 50 course is open to POKéMON\n"
	.string "up to and including Level 50.\p"
	.string "Please keep in mind, however, that\n"
	.string "no TRAINER you face will have any\l"
	.string "POKéMON below Level 50.\p"
	.string "This course is the entry level for\n"
	.string "battles at the BATTLE FRONTIER.\p"
	.string "To begin, we hope you will challenge\n"
	.string "this course.$"

BattleFrontier_ReceptionGate_Text_OpenLevelInfo::
# 341 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "The Open Level course places no limit\n"
	.string "on the levels of POKéMON entering\l"
	.string "challenges.\p"
	.string "The levels of your opponents will\n"
	.string "be adjusted to match the levels of\l"
	.string "your POKéMON.\p"
	.string "However, no TRAINER you face will\n"
	.string "have any POKéMON below Level 60.$"

BattleFrontier_ReceptionGate_Text_MonEntryInfo::
# 354 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Virtually any kind of POKéMON may take\n"
	.string "on the challenges at all facilities.\p"
	.string "EGGS and certain kinds of POKéMON,\n"
	.string "however, are not permitted.\p"
	.string "The numbers of POKéMON required for\n"
	.string "challenges will depend on the facility.\p"
	.string "At all facilities, however, two or more\n"
	.string "of the same kind of POKéMON are not\l"
	.string "permitted.$"

BattleFrontier_ReceptionGate_Text_HoldItemsInfo::
# 369 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "When entering a challenge at a BATTLE\n"
	.string "FRONTIER facility, POKéMON may not\l"
	.string "be holding the same kind of item.\p"
	.string "Please make sure that all POKéMON\n"
	.string "entering a challenge are holding\l"
	.string "different items.$"

BattleFrontier_ReceptionGate_Text_YourGuideToFrontierPass::
# 379 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "I'm your guide to the FRONTIER PASS.$"

BattleFrontier_ReceptionGate_Text_LearnAboutWhich1::
# 383 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Which would you like to learn about?$"

BattleFrontier_ReceptionGate_Text_SymbolsInfo::
# 387 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "There are seven facilities at\n"
	.string "the BATTLE FRONTIER.\p"
	.string "TRAINERS who gain recognition for\n"
	.string "their abilities may be rewarded with\l"
	.string "symbols from each of the facilities.\p"
	.string "To earn a symbol, TRAINERS may need\n"
	.string "to defeat other TRAINERS in a row,\l"
	.string "and may need to win events repeatedly.\p"
	.string "It's certainly not easy to win symbols.\n"
	.string "I wish you the best of luck!$"

BattleFrontier_ReceptionGate_Text_RecordedBattleInfo::
# 403 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "It is possible to record one battle\n"
	.string "on your FRONTIER PASS.\p"
	.string "You may record a battle you had with\n"
	.string "a friend or friends.\p"
	.string "Or you may record a battle conducted\n"
	.string "at the BATTLE FRONTIER excluding\l"
	.string "matches at the BATTLE PIKE or\l"
	.string "the BATTLE PYRAMID.\p"
	.string "You may choose to record your match\n"
	.string "at the end of a battle.$"

BattleFrontier_ReceptionGate_Text_BattlePointsInfo::
# 419 "data/maps/BattleFrontier_ReceptionGate/scripts.pory"
	.string "Battle Points are rewards given to\n"
	.string "TRAINERS who battled outstandingly\l"
	.string "at the BATTLE FRONTIER.\p"
	.string "You may trade in your Battle Points\n"
	.string "for prizes at the EXCHANGE SERVICE\l"
	.string "CORNER.$"
