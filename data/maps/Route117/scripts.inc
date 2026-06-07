Route117_MapScripts::
# 5 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route117_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/Route117/scripts.pory"
	goto_if_set FLAG_PENDING_DAYCARE_EGG, Route117_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route117_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_1
# 11 "data/maps/Route117/scripts.pory"
	setflag FLAG_TEMP_2
# 12 "data/maps/Route117/scripts.pory"
	getdaycaregfx VAR_OBJ_GFX_ID_0, VAR_OBJ_GFX_ID_1, VAR_TEMP_0, VAR_TEMP_1
# 13 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/Route117/scripts.pory"
	case 2, Route117_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 15 "data/maps/Route117/scripts.pory"
	case 1, Route117_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
Route117_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

Route117_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
	goto Route117_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route117_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 14 "data/maps/Route117/scripts.pory"
	goto Route117_EventScript_ShowDaycareMon1
	goto Route117_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route117_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 15 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Route117_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


Route117_EventScript_ShowDaycareMon1:
# 23 "data/maps/Route117/scripts.pory"
	special SetDaycareCompatibilityString
# 24 "data/maps/Route117/scripts.pory"
	switch VAR_RESULT
# 25 "data/maps/Route117/scripts.pory"
	case PARENTS_INCOMPATIBLE, Route117_EventScript_ShowDaycareMon1_3
# 30 "data/maps/Route117/scripts.pory"
	case PARENTS_MED_COMPATIBILITY, Route117_EventScript_ShowDaycareMon1_4
# 33 "data/maps/Route117/scripts.pory"
	case PARENTS_MAX_COMPATIBILITY, Route117_EventScript_ShowDaycareMon1_5
Route117_EventScript_ShowDaycareMon1_1:
# 37 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_2
# 38 "data/maps/Route117/scripts.pory"
	clearflag FLAG_TEMP_1
	end

Route117_EventScript_ShowDaycareMon1_3:
# 26 "data/maps/Route117/scripts.pory"
	setobjectmovementtype 25, MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT
# 27 "data/maps/Route117/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT
	goto Route117_EventScript_ShowDaycareMon1_1

Route117_EventScript_ShowDaycareMon1_4:
# 31 "data/maps/Route117/scripts.pory"
	setobjectmovementtype 25, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 32 "data/maps/Route117/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_FACE_DOWN_AND_LEFT
	goto Route117_EventScript_ShowDaycareMon1_1

Route117_EventScript_ShowDaycareMon1_5:
# 34 "data/maps/Route117/scripts.pory"
	setobjectmovementtype 25, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 35 "data/maps/Route117/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	goto Route117_EventScript_ShowDaycareMon1_1


Route117_EventScript_Woman::
# 43 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
	end


Route117_EventScript_LittleBoy::
# 48 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
	end


Route117_EventScript_Girl::
# 53 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
	end


Route117_EventScript_RouteSignVerdanturf::
# 58 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
	end


Route117_EventScript_RouteSignMauville::
# 63 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
	end


Route117_EventScript_DayCareSign::
# 68 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
	end


Route117_EventScript_Isaac::
# 73 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_RegisterIsaac
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route117_EventScript_Isaac_2
# 79 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
	release_end

Route117_EventScript_Isaac_2:
# 75 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 76 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_RegisterIsaac::
# 84 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 85 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 87 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ISAAC_1
	release_end


Route117_EventScript_Lydia::
# 92 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route117_EventScript_Lydia_2
# 98 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
	release_end

Route117_EventScript_Lydia_2:
# 94 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 95 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_RegisterLydia::
# 103 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 104 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 106 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
	release_end


Route117_EventScript_Dylan::
# 111 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route117_EventScript_Dylan_2
# 117 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
	release_end

Route117_EventScript_Dylan_2:
# 113 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 114 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_RegisterDylan::
# 122 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 123 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 124 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 125 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
	release_end


Route117_EventScript_Maria::
# 130 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route117_EventScript_Maria_2
# 136 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
	release_end

Route117_EventScript_Maria_2:
# 132 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 133 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_RegisterMaria::
# 141 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 142 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 143 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 144 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
	release_end


Route117_EventScript_Derek::
# 149 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
# 150 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_Anna::
# 155 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnnaMeg
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route117_EventScript_Anna_2
# 161 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
	release_end

Route117_EventScript_Anna_2:
# 157 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 158 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_RegisterAnnaMeg::
# 166 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 167 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
	release_end


Route117_EventScript_Meg::
# 172 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterAnnaMeg
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route117_EventScript_Meg_2
# 178 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
	release_end

Route117_EventScript_Meg_2:
# 174 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 175 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_Melina::
# 183 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
# 184 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_Brandi::
# 189 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 190 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
	end


Route117_EventScript_Aisha::
# 195 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 196 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
	end


Route117_Text_DayCarePokemonHadNewMove::
# 200 "data/maps/Route117/scripts.pory"
	.string "I left my POKéMON at the DAY CARE.\p"
	.string "When I got it back, it had a new move\n"
	.string "that I didn't teach it.\l"
	.string "I was really, really surprised.$"

Route117_Text_ArentTheseFlowersPretty::
# 208 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
	.string "Aren't these flowers pretty?\p"
	.string "I planted them all!$"

Route117_Text_AirIsTastyHere::
# 215 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"

Route117_Text_RouteSignVerdanturf::
# 219 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
	.string "{LEFT_ARROW} VERDANTURF TOWN$"

Route117_Text_RouteSignMauville::
# 224 "data/maps/Route117/scripts.pory"
	.string "ROUTE 117\n"
	.string "{RIGHT_ARROW} MAUVILLE CITY$"

Route117_Text_DayCareSign::
# 229 "data/maps/Route117/scripts.pory"
	.string "POKéMON DAY CARE\n"
	.string "“Let us raise your POKéMON.”$"
