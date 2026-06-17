CeladonCity_Restaurant_Frlg_MapScripts::
	.byte 0


CeladonCity_Restaurant_EventScript_Chef::
# 4 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_TakingBreakRightNow, MSGBOX_NPC
	end


CeladonCity_Restaurant_EventScript_Woman::
# 9 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_OftenGoToDrugstore, MSGBOX_NPC
	end


CeladonCity_Restaurant_EventScript_CoinCaseMan::
# 14 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	lock_faceplayer
# 15 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_COIN_CASE, CeladonCity_Restaurant_EventScript_CoinCaseMan_2
# 19 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_TakeThisImBusted
	checkitemspace ITEM_COIN_CASE
# 0 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_Restaurant_EventScript_CoinCaseMan_5
# 24 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	giveitem_msg CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan, ITEM_COIN_CASE
# 25 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	setflag FLAG_GOT_COIN_CASE
	release_end

CeladonCity_Restaurant_EventScript_CoinCaseMan_2:
# 16 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_ThoughtIdWinItBack
	release_end

CeladonCity_Restaurant_EventScript_CoinCaseMan_5:
# 21 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_MakeRoomForThis
	release_end


CeladonCity_Restaurant_EventScript_WorkerM::
# 30 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner, MSGBOX_NPC
	end


CeladonCity_Restaurant_EventScript_FatMan::
# 35 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	msgbox CeladonCity_Restaurant_Text_ManLostItAllAtSlots, MSGBOX_NPC
	end


CeladonCity_Restaurant_Text_TakingBreakRightNow::
# 39 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Hi!\p"
	.string "Sorry, but we're taking a break\n"
	.string "right now.$"

CeladonCity_Restaurant_Text_OftenGoToDrugstore::
# 46 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "My POKéMON are weak, so I often\n"
	.string "have to go to the DRUGSTORE.$"

CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner::
# 51 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Psst! There's a basement under the\n"
	.string "GAME CORNER, I hear.$"

CeladonCity_Restaurant_Text_ManLostItAllAtSlots::
# 56 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Munch…\p"
	.string "The man at that table lost it all\n"
	.string "at the slots.$"

CeladonCity_Restaurant_Text_TakeThisImBusted::
# 63 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Go ahead! Laugh!\n"
	.string "I'm flat-out busted!\p"
	.string "No more slots for me!\n"
	.string "I'm going straight!\p"
	.string "Here!\n"
	.string "I won't be needing this anymore!$"

CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan::
# 74 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "{PLAYER} received a COIN CASE\n"
	.string "from the man.$"

CeladonCity_Restaurant_Text_MakeRoomForThis::
# 79 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "Make room for this!$"

CeladonCity_Restaurant_Text_ThoughtIdWinItBack::
# 83 "data/maps/CeladonCity_Restaurant_Frlg/scripts.pory"
	.string "I always thought I was going to\n"
	.string "win it back…$"
