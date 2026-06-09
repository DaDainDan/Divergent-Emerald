LilycoveCity_DepartmentStore_1F_MapScripts::
	.byte 0


LilycoveCity_DepartmentStore_1F_EventScript_Greeter::
# 4 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk::
# 9 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	lock_faceplayer
# 10 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	dotimebasedevents
# 11 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_POKELOT_PRIZE_ITEM, ITEM_NONE
	goto_if_ne LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_2
# 24 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	goto_if_set FLAG_DAILY_PICKED_LOTO_TICKET, LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_5
# 28 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_LotteryCornerDrawTicket, MSGBOX_YESNO
# 29 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_11
# 33 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	setflag FLAG_DAILY_PICKED_LOTO_TICKET
# 34 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	message LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket
# 35 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmessage
# 36 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special RetrieveLotteryNumber
# 37 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 38 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special BufferLottoTicketNumber
# 39 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketNumberIsXPleaseWait, MSGBOX_DEFAULT
# 40 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	applymovement LOCALID_LOTTERY_CLERK, Common_Movement_StepFasterRight
# 41 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmovement 0
# 42 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	playse SE_PC_ON
# 43 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special DoLotteryCornerComputerEffect
# 44 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special PickLotteryCornerTicket
# 45 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	delay 220
# 46 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special EndLotteryCornerComputerEffect
# 47 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	delay 10
# 48 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	applymovement LOCALID_LOTTERY_CLERK, Common_Movement_FacePlayer
# 49 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_14
# 53 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	incrementgamestat GAME_STAT_WON_POKEMON_LOTTERY
# 54 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	switch VAR_0x8006
# 55 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	case 0, LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_19
# 56 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	case 1, LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_20
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_17:
# 58 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	bufferitemname STR_VAR_1, VAR_0x8005
# 59 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	switch VAR_0x8004
# 60 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	case 1, LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_23
# 61 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	case 2, LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_24
# 62 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	case 3, LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_25
# 63 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	case 4, LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_26
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_21:
	giveitem VAR_0x8005
# 0 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_28
# 71 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special TryPutLotteryWinnerReportOnAir
LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_13:
# 73 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain2, MSGBOX_DEFAULT
	release_end

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_2:
# 12 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PrizeWeveBeenHolding, MSGBOX_DEFAULT
	giveitem VAR_POKELOT_PRIZE_ITEM
# 0 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_8
# 17 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8004, VAR_POKELOT_PRIZE_PLACE
# 18 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_POKELOT_PRIZE_ITEM
# 19 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	special TryPutLotteryWinnerReportOnAir
# 20 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	setvar VAR_POKELOT_PRIZE_ITEM, ITEM_NONE
# 21 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	setvar VAR_POKELOT_PRIZE_PLACE, 0
	release_end

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_5:
# 25 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow, MSGBOX_DEFAULT
	release_end

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_8:
# 14 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_NoRoomForThis, MSGBOX_DEFAULT
	release_end

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_11:
# 30 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain, MSGBOX_DEFAULT
	release_end

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_14:
# 51 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_13

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_19:
# 55 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_17

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_20:
# 56 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_17

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_23:
# 60 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_21

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_24:
# 61 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_21

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_25:
# 62 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_21

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_26:
# 63 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_21

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk_28:
# 66 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_POKELOT_PRIZE_PLACE, VAR_0x8004
# 67 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	copyvar VAR_POKELOT_PRIZE_ITEM, VAR_0x8005
# 68 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_NoRoomForThis, MSGBOX_DEFAULT
	release_end


LilycoveCity_DepartmentStore_1F_EventScript_PokefanF::
# 78 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_1F_EventScript_LittleGirl::
# 83 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_1F_EventScript_PokefanM::
# 88 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_1F_EventScript_Azumarill::
# 93 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	lock_faceplayer
# 94 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitse
# 95 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 96 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_Azumarill, MSGBOX_DEFAULT
# 97 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	waitmoncry
	release_end


LilycoveCity_DepartmentStore_1F_EventScript_FloorNamesSign::
# 102 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign, MSGBOX_SIGN
	end


LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore::
# 106 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Welcome to LILYCOVE DEPARTMENT STORE.$"

LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings::
# 110 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Whenever I come to the DEPARTMENT\n"
	.string "STORE, I always end up buying all sorts\l"
	.string "of things because it's so fun.$"

LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture::
# 116 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Today, my mom is going to buy me some\n"
	.string "nice furniture.$"

LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill::
# 121 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I'm buying something for my AZUMARILL\n"
	.string "as a reward for winning a CONTEST.$"

LilycoveCity_DepartmentStore_1F_Text_Azumarill::
# 126 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "AZUMARILL: Maririroo!$"

LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign::
# 130 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "1F: SERVICE COUNTER\n"
	.string "LOTTERY CORNER\p"
	.string "2F: TRAINER'S ZONE\p"
	.string "3F: BATTLE COLLECTION\p"
	.string "4F: TM CORNER\p"
	.string "5F: POKé DOLL FLOOR\p"
	.string "ROOFTOP: ROOFTOP PLAZA$"

LilycoveCity_DepartmentStore_1F_Text_WirelessCommIsFun::
# 145 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "Wireless Communication is a\n"
	.string "lot of fun, isn't it?\p"
	.string "I think it lets you do things that\n"
	.string "weren't possible before.\p"
	.string "For instance, you can now trade\n"
	.string "with people you couldn't before.\p"
	.string "I think it's going to be exciting!$"

LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm::
# 158 "data/maps/LilycoveCity_DepartmentStore_1F/scripts.pory"
	.string "I want to spread the word about how\n"
	.string "fun Wireless Communication can be.$"
