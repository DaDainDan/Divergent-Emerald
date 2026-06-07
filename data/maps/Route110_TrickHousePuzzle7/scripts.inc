Route110_TrickHousePuzzle7_MapScripts::
# 4 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_LOAD
# 25 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_RESUME:
# 5 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles
	end

Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1
	goto_if_eq Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 12 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 13 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 14 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 15 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 16 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
	end

Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	end

Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_LOAD:
# 20 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1
	goto_if_eq Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 21 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles
	goto Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1, Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route110_TrickHousePuzzle7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 27 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 0
	end


Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles::
# 34 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_2
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_1:
# 37 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_5
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_4:
# 40 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_8
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_7:
# 43 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_11
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_10:
# 46 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_14
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_13:
	return

Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_2:
# 35 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn
	goto Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_1

Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_5:
# 38 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn
	goto Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_4

Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_8:
# 41 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn
	goto Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_7

Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_11:
# 44 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn
	goto Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_10

Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_14:
# 47 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn
	goto Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles_13


Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn::
# 54 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 13, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 55 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 16, METATILE_TrickHousePuzzle_Lever_On, TRUE
	return


Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn::
# 60 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 13, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 61 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 11, METATILE_TrickHousePuzzle_Lever_On, TRUE
	return


Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn::
# 66 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 12, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 67 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 5, 10, METATILE_TrickHousePuzzle_Lever_On, TRUE
	return


Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn::
# 72 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 6, 6, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Right_Alt, FALSE
# 73 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 4, 4, METATILE_TrickHousePuzzle_Lever_On, TRUE
	return


Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn::
# 78 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 8, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 79 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 5, METATILE_TrickHousePuzzle_Lever_On, TRUE
	return


Route110_TrickHousePuzzle7_EventScript_Scroll::
# 84 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 85 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_7_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle7_EventScript_Scroll_2
Route110_TrickHousePuzzle7_EventScript_Scroll_1:
# 89 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle7_EventScript_Scroll_2:
# 86 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE, 1
# 87 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle7_EventScript_Scroll_1


Route110_TrickHousePuzzle7_EventScript_TeleportPad::
# 95 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 96 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1
# 97 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	warpteleport MAP_ROUTE110_TRICK_HOUSE_PUZZLE7, 3, 19
# 98 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitstate
# 99 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end


Route110_TrickHousePuzzle7_EventScript_Switch1::
# 105 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 106 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 107 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_Switch1_2
# 110 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 13, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 111 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 16, METATILE_TrickHousePuzzle_Lever_Off, TRUE
Route110_TrickHousePuzzle7_EventScript_Switch1_1:
# 113 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 114 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 115 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_Switch1_6
# 118 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
Route110_TrickHousePuzzle7_EventScript_Switch1_5:
# 120 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end

Route110_TrickHousePuzzle7_EventScript_Switch1_2:
# 108 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn
	goto Route110_TrickHousePuzzle7_EventScript_Switch1_1

Route110_TrickHousePuzzle7_EventScript_Switch1_6:
# 116 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
	goto Route110_TrickHousePuzzle7_EventScript_Switch1_5


Route110_TrickHousePuzzle7_EventScript_Switch2::
# 125 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 126 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 127 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_Switch2_2
# 130 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 13, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 131 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 11, METATILE_TrickHousePuzzle_Lever_Off, TRUE
Route110_TrickHousePuzzle7_EventScript_Switch2_1:
# 133 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 134 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 135 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_Switch2_6
# 138 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
Route110_TrickHousePuzzle7_EventScript_Switch2_5:
# 140 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end

Route110_TrickHousePuzzle7_EventScript_Switch2_2:
# 128 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn
	goto Route110_TrickHousePuzzle7_EventScript_Switch2_1

Route110_TrickHousePuzzle7_EventScript_Switch2_6:
# 136 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
	goto Route110_TrickHousePuzzle7_EventScript_Switch2_5


Route110_TrickHousePuzzle7_EventScript_Switch3::
# 145 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 146 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 147 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_Switch3_2
# 150 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 12, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 151 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 5, 10, METATILE_TrickHousePuzzle_Lever_Off, TRUE
Route110_TrickHousePuzzle7_EventScript_Switch3_1:
# 153 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 154 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 155 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_Switch3_6
# 158 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
Route110_TrickHousePuzzle7_EventScript_Switch3_5:
# 160 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end

Route110_TrickHousePuzzle7_EventScript_Switch3_2:
# 148 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn
	goto Route110_TrickHousePuzzle7_EventScript_Switch3_1

Route110_TrickHousePuzzle7_EventScript_Switch3_6:
# 156 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
	goto Route110_TrickHousePuzzle7_EventScript_Switch3_5


Route110_TrickHousePuzzle7_EventScript_Switch4::
# 165 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 166 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 167 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_Switch4_2
Route110_TrickHousePuzzle7_EventScript_Switch4_1:
# 170 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_Switch4_5
Route110_TrickHousePuzzle7_EventScript_Switch4_4:
# 174 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 175 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 176 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_Switch4_8
# 179 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
Route110_TrickHousePuzzle7_EventScript_Switch4_7:
# 181 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end

Route110_TrickHousePuzzle7_EventScript_Switch4_2:
# 168 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn
	goto Route110_TrickHousePuzzle7_EventScript_Switch4_1

Route110_TrickHousePuzzle7_EventScript_Switch4_5:
# 171 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 6, 6, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left_Alt, FALSE
# 172 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 4, 4, METATILE_TrickHousePuzzle_Lever_Off, TRUE
	goto Route110_TrickHousePuzzle7_EventScript_Switch4_4

Route110_TrickHousePuzzle7_EventScript_Switch4_8:
# 177 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
	goto Route110_TrickHousePuzzle7_EventScript_Switch4_7


Route110_TrickHousePuzzle7_EventScript_Switch5::
# 186 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 187 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 188 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_Switch5_2
# 191 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 8, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Right, FALSE
# 192 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 5, METATILE_TrickHousePuzzle_Lever_Off, TRUE
Route110_TrickHousePuzzle7_EventScript_Switch5_1:
# 194 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 195 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 196 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_Switch5_6
# 199 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
Route110_TrickHousePuzzle7_EventScript_Switch5_5:
# 201 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
	end

Route110_TrickHousePuzzle7_EventScript_Switch5_2:
# 189 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn
	goto Route110_TrickHousePuzzle7_EventScript_Switch5_1

Route110_TrickHousePuzzle7_EventScript_Switch5_6:
# 197 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
	goto Route110_TrickHousePuzzle7_EventScript_Switch5_5


Route110_TrickHousePuzzle7_EventScript_YellowButton::
# 207 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 208 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 209 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 210 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 211 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 0
# 212 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 214 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 215 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
	end


Route110_TrickHousePuzzle7_EventScript_BlueButton::
# 220 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 221 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 222 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 223 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 224 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 1
# 225 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 227 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 228 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
	end


Route110_TrickHousePuzzle7_EventScript_GreenButton::
# 233 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 234 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 235 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 236 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 237 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 2
# 238 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 239 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 240 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 241 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
	end


Route110_TrickHousePuzzle7_EventScript_PurpleButton::
# 246 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 247 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 248 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 249 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 250 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 3
# 251 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 253 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 254 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
	end


Route110_TrickHousePuzzle7_EventScript_RedButton::
# 260 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 261 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 262 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 263 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 264 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 4
# 265 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 266 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 267 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 268 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
	end


Route110_TrickHousePuzzle7_EventScript_Joshua::
# 273 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_JOSHUA, Route110_TrickHousePuzzle7_Text_JoshuaIntro, Route110_TrickHousePuzzle7_Text_JoshuaDefeat
# 274 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle7_EventScript_Patricia::
# 279 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_PATRICIA, Route110_TrickHousePuzzle7_Text_PatriciaIntro, Route110_TrickHousePuzzle7_Text_PatriciaDefeat
# 280 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_PatriciaPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle7_EventScript_Alexis::
# 285 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_ALEXIS, Route110_TrickHousePuzzle7_Text_AlexisIntro, Route110_TrickHousePuzzle7_Text_AlexisDefeat
# 286 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_AlexisPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle7_EventScript_Mariela::
# 291 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_MARIELA, Route110_TrickHousePuzzle7_Text_MarielaIntro, Route110_TrickHousePuzzle7_Text_MarielaDefeat
# 292 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_MarielaPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle7_EventScript_Alvaro::
# 297 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_ALVARO, Route110_TrickHousePuzzle7_Text_AlvaroIntro, Route110_TrickHousePuzzle7_Text_AlvaroDefeat
# 298 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_AlvaroPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle7_EventScript_Everett::
# 303 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_EVERETT, Route110_TrickHousePuzzle7_Text_EverettIntro, Route110_TrickHousePuzzle7_Text_EverettDefeat
# 304 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_EverettPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened::
# 308 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is huggable.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle7_Text_JoshuaIntro::
# 318 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "The TRICK MASTER always vanishes\n"
	.string "like smoke. How does he do it?$"

Route110_TrickHousePuzzle7_Text_JoshuaDefeat::
# 323 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Aiyeeeh! You're much too strong!\n"
	.string "How do you do it?$"

Route110_TrickHousePuzzle7_Text_JoshuaPostBattle::
# 328 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I wish I could appear and disappear as\n"
	.string "if I were smoke, too.$"

Route110_TrickHousePuzzle7_Text_PatriciaIntro::
# 333 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Going around the same spot…\n"
	.string "It begets ill fortune…$"

Route110_TrickHousePuzzle7_Text_PatriciaDefeat::
# 338 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Defeated!\n"
	.string "It's a bad sign…$"

Route110_TrickHousePuzzle7_Text_PatriciaPostBattle::
# 343 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I've circled the same spot over ten\n"
	.string "times now… It's ill fortune…$"

Route110_TrickHousePuzzle7_Text_AlexisIntro::
# 348 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Whoever wins will get through here\n"
	.string "first. That's the feeling I get.$"

Route110_TrickHousePuzzle7_Text_AlexisDefeat::
# 353 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Oh!\n"
	.string "Well, go ahead, then!$"

Route110_TrickHousePuzzle7_Text_AlexisPostBattle::
# 358 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "You're solving all the puzzles in the\n"
	.string "TRICK HOUSE. That's the feeling I get.$"

Route110_TrickHousePuzzle7_Text_MarielaIntro::
# 363 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Nufufufu, here at last!\n"
	.string "Let's get right with it!$"

Route110_TrickHousePuzzle7_Text_MarielaDefeat::
# 368 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "You're so casual about winning!$"

Route110_TrickHousePuzzle7_Text_MarielaPostBattle::
# 372 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Humph! I'm not upset!\n"
	.string "Not me!$"

Route110_TrickHousePuzzle7_Text_AlvaroIntro::
# 377 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I ever so closely watched you coming!$"

Route110_TrickHousePuzzle7_Text_AlvaroDefeat::
# 381 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "This outcome I didn't see coming…$"

Route110_TrickHousePuzzle7_Text_AlvaroPostBattle::
# 385 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Well, anyway, we both picked a weird\n"
	.string "place to get acquainted.\p"
	.string "As one weirdo to another,\n"
	.string "let's do our best!$"

Route110_TrickHousePuzzle7_Text_EverettIntro::
# 393 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "It's awfully cramped in here…$"

Route110_TrickHousePuzzle7_Text_EverettDefeat::
# 397 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Oh, yes, strong you are.$"

Route110_TrickHousePuzzle7_Text_EverettPostBattle::
# 401 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I was hoping to switch places with you\n"
	.string "when I beat you, but…$"
