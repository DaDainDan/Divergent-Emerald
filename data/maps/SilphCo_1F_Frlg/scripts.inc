SilphCo_1F_Frlg_MapScripts::
# 2 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SilphCo_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SILPH_CO_1F
	end


SilphCo_1F_EventScript_Receptionist::
# 9 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	msgbox SilphCo_1F_Text_WelcomePresidentInBoardroom, MSGBOX_NPC
	end


SilphCo_1F_EventScript_FloorSign::
# 14 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	msgbox SilphCo_1F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_1F_Text_WelcomePresidentInBoardroom::
# 18 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	.string "Welcome.\p"
	.string "The PRESIDENT is in the boardroom\n"
	.string "on 11F.$"

SilphCo_1F_Text_FloorSign::
# 25 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
	.string "1F$"
