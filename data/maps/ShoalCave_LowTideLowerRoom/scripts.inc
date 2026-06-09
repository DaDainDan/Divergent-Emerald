ShoalCave_LowTideLowerRoom_MapScripts::
# 2 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideLowerRoom_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

ShoalCave_LowTideLowerRoom_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SHOAL_SALT_4, ShoalCave_LowTideLowerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2
ShoalCave_LowTideLowerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

ShoalCave_LowTideLowerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setmetatile 18, 2, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
	goto ShoalCave_LowTideLowerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1


ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4::
# 11 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	lockall
# 12 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_4, ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_2
	giveitem ITEM_SHOAL_SALT
# 0 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_6
ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_5:
# 18 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setmetatile 18, 2, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 19 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	special DrawWholeMapView
# 20 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_4
ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_1:
# 22 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	releaseall
	end

ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_2:
# 13 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
	goto ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_1

ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_6:
# 16 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto ShoalCave_LowTideLowerRoom_EventScript_ShoalSalt4_5


ShoalCave_LowTideLowerRoom_EventScript_BlackBelt::
# 27 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	lock_faceplayer
# 28 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_FOCUS_BAND, ShoalCave_LowTideLowerRoom_EventScript_BlackBelt_2
# 32 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_CanOvercomeColdWithFocus, MSGBOX_DEFAULT
	giveitem ITEM_FOCUS_BAND
# 0 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ShoalCave_LowTideLowerRoom_EventScript_BlackBelt_5
ShoalCave_LowTideLowerRoom_EventScript_BlackBelt_4:
# 36 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	setflag FLAG_RECEIVED_FOCUS_BAND
	release_end

ShoalCave_LowTideLowerRoom_EventScript_BlackBelt_2:
# 29 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	msgbox ShoalCave_LowTideLowerRoom_Text_EverythingStartsWithFocus, MSGBOX_DEFAULT
	release_end

ShoalCave_LowTideLowerRoom_EventScript_BlackBelt_5:
# 34 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto ShoalCave_LowTideLowerRoom_EventScript_BlackBelt_4


ShoalCave_LowTideLowerRoom_Text_CanOvercomeColdWithFocus::
# 40 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "The penetrating cold around these\n"
	.string "parts is an impediment to training.\p"
	.string "But with focus, one can overcome!\p"
	.string "With this FOCUS BAND, buckle down and\n"
	.string "withstand the cold!$"

ShoalCave_LowTideLowerRoom_Text_EverythingStartsWithFocus::
# 50 "data/maps/ShoalCave_LowTideLowerRoom/scripts.pory"
	.string "Everything starts with focus!$"
