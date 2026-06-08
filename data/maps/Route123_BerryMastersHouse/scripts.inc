Route123_BerryMastersHouse_MapScripts::
# 2 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_BerryMastersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route123_BerryMastersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_LANDMARK_BERRY_MASTERS_HOUSE
	end


Route123_BerryMastersHouse_EventScript_BerryMaster::
# 9 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock_faceplayer
# 10 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	dotimebasedevents
# 11 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY, Route123_BerryMastersHouse_EventScript_BerryMaster_2
# 15 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_YoureDeservingOfBerry, MSGBOX_DEFAULT
# 16 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giverandomberry BERRY_ID_POMEG, BERRY_ID_NOMEL
# 17 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route123_BerryMastersHouse_EventScript_BerryMaster_5
Route123_BerryMastersHouse_EventScript_BerryMaster_4:
# 20 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY
# 21 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_WhyBeStingyTakeAnother, MSGBOX_DEFAULT
# 22 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giverandomberry BERRY_ID_POMEG, BERRY_ID_NOMEL
# 23 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route123_BerryMastersHouse_EventScript_BerryMaster_8
Route123_BerryMastersHouse_EventScript_BerryMaster_7:
# 26 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_VisitPrettyPetalFlowerShop, MSGBOX_DEFAULT
	release_end

Route123_BerryMastersHouse_EventScript_BerryMaster_2:
# 12 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_DoneForToday, MSGBOX_DEFAULT
	release_end

Route123_BerryMastersHouse_EventScript_BerryMaster_5:
# 18 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route123_BerryMastersHouse_EventScript_BerryMaster_4

Route123_BerryMastersHouse_EventScript_BerryMaster_8:
# 24 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route123_BerryMastersHouse_EventScript_BerryMaster_7


Route123_BerryMastersHouse_EventScript_BerryMastersWife::
# 31 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock_faceplayer
# 32 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	dotimebasedevents
# 33 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_DAILY_BERRY_MASTERS_WIFE, Route123_BerryMastersHouse_EventScript_BerryMastersWife_2
# 37 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_HeardAGoodSayingLately, MSGBOX_DEFAULT
# 38 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_GOOD_SAYING
# 39 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	call Common_ShowEasyChatScreen
# 40 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	lock_faceplayer
# 41 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route123_BerryMastersHouse_EventScript_BerryMastersWife_5
Route123_BerryMastersHouse_EventScript_BerryMastersWife_4:
# 44 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_Ah, MSGBOX_DEFAULT
# 45 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
	release_end

Route123_BerryMastersHouse_EventScript_BerryMastersWife_2:
# 34 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
	release_end

Route123_BerryMastersHouse_EventScript_BerryMastersWife_5:
# 42 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GavePhrase
	goto Route123_BerryMastersHouse_EventScript_BerryMastersWife_4


Route123_BerryMastersHouse_EventScript_GavePhrase::
# 50 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	switch VAR_0x8004
# 51 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	case NOT_SPECIAL_PHRASE, Route123_BerryMastersHouse_EventScript_GavePhrase_3
# 52 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	case PHRASE_GREAT_BATTLE, Route123_BerryMastersHouse_EventScript_GavePhrase_4
# 57 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	case PHRASE_CHALLENGE_CONTEST, Route123_BerryMastersHouse_EventScript_GavePhrase_5
# 62 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	case PHRASE_OVERWHELMING_LATIAS, Route123_BerryMastersHouse_EventScript_GavePhrase_6
# 67 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	case PHRASE_COOL_LATIOS, Route123_BerryMastersHouse_EventScript_GavePhrase_7
# 72 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	case PHRASE_SUPER_HUSTLE, Route123_BerryMastersHouse_EventScript_GavePhrase_8
Route123_BerryMastersHouse_EventScript_GavePhrase_1:
# 78 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveSpecialBerry
	end

Route123_BerryMastersHouse_EventScript_GavePhrase_3:
# 51 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_1

Route123_BerryMastersHouse_EventScript_GavePhrase_4:
# 53 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_SPELON_BERRY, Route123_BerryMastersHouse_EventScript_GavePhrase_10
Route123_BerryMastersHouse_EventScript_GavePhrase_9:
# 56 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_SPELON_BERRY
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_1

Route123_BerryMastersHouse_EventScript_GavePhrase_5:
# 58 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_PAMTRE_BERRY, Route123_BerryMastersHouse_EventScript_GavePhrase_13
Route123_BerryMastersHouse_EventScript_GavePhrase_12:
# 61 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_PAMTRE_BERRY
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_1

Route123_BerryMastersHouse_EventScript_GavePhrase_6:
# 63 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_WATMEL_BERRY, Route123_BerryMastersHouse_EventScript_GavePhrase_16
Route123_BerryMastersHouse_EventScript_GavePhrase_15:
# 66 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_WATMEL_BERRY
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_1

Route123_BerryMastersHouse_EventScript_GavePhrase_7:
# 68 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_DURIN_BERRY, Route123_BerryMastersHouse_EventScript_GavePhrase_19
Route123_BerryMastersHouse_EventScript_GavePhrase_18:
# 71 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_DURIN_BERRY
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_1

Route123_BerryMastersHouse_EventScript_GavePhrase_8:
# 73 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_BELUE_BERRY, Route123_BerryMastersHouse_EventScript_GavePhrase_22
Route123_BerryMastersHouse_EventScript_GavePhrase_21:
# 76 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_BELUE_BERRY
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_1

Route123_BerryMastersHouse_EventScript_GavePhrase_10:
# 54 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_9

Route123_BerryMastersHouse_EventScript_GavePhrase_13:
# 59 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_12

Route123_BerryMastersHouse_EventScript_GavePhrase_16:
# 64 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_15

Route123_BerryMastersHouse_EventScript_GavePhrase_19:
# 69 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_18

Route123_BerryMastersHouse_EventScript_GavePhrase_22:
# 74 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Route123_BerryMastersHouse_EventScript_GiveNormalBerry
	goto Route123_BerryMastersHouse_EventScript_GavePhrase_21


Route123_BerryMastersHouse_EventScript_GiveNormalBerry::
# 83 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_GoodSayingTakeThis, MSGBOX_DEFAULT
# 84 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	giverandomberry BERRY_ID_CHERI, BERRY_ID_SITRUS
# 85 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route123_BerryMastersHouse_EventScript_GiveNormalBerry_2
Route123_BerryMastersHouse_EventScript_GiveNormalBerry_1:
# 88 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_DAILY_BERRY_MASTERS_WIFE
# 89 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
	release_end

Route123_BerryMastersHouse_EventScript_GiveNormalBerry_2:
# 86 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route123_BerryMastersHouse_EventScript_GiveNormalBerry_1


Route123_BerryMastersHouse_EventScript_GiveSpecialBerry::
# 94 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_InspirationalTakeThis, MSGBOX_DEFAULT
	giveitem VAR_GIFT_ITEM
# 0 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_2
Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_1:
# 98 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	switch VAR_GIFT_ITEM
# 99 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	case ITEM_SPELON_BERRY, Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_6
# 100 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	case ITEM_PAMTRE_BERRY, Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_7
# 101 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	case ITEM_WATMEL_BERRY, Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_8
# 102 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	case ITEM_DURIN_BERRY, Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_9
# 103 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	case ITEM_BELUE_BERRY, Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_10
Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_4:
# 105 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_DAILY_BERRY_MASTERS_WIFE
# 106 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	msgbox Route123_BerryMastersHouse_Text_JoyNeverGoesOutOfMyLife, MSGBOX_DEFAULT
	release_end

Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_2:
# 96 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_1

Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_6:
# 99 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_SPELON_BERRY
	goto Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_4

Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_7:
# 100 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_PAMTRE_BERRY
	goto Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_4

Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_8:
# 101 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_WATMEL_BERRY
	goto Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_4

Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_9:
# 102 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_DURIN_BERRY
	goto Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_4

Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_10:
# 103 "data/maps/Route123_BerryMastersHouse/scripts.pory"
	setflag FLAG_RECEIVED_BELUE_BERRY
	goto Route123_BerryMastersHouse_EventScript_GiveSpecialBerry_4

