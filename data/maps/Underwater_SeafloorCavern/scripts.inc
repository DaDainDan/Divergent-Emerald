Underwater_SeafloorCavern_MapScripts::
# 2 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Underwater_SeafloorCavern_MapScripts_MAP_SCRIPT_ON_RESUME
# 6 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Underwater_SeafloorCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Underwater_SeafloorCavern_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Underwater_SeafloorCavern_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setdivewarp MAP_SEAFLOOR_CAVERN_ENTRANCE, 10, 17
	end

Underwater_SeafloorCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setflag FLAG_LANDMARK_SEAFLOOR_CAVERN
# 8 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, Underwater_SeafloorCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Underwater_SeafloorCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Underwater_SeafloorCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setflag FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE
	goto Underwater_SeafloorCavern_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Underwater_SeafloorCavern_MapScripts_MAP_SCRIPT_ON_LOAD:
# 14 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, Underwater_SeafloorCavern_MapScripts_MAP_SCRIPT_ON_LOAD_2
Underwater_SeafloorCavern_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

Underwater_SeafloorCavern_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 15 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 5, 3, METATILE_Underwater_RockWall, TRUE
# 16 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 6, 3, METATILE_Underwater_RockWall, TRUE
# 17 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 7, 3, METATILE_Underwater_RockWall, TRUE
# 18 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 8, 3, METATILE_Underwater_RockWall, TRUE
# 19 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 5, 4, METATILE_Underwater_FloorShadow, FALSE
# 20 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 6, 4, METATILE_Underwater_FloorShadow, FALSE
# 21 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 7, 4, METATILE_Underwater_FloorShadow, FALSE
# 22 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 8, 4, METATILE_Underwater_FloorShadow, FALSE
# 23 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 5, 5, METATILE_Underwater_FloorShadow, FALSE
# 24 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 6, 5, METATILE_Underwater_FloorShadow, FALSE
# 25 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 7, 5, METATILE_Underwater_FloorShadow, FALSE
# 26 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	setmetatile 8, 5, METATILE_Underwater_FloorShadow, FALSE
	goto Underwater_SeafloorCavern_MapScripts_MAP_SCRIPT_ON_LOAD_1


Underwater_SeafloorCavern_EventScript_CheckStolenSub::
# 33 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	msgbox Underwater_SeafloorCavern_Text_SubExplorer1, MSGBOX_SIGN
	end


Underwater_SeafloorCavern_Text_SubExplorer1::
# 37 "data/maps/Underwater_SeafloorCavern/scripts.pory"
	.string "“SUBMARINE EXPLORER 1” is painted\n"
	.string "on the hull.\p"
	.string "This is the submarine TEAM AQUA\n"
	.string "stole in SLATEPORT!\p"
	.string "TEAM AQUA must have gone\n"
	.string "ashore here.$"
