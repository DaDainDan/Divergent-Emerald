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
	end

NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 30 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
	goto NewMauville_Inside_MapScripts_MAP_SCRIPT_ON_LOAD_1


NewMauville_Inside_EventScript_BlueButton::
# 37 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 38 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 1
# 39 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 0
# 40 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 41 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateBlueButton
# 42 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 43 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
	end


NewMauville_Inside_EventScript_GreenButton::
# 48 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 49 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 0
# 50 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 1
# 51 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 52 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateGreenButton
# 53 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 54 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
	end


NewMauville_Inside_EventScript_SetBarrierStateBlueButton::
# 59 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 60 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 61 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 36, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 62 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 37, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 63 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 64 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 65 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 18, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 66 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 19, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 67 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 68 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 69 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 2, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 70 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 3, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 71 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 72 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 73 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 35, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 74 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 36, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 75 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 76 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 77 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 24, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 78 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 25, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 79 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 80 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 81 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 26, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 82 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 27, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 83 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Green_Top, TRUE
# 84 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Green_TopMid, TRUE
# 85 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 4, METATILE_BikeShop_Barrier_Green_BottomMid, TRUE
# 86 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 5, METATILE_BikeShop_Barrier_Green_Bottom, TRUE
# 87 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 6, 11, METATILE_BikeShop_Button_Pressed, FALSE
# 88 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 13, 10, METATILE_BikeShop_Button_Pressed, FALSE
# 89 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Pressed, FALSE
# 90 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 4, 26, METATILE_BikeShop_Button_Pressed, FALSE
# 91 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 30, 38, METATILE_BikeShop_Button_Pressed, FALSE
# 92 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 2, 11, METATILE_BikeShop_Button_Green, FALSE
# 93 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 17, 10, METATILE_BikeShop_Button_Green, FALSE
# 94 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 25, 18, METATILE_BikeShop_Button_Green, FALSE
# 95 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 18, 36, METATILE_BikeShop_Button_Green, FALSE
	return


NewMauville_Inside_EventScript_SetBarrierStateGreenButton::
# 100 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 101 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 102 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 36, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 103 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 37, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 104 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 105 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 106 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 18, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 107 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 19, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 108 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Blue_Top, TRUE
# 109 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Blue_TopMid, TRUE
# 110 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 2, METATILE_BikeShop_Barrier_Blue_BottomMid, TRUE
# 111 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 3, METATILE_BikeShop_Barrier_Blue_Bottom, TRUE
# 112 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 113 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 114 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 35, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 115 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 36, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 116 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 117 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 118 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 24, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 119 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 25, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 120 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 121 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 122 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 26, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 123 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 27, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 124 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Hidden_Top, TRUE
# 125 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Hidden_Bottom, TRUE
# 126 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 4, METATILE_BikeShop_Floor_Shadow_Top, FALSE
# 127 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 5, METATILE_BikeShop_Wall_Edge_Top, FALSE
# 128 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 2, 11, METATILE_BikeShop_Button_Pressed, FALSE
# 129 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 17, 10, METATILE_BikeShop_Button_Pressed, FALSE
# 130 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 25, 18, METATILE_BikeShop_Button_Pressed, FALSE
# 131 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 18, 36, METATILE_BikeShop_Button_Pressed, FALSE
# 132 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 6, 11, METATILE_BikeShop_Button_Blue, FALSE
# 133 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 13, 10, METATILE_BikeShop_Button_Blue, FALSE
# 134 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Blue, FALSE
# 135 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 4, 26, METATILE_BikeShop_Button_Blue, FALSE
# 136 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 30, 38, METATILE_BikeShop_Button_Blue, FALSE
	return


NewMauville_Inside_EventScript_RedButton::
# 141 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 142 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_SteppedOnSwitchGeneratorStopped, MSGBOX_DEFAULT
# 143 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
# 144 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_NEW_MAUVILLE_STATE, 2
# 145 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
	end


NewMauville_Inside_EventScript_SetGeneratorOffMetatiles::
# 150 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 6, METATILE_BikeShop_Button_Pressed, FALSE
# 151 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 32, 2, METATILE_BikeShop_Generator_Off_Tile0, TRUE
# 152 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 2, METATILE_BikeShop_Generator_Off_Tile1, TRUE
# 153 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 2, METATILE_BikeShop_Generator_Off_Tile2, TRUE
# 154 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 35, 2, METATILE_BikeShop_Generator_Off_Tile3, TRUE
# 155 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 32, 3, METATILE_BikeShop_Generator_Off_Tile4, TRUE
# 156 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 3, METATILE_BikeShop_Generator_Off_Tile5, TRUE
# 157 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 3, METATILE_BikeShop_Generator_Off_Tile6, TRUE
# 158 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 35, 3, METATILE_BikeShop_Generator_Off_Tile7, TRUE
# 159 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
	return


NewMauville_Inside_EventScript_Generator::
# 164 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 165 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 2
	goto_if_eq NewMauville_Inside_EventScript_Generator_2
# 168 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_GeneratorRadiatingHeat, MSGBOX_DEFAULT
NewMauville_Inside_EventScript_Generator_1:
# 170 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
	end

NewMauville_Inside_EventScript_Generator_2:
# 166 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_GeneratorQuietedDown, MSGBOX_DEFAULT
	goto NewMauville_Inside_EventScript_Generator_1


NewMauville_Inside_EventScript_Voltorb1::
# 175 "data/maps/NewMauville_Inside/scripts.pory"
	lock_faceplayer
# 176 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_0x8007, 1
# 177 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_VoltorbBattle
	end


NewMauville_Inside_EventScript_Voltorb2::
# 182 "data/maps/NewMauville_Inside/scripts.pory"
	lock_faceplayer
# 183 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_0x8007, 2
# 184 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_VoltorbBattle
	end


NewMauville_Inside_EventScript_Voltorb3::
# 189 "data/maps/NewMauville_Inside/scripts.pory"
	lock_faceplayer
# 190 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_0x8007, 3
# 191 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_VoltorbBattle
	end


NewMauville_Inside_EventScript_VoltorbBattle::
# 196 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 25
# 197 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 198 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_ENCOUNTER
# 199 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 200 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 201 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 202 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 203 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 204 "data/maps/NewMauville_Inside/scripts.pory"
	switch VAR_0x8007
# 205 "data/maps/NewMauville_Inside/scripts.pory"
	case 1, NewMauville_Inside_EventScript_VoltorbBattle_3
# 206 "data/maps/NewMauville_Inside/scripts.pory"
	case 2, NewMauville_Inside_EventScript_VoltorbBattle_4
# 207 "data/maps/NewMauville_Inside/scripts.pory"
	case 3, NewMauville_Inside_EventScript_VoltorbBattle_5
NewMauville_Inside_EventScript_VoltorbBattle_1:
# 209 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 210 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq NewMauville_Inside_EventScript_VoltorbBattle_7
# 210 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq NewMauville_Inside_EventScript_VoltorbBattle_7
# 211 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq NewMauville_Inside_EventScript_VoltorbBattle_7
NewMauville_Inside_EventScript_VoltorbBattle_6:
	release_end

NewMauville_Inside_EventScript_VoltorbBattle_3:
# 205 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
	goto NewMauville_Inside_EventScript_VoltorbBattle_1

NewMauville_Inside_EventScript_VoltorbBattle_4:
# 206 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
	goto NewMauville_Inside_EventScript_VoltorbBattle_1

NewMauville_Inside_EventScript_VoltorbBattle_5:
# 207 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
	goto NewMauville_Inside_EventScript_VoltorbBattle_1

NewMauville_Inside_EventScript_VoltorbBattle_7:
# 212 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto NewMauville_Inside_EventScript_VoltorbBattle_6


NewMauville_Inside_Text_GeneratorRadiatingHeat::
# 217 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator is radiating heat that\n"
	.string "can be felt even at a distance.\p"
	.string "It looks like it should be turned off\n"
	.string "as soon as possible.$"

NewMauville_Inside_Text_GeneratorQuietedDown::
# 225 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator quieted down.$"

NewMauville_Inside_Text_SteppedOnSwitchGeneratorStopped::
# 229 "data/maps/NewMauville_Inside/scripts.pory"
	.string "{PLAYER} stepped on the switch.\p"
	.string "Click…\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "The generator appears to have\n"
	.string "stopped…$"
