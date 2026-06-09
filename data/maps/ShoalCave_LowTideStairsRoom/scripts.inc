ShoalCave_LowTideStairsRoom_MapScripts::
# 2 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideStairsRoom_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

ShoalCave_LowTideStairsRoom_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SHOAL_SALT_3, ShoalCave_LowTideStairsRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2
ShoalCave_LowTideStairsRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

ShoalCave_LowTideStairsRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setmetatile 11, 11, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
	goto ShoalCave_LowTideStairsRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1


ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3::
# 11 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	lockall
# 12 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_3, ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_2
	giveitem ITEM_SHOAL_SALT
# 0 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_6
ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_5:
# 18 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setmetatile 11, 11, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 19 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	special DrawWholeMapView
# 20 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_3
ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_1:
# 22 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	releaseall
	end

ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_2:
# 13 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
	goto ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_1

ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_6:
# 16 "data/maps/ShoalCave_LowTideStairsRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto ShoalCave_LowTideStairsRoom_EventScript_ShoalSalt3_5

