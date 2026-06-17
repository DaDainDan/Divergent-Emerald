Route22_NorthEntrance_Frlg_MapScripts::
	.byte 0


Route22_NorthEntrance_EventScript_BoulderBadgeGuard::
# 4 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 6 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BOULDER_BADGE
# 7 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	goto Route22_NorthEntrance_EventScript_BadgeGuard
	end


Route22_NorthEntrance_EventScript_BoulderBadgeGuardTrigger::
# 12 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	lockall
# 13 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 14 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	setvar VAR_0x8009, 1
# 15 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BOULDER_BADGE
# 16 "data/maps/Route22_NorthEntrance_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
	end

