BattleFrontier_Lounge6_MapScripts::
	.byte 0


BattleFrontier_Lounge6_EventScript_Trader::
# 4 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	lock_faceplayer
# 5 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_TRADE_DONE, BattleFrontier_Lounge6_EventScript_Trader_2
# 9 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	ingame_trade INGAME_TRADE_MEOWTH, BattleFrontier_Lounge6_Text_WouldYouLikeToTrade, BattleFrontier_Lounge6_EventScript_DeclineTrade, BattleFrontier_Lounge6_EventScript_NotRequestedMon, BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt
# 10 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setflag FLAG_BATTLE_FRONTIER_TRADE_DONE
	release_end

BattleFrontier_Lounge6_EventScript_Trader_2:
# 6 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge6_EventScript_DeclineTrade::
# 15 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_WellThatsFineToo, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge6_EventScript_NotRequestedMon::
# 20 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 21 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge6_Text_WouldYouLikeToTrade::
# 25 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "My POKéMON is a {STR_VAR_2}.\n"
	.string "Do you know it?\l"
	.string "It's quite cute and rather nice.\p"
	.string "This little one, I could trade with\n"
	.string "pride!\p"
	.string "Would you like to trade me a {STR_VAR_1}\n"
	.string "for my {STR_VAR_2}?$"

BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt::
# 37 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, it's adorable!\n"
	.string "Thank you!\l"
	.string "I promise I'll be good to it!\p"
	.string "Oh! I hope you'll be good to\n"
	.string "my {STR_VAR_2}, too!$"

BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon::
# 46 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, I'm sorry!\n"
	.string "I don't intend to trade for anything\l"
	.string "but a {STR_VAR_1}.$"

BattleFrontier_Lounge6_Text_WellThatsFineToo::
# 52 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, you won't?\n"
	.string "Well, that's fine, too.\l"
	.string "Please come visit us again.$"

BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined::
# 58 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Giggle!\n"
	.string "A SKITTY is so much cuter than I had\l"
	.string "imagined. I'm delighted!$"
