Route124_DivingTreasureHuntersHouse_MapScripts::
# 2 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_DivingTreasureHuntersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route124_DivingTreasureHuntersHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setflag FLAG_LANDMARK_HUNTERS_HOUSE
	end


Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter::
# 9 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	lock_faceplayer
# 10 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto_if_set FLAG_MET_DIVING_TREASURE_HUNTER, Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter_2
# 13 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_Greeting, MSGBOX_DEFAULT
# 14 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	setflag FLAG_MET_DIVING_TREASURE_HUNTER
Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter_1:
# 16 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard
	end

Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter_2:
# 11 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_HaveYouSeenAnyShards, MSGBOX_DEFAULT
	goto Route124_DivingTreasureHuntersHouse_EventScript_TreasureHunter_1


Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard::
	checkitem ITEM_RED_SHARD
# 0 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard_2
	checkitem ITEM_YELLOW_SHARD
# 0 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard_2
	checkitem ITEM_BLUE_SHARD
# 0 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard_2
	checkitem ITEM_GREEN_SHARD
# 0 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard_2
# 25 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_YouHaventGotAnyShards, MSGBOX_DEFAULT
Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard_1:
	release_end

Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard_2:
# 22 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ThatsAShardIllTradeYou, MSGBOX_DEFAULT
# 23 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions
	goto Route124_DivingTreasureHuntersHouse_EventScript_CheckPlayerHasShard_1


Route124_DivingTreasureHuntersHouse_EventScript_GetPlayersShards::
	return


Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions::
# 36 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	message Route124_DivingTreasureHuntersHouse_Text_WhatDoYouWantToTrade
# 37 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	waitmessage
	checkitem ITEM_RED_SHARD
# 0 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_2
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1:
	checkitem ITEM_YELLOW_SHARD
# 0 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_5
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_4:
	checkitem ITEM_BLUE_SHARD
# 0 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_8
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_7:
	checkitem ITEM_GREEN_SHARD
# 0 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_11
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_10:
# 50 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	dynmultipush Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_Text_4, 0
# 51 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 52 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	switch VAR_RESULT
# 53 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case ITEM_RED_SHARD, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_15
# 54 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case ITEM_YELLOW_SHARD, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_16
# 55 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case ITEM_BLUE_SHARD, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_17
# 56 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case ITEM_GREEN_SHARD, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_18
# 57 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case 0, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_19
# 58 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	case MULTI_B_PRESSED, Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_19
Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_13:
# 60 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard
	end

Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_2:
# 39 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	dynmultipush Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_Text_0, ITEM_RED_SHARD
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_1

Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_5:
# 42 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	dynmultipush Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_Text_1, ITEM_YELLOW_SHARD
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_4

Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_8:
# 45 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	dynmultipush Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_Text_2, ITEM_BLUE_SHARD
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_7

Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_11:
# 48 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	dynmultipush Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_Text_3, ITEM_GREEN_SHARD
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_10

Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_15:
# 53 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	settradeitems ITEM_RED_SHARD, ITEM_FIRE_STONE
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_13

Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_16:
# 54 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	settradeitems ITEM_YELLOW_SHARD, ITEM_THUNDER_STONE
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_13

Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_17:
# 55 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	settradeitems ITEM_BLUE_SHARD, ITEM_WATER_STONE
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_13

Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_18:
# 56 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	settradeitems ITEM_GREEN_SHARD, ITEM_LEAF_STONE
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_13

Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_19:
# 58 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_13


Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard::
# 65 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	bufferitemname STR_VAR_1, VAR_EXCHANGE_ITEM
# 66 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	bufferitemname STR_VAR_2, VAR_GIFT_ITEM
# 67 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_YoullTradeShardForStone, MSGBOX_YESNO
# 68 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_2
Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_1:
	checkitemspace VAR_GIFT_ITEM
# 0 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_5
	checkitem VAR_EXCHANGE_ITEM, 2
# 0 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_5
Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_4:
# 83 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_BagFull, MSGBOX_DEFAULT
	release_end

Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_2:
# 69 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_1

Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_5:
# 72 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	removeitem VAR_EXCHANGE_ITEM
# 73 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	giveitem VAR_GIFT_ITEM
# 74 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ItsADeal, MSGBOX_DEFAULT
	checkitem ITEM_RED_SHARD
# 0 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_9
	checkitem ITEM_YELLOW_SHARD
# 0 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_9
	checkitem ITEM_BLUE_SHARD
# 0 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_9
	checkitem ITEM_GREEN_SHARD
# 0 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_9
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_4

Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_9:
# 76 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_TradeSomethingElse, MSGBOX_YESNO
# 77 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_18
Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_17:
# 80 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_4

Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_18:
# 78 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	goto Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions
	goto Route124_DivingTreasureHuntersHouse_EventScript_TryTradeShard_17


Route124_DivingTreasureHuntersHouse_EventScript_DeclineTrade::
# 88 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ComeBackIfYouChangeMind, MSGBOX_DEFAULT
	release_end


Route124_DivingTreasureHuntersHouse_EventScript_ShardTradeBoard::
# 93 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	msgbox Route124_DivingTreasureHuntersHouse_Text_ShardTradeBoard, MSGBOX_SIGN
	end


Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_Text_0:
# 39 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "RED SHARD$"

Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_Text_1:
# 42 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "YELLOW SHARD$"

Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_Text_2:
# 45 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "BLUE SHARD$"

Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_Text_3:
# 48 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "GREEN SHARD$"

Route124_DivingTreasureHuntersHouse_EventScript_ShowTradeOptions_Text_4:
# 50 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "EXIT$"

Route124_DivingTreasureHuntersHouse_Text_Greeting::
# 97 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "I'm the DIVING TREASURE HUNTER!\p"
	.string "I'm the awesome dude who makes\n"
	.string "deep-sea dives to gather treasures\l"
	.string "resting at the bottom.$"

Route124_DivingTreasureHuntersHouse_Text_HaveYouSeenAnyShards::
# 105 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Tell me, have you seen any SHARDS of\n"
	.string "tools made in ancient times?$"

Route124_DivingTreasureHuntersHouse_Text_YouHaventGotAnyShards::
# 110 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "You haven't got any treasures\n"
	.string "for me…\p"
	.string "If you see any SHARDS, like the RED\n"
	.string "SHARD, you've got to trade it with me!$"

Route124_DivingTreasureHuntersHouse_Text_ThatsAShardIllTradeYou::
# 118 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Oh, hey! That…\n"
	.string "That's a SHARD! I'm looking for those!\p"
	.string "Oh, man, you've got to trade that\n"
	.string "with me! I'll give you something good!$"

Route124_DivingTreasureHuntersHouse_Text_WhatDoYouWantToTrade::
# 126 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "What do you want to trade?$"

Route124_DivingTreasureHuntersHouse_Text_YoullTradeShardForStone::
# 130 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "You'll trade your {STR_VAR_1} for\n"
	.string "my {STR_VAR_2}, then?$"

Route124_DivingTreasureHuntersHouse_Text_ItsADeal::
# 135 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "It's a done deal!\n"
	.string "Use that wisely!$"

Route124_DivingTreasureHuntersHouse_Text_TradeSomethingElse::
# 140 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Do you want to trade something else?$"

Route124_DivingTreasureHuntersHouse_Text_BagFull::
# 144 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "Whoops, your BAG's full.\n"
	.string "Get rid of some items, friend!$"

Route124_DivingTreasureHuntersHouse_Text_ComeBackIfYouChangeMind::
# 149 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "No? That's a downer.\n"
	.string "Well, if you change your mind, come back.$"

Route124_DivingTreasureHuntersHouse_Text_ShardTradeBoard::
# 154 "data/maps/Route124_DivingTreasureHuntersHouse/scripts.pory"
	.string "{CLEAR_TO 10}Wanted item{CLEAR_TO 124}Trade item\n"
	.string "{CLEAR_TO 15}RED SHARD{CLEAR_TO 89}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 123}FIRE STONE{CLEAR_TO 200}\p"
	.string "{CLEAR_TO 10}Wanted item{CLEAR_TO 124}Trade item\n"
	.string "{CLEAR_TO 6}YELLOW SHARD{CLEAR_TO 89}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 115}THUNDERSTONE{CLEAR_TO 200}\p"
	.string "{CLEAR_TO 10}Wanted item{CLEAR_TO 124}Trade item\n"
	.string "{CLEAR_TO 12}BLUE SHARD{CLEAR_TO 89}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 121}WATER STONE{CLEAR_TO 200}\p"
	.string "{CLEAR_TO 10}Wanted item{CLEAR_TO 124}Trade item\n"
	.string "{CLEAR_TO 8}GREEN SHARD{CLEAR_TO 89}{LEFT_ARROW}{RIGHT_ARROW}{CLEAR_TO 123}LEAF STONE$"
