Route109_MapScripts::
	.byte 0


Route109_EventScript_MrBriney::
# 7 "data/maps/Route109/scripts.pory"
	lock_faceplayer
# 8 "data/maps/Route109/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_MrBriney_2
Route109_EventScript_MrBriney_1:
# 17 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 18 "data/maps/Route109/scripts.pory"
	waitmessage
# 19 "data/maps/Route109/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 20 "data/maps/Route109/scripts.pory"
	switch VAR_RESULT
# 21 "data/maps/Route109/scripts.pory"
	case 0, Route109_EventScript_MrBriney_6
# 22 "data/maps/Route109/scripts.pory"
	case 1, Route109_EventScript_MrBriney_7
# 23 "data/maps/Route109/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_MrBriney_7
Route109_EventScript_MrBriney_4:
	release_end

Route109_EventScript_MrBriney_2:
# 9 "data/maps/Route109/scripts.pory"
	message Route109_Text_BrineySailToDewfordQuestion
# 10 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 11 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route109_EventScript_MrBriney_9
# 15 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
	goto Route109_EventScript_MrBriney_1

Route109_EventScript_MrBriney_6:
# 21 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_SailToDewford
	goto Route109_EventScript_MrBriney_4

Route109_EventScript_MrBriney_7:
# 24 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
	goto Route109_EventScript_MrBriney_4

Route109_EventScript_MrBriney_9:
# 12 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
	release_end


Route109_EventScript_SailToDewford::
# 30 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 31 "data/maps/Route109/scripts.pory"
	closemessage
# 32 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
	end


Route109_EventScript_StartDepartForDewford::
# 37 "data/maps/Route109/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 38 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109, 0
# 39 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE109, 0
# 40 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_BRINEY, Common_Movement_WalkDown
# 41 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route109/scripts.pory"
	removeobject LOCALID_ROUTE109_BRINEY
# 43 "data/maps/Route109/scripts.pory"
	switch VAR_FACING
# 44 "data/maps/Route109/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_StartDepartForDewford_3
# 45 "data/maps/Route109/scripts.pory"
	case DIR_WEST, Route109_EventScript_StartDepartForDewford_4
# 46 "data/maps/Route109/scripts.pory"
	case DIR_EAST, Route109_EventScript_StartDepartForDewford_5
Route109_EventScript_StartDepartForDewford_1:
# 48 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route109/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
	end

Route109_EventScript_StartDepartForDewford_3:
# 44 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_EventScript_StartDepartForDewford_Movement_0
	goto Route109_EventScript_StartDepartForDewford_1

Route109_EventScript_StartDepartForDewford_4:
# 45 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_EventScript_StartDepartForDewford_Movement_1
	goto Route109_EventScript_StartDepartForDewford_1

Route109_EventScript_StartDepartForDewford_5:
# 46 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_EventScript_StartDepartForDewford_Movement_2
	goto Route109_EventScript_StartDepartForDewford_1


Route109_EventScript_DoSailToDewford::
# 54 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE109
# 55 "data/maps/Route109/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 56 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_ROUTE109_BOAT, Route109_Movement_SailToDewford
# 57 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_Movement_SailToDewford
# 58 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route109/scripts.pory"
	delay 50
# 60 "data/maps/Route109/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 61 "data/maps/Route109/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 62 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_PLAYER, Route109_EventScript_DoSailToDewford_Movement_0
# 63 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route109/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 65 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 66 "data/maps/Route109/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 12, 8
# 67 "data/maps/Route109/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 68 "data/maps/Route109/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 69 "data/maps/Route109/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route109_EventScript_DoSailToDewford_Movement_1
# 70 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route109/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 72 "data/maps/Route109/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 73 "data/maps/Route109/scripts.pory"
	hideobjectat LOCALID_ROUTE109_BOAT, MAP_ROUTE109
# 74 "data/maps/Route109/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 75 "data/maps/Route109/scripts.pory"
	closemessage
# 76 "data/maps/Route109/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 77 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE109
# 78 "data/maps/Route109/scripts.pory"
	resetobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN
# 79 "data/maps/Route109/scripts.pory"
	copyobjectxytoperm LOCALID_DEWFORD_BRINEY
	release_end


# 83 "data/maps/Route109/scripts.pory"
Route109_Movement_SailToDewford:
# 85 "data/maps/Route109/scripts.pory"
	step_faster_down
# 86 "data/maps/Route109/scripts.pory"
	walk_down
# 86 "data/maps/Route109/scripts.pory"
	walk_down
# 87 "data/maps/Route109/scripts.pory"
	run_down
# 87 "data/maps/Route109/scripts.pory"
	run_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 88 "data/maps/Route109/scripts.pory"
	sprint_down
# 89 "data/maps/Route109/scripts.pory"
	run_down
# 89 "data/maps/Route109/scripts.pory"
	run_down
# 90 "data/maps/Route109/scripts.pory"
	run_left
# 90 "data/maps/Route109/scripts.pory"
	run_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 91 "data/maps/Route109/scripts.pory"
	sprint_left
# 92 "data/maps/Route109/scripts.pory"
	run_left
# 92 "data/maps/Route109/scripts.pory"
	run_left
# 92 "data/maps/Route109/scripts.pory"
	run_left
# 92 "data/maps/Route109/scripts.pory"
	run_left
# 92 "data/maps/Route109/scripts.pory"
	run_left
# 92 "data/maps/Route109/scripts.pory"
	run_left
# 92 "data/maps/Route109/scripts.pory"
	run_left
# 92 "data/maps/Route109/scripts.pory"
	run_left
# 92 "data/maps/Route109/scripts.pory"
	run_left
# 93 "data/maps/Route109/scripts.pory"
	walk_left
# 93 "data/maps/Route109/scripts.pory"
	walk_left
# 94 "data/maps/Route109/scripts.pory"
	step_faster_down
	step_end

Route109_EventScript_SeashoreHouseGirl::
# 98 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChillAtMyPapasSpot, MSGBOX_NPC
	end


Route109_EventScript_SandCastleBoy::
# 103 "data/maps/Route109/scripts.pory"
	lock_faceplayer
# 104 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 105 "data/maps/Route109/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


Route109_EventScript_SoftSandGirl::
# 110 "data/maps/Route109/scripts.pory"
	lock_faceplayer
# 111 "data/maps/Route109/scripts.pory"
	special GetPlayerBigGuyGirlString
# 112 "data/maps/Route109/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_SoftSandGirl_2
# 115 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
	giveitem ITEM_SOFT_SAND
# 0 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route109_EventScript_SoftSandGirl_6
Route109_EventScript_SoftSandGirl_5:
# 119 "data/maps/Route109/scripts.pory"
	closemessage
# 120 "data/maps/Route109/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
Route109_EventScript_SoftSandGirl_1:
# 122 "data/maps/Route109/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 123 "data/maps/Route109/scripts.pory"
	waitmovement 0
	release_end

Route109_EventScript_SoftSandGirl_2:
# 113 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
	goto Route109_EventScript_SoftSandGirl_1

Route109_EventScript_SoftSandGirl_6:
# 117 "data/maps/Route109/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route109_EventScript_SoftSandGirl_5


Route109_EventScript_Woman::
# 128 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
	end


Route109_EventScript_OldMan::
# 133 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
	end


Route109_EventScript_Zigzagoon::
# 138 "data/maps/Route109/scripts.pory"
	lock_faceplayer
# 139 "data/maps/Route109/scripts.pory"
	waitse
# 140 "data/maps/Route109/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 141 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 142 "data/maps/Route109/scripts.pory"
	waitmoncry
	release_end


Route109_EventScript_SeashoreHouseSign::
# 147 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
	end


Route109_EventScript_TrainerTipsSign::
# 152 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
	end


Route109_EventScript_David::
# 157 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 158 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
	end


Route109_EventScript_Alice::
# 163 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 164 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
	end


Route109_EventScript_Huey::
# 169 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
# 170 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
	end


Route109_EventScript_Edmond::
# 175 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
# 176 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
	end


Route109_EventScript_Ricky::
# 181 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route109_EventScript_Ricky_2
# 187 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
	release_end

Route109_EventScript_Ricky_2:
# 183 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 184 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route109_EventScript_RickyRegisterMatchCallAfterBattle::
# 192 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 193 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 194 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 195 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_RICKY_1
	release_end


Route109_EventScript_Lola::
# 200 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route109/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route109_EventScript_Lola_2
# 206 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
	release_end

Route109_EventScript_Lola_2:
# 202 "data/maps/Route109/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 203 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route109_EventScript_LolaRegisterMatchCallAfterBattle::
# 211 "data/maps/Route109/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 212 "data/maps/Route109/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 214 "data/maps/Route109/scripts.pory"
	register_matchcall TRAINER_LOLA_1
	release_end


Route109_EventScript_Austina::
# 219 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 220 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
	end


Route109_EventScript_Gwen::
# 225 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 226 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
	end


Route109_EventScript_Carter::
# 231 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 232 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
	end


Route109_EventScript_Paul::
# 237 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 238 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
	end


Route109_EventScript_Mel::
# 243 "data/maps/Route109/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 244 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
	end


Route109_EventScript_Chandler::
# 249 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
# 250 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
	end


Route109_EventScript_Hailey::
# 255 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
# 256 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
	end


Route109_EventScript_Elijah::
# 261 "data/maps/Route109/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 262 "data/maps/Route109/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
	end


# 44 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford_Movement_0:
# 44 "data/maps/Route109/scripts.pory"
	walk_down
# 44 "data/maps/Route109/scripts.pory"
	walk_down
	step_end

# 45 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford_Movement_1:
# 45 "data/maps/Route109/scripts.pory"
	walk_right
# 45 "data/maps/Route109/scripts.pory"
	walk_down
	step_end

# 46 "data/maps/Route109/scripts.pory"
Route109_EventScript_StartDepartForDewford_Movement_2:
# 46 "data/maps/Route109/scripts.pory"
	walk_left
# 46 "data/maps/Route109/scripts.pory"
	walk_down
	step_end

# 62 "data/maps/Route109/scripts.pory"
Route109_EventScript_DoSailToDewford_Movement_0:
# 62 "data/maps/Route109/scripts.pory"
	walk_down
# 62 "data/maps/Route109/scripts.pory"
	walk_down
# 62 "data/maps/Route109/scripts.pory"
	walk_left
# 62 "data/maps/Route109/scripts.pory"
	step_faster_right
	step_end

# 69 "data/maps/Route109/scripts.pory"
Route109_EventScript_DoSailToDewford_Movement_1:
# 69 "data/maps/Route109/scripts.pory"
	walk_down
# 69 "data/maps/Route109/scripts.pory"
	step_faster_left
	step_end

DewfordTown_Text_BrineyLandedInSlateportDeliverGoods::
# 266 "data/maps/Route109/scripts.pory"
	.string "{SPEAKER NAME_BRINEY}Ahoy!\n"
	.string "We've made land in SLATEPORT!\p"
	.string "I suppose you're going to visit CAPT.\n"
	.string "STERN and deliver the DEVON GOODS?$"

Route109_Text_BrineySailToDewfordQuestion::
# 274 "data/maps/Route109/scripts.pory"
	.string "{SPEAKER NAME_BRINEY}I thought you're supposed\n"
	.string "to deliver the DEVON GOODS.\p"
	.string "Would you like to sail back to\n"
	.string "DEWFORD, then?$"

Route109_Text_BrineyDewfordItIs::
# 282 "data/maps/Route109/scripts.pory"
	.string "{SPEAKER NAME_BRINEY}DEWFORD it is, then!\p"
	.string "Anchors aweigh!\n"
	.string "PEEKO, we're setting sail, my darling!$"

Route109_Text_BrineyDeliverDevonGoods::
# 289 "data/maps/Route109/scripts.pory"
	.string "{SPEAKER NAME_BRINEY}Then you go on and deliver\n"
	.string "the DEVON GOODS. I'll be waiting.$"

DewfordTown_Text_BrineyLandedInSlateport::
# 294 "data/maps/Route109/scripts.pory"
	.string "{SPEAKER NAME_BRINEY}Ahoy! We've made land in\n"
	.string "SLATEPORT!\p"
	.string "You just go on and tell me whenever\n"
	.string "you want to set sail again!$"

Route109_Text_BrineyWhereAreWeBound::
# 302 "data/maps/Route109/scripts.pory"
	.string "{SPEAKER NAME_BRINEY}Ahoy!\n"
	.string "For you, I'll go out to sea anytime!\p"
	.string "Now, my friend, where are we bound?$"

Route109_Text_BrineyTellMeWhenYouNeedToSail::
# 309 "data/maps/Route109/scripts.pory"
	.string "{SPEAKER NAME_BRINEY}You just tell me whenever\n"
	.string "you need to set sail again!$"

Route109_Text_ChillAtMyPapasSpot::
# 314 "data/maps/Route109/scripts.pory"
	.string "Yo, TRAINERS!\n"
	.string "Whether you're hot to trot,\l"
	.string "or cool cat not,\l"
	.string "chill at my papa's spot!$"

Route109_Text_LittleKidsDartAround::
# 321 "data/maps/Route109/scripts.pory"
	.string "Little kids can dart around so quickly…\p"
	.string "You don't dare take your eyes off them\n"
	.string "for an instant. It's very taxing.\p"
	.string "Mine are with my POKéMON, so they\n"
	.string "should be okay, but…$"

Route109_Text_SandCastleTakingLongTime::
# 331 "data/maps/Route109/scripts.pory"
	.string "Our sand castle's taking a long time\n"
	.string "to make.$"

Route109_Text_YouCanHaveThis::
# 336 "data/maps/Route109/scripts.pory"
	.string "You can have this!$"

Route109_Text_WereGoingToMakeBigCastle::
# 340 "data/maps/Route109/scripts.pory"
	.string "We're going to get all the sand from\n"
	.string "the beach and make a big castle!\p"
	.string "And then we're going to be a king and\n"
	.string "queen.\p"
	.string "We'll let you be a servant.$"

Route109_Text_ZigzagoonPicksUpLitter::
# 350 "data/maps/Route109/scripts.pory"
	.string "The water around these parts is clean.\p"
	.string "But, I get my ZIGZAGOON to pick up\n"
	.string "litter from the shoreline at times.\p"
	.string "Dirty water becomes rain and joins our\n"
	.string "rivers, which we drink from…\p"
	.string "If we pollute the sea, it all comes\n"
	.string "back to haunt us eventually.$"

Route109_Text_ZigzagoonCry::
# 363 "data/maps/Route109/scripts.pory"
	.string "Guguu?$"

Route109_Text_SeashoreHouseSign::
# 367 "data/maps/Route109/scripts.pory"
	.string "SEASHORE HOUSE\p"
	.string "“May hot battles rage on hot sands!\n"
	.string "The place for hot TRAINERS!”$"

Route109_Text_TrainerTipsSign::
# 374 "data/maps/Route109/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "POKéMON at the same level may not\n"
	.string "always have identical stats.\p"
	.string "POKéMON raised by TRAINERS are said\n"
	.string "to grow stronger than wild POKéMON.$"
