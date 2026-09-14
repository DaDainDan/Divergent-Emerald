NewMauville_Inside_MapScripts::
# 2 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME
# 14 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 28 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME_2
NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 6 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME_5
NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 9 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME_9
NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME_7:
	end

NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateBlueButton
	goto NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME_1

NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 7 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateGreenButton
	goto NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME_4

NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME_8:
# 10 "data/maps/NewMauville_Inside/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME_7

NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME_9:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME_8
	goto NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_RESUME_7

NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 0
# 16 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 0
# 17 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_unset FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE, NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_unset FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE, NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 23 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_unset FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE, NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	end

NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1
	goto NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2
	goto NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 24 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3
	goto NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_LOAD:
# 29 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 2
	goto_if_eq NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_LOAD_2
NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 32 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 3
	goto_if_eq NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_LOAD_5
NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 30 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
	goto NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_LOAD_1

NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 33 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 39, 5, 0x2C5, TRUE
	goto NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_LOAD_4


NewMauville_Inside_EventScript_BlueButton::
# 40 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 41 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 1
# 42 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 0
# 43 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 44 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateBlueButton
# 45 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 46 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
	end


NewMauville_Inside_EventScript_GreenButton::
# 51 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 52 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 0
# 53 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 1
# 54 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 55 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateGreenButton
# 56 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 57 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
	end


NewMauville_Inside_EventScript_SetBarrierStateBlueButton::
# 62 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 63 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 64 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 36, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 65 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 37, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 66 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 67 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 68 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 18, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 69 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 19, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 70 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 71 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 72 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 2, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 73 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 3, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 74 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 75 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 76 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 35, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 77 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 36, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 78 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 79 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 80 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 24, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 81 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 25, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 82 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 83 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 84 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 26, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 85 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 27, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 86 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 87 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 88 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 4, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 89 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 5, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 90 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 6, 11, METATILE_BikeShop_Button_Pressed, FALSE
# 91 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 13, 10, METATILE_BikeShop_Button_Pressed, FALSE
# 92 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Pressed, FALSE
# 93 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 4, 26, METATILE_BikeShop_Button_Pressed, FALSE
# 94 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 30, 38, METATILE_BikeShop_Button_Pressed, FALSE
# 95 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 2, 11, METATILE_BikeShop_Button_Green, FALSE
# 96 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 17, 10, METATILE_BikeShop_Button_Green, FALSE
# 97 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 25, 18, METATILE_BikeShop_Button_Green, FALSE
# 98 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 18, 36, METATILE_BikeShop_Button_Green, FALSE
	return


NewMauville_Inside_EventScript_SetBarrierStateGreenButton::
# 103 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 104 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 105 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 36, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 106 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 37, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 107 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 108 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 109 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 18, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 110 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 19, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 111 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 112 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 113 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 2, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 114 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 3, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 115 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 116 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 117 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 35, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 118 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 36, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 119 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 120 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 121 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 24, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 122 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 25, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 123 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 124 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 125 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 26, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 126 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 27, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 127 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 128 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 129 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 4, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 130 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 5, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 131 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 2, 11, METATILE_BikeShop_Button_Pressed, FALSE
# 132 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 17, 10, METATILE_BikeShop_Button_Pressed, FALSE
# 133 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 25, 18, METATILE_BikeShop_Button_Pressed, FALSE
# 134 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 18, 36, METATILE_BikeShop_Button_Pressed, FALSE
# 135 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 6, 11, METATILE_BikeShop_Button_Blue, FALSE
# 136 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 13, 10, METATILE_BikeShop_Button_Blue, FALSE
# 137 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Blue, FALSE
# 138 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 4, 26, METATILE_BikeShop_Button_Blue, FALSE
# 139 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 30, 38, METATILE_BikeShop_Button_Blue, FALSE
	return


NewMauville_Inside_EventScript_RedButton::
# 144 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 145 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_SteppedOnSwitchGeneratorStopped, MSGBOX_DEFAULT
# 146 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
# 147 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_NEW_MAUVILLE_STATE, 2
# 148 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
	end


NewMauville_Inside_EventScript_SetGeneratorOffMetatiles::
# 153 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 6, METATILE_BikeShop_Button_Pressed, FALSE
# 154 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 32, 2, METATILE_BikeShop_Generator_Off_Tile0, TRUE
# 155 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 2, METATILE_BikeShop_Generator_Off_Tile1, TRUE
# 156 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 2, METATILE_BikeShop_Generator_Off_Tile2, TRUE
# 157 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 35, 2, METATILE_BikeShop_Generator_Off_Tile3, TRUE
# 158 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 32, 3, METATILE_BikeShop_Generator_Off_Tile4, TRUE
# 159 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 3, METATILE_BikeShop_Generator_Off_Tile5, TRUE
# 160 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 3, METATILE_BikeShop_Generator_Off_Tile6, TRUE
# 161 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 35, 3, METATILE_BikeShop_Generator_Off_Tile7, TRUE
# 162 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
	return


NewMauville_Inside_EventScript_Generator::
# 167 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 168 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 2
	goto_if_eq NewMauville_Inside_EventScript_Generator_2
# 171 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_GeneratorRadiatingHeat, MSGBOX_DEFAULT
NewMauville_Inside_EventScript_Generator_1:
# 173 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
	end

NewMauville_Inside_EventScript_Generator_2:
# 169 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_GeneratorQuietedDown, MSGBOX_DEFAULT
	goto NewMauville_Inside_EventScript_Generator_1


NewMauville_Inside_EventScript_Voltorb1::
# 178 "data/maps/NewMauville_Inside/scripts.pory"
	lock_faceplayer
# 179 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_0x8007, 1
# 180 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_VoltorbBattle
	end


NewMauville_Inside_EventScript_Voltorb2::
# 185 "data/maps/NewMauville_Inside/scripts.pory"
	lock_faceplayer
# 186 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_0x8007, 2
# 187 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_VoltorbBattle
	end


NewMauville_Inside_EventScript_Voltorb3::
# 192 "data/maps/NewMauville_Inside/scripts.pory"
	lock_faceplayer
# 193 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_0x8007, 3
# 194 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_VoltorbBattle
	end


NewMauville_Inside_EventScript_VoltorbBattle::
# 199 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 42
# 200 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 201 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_ENCOUNTER
# 202 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 203 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 204 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 205 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 206 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 207 "data/maps/NewMauville_Inside/scripts.pory"
	switch VAR_0x8007
# 208 "data/maps/NewMauville_Inside/scripts.pory"
	case 1, NewMauville_Inside_EventScript_VoltorbBattle_3
# 209 "data/maps/NewMauville_Inside/scripts.pory"
	case 2, NewMauville_Inside_EventScript_VoltorbBattle_4
# 210 "data/maps/NewMauville_Inside/scripts.pory"
	case 3, NewMauville_Inside_EventScript_VoltorbBattle_5
NewMauville_Inside_EventScript_VoltorbBattle_1:
# 212 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 213 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq NewMauville_Inside_EventScript_VoltorbBattle_7
# 213 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq NewMauville_Inside_EventScript_VoltorbBattle_7
# 214 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq NewMauville_Inside_EventScript_VoltorbBattle_7
NewMauville_Inside_EventScript_VoltorbBattle_6:
	release_end

NewMauville_Inside_EventScript_VoltorbBattle_3:
# 208 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
	goto NewMauville_Inside_EventScript_VoltorbBattle_1

NewMauville_Inside_EventScript_VoltorbBattle_4:
# 209 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
	goto NewMauville_Inside_EventScript_VoltorbBattle_1

NewMauville_Inside_EventScript_VoltorbBattle_5:
# 210 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
	goto NewMauville_Inside_EventScript_VoltorbBattle_1

NewMauville_Inside_EventScript_VoltorbBattle_7:
# 215 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto NewMauville_Inside_EventScript_VoltorbBattle_6


NewMauville_Inside_Text_GeneratorRadiatingHeat::
# 220 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator is radiating heat that\n"
	.string "can be felt even at a distance.\p"
	.string "It looks like it should be turned off\n"
	.string "as soon as possible.$"

NewMauville_Inside_Text_GeneratorQuietedDown::
# 228 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator quieted down.$"

NewMauville_Inside_Text_SteppedOnSwitchGeneratorStopped::
# 232 "data/maps/NewMauville_Inside/scripts.pory"
	.string "{PLAYER} stepped on the switch.\p"
	.string "Click…\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "The generator appears to have\n"
	.string "stopped…$"
