DewfordTown_MapScripts::
# 2 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DewfordTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
	end


DewfordTown_EventScript_Briney::
# 9 "data/maps/DewfordTown/scripts.pory"
	lock_faceplayer
# 10 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_Briney_2
# 20 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_WhereAreWeBound
# 21 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 22 "data/maps/DewfordTown/scripts.pory"
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
# 23 "data/maps/DewfordTown/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/DewfordTown/scripts.pory"
	case 0, DewfordTown_EventScript_Briney_6
# 28 "data/maps/DewfordTown/scripts.pory"
	case 1, DewfordTown_EventScript_Briney_7
# 32 "data/maps/DewfordTown/scripts.pory"
	case 2, DewfordTown_EventScript_Briney_8
# 33 "data/maps/DewfordTown/scripts.pory"
	case MULTI_B_PRESSED, DewfordTown_EventScript_Briney_8
DewfordTown_EventScript_Briney_4:
	release_end

DewfordTown_EventScript_Briney_2:
# 11 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
# 12 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_EventScript_Briney_10
DewfordTown_EventScript_Briney_9:
# 17 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
	release_end

DewfordTown_EventScript_Briney_6:
# 25 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
# 26 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 27 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
	goto DewfordTown_EventScript_Briney_4

DewfordTown_EventScript_Briney_7:
# 29 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
# 30 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 31 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToSlateport
	goto DewfordTown_EventScript_Briney_4

DewfordTown_EventScript_Briney_8:
# 34 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
# 35 "data/maps/DewfordTown/scripts.pory"
	closemessage
	goto DewfordTown_EventScript_Briney_4

DewfordTown_EventScript_Briney_10:
# 13 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
# 14 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 15 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
	goto DewfordTown_EventScript_Briney_9


DewfordTown_EventScript_SailToPetalburg::
# 41 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 42 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 43 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN, 0
# 44 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Common_Movement_WalkUp
# 45 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 46 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_DEWFORD_BRINEY
# 47 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_EventScript_SailToPetalburg_Movement_0
# 48 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 49 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 50 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 51 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BOAT, DewfordTown_Movement_SailToPetalburg
# 52 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_SailToPetalburg
# 53 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 54 "data/maps/DewfordTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_ROUTE104
# 55 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 56 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_EventScript_SailToPetalburg_Movement_1
# 57 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 58 "data/maps/DewfordTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_ROUTE104
# 59 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 60 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 61 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 62 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 63 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_DEWFORD_BOAT, MAP_DEWFORD_TOWN
# 64 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
# 65 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 66 "data/maps/DewfordTown/scripts.pory"
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
# 67 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 68 "data/maps/DewfordTown/scripts.pory"
	waitstate
	release_end


DewfordTown_EventScript_SailToSlateport::
# 73 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 74 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 75 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN, 1
# 76 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Common_Movement_WalkUp
# 77 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 78 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_DEWFORD_BRINEY
# 79 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_EventScript_SailToPetalburg_Movement_0
# 80 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 81 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 82 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 83 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BOAT, DewfordTown_Movement_SailToSlateport
# 84 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_SailToSlateport
# 85 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 86 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 87 "data/maps/DewfordTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_ROUTE109
# 88 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_EventScript_SailToSlateport_Movement_0
# 89 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 90 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm LOCALID_ROUTE109_BRINEY, 21, 26
# 91 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_ROUTE109_BRINEY
# 92 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109, 0
# 93 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_ROUTE109_BRINEY, DewfordTown_EventScript_SailToSlateport_Movement_1
# 94 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 95 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 96 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_ROUTE109_BOAT
# 97 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 98 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 99 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_DEWFORD_BOAT, MAP_DEWFORD_TOWN
# 100 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_SailToSlateport_2
# 103 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
DewfordTown_EventScript_SailToSlateport_1:
# 105 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 106 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 107 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 108 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109
# 109 "data/maps/DewfordTown/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE109_BRINEY
	release_end

DewfordTown_EventScript_SailToSlateport_2:
# 101 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
	goto DewfordTown_EventScript_SailToSlateport_1


# 113 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToPetalburg:
# 115 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 115 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 116 "data/maps/DewfordTown/scripts.pory"
	run_up
# 116 "data/maps/DewfordTown/scripts.pory"
	run_up
# 116 "data/maps/DewfordTown/scripts.pory"
	run_up
# 116 "data/maps/DewfordTown/scripts.pory"
	run_up
# 116 "data/maps/DewfordTown/scripts.pory"
	run_up
# 116 "data/maps/DewfordTown/scripts.pory"
	run_up
# 116 "data/maps/DewfordTown/scripts.pory"
	run_up
# 116 "data/maps/DewfordTown/scripts.pory"
	run_up
# 116 "data/maps/DewfordTown/scripts.pory"
	run_up
# 116 "data/maps/DewfordTown/scripts.pory"
	run_up
# 116 "data/maps/DewfordTown/scripts.pory"
	run_up
# 116 "data/maps/DewfordTown/scripts.pory"
	run_up
# 116 "data/maps/DewfordTown/scripts.pory"
	run_up
# 116 "data/maps/DewfordTown/scripts.pory"
	run_up
# 116 "data/maps/DewfordTown/scripts.pory"
	run_up
# 117 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 117 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 118 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 118 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 119 "data/maps/DewfordTown/scripts.pory"
	run_left
# 119 "data/maps/DewfordTown/scripts.pory"
	run_left
# 119 "data/maps/DewfordTown/scripts.pory"
	run_left
# 119 "data/maps/DewfordTown/scripts.pory"
	run_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 120 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 121 "data/maps/DewfordTown/scripts.pory"
	run_left
# 121 "data/maps/DewfordTown/scripts.pory"
	run_left
# 121 "data/maps/DewfordTown/scripts.pory"
	run_left
# 121 "data/maps/DewfordTown/scripts.pory"
	run_left
# 122 "data/maps/DewfordTown/scripts.pory"
	run_up
# 122 "data/maps/DewfordTown/scripts.pory"
	run_up
# 122 "data/maps/DewfordTown/scripts.pory"
	run_up
# 122 "data/maps/DewfordTown/scripts.pory"
	run_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 123 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 124 "data/maps/DewfordTown/scripts.pory"
	run_up
# 124 "data/maps/DewfordTown/scripts.pory"
	run_up
# 124 "data/maps/DewfordTown/scripts.pory"
	run_up
# 124 "data/maps/DewfordTown/scripts.pory"
	run_up
# 125 "data/maps/DewfordTown/scripts.pory"
	run_left
# 125 "data/maps/DewfordTown/scripts.pory"
	run_left
# 126 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 126 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 126 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 126 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 126 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 126 "data/maps/DewfordTown/scripts.pory"
	sprint_left
# 127 "data/maps/DewfordTown/scripts.pory"
	run_left
# 127 "data/maps/DewfordTown/scripts.pory"
	run_left
# 128 "data/maps/DewfordTown/scripts.pory"
	run_up
# 128 "data/maps/DewfordTown/scripts.pory"
	run_up
# 129 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 129 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 129 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 129 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 129 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 129 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 129 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 129 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 129 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 129 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 129 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 129 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 129 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 129 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 130 "data/maps/DewfordTown/scripts.pory"
	run_up
# 130 "data/maps/DewfordTown/scripts.pory"
	run_up
# 130 "data/maps/DewfordTown/scripts.pory"
	run_up
# 130 "data/maps/DewfordTown/scripts.pory"
	run_up
# 131 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 131 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 131 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 131 "data/maps/DewfordTown/scripts.pory"
	walk_up
	step_end

# 134 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToSlateport:
# 136 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 137 "data/maps/DewfordTown/scripts.pory"
	run_right
# 137 "data/maps/DewfordTown/scripts.pory"
	run_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 138 "data/maps/DewfordTown/scripts.pory"
	sprint_right
# 139 "data/maps/DewfordTown/scripts.pory"
	run_right
# 139 "data/maps/DewfordTown/scripts.pory"
	run_right
# 140 "data/maps/DewfordTown/scripts.pory"
	run_up
# 140 "data/maps/DewfordTown/scripts.pory"
	run_up
# 141 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 141 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 141 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 141 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 141 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 141 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 141 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 141 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 141 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 141 "data/maps/DewfordTown/scripts.pory"
	sprint_up
# 142 "data/maps/DewfordTown/scripts.pory"
	run_up
# 142 "data/maps/DewfordTown/scripts.pory"
	run_up
# 142 "data/maps/DewfordTown/scripts.pory"
	run_up
# 142 "data/maps/DewfordTown/scripts.pory"
	run_up
# 142 "data/maps/DewfordTown/scripts.pory"
	run_up
# 142 "data/maps/DewfordTown/scripts.pory"
	run_up
# 142 "data/maps/DewfordTown/scripts.pory"
	run_up
# 142 "data/maps/DewfordTown/scripts.pory"
	run_up
# 142 "data/maps/DewfordTown/scripts.pory"
	run_up
# 142 "data/maps/DewfordTown/scripts.pory"
	run_up
	step_end

DewfordTown_EventScript_Woman::
# 146 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
	end


DewfordTown_EventScript_TownSign::
# 151 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
	end


DewfordTown_EventScript_GymSign::
# 156 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
	end


DewfordTown_EventScript_HallSign::
# 161 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
	end


DewfordTown_EventScript_OldRodFisherman::
# 166 "data/maps/DewfordTown/scripts.pory"
	lock_faceplayer
# 167 "data/maps/DewfordTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_OldRodFisherman_2
# 177 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
# 178 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_EventScript_OldRodFisherman_5
# 186 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
DewfordTown_EventScript_OldRodFisherman_4:
	release_end

DewfordTown_EventScript_OldRodFisherman_2:
# 168 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_HowsYourFishing
# 169 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 170 "data/maps/DewfordTown/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 171 "data/maps/DewfordTown/scripts.pory"
	switch VAR_RESULT
# 172 "data/maps/DewfordTown/scripts.pory"
	case 0, DewfordTown_EventScript_OldRodFisherman_10
# 173 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
DewfordTown_EventScript_OldRodFisherman_8:
	release_end

DewfordTown_EventScript_OldRodFisherman_5:
# 179 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD
# 0 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_EventScript_OldRodFisherman_13
DewfordTown_EventScript_OldRodFisherman_12:
# 183 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 184 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
	goto DewfordTown_EventScript_OldRodFisherman_4

DewfordTown_EventScript_OldRodFisherman_10:
# 172 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
	goto DewfordTown_EventScript_OldRodFisherman_8

DewfordTown_EventScript_OldRodFisherman_13:
# 181 "data/maps/DewfordTown/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto DewfordTown_EventScript_OldRodFisherman_12


DewfordTown_EventScript_TrendyPhraseBoy::
# 192 "data/maps/DewfordTown/scripts.pory"
	lock_faceplayer
# 193 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 194 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 195 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_EventScript_TrendyPhraseBoy_2
# 198 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 199 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 200 "data/maps/DewfordTown/scripts.pory"
	call Common_ShowEasyChatScreen
# 201 "data/maps/DewfordTown/scripts.pory"
	lock_faceplayer
# 202 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DewfordTown_EventScript_TrendyPhraseBoy_5
# 210 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
DewfordTown_EventScript_TrendyPhraseBoy_1:
	release_end

DewfordTown_EventScript_TrendyPhraseBoy_2:
# 196 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
	goto DewfordTown_EventScript_TrendyPhraseBoy_1

DewfordTown_EventScript_TrendyPhraseBoy_5:
# 203 "data/maps/DewfordTown/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 204 "data/maps/DewfordTown/scripts.pory"
	compare VAR_0x8004, FALSE
	goto_if_eq DewfordTown_EventScript_TrendyPhraseBoy_9
# 208 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
	goto DewfordTown_EventScript_TrendyPhraseBoy_1

DewfordTown_EventScript_TrendyPhraseBoy_9:
# 205 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
	release_end


# 47 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToPetalburg_Movement_0:
# 47 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 47 "data/maps/DewfordTown/scripts.pory"
	walk_up
	step_end

# 56 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToPetalburg_Movement_1:
# 56 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 56 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 56 "data/maps/DewfordTown/scripts.pory"
	walk_up
	step_end

# 88 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport_Movement_0:
# 88 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 88 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 88 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 88 "data/maps/DewfordTown/scripts.pory"
	step_faster_down
	step_end

# 93 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport_Movement_1:
# 93 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 93 "data/maps/DewfordTown/scripts.pory"
	walk_up
	step_end

DewfordTown_Text_TinyIslandCommunity::
# 216 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD is a tiny island community.\n"
	.string "If something gets trendy here,\l"
	.string "everyone picks up on it right away.$"

DewfordTown_Text_TownSign::
# 222 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD TOWN\n"
	.string "“A tiny island in the blue sea.”$"

DewfordTown_Text_GymSign::
# 227 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\n"
	.string "LEADER: BRAWLY\l"
	.string "“A big wave in fighting!”$"

DewfordTown_Text_HallSign::
# 233 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD HALL\n"
	.string "“Everyone's information exchange!”$"

Route104_Text_LandedInDewfordDeliverLetter::
# 238 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
	.string "We've hit land in DEWFORD.\p"
	.string "I suppose you're off to deliver that\n"
	.string "LETTER to, who was it now, STEVEN!$"

DewfordTown_Text_SetSailBackToPetalburg::
# 246 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Have you delivered your\n"
	.string "LETTER?\p"
	.string "Or were you meaning to sail back to\n"
	.string "PETALBURG?$"

DewfordTown_Text_PetalburgWereSettingSail2::
# 254 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG it is, then!\p"
	.string "Anchors aweigh!\n"
	.string "PEEKO, we're setting sail, my darling!$"

DewfordTown_Text_GoDeliverIllBeWaiting::
# 261 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\n"
	.string "the LETTER. I'll be waiting.$"

DewfordTown_Text_BrineyLandedInDewford::
# 266 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
	.string "We've hit land in DEWFORD!\p"
	.string "You just go on and tell me whenever\n"
	.string "you want to set sail again!$"

DewfordTown_Text_WhereAreWeBound::
# 274 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
	.string "For you, I'll go out to sea anytime!\p"
	.string "Now, my friend, where are we bound?$"

DewfordTown_Text_PetalburgWereSettingSail::
# 281 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG, is it?\p"
	.string "Anchors aweigh!\n"
	.string "PEEKO, we're setting sail, my darling!$"

DewfordTown_Text_SlateportWereSettingSail::
# 288 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: SLATEPORT, is it?\p"
	.string "Anchors aweigh!\n"
	.string "PEEKO, we're setting sail, my darling!$"

DewfordTown_Text_JustTellMeWhenYouNeedToSetSail::
# 295 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: You just tell me whenever\n"
	.string "you need to set sail again!$"

DewfordTown_Text_GettingItchToFish::
# 300 "data/maps/DewfordTown/scripts.pory"
	.string "This is a renowned fishing spot.\n"
	.string "Are you getting the itch to fish?$"

DewfordTown_Text_GiveYouOneOfMyRods::
# 305 "data/maps/DewfordTown/scripts.pory"
	.string "I hear you, and I like what\n"
	.string "you're saying!\p"
	.string "I'll give you one of my fishing RODS.$"

DewfordTown_Text_ThrowInFishingAdvice::
# 312 "data/maps/DewfordTown/scripts.pory"
	.string "And, as an added bonus, I'll even throw\n"
	.string "in a little fishing advice!\p"
	.string "First, you want to face the water,\n"
	.string "then use the ROD.\p"
	.string "Focus your mind…\n"
	.string "If you get a bite, pull on the ROD.\p"
	.string "Sometimes you can snag something\n"
	.string "immediately, but with bigger catches,\l"
	.string "you need to time the pulls on your ROD\l"
	.string "to haul them in.$"

DewfordTown_Text_ThatsTooBadThen::
# 328 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, is that so?\n"
	.string "That's too bad, then.$"

DewfordTown_Text_HowsYourFishing::
# 333 "data/maps/DewfordTown/scripts.pory"
	.string "Yo!\n"
	.string "How's your fishing?$"

DewfordTown_Text_GreatHaulInSomeBigOnes::
# 338 "data/maps/DewfordTown/scripts.pory"
	.string "Is that right! That's great!\n"
	.string "Haul in some big ones!$"

DewfordTown_Text_FishingAdvice::
# 343 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, hey, don't get down on yourself!\n"
	.string "I'll give you a little fishing advice.\p"
	.string "First, you want to face the water,\n"
	.string "then use the ROD.\p"
	.string "Focus your mind…\n"
	.string "If you get a bite, pull the ROD.\p"
	.string "Sometimes you can snag something\n"
	.string "immediately, but with bigger catches,\l"
	.string "you need to time the pulls on your ROD\l"
	.string "to haul them in.$"

DewfordTown_Text_XIsTheBiggestHappeningThingRight::
# 359 "data/maps/DewfordTown/scripts.pory"
	.string "I like what's hip, happening, and trendy.\n"
	.string "I'm always checking it out.\p"
	.string "Listen, have you heard about this new\n"
	.string "“{STR_VAR_1}”?\p"
	.string "That's right!\n"
	.string "Of course you know!\p"
	.string "I mean, sheesh,\n"
	.string "“{STR_VAR_1}”…\l"
	.string "It's the hottest thing in cool!\p"
	.string "Wherever you're from,\n"
	.string "“{STR_VAR_1}”\l"
	.string "is the biggest happening thing, right?$"

DewfordTown_Text_TellMeWhatsNewAndIn::
# 378 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
	.string "It's not the hip and happening thing?\p"
	.string "Well, hey, you have to tell me,\n"
	.string "what's new and what's “in”?$"

DewfordTown_Text_OfCourseIKnowAboutThat::
# 386 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
	.string "“{STR_VAR_2}”?\p"
	.string "… …\p"
	.string "…Uh… Yeah! That's right!\n"
	.string "Yeah, I knew that! Knew it all along!\p"
	.string "Of course I know about that!\n"
	.string "“{STR_VAR_2},” right?\p"
	.string "Yeah, that's it, it's there!\n"
	.string "Isn't “{STR_VAR_2}”\l"
	.string "the coolest, or what?\p"
	.string "It's the hippest thing in hip.\n"
	.string "You think I'd not know about it?\p"
	.string "“{STR_VAR_1}”…\n"
	.string "It's, like, so five minutes ago.\p"
	.string "Now, “{STR_VAR_2}” is\n"
	.string "what's vital and in tune with the times!$"

DewfordTown_Text_XHuhIThinkYIsCool::
# 412 "data/maps/DewfordTown/scripts.pory"
	.string "Hmm…\n"
	.string "“{STR_VAR_2},” huh?\p"
	.string "But personally, I think\n"
	.string "“{STR_VAR_1}”\l"
	.string "is what's real in cool.$"

DewfordTown_Text_HearOfAnyTrendsComeShareWithMe::
# 421 "data/maps/DewfordTown/scripts.pory"
	.string "Well, if you hear of any happening new\n"
	.string "trends, come share them with me, okay?$"

DewfordTown_Text_YeahDefinitionOfInRightNow::
# 426 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, absolutely right!\p"
	.string "“{STR_VAR_1}” is the\n"
	.string "definition of “in” right now.$"
