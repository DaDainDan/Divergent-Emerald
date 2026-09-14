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


MossdeepCity_Gym_EventScript_Tate::
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, MossdeepCity_Gym_EventScript_Tate_3
MossdeepCity_Gym_EventScript_Tate_1:
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLiza
	end

MossdeepCity_Gym_EventScript_Tate_2:
# 32 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TATE, MossdeepCity_Gym_Text_TatePreRematch, MossdeepCity_Gym_Text_TateRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons
# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TatePostRematch, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Tate_3:
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_BRAWLY_2
	goto_if 1, MossdeepCity_Gym_EventScript_Tate_2
	goto MossdeepCity_Gym_EventScript_Tate_1


MossdeepCity_Gym_EventScript_Liza::
# 41 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, MossdeepCity_Gym_EventScript_Liza_3
MossdeepCity_Gym_EventScript_Liza_1:
# 46 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLiza
	end

MossdeepCity_Gym_EventScript_Liza_2:
# 42 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LIZA, MossdeepCity_Gym_Text_LizaPreRematch, MossdeepCity_Gym_Text_LizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_LizaPostRematch, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Liza_3:
# 41 "data/maps/MossdeepCity_Gym/scripts.pory"
	checktrainerflag TRAINER_BRAWLY_2
	goto_if 1, MossdeepCity_Gym_EventScript_Liza_2
	goto MossdeepCity_Gym_EventScript_Liza_1


MossdeepCity_Gym_EventScript_TateAndLiza::
# 51 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLiza_2
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_DIVE, MossdeepCity_Gym_EventScript_TateAndLiza_5
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
	release_end

MossdeepCity_Gym_EventScript_TateAndLiza_2:
# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_TATE_LIZA_FINAL, MossdeepCity_Gym_EventScript_TateAndLiza_8
# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPreRematch, MSGBOX_DEFAULT
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_TateAndLiza_5:
	giveitem ITEM_HM_DIVE
# 0 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLiza_11
MossdeepCity_Gym_EventScript_TateAndLiza_10:
# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
	release_end

MossdeepCity_Gym_EventScript_TateAndLiza_8:
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_TateAndLiza_11:
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MossdeepCity_Gym_EventScript_TateAndLiza_10


MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
	giveitem ITEM_HM_DIVE
# 0 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLizaDefeated_2
MossdeepCity_Gym_EventScript_TateAndLizaDefeated_1:
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
	release_end

MossdeepCity_Gym_EventScript_TateAndLizaDefeated_2:
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_BagIsFull
	goto MossdeepCity_Gym_EventScript_TateAndLizaDefeated_1


MossdeepCity_Gym_EventScript_Switch1::
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_Switch1_2
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
MossdeepCity_Gym_EventScript_Switch1_1:
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch1_2:
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_Switch1_1


MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
	end


MossdeepCity_Gym_EventScript_Switch2::
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_Switch2_2
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
MossdeepCity_Gym_EventScript_Switch2_1:
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch2_2:
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_Switch2_1


MossdeepCity_Gym_EventScript_Switch3::
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_Switch3_2
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
MossdeepCity_Gym_EventScript_Switch3_1:
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch3_2:
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_Switch3_1


MossdeepCity_Gym_EventScript_Switch4::
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_Switch4_2
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
MossdeepCity_Gym_EventScript_Switch4_1:
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch4_2:
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_Switch4_1


MossdeepCity_Gym_EventScript_WarpToEntrance::
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
	end


MossdeepCity_Gym_EventScript_Preston::
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Virgil::
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Blake::
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Hannah::
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Samantha::
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Maura::
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Sylvia::
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Nate::
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Macey::
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Clifford::
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Nicholas::
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_Kathleen::
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_Gym_EventScript_GymGuide::
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock_faceplayer
# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROCK_TOMB, MossdeepCity_Gym_EventScript_GymGuide_2
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuide_3
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
MossdeepCity_Gym_EventScript_GymGuide_1:
	release_end

MossdeepCity_Gym_EventScript_GymGuide_2:
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	goto MossdeepCity_Gym_EventScript_GymGuide_1

MossdeepCity_Gym_EventScript_GymGuide_3:
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, MossdeepCity_Gym_EventScript_GymGuide_7
	goto MossdeepCity_Gym_EventScript_GymGuide_1

MossdeepCity_Gym_EventScript_GymGuide_7:
	giveitem ITEM_TM_CALM_MIND
# 0 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_Gym_EventScript_GymGuide_10
MossdeepCity_Gym_EventScript_GymGuide_9:
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
	goto MossdeepCity_Gym_EventScript_GymGuide_1

MossdeepCity_Gym_EventScript_GymGuide_10:
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MossdeepCity_Gym_EventScript_GymGuide_9


# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
	step_end

MossdeepCity_Gym_EventScript_LeftGymStatue::
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
	end


MossdeepCity_Gym_EventScript_RightGymStatue::
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
	end


MossdeepCity_Gym_EventScript_GymStatue::
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatue_2
# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
MossdeepCity_Gym_EventScript_GymStatue_1:
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
	end

MossdeepCity_Gym_EventScript_GymStatue_2:
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	goto MossdeepCity_Gym_EventScript_GymStatue_1


MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8007, 0
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ActivateSwitch
	end


MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8007, 1
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ActivateSwitch
	end


MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8007, 2
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ActivateSwitch
	end


MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8007, 3
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ActivateSwitch
	end


MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8007, 4
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ActivateSwitch
	end


MossdeepCity_Gym_EventScript_ActivateSwitch::
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
	switch VAR_0x8007
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 0, MossdeepCity_Gym_EventScript_ActivateSwitch_3
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 1, MossdeepCity_Gym_EventScript_ActivateSwitch_4
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 2, MossdeepCity_Gym_EventScript_ActivateSwitch_5
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 3, MossdeepCity_Gym_EventScript_ActivateSwitch_6
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 4, MossdeepCity_Gym_EventScript_ActivateSwitch_7
MossdeepCity_Gym_EventScript_ActivateSwitch_1:
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_ActivateSwitch_3:
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
	goto MossdeepCity_Gym_EventScript_ActivateSwitch_1

MossdeepCity_Gym_EventScript_ActivateSwitch_4:
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
	goto MossdeepCity_Gym_EventScript_ActivateSwitch_1

MossdeepCity_Gym_EventScript_ActivateSwitch_5:
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
	goto MossdeepCity_Gym_EventScript_ActivateSwitch_1

MossdeepCity_Gym_EventScript_ActivateSwitch_6:
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
	goto MossdeepCity_Gym_EventScript_ActivateSwitch_1

MossdeepCity_Gym_EventScript_ActivateSwitch_7:
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
	goto MossdeepCity_Gym_EventScript_ActivateSwitch_1


MossdeepCity_Gym_Text_GymGuideAdvice::
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
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
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
	.string "You're one great TRAINER!$"

MossdeepCity_Gym_Text_PrestonIntro::
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
	.string "spirit! The weak-spirited will never win!$"

MossdeepCity_Gym_Text_PrestonDefeat::
# 403 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
	.string "I must temper my spirit again!$"

MossdeepCity_Gym_Text_PrestonPostBattle::
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
	.string "That's my warning to you.$"

MossdeepCity_Gym_Text_VirgilIntro::
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"

MossdeepCity_Gym_Text_VirgilDefeat::
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"

MossdeepCity_Gym_Text_VirgilPostBattle::
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
	.string "then our GYM LEADERS are them!\p"
	.string "However, you may be even more talented\n"
	.string "than them…$"

MossdeepCity_Gym_Text_BlakeIntro::
# 429 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
	.string "BALL telekinetically!\p"
	.string "Wrooooooooaaaar!\n"
	.string "… … … … … … …\p"
	.string "Sometimes, I'm out of sync…$"

MossdeepCity_Gym_Text_BlakeDefeat::
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My POKéMON battling skills are out\n"
	.string "of sync, too!$"

MossdeepCity_Gym_Text_BlakePostBattle::
# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
	.string "psychically. But this dust bunny…\p"
	.string "Whoooooooooooooooh!\n"
	.string "… … … … … …\p"
	.string "No, I'm not cheating!\n"
	.string "I didn't blow on it! Honestly!$"

MossdeepCity_Gym_Text_HannahIntro::
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
	.string "on yourself.\p"
	.string "It's not that you're weak--I'm just\n"
	.string "too strong!$"

MossdeepCity_Gym_Text_HannahDefeat::
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"

MossdeepCity_Gym_Text_HannahPostBattle::
# 467 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
	.string "losing. I just need to train harder.\p"
	.string "Positive thinking--that's my strong\n"
	.string "point!$"

MossdeepCity_Gym_Text_SamanthaIntro::
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
	.string "I see your future…\p"
	.string "If you can beat me, I will tell you\n"
	.string "your future!$"

MossdeepCity_Gym_Text_SamanthaDefeat::
# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"

MossdeepCity_Gym_Text_SamanthaPostBattle::
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
	.string "battle with our GYM LEADERS…\p"
	.string "The result…\n"
	.string "You won't hear it from me!$"

MossdeepCity_Gym_Text_MauraIntro::
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
	.string "What you have experienced…\p"
	.string "Come at me with everything you've\n"
	.string "learned!$"

MossdeepCity_Gym_Text_MauraDefeat::
# 503 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"

MossdeepCity_Gym_Text_MauraPostBattle::
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
	.string "worked diligently.\p"
	.string "For those who lazed idly, there is\n"
	.string "only despair at the end.\p"
	.string "What goes around comes around…$"

MossdeepCity_Gym_Text_SylviaIntro::
# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
	.string "this battle!$"

MossdeepCity_Gym_Text_SylviaDefeat::
# 522 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
	.string "It horrifies me…$"

MossdeepCity_Gym_Text_SylviaPostBattle::
# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
	.string "It won't be my fault if something\n"
	.string "horrible befalls you…$"

MossdeepCity_Gym_Text_NateIntro::
# 534 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
	.string "You need me to show you how tenacious\n"
	.string "the PSYCHIC type can be.$"

MossdeepCity_Gym_Text_NateDefeat::
# 541 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
	.string "Your battle style is fantastic!$"

MossdeepCity_Gym_Text_NatePostBattle::
# 546 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
	.string "however b-badly.$"

MossdeepCity_Gym_Text_KathleenIntro::
# 551 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
	.string "horrifying time!$"

MossdeepCity_Gym_Text_KathleenDefeat::
# 556 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"

MossdeepCity_Gym_Text_KathleenPostBattle::
# 560 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
	.string "Get away from me quickly!$"

MossdeepCity_Gym_Text_CliffordIntro::
# 565 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
	.string "you not patronize me.$"

MossdeepCity_Gym_Text_CliffordDefeat::
# 570 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
	.string "of youth!$"

MossdeepCity_Gym_Text_CliffordPostBattle::
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
	.string "your youthful energy.$"

MossdeepCity_Gym_Text_MaceyIntro::
# 580 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
	.string "Not if I can help it!$"

MossdeepCity_Gym_Text_MaceyDefeat::
# 585 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
	.string "strong?$"

MossdeepCity_Gym_Text_MaceyPostBattle::
# 590 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
	.string "not suitable for the PSYCHIC type!\p"
	.string "The way you battle is somehow brutal!$"

MossdeepCity_Gym_Text_NicholasIntro::
# 597 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
	.string "POKéMON hard-battling power!$"

MossdeepCity_Gym_Text_NicholasDefeat::
# 602 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
	.string "Done in!$"

MossdeepCity_Gym_Text_NicholasPostBattle::
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
	.string "invincible POKéMON power next.$"

MossdeepCity_Gym_Text_TateAndLizaIntro::
# 612 "data/maps/MossdeepCity_Gym/scripts.pory"
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
# 634 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}What?! Our combination…\p"
	.string "{SPEAKER NAME_LIZA}Was shattered!\p"
	.string "{SPEAKER NAME_TATE}It can't be helped. You've won…\p"
	.string "{SPEAKER NAME_LIZA}So, in recognition, take this.$"

MossdeepCity_Gym_Text_ReceivedMindBadge::
# 644 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\n"
	.string "from TATE and LIZA.$"

MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis::
# 649 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}The MIND BADGE enhances the\n"
	.string "SP. ATK and SP. DEF of POKéMON.\p"
	.string "{SPEAKER NAME_LIZA}It also lets you use the HM move\n"
	.string "DIVE outside of battle.\p"
	.string "{SPEAKER NAME_TATE}You should also take this, too.$"

MossdeepCity_Gym_Text_ExplainCalmMind::
# 659 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}That TM04 contains…\p"
	.string "{SPEAKER NAME_LIZA}CALM MIND!\p"
	.string "{SPEAKER NAME_TATE}It raises SP. ATK and…\p"
	.string "{SPEAKER NAME_LIZA}It raises SP. DEF!\p"
	.string "{SPEAKER NAME_TATE}It's a move that's perfect…\p"
	.string "{SPEAKER NAME_LIZA}For PSYCHIC POKéMON!\p"
	.string "… … … … … …$"

MossdeepCity_Gym_Text_RegisteredTateAndLiza::
# 675 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered GYM LEADERS TATE & LIZA\n"
	.string "in the POKéNAV.$"

MossdeepCity_Gym_Text_TateAndLizaPostBattle::
# 680 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}Looks like the bond between you\n"
	.string "and your POKéMON is far stronger than\l"
	.string "the bond that we share as twins.\p"
	.string "{SPEAKER NAME_LIZA}You will become even stronger!\n"
	.string "We've battled you, so we know.$"

MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons::
# 689 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}Hehehe… Were you surprised?\p"
	.string "{SPEAKER NAME_LIZA}That there are two GYM LEADERS?\p"
	.string "{SPEAKER NAME_TATE}Oops, you have only one…\p"
	.string "{SPEAKER NAME_LIZA}POKéMON that can battle.\p"
	.string "{SPEAKER NAME_TATE}We can't battle that way!\p"
	.string "{SPEAKER NAME_LIZA}If you want to challenge us,\n"
	.string "bring some more POKéMON.$"

MossdeepCity_Gym_Text_GymStatue::
# 704 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"

MossdeepCity_Gym_Text_GymStatueCertified::
# 708 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\p"
	.string "LIZA AND TATE'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

MossdeepCity_Gym_Text_TateAndLizaPreRematch::
# 715 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE_AND_LIZA}POKéMON…\p"
	.string "{SPEAKER NAME_TATE}By changing the party's mix…\p"
	.string "{SPEAKER NAME_LIZA}The battle style changes.\p"
	.string "{SPEAKER NAME_TATE_AND_LIZA}But me…\p"
	.string "{SPEAKER NAME_TATE}I'll always be with LIZA!\p"
	.string "{SPEAKER NAME_LIZA}I'll always be with TATE!\p"
	.string "{SPEAKER NAME_TATE}Our combination…\p"
	.string "{SPEAKER NAME_LIZA}We'll show you again and again!$"

MossdeepCity_Gym_Text_TateAndLizaRematchDefeat::
# 733 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}You and your POKéMON…\p"
	.string "{SPEAKER NAME_LIZA}It's as if you were siblings!$"

MossdeepCity_Gym_Text_TateAndLizaPostRematch::
# 739 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}You can knock us down,\n"
	.string "but we'll never stay down!\p"
	.string "{SPEAKER NAME_LIZA}Because the two of us,\n"
	.string "we always support each other!$"

MossdeepCity_Gym_Text_TatePreRematch::
# 747 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}POKéMON…\n"
	.string "{SPEAKER NAME_TATE}By changing the party's mix…\l"
	.string "{SPEAKER NAME_TATE}But me…\l"
	.string "{SPEAKER NAME_TATE}I'll always be with LIZA!\l"
	.string "{SPEAKER NAME_TATE}Our combination…$"

MossdeepCity_Gym_Text_TateRematchDefeat::
# 755 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}You and your POKéMON…\n"
	.string "{SPEAKER NAME_LIZA}It's as if you were siblings!$"

MossdeepCity_Gym_Text_TatePostRematch::
# 760 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE}You can knock us down,\n"
	.string "but we'll never stay down!$"

MossdeepCity_Gym_Text_LizaPreRematch::
# 765 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_LIZA}POKéMON…\p"
	.string "{SPEAKER NAME_LIZA}The battle style changes.\p"
	.string "{SPEAKER NAME_LIZA}But me…\p"
	.string "{SPEAKER NAME_LIZA}I'll always be with TATE!\p"
	.string "{SPEAKER NAME_LIZA}We'll show you again and again!$"

MossdeepCity_Gym_Text_LizaRematchDefeat::
# 777 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_LIZA}It's as if you were siblings!$"

MossdeepCity_Gym_Text_LizaPostRematch::
# 781 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_LIZA}Because the two of us,\n"
	.string "we always support each other!$"

MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons::
# 786 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_TATE_AND_LIZA}You're back again…\p"
	.string "{SPEAKER NAME_TATE_AND_LIZA}To give us a rematch.\p"
	.string "{SPEAKER NAME_TATE}But…\p"
	.string "{SPEAKER NAME_LIZA}For our match…\p"
	.string "{SPEAKER NAME_TATE_AND_LIZA}You brought just one POKéMON!\p"
	.string "{SPEAKER NAME_TATE}We need you to bring at least…\p"
	.string "{SPEAKER NAME_LIZA}Two POKéMON when you come back.$"
