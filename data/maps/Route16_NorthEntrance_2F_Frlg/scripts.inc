Route16_NorthEntrance_2F_Frlg_MapScripts::
	.byte 0


Route16_NorthEntrance_2F_EventScript_LittleBoy::
# 6 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_OnBikeRideWithGirlfriend, MSGBOX_NPC
	end


Route16_NorthEntrance_2F_EventScript_LittleGirl::
# 11 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_RidingTogetherOnNewBikes, MSGBOX_NPC
	end


Route16_NorthEntrance_2F_EventScript_LeftBinoculars::
# 16 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_ItsCeladonDeptStore, MSGBOX_SIGN
	end


Route16_NorthEntrance_2F_EventScript_RightBinoculars::
# 21 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_LongPathOverWater, MSGBOX_SIGN
	end


Route16_NorthEntrance_2F_EventScript_Aide::
# 26 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	lock_faceplayer
# 27 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	call Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo
# 28 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_AMULET_COIN_FROM_OAKS_AIDE, Route16_NorthEntrance_2F_EventScript_Aide_2
# 32 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_GiveAmuletCoinIfCaught40, MSGBOX_YESNO
# 33 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route16_NorthEntrance_2F_EventScript_Aide_5
Route16_NorthEntrance_2F_EventScript_Aide_4:
# 36 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 37 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 38 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 39 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	call Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo
# 40 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	compare VAR_0x8006, 40
	goto_if_lt Route16_NorthEntrance_2F_EventScript_Aide_8
Route16_NorthEntrance_2F_EventScript_Aide_7:
# 43 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_GreatHereYouGo
	checkitemspace ITEM_AMULET_COIN
# 0 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route16_NorthEntrance_2F_EventScript_Aide_11
Route16_NorthEntrance_2F_EventScript_Aide_10:
# 47 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	giveitem_msg Route16_NorthEntrance_2F_Text_ReceivedAmuletCoinFromAide, ITEM_AMULET_COIN
# 48 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_GOT_AMULET_COIN_FROM_OAKS_AIDE
# 49 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_ExplainAmuletCoin
	release_end

Route16_NorthEntrance_2F_EventScript_Aide_2:
# 29 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route16_NorthEntrance_2F_Text_ExplainAmuletCoin
	release_end

Route16_NorthEntrance_2F_EventScript_Aide_5:
# 34 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_DeclineCheckMons
	goto Route16_NorthEntrance_2F_EventScript_Aide_4

Route16_NorthEntrance_2F_EventScript_Aide_8:
# 41 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_HaventCaughtEnough
	goto Route16_NorthEntrance_2F_EventScript_Aide_7

Route16_NorthEntrance_2F_EventScript_Aide_11:
# 45 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_NoRoomForItem
	goto Route16_NorthEntrance_2F_EventScript_Aide_10


Route16_NorthEntrance_2F_EventScript_GetAideRequestInfo::
# 54 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, 40
# 55 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_AMULET_COIN
	return


Route16_NorthEntrance_2F_Text_OnBikeRideWithGirlfriend::
# 59 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "I'm on a relaxing ride on my new\n"
	.string "bike with my girlfriend.$"

Route16_NorthEntrance_2F_Text_RidingTogetherOnNewBikes::
# 64 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "We're going riding together on our\n"
	.string "new bikes.$"

Route16_NorthEntrance_2F_Text_ItsCeladonDeptStore::
# 69 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "It's the CELADON DEPT. STORE!$"

Route16_NorthEntrance_2F_Text_LongPathOverWater::
# 76 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "There's a long path over water far\n"
	.string "away.$"

Route16_NorthEntrance_2F_Text_GiveAmuletCoinIfCaught40::
# 84 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Hi! Remember me?\n"
	.string "I'm one of PROF. OAK's AIDES.\p"
	.string "If your POKéDEX has complete data\n"
	.string "on 40 species, I'm supposed to\l"
	.string "give you a reward.\p"
	.string "PROF. OAK entrusted me with an\n"
	.string "AMULET COIN for you.\p"
	.string "So, {PLAYER}, let me ask you.\p"
	.string "Have you gathered data on at least\n"
	.string "40 kinds of POKéMON?$"

Route16_NorthEntrance_2F_Text_GreatHereYouGo::
# 101 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Great! You have caught or owned\n"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
	.string "Congratulations!\n"
	.string "Here you go!$"

Route16_NorthEntrance_2F_Text_ReceivedAmuletCoinFromAide::
# 109 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "{PLAYER} received the AMULET COIN\n"
	.string "from the AIDE.$"

Route16_NorthEntrance_2F_Text_ExplainAmuletCoin::
# 114 "data/maps/Route16_NorthEntrance_2F_Frlg/scripts.pory"
	.string "An AMULET COIN is an item to be\n"
	.string "held by a POKéMON.\p"
	.string "If the POKéMON appears in a winning\n"
	.string "battle, you will earn more money.$"
