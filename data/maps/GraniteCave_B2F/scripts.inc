GraniteCave_B2F_MapScripts::
	.byte 0


GraniteCave_B2F_Eventscript_Fossil::
# 4 "data/maps/GraniteCave_B2F/scripts.pory"
	lock_faceplayer
	giveitem ITEM_ARMOR_FOSSIL
# 0 "data/maps/GraniteCave_B2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GraniteCave_B2F_Eventscript_Fossil_2
GraniteCave_B2F_Eventscript_Fossil_1:
# 8 "data/maps/GraniteCave_B2F/scripts.pory"
	removeobject LOCALID_GRANITE_CAVE_FOSSIL
	release_end

GraniteCave_B2F_Eventscript_Fossil_2:
# 6 "data/maps/GraniteCave_B2F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto GraniteCave_B2F_Eventscript_Fossil_1

