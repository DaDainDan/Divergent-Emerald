ThreeIsland_BerryForest_Frlg_MapScripts::
# 2 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_BerryForest_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ThreeIsland_BerryForest_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND_BERRY_FOREST
# 4 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setescapewarp MAP_THREE_ISLAND_BOND_BRIDGE, 12, 6
	end


ThreeIsland_BerryForest_EventScript_Lostelle::
# 10 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	lock_faceplayer
# 11 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_HelpScaryPokemon
# 12 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	playse SE_PIN
# 13 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	applymovement LOCALID_BERRY_FOREST_LOSTELLE, Common_Movement_ExclamationMark
# 14 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitmovement 0
# 15 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	applymovement LOCALID_BERRY_FOREST_LOSTELLE, ThreeIsland_BerryForest_Movement_LostelleLookAround
# 16 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitmovement 0
# 17 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_HereItComesAgain
# 18 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitse
# 19 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
# 20 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitmoncry
# 21 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setwildbattle SPECIES_HYPNO, 30
# 22 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	dowildbattle
# 23 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	applymovement LOCALID_BERRY_FOREST_LOSTELLE, Common_Movement_FacePlayer
# 24 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitmovement 0
# 25 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_ThankYouHaveThis
	giveitem ITEM_IAPAPA_BERRY
# 0 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ThreeIsland_BerryForest_EventScript_Lostelle_2
ThreeIsland_BerryForest_EventScript_Lostelle_1:
# 29 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	special GetPlayerBigGuyGirlString
# 30 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_LetsGoHome
# 31 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	closemessage
# 32 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setflag FLAG_RESCUED_LOSTELLE
# 33 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setflag FLAG_HIDE_LOSTELLE_IN_BERRY_FOREST
# 34 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2
# 35 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
# 36 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	warp MAP_TWO_ISLAND_JOYFUL_GAME_CORNER, 6, 6
# 37 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitstate
	release_end

ThreeIsland_BerryForest_EventScript_Lostelle_2:
# 27 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_BerryPouchIsFull
	goto ThreeIsland_BerryForest_EventScript_Lostelle_1


# 41 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Movement_LostelleLookAround:
# 43 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	step_faster_left
# 44 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	delay_16
# 45 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	step_faster_right
# 46 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	delay_8
# 47 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	step_faster_left
	step_end

ThreeIsland_BerryForest_EventScript_WelcomeSign::
# 51 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_WelcomeToBerryForest, MSGBOX_SIGN
	end


ThreeIsland_BerryForest_EventScript_BewareSign::
# 56 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_BewareWildBerryLovingMons, MSGBOX_SIGN
	end


ThreeIsland_BerryForest_Text_HelpScaryPokemon::
# 60 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "LOSTELLE: Whimper… Sniff…\n"
	.string "Oh! Please, help!\p"
	.string "A scary POKéMON appeared there\n"
	.string "a little while ago.\p"
	.string "It kept scaring.\n"
	.string "It made LOSTELLE scared.\p"
	.string "I'm too scared to move!\n"
	.string "But I want to go home…$"

ThreeIsland_BerryForest_Text_HereItComesAgain::
# 74 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Oh! Here it comes again!\n"
	.string "No! Go away! It's scaring me!\p"
	.string "Waaaaaaah!\n"
	.string "I want my daddy!$"

ThreeIsland_BerryForest_Text_ThankYouHaveThis::
# 82 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Ohh! That was so scary!\n"
	.string "Thank you!\p"
	.string "LOSTELLE came to pick some\n"
	.string "BERRIES.\p"
	.string "You can have this!$"

ThreeIsland_BerryForest_Text_LetsGoHome::
# 92 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "What's your name?\p"
	.string "LOSTELLE's scared, so can I go\n"
	.string "with you to my daddy's house?\p"
	.string "Okay!\n"
	.string "Let's go home!$"

ThreeIsland_BerryForest_Text_BerryPouchIsFull::
# 102 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Your BERRY POUCH is full.\n"
	.string "I guess you don't want this.$"

ThreeIsland_BerryForest_Text_WelcomeToBerryForest::
# 107 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Welcome to the BERRY FOREST\p"
	.string "Be friendly and share BERRIES with\n"
	.string "others and POKéMON.$"

ThreeIsland_BerryForest_Text_BewareWildBerryLovingMons::
# 114 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Beware of wild, BERRY-loving\n"
	.string "POKéMON!$"
