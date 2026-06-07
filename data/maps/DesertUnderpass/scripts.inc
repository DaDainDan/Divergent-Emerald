DesertUnderpass_MapScripts::
# 2 "data/maps/DesertUnderpass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DesertUnderpass_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DesertUnderpass_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/DesertUnderpass/scripts.pory"
	setflag FLAG_LANDMARK_DESERT_UNDERPASS
	end


DesertUnderpass_EventScript_Fossil::
# 9 "data/maps/DesertUnderpass/scripts.pory"
	lock_faceplayer
# 10 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_set FLAG_CHOSE_ROOT_FOSSIL, DesertUnderpass_EventScript_Fossil_2
# 13 "data/maps/DesertUnderpass/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
DesertUnderpass_EventScript_Fossil_1:
# 15 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DesertUnderpass_EventScript_Fossil_6
DesertUnderpass_EventScript_Fossil_5:
# 18 "data/maps/DesertUnderpass/scripts.pory"
	removeobject LOCALID_UNDERPASS_FOSSIL
	release_end

DesertUnderpass_EventScript_Fossil_2:
# 11 "data/maps/DesertUnderpass/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
	goto DesertUnderpass_EventScript_Fossil_1

DesertUnderpass_EventScript_Fossil_6:
# 16 "data/maps/DesertUnderpass/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto DesertUnderpass_EventScript_Fossil_5


DesertUnderpass_Text_FoundRootFossil::
# 23 "data/maps/DesertUnderpass/scripts.pory"
	.string "{PLAYER} found the ROOT FOSSIL.$"

DesertUnderpass_Text_FoundClawFossil::
# 27 "data/maps/DesertUnderpass/scripts.pory"
	.string "{PLAYER} found the CLAW FOSSIL.$"
