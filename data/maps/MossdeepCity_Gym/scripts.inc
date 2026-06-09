MossdeepCity_Gym_MapScripts::
# 4 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	end

MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD:
# 10 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_2
MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 14 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_5
MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 18 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_8
MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 22 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_11
MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_10:
	end

MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 11 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 12 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_1

MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 15 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 16 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_4

MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 19 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 20 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_7

MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 23 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 24 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_10


MossdeepCity_Gym_EventScript_TateAndLiza::
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
# 32 "data/maps/MossdeepCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLiza_2
# 38 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, MossdeepCity_Gym_EventScript_TateAndLiza_5
# 46 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
	release_end

MossdeepCity_Gym_EventScript_TateAndLiza_2:
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 35 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_TateAndLiza_5:
	giveitem ITEM_TM_CALM_MIND
# 0 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLiza_8
MossdeepCity_Gym_EventScript_TateAndLiza_7:
# 42 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
	release_end

MossdeepCity_Gym_EventScript_TateAndLiza_8:
# 40 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MossdeepCity_Gym_EventScript_TateAndLiza_7


MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 51 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 52 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 55 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 56 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 63 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 65 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 68 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 69 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
	giveitem ITEM_TM_CALM_MIND
# 0 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLizaDefeated_2
MossdeepCity_Gym_EventScript_TateAndLizaDefeated_1:
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
	release_end

MossdeepCity_Gym_EventScript_TateAndLizaDefeated_2:
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto Common_EventScript_BagIsFull
	goto MossdeepCity_Gym_EventScript_TateAndLizaDefeated_1


MossdeepCity_Gym_EventScript_Switch1::
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_Switch1_2
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
MossdeepCity_Gym_EventScript_Switch1_1:
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch1_2:
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_Switch1_1


MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
	end


MossdeepCity_Gym_EventScript_Switch2::
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_Switch2_2
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
MossdeepCity_Gym_EventScript_Switch2_1:
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch2_2:
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_Switch2_1


MossdeepCity_Gym_EventScript_Switch3::
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_Switch3_2
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
MossdeepCity_Gym_EventScript_Switch3_1:
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch3_2:
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_Switch3_1


MossdeepCity_Gym_EventScript_Switch4::
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_Switch4_2
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
MossdeepCity_Gym_EventScript_Switch4_1:
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch4_2:
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_Switch4_1


MossdeepCity_Gym_EventScript_WarpToEntrance::
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
	end


MossdeepCity_Gym_EventScript_Preston::
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Virgil::
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Blake::
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Hannah::
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Samantha::
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Maura::
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Sylvia::
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Nate::
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Macey::
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Clifford::
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Nicholas::
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Kathleen::
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_GymGuide::
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock_faceplayer
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuide_2
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release_end

MossdeepCity_Gym_EventScript_GymGuide_2:
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release_end


# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
	step_end

MossdeepCity_Gym_EventScript_LeftGymStatue::
# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
	end


MossdeepCity_Gym_EventScript_RightGymStatue::
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
	end


MossdeepCity_Gym_EventScript_GymStatue::
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatue_2
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
MossdeepCity_Gym_EventScript_GymStatue_1:
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
	end

MossdeepCity_Gym_EventScript_GymStatue_2:
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	goto MossdeepCity_Gym_EventScript_GymStatue_1


MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8007, 0
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ActivateSwitch
	end


MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8007, 1
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ActivateSwitch
	end


MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8007, 2
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ActivateSwitch
	end


MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8007, 3
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ActivateSwitch
	end


MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8007, 4
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ActivateSwitch
	end


MossdeepCity_Gym_EventScript_ActivateSwitch::
# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
	switch VAR_0x8007
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 0, MossdeepCity_Gym_EventScript_ActivateSwitch_3
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 1, MossdeepCity_Gym_EventScript_ActivateSwitch_4
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 2, MossdeepCity_Gym_EventScript_ActivateSwitch_5
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 3, MossdeepCity_Gym_EventScript_ActivateSwitch_6
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 4, MossdeepCity_Gym_EventScript_ActivateSwitch_7
MossdeepCity_Gym_EventScript_ActivateSwitch_1:
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_ActivateSwitch_3:
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
	goto MossdeepCity_Gym_EventScript_ActivateSwitch_1

MossdeepCity_Gym_EventScript_ActivateSwitch_4:
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
	goto MossdeepCity_Gym_EventScript_ActivateSwitch_1

MossdeepCity_Gym_EventScript_ActivateSwitch_5:
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
	goto MossdeepCity_Gym_EventScript_ActivateSwitch_1

MossdeepCity_Gym_EventScript_ActivateSwitch_6:
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
	goto MossdeepCity_Gym_EventScript_ActivateSwitch_1

MossdeepCity_Gym_EventScript_ActivateSwitch_7:
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
	goto MossdeepCity_Gym_EventScript_ActivateSwitch_1


MossdeepCity_Gym_Text_GymGuideAdvice::
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
	.string "{PLAYER}?\p"
	.string "The GYM LEADERS here use\n"
	.string "PSYCHIC-type POKéMON.\p"
	.string "If you go up against them with\n"
	.string "FIGHTING- or POISON-type POKéMON,\l"
	.string "they'll inflict horrible damage!\p"
	.string "Plus, they'll come at you with\n"
	.string "outstanding combination attacks.\p"
	.string "If you want to win, you'll need to show\n"
	.string "them how tight you are with your\l"
	.string "POKéMON. Go for it!$"

MossdeepCity_Gym_Text_GymGuidePostVictory::
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
	.string "You're one great TRAINER!$"

MossdeepCity_Gym_Text_PrestonIntro::
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
	.string "spirit! The weak-spirited will never win!$"

MossdeepCity_Gym_Text_PrestonDefeat::
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
	.string "I must temper my spirit again!$"

MossdeepCity_Gym_Text_PrestonPostBattle::
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
	.string "That's my warning to you.$"

MossdeepCity_Gym_Text_VirgilIntro::
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"

MossdeepCity_Gym_Text_VirgilDefeat::
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"

MossdeepCity_Gym_Text_VirgilPostBattle::
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
	.string "then our GYM LEADERS are them!\p"
	.string "However, you may be even more talented\n"
	.string "than them…$"

MossdeepCity_Gym_Text_BlakeIntro::
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
	.string "BALL telekinetically!\p"
	.string "Wrooooooooaaaar!\n"
	.string "… … … … … … …\p"
	.string "Sometimes, I'm out of sync…$"

MossdeepCity_Gym_Text_BlakeDefeat::
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My POKéMON battling skills are out\n"
	.string "of sync, too!$"

MossdeepCity_Gym_Text_BlakePostBattle::
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
	.string "psychically. But this dust bunny…\p"
	.string "Whoooooooooooooooh!\n"
	.string "… … … … … …\p"
	.string "No, I'm not cheating!\n"
	.string "I didn't blow on it! Honestly!$"

MossdeepCity_Gym_Text_HannahIntro::
# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
	.string "on yourself.\p"
	.string "It's not that you're weak--I'm just\n"
	.string "too strong!$"

MossdeepCity_Gym_Text_HannahDefeat::
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"

MossdeepCity_Gym_Text_HannahPostBattle::
# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
	.string "losing. I just need to train harder.\p"
	.string "Positive thinking--that's my strong\n"
	.string "point!$"

MossdeepCity_Gym_Text_SamanthaIntro::
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
	.string "I see your future…\p"
	.string "If you can beat me, I will tell you\n"
	.string "your future!$"

MossdeepCity_Gym_Text_SamanthaDefeat::
# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"

MossdeepCity_Gym_Text_SamanthaPostBattle::
# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
	.string "battle with our GYM LEADERS…\p"
	.string "The result…\n"
	.string "You won't hear it from me!$"

MossdeepCity_Gym_Text_MauraIntro::
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
	.string "What you have experienced…\p"
	.string "Come at me with everything you've\n"
	.string "learned!$"

MossdeepCity_Gym_Text_MauraDefeat::
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"

MossdeepCity_Gym_Text_MauraPostBattle::
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
	.string "worked diligently.\p"
	.string "For those who lazed idly, there is\n"
	.string "only despair at the end.\p"
	.string "What goes around comes around…$"

MossdeepCity_Gym_Text_SylviaIntro::
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
	.string "this battle!$"

MossdeepCity_Gym_Text_SylviaDefeat::
# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
	.string "It horrifies me…$"

MossdeepCity_Gym_Text_SylviaPostBattle::
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
	.string "It won't be my fault if something\n"
	.string "horrible befalls you…$"

MossdeepCity_Gym_Text_NateIntro::
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
	.string "You need me to show you how tenacious\n"
	.string "the PSYCHIC type can be.$"

MossdeepCity_Gym_Text_NateDefeat::
# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
	.string "Your battle style is fantastic!$"

MossdeepCity_Gym_Text_NatePostBattle::
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
	.string "however b-badly.$"

MossdeepCity_Gym_Text_KathleenIntro::
# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
	.string "horrifying time!$"

MossdeepCity_Gym_Text_KathleenDefeat::
# 519 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"

MossdeepCity_Gym_Text_KathleenPostBattle::
# 523 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
	.string "Get away from me quickly!$"

MossdeepCity_Gym_Text_CliffordIntro::
# 528 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
	.string "you not patronize me.$"

MossdeepCity_Gym_Text_CliffordDefeat::
# 533 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
	.string "of youth!$"

MossdeepCity_Gym_Text_CliffordPostBattle::
# 538 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
	.string "your youthful energy.$"

MossdeepCity_Gym_Text_MaceyIntro::
# 543 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
	.string "Not if I can help it!$"

MossdeepCity_Gym_Text_MaceyDefeat::
# 548 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
	.string "strong?$"

MossdeepCity_Gym_Text_MaceyPostBattle::
# 553 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
	.string "not suitable for the PSYCHIC type!\p"
	.string "The way you battle is somehow brutal!$"

MossdeepCity_Gym_Text_NicholasIntro::
# 560 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
	.string "POKéMON hard-battling power!$"

MossdeepCity_Gym_Text_NicholasDefeat::
# 565 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
	.string "Done in!$"

MossdeepCity_Gym_Text_NicholasPostBattle::
# 570 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
	.string "invincible POKéMON power next.$"

MossdeepCity_Gym_Text_TateAndLizaIntro::
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
	.string "LIZA: Fufufu… Were you surprised?\p"
	.string "TATE: That there are two GYM LEADERS?\n"
	.string "LIZA: That there are two GYM LEADERS?\p"
	.string "TATE: We're twins!\n"
	.string "LIZA: We're twins!\p"
	.string "TATE: We don't need to talk because…\n"
	.string "LIZA: We can each determine what…\p"
	.string "TATE: The other is thinking…\n"
	.string "LIZA: All in our minds!\p"
	.string "TATE: This combination of ours…\n"
	.string "LIZA: Can you beat it?$"

MossdeepCity_Gym_Text_TateAndLizaDefeat::
# 596 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: What?! Our combination…\n"
	.string "LIZA: Was shattered!\p"
	.string "TATE: It can't be helped. You've won…\n"
	.string "LIZA: So, in recognition, take this.$"

MossdeepCity_Gym_Text_ReceivedMindBadge::
# 604 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\n"
	.string "from TATE and LIZA.$"

MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis::
# 609 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The MIND BADGE enhances the\n"
	.string "SP. ATK and SP. DEF of POKéMON.\p"
	.string "LIZA: It also lets you use the HM move\n"
	.string "DIVE outside of battle.\p"
	.string "TATE: You should also take this, too.$"

MossdeepCity_Gym_Text_ExplainCalmMind::
# 619 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That TM04 contains…\n"
	.string "LIZA: CALM MIND!\p"
	.string "TATE: It raises SP. ATK and…\n"
	.string "LIZA: It raises SP. DEF!\p"
	.string "TATE: It's a move that's perfect…\n"
	.string "LIZA: For PSYCHIC POKéMON!\p"
	.string "… … … … … …$"

MossdeepCity_Gym_Text_RegisteredTateAndLiza::
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered GYM LEADERS TATE & LIZA\n"
	.string "in the POKéNAV.$"

MossdeepCity_Gym_Text_TateAndLizaPostBattle::
# 637 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Looks like the bond between you\n"
	.string "and your POKéMON is far stronger than\l"
	.string "the bond that we share as twins.\p"
	.string "LIZA: You will become even stronger!\n"
	.string "We've battled you, so we know.$"

MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons::
# 646 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
	.string "LIZA: That there are two GYM LEADERS?\p"
	.string "TATE: Oops, you have only one…\n"
	.string "LIZA: POKéMON that can battle.\p"
	.string "TATE: We can't battle that way!\p"
	.string "LIZA: If you want to challenge us,\n"
	.string "bring some more POKéMON.$"

MossdeepCity_Gym_Text_GymStatue::
# 660 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"

MossdeepCity_Gym_Text_GymStatueCertified::
# 664 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\p"
	.string "LIZA AND TATE'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

MossdeepCity_Gym_Text_TateAndLizaPreRematch::
# 671 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: POKéMON…\n"
	.string "LIZA: POKéMON…\p"
	.string "TATE: By changing the party's mix…\n"
	.string "LIZA: The battle style changes.\p"
	.string "TATE: But me…\n"
	.string "LIZA: But me…\p"
	.string "TATE: I'll always be with LIZA!\n"
	.string "LIZA: I'll always be with TATE!\p"
	.string "TATE: Our combination…\n"
	.string "LIZA: We'll show you again and again!$"

MossdeepCity_Gym_Text_TateAndLizaRematchDefeat::
# 688 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You and your POKéMON…\n"
	.string "LIZA: It's as if you were siblings!$"

MossdeepCity_Gym_Text_TateAndLizaPostRematch::
# 693 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You can knock us down,\n"
	.string "but we'll never stay down!\p"
	.string "LIZA: Because the two of us,\n"
	.string "we always support each other!$"

MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons::
# 701 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You're back again…\n"
	.string "LIZA: You're back again…\p"
	.string "TATE: To give us a rematch.\n"
	.string "LIZA: To give us a rematch.\p"
	.string "TATE: But…\n"
	.string "LIZA: For our match…\p"
	.string "TATE: You brought just one POKéMON!\n"
	.string "LIZA: You brought just one POKéMON!\p"
	.string "TATE: We need you to bring at least…\n"
	.string "LIZA: Two POKéMON when you come back.$"
