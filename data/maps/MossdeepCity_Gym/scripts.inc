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
	setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 63 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 65 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 68 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 69 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
	giveitem ITEM_TM_CALM_MIND
# 0 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLizaDefeated_2
MossdeepCity_Gym_EventScript_TateAndLizaDefeated_1:
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
	release_end

MossdeepCity_Gym_EventScript_TateAndLizaDefeated_2:
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_BagIsFull
	goto MossdeepCity_Gym_EventScript_TateAndLizaDefeated_1


MossdeepCity_Gym_EventScript_Switch1::
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_Switch1_2
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
MossdeepCity_Gym_EventScript_Switch1_1:
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch1_2:
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_Switch1_1


MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
	end


MossdeepCity_Gym_EventScript_Switch2::
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_Switch2_2
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
MossdeepCity_Gym_EventScript_Switch2_1:
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch2_2:
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_Switch2_1


MossdeepCity_Gym_EventScript_Switch3::
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_Switch3_2
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
MossdeepCity_Gym_EventScript_Switch3_1:
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch3_2:
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_Switch3_1


MossdeepCity_Gym_EventScript_Switch4::
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_Switch4_2
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
MossdeepCity_Gym_EventScript_Switch4_1:
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch4_2:
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_Switch4_1


MossdeepCity_Gym_EventScript_WarpToEntrance::
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
	end


MossdeepCity_Gym_EventScript_Preston::
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Virgil::
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Blake::
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Hannah::
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Samantha::
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Maura::
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Sylvia::
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Nate::
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Macey::
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Clifford::
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Nicholas::
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Kathleen::
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_GymGuide::
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock_faceplayer
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuide_2
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release_end

MossdeepCity_Gym_EventScript_GymGuide_2:
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release_end


# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
	step_end

MossdeepCity_Gym_EventScript_LeftGymStatue::
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
	end


MossdeepCity_Gym_EventScript_RightGymStatue::
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
	end


MossdeepCity_Gym_EventScript_GymStatue::
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatue_2
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
MossdeepCity_Gym_EventScript_GymStatue_1:
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
	end

MossdeepCity_Gym_EventScript_GymStatue_2:
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	goto MossdeepCity_Gym_EventScript_GymStatue_1


MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8007, 0
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ActivateSwitch
	end


MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8007, 1
# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ActivateSwitch
	end


MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8007, 2
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ActivateSwitch
	end


MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8007, 3
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ActivateSwitch
	end


MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8007, 4
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ActivateSwitch
	end


MossdeepCity_Gym_EventScript_ActivateSwitch::
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
	switch VAR_0x8007
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 0, MossdeepCity_Gym_EventScript_ActivateSwitch_3
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 1, MossdeepCity_Gym_EventScript_ActivateSwitch_4
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 2, MossdeepCity_Gym_EventScript_ActivateSwitch_5
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 3, MossdeepCity_Gym_EventScript_ActivateSwitch_6
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 4, MossdeepCity_Gym_EventScript_ActivateSwitch_7
MossdeepCity_Gym_EventScript_ActivateSwitch_1:
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_ActivateSwitch_3:
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
	goto MossdeepCity_Gym_EventScript_ActivateSwitch_1

MossdeepCity_Gym_EventScript_ActivateSwitch_4:
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
	goto MossdeepCity_Gym_EventScript_ActivateSwitch_1

MossdeepCity_Gym_EventScript_ActivateSwitch_5:
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
	goto MossdeepCity_Gym_EventScript_ActivateSwitch_1

MossdeepCity_Gym_EventScript_ActivateSwitch_6:
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
	goto MossdeepCity_Gym_EventScript_ActivateSwitch_1

MossdeepCity_Gym_EventScript_ActivateSwitch_7:
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
	goto MossdeepCity_Gym_EventScript_ActivateSwitch_1


MossdeepCity_Gym_Text_GymGuideAdvice::
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
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
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
	.string "You're one great TRAINER!$"

MossdeepCity_Gym_Text_PrestonIntro::
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
	.string "spirit! The weak-spirited will never win!$"

MossdeepCity_Gym_Text_PrestonDefeat::
# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
	.string "I must temper my spirit again!$"

MossdeepCity_Gym_Text_PrestonPostBattle::
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
	.string "That's my warning to you.$"

MossdeepCity_Gym_Text_VirgilIntro::
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"

MossdeepCity_Gym_Text_VirgilDefeat::
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"

MossdeepCity_Gym_Text_VirgilPostBattle::
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
	.string "then our GYM LEADERS are them!\p"
	.string "However, you may be even more talented\n"
	.string "than them…$"

MossdeepCity_Gym_Text_BlakeIntro::
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
	.string "BALL telekinetically!\p"
	.string "Wrooooooooaaaar!\n"
	.string "… … … … … … …\p"
	.string "Sometimes, I'm out of sync…$"

MossdeepCity_Gym_Text_BlakeDefeat::
# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My POKéMON battling skills are out\n"
	.string "of sync, too!$"

MossdeepCity_Gym_Text_BlakePostBattle::
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
	.string "psychically. But this dust bunny…\p"
	.string "Whoooooooooooooooh!\n"
	.string "… … … … … …\p"
	.string "No, I'm not cheating!\n"
	.string "I didn't blow on it! Honestly!$"

MossdeepCity_Gym_Text_HannahIntro::
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
	.string "on yourself.\p"
	.string "It's not that you're weak--I'm just\n"
	.string "too strong!$"

MossdeepCity_Gym_Text_HannahDefeat::
# 428 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"

MossdeepCity_Gym_Text_HannahPostBattle::
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
	.string "losing. I just need to train harder.\p"
	.string "Positive thinking--that's my strong\n"
	.string "point!$"

MossdeepCity_Gym_Text_SamanthaIntro::
# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
	.string "I see your future…\p"
	.string "If you can beat me, I will tell you\n"
	.string "your future!$"

MossdeepCity_Gym_Text_SamanthaDefeat::
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"

MossdeepCity_Gym_Text_SamanthaPostBattle::
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
	.string "battle with our GYM LEADERS…\p"
	.string "The result…\n"
	.string "You won't hear it from me!$"

MossdeepCity_Gym_Text_MauraIntro::
# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
	.string "What you have experienced…\p"
	.string "Come at me with everything you've\n"
	.string "learned!$"

MossdeepCity_Gym_Text_MauraDefeat::
# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"

MossdeepCity_Gym_Text_MauraPostBattle::
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
	.string "worked diligently.\p"
	.string "For those who lazed idly, there is\n"
	.string "only despair at the end.\p"
	.string "What goes around comes around…$"

MossdeepCity_Gym_Text_SylviaIntro::
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
	.string "this battle!$"

MossdeepCity_Gym_Text_SylviaDefeat::
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
	.string "It horrifies me…$"

MossdeepCity_Gym_Text_SylviaPostBattle::
# 492 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
	.string "It won't be my fault if something\n"
	.string "horrible befalls you…$"

MossdeepCity_Gym_Text_NateIntro::
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
	.string "You need me to show you how tenacious\n"
	.string "the PSYCHIC type can be.$"

MossdeepCity_Gym_Text_NateDefeat::
# 506 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
	.string "Your battle style is fantastic!$"

MossdeepCity_Gym_Text_NatePostBattle::
# 511 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
	.string "however b-badly.$"

MossdeepCity_Gym_Text_KathleenIntro::
# 516 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
	.string "horrifying time!$"

MossdeepCity_Gym_Text_KathleenDefeat::
# 521 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"

MossdeepCity_Gym_Text_KathleenPostBattle::
# 525 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
	.string "Get away from me quickly!$"

MossdeepCity_Gym_Text_CliffordIntro::
# 530 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
	.string "you not patronize me.$"

MossdeepCity_Gym_Text_CliffordDefeat::
# 535 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
	.string "of youth!$"

MossdeepCity_Gym_Text_CliffordPostBattle::
# 540 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
	.string "your youthful energy.$"

MossdeepCity_Gym_Text_MaceyIntro::
# 545 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
	.string "Not if I can help it!$"

MossdeepCity_Gym_Text_MaceyDefeat::
# 550 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
	.string "strong?$"

MossdeepCity_Gym_Text_MaceyPostBattle::
# 555 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
	.string "not suitable for the PSYCHIC type!\p"
	.string "The way you battle is somehow brutal!$"

MossdeepCity_Gym_Text_NicholasIntro::
# 562 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
	.string "POKéMON hard-battling power!$"

MossdeepCity_Gym_Text_NicholasDefeat::
# 567 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
	.string "Done in!$"

MossdeepCity_Gym_Text_NicholasPostBattle::
# 572 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
	.string "invincible POKéMON power next.$"

MossdeepCity_Gym_Text_TateAndLizaIntro::
# 577 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}Hehehe… Were you surprised?\p"
	.string "{SPEAKER NAME_LIZA}Fufufu… Were you surprised?\p"
	.string "{SPEAKER NAME_TATE_AND_LIZA}That there are two GYM LEADERS?\p"
	.string "{SPEAKER NAME_TATE_AND_LIZA}We're twins!\p"
	.string "{SPEAKER NAME_TATE}We don't need to talk because…\p"
	.string "{SPEAKER NAME_LIZA}We can each determine what…\p"
	.string "{SPEAKER NAME_TATE}The other is thinking…\p"
	.string "{SPEAKER NAME_LIZA}All in our minds!\p"
	.string "{SPEAKER NAME_TATE}This combination of ours…\p"
	.string "{SPEAKER NAME_LIZA}Can you beat it?$"

MossdeepCity_Gym_Text_TateAndLizaDefeat::
# 599 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}What?! Our combination…\p"
	.string "{SPEAKER NAME_LIZA}Was shattered!\p"
	.string "{SPEAKER NAME_TATE}It can't be helped. You've won…\p"
	.string "{SPEAKER NAME_LIZA}So, in recognition, take this.$"

MossdeepCity_Gym_Text_ReceivedMindBadge::
# 609 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\n"
	.string "from TATE and LIZA.$"

MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis::
# 614 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}The MIND BADGE enhances the\n"
	.string "SP. ATK and SP. DEF of POKéMON.\p"
	.string "{SPEAKER NAME_LIZA}It also lets you use the HM move\n"
	.string "DIVE outside of battle.\p"
	.string "{SPEAKER NAME_TATE}You should also take this, too.$"

MossdeepCity_Gym_Text_ExplainCalmMind::
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}That TM04 contains…\p"
	.string "{SPEAKER NAME_LIZA}CALM MIND!\p"
	.string "{SPEAKER NAME_TATE}It raises SP. ATK and…\p"
	.string "{SPEAKER NAME_LIZA}It raises SP. DEF!\p"
	.string "{SPEAKER NAME_TATE}It's a move that's perfect…\p"
	.string "{SPEAKER NAME_LIZA}For PSYCHIC POKéMON!\p"
	.string "… … … … … …$"

MossdeepCity_Gym_Text_RegisteredTateAndLiza::
# 640 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered GYM LEADERS TATE & LIZA\n"
	.string "in the POKéNAV.$"

MossdeepCity_Gym_Text_TateAndLizaPostBattle::
# 645 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}Looks like the bond between you\n"
	.string "and your POKéMON is far stronger than\l"
	.string "the bond that we share as twins.\p"
	.string "{SPEAKER NAME_LIZA}You will become even stronger!\n"
	.string "We've battled you, so we know.$"

MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons::
# 654 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}Hehehe… Were you surprised?\p"
	.string "{SPEAKER NAME_LIZA}That there are two GYM LEADERS?\p"
	.string "{SPEAKER NAME_TATE}Oops, you have only one…\p"
	.string "{SPEAKER NAME_LIZA}POKéMON that can battle.\p"
	.string "{SPEAKER NAME_TATE}We can't battle that way!\p"
	.string "{SPEAKER NAME_LIZA}If you want to challenge us,\n"
	.string "bring some more POKéMON.$"

MossdeepCity_Gym_Text_GymStatue::
# 669 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"

MossdeepCity_Gym_Text_GymStatueCertified::
# 673 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\p"
	.string "LIZA AND TATE'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

MossdeepCity_Gym_Text_TateAndLizaPreRematch::
# 680 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE_AND_LIZA}POKéMON…\p"
	.string "{SPEAKER NAME_TATE}By changing the party's mix…\p"
	.string "{SPEAKER NAME_LIZA}The battle style changes.\p"
	.string "{SPEAKER NAME_TATE_AND_LIZA}But me…\p"
	.string "{SPEAKER NAME_TATE}I'll always be with LIZA!\p"
	.string "{SPEAKER NAME_LIZA}I'll always be with TATE!\p"
	.string "{SPEAKER NAME_TATE}Our combination…\p"
	.string "{SPEAKER NAME_LIZA}We'll show you again and again!$"

MossdeepCity_Gym_Text_TateAndLizaRematchDefeat::
# 698 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}You and your POKéMON…\p"
	.string "{SPEAKER NAME_LIZA}It's as if you were siblings!$"

MossdeepCity_Gym_Text_TateAndLizaPostRematch::
# 704 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}You can knock us down,\n"
	.string "but we'll never stay down!\p"
	.string "{SPEAKER NAME_LIZA}Because the two of us,\n"
	.string "we always support each other!$"

MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons::
# 712 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE_AND_LIZA}You're back again…\p"
	.string "{SPEAKER NAME_TATE_AND_LIZA}To give us a rematch.\p"
	.string "{SPEAKER NAME_TATE}But…\p"
	.string "{SPEAKER NAME_LIZA}For our match…\p"
	.string "{SPEAKER NAME_TATE_AND_LIZA}You brought just one POKéMON!\p"
	.string "{SPEAKER NAME_TATE}We need you to bring at least…\p"
	.string "{SPEAKER NAME_LIZA}Two POKéMON when you come back.$"
