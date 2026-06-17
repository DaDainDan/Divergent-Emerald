FiveIsland_Frlg_MapScripts::
# 2 "data/maps/FiveIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FiveIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FiveIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND
	end


FiveIsland_EventScript_IslandSign::
# 9 "data/maps/FiveIsland_Frlg/scripts.pory"
	msgbox FiveIsland_Text_IslandSign, MSGBOX_SIGN
	end


FiveIsland_EventScript_BugCatcher::
# 14 "data/maps/FiveIsland_Frlg/scripts.pory"
	msgbox FiveIsland_Text_WeirdBuildingInMeadow, MSGBOX_NPC
	end


FiveIsland_EventScript_Fisher::
# 19 "data/maps/FiveIsland_Frlg/scripts.pory"
	msgbox FiveIsland_Text_BeenGettingBusierAroundHere, MSGBOX_NPC
	end


FiveIsland_Text_IslandSign::
# 23 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "FIVE ISLAND\n"
	.string "Chrono Island: Where Time Goes$"

FiveIsland_Text_WeirdBuildingInMeadow::
# 28 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "Oh, this stinks. I wanted to play in\n"
	.string "the MEADOW.\p"
	.string "But they put up a weird building\n"
	.string "on it, so I can't play there.$"

FiveIsland_Text_BeenGettingBusierAroundHere::
# 36 "data/maps/FiveIsland_Frlg/scripts.pory"
	.string "It's been getting busier around\n"
	.string "these parts lately.\p"
	.string "I haven't been catching many good\n"
	.string "fish lately, either.$"
