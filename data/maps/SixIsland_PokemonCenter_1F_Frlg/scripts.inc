SixIsland_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 10 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SixIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SixIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_SIX_ISLAND
# 4 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 0
	goto_if_eq SixIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SixIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

SixIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SIX_ISLAND_POKECENTER_RIVAL
	goto SixIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SixIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 0, SixIsland_PokemonCenter_1F_EventScript_RivalScene
	.2byte 0


SixIsland_PokemonCenter_1F_EventScript_RivalScene::
# 16 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 17 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 18 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_StepFasterDown
# 19 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 20 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 21 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_ExclamationMark
# 22 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 23 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_Delay48
# 24 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 25 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 25
# 26 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, SixIsland_PokemonCenter_1F_EventScript_RivalScene_Movement_0
# 27 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 28 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SixIsland_PokemonCenter_1F_Text_RivalImpossibleToGetAllMonsAroundHere
# 29 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 30 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_PokemonCenter_1F_EventScript_RivalScene_Movement_1
# 31 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_SIX_ISLAND_RIVAL, SixIsland_PokemonCenter_1F_EventScript_RivalScene_Movement_2
# 32 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 33 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	fadedefaultbgm
# 34 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_EXIT
# 35 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 35
# 36 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	removeobject LOCALID_SIX_ISLAND_RIVAL
# 37 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 1
# 38 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FOUR_ISLAND, 1
# 39 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	releaseall
	end


SixIsland_PokemonCenter_1F_EventScript_Nurse::
# 44 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 45 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


SixIsland_PokemonCenter_1F_EventScript_Hiker::
# 50 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SixIsland_PokemonCenter_1F_Text_SomethingHiddenOnThisIsland, MSGBOX_NPC
	end


SixIsland_PokemonCenter_1F_EventScript_OldMan::
# 55 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox SixIsland_PokemonCenter_1F_Text_SomeMonsEvolveByTradingWithHeldItem, MSGBOX_NPC
	end


# 26 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_RivalScene_Movement_0:
# 26 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 26 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 26 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 26 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
	step_end

# 30 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_RivalScene_Movement_1:
# 30 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 30 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_faster_right
	step_end

# 31 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_RivalScene_Movement_2:
# 31 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 31 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_4
# 31 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
	step_end

SixIsland_PokemonCenter_1F_Text_SomethingHiddenOnThisIsland::
# 59 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "For ten years, I've searched for\n"
	.string "RUINS.\p"
	.string "No, make that twenty years.\p"
	.string "I get this feeling that there's\n"
	.string "something hidden on this island.$"

SixIsland_PokemonCenter_1F_Text_SomeMonsEvolveByTradingWithHeldItem::
# 69 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You know of POKéMON that evolve\n"
	.string "only upon trading, yes?\p"
	.string "But did you know that there are\n"
	.string "still others?\p"
	.string "Some POKéMON evolve only when\n"
	.string "traded while holding specific items.$"

SixIsland_PokemonCenter_1F_Text_RivalImpossibleToGetAllMonsAroundHere::
# 80 "data/maps/SixIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\n"
	.string "How's your POKéDEX filling up?\p"
	.string "It looks like it's impossible to get\n"
	.string "all the POKéMON by hanging around\l"
	.string "just these parts.\p"
	.string "Maybe there are POKéMON we don't\n"
	.string "know about somewhere far away…\p"
	.string "… … …  … … …  … … …\p"
	.string "Well, if I can't do it, there's no\n"
	.string "way for you to get it done.\p"
	.string "I'm not going to get all desperate\n"
	.string "over this.\p"
	.string "I'll keep collecting POKéMON at my\n"
	.string "own pace while I train them.\p"
	.string "That's what I'll do.\n"
	.string "So there's no point staying here.\l"
	.string "I may as well leave for home.\p"
	.string "That's that, then!\n"
	.string "Smell ya later!$"
