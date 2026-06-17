SafariZone_Center_Frlg_MapScripts::
# 2 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZone_Center_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SafariZone_Center_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SAFARI_ZONE_CENTER
	end


SafariZone_Center_EventScript_RestHouseSign::
# 9 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	msgbox SafariZone_Center_Text_RestHouse, MSGBOX_SIGN
	end


SafariZone_Center_EventScript_TrainerTips::
# 14 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	msgbox SafariZone_Center_Text_PressStartToCheckTime, MSGBOX_SIGN
	end


SafariZone_Center_EventScript_AreaSign::
# 19 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	msgbox SafariZone_Center_Text_CenterArea, MSGBOX_SIGN
	end


SafariZone_Center_Text_RestHouse::
# 23 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	.string "REST HOUSE$"

SafariZone_Center_Text_PressStartToCheckTime::
# 27 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Press START to check\n"
	.string "remaining time.$"

SafariZone_Center_Text_CenterArea::
# 34 "data/maps/SafariZone_Center_Frlg/scripts.pory"
	.string "CENTER AREA$"
