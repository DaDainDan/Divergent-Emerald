Route113_GlassWorkshop_MapScripts::
# 11 "data/maps/Route113_GlassWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_GlassWorkshop_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route113_GlassWorkshop_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setflag FLAG_LANDMARK_GLASS_WORKSHOP
# 13 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 1
	goto_if_eq Route113_GlassWorkshop_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route113_GlassWorkshop_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route113_GlassWorkshop_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 14 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 2
	goto Route113_GlassWorkshop_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Route113_GlassWorkshop_EventScript_GlassWorker::
# 21 "data/maps/Route113_GlassWorkshop/scripts.pory"
	lock_faceplayer
# 22 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 10
	goto_if_ge Route113_GlassWorkshop_EventScript_GlassWorker_2
Route113_GlassWorkshop_EventScript_GlassWorker_1:
# 25 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 2
	goto_if_eq Route113_GlassWorkshop_EventScript_GlassWorker_5
Route113_GlassWorkshop_EventScript_GlassWorker_4:
# 28 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 1
	goto_if_eq Route113_GlassWorkshop_EventScript_GlassWorker_8
# 32 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_GoCollectAshWithThis, MSGBOX_DEFAULT
	giveitem ITEM_SOOT_SACK
# 0 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route113_GlassWorkshop_EventScript_GlassWorker_11
Route113_GlassWorkshop_EventScript_GlassWorker_10:
# 36 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 1
# 37 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_ExplainSootSack, MSGBOX_DEFAULT
	release_end

Route113_GlassWorkshop_EventScript_GlassWorker_2:
# 23 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom
	goto Route113_GlassWorkshop_EventScript_GlassWorker_1

Route113_GlassWorkshop_EventScript_GlassWorker_5:
# 26 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_CheckCollectedAsh
	goto Route113_GlassWorkshop_EventScript_GlassWorker_4

Route113_GlassWorkshop_EventScript_GlassWorker_8:
# 29 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_ExplainSootSack, MSGBOX_DEFAULT
	release_end

Route113_GlassWorkshop_EventScript_GlassWorker_11:
# 34 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route113_GlassWorkshop_EventScript_GlassWorker_10


Route113_GlassWorkshop_EventScript_CheckCollectedAsh::
	checkitem ITEM_SOOT_SACK
# 0 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route113_GlassWorkshop_EventScript_CheckCollectedAsh_2
# 46 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_LetsSeeCollectedAshes, MSGBOX_DEFAULT
# 47 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, 250
	goto_if_lt Route113_GlassWorkshop_EventScript_CheckCollectedAsh_5
# 54 "data/maps/Route113_GlassWorkshop/scripts.pory"
	message Route113_GlassWorkshop_Text_WhichGlassItemWoudYouLike
# 55 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 56 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem
	end

Route113_GlassWorkshop_EventScript_CheckCollectedAsh_2:
# 43 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_HaventGotYourSootSack, MSGBOX_DEFAULT
	release_end

Route113_GlassWorkshop_EventScript_CheckCollectedAsh_5:
# 48 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x800A, 250
# 49 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_0x800A, VAR_ASH_GATHER_COUNT
# 50 "data/maps/Route113_GlassWorkshop/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x800A
# 51 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_NotEnoughAshNeedX, MSGBOX_DEFAULT
	release_end


Route113_GlassWorkshop_EventScript_ChooseGlassItem::
# 61 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8007, 0
# 62 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_GLASS_WORKSHOP_VENDOR
# 63 "data/maps/Route113_GlassWorkshop/scripts.pory"
	special ShowScrollableMultichoice
# 64 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_gt Route113_GlassWorkshop_EventScript_ChooseGlassItem_3
Route113_GlassWorkshop_EventScript_ChooseGlassItem_1:
# 67 "data/maps/Route113_GlassWorkshop/scripts.pory"
	switch VAR_RESULT
# 68 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 0, Route113_GlassWorkshop_EventScript_ChooseGlassItem_8
# 69 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 1, Route113_GlassWorkshop_EventScript_ChooseGlassItem_9
# 70 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 2, Route113_GlassWorkshop_EventScript_ChooseGlassItem_10
# 71 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 3, Route113_GlassWorkshop_EventScript_ChooseGlassItem_11
# 72 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 4, Route113_GlassWorkshop_EventScript_ChooseGlassItem_12
# 73 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 5, Route113_GlassWorkshop_EventScript_ChooseGlassItem_13
# 74 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 6, Route113_GlassWorkshop_EventScript_ChooseGlassItem_14
# 75 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 7, Route113_GlassWorkshop_EventScript_ChooseGlassItem_15
# 76 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case MULTI_B_PRESSED, Route113_GlassWorkshop_EventScript_ChooseGlassItem_15
Route113_GlassWorkshop_EventScript_ChooseGlassItem_6:
# 80 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem
	end

Route113_GlassWorkshop_EventScript_ChooseGlassItem_2:
# 65 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8007, 1
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1

Route113_GlassWorkshop_EventScript_ChooseGlassItem_3:
# 64 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_lt Route113_GlassWorkshop_EventScript_ChooseGlassItem_2
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_1

Route113_GlassWorkshop_EventScript_ChooseGlassItem_8:
# 68 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setitemandprice ITEM_BLUE_FLUTE, 250
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_6

Route113_GlassWorkshop_EventScript_ChooseGlassItem_9:
# 69 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setitemandprice ITEM_YELLOW_FLUTE, 500
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_6

Route113_GlassWorkshop_EventScript_ChooseGlassItem_10:
# 70 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setitemandprice ITEM_RED_FLUTE, 500
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_6

Route113_GlassWorkshop_EventScript_ChooseGlassItem_11:
# 71 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setitemandprice ITEM_WHITE_FLUTE, 1000
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_6

Route113_GlassWorkshop_EventScript_ChooseGlassItem_12:
# 72 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setitemandprice ITEM_BLACK_FLUTE, 1000
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_6

Route113_GlassWorkshop_EventScript_ChooseGlassItem_13:
# 73 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setitemandprice DECOR_PRETTY_CHAIR, 6000
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_6

Route113_GlassWorkshop_EventScript_ChooseGlassItem_14:
# 74 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setitemandprice DECOR_PRETTY_DESK, 8000
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem_6

Route113_GlassWorkshop_EventScript_ChooseGlassItem_15:
# 77 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_AllThatAshButDontWantAnything, MSGBOX_DEFAULT
	release_end


Route113_GlassWorkshop_EventScript_PurchaseGlassItem::
# 85 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_0x8007, 1
	goto_if_eq Route113_GlassWorkshop_EventScript_PurchaseGlassItem_2
# 88 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_GIFT_ITEM
Route113_GlassWorkshop_EventScript_PurchaseGlassItem_1:
# 90 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, VAR_EXCHANGE_PRICE
	goto_if_lt Route113_GlassWorkshop_EventScript_PurchaseGlassItem_6
Route113_GlassWorkshop_EventScript_PurchaseGlassItem_5:
# 97 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IsThatTheItemForYou, MSGBOX_YESNO
# 98 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route113_GlassWorkshop_EventScript_PurchaseGlassItem_9
Route113_GlassWorkshop_EventScript_PurchaseGlassItem_8:
# 103 "data/maps/Route113_GlassWorkshop/scripts.pory"
	switch VAR_GIFT_ITEM
# 104 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case ITEM_BLUE_FLUTE, Route113_GlassWorkshop_EventScript_PurchaseGlassItem_13
# 105 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case ITEM_YELLOW_FLUTE, Route113_GlassWorkshop_EventScript_PurchaseGlassItem_14
# 106 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case ITEM_RED_FLUTE, Route113_GlassWorkshop_EventScript_PurchaseGlassItem_15
# 107 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case ITEM_WHITE_FLUTE, Route113_GlassWorkshop_EventScript_PurchaseGlassItem_16
# 108 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case ITEM_BLACK_FLUTE, Route113_GlassWorkshop_EventScript_PurchaseGlassItem_17
# 109 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case DECOR_PRETTY_CHAIR, Route113_GlassWorkshop_EventScript_PurchaseGlassItem_18
# 110 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case DECOR_PRETTY_DESK, Route113_GlassWorkshop_EventScript_PurchaseGlassItem_19
Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11:
# 112 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, VAR_EXCHANGE_PRICE
# 113 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IllMakeItemForYou, MSGBOX_DEFAULT
# 114 "data/maps/Route113_GlassWorkshop/scripts.pory"
	closemessage
# 115 "data/maps/Route113_GlassWorkshop/scripts.pory"
	fadescreen FADE_TO_BLACK
# 116 "data/maps/Route113_GlassWorkshop/scripts.pory"
	playse SE_SELECT
# 117 "data/maps/Route113_GlassWorkshop/scripts.pory"
	delay 30
# 118 "data/maps/Route113_GlassWorkshop/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 119 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveGlassItem
	end

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_2:
# 86 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_GIFT_ITEM
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_1

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_6:
# 91 "data/maps/Route113_GlassWorkshop/scripts.pory"
	subvar VAR_EXCHANGE_PRICE, VAR_ASH_GATHER_COUNT
# 92 "data/maps/Route113_GlassWorkshop/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_EXCHANGE_PRICE
# 93 "data/maps/Route113_GlassWorkshop/scripts.pory"
	message Route113_GlassWorkshop_Text_NotEnoughAshToMakeItem
# 94 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 95 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_5

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_9:
# 99 "data/maps/Route113_GlassWorkshop/scripts.pory"
	message Route113_GlassWorkshop_Text_WhichWouldYouLike
# 100 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitmessage
# 101 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_ChooseGlassItem
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_8

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_13:
# 104 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 10
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_14:
# 105 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 11
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_15:
# 106 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 12
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_16:
# 107 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 13
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_17:
# 108 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 14
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_18:
# 109 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 15
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11

Route113_GlassWorkshop_EventScript_PurchaseGlassItem_19:
# 110 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 16
	goto Route113_GlassWorkshop_EventScript_PurchaseGlassItem_11


Route113_GlassWorkshop_EventScript_GiveGlassItem::
# 124 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IveFinishedGlassItem, MSGBOX_DEFAULT
# 125 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_0x8007, 1
	goto_if_eq Route113_GlassWorkshop_EventScript_GiveGlassItem_2
	giveitem VAR_GIFT_ITEM
# 0 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route113_GlassWorkshop_EventScript_GiveGlassItem_7
Route113_GlassWorkshop_EventScript_GiveGlassItem_1:
# 138 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 2
	release_end

Route113_GlassWorkshop_EventScript_GiveGlassItem_2:
	givedecoration VAR_GIFT_ITEM
# 0 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route113_GlassWorkshop_EventScript_GiveGlassItem_5
	goto Route113_GlassWorkshop_EventScript_GiveGlassItem_1

Route113_GlassWorkshop_EventScript_GiveGlassItem_5:
# 127 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 128 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_NoRoomInPC, MSGBOX_DEFAULT
	release_end

Route113_GlassWorkshop_EventScript_GiveGlassItem_7:
# 133 "data/maps/Route113_GlassWorkshop/scripts.pory"
	call Common_EventScript_BagIsFull
# 134 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_NoRoomInBag, MSGBOX_DEFAULT
	release_end


Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom::
# 143 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_GLASS_WORKSHOP_STATE, 14
	goto_if_gt Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_2
# 146 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8007, 0
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1:
# 148 "data/maps/Route113_GlassWorkshop/scripts.pory"
	switch VAR_GLASS_WORKSHOP_STATE
# 149 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 10, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_7
# 150 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 11, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_8
# 151 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 12, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_9
# 152 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 13, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_10
# 153 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 14, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_11
# 154 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 15, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_12
# 155 "data/maps/Route113_GlassWorkshop/scripts.pory"
	case 16, Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_13
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5:
# 157 "data/maps/Route113_GlassWorkshop/scripts.pory"
	compare VAR_0x8007, 1
	goto_if_eq Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_15
# 160 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferitemname STR_VAR_1, VAR_GIFT_ITEM
Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_14:
# 162 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto Route113_GlassWorkshop_EventScript_GiveGlassItem
	end

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_2:
# 144 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8007, 1
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_1

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_7:
# 149 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_BLUE_FLUTE
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_8:
# 150 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_YELLOW_FLUTE
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_9:
# 151 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_RED_FLUTE
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_10:
# 152 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_WHITE_FLUTE
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_11:
# 153 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_BLACK_FLUTE
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_12:
# 154 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GIFT_ITEM, DECOR_PRETTY_CHAIR
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_13:
# 155 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_GIFT_ITEM, DECOR_PRETTY_DESK
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_5

Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_15:
# 158 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferdecorationname STR_VAR_1, VAR_GIFT_ITEM
	goto Route113_GlassWorkshop_EventScript_GiveItemAfterNoRoom_14


Route113_GlassWorkshop_EventScript_NinjaBoy::
# 167 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_FunToBlowGlassFlute, MSGBOX_NPC
	end


Route113_GlassWorkshop_Text_GoCollectAshWithThis::
# 171 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "This area is covered in volcanic ash,\n"
	.string "huff-puff!\p"
	.string "I'm specially gifted, huff-puff.\p"
	.string "I make glass out of volcanic ash\n"
	.string "and make items, huff-puff.\p"
	.string "Go collect ashes with this, huff-puff.$"

Route113_GlassWorkshop_Text_ExplainSootSack::
# 183 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Just take that SOOT SACK and walk\n"
	.string "through piles of ash, huff-puff.\p"
	.string "And it will fill up with the volcanic ash,\n"
	.string "huff-puff.\p"
	.string "Once you think you've collected a good\n"
	.string "amount, come see me, huff-puff.$"

Route113_GlassWorkshop_Text_LetsSeeCollectedAshes::
# 194 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Have you collected ashes, huff-puff?\n"
	.string "Let me see, huff-puff.$"

Route113_GlassWorkshop_Text_NotEnoughAshNeedX::
# 199 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Hmmm…\n"
	.string "There's not enough ash here, huff-puff.\l"
	.string "I can't make glass with this, huff-puff.\p"
	.string "Let's see… {STR_VAR_1} is the number of steps\n"
	.string "you'll need to walk for me to make you\l"
	.string "a BLUE FLUTE, huff-puff.$"

Route113_GlassWorkshop_Text_WhichGlassItemWoudYouLike::
# 209 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh!\n"
	.string "You've got a lot of ashes, huff-puff!\p"
	.string "I'll make you a glass item, huff-puff!\n"
	.string "Which one would you like, huff-puff?$"

Route113_GlassWorkshop_Text_IsThatTheItemForYou::
# 217 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "A {STR_VAR_1}, huff-puff?\n"
	.string "Is that the one for you, huff-puff?$"

Route113_GlassWorkshop_Text_WhichWouldYouLike::
# 222 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Which one would you like, huff-puff?$"

Route113_GlassWorkshop_Text_IllMakeItemForYou::
# 226 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "A {STR_VAR_1} it is, then, huff-puff!\p"
	.string "Okay! I'll make it for you, huff-puff.\n"
	.string "Just wait a little while, huff-puff.$"

Route113_GlassWorkshop_Text_NotEnoughAshToMakeItem::
# 233 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "A {STR_VAR_1}, huff-puff?\p"
	.string "There's not enough ash here to make\n"
	.string "that, though, huff-puff.\p"
	.string "Let's see… {STR_VAR_2} is the number of steps\n"
	.string "you'll need to walk through volcanic ash\l"
	.string "for me to make that item, huff-puff.\p"
	.string "Which item would you rather have me\n"
	.string "make instead, huff-puff?$"

Route113_GlassWorkshop_Text_AllThatAshButDontWantAnything::
# 247 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "You've collected all that ash, but you\n"
	.string "don't want anything, huff-puff?$"

Route113_GlassWorkshop_Text_IveFinishedGlassItem::
# 252 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Ah, I've finished your {STR_VAR_1}.\n"
	.string "Take it, huff-puff.$"

Route113_GlassWorkshop_Text_NoRoomInBag::
# 257 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh?\n"
	.string "You've no room in your BAG, huff-puff.\p"
	.string "I'll hold on to it, so come back later,\n"
	.string "huff-puff.$"

Route113_GlassWorkshop_Text_NoRoomInPC::
# 265 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Oh?\n"
	.string "You've no room in your PC, huff-puff?\p"
	.string "I'll hold on to it, so come back later,\n"
	.string "huff-puff.$"

Route113_GlassWorkshop_Text_HaventGotYourSootSack::
# 273 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Hah? You haven't got your SOOT SACK\n"
	.string "with you, huff-puff.\p"
	.string "You have to keep it with you to collect\n"
	.string "volcanic ash, huff-puff.$"

Route113_GlassWorkshop_Text_FunToBlowGlassFlute::
# 281 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "It's fun to blow a glass flute while\n"
	.string "my boss is talking.\p"
	.string "Huff-huff! Puff-puff!$"
