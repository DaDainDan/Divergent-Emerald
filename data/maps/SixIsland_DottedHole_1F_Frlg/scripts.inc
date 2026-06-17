SixIsland_DottedHole_1F_Frlg_MapScripts::
# 2 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_DottedHole_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SixIsland_DottedHole_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_DOTTED_HOLE_1F
	end


SixIsland_DottedHole_B1F_EventScript_BrailleUp::
# 9 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	lockall
# 10 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	braillemsgbox Braille_Text_Up
# 11 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	releaseall
	end


SixIsland_DottedHole_B4F_EventScript_BrailleDown::
# 16 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	lockall
# 17 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	braillemsgbox Braille_Text_Down
# 18 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	releaseall
	end


SixIsland_DottedHole_B3F_EventScript_BrailleRight::
# 23 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	lockall
# 24 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	braillemsgbox Braille_Text_Right
# 25 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	releaseall
	end


SixIsland_DottedHole_B2F_EventScript_BrailleLeft::
# 30 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	lockall
# 31 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	braillemsgbox Braille_Text_Left
# 32 "data/maps/SixIsland_DottedHole_1F_Frlg/scripts.pory"
	releaseall
	end

