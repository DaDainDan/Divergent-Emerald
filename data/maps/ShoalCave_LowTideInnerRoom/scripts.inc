ShoalCave_LowTideInnerRoom_MapScripts::
# 2 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD
# 23 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SHOAL_SALT_1, ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_3
ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SHOAL_SALT_2, ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_8
ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 9 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SHOAL_SHELL_1, ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_12
ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 12 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SHOAL_SHELL_2, ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_15
ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 15 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SHOAL_SHELL_3, ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_18
ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_17:
# 18 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SHOAL_SHELL_4, ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_21
ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_20:
	end

ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 31, 8, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
	goto ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1

ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 3 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_unset FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1

ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 7 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 14, 26, METATILE_Cave_ShoalCave_DirtPile_Large, TRUE
	goto ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_6

ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 6 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_unset FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_6

ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_12:
# 10 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 20, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
	goto ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_11

ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_15:
# 13 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 10, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
	goto ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_14

ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_18:
# 16 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 6, 9, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
	goto ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_17

ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_21:
# 19 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 16, 13, METATILE_Cave_ShoalCave_BlueStone_Large, TRUE
	goto ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_LOAD_20

ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 24 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 27 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmaplayoutindex LAYOUT_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 25 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmaplayoutindex LAYOUT_SHOAL_CAVE_HIGH_TIDE_INNER_ROOM
	goto ShoalCave_LowTideInnerRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1::
# 34 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 35 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_1, ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1_2
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1_1:
# 38 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setvar VAR_0x8007, 1
# 39 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell
	end

ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1_2:
# 36 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1_1


ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell::
	giveitem ITEM_SHOAL_SHELL
# 0 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_2
ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_1:
# 47 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	switch VAR_0x8007
# 48 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	case 1, ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_6
# 49 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	case 2, ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_7
# 50 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	case 3, ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_8
# 51 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	case 4, ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_9
ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_4:
# 53 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 54 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	switch VAR_0x8007
# 55 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	case 1, ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_12
# 56 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	case 2, ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_13
# 57 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	case 3, ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_14
# 58 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	case 4, ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_15
ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_10:
# 60 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
	end

ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_2:
# 45 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_1

ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_6:
# 48 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 20, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	goto ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_4

ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_7:
# 49 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 10, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	goto ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_4

ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_8:
# 50 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 6, 9, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	goto ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_4

ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_9:
# 51 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 16, 13, METATILE_Cave_ShoalCave_BlueStone_Small, FALSE
	goto ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_4

ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_12:
# 55 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_1
	goto ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_10

ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_13:
# 56 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_2
	goto ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_10

ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_14:
# 57 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_3
	goto ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_10

ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_15:
# 58 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_4
	goto ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell_10


ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell::
# 65 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoallShellNowNothing, MSGBOX_DEFAULT
# 66 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
	end


ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2::
# 71 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 72 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_2, ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2_2
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2_1:
# 75 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setvar VAR_0x8007, 2
# 76 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell
	end

ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2_2:
# 73 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2_1


ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3::
# 81 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 82 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_3, ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3_2
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3_1:
# 85 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setvar VAR_0x8007, 3
# 86 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell
	end

ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3_2:
# 83 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3_1


ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4::
# 91 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 92 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_4, ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4_2
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4_1:
# 95 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setvar VAR_0x8007, 4
# 96 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_GiveShoalShell
	end

ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4_2:
# 93 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4_1


ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1::
# 101 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 102 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_1, ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_2
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_1:
	giveitem ITEM_SHOAL_SALT
# 0 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_5
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_4:
# 108 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 31, 8, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 109 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 110 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_1
# 111 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
	end

ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_2:
# 103 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_1

ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_5:
# 106 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1_4


ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2::
# 116 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 117 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_2, ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_2
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_1:
	giveitem ITEM_SHOAL_SALT
# 0 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_5
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_4:
# 123 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 14, 26, METATILE_Cave_ShoalCave_DirtPile_Small, FALSE
# 124 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 125 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_2
# 126 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
	end

ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_2:
# 118 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_1

ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_5:
# 121 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2_4


ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt::
# 131 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
# 132 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
	end

