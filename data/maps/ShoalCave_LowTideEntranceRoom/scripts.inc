ShoalCave_LowTideEntranceRoom_MapScripts::
# 2 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalCave_LowTideEntranceRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ShoalCave_LowTideEntranceRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	special UpdateShoalTideFlag
# 4 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideEntranceRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 7 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setmaplayoutindex LAYOUT_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM
ShoalCave_LowTideEntranceRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

ShoalCave_LowTideEntranceRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setmaplayoutindex LAYOUT_SHOAL_CAVE_HIGH_TIDE_ENTRANCE_ROOM
	goto ShoalCave_LowTideEntranceRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert::
# 14 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	lock_faceplayer
# 15 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	dotimebasedevents
# 16 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_set FLAG_SYS_SHOAL_ITEM, ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_2
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_1:
	checkitem ITEM_SHOAL_SALT, 4
# 0 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_5
	checkitem ITEM_SHOAL_SHELL, 4
# 0 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_5
# 35 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_WouldYouLikeShellBell, MSGBOX_YESNO
# 36 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_10
	checkitemspace ITEM_SHELL_BELL
# 0 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_20
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_17:
# 45 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_MakeShellBellRightAway, MSGBOX_DEFAULT
# 46 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	removeitem ITEM_SHOAL_SALT, 4
# 47 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	removeitem ITEM_SHOAL_SHELL, 4
# 48 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	giveitem ITEM_SHELL_BELL
# 49 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_ExplainShellBell, MSGBOX_DEFAULT
# 50 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setflag FLAG_TEMP_2
	release_end

ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_2:
# 17 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_1
# 18 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_2
# 19 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_3
# 20 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_4
# 21 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_1
# 22 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_2
# 23 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_3
# 24 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_4
# 25 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_SYS_SHOAL_ITEM
	goto ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_1

ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_5:
	checkitem ITEM_SHOAL_SALT
# 0 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_13
	checkitem ITEM_SHOAL_SHELL
# 0 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_13
# 32 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_AreYouPlanningOnGoingInThere, MSGBOX_DEFAULT
	release_end

ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_10:
# 37 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_WantedToMakeShellBell, MSGBOX_DEFAULT
	release_end

ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_13:
# 29 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_BringMe4ShoalSaltAndShells, MSGBOX_DEFAULT
	release_end

ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_18:
# 42 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_NoSpaceInYourBag, MSGBOX_DEFAULT
	release_end

ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_19:
	checkitem ITEM_SHOAL_SHELL, 5
# 0 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_18
	goto ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_17

ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_20:
	checkitem ITEM_SHOAL_SALT, 5
# 0 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_19
	goto ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_17

