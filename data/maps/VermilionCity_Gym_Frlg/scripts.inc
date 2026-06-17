VermilionCity_Gym_Frlg_MapScripts::
# 7 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
# 16 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_1, VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 11 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5
VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 9 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetOneBeamOff
	goto VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 12 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOff
	goto VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4

VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special SetVermilionTrashCans
# 19 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8004
# 20 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_1, VAR_0x8005
	goto VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


VermilionCity_Gym_EventScript_SetOneBeamOff::
# 27 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_HalfOn, 1
# 28 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_HalfOn, 1
# 29 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop_HalfOn, 1
# 30 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_HalfOn, 1
# 31 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_HalfOn, 1
# 32 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_HalfOn, 1
# 33 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_HalfOn, 1
# 34 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom_HalfOn, 1
# 35 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_HalfOn, 1
# 36 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_HalfOn, 1
	return


VermilionCity_Gym_EventScript_SetBeamsOff::
# 41 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Off, 1
# 42 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_Off, 0
# 43 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Floor, 0
# 44 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_Off, 0
# 45 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_Off, 1
# 46 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Off, 1
# 47 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_Off, 0
# 48 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Floor, 0
# 49 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_Off, 0
# 50 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Off, 1
	return


VermilionCity_Gym_EventScript_SetBeamsOn::
# 55 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_On, 1
# 56 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_On, 1
# 57 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop, 1
# 58 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_On, 1
# 59 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_On, 1
# 60 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_On, 1
# 61 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_On, 1
# 62 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom, 1
# 63 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_On, 1
# 64 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_On, 1
	return


VermilionCity_Gym_EventScript_TrashCan1::
# 69 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 70 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_0x8008, 1
# 71 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan2::
# 76 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 77 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_0x8008, 2
# 78 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan3::
# 83 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 84 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_0x8008, 3
# 85 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan4::
# 90 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 91 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_0x8008, 4
# 92 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan5::
# 97 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 98 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_0x8008, 5
# 99 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan6::
# 104 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 105 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_0x8008, 6
# 106 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan7::
# 111 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 112 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_0x8008, 7
# 113 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan8::
# 118 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 119 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_0x8008, 8
# 120 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan9::
# 125 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 126 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_0x8008, 9
# 127 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan10::
# 132 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 133 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_0x8008, 10
# 134 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan11::
# 139 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 140 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_0x8008, 11
# 141 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan12::
# 146 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 147 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_0x8008, 12
# 148 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan13::
# 153 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 154 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_0x8008, 13
# 155 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan14::
# 160 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 161 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_0x8008, 14
# 162 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan15::
# 167 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 168 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_0x8008, 15
# 169 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
	end


VermilionCity_Gym_EventScript_TrashCan::
# 174 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_0
# 175 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_0x8005, VAR_TEMP_1
# 176 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_TrashCan_2
# 179 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_1, VermilionCity_Gym_EventScript_TrashCan_3
# 197 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	compare VAR_0x8004, VAR_0x8008
	goto_if_eq VermilionCity_Gym_EventScript_TrashCan_4
# 206 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
VermilionCity_Gym_EventScript_TrashCan_1:
# 208 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
	end

VermilionCity_Gym_EventScript_TrashCan_2:
# 177 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
	goto VermilionCity_Gym_EventScript_TrashCan_1

VermilionCity_Gym_EventScript_TrashCan_3:
# 180 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	compare VAR_0x8005, VAR_0x8008
	goto_if_eq VermilionCity_Gym_EventScript_TrashCan_10
VermilionCity_Gym_EventScript_TrashCan_9:
# 189 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_OnlyTrashLocksWereReset
# 190 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_TEMP_1
# 191 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special SetVermilionTrashCans
# 192 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8004
# 193 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	copyvar VAR_TEMP_1, VAR_0x8005
# 194 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOn
# 195 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
	goto VermilionCity_Gym_EventScript_TrashCan_1

VermilionCity_Gym_EventScript_TrashCan_4:
# 198 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened
# 199 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	playse SE_PIN
# 200 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	waitse
# 201 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetOneBeamOff
# 202 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 203 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_TEMP_1
	goto VermilionCity_Gym_EventScript_TrashCan_1

VermilionCity_Gym_EventScript_TrashCan_10:
# 181 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_SecondLockOpened
# 182 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	closemessage
# 183 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOff
# 184 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 185 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 186 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	waitse
# 187 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES
	goto VermilionCity_Gym_EventScript_TrashCan_9


VermilionCity_Gym_EventScript_LtSurge::
# 213 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 214 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_LT_SURGE, VermilionCity_Gym_Text_LtSurgeIntro, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
# 215 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM34_FROM_SURGE, VermilionCity_Gym_EventScript_LtSurge_2
VermilionCity_Gym_EventScript_LtSurge_1:
# 218 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_LtSurgePostBattle
	release_end

VermilionCity_Gym_EventScript_LtSurge_2:
# 216 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GiveTM34
	goto VermilionCity_Gym_EventScript_LtSurge_1


VermilionCity_Gym_EventScript_DefeatedLtSurge::
# 223 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 1
# 224 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_HM05, VermilionCity_Gym_EventScript_DefeatedLtSurge_2
VermilionCity_Gym_EventScript_DefeatedLtSurge_1:
# 227 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_LT_SURGE_JOURNAL
# 228 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_LT_SURGE
# 229 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE03_GET
# 230 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 3
# 231 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GiveTM34
	end

VermilionCity_Gym_EventScript_DefeatedLtSurge_2:
# 225 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
	goto VermilionCity_Gym_EventScript_DefeatedLtSurge_1


VermilionCity_Gym_EventScript_GiveTM34::
# 236 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainThunderBadgeTakeThis
	checkitemspace ITEM_TM34
# 0 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VermilionCity_Gym_EventScript_GiveTM34_2
# 241 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	giveitem_msg VermilionCity_Gym_Text_ReceivedTM34FromLtSurge, ITEM_TM34
# 242 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM34_FROM_SURGE
# 243 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainTM34
	release_end

VermilionCity_Gym_EventScript_GiveTM34_2:
# 238 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_MakeRoomInYourBag
	release_end


VermilionCity_Gym_EventScript_Dwayne::
# 248 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_DWAYNE, VermilionCity_Gym_Text_DwayneIntro, VermilionCity_Gym_Text_DwayneDefeat
# 249 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 4
# 250 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
	end


VermilionCity_Gym_EventScript_Baily::
# 255 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_ENGINEER_BAILY, VermilionCity_Gym_Text_BailyIntro, VermilionCity_Gym_Text_BailyDefeat
# 256 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_BailyPostBattle, MSGBOX_AUTOCLOSE
	end


VermilionCity_Gym_EventScript_Tucker::
# 261 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_TUCKER, VermilionCity_Gym_Text_TuckerIntro, VermilionCity_Gym_Text_TuckerDefeat, VermilionCity_Gym_EventScript_DefeatedTucker
# 262 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 3
# 263 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_TuckerPostBattle, MSGBOX_AUTOCLOSE
	end


VermilionCity_Gym_EventScript_DefeatedTucker::
# 268 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 2
	release_end


VermilionCity_Gym_EventScript_GymGuy::
# 273 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lock_faceplayer
# 274 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LT_SURGE, VermilionCity_Gym_EventScript_GymGuy_2
# 278 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyAdvice
	release_end

VermilionCity_Gym_EventScript_GymGuy_2:
# 275 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyPostVictory
	release_end


VermilionCity_Gym_EventScript_GymStatue::
# 283 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 284 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, VermilionCity_Gym_EventScript_GymStatue_2
# 287 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatue
VermilionCity_Gym_EventScript_GymStatue_1:
# 289 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
	end

VermilionCity_Gym_EventScript_GymStatue_2:
# 285 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatuePlayerWon
	goto VermilionCity_Gym_EventScript_GymStatue_1


VermilionCity_Gym_Text_LtSurgeIntro::
# 293 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Hey, kid! What do you think you're\n"
	.string "doing here?\p"
	.string "You won't live long in combat!\n"
	.string "Not with your puny power!\p"
	.string "I tell you, kid, electric POKéMON\n"
	.string "saved me during the war!\p"
	.string "They zapped my enemies into\n"
	.string "paralysis!\p"
	.string "The same as I'll do to you!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

VermilionCity_Gym_Text_LtSurgePostBattle::
# 309 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "A little word of advice, kid!\p"
	.string "Electricity is sure powerful!\p"
	.string "But, it's useless against GROUND-\n"
	.string "type POKéMON!$"

VermilionCity_Gym_Text_ExplainThunderBadgeTakeThis::
# 318 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The THUNDERBADGE cranks up your\n"
	.string "POKéMON's SPEED!\p"
	.string "It also lets your POKéMON FLY\n"
	.string "lightning-quick anytime, kid!\p"
	.string "You're special, kid!\n"
	.string "Take this!$"

VermilionCity_Gym_Text_ReceivedTM34FromLtSurge::
# 329 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM34\n"
	.string "from LT. SURGE.$"

VermilionCity_Gym_Text_ExplainTM34::
# 334 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "TM34 contains SHOCK WAVE!\p"
	.string "Teach it to an ELECTRIC POKéMON!$"

VermilionCity_Gym_Text_MakeRoomInYourBag::
# 340 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Yo, kid, make room in your BAG!$"

VermilionCity_Gym_Text_LtSurgeDefeat::
# 344 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Now that's a shocker!\p"
	.string "You're the real deal, kid!\p"
	.string "Fine, then, take the THUNDERBADGE!$"

VermilionCity_Gym_Text_TuckerIntro::
# 352 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "When I was in the Army, LT. SURGE\n"
	.string "was my strict CO.\p"
	.string "He was a hard taskmaster.$"

VermilionCity_Gym_Text_TuckerDefeat::
# 359 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Stop!\n"
	.string "You're very good!$"

VermilionCity_Gym_Text_TuckerPostBattle::
# 364 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "It's not easy opening that door.\p"
	.string "LT. SURGE was always famous for\n"
	.string "his cautious nature in the Army.$"

VermilionCity_Gym_Text_BailyIntro::
# 371 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "I'm a lightweight, but I'm good\n"
	.string "with electricity!\p"
	.string "That's why I joined this GYM.$"

VermilionCity_Gym_Text_BailyDefeat::
# 378 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Fried!$"

VermilionCity_Gym_Text_BailyPostBattle::
# 382 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Okay, I'll talk!\p"
	.string "LT. SURGE said he hid door\n"
	.string "switches inside something.$"

VermilionCity_Gym_Text_DwayneIntro::
# 389 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "This is no place for kids!\n"
	.string "Not even if you're good!$"

VermilionCity_Gym_Text_DwayneDefeat::
# 394 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Wow!\n"
	.string "Surprised me!$"

VermilionCity_Gym_Text_DwaynePostBattle::
# 399 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE installed the traps in\n"
	.string "the GYM himself.\p"
	.string "He set up double locks everywhere.\n"
	.string "Let me give you a hint.\p"
	.string "When you open the first lock, the\n"
	.string "second lock is right next to it.$"

VermilionCity_Gym_Text_GymGuyAdvice::
# 410 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
	.string "Champ in the making!\p"
	.string "LT. SURGE has a nickname.\p"
	.string "People refer to him as the\n"
	.string "Lightning American!\p"
	.string "He's an expert on electric\n"
	.string "POKéMON.\p"
	.string "BIRD/WATER-type POKéMON match\n"
	.string "poorly against the ELECTRIC type.\p"
	.string "Beware of paralysis, too.\p"
	.string "LT. SURGE is very cautious.\p"
	.string "He's locked himself in, so it won't\n"
	.string "be easy getting to him.$"

VermilionCity_Gym_Text_GymGuyPostVictory::
# 433 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Whew!\n"
	.string "That match was electric!$"

VermilionCity_Gym_Text_GymStatue::
# 438 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "VERMILION POKéMON GYM\n"
	.string "LEADER: LT. SURGE\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

VermilionCity_Gym_Text_GymStatuePlayerWon::
# 446 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "VERMILION POKéMON GYM\n"
	.string "LEADER: LT. SURGE\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

VermilionCity_Gym_Text_NopeOnlyTrashHere::
# 454 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Nope!\n"
	.string "There's only trash here.$"

VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened::
# 459 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Hey! There's a switch under the\n"
	.string "trash! Turn it on!\p"
	.string "The first electric lock opened!$"

VermilionCity_Gym_Text_SecondLockOpened::
# 466 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The second electric lock opened!\n"
	.string "The motorized door opened!$"

VermilionCity_Gym_Text_OnlyTrashLocksWereReset::
# 471 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Nope!\n"
	.string "There's only trash here.\p"
	.string "Hey!\n"
	.string "The electric locks were reset!$"
