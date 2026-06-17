Route23_Frlg_MapScripts::
# 2 "data/maps/Route23_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route23_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route23_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route23_Frlg/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_3F_BOULDER
# 4 "data/maps/Route23_Frlg/scripts.pory"
	setflag FLAG_HIDE_VICTORY_ROAD_2F_BOULDER
# 5 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_1F, 0
# 6 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 0
# 7 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 0
# 8 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_3F, 0
	end


Route23_EventScript_CascadeBadgeGuard::
# 14 "data/maps/Route23_Frlg/scripts.pory"
	lock_faceplayer
# 15 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 16 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 17 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
	end


Route23_EventScript_ThunderBadgeGuard::
# 22 "data/maps/Route23_Frlg/scripts.pory"
	lock_faceplayer
# 23 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 24 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 25 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
	end


Route23_EventScript_RainbowBadgeGuard::
# 30 "data/maps/Route23_Frlg/scripts.pory"
	lock_faceplayer
# 31 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 4
# 32 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 33 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
	end


Route23_EventScript_SoulBadgeGuard::
# 38 "data/maps/Route23_Frlg/scripts.pory"
	lock_faceplayer
# 39 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 5
# 40 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 41 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
	end


Route23_EventScript_MarshBadgeGuard::
# 46 "data/maps/Route23_Frlg/scripts.pory"
	lock_faceplayer
# 47 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 6
# 48 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 49 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
	end


Route23_EventScript_VolcanoBadgeGuard::
# 54 "data/maps/Route23_Frlg/scripts.pory"
	lock_faceplayer
# 55 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 7
# 56 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 57 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
	end


Route23_EventScript_EarthBadgeGuard::
# 62 "data/maps/Route23_Frlg/scripts.pory"
	lock_faceplayer
# 63 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 8
# 64 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 65 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
	end


Route23_EventScript_CascadeBadgeGuardTrigger::
# 70 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 71 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 72 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_CASCADE_BADGE_GUARD
# 73 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 74 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
	end


Route23_EventScript_ThunderBadgeGuardTrigger::
# 79 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 80 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 81 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_THUNDER_BADGE_GUARD
# 82 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 83 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
	end


Route23_EventScript_RainbowBadgeGuardTrigger::
# 88 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 89 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 4
# 90 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_RAINBOW_BADGE_GUARD
# 91 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 92 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
	end


Route23_EventScript_SoulBadgeGuardTrigger::
# 97 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 98 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 5
# 99 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_SOUL_BADGE_GUARD
# 100 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 101 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
	end


Route23_EventScript_MarshBadgeGuardTrigger::
# 106 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 107 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 6
# 108 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_MARSH_BADGE_GUARD
# 109 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 110 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
	end


Route23_EventScript_VolcanoBadgeGuardTrigger::
# 115 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 116 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 7
# 117 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_VOLCANO_BADGE_GUARD
# 118 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 119 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
	end


Route23_EventScript_EarthBadgeGuardTrigger::
# 124 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 125 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 8
# 126 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_EARTH_BADGE_GUARD
# 127 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 128 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
	end


Route23_EventScript_VictoryRoadGateSign::
# 133 "data/maps/Route23_Frlg/scripts.pory"
	msgbox Route23_Text_VictoryRoadGateSign, MSGBOX_SIGN
	end


Route23_Text_VictoryRoadGateSign::
# 137 "data/maps/Route23_Frlg/scripts.pory"
	.string "VICTORY ROAD GATE -\n"
	.string "POKéMON LEAGUE$"
