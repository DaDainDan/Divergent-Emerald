BattleFrontier_ScottsHouse_MapScripts::
	.byte 0


BattleFrontier_ScottsHouse_EventScript_Scott::
# 4 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	lock_faceplayer
# 5 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, BattleFrontier_ScottsHouse_EventScript_Scott_2
# 8 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_3, BattleFrontier_ScottsHouse_EventScript_Scott_3
# 10 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, BattleFrontier_ScottsHouse_EventScript_Scott_4
BattleFrontier_ScottsHouse_EventScript_Scott_1:
# 14 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveItems
	end

BattleFrontier_ScottsHouse_EventScript_Scott_2:
# 6 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere, MSGBOX_DEFAULT
	release_end

BattleFrontier_ScottsHouse_EventScript_Scott_3:
# 9 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
	goto BattleFrontier_ScottsHouse_EventScript_Scott_1

BattleFrontier_ScottsHouse_EventScript_Scott_4:
# 11 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingGreatThings, MSGBOX_DEFAULT
	release_end


BattleFrontier_ScottsHouse_EventScript_CheckGiveItems::
# 19 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SCOTT_GIVES_BATTLE_POINTS, BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_2
# 21 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_COLLECTED_ALL_SILVER_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_3
# 23 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_COLLECTED_ALL_GOLD_SYMBOLS, BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_4
BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_1:
# 26 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	end

BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_2:
# 20 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_1

BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_3:
# 22 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_1

BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_4:
# 24 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveItems_1


BattleFrontier_ScottsHouse_EventScript_CheckGiveShield::
# 31 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SILVER_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_2
# 33 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOLD_SHIELD, BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_3
BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_1:
# 36 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
	end

BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_2:
# 32 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_1

BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_3:
# 34 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield_1


BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols::
# 41 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_TOWER_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_2
# 41 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_DOME_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_2
# 41 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_2
# 41 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_ARENA_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_2
# 42 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_FACTORY_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_2
# 42 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PIKE_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_2
# 42 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PYRAMID_SILVER, BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_2
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_1:
# 45 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols, MSGBOX_DEFAULT
	giveitem ITEM_LANSAT_BERRY
# 0 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_17
BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_16:
# 49 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_COLLECTED_ALL_SILVER_SYMBOLS
# 50 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_4
	release_end

BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_2:
# 43 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	goto BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_1

BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_17:
# 47 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_BerryPocketFull
	goto BattleFrontier_ScottsHouse_EventScript_CheckSilverSymbols_16


BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols::
# 55 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_TOWER_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_2
# 55 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_DOME_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_2
# 55 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PALACE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_2
# 55 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_ARENA_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_2
# 56 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_FACTORY_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_2
# 56 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PIKE_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_2
# 56 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto_if_unset FLAG_SYS_PYRAMID_GOLD, BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_2
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_1:
# 59 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols, MSGBOX_DEFAULT
	giveitem ITEM_STARF_BERRY
# 0 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_17
BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_16:
# 63 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_COLLECTED_ALL_GOLD_SYMBOLS
# 64 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_4
	release_end

BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_2:
# 57 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveShield
	goto BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_1

BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_17:
# 61 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_BerryPocketFull
	goto BattleFrontier_ScottsHouse_EventScript_CheckGoldSymbols_16


BattleFrontier_ScottsHouse_EventScript_BerryPocketFull::
# 69 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_BerryPocketStuffed, MSGBOX_DEFAULT
	release_end


BattleFrontier_ScottsHouse_EventScript_RandomComment::
# 74 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	random 3
# 75 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	switch VAR_RESULT
# 76 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	case 0, BattleFrontier_ScottsHouse_EventScript_RandomComment_3
# 77 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	case 1, BattleFrontier_ScottsHouse_EventScript_RandomComment_4
# 78 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	case 2, BattleFrontier_ScottsHouse_EventScript_RandomComment_5
BattleFrontier_ScottsHouse_EventScript_RandomComment_1:
	release_end

BattleFrontier_ScottsHouse_EventScript_RandomComment_3:
# 76 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers, MSGBOX_DEFAULT
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment_1

BattleFrontier_ScottsHouse_EventScript_RandomComment_4:
# 77 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain, MSGBOX_DEFAULT
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment_1

BattleFrontier_ScottsHouse_EventScript_RandomComment_5:
# 78 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier, MSGBOX_DEFAULT
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment_1


BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield::
# 84 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 85 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 86 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 87 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, 50
	goto_if_ge BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_2
BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_1:
# 90 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
# 91 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 92 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, 50
	goto_if_ge BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_5
BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_4:
# 95 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
	end

BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_2:
# 88 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveSilverShield
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_1

BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_5:
# 93 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveSilverShield
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveSilverShield_4


BattleFrontier_ScottsHouse_EventScript_GiveSilverShield::
# 100 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow, MSGBOX_DEFAULT
	givedecoration DECOR_SILVER_SHIELD
# 0 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_GiveSilverShield_2
BattleFrontier_ScottsHouse_EventScript_GiveSilverShield_1:
# 104 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_RECEIVED_SILVER_SHIELD
# 105 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 106 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
	end

BattleFrontier_ScottsHouse_EventScript_GiveSilverShield_2:
# 102 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_NoRoomForShield
	goto BattleFrontier_ScottsHouse_EventScript_GiveSilverShield_1


BattleFrontier_ScottsHouse_EventScript_NoRoomForShield::
# 111 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ComeBackForThisLater, MSGBOX_DEFAULT
	release_end


BattleFrontier_ScottsHouse_EventScript_GivenShield::
# 116 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings, MSGBOX_DEFAULT
	release_end


BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield::
# 121 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 122 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 123 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 124 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, 100
	goto_if_ge BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_2
BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_1:
# 127 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_OPEN
# 128 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	tower_get TOWER_DATA_WIN_STREAK
# 129 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, 100
	goto_if_ge BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_5
BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_4:
# 132 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_RandomComment
	end

BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_2:
# 125 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveGoldShield
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_1

BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_5:
# 130 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GiveGoldShield
	goto BattleFrontier_ScottsHouse_EventScript_CheckGiveGoldShield_4


BattleFrontier_ScottsHouse_EventScript_GiveGoldShield::
# 137 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow, MSGBOX_DEFAULT
	givedecoration DECOR_GOLD_SHIELD
# 0 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_GiveGoldShield_2
BattleFrontier_ScottsHouse_EventScript_GiveGoldShield_1:
# 141 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_RECEIVED_GOLD_SHIELD
# 142 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_3
# 143 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_GivenShield
	end

BattleFrontier_ScottsHouse_EventScript_GiveGoldShield_2:
# 139 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	goto BattleFrontier_ScottsHouse_EventScript_NoRoomForShield
	goto BattleFrontier_ScottsHouse_EventScript_GiveGoldShield_1


BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier::
# 148 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier, MSGBOX_DEFAULT
# 149 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	closemessage
# 150 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	delay 30
# 151 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	switch VAR_FACING
# 152 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	case DIR_NORTH, BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_3
# 154 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	case DIR_SOUTH, BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_4
# 156 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	case DIR_EAST, BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_5
# 158 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	case DIR_WEST, BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_6
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_1:
# 162 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 163 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal, MSGBOX_DEFAULT
# 164 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_FacePlayer
# 165 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	waitmovement 0
# 166 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing, MSGBOX_DEFAULT
# 167 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_SCOTT_STATE, 13
	goto_if_eq BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_8
# 171 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_SCOTT_STATE, 9
	goto_if_ge BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_9
# 175 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	compare VAR_SCOTT_STATE, 6
	goto_if_ge BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_10
# 180 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 1
# 181 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 1
BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_7:
# 183 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	special GiveFrontierBattlePoints
# 184 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 185 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	msgbox BattleFrontier_ScottsHouse_Text_ExplainBattlePoints, MSGBOX_DEFAULT
# 186 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_SCOTT_GIVES_BATTLE_POINTS
# 187 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 188 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	release_end
	end

BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_3:
# 153 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_StepFasterUp
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_1

BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_4:
# 155 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_StepFasterDown
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_1

BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_5:
# 157 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_StepFasterRight
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_1

BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_6:
# 159 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	applymovement LOCALID_SCOTTS_HOUSE_SCOTT, Common_Movement_StepFasterLeft
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_1

BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_8:
# 168 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 4
# 169 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 4
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_7

BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_9:
# 172 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 3
# 173 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 3
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_7

BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_10:
# 176 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	buffernumberstring STR_VAR_1, 2
# 177 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	setvar VAR_0x8004, 2
	goto BattleFrontier_ScottsHouse_EventScript_WelcomeToFrontier_7


BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier::
# 192 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Well, hello and welcome!\n"
	.string "Heheh… Sorry about the cramped space.\p"
	.string "Anyway, {PLAYER}{KUN}, let me formally\n"
	.string "welcome you to the BATTLE FRONTIER.\p"
	.string "This is my dream come true.\n"
	.string "It took me years and years, but I've\l"
	.string "finally given shape to my dream.$"

BattleFrontier_ScottsHouse_Text_HowMuchEffortItTookToMakeReal::
# 204 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "On reflection, it was a terribly long\n"
	.string "journey…\p"
	.string "I left home alone on a quest to find\n"
	.string "strong TRAINERS.\p"
	.string "No one can imagine how much effort\n"
	.string "or time it took to make this real.$"

BattleFrontier_ScottsHouse_Text_HaveThisAsMementoOfOurPathsCrossing::
# 215 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "But that's all in the past.\n"
	.string "No point dwelling on that!\p"
	.string "All I want for you is to enjoy battling\n"
	.string "to your heart's content here.\p"
	.string "{PLAYER}{KUN}, I want you to have this\n"
	.string "as a memento for all the time our\l"
	.string "paths crossed on our journeys.$"

BattleFrontier_ScottsHouse_Text_ObtainedXBattlePoints::
# 227 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "{PLAYER} obtained\n"
	.string "{STR_VAR_1} Battle Point(s).$"

BattleFrontier_ScottsHouse_Text_ExplainBattlePoints::
# 232 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: You can check your Battle\n"
	.string "Points on your FRONTIER PASS.\p"
	.string "The more success you have here at\n"
	.string "the BATTLE FRONTIER, the more Battle\l"
	.string "Points you will collect.\p"
	.string "Use your Battle Points the way you\n"
	.string "see fit, like trading them for items.$"

BattleFrontier_ScottsHouse_Text_ExpectingGreatThings::
# 244 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I'm expecting great things from you!$"

BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers::
# 248 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Every TRAINER is an individual.\n"
	.string "They all lead lives of their own.\p"
	.string "But when they're in a battle,\n"
	.string "it doesn't matter who they are.\p"
	.string "They're all the same!\p"
	.string "I love the purity of battle,\n"
	.string "where everyone is equal.\p"
	.string "That's why I go everywhere seeking\n"
	.string "TRAINERS who are serious about\l"
	.string "battling, and invite them here.$"

BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain::
# 265 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Have you met any of\n"
	.string "the FRONTIER BRAINS?\p"
	.string "Better yet, have you obtained any\n"
	.string "symbols from them?\p"
	.string "I handpicked the FRONTIER BRAINS\n"
	.string "as the toughest TRAINERS anywhere.\p"
	.string "But I'm sure that seeing how tough\n"
	.string "you are will startle even them!$"

BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier::
# 279 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: You don't just train for battle,\n"
	.string "right?\p"
	.string "I think I remember you working on\n"
	.string "a POKéDEX as well.\p"
	.string "Well, guess what?\p"
	.string "You may run into wild POKéMON in\n"
	.string "the BATTLE FRONTIER somewhere…\l"
	.string "Fufufu!$"

BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols::
# 293 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Are you enjoying things in\n"
	.string "the BATTLE FRONTIER?\p"
	.string "…Wait a second…\n"
	.string "Oh!\p"
	.string "Your FRONTIER PASS!\n"
	.string "You've collected the full set\l"
	.string "of silver symbols!\p"
	.string "That's more than impressive!\n"
	.string "You are tough, just as I suspected!\p"
	.string "Normally, I wouldn't do something\n"
	.string "like this, but this is a special time!\p"
	.string "I want you to have this.\n"
	.string "I'm sure you can put it to proper use.$"

BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols::
# 314 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: I hope you're enjoying\n"
	.string "everything in the BATTLE FRONTIER.\p"
	.string "…Wait a second…\n"
	.string "Oh, my disbelieving eyes!\p"
	.string "Your FRONTIER PASS!\n"
	.string "You've gathered up the full set\l"
	.string "of gold symbols!\p"
	.string "That's more than stupendous!\n"
	.string "You're incredible, just as I suspected!\p"
	.string "… … … … … …\p"
	.string "{PLAYER}, you've got to accept this!\p"
	.string "I think you will be able to\n"
	.string "appreciate the value of my gift!$"

BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere::
# 336 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I must say I have the gift of knowing\n"
	.string "a good TRAINER when I see one.\p"
	.string "I'm so glad I had the foresight to\n"
	.string "bring you here!$"

BattleFrontier_ScottsHouse_Text_BerryPocketStuffed::
# 344 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Your BERRY POCKET seems to\n"
	.string "be stuffed.$"

BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow::
# 349 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Oh, I heard about you!\n"
	.string "How you ruled the BATTLE TOWER!\l"
	.string "You beat over 50 TRAINERS in a row?\p"
	.string "That's fantastic!\n"
	.string "I want you to have this!$"

BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow::
# 358 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "SCOTT: Oh, my! I heard about you!\n"
	.string "How you overwhelmed the BATTLE TOWER!\l"
	.string "You beat over 100 TRAINERS in a row?\p"
	.string "That's ridiculously spectacular!\n"
	.string "You've got to have this!$"

BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings::
# 367 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "I'll be expecting to hear even greater\n"
	.string "things about you now!$"

BattleFrontier_ScottsHouse_Text_ComeBackForThisLater::
# 372 "data/maps/BattleFrontier_ScottsHouse/scripts.pory"
	.string "Oops, well, if you have too much\n"
	.string "stuff, come back for this later.$"
