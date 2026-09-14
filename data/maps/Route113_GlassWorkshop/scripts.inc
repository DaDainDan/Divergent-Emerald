Route113_GlassWorkshop_MapScripts::
# 5 "data/maps/Route113_GlassWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_GlassWorkshop_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route113_GlassWorkshop_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setflag FLAG_LANDMARK_GLASS_WORKSHOP
# 7 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 1
	goto_if_eq Route113_GlassWorkshop_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route113_GlassWorkshop_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route113_GlassWorkshop_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 2
	goto Route113_GlassWorkshop_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Route113_GlassWorkshop_EventScript_GlassWorker::
# 15 "data/maps/Route113_GlassWorkshop/scripts.pory"
	lock_faceplayer
# 16 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 10
	goto_if_ge Route113_GlassWorkshop_EventScript_GlassWorker_2
Route113_GlassWorkshop_EventScript_GlassWorker_1:
# 19 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 2
	goto_if_eq Route113_GlassWorkshop_EventScript_GlassWorker_5
Route113_GlassWorkshop_EventScript_GlassWorker_4:
# 22 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 1
	goto_if_eq Route113_GlassWorkshop_EventScript_GlassWorker_8
# 26 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_GoCollectAshWithThis, MSGBOX_DEFAULT
	giveitem ITEM_SOOT_SACK
# 0 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route113_GlassWorkshop_EventScript_GlassWorker_11
Route113_GlassWorkshop_EventScript_GlassWorker_10:
# 30 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 1
# 31 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_ExplainSootSack, MSGBOX_DEFAULT
	release_end

Route113_GlassWorkshop_EventScript_GlassWorker_2:
# 17 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom
	goto Route113_GlassWorkshop_EventScript_GlassWorker_1

Route113_GlassWorkshop_EventScript_GlassWorker_5:
# 20 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_CheckCollectedAsh
	goto Route113_GlassWorkshop_EventScript_GlassWorker_4

Route113_GlassWorkshop_EventScript_GlassWorker_8:
# 23 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_ExplainSootSack, MSGBOX_DEFAULT
	release_end

Route113_GlassWorkshop_EventScript_GlassWorker_11:
# 28 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route113_GlassWorkshop_EventScript_GlassWorker_10


Route113_GlassWorkshop_EventScript_CheckCollectedAsh::
	checkitem ITEM_SOOT_SACK
# 0 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route113_GlassWorkshop_EventScript_CheckCollectedAsh_2
# 40 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_LetsSeeCollectedAshes, MSGBOX_DEFAULT
# 41 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, 250
	goto_if_lt Route113_GlassWorkshop_EventScript_CheckCollectedAsh_5
# 48 "data/maps/Route113_GlassWorkshop/scripts.pory"
	message Route113_GlassWorkshop_Text_WhichGlassItemWoudYouLike
# 49 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 50 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem
	end

Route113_GlassWorkshop_EventScript_CheckCollectedAsh_2:
# 37 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_HaventGotYourSootSack, MSGBOX_DEFAULT
	release_end

Route113_GlassWorkshop_EventScript_CheckCollectedAsh_5:
# 42 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, 250
# 43 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_0x800A, VAR_ASH_GATHER_COUNT
# 44 "data/maps/Route113_GlassWorkshop/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x800A
# 45 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_NotEnoughAshNeedX, MSGBOX_DEFAULT
	release_end


Route113_GlassWorkshop_EventScript_ChooseGlassItem::
# 55 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8007, 0
# 56 "data/maps/Route113_GlassWorkshop/scripts.pory"
	dynmultipush Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_0, 1
# 57 "data/maps/Route113_GlassWorkshop/scripts.pory"
	dynmultipush Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_1, 2
# 58 "data/maps/Route113_GlassWorkshop/scripts.pory"
	dynmultipush Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_2, 3
# 59 "data/maps/Route113_GlassWorkshop/scripts.pory"
	dynmultipush Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_3, 4
# 60 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Route113_GlassWorkshop_EventScript_ChooseGlassItem_2
Route113_GlassWorkshop_EventScript_ChooseGlassItem_1:
# 63 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Route113_GlassWorkshop_EventScript_ChooseGlassItem_5
Route113_GlassWorkshop_EventScript_ChooseGlassItem_4:
# 66 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Route113_GlassWorkshop_EventScript_ChooseGlassItem_8
Route113_GlassWorkshop_EventScript_ChooseGlassItem_7:
# 69 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Route113_GlassWorkshop_EventScript_ChooseGlassItem_11
Route113_GlassWorkshop_EventScript_ChooseGlassItem_10:
# 72 "data/maps/Route113_GlassWorkshop/scripts.pory"
	dynmultipush Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_8, 0
# 73 "data/maps/Route113_GlassWorkshop/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 74 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_gt Route113_GlassWorkshop_EventScript_ChooseGlassItem_15
Route113_GlassWorkshop_EventScript_ChooseGlassItem_13:
# 77 "data/maps/Route113_GlassWorkshop/scripts.pory"
	switch VAR_RESULT
# 78 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 1, Route113_GlassWorkshop_EventScript_ChooseGlassItem_20
# 79 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 2, Route113_GlassWorkshop_EventScript_ChooseGlassItem_21
# 80 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 3, Route113_GlassWorkshop_EventScript_ChooseGlassItem_22
# 81 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 4, Route113_GlassWorkshop_EventScript_ChooseGlassItem_23
# 82 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 5, Route113_GlassWorkshop_EventScript_ChooseGlassItem_24
# 83 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 6, Route113_GlassWorkshop_EventScript_ChooseGlassItem_25
# 84 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 7, Route113_GlassWorkshop_EventScript_ChooseGlassItem_26
# 85 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 8, Route113_GlassWorkshop_EventScript_ChooseGlassItem_27
# 86 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 0, Route113_GlassWorkshop_EventScript_ChooseGlassItem_28
# 87 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case MULTI_B_PRESSED, Route113_GlassWorkshop_EventScript_ChooseGlassItem_28
Route113_GlassWorkshop_EventScript_ChooseGlassItem_18:
# 91 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem
	end

Route113_GlassWorkshop_EventScript_ChooseGlassItem_2:
# 61 "data/maps/Route113_GlassWorkshop/scripts.pory"
	dynmultipush Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_4, 5
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1

Route113_GlassWorkshop_EventScript_ChooseGlassItem_5:
# 64 "data/maps/Route113_GlassWorkshop/scripts.pory"
	dynmultipush Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_5, 6
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_4

Route113_GlassWorkshop_EventScript_ChooseGlassItem_8:
# 67 "data/maps/Route113_GlassWorkshop/scripts.pory"
	dynmultipush Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_6, 7
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_7

Route113_GlassWorkshop_EventScript_ChooseGlassItem_11:
# 70 "data/maps/Route113_GlassWorkshop/scripts.pory"
	dynmultipush Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_7, 8
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_10

Route113_GlassWorkshop_EventScript_ChooseGlassItem_14:
# 75 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8007, 1
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_13

Route113_GlassWorkshop_EventScript_ChooseGlassItem_15:
# 74 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt Route113_GlassWorkshop_EventScript_ChooseGlassItem_14
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_13

Route113_GlassWorkshop_EventScript_ChooseGlassItem_20:
# 78 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setitemandprice ITEM_WHITE_FLUTE, 500
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_18

Route113_GlassWorkshop_EventScript_ChooseGlassItem_21:
# 79 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setitemandprice ITEM_BLACK_FLUTE, 500
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_18

Route113_GlassWorkshop_EventScript_ChooseGlassItem_22:
# 80 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setitemandprice DECOR_PRETTY_CHAIR, 750
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_18

Route113_GlassWorkshop_EventScript_ChooseGlassItem_23:
# 81 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setitemandprice DECOR_PRETTY_DESK, 1000
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_18

Route113_GlassWorkshop_EventScript_ChooseGlassItem_24:
# 82 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setitemandprice ITEM_WIDE_LENS, 750
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_18

Route113_GlassWorkshop_EventScript_ChooseGlassItem_25:
# 83 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setitemandprice ITEM_ZOOM_LENS, 750
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_18

Route113_GlassWorkshop_EventScript_ChooseGlassItem_26:
# 84 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setitemandprice ITEM_SCOPE_LENS, 1000
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_18

Route113_GlassWorkshop_EventScript_ChooseGlassItem_27:
# 85 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setitemandprice ITEM_FINE_LENS, 1250
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_18

Route113_GlassWorkshop_EventScript_ChooseGlassItem_28:
# 88 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_AllThatAshButDontWantAnything, MSGBOX_DEFAULT
	release_end


Route113_GlassWorkshop_EventScript_PurchaseGlassItem::
# 96 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_0x8007, 1
	goto_if_eq Route113_GlassWorkshop_EventScript_PurchaseGlassItem_2
# 99 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_GIFT_ITEM
Route113_GlassWorkshop_EventScript_PurchaseGlassItem_1:
# 101 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, VAR_EXCHANGE_PRICE
	goto_if_lt Route113_GlassWorkshop_EventScript_PurchaseGlassItem_6
Route113_GlassWorkshop_EventScript_PurchaseGlassItem_5:
# 108 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 109 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route113_GlassWorkshop_EventScript_PurchaseGlassItem_9
Route113_GlassWorkshop_EventScript_PurchaseGlassItem_8:
# 114 "data/maps/Route113_GlassWorkshop/scripts.pory"
	switch VAR_GIFT_ITEM
# 115 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case ITEM_WHITE_FLUTE, Route113_GlassWorkshop_EventScript_PurchaseGlassItem_13
# 116 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case ITEM_BLACK_FLUTE, Route113_GlassWorkshop_EventScript_PurchaseGlassItem_14
# 117 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case DECOR_PRETTY_CHAIR, Route113_GlassWorkshop_EventScript_PurchaseGlassItem_15
# 118 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case DECOR_PRETTY_DESK, Route113_GlassWorkshop_EventScript_PurchaseGlassItem_16
# 119 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case ITEM_WIDE_LENS, Route113_GlassWorkshop_EventScript_PurchaseGlassItem_17
# 120 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case ITEM_ZOOM_LENS, Route113_GlassWorkshop_EventScript_PurchaseGlassItem_18
# 121 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case ITEM_SCOPE_LENS, Route113_GlassWorkshop_EventScript_PurchaseGlassItem_19
# 122 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case ITEM_FINE_LENS, Route113_GlassWorkshop_EventScript_PurchaseGlassItem_20
Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11:
# 124 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, VAR_EXCHANGE_PRICE
# 125 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IllMakeItemForYou, MSGBOX_DEFAULT
# 126 "data/maps/Route113_GlassWorkshop/scripts.pory"
	closemessage
# 127 "data/maps/Route113_GlassWorkshop/scripts.pory"
	fadescreen FADE_TO_BLACK
# 128 "data/maps/Route113_GlassWorkshop/scripts.pory"
	playse SE_SELECT
# 129 "data/maps/Route113_GlassWorkshop/scripts.pory"
	delay 30
# 130 "data/maps/Route113_GlassWorkshop/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 131 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveGlassItem
	end

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_2:
# 97 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_GIFT_ITEM
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_1

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_6:
# 102 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_EXCHANGE_PRICE, VAR_ASH_GATHER_COUNT
# 103 "data/maps/Route113_GlassWorkshop/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_EXCHANGE_PRICE
# 104 "data/maps/Route113_GlassWorkshop/scripts.pory"
	message Route113_GlassWorkshop_Text_NotEnoughAshToMakeItem
# 105 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 106 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_5

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_9:
# 110 "data/maps/Route113_GlassWorkshop/scripts.pory"
	message Route113_GlassWorkshop_Text_WhichWouldYouLike
# 111 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 112 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_8

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_13:
# 115 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 10
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_14:
# 116 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 11
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_15:
# 117 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 12
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_16:
# 118 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 13
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_17:
# 119 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 14
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_18:
# 120 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 15
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_19:
# 121 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 16
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_20:
# 122 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 17
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11


Route113_GlassWorkshop_EventScript_GiveGlassItem::
# 136 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IveFinishedGlassItem, MSGBOX_DEFAULT
# 137 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_0x8007, 1
	goto_if_eq Route113_GlassWorkshop_EventScript_GiveGlassItem_2
	giveitem VAR_GIFT_ITEM
# 0 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route113_GlassWorkshop_EventScript_GiveGlassItem_7
Route113_GlassWorkshop_EventScript_GiveGlassItem_1:
# 150 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 2
	release_end

Route113_GlassWorkshop_EventScript_GiveGlassItem_2:
	givedecoration VAR_GIFT_ITEM
# 0 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route113_GlassWorkshop_EventScript_GiveGlassItem_5
	goto Route113_GlassWorkshop_EventScript_GiveGlassItem_1

Route113_GlassWorkshop_EventScript_GiveGlassItem_5:
# 139 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 140 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_NoRoomInPC, MSGBOX_DEFAULT
	release_end

Route113_GlassWorkshop_EventScript_GiveGlassItem_7:
# 145 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Common_EventScript_BagIsFull
# 146 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_NoRoomInBag, MSGBOX_DEFAULT
	release_end


Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom::
# 155 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 14
	goto_if_gt Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_2
# 158 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8007, 0
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1:
# 160 "data/maps/Route113_GlassWorkshop/scripts.pory"
	switch VAR_GLASS_WORKSHOP_STATE
# 161 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 10, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_7
# 162 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 11, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_8
# 163 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 12, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_9
# 164 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 13, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_10
# 165 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 14, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_11
# 166 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 15, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_12
# 167 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 16, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_13
# 168 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 17, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_14
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5:
# 170 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_0x8007, 1
	goto_if_eq Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_16
# 173 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_GIFT_ITEM
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_15:
# 175 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveGlassItem
	end

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_2:
# 156 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8007, 1
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_7:
# 161 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_WHITE_FLUTE
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_8:
# 162 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_BLACK_FLUTE
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_9:
# 163 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GIFT_ITEM, DECOR_PRETTY_CHAIR
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_10:
# 164 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GIFT_ITEM, DECOR_PRETTY_DESK
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_11:
# 165 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_WIDE_LENS
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_12:
# 166 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_ZOOM_LENS
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_13:
# 167 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_SCOPE_LENS
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_14:
# 168 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_FINE_LENS
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_16:
# 171 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_GIFT_ITEM
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_15


Route113_GlassWorkshop_EventScript_NinjaBoy::
# 180 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_FunToBlowGlassFlute, MSGBOX_NPC
	end


Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_0:
# 56 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "WHITE FLUTE$"

Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_1:
# 57 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "BLACK FLUTE$"

Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_2:
# 58 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "PRETTY CHAIR$"

Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_3:
# 59 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "PRETTY DESK$"

Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_4:
# 61 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "WIDE LENS$"

Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_5:
# 64 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "ZOOM LENS$"

Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_6:
# 67 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "SCOPE LENS$"

Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_7:
# 70 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "FINE LENS$"

Route113_GlassWorkshop_EventScript_ChooseGlassItem_Text_8:
# 72 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "EXIT$"

Route113_GlassWorkshop_Text_GoCollectAshWithThis::
# 184 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "This area is covered in volcanic ash,\n"
	.string "huff-puff!\p"
	.string "I'm specially gifted, huff-puff.\p"
	.string "I make glass out of volcanic ash\n"
	.string "and make items, huff-puff.\p"
	.string "Go collect ashes with this, huff-puff.$"

Route113_GlassWorkshop_Text_ExplainSootSack::
# 196 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Just take that SOOT SACK and walk\n"
	.string "through piles of ash, huff-puff.\p"
	.string "And it will fill up with the volcanic ash,\n"
	.string "huff-puff.\p"
	.string "Once you think you've collected a good\n"
	.string "amount, come see me, huff-puff.$"

Route113_GlassWorkshop_Text_LetsSeeCollectedAshes::
# 207 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Have you collected ashes, huff-puff?\n"
	.string "Let me see, huff-puff.$"

Route113_GlassWorkshop_Text_NotEnoughAshNeedX::
# 212 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Hmmm…\n"
	.string "There's not enough ash here, huff-puff.\l"
	.string "I can't make glass with this, huff-puff.\p"
	.string "Let's see… {STR_VAR_1} is the number of steps\n"
	.string "you'll need to walk for me to make you\l"
	.string "a BLUE FLUTE, huff-puff.$"

Route113_GlassWorkshop_Text_WhichGlassItemWoudYouLike::
# 222 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh!\n"
	.string "You've got a lot of ashes, huff-puff!\p"
	.string "I'll make you a glass item, huff-puff!\n"
	.string "Which one would you like, huff-puff?$"

Route113_GlassWorkshop_Text_IsThatTheItemForYou::
# 230 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "A {STR_VAR_1}, huff-puff?\n"
	.string "Is that the one for you, huff-puff?$"

Route113_GlassWorkshop_Text_WhichWouldYouLike::
# 235 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Which one would you like, huff-puff?$"

Route113_GlassWorkshop_Text_IllMakeItemForYou::
# 239 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "A {STR_VAR_1} it is, then, huff-puff!\p"
	.string "Okay! I'll make it for you, huff-puff.\n"
	.string "Just wait a little while, huff-puff.$"

Route113_GlassWorkshop_Text_NotEnoughAshToMakeItem::
# 246 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "A {STR_VAR_1}, huff-puff?\p"
	.string "There's not enough ash here to make\n"
	.string "that, though, huff-puff.\p"
	.string "Let's see… {STR_VAR_2} is the number of steps\n"
	.string "you'll need to walk through volcanic ash\l"
	.string "for me to make that item, huff-puff.\p"
	.string "Which item would you rather have me\n"
	.string "make instead, huff-puff?$"

Route113_GlassWorkshop_Text_AllThatAshButDontWantAnything::
# 260 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "You've collected all that ash, but you\n"
	.string "don't want anything, huff-puff?$"

Route113_GlassWorkshop_Text_IveFinishedGlassItem::
# 265 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Ah, I've finished your {STR_VAR_1}.\n"
	.string "Take it, huff-puff.$"

Route113_GlassWorkshop_Text_NoRoomInBag::
# 270 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh?\n"
	.string "You've no room in your BAG, huff-puff.\p"
	.string "I'll hold on to it, so come back later,\n"
	.string "huff-puff.$"

Route113_GlassWorkshop_Text_NoRoomInPC::
# 278 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh?\n"
	.string "You've no room in your PC, huff-puff?\p"
	.string "I'll hold on to it, so come back later,\n"
	.string "huff-puff.$"

Route113_GlassWorkshop_Text_HaventGotYourSootSack::
# 286 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Hah? You haven't got your SOOT SACK\n"
	.string "with you, huff-puff.\p"
	.string "You have to keep it with you to collect\n"
	.string "volcanic ash, huff-puff.$"

Route113_GlassWorkshop_Text_FunToBlowGlassFlute::
# 294 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "It's fun to blow a glass flute while\n"
	.string "my boss is talking.\p"
	.string "Huff-huff! Puff-puff!$"
