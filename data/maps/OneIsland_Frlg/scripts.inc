OneIsland_Frlg_MapScripts::
# 2 "data/maps/OneIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/OneIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OneIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/OneIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ONE_ISLAND
	end

OneIsland_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/OneIsland_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 2, OneIsland_EventScript_EnterOneIslandFirstTime
	.2byte 0


OneIsland_EventScript_EnterOneIslandFirstTime::
# 12 "data/maps/OneIsland_Frlg/scripts.pory"
	lockall
# 13 "data/maps/OneIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 14 "data/maps/OneIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 15 "data/maps/OneIsland_Frlg/scripts.pory"
	waitmovement 0
# 16 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_BillLetsGoSeeCelio
# 17 "data/maps/OneIsland_Frlg/scripts.pory"
	closemessage
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_BILL, OneIsland_EventScript_EnterOneIslandFirstTime_Movement_0
# 19 "data/maps/OneIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_EventScript_EnterOneIslandFirstTime_Movement_1
# 20 "data/maps/OneIsland_Frlg/scripts.pory"
	waitmovement 0
# 21 "data/maps/OneIsland_Frlg/scripts.pory"
	opendoor 14, 5
# 22 "data/maps/OneIsland_Frlg/scripts.pory"
	waitdooranim
# 23 "data/maps/OneIsland_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_BILL, OneIsland_EventScript_EnterOneIslandFirstTime_Movement_2
# 24 "data/maps/OneIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_EventScript_EnterOneIslandFirstTime_Movement_3
# 25 "data/maps/OneIsland_Frlg/scripts.pory"
	waitmovement 0
# 26 "data/maps/OneIsland_Frlg/scripts.pory"
	closedoor 14, 5
# 27 "data/maps/OneIsland_Frlg/scripts.pory"
	waitdooranim
# 28 "data/maps/OneIsland_Frlg/scripts.pory"
	removeobject LOCALID_ONE_ISLAND_BILL
# 29 "data/maps/OneIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 3
# 30 "data/maps/OneIsland_Frlg/scripts.pory"
	warp MAP_ONE_ISLAND_POKEMON_CENTER_1F, 9, 9
# 31 "data/maps/OneIsland_Frlg/scripts.pory"
	waitstate
# 32 "data/maps/OneIsland_Frlg/scripts.pory"
	releaseall
	end


OneIsland_EventScript_OldMan::
# 37 "data/maps/OneIsland_Frlg/scripts.pory"
	lock_faceplayer
# 38 "data/maps/OneIsland_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, OneIsland_EventScript_OldMan_2
# 41 "data/maps/OneIsland_Frlg/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_EventScript_OldMan_3
# 45 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_LuckyToHaveCelioHere
OneIsland_EventScript_OldMan_1:
	release_end

OneIsland_EventScript_OldMan_2:
# 39 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_HavePCLinkageWithHoenn
	goto OneIsland_EventScript_OldMan_1

OneIsland_EventScript_OldMan_3:
# 42 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_HavePCLinkageWithKanto
	goto OneIsland_EventScript_OldMan_1


OneIsland_EventScript_BaldingMan::
# 51 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_IsntWarmClimateHereGreat, MSGBOX_NPC
	end


OneIsland_EventScript_IslandSign::
# 56 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_IslandSign, MSGBOX_SIGN
	end


OneIsland_EventScript_PokemonNetCenterSign::
# 61 "data/maps/OneIsland_Frlg/scripts.pory"
	msgbox OneIsland_Text_PokemonNetCenterSign, MSGBOX_SIGN
	end


# 18 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_EnterOneIslandFirstTime_Movement_0:
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_right
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_right
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 18 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
	step_end

# 19 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_EnterOneIslandFirstTime_Movement_1:
# 19 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 19 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 19 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 19 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 19 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 19 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_right
# 19 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_right
# 19 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 19 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 19 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 19 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 19 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
	step_end

# 23 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_EnterOneIslandFirstTime_Movement_2:
# 23 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 23 "data/maps/OneIsland_Frlg/scripts.pory"
	set_invisible
	step_end

# 24 "data/maps/OneIsland_Frlg/scripts.pory"
OneIsland_EventScript_EnterOneIslandFirstTime_Movement_3:
# 24 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 24 "data/maps/OneIsland_Frlg/scripts.pory"
	walk_up
# 24 "data/maps/OneIsland_Frlg/scripts.pory"
	set_invisible
	step_end

OneIsland_Text_BillLetsGoSeeCelio::
# 65 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "BILL: Here we are!\n"
	.string "This is ONE ISLAND.\p"
	.string "There are several islands around\n"
	.string "here, and this is one of them.\p"
	.string "My friend CELIO sent the boat to\n"
	.string "fetch me here.\p"
	.string "He's in charge of the island's PC\n"
	.string "network by his lonesome.\p"
	.string "…Why am I telling you this now?\n"
	.string "Let's just go see CELIO!$"

Text_WhereDoYouWantToSail::
# 82 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Ahoy, there!\n"
	.string "Where do you want to sail?$"

OneIsland_Text_LuckyToHaveCelioHere::
# 87 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Here we are on an island smack in\n"
	.string "the middle of nowhere.\p"
	.string "We're lucky to have an upstanding\n"
	.string "young man like CELIO here.\p"
	.string "My granddaughter was in a tizzy\n"
	.string "over CELIO's friend.\p"
	.string "Something about a famous\n"
	.string "POKéMANIAC?\p"
	.string "I'm not sure what that means, but\n"
	.string "CELIO is quite the man!$"

OneIsland_Text_HavePCLinkageWithKanto::
# 104 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "My granddaughter was in a tizzy\n"
	.string "over a new breakthrough.\p"
	.string "She said we now have PC linkage\n"
	.string "with people in KANTO.\p"
	.string "I'm not sure what that means, but\n"
	.string "CELIO is quite the man!$"

OneIsland_Text_HavePCLinkageWithHoenn::
# 115 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "My granddaughter was in a tizzy\n"
	.string "over a new breakthrough.\p"
	.string "She said we finally have PC linkage\n"
	.string "with people in HOENN.\p"
	.string "I'm not sure what that means, but\n"
	.string "CELIO is quite the man.\p"
	.string "He would make a fine husband for\n"
	.string "my granddaughter!$"

OneIsland_Text_IslandSign::
# 129 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "ONE ISLAND\n"
	.string "Friends Gather at Knot Island$"

OneIsland_Text_PokemonNetCenterSign::
# 134 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Expanding the POKéMON World!\n"
	.string "POKéMON NET CENTER$"

OneIsland_Text_ReturnToCinnabar::
# 140 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "グレンタウンに　もどりますか？$"

OneIsland_Text_IsntWarmClimateHereGreat::
# 144 "data/maps/OneIsland_Frlg/scripts.pory"
	.string "Hi, sight-seeing, are you?\n"
	.string "Isn't the warm climate here great?$"
