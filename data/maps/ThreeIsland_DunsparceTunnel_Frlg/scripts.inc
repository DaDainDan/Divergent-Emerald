ThreeIsland_DunsparceTunnel_Frlg_MapScripts::
# 2 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_DunsparceTunnel_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ThreeIsland_DunsparceTunnel_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND_DUNSPARCE_TUNNEL
# 4 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 5 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 6 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	compare VAR_0x8008, TRUE
	goto_if_eq ThreeIsland_DunsparceTunnel_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 9 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	setobjectxyperm LOCALID_PROSPECTOR, 6, 3
# 10 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_PROSPECTOR, MOVEMENT_TYPE_FACE_RIGHT
ThreeIsland_DunsparceTunnel_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

ThreeIsland_DunsparceTunnel_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	setmaplayoutindex LAYOUT_THREE_ISLAND_DUNSPARCE_TUNNEL_DUG_OUT
	goto ThreeIsland_DunsparceTunnel_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


ThreeIsland_DunsparceTunnel_EventScript_Prospector::
# 17 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	lock_faceplayer
# 18 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL, ThreeIsland_DunsparceTunnel_EventScript_Prospector_2
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 0 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ThreeIsland_DunsparceTunnel_EventScript_Prospector_3
# 31 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_ProspectingForGold
# 32 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
ThreeIsland_DunsparceTunnel_EventScript_Prospector_1:
	release_end

ThreeIsland_DunsparceTunnel_EventScript_Prospector_2:
# 19 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_ThatsANugget
	goto ThreeIsland_DunsparceTunnel_EventScript_Prospector_1

ThreeIsland_DunsparceTunnel_EventScript_Prospector_3:
# 22 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_StruckGoldThisIsForYou
	giveitem ITEM_NUGGET
# 0 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ThreeIsland_DunsparceTunnel_EventScript_Prospector_8
# 27 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	setflag FLAG_GOT_NUGGET_FROM_DUNSPARCE_TUNNEL
# 28 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_ThatsANugget
	goto ThreeIsland_DunsparceTunnel_EventScript_Prospector_1

ThreeIsland_DunsparceTunnel_EventScript_Prospector_8:
# 24 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	msgbox ThreeIsland_DunsparceTunnel_Text_WhoopsBagCrammedFull
	release_end


ThreeIsland_DunsparceTunnel_Text_ProspectingForGold::
# 37 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "Hey, there!\n"
	.string "How's it going?\p"
	.string "What am I doing here, you ask?\n"
	.string "Why, I'm prospecting for gold!\p"
	.string "When I strike it rich, I'm buying\n"
	.string "a house in KANTO.$"

ThreeIsland_DunsparceTunnel_Text_StruckGoldThisIsForYou::
# 48 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "Hey, there! How's it going?\n"
	.string "Did you hear? I've struck gold!\p"
	.string "You remembered that I was\n"
	.string "prospecting, didn't you?\p"
	.string "You can't begin to imagine just\n"
	.string "how happy I am.\p"
	.string "So, I'll show you!\n"
	.string "This is for you!$"

ThreeIsland_DunsparceTunnel_Text_ThatsANugget::
# 62 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "That's a NUGGET!\p"
	.string "I can't give you any nuggets of\n"
	.string "wisdom, so that'll have to do!$"

ThreeIsland_DunsparceTunnel_Text_WhoopsBagCrammedFull::
# 69 "data/maps/ThreeIsland_DunsparceTunnel_Frlg/scripts.pory"
	.string "Whoops, your BAG is crammed full!\n"
	.string "I'll give this to you later.$"
