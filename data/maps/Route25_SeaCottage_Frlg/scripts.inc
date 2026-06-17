Route25_SeaCottage_Frlg_MapScripts::
# 5 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route25_SeaCottage_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route25_SeaCottage_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_unset FLAG_HELPED_BILL_IN_SEA_COTTAGE, Route25_SeaCottage_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route25_SeaCottage_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, Route25_SeaCottage_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route25_SeaCottage_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

Route25_SeaCottage_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	clearflag FLAG_HIDE_BILL_CLEFAIRY
# 8 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setobjectxyperm LOCALID_BILL_HUMAN, 3, 3
	goto Route25_SeaCottage_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route25_SeaCottage_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
	goto Route25_SeaCottage_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


Route25_SeaCottage_EventScript_Bill::
# 18 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	lock_faceplayer
# 19 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_3, Route25_SeaCottage_EventScript_Bill_2
# 23 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, Route25_SeaCottage_EventScript_Bill_3
# 27 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set FLAG_HELPED_BILL_IN_SEA_COTTAGE, Route25_SeaCottage_EventScript_Bill_4
Route25_SeaCottage_EventScript_Bill_1:
	checkplayergender
# 0 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route25_SeaCottage_EventScript_Bill_9
# 33 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ImBillHelpMeOutLady, MSGBOX_YESNO
Route25_SeaCottage_EventScript_Bill_8:
# 35 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route25_SeaCottage_EventScript_Bill_13
Route25_SeaCottage_EventScript_Bill_12:
# 42 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_RunCellSeparationOnPC
# 43 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closemessage
# 44 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 10
# 45 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	switch VAR_FACING
# 46 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case DIR_SOUTH, Route25_SeaCottage_EventScript_Bill_17
# 47 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_EventScript_Bill_Movement_1
Route25_SeaCottage_EventScript_Bill_15:
# 49 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	opendoor 10, 3
# 51 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 52 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Common_Movement_WalkUp
# 53 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	removeobject LOCALID_BILL_CLEFAIRY
# 55 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_CONTEST_CURTAIN_FALL
# 56 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closedoor 10, 3
# 57 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 58 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
	release_end

Route25_SeaCottage_EventScript_Bill_2:
# 20 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_CheckOutRareMonsOnPC
	release_end

Route25_SeaCottage_EventScript_Bill_3:
# 24 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_SSAnnePartyYouGoInstead
	release_end

Route25_SeaCottage_EventScript_Bill_4:
# 28 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillGiveSSTicket
	goto Route25_SeaCottage_EventScript_Bill_1

Route25_SeaCottage_EventScript_Bill_9:
# 31 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ImBillHelpMeOutPal, MSGBOX_YESNO
	goto Route25_SeaCottage_EventScript_Bill_8

Route25_SeaCottage_EventScript_Bill_13:
	checkplayergender
# 0 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route25_SeaCottage_EventScript_Bill_19
# 39 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_NoPleaseBeautiful
	goto Route25_SeaCottage_EventScript_Bill_12

Route25_SeaCottage_EventScript_Bill_17:
# 46 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_CLEFAIRY, Route25_SeaCottage_EventScript_Bill_Movement_0
	goto Route25_SeaCottage_EventScript_Bill_15

Route25_SeaCottage_EventScript_Bill_19:
# 37 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_NoPleaseChief
	goto Route25_SeaCottage_EventScript_Bill_12


Route25_SeaCottage_EventScript_BillGiveSSTicket::
# 63 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	checkplayergender
# 0 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route25_SeaCottage_EventScript_BillGiveSSTicket_2
# 67 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ThanksLadyTakeThis
Route25_SeaCottage_EventScript_BillGiveSSTicket_1:
	checkitemspace ITEM_SS_TICKET
# 0 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route25_SeaCottage_EventScript_BillGiveSSTicket_6
# 73 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	giveitem_msg Route25_SeaCottage_Text_ReceivedSSTicketFromBill, ITEM_SS_TICKET, 1, MUS_RG_OBTAIN_KEY_ITEM
# 74 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_GOT_SS_TICKET_DUP
# 75 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_HIDE_NUGGET_BRIDGE_ROCKET
# 76 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_GOT_SS_TICKET
# 77 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 78 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_SSAnnePartyYouGoInstead
	release_end

Route25_SeaCottage_EventScript_BillGiveSSTicket_2:
# 65 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_ThanksBudTakeThis
	goto Route25_SeaCottage_EventScript_BillGiveSSTicket_1

Route25_SeaCottage_EventScript_BillGiveSSTicket_6:
# 70 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_YouveGotTooMuchStuff
	release_end


Route25_SeaCottage_EventScript_Computer::
# 83 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	lockall
# 84 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_3, Route25_SeaCottage_EventScript_Computer_2
# 88 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, Route25_SeaCottage_EventScript_Computer_3
Route25_SeaCottage_EventScript_Computer_1:
# 91 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_TeleporterIsDisplayed
# 92 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	releaseall
	end

Route25_SeaCottage_EventScript_Computer_2:
# 85 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_BillsFavoriteMonList
# 86 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	goto Route25_SeaCottage_EventScript_Computer_1

Route25_SeaCottage_EventScript_Computer_3:
# 89 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_RunCellSeparator
	goto Route25_SeaCottage_EventScript_Computer_1


Route25_SeaCottage_EventScript_RunCellSeparator::
# 97 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	fadeoutbgm 0
# 98 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	msgbox Route25_SeaCottage_Text_InitiatedTeleportersCellSeparator
# 99 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closemessage
# 100 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	clearflag FLAG_TEMP_2
# 101 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setflag FLAG_HELPED_BILL_IN_SEA_COTTAGE
# 102 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SpawnCameraObject
# 103 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_CAMERA, Route25_SeaCottage_EventScript_RunCellSeparator_Movement_0
# 104 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 35
# 106 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_PIN
# 107 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitse
# 108 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 109 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special AnimateTeleporterHousing
# 110 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 10
# 111 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 112 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 113 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 114 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 115 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 116 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 117 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 118 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 119 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special AnimateTeleporterHousing
# 120 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_WARP_IN
# 121 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special AnimateTeleporterCable
# 122 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitse
# 123 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 124 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 125 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 126 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 127 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	call Route25_SeaCottage_EventScript_PlayTeleporterBeepSE
# 128 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	opendoor 3, 3
# 129 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 130 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	fadeinbgm 0
# 131 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	addobject LOCALID_BILL_HUMAN
# 132 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	clearflag FLAG_HIDE_BILL_HUMAN_SEA_COTTAGE
# 133 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 50
# 134 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 135 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Common_Movement_WalkDown
# 136 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitfanfare
# 138 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_CAMERA, Route25_SeaCottage_EventScript_RunCellSeparator_Movement_1
# 139 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_CONTEST_CURTAIN_FALL
# 141 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	closedoor 3, 3
# 142 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitdooranim
# 143 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	applymovement LOCALID_BILL_HUMAN, Route25_SeaCottage_EventScript_RunCellSeparator_Movement_2
# 144 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmovement 0
# 145 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special RemoveCameraObject
# 146 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	releaseall
	end


Route25_SeaCottage_EventScript_PlayTeleporterBeepSE::
# 151 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	playse SE_BALL
# 152 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitse
# 153 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay 20
	return


Route25_SeaCottage_EventScript_BillsMonList::
# 158 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	message Route25_SeaCottage_Text_SeeWhichMon
# 159 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitmessage
# 160 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_EEVEELUTIONS, FALSE
# 161 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	switch VAR_RESULT
# 162 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 0, Route25_SeaCottage_EventScript_BillsMonList_3
# 163 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 1, Route25_SeaCottage_EventScript_BillsMonList_4
# 164 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 2, Route25_SeaCottage_EventScript_BillsMonList_5
# 165 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 3, Route25_SeaCottage_EventScript_BillsMonList_6
# 166 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case 4, Route25_SeaCottage_EventScript_BillsMonList_7
# 167 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	case MULTI_B_PRESSED, Route25_SeaCottage_EventScript_BillsMonList_7
Route25_SeaCottage_EventScript_BillsMonList_1:
# 171 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	showmonpic VAR_0x800A, 10, 3
# 172 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	waitbuttonpress
# 173 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	hidemonpic
# 174 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_0x800A
# 175 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	special SetSeenMon
# 176 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	goto Route25_SeaCottage_EventScript_BillsMonList
	end

Route25_SeaCottage_EventScript_BillsMonList_3:
# 162 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x800A, SPECIES_EEVEE
	goto Route25_SeaCottage_EventScript_BillsMonList_1

Route25_SeaCottage_EventScript_BillsMonList_4:
# 163 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x800A, SPECIES_FLAREON
	goto Route25_SeaCottage_EventScript_BillsMonList_1

Route25_SeaCottage_EventScript_BillsMonList_5:
# 164 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x800A, SPECIES_JOLTEON
	goto Route25_SeaCottage_EventScript_BillsMonList_1

Route25_SeaCottage_EventScript_BillsMonList_6:
# 165 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	setvar VAR_0x800A, SPECIES_VAPOREON
	goto Route25_SeaCottage_EventScript_BillsMonList_1

Route25_SeaCottage_EventScript_BillsMonList_7:
# 168 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	releaseall
	end


# 46 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Bill_Movement_0:
# 46 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 46 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 46 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 46 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_left
# 46 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	step_faster_up
	step_end

# 47 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_Bill_Movement_1:
# 47 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 47 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
	step_end

# 103 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_RunCellSeparator_Movement_0:
# 103 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 103 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_up
# 103 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 103 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
	step_end

# 138 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_RunCellSeparator_Movement_1:
# 138 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay_16
# 138 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	delay_16
# 138 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 138 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 138 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_left
# 138 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_left
	step_end

# 143 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
Route25_SeaCottage_EventScript_RunCellSeparator_Movement_2:
# 143 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 143 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 143 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 143 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_right
# 143 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
# 143 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	walk_down
	step_end

Route25_SeaCottage_Text_ImBillHelpMeOutPal::
# 180 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Hiya! I'm a POKéMON…\n"
	.string "…No I'm not!\p"
	.string "Call me BILL!\n"
	.string "I'm a true-blue POKéMANIAC!\p"
	.string "Hey!\n"
	.string "What's with that skeptical look?\p"
	.string "I'm not joshing you, pal.\p"
	.string "I screwed up an experiment and got\n"
	.string "combined with a POKéMON!\p"
	.string "So, how about it?\n"
	.string "Help me out here!$"

Route25_SeaCottage_Text_ImBillHelpMeOutLady::
# 199 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Hiya! I'm a POKéMON…\n"
	.string "…No I'm not!\p"
	.string "Call me BILL!\n"
	.string "I'm a true-blue POKéMANIAC!\p"
	.string "Hey!\n"
	.string "What's with that skeptical look?\p"
	.string "I'm not joshing you, lady.\p"
	.string "I screwed up an experiment and got\n"
	.string "combined with a POKéMON!\p"
	.string "So, how about it?\n"
	.string "Help me out here!$"

Route25_SeaCottage_Text_RunCellSeparationOnPC::
# 218 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Wait till I get inside the\n"
	.string "TELEPORTER.\p"
	.string "When I do, go to my PC and run\n"
	.string "the Cell Separation System.$"

Route25_SeaCottage_Text_NoPleaseChief::
# 226 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "No!?\n"
	.string "Now don't be so cold!\p"
	.string "Come on, you gotta help a guy in\n"
	.string "deep, deep trouble!\p"
	.string "What do you say, chief?\n"
	.string "Please?\l"
	.string "Okay?\l"
	.string "All right!$"

Route25_SeaCottage_Text_NoPleaseBeautiful::
# 239 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "No!?\n"
	.string "Now don't be so cold!\p"
	.string "Come on, you gotta help a guy in\n"
	.string "deep, deep trouble!\p"
	.string "What do you say, beautiful?\n"
	.string "Please?\l"
	.string "Okay?\l"
	.string "All right!$"

Route25_SeaCottage_Text_ThanksBudTakeThis::
# 252 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL: Yeehah!\n"
	.string "Thanks, bud! I owe you one!\p"
	.string "So, did you come to see my\n"
	.string "POKéMON collection?\p"
	.string "You didn't?\n"
	.string "That's a bummer.\p"
	.string "I've got to thank you…\n"
	.string "Oh, here, maybe this'll do.$"

Route25_SeaCottage_Text_ThanksLadyTakeThis::
# 266 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL: Yeehah!\n"
	.string "Thanks, lady! I owe you one!\p"
	.string "So, did you come to see my\n"
	.string "POKéMON collection?\p"
	.string "You didn't?\n"
	.string "That's a bummer.\p"
	.string "I've got to thank you…\n"
	.string "Oh, here, maybe this'll do.$"

Route25_SeaCottage_Text_ReceivedSSTicketFromBill::
# 280 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "{PLAYER} received an S.S. TICKET\n"
	.string "from BILL.$"

Route25_SeaCottage_Text_YouveGotTooMuchStuff::
# 285 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "You've got too much stuff!$"

Route25_SeaCottage_Text_SSAnnePartyYouGoInstead::
# 289 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "That cruise ship S.S. ANNE is in\n"
	.string "VERMILION CITY.\p"
	.string "I hear there are lots of TRAINERS\n"
	.string "on board, too.\p"
	.string "They invited me to their party, but\n"
	.string "I can't stand fancy do's.\p"
	.string "Why don't you go instead of me?\n"
	.string "Go on and have a good time.$"

Route25_SeaCottage_Text_CheckOutRareMonsOnPC::
# 303 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL: Feel like checking out some\n"
	.string "of my rare POKéMON on my PC?\p"
	.string "Go on, check out my PC.$"

Route25_SeaCottage_Text_TeleporterIsDisplayed::
# 310 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "TELEPORTER is displayed on the PC\n"
	.string "monitor.$"

Route25_SeaCottage_Text_InitiatedTeleportersCellSeparator::
# 315 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "{PLAYER} initiated the TELEPORTER's\n"
	.string "Cell Separator.$"

Route25_SeaCottage_Text_BillsFavoriteMonList::
# 320 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "BILL's favorite POKéMON list!$"

Route25_SeaCottage_Text_SeeWhichMon::
# 324 "data/maps/Route25_SeaCottage_Frlg/scripts.pory"
	.string "Which POKéMON do you want to see?$"
