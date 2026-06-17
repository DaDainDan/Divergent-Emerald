SevenIsland_SevaultCanyon_TanobyKey_Frlg_MapScripts::
# 4 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_SevaultCanyon_TanobyKey_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SevenIsland_SevaultCanyon_TanobyKey_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND_SEVAULT_CANYON_TANOBY_KEY
# 6 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_UNLOCKED_TANOBY_RUINS, SevenIsland_SevaultCanyon_TanobyKey_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SevenIsland_SevaultCanyon_TanobyKey_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 16 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 0
# 17 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_3, 0
# 18 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_4, 0
# 19 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_5, 0
# 20 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_6, 0
# 21 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_7, 0
# 22 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_8, 0
	end

SevenIsland_SevaultCanyon_TanobyKey_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER1, 7, 2
# 8 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER2, 4, 4
# 9 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER3, 10, 4
# 10 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER4, 5, 6
# 11 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER5, 9, 6
# 12 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER6, 5, 8
# 13 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TANOBY_KEY_BOULDER7, 9, 8
	goto SevenIsland_SevaultCanyon_TanobyKey_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1::
# 28 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 29 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_1, 100
	goto_if_ne SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1_2
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1_1:
# 36 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
	end

SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1_2:
# 30 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 31 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 100
# 32 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_8, 7
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1_4
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1_1

SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1_4:
# 33 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch1_1


SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2::
# 41 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 42 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_2, 100
	goto_if_ne SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2_2
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2_1:
# 49 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
	end

SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2_2:
# 43 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 44 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 100
# 45 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_8, 7
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2_4
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2_1

SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2_4:
# 46 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch2_1


SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3::
# 54 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 55 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_3, 100
	goto_if_ne SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3_2
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3_1:
# 62 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
	end

SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3_2:
# 56 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 57 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_3, 100
# 58 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_8, 7
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3_4
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3_1

SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3_4:
# 59 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch3_1


SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4::
# 67 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 68 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_4, 100
	goto_if_ne SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4_2
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4_1:
# 75 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
	end

SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4_2:
# 69 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 70 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_4, 100
# 71 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_8, 7
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4_4
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4_1

SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4_4:
# 72 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch4_1


SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5::
# 80 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 81 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_5, 100
	goto_if_ne SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5_2
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5_1:
# 88 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
	end

SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5_2:
# 82 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 83 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_5, 100
# 84 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_8, 7
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5_4
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5_1

SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5_4:
# 85 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch5_1


SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6::
# 93 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 94 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_6, 100
	goto_if_ne SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6_2
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6_1:
# 101 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
	end

SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6_2:
# 95 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 96 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_6, 100
# 97 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_8, 7
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6_4
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6_1

SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6_4:
# 98 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch6_1


SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7::
# 106 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	lockall
# 107 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_7, 100
	goto_if_ne SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7_2
SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7_1:
# 114 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
	end

SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7_2:
# 108 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	call SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed
# 109 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_TEMP_7, 100
# 110 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	compare VAR_TEMP_8, 7
	goto_if_eq SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7_4
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7_1

SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7_4:
# 111 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved
	goto SevenIsland_SevaultCanyon_TanobyKey_EventScript_Switch7_1


SevenIsland_SevaultCanyon_TanobyKey_EventScript_SwitchPressed::
# 119 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	addvar VAR_TEMP_8, 1
# 120 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	playse SE_TRUCK_MOVE
# 121 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 122 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8005, 1
# 123 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8006, 8
# 124 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8007, 3
# 125 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	special ShakeScreen
# 126 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	delay 60
	return


SevenIsland_SevaultCanyon_TanobyKey_EventScript_PuzzleSolved::
# 131 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 132 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8005, 2
# 133 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8006, 10
# 134 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8007, 3
# 135 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	special ShakeScreen
# 136 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	delay 60
# 137 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 138 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8005, 3
# 139 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8006, 12
# 140 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setvar VAR_0x8007, 2
# 141 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	special ShakeScreen
# 142 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	delay 60
# 143 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	playse SE_LAVARIDGE_FALL_WARP
# 144 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	waitse
# 145 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_TanobyKey_Text_MysteriousRumbleFarAway
# 146 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	setflag FLAG_SYS_UNLOCKED_TANOBY_RUINS
# 147 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	releaseall
	end


SevenIsland_SevaultCanyon_TanobyKey_Text_MysteriousRumbleFarAway::
# 151 "data/maps/SevenIsland_SevaultCanyon_TanobyKey_Frlg/scripts.pory"
	.string "A mysterious rumble echoed\n"
	.string "somewhere far away.$"
