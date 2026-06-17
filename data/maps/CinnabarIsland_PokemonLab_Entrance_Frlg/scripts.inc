CinnabarIsland_PokemonLab_Entrance_Frlg_MapScripts::
# 2 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonLab_Entrance_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CinnabarIsland_PokemonLab_Entrance_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1
	goto_if_eq CinnabarIsland_PokemonLab_Entrance_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
CinnabarIsland_PokemonLab_Entrance_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

CinnabarIsland_PokemonLab_Entrance_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 2
	goto CinnabarIsland_PokemonLab_Entrance_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


CinnabarIsland_PokemonLab_Entrance_EventScript_Scientist::
# 11 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_StudyMonsExtensively, MSGBOX_NPC
	end


CinnabarIsland_PokemonLab_Entrance_EventScript_DrFujiPhoto::
# 16 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_PhotoOfLabFounderDrFuji, MSGBOX_SIGN
	end


CinnabarIsland_PokemonLab_Entrance_EventScript_MeetingRoomSign::
# 21 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_MeetingRoomSign, MSGBOX_SIGN
	end


CinnabarIsland_PokemonLab_Entrance_EventScript_RAndDRoomSign::
# 26 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_RAndDRoomSign, MSGBOX_SIGN
	end


CinnabarIsland_PokemonLab_Entrance_EventScript_TestingRoomSign::
# 31 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_TestingRoomSign, MSGBOX_SIGN
	end


CinnabarIsland_Gym_Text_PhotoOfBlaineAndFuji::
# 35 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "It's a photo of BLAINE and\n"
	.string "MR. FUJI.\p"
	.string "They're standing shoulder to\n"
	.string "shoulder with big grins.$"

CinnabarIsland_PokemonLab_Entrance_Text_StudyMonsExtensively::
# 43 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "We study POKéMON extensively\n"
	.string "every day.\p"
	.string "People often bring us rare POKéMON\n"
	.string "for examination.$"

CinnabarIsland_PokemonLab_Entrance_Text_PhotoOfLabFounderDrFuji::
# 51 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "A photo of the LAB's founder…\n"
	.string "DR. FUJI?!$"

CinnabarIsland_PokemonLab_Entrance_Text_MeetingRoomSign::
# 56 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "POKéMON LAB\n"
	.string "Meeting Room$"

CinnabarIsland_PokemonLab_Entrance_Text_RAndDRoomSign::
# 61 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "POKéMON LAB\n"
	.string "R & D Room$"

CinnabarIsland_PokemonLab_Entrance_Text_TestingRoomSign::
# 66 "data/maps/CinnabarIsland_PokemonLab_Entrance_Frlg/scripts.pory"
	.string "POKéMON LAB\n"
	.string "Testing Room$"
