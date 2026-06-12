BattleFrontier_OutsideWest_MapScripts::
# 2 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BattleFrontier_OutsideWest_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 4 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
	end


BattleFrontier_OutsideWest_EventScript_FerryAttendant::
# 10 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock_faceplayer
# 11 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
	checkitem ITEM_SS_TICKET
# 0 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FerryAttendant_2
# 16 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
# 17 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 18 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
	end

BattleFrontier_OutsideWest_EventScript_FerryAttendant_2:
# 13 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
	release_end


BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
# 23 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
# 24 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 25 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_3
# 26 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_4
# 27 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_5
# 28 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_5
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_1:
	end

BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_3:
# 25 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FerryToSlateport
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_1

BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_4:
# 26 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FerryToLilycove
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_1

BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination_5:
# 29 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
	release_end


BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
# 36 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
# 37 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FerryToSlateport_2
BattleFrontier_OutsideWest_EventScript_FerryToSlateport_1:
# 40 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 41 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 42 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
# 43 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
	release_end

BattleFrontier_OutsideWest_EventScript_FerryToSlateport_2:
# 38 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
	goto BattleFrontier_OutsideWest_EventScript_FerryToSlateport_1


BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
# 48 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
# 49 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_OutsideWest_EventScript_FerryToLilycove_2
BattleFrontier_OutsideWest_EventScript_FerryToLilycove_1:
# 52 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 53 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 54 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 55 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
	release_end

BattleFrontier_OutsideWest_EventScript_FerryToLilycove_2:
# 50 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
	goto BattleFrontier_OutsideWest_EventScript_FerryToLilycove_1


BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
# 60 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
# 61 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
	end


BattleFrontier_OutsideWest_EventScript_BoardFerry::
# 67 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 68 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_StepFasterDown
# 69 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 70 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 30
# 71 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	hideobjectat LOCALID_FRONTIER_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
# 72 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, LOCALID_FRONTIER_SS_TIDAL
# 73 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call Common_EventScript_FerryDepartIsland
	return


BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
# 78 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
	end


BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
	end


BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
# 88 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
	end


BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
# 94 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
# 100 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Boy1::
# 105 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Fisherman2::
# 110 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock_faceplayer
# 111 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 113 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_FISHERMAN_2, Common_Movement_FaceAwayPlayer
# 114 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 115 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
	release_end


BattleFrontier_OutsideWest_EventScript_Man1::
# 120 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Maniac1::
# 125 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 126 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
	end


BattleFrontier_OutsideWest_EventScript_Maniac2::
# 131 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 132 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
	end


BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
# 137 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_StepFasterRight
# 138 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 139 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
# 140 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_StepFasterLeft
# 141 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 142 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
# 143 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 144 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 25
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_1, Common_Movement_StepFasterUp
# 146 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MANIAC_2, Common_Movement_StepFasterUp
# 147 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
	release_end


BattleFrontier_OutsideWest_EventScript_Camper::
# 152 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock_faceplayer
# 153 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 20
# 154 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne BattleFrontier_OutsideWest_EventScript_Camper_2
BattleFrontier_OutsideWest_EventScript_Camper_1:
# 158 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
	release_end

BattleFrontier_OutsideWest_EventScript_Camper_2:
# 155 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_CAMPER, Common_Movement_StepFasterUp
# 156 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
	goto BattleFrontier_OutsideWest_EventScript_Camper_1


BattleFrontier_OutsideWest_EventScript_Girl::
# 163 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock_faceplayer
# 164 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
# 165 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 166 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_FACING
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case DIR_NORTH, BattleFrontier_OutsideWest_EventScript_Girl_3
# 168 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_Girl_4
# 169 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case DIR_WEST, BattleFrontier_OutsideWest_EventScript_Girl_5
# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case DIR_EAST, BattleFrontier_OutsideWest_EventScript_Girl_6
BattleFrontier_OutsideWest_EventScript_Girl_1:
# 172 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 173 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
	release_end

BattleFrontier_OutsideWest_EventScript_Girl_3:
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_EventScript_Girl_Movement_0
	goto BattleFrontier_OutsideWest_EventScript_Girl_1

BattleFrontier_OutsideWest_EventScript_Girl_4:
# 168 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_EventScript_Girl_Movement_1
	goto BattleFrontier_OutsideWest_EventScript_Girl_1

BattleFrontier_OutsideWest_EventScript_Girl_5:
# 169 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_EventScript_Girl_Movement_2
	goto BattleFrontier_OutsideWest_EventScript_Girl_1

BattleFrontier_OutsideWest_EventScript_Girl_6:
# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_GIRL, BattleFrontier_OutsideWest_EventScript_Girl_Movement_3
	goto BattleFrontier_OutsideWest_EventScript_Girl_1


BattleFrontier_OutsideWest_EventScript_Woman2::
# 178 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock_faceplayer
# 179 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
# 180 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	random 2
# 181 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_OutsideWest_EventScript_Woman2_2
# 185 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
	release_end

BattleFrontier_OutsideWest_EventScript_Woman2_2:
# 182 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
	release_end


BattleFrontier_OutsideWest_EventScript_Fisherman1::
# 190 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
# 196 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Gentleman::
# 201 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Lass::
# 206 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_ExpertM::
# 211 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Man2::
# 216 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Woman1::
# 221 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_FatMan1::
# 226 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_FatMan2::
# 231 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Woman3::
# 236 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 237 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
	release_end


BattleFrontier_OutsideWest_EventScript_Boy2::
# 242 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
	release_end


BattleFrontier_OutsideWest_EventScript_OldMan::
# 248 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
	end


BattleFrontier_OutsideWest_EventScript_Man4::
# 253 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock_faceplayer
# 254 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
# 255 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 256 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FRONTIER_MAN_4, Common_Movement_FaceOriginalDirection
# 257 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
	release_end


BattleFrontier_OutsideWest_EventScript_PokefanF::
# 262 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
	end


# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl_Movement_0:
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_faster_down
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_faster_down
	step_end

# 168 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl_Movement_1:
# 168 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_faster_up
# 168 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_faster_up
	step_end

# 169 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl_Movement_2:
# 169 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_faster_right
# 169 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_faster_right
	step_end

# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl_Movement_3:
# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_faster_left
# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_faster_left
	step_end

BattleFrontier_OutsideWest_Text_BattleDomeSign::
# 266 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE DOME!\n"
	.string "Your path to the invincible superstar!$"

BattleFrontier_OutsideWest_Text_BattleFactorySign::
# 271 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE FACTORY!\n"
	.string "Seek out the toughest POKéMON!$"

BattleFrontier_OutsideWest_Text_BattlePikeSign::
# 276 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE PIKE!\n"
	.string "Choose one of three paths!$"

BattleFrontier_OutsideWest_Text_ThisIsBattleTower::
# 281 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the BATTLE TOWER.\p"
	.string "TRAINERS bring their best-raised\n"
	.string "POKéMON for elimination-style matches.$"

BattleFrontier_OutsideWest_Text_MayISeeYourTicket::
# 288 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
	.string "May I see your TICKET?$"

BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard::
# 293 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
	.string "I'm terribly sorry.\p"
	.string "You must have a TICKET to board\n"
	.string "the ferry.$"

BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo::
# 302 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
	.string "Perfect! That's all you need!\p"
	.string "And where would you like to go?$"

BattleFrontier_OutsideWest_Text_SlateportItIs::
# 310 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "SLATEPORT CITY it is, then!$"

BattleFrontier_OutsideWest_Text_LilycoveItIs::
# 314 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"

BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime::
# 318 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please sail with us another time!$"

BattleFrontier_OutsideWest_Text_PleaseBoardFerry::
# 322 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please board the ferry and wait for\n"
	.string "departure.$"

BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo::
# 327 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Then, where would you like to go?$"

BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends::
# 331 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm the best out of all my friends.\n"
	.string "But here…\l"
	.string "I've been useless!$"

BattleFrontier_OutsideWest_Text_CantFindBattleTower::
# 337 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I want to go to the BATTLE TOWER,\n"
	.string "but I can't find it even though I have\l"
	.string "a map of the BATTLE FRONTIER.\p"
	.string "This place is just too big!$"

BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere::
# 345 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I wanted to take a challenge as soon\n"
	.string "as I arrived here.\p"
	.string "But on the way, I got seasick…\n"
	.string "Urrrrp…$"

BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere::
# 353 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's not as if just anyone can come\n"
	.string "here, you know?\p"
	.string "Only those TRAINERS who've been\n"
	.string "recognized as tough are brought here.\p"
	.string "That's why many TRAINERS don't even\n"
	.string "know about the BATTLE FRONTIER.$"

BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons::
# 364 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hey, bro…\p"
	.string "Are you sure we can make challenges\n"
	.string "even if we don't have any POKéMON?$"

BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons::
# 371 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Uh…\n"
	.string "I'm sure it'll be okay.\p"
	.string "I think…\p"
	.string "But remember that big scary guy?\n"
	.string "He said, “I'll lend you POKéMON!”$"

BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons::
# 381 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's the BATTLE FACTORY.\n"
	.string "You can rent strong POKéMON there.\p"
	.string "But it makes me wonder.\n"
	.string "Who's raising those rental POKéMON?$"

BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper::
# 389 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm scared of going into the BATTLE\n"
	.string "PIKE because of SEVIPER…\p"
	.string "B-but I came all the way here, so I will\n"
	.string "try to conquer everything!\l"
	.string "…Shudder…$"

BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors::
# 398 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let's play rock, paper, scissors!\n"
	.string "One, two, three!\p"
	.string "… … … … … …$"

BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge::
# 405 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Yay! I won!\n"
	.string "I will take the BATTLE PIKE challenge!$"

BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge::
# 410 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, no…\n"
	.string "I lost.\p"
	.string "I guess I'm not very lucky today.\n"
	.string "I'll put off my BATTLE PIKE challenge\l"
	.string "until tomorrow.$"

BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling::
# 419 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I believe I'm the only person here who,\n"
	.string "for some unknown reason, would choose\l"
	.string "fishing over battling.\p"
	.string "Huh? You can't catch anything here?\n"
	.string "That's disappointing…$"

BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol::
# 428 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Today, I'm going to keep battling, no\n"
	.string "matter what, until I get a Symbol.$"

BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome::
# 433 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh? You're off to challenge\n"
	.string "the BATTLE DOME?\p"
	.string "I'll wish you the best of luck.\n"
	.string "Let us both win our way up and meet\l"
	.string "in challenges.$"

BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa::
# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Grandpa, over here!\n"
	.string "The BATTLE DOME is here!\l"
	.string "Go get 'em, Grandpa!$"

BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe::
# 448 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ah, so this here is the BATTLE DOME?\n"
	.string "I won't let GENTLEMEN beat me!\p"
	.string "But where is the entrance?$"

BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo::
# 455 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There used to be nothing here not all\n"
	.string "that long ago.\p"
	.string "But, now look at this place! Amazing!\n"
	.string "I'll bring my mother out to see this.$"

BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier::
# 463 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've finally arrived at the BATTLE\n"
	.string "FRONTIER!\p"
	.string "I'm sure to grab attention with\n"
	.string "my looks and ability!$"

BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople::
# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…\p"
	.string "It looks like this square's filled with\n"
	.string "tough people.\p"
	.string "Munch, munch…$"

BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike::
# 480 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
	.string "A while back, I met this older girl\n"
	.string "at the BATTLE PIKE.\p"
	.string "She had these eyes that were scary\n"
	.string "in a real ornery way.\p"
	.string "Crunch, munch…\p"
	.string "She got all furious: “Will you quit\n"
	.string "eating!” Then she whaled on me.\p"
	.string "It was a hair-raising kind of\n"
	.string "scary experience, sure enough.\p"
	.string "Crunch, munch…$"

BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet::
# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? Will you listen to yourself?\n"
	.string "That's nothing!\p"
	.string "Why, the last time I cheered for him,\n"
	.string "our eyes met and sparks flew!$"

BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering::
# 508 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Whaaaaaat?!\n"
	.string "Pfft!\p"
	.string "That only happened because\n"
	.string "I happened to be sitting next to you!\p"
	.string "The DOME ACE only looked our way\n"
	.string "because my cheering was so loud!$"

BattleFrontier_OutsideWest_Text_DomeAceIsMine::
# 519 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, shush!\n"
	.string "Keep that racket down!\p"
	.string "You fair-weather fans should stick\n"
	.string "to cheering for some GYM LEADER!\p"
	.string "The DOME ACE is mine!\n"
	.string "The only idol for me!$"

BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers::
# 530 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Those people squabbling over there…\p"
	.string "It's hard to believe, but they once\n"
	.string "were TRAINERS, and good ones, too.\p"
	.string "They used to be incredibly tough,\n"
	.string "and they were famous, too.\p"
	.string "But they were obliterated by this\n"
	.string "certain TRAINER at a tournament.\p"
	.string "They were so thoroughly whipped,\n"
	.string "they became smitten by the TRAINER.\p"
	.string "Now they're just fans of the TRAINER.\n"
	.string "They go cheer for their idol at the\l"
	.string "BATTLE DOME every day now.$"

BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier::
# 550 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I heard a rumor that someone saw\n"
	.string "a POKéMON with an unusually long tail\l"
	.string "somewhere in the BATTLE FRONTIER.\p"
	.string "It must be adorable. I'm sure of it…\p"
	.string "Oh, challenges can wait. I feel driven\n"
	.string "to find the delightful creature!$"
