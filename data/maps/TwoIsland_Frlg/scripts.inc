TwoIsland_Frlg_MapScripts::
# 2 "data/maps/TwoIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TwoIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/TwoIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_TWO_ISLAND
# 4 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_VISITED_TWO_ISLAND
# 5 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 8 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, TwoIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 11 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TwoIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 14 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, TwoIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 19 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 1
TwoIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

TwoIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 1
	goto TwoIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

TwoIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 9 "data/maps/TwoIsland_Frlg/scripts.pory"
	call TwoIsland_EventScript_SetShopStateAfterHoennLink
	goto TwoIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

TwoIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/TwoIsland_Frlg/scripts.pory"
	call TwoIsland_EventScript_SetShopStateAfterChampion
	goto TwoIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

TwoIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 15 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 2
# 16 "data/maps/TwoIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_WOMAN
	goto TwoIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


TwoIsland_EventScript_SetShopStateAfterHoennLink::
# 26 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_SetShopStateAfterHoennLink_2
# 30 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_2, TwoIsland_EventScript_SetShopStateAfterHoennLink_3
# 35 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 4
# 36 "data/maps/TwoIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_SUPER_NERD
TwoIsland_EventScript_SetShopStateAfterHoennLink_1:
	return

TwoIsland_EventScript_SetShopStateAfterHoennLink_2:
# 27 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 2
# 28 "data/maps/TwoIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_WOMAN
	goto TwoIsland_EventScript_SetShopStateAfterHoennLink_1

TwoIsland_EventScript_SetShopStateAfterHoennLink_3:
# 31 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 3
# 32 "data/maps/TwoIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_BEAUTY
	goto TwoIsland_EventScript_SetShopStateAfterHoennLink_1


TwoIsland_EventScript_SetShopStateAfterChampion::
# 42 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_RESCUED_LOSTELLE, TwoIsland_EventScript_SetShopStateAfterChampion_2
# 45 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_SetShopStateAfterChampion_3
# 50 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 3
# 51 "data/maps/TwoIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_BEAUTY
TwoIsland_EventScript_SetShopStateAfterChampion_1:
	return

TwoIsland_EventScript_SetShopStateAfterChampion_2:
# 43 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 1
	goto TwoIsland_EventScript_SetShopStateAfterChampion_1

TwoIsland_EventScript_SetShopStateAfterChampion_3:
# 46 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 2
# 47 "data/maps/TwoIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_WOMAN
	goto TwoIsland_EventScript_SetShopStateAfterChampion_1


TwoIsland_EventScript_Clerk::
# 57 "data/maps/TwoIsland_Frlg/scripts.pory"
	lock_faceplayer
# 58 "data/maps/TwoIsland_Frlg/scripts.pory"
	switch VAR_MAP_SCENE_TWO_ISLAND
# 59 "data/maps/TwoIsland_Frlg/scripts.pory"
	case 4, TwoIsland_EventScript_Clerk_3
# 67 "data/maps/TwoIsland_Frlg/scripts.pory"
	case 3, TwoIsland_EventScript_Clerk_4
# 75 "data/maps/TwoIsland_Frlg/scripts.pory"
	case 2, TwoIsland_EventScript_Clerk_5
# 84 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_Clerk_17
TwoIsland_EventScript_Clerk_16:
# 87 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_INTRODUCED
# 88 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_WelcomeToShopMerchandiseLimited
# 89 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 90 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopInitial
TwoIsland_EventScript_Clerk_1:
# 92 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end

TwoIsland_EventScript_Clerk_3:
# 60 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_3, TwoIsland_EventScript_Clerk_8
TwoIsland_EventScript_Clerk_7:
# 63 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_3
# 64 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_BringingItemsFromDistantLands
# 65 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 66 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded3
	goto TwoIsland_EventScript_Clerk_1

TwoIsland_EventScript_Clerk_4:
# 68 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_2, TwoIsland_EventScript_Clerk_11
TwoIsland_EventScript_Clerk_10:
# 71 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_2
# 72 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_HopeYouGiveItYourBest
# 73 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 74 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded2
	goto TwoIsland_EventScript_Clerk_1

TwoIsland_EventScript_Clerk_5:
# 76 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_Clerk_14
TwoIsland_EventScript_Clerk_13:
# 79 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_1
# 80 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_AddedMerchandiseForLostelle
# 81 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 82 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded1
	goto TwoIsland_EventScript_Clerk_1

TwoIsland_EventScript_Clerk_8:
# 61 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopSkipIntro
	goto TwoIsland_EventScript_Clerk_7

TwoIsland_EventScript_Clerk_11:
# 69 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopSkipIntro
	goto TwoIsland_EventScript_Clerk_10

TwoIsland_EventScript_Clerk_14:
# 77 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopSkipIntro
	goto TwoIsland_EventScript_Clerk_13

TwoIsland_EventScript_Clerk_17:
# 85 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopSkipIntro
	goto TwoIsland_EventScript_Clerk_16


TwoIsland_EventScript_ClerkShopSkipIntro::
# 97 "data/maps/TwoIsland_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 98 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 99 "data/maps/TwoIsland_Frlg/scripts.pory"
	switch VAR_MAP_SCENE_TWO_ISLAND
# 100 "data/maps/TwoIsland_Frlg/scripts.pory"
	case 4, TwoIsland_EventScript_ClerkShopSkipIntro_3
# 101 "data/maps/TwoIsland_Frlg/scripts.pory"
	case 3, TwoIsland_EventScript_ClerkShopSkipIntro_4
# 102 "data/maps/TwoIsland_Frlg/scripts.pory"
	case 2, TwoIsland_EventScript_ClerkShopSkipIntro_5
# 103 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopInitial
TwoIsland_EventScript_ClerkShopSkipIntro_1:
# 105 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end

TwoIsland_EventScript_ClerkShopSkipIntro_3:
# 100 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded3
	goto TwoIsland_EventScript_ClerkShopSkipIntro_1

TwoIsland_EventScript_ClerkShopSkipIntro_4:
# 101 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded2
	goto TwoIsland_EventScript_ClerkShopSkipIntro_1

TwoIsland_EventScript_ClerkShopSkipIntro_5:
# 102 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded1
	goto TwoIsland_EventScript_ClerkShopSkipIntro_1


	.align 2
# 109 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Items_ShopInitial:
# 110 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 111 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_NONE

	.align 2
# 114 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Items_ShopExpanded1:
# 115 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 116 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 117 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_SODA_POP
# 118 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_NONE

	.align 2
# 121 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Items_ShopExpanded2:
# 122 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 123 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 124 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_LEMONADE
# 125 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_SODA_POP
# 126 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 127 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_NONE

	.align 2
# 130 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Items_ShopExpanded3:
# 131 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 132 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 133 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 134 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_LEMONADE
# 135 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_SODA_POP
# 136 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 137 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 138 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

TwoIsland_EventScript_Sailor::
# 142 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_FellowMovedFromCeladonCity, MSGBOX_NPC
	end


TwoIsland_EventScript_Woman::
# 147 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_ShopkeepersBrotherWorksGameCorner, MSGBOX_NPC
	end


TwoIsland_EventScript_Beauty::
# 152 "data/maps/TwoIsland_Frlg/scripts.pory"
	lock_faceplayer
# 153 "data/maps/TwoIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 4
# 154 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_BrunoCameToIslandWhileBack
	release_end


TwoIsland_EventScript_SuperNerd::
# 159 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_BuyRareItemsHere, MSGBOX_NPC
	end


TwoIsland_EventScript_Boy::
# 164 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_OldWomanLivesOutOnCape, MSGBOX_NPC
	end


TwoIsland_EventScript_LittleBoy::
# 169 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_HaveYouTriedJumpingGame, MSGBOX_NPC
	end


TwoIsland_EventScript_IslandSign::
# 174 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_IslandSign, MSGBOX_SIGN
	end


TwoIsland_EventScript_JoyfulGameCornerSign::
# 179 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_JoyfulGameCornerSign, MSGBOX_SIGN
	end


TwoIsland_EventScript_FastCurrentSign::
# 184 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_DangerFastCurrent, MSGBOX_SIGN
	end


TwoIsland_Text_IslandSign::
# 188 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "TWO ISLAND\n"
	.string "Boon Island for Two$"

TwoIsland_Text_JoyfulGameCornerSign::
# 193 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Skip & Chomp!\n"
	.string "Joyful GAME CORNER$"

TwoIsland_Text_DangerFastCurrent::
# 198 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "DANGER! FAST CURRENT!\n"
	.string "Fishing and surfing prohibited!$"

TwoIsland_Text_WelcomeToShopMerchandiseLimited::
# 203 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "Hello, welcome to my shop!\p"
	.string "We've only opened up recently.\p"
	.string "Our merchandise is limited, but I\n"
	.string "hope we can serve your needs.$"

TwoIsland_Text_AddedMerchandiseForLostelle::
# 213 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "I can't tell you how grateful I am\n"
	.string "for your rescue of LOSTELLE.\p"
	.string "Thanks to your feat, the people of\n"
	.string "THREE ISLAND have changed their\l"
	.string "attitudes about KANTO people.\p"
	.string "And, I'm from KANTO, you see.\p"
	.string "The people of THREE ISLAND\n"
	.string "helped me add to my merchandise.$"

TwoIsland_Text_HopeYouGiveItYourBest::
# 227 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Hi! I'm giving it my best here.\n"
	.string "I hope you do too, {PLAYER}.$"

TwoIsland_Text_BringingItemsFromDistantLands::
# 232 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Oh, hello, {PLAYER}!\n"
	.string "Welcome!\p"
	.string "I've started bringing in items from\n"
	.string "distant lands.\p"
	.string "I've got some rare items in, too.\n"
	.string "Please have a look!$"

TwoIsland_Text_FellowMovedFromCeladonCity::
# 243 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "That fellow there, he moved here\n"
	.string "from CELADON CITY.\p"
	.string "He started up a shop with his\n"
	.string "younger brother.\p"
	.string "You have to wonder if he knew what\n"
	.string "he was getting into.$"

TwoIsland_Text_ShopkeepersBrotherWorksGameCorner::
# 254 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "The shopkeeper's brother took\n"
	.string "a job at the GAME CORNER.\p"
	.string "He's trying to pull together money\n"
	.string "so they can buy more merchandise.$"

TwoIsland_Text_BrunoCameToIslandWhileBack::
# 262 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Listen, listen.\n"
	.string "Did you know?\p"
	.string "A famous TRAINER came to the\n"
	.string "ISLAND a little while back.\p"
	.string "He's one of the ELITE FOUR.\n"
	.string "His name is BRUNO.\p"
	.string "He went away disappointed when he\n"
	.string "found out that they were all sold\l"
	.string "out of Rage Candybars.$"

TwoIsland_Text_BuyRareItemsHere::
# 277 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "The discerning TRAINER knows to\n"
	.string "buy rare items here!$"

TwoIsland_Text_OldWomanLivesOutOnCape::
# 282 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "There's an old woman who lives in\n"
	.string "a cottage out on the cape.\p"
	.string "She gives the eye to POKéMON.\n"
	.string "It's a bit unnerving.$"

TwoIsland_Text_HaveYouTriedJumpingGame::
# 290 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Boing! Boing!\n"
	.string "Have you tried the jumping game?\p"
	.string "The POKéMON you can enter…\n"
	.string "Boing!\p"
	.string "Some go boing!\p"
	.string "And some go boooooooing!\p"
	.string "Did you know that?\n"
	.string "Boing!$"
