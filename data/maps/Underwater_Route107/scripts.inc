Underwater_Route107_MapScripts::
	.byte 0


Underwater_Route107_EventScript_Fossil::
# 4 "data/maps/Underwater_Route107/scripts.pory"
	lock_faceplayer
	giveitem ITEM_CLAW_FOSSIL
# 0 "data/maps/Underwater_Route107/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Underwater_Route107_EventScript_Fossil_2
Underwater_Route107_EventScript_Fossil_1:
# 8 "data/maps/Underwater_Route107/scripts.pory"
	removeobject LOCALID_ROUTE_107_FOSSIL
	release_end

Underwater_Route107_EventScript_Fossil_2:
# 6 "data/maps/Underwater_Route107/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Underwater_Route107_EventScript_Fossil_1

