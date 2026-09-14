RusturfTunnel_MapScripts::
# 2 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_RUSTURF_TUNNEL_STATE, 2
	goto_if_eq RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_MAGMA_GRUNT, 20, 4
# 6 "data/maps/RusturfTunnel/scripts.pory"
	setobjectmovementtype LOCALID_RUSTURF_MAGMA_GRUNT, MOVEMENT_TYPE_FACE_RIGHT
# 7 "data/maps/RusturfTunnel/scripts.pory"
	setobjectmovementtype LOCALID_RUSTURF_AQUA_GRUNT, MOVEMENT_TYPE_FACE_LEFT
	goto RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

RusturfTunnel_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 13 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
	.2byte 0


RusturfTunnel_EventScript_Wanda::
# 18 "data/maps/RusturfTunnel/scripts.pory"
	lock_faceplayer
# 19 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 20 "data/maps/RusturfTunnel/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


RusturfTunnel_EventScript_WandasBoyfriend::
# 24 "data/maps/RusturfTunnel/scripts.pory"
	lock_faceplayer
# 25 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_WandasBoyfriend_2
# 28 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 29 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
RusturfTunnel_EventScript_WandasBoyfriend_1:
# 31 "data/maps/RusturfTunnel/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return

RusturfTunnel_EventScript_WandasBoyfriend_2:
# 26 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
	goto RusturfTunnel_EventScript_WandasBoyfriend_1


RusturfTunnel_EventScript_ClearTunnelScene::
# 35 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 36 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_TEMP_1
# 37 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_ClearTunnelScene_3
# 41 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_ClearTunnelScene_4
RusturfTunnel_EventScript_ClearTunnelScene_1:
# 44 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 45 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 46 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_ExclamationMark
# 47 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 48 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_Delay48
# 49 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 50 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 51 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_6
# 51 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_6
RusturfTunnel_EventScript_ClearTunnelScene_5:
# 56 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 57 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 58 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 59 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_TEMP_1
# 60 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_ClearTunnelScene_12
# 63 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_ClearTunnelScene_13
# 64 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_ClearTunnelScene_13
RusturfTunnel_EventScript_ClearTunnelScene_10:
# 70 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 71 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 72 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 73 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_15
# 77 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_ClearTunnelScene_Movement_7
# 78 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_EventScript_ClearTunnelScene_Movement_5
# 79 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_8
RusturfTunnel_EventScript_ClearTunnelScene_14:
# 81 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 82 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 83 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end

RusturfTunnel_EventScript_ClearTunnelScene_3:
# 38 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_StepFasterUp
# 39 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 40 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
	goto RusturfTunnel_EventScript_ClearTunnelScene_1

RusturfTunnel_EventScript_ClearTunnelScene_4:
# 42 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_0
	goto RusturfTunnel_EventScript_ClearTunnelScene_1

RusturfTunnel_EventScript_ClearTunnelScene_6:
# 52 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 53 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_WalkRight
# 54 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
	goto RusturfTunnel_EventScript_ClearTunnelScene_5

RusturfTunnel_EventScript_ClearTunnelScene_12:
# 61 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_ClearTunnelScene_Movement_1
# 62 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_2
	goto RusturfTunnel_EventScript_ClearTunnelScene_10

RusturfTunnel_EventScript_ClearTunnelScene_13:
# 65 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_ClearTunnelScene_Movement_3
# 66 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_4
# 67 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 68 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_StepFasterDown
	goto RusturfTunnel_EventScript_ClearTunnelScene_10

RusturfTunnel_EventScript_ClearTunnelScene_15:
# 74 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_EventScript_ClearTunnelScene_Movement_5
# 75 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_6
	goto RusturfTunnel_EventScript_ClearTunnelScene_14


# 87 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 89 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 90 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_right
	step_end

# 93 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 95 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 96 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_up
# 97 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 98 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_right
	step_end

# 101 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 103 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 104 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_down
# 105 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 106 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_right
	step_end

RusturfTunnel_EventScript_TunnelBlockagePos1::
# 110 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


RusturfTunnel_EventScript_TunnelBlockagePos2::
# 115 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
	end


RusturfTunnel_EventScript_TunnelBlockagePos3::
# 120 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
	end


RusturfTunnel_EventScript_AquaGruntBackUp::
# 140 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 141 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 142 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 143 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 144 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_AquaGruntBackUp_Movement_0
# 145 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 146 "data/maps/RusturfTunnel/scripts.pory"
	delay 30
# 147 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WeakWoman, MSGBOX_DEFAULT
# 148 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_HOUNDOUR
# 149 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_RUSTURF_HOUNDOUR
# 150 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_BALL_OPEN
# 151 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_HOUNDOUR, RusturfTunnel_EventScript_AquaGruntBackUp_Movement_1
# 152 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 153 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_HOUNDOUR, CRY_MODE_NORMAL
# 154 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_HandThemOver, MSGBOX_DEFAULT
# 155 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 156 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_HOUNDOUR, Common_Movement_RunRight
# 157 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_M_BITE
# 158 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 159 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_M_BITE
# 160 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_NowLetsSee, MSGBOX_DEFAULT
# 161 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_BALL_OPEN
# 162 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_HOUNDOUR, RusturfTunnel_EventScript_AquaGruntBackUp_Movement_2
# 163 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 164 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_HOUNDOUR
# 165 "data/maps/RusturfTunnel/scripts.pory"
	delay 30
# 166 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_MAGMA_GRUNT, RusturfTunnel_EventScript_AquaGruntBackUp_Movement_3
# 167 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 168 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_AQUA_GRUNT, Common_Movement_StepDown
# 169 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_DontTouchMe, MSGBOX_DEFAULT
# 170 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 171 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end


RusturfTunnel_EventScript_AquaGrunt::
# 176 "data/maps/RusturfTunnel/scripts.pory"
	lock_faceplayer
# 177 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_EventScript_AquaGrunt_Text_0, MSGBOX_DEFAULT
# 179 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_MAGMA_GRUNT, RusturfTunnel_EventScript_AquaGrunt_Movement_0
# 180 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 181 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_0x8003, 1
# 182 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_MagmaGruntEncounter
	end


RusturfTunnel_EventScript_MagmaGrunt::
# 187 "data/maps/RusturfTunnel/scripts.pory"
	lock_faceplayer
# 188 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_0x8003, 0
# 189 "data/maps/RusturfTunnel/scripts.pory"
	goto RusturfTunnel_EventScript_MagmaGruntEncounter
	end


RusturfTunnel_EventScript_MagmaGruntEncounter::
# 194 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 195 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_0
# 196 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_0x8003, 1
	goto_if_eq RusturfTunnel_EventScript_MagmaGruntEncounter_2
# 199 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_MAGMA_GRUNT, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_2
RusturfTunnel_EventScript_MagmaGruntEncounter_1:
	checkplayergender
# 0 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RusturfTunnel_EventScript_MagmaGruntEncounter_6
# 204 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntroFemale, MSGBOX_DEFAULT
RusturfTunnel_EventScript_MagmaGruntEncounter_5:
# 206 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
	checkplayergender
# 0 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RusturfTunnel_EventScript_MagmaGruntEncounter_10
# 210 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_AfterBattleFemale, MSGBOX_DEFAULT
RusturfTunnel_EventScript_MagmaGruntEncounter_9:
# 212 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_3
# 213 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 214 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_MAGMA_GRUNT, Common_Movement_WalkLeft
# 215 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 216 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_0x8003, 1
	goto_if_eq RusturfTunnel_EventScript_MagmaGruntEncounter_14
# 219 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_AQUA_GRUNT, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_5
RusturfTunnel_EventScript_MagmaGruntEncounter_13:
# 221 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 222 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_M_COMET_PUNCH
# 223 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_0x8003, 1
	goto_if_eq RusturfTunnel_EventScript_MagmaGruntEncounter_18
# 226 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_MAGMA_GRUNT, Common_Movement_StepFasterUp
RusturfTunnel_EventScript_MagmaGruntEncounter_17:
# 228 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 229 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Punch, MSGBOX_DEFAULT
# 230 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 231 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_0x8003, 1
	goto_if_eq RusturfTunnel_EventScript_MagmaGruntEncounter_22
# 234 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_7
RusturfTunnel_EventScript_MagmaGruntEncounter_21:
# 236 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_MAGMA_GRUNT, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_8
# 237 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 238 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_MAGMA_GRUNT
# 239 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 240 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_AQUA_GRUNT, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_9
# 241 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepRight
# 242 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 243 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GiveParts, MSGBOX_DEFAULT
# 244 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 245 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 246 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_0x8003, 1
	goto_if_eq RusturfTunnel_EventScript_MagmaGruntEncounter_26
# 249 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_AQUA_GRUNT, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_11
RusturfTunnel_EventScript_MagmaGruntEncounter_25:
# 251 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_12
# 252 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement LOCALID_RUSTURF_AQUA_GRUNT
# 253 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MyNameIs, MSGBOX_DEFAULT
# 254 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 255 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_AQUA_GRUNT, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_13
# 256 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 257 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_AQUA_GRUNT
# 258 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 259 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 260 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 261 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_REGISTER_BIRCH_STATE, 0
	goto_if_eq RusturfTunnel_EventScript_MagmaGruntEncounter_30
RusturfTunnel_EventScript_MagmaGruntEncounter_29:
# 264 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 265 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
	release_end

RusturfTunnel_EventScript_MagmaGruntEncounter_2:
# 197 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_MAGMA_GRUNT, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_1
	goto RusturfTunnel_EventScript_MagmaGruntEncounter_1

RusturfTunnel_EventScript_MagmaGruntEncounter_6:
# 202 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntroMale, MSGBOX_DEFAULT
	goto RusturfTunnel_EventScript_MagmaGruntEncounter_5

RusturfTunnel_EventScript_MagmaGruntEncounter_10:
# 208 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_AfterBattleMale, MSGBOX_DEFAULT
	goto RusturfTunnel_EventScript_MagmaGruntEncounter_9

RusturfTunnel_EventScript_MagmaGruntEncounter_14:
# 217 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_AQUA_GRUNT, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_4
	goto RusturfTunnel_EventScript_MagmaGruntEncounter_13

RusturfTunnel_EventScript_MagmaGruntEncounter_18:
# 224 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_MAGMA_GRUNT, Common_Movement_StepFasterDown
	goto RusturfTunnel_EventScript_MagmaGruntEncounter_17

RusturfTunnel_EventScript_MagmaGruntEncounter_22:
# 232 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_6
	goto RusturfTunnel_EventScript_MagmaGruntEncounter_21

RusturfTunnel_EventScript_MagmaGruntEncounter_26:
# 247 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_AQUA_GRUNT, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_10
	goto RusturfTunnel_EventScript_MagmaGruntEncounter_25

RusturfTunnel_EventScript_MagmaGruntEncounter_30:
# 262 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
	goto RusturfTunnel_EventScript_MagmaGruntEncounter_29


RusturfTunnel_EventScript_Peeko::
# 270 "data/maps/RusturfTunnel/scripts.pory"
	lock_faceplayer
# 271 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 272 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 273 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 274 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
	release_end


RusturfTunnel_EventScript_Grunt::
# 279 "data/maps/RusturfTunnel/scripts.pory"
	lock_faceplayer
# 280 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 281 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro_Old, MSGBOX_DEFAULT
# 282 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 283 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 284 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 285 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 286 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_7
# 287 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_AQUA_GRUNT, RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_8
# 288 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 289 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_AQUA_GRUNT
# 290 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 291 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 292 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_EventScript_Grunt_Movement_0
# 293 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 294 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_Grunt_Movement_1
# 295 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_EventScript_Grunt_Movement_2
# 296 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 297 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 298 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, Common_Movement_FacePlayer
# 299 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 300 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 301 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 302 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 303 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 304 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 305 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 306 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 307 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_Grunt_Movement_3
# 308 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_EventScript_Grunt_Movement_4
# 309 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_EventScript_Grunt_Movement_5
# 310 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 311 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 312 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_PEEKO
# 313 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 314 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 315 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_REGISTER_BIRCH_STATE, 0
	goto_if_eq RusturfTunnel_EventScript_Grunt_2
RusturfTunnel_EventScript_Grunt_1:
# 318 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 319 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
	release_end

RusturfTunnel_EventScript_Grunt_2:
# 316 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
	goto RusturfTunnel_EventScript_Grunt_1


RusturfTunnel_EventScript_Mike::
# 324 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 325 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
	end


# 42 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_0:
# 42 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 42 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_right
	step_end

# 61 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_1:
# 61 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 61 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_right
	step_end

# 62 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_2:
# 62 "data/maps/RusturfTunnel/scripts.pory"
	step_fast_up
# 62 "data/maps/RusturfTunnel/scripts.pory"
	step_fast_up
# 62 "data/maps/RusturfTunnel/scripts.pory"
	run_up
# 62 "data/maps/RusturfTunnel/scripts.pory"
	run_right
	step_end

# 65 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_3:
# 65 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 65 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_left
	step_end

# 66 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_4:
# 66 "data/maps/RusturfTunnel/scripts.pory"
	step_fast_right
# 66 "data/maps/RusturfTunnel/scripts.pory"
	step_fast_right
# 66 "data/maps/RusturfTunnel/scripts.pory"
	run_right
# 66 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_up
	step_end

# 74 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_5:
# 74 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 74 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 74 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 74 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 74 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 74 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 74 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 74 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 74 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 74 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 74 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
	step_end

# 75 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_6:
# 75 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 75 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 75 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 75 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 75 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 75 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 75 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 75 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 75 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 75 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 75 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 75 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
	step_end

# 77 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_7:
# 77 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 77 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_up
# 77 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 77 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 77 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_right
	step_end

# 79 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_8:
# 79 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 79 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 79 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 79 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 79 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 79 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 79 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 79 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 79 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 79 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 79 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 79 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
	step_end

# 144 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp_Movement_0:
# 144 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 144 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 144 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 144 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 144 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 144 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 144 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 144 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
	step_end

# 151 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp_Movement_1:
# 151 "data/maps/RusturfTunnel/scripts.pory"
	exit_pokeball
	step_end

# 162 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp_Movement_2:
# 162 "data/maps/RusturfTunnel/scripts.pory"
	enter_pokeball
	step_end

# 166 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp_Movement_3:
# 166 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 166 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 166 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 166 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 166 "data/maps/RusturfTunnel/scripts.pory"
	step_up
	step_end

# 179 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGrunt_Movement_0:
# 179 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 179 "data/maps/RusturfTunnel/scripts.pory"
	step_up
	step_end

# 195 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_0:
# 195 "data/maps/RusturfTunnel/scripts.pory"
	lock_look
# 195 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 195 "data/maps/RusturfTunnel/scripts.pory"
	run_left
	step_end

# 197 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_1:
# 197 "data/maps/RusturfTunnel/scripts.pory"
	run_up
# 197 "data/maps/RusturfTunnel/scripts.pory"
	run_left
	step_end

# 199 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_2:
# 199 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 199 "data/maps/RusturfTunnel/scripts.pory"
	run_left
	step_end

# 212 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_3:
# 212 "data/maps/RusturfTunnel/scripts.pory"
	lock_look
# 212 "data/maps/RusturfTunnel/scripts.pory"
	creep_left
# 212 "data/maps/RusturfTunnel/scripts.pory"
	creep_left
	step_end

# 217 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_4:
# 217 "data/maps/RusturfTunnel/scripts.pory"
	run_down
# 217 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 217 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 217 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 217 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_up
	step_end

# 219 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_5:
# 219 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 219 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 219 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 219 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_down
	step_end

# 232 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_6:
# 232 "data/maps/RusturfTunnel/scripts.pory"
	face_up
# 232 "data/maps/RusturfTunnel/scripts.pory"
	lock_look
# 232 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 232 "data/maps/RusturfTunnel/scripts.pory"
	unlock_look
# 232 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_left
	step_end

# 234 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_7:
# 234 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 234 "data/maps/RusturfTunnel/scripts.pory"
	lock_look
# 234 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 234 "data/maps/RusturfTunnel/scripts.pory"
	unlock_look
# 234 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_left
	step_end

# 236 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_8:
# 236 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 236 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 236 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 236 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 236 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 236 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 236 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 236 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 236 "data/maps/RusturfTunnel/scripts.pory"
	run_left
	step_end

# 240 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_9:
# 240 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 240 "data/maps/RusturfTunnel/scripts.pory"
	step_left
	step_end

# 247 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_10:
# 247 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 247 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 247 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 247 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 247 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 247 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 247 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 247 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 247 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 247 "data/maps/RusturfTunnel/scripts.pory"
	step_right
	step_end

# 249 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_11:
# 249 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 249 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 249 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 249 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 249 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 249 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 249 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 249 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 249 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 249 "data/maps/RusturfTunnel/scripts.pory"
	step_right
	step_end

# 251 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_12:
# 251 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 251 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 251 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 251 "data/maps/RusturfTunnel/scripts.pory"
	step_left
	step_end

# 255 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_MagmaGruntEncounter_Movement_13:
# 255 "data/maps/RusturfTunnel/scripts.pory"
	step_left
# 255 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 255 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 255 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 255 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 255 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
	step_end

# 292 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_0:
# 292 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 292 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 292 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 292 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 292 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 292 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 292 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
	step_end

# 294 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_1:
# 294 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 294 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_up
	step_end

# 295 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_2:
# 295 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 295 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
	step_end

# 307 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_3:
# 307 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 307 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 307 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 307 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_left
	step_end

# 308 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_4:
# 308 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 308 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 308 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 308 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 308 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 308 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 308 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 308 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 308 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 308 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 308 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
	step_end

# 309 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_5:
# 309 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 309 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 309 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 309 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 309 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 309 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 309 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 309 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 309 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
	step_end

RusturfTunnel_EventScript_AquaGrunt_Text_0:
# 177 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wha… this brat, again?\n"
	.string "Stay out of this…$"

RusturfTunnel_Text_ComeAndGetSome::
# 329 "data/maps/RusturfTunnel/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Stay away from me, freak!\n"
	.string "Come any closer and you'll regret it!$"

RusturfTunnel_Text_WeakWoman::
# 334 "data/maps/RusturfTunnel/scripts.pory"
	.string "{SPEAKER NAME_MAGMA_GRUNT}You should only make threats you can \n"
	.string "keep, AQUA trash.\p"
	.string "Why would TEAM AQUA send a woman to do\n"
	.string "a man's job?\p"
	.string "It's only natural you and your POKéMON \n"
	.string "would be weak.\p"
	.string "{SPEAKER NAME_AQUA_GRUNT}Say that again and I'll cram my fist \n"
	.string "down your throat, you creep!\p"
	.string "{SPEAKER NAME_MAGMA_GRUNT}Hahahahaha! That's cute.$"

RusturfTunnel_Text_HandThemOver::
# 350 "data/maps/RusturfTunnel/scripts.pory"
	.string "{SPEAKER NAME_MAGMA_GRUNT}Now, hand over the goods before I do \n"
	.string "something we'll both regret!\p"
	.string "{SPEAKER NAME_AQUA_GRUNT}Do your worst, you pansy!\n"
	.string "I'm not giving you squat!\p"
	.string "{SPEAKER NAME_MAGMA_GRUNT}Suit yourself, girlie.$"

RusturfTunnel_Text_NowLetsSee::
# 360 "data/maps/RusturfTunnel/scripts.pory"
	.string "{SPEAKER NAME_AQUA_GRUNT}AHHHGGHH! You piece of trash!\n"
	.string "Ahhhgh, damn it…\p"
	.string "{SPEAKER NAME_MAGMA_GRUNT}Why do girls always make things hard?\p"
	.string "You couldn't bring yourself to give up.\n"
	.string "Now, look where it's gotten you.$"

RusturfTunnel_Text_DontTouchMe::
# 370 "data/maps/RusturfTunnel/scripts.pory"
	.string "{SPEAKER NAME_AQUA_GRUNT}Don't touch me, you creep!\n"
	.string "Ah, owww…\p"
	.string "{SPEAKER NAME_MAGMA_GRUNT}Well, what might this be?\p"
	.string "{SPEAKER NAME_AQUA_GRUNT}No, please! I can't let you take that!$"

RusturfTunnel_Text_Punch::
# 379 "data/maps/RusturfTunnel/scripts.pory"
	.string "{SPEAKER NAME_MAGMA_GRUNT}OWW! You sucker-punched me, you hag!\p"
	.string "{SPEAKER NAME_AQUA_GRUNT}Give me back those parts! NOW!\n"
	.string "Before I give you another thing to\l"
	.string "cry about!\p"
	.string "{SPEAKER NAME_MAGMA_GRUNT}Psssh, fine… \n"
	.string "but I won't forget this.\p"
	.string "I'll make sure my powerful friends know \n"
	.string "who you are, and they'll make you wish\l"
	.string "you were never born.\p"
	.string "{SPEAKER NAME_AQUA_GRUNT}GET LOST, YOU COWARD!\p"
	.string "{SPEAKER NAME_MAGMA_GRUNT}Hmmph!$"

RusturfTunnel_Text_GiveParts::
# 398 "data/maps/RusturfTunnel/scripts.pory"
	.string "{SPEAKER NAME_AQUA_GRUNT}Don't say a word.\p"
	.string "I'm giving you these back to settle my \n"
	.string "debt, but don't get the wrong idea.\l"
	.string "This doesn't change a thing.$"

RusturfTunnel_Text_MyNameIs::
# 406 "data/maps/RusturfTunnel/scripts.pory"
	.string "{SPEAKER NAME_AQUA_GRUNT}My name is Steph, by the way…\p"
	.string "Now, stay out of my way.$"

RusturfTunnel_Text_Peeko::
# 412 "data/maps/RusturfTunnel/scripts.pory"
	.string "{SPEAKER NAME_PEEKO}Pii pihyoh!$"

RusturfTunnel_Text_GruntIntro_Old::
# 416 "data/maps/RusturfTunnel/scripts.pory"
	.string "Grah, keelhaul it all!\p"
	.string "That hostage POKéMON turned out to\n"
	.string "be worthless!\p"
	.string "And to think I made a getaway…\n"
	.string "In this tunnel to nowhere!\p"
	.string "Hey! You!\n"
	.string "So you want to battle me?$"

RusturfTunnel_Text_GruntIntroMale::
# 429 "data/maps/RusturfTunnel/scripts.pory"
	.string "Well, what are you, kid? \n"
	.string "Her knight in shining armor?\p"
	.string "You picked the wrong guy to mess with.\n"
	.string "I'll crush you just like I did her!$"

RusturfTunnel_Text_GruntIntroFemale::
# 437 "data/maps/RusturfTunnel/scripts.pory"
	.string "Well, well, another girl trying to\n"
	.string "get in my way?\p"
	.string "This day just gets better and better.\p"
	.string "I should make quicker work of you than\n"
	.string "I did this weakling.$"

RusturfTunnel_Text_GruntDefeat::
# 447 "data/maps/RusturfTunnel/scripts.pory"
	.string "Urrrggh! How could I lose to some brat!?$"

RusturfTunnel_Text_GruntTakePackage::
# 451 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\p"
	.string "The BOSS told me this would be a\n"
	.string "slick-and-easy job to pull.\p"
	.string "All I had to do was steal some package\n"
	.string "from DEVON.\p"
	.string "Tch!\n"
	.string "You want it back that badly, take it!$"

RusturfTunnel_Text_AfterBattleMale::
# 464 "data/maps/RusturfTunnel/scripts.pory"
	.string "How is some barely pubescent brat this\n"
	.string "strong!?\p"
	.string "This has to be some kind of trick.\n"
	.string "Who put you up to this, huh?!$"

RusturfTunnel_Text_AfterBattleFemale::
# 472 "data/maps/RusturfTunnel/scripts.pory"
	.string "I was beaten by a damn girl!?\n"
	.string "This has to be some kind of trick!\p"
	.string "Who put you up to this, huh?!$"

RusturfTunnel_Text_PeekoGladToSeeYouSafe::
# 479 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO!\n"
	.string "Am I glad to see you're safe!$"

RusturfTunnel_Text_ThankYouLetsGoHomePeeko::
# 484 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO owes her life to you!\p"
	.string "They call me MR. BRINEY.\n"
	.string "And, you are?\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
	.string "I sincerely thank you!\p"
	.string "Now, if there's anything that troubles\n"
	.string "you, don't hesitate to tell me!\p"
	.string "You can usually find me in my cottage\n"
	.string "by the sea near PETALBURG WOODS.\p"
	.string "Come, PEEKO, we should make our way\n"
	.string "home.\p"
	.string "{SPEAKER NAME_PEEKO}Pihyoh!$"

RusturfTunnel_Text_WhyCantTheyKeepDigging::
# 508 "data/maps/RusturfTunnel/scripts.pory"
	.string "… …\p"
	.string "Why can't they keep digging?\n"
	.string "Is the bedrock too hard?\p"
	.string "My beloved awaits me in VERDANTURF\n"
	.string "TOWN just beyond here…\p"
	.string "If RUSTBORO and VERDANTURF were\n"
	.string "joined by this tunnel, I could visit\l"
	.string "her every day…\p"
	.string "But this…\n"
	.string "What am I to do?$"

RusturfTunnel_Text_ToGetToVerdanturf::
# 525 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from RUSTBORO to VERDANTURF,\n"
	.string "you need to go to DEWFORD, then pass\l"
	.string "through SLATEPORT and MAUVILLE…$"

RusturfTunnel_Text_YouShatteredBoulderTakeHM::
# 531 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered that boulder\n"
	.string "blocking the way.\p"
	.string "To show you how much I appreciate it,\n"
	.string "I'd like you to have this HM.$"

RusturfTunnel_Text_ExplainStrength::
# 539 "data/maps/RusturfTunnel/scripts.pory"
	.string "That HM contains STRENGTH.\p"
	.string "If a muscular POKéMON were to learn\n"
	.string "that, it would be able to move even\l"
	.string "large boulders.$"

RusturfTunnel_Text_WandaReunion::
# 547 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA!\n"
	.string "Now I can see you anytime!\p"
	.string "{SPEAKER NAME_WANDA}That's…wonderful.\p"
	.string "Please, take some rest at my home.$"

RusturfTunnel_Text_BoyfriendOnOtherSideOfRock::
# 556 "data/maps/RusturfTunnel/scripts.pory"
	.string "On the other side of this rock…\n"
	.string "My boyfriend is there.\p"
	.string "He… He's not just digging the tunnel\n"
	.string "to come see me.\p"
	.string "He works his hands raw and rough\n"
	.string "for the benefit of everyone.$"

RusturfTunnel_Text_MikeIntro::
# 567 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\n"
	.string "mountains? A mountain man, right?\p"
	.string "So why don't they call a POKéMON in\n"
	.string "the mountains a mountain POKéMON?$"

RusturfTunnel_Text_MikeDefeat::
# 575 "data/maps/RusturfTunnel/scripts.pory"
	.string "My POKéMON…\n"
	.string "Ran out of power…$"

RusturfTunnel_Text_MikePostBattle::
# 580 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
	.string "protect POKéMON, right?\l"
	.string "There's a feel-good story!$"
