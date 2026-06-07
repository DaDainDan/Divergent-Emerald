RusturfTunnel_MapScripts::
# 2 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_RUSTURF_TUNNEL_STATE, 2
	goto_if_eq RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_PEEKO, 13, 4
# 5 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_RUSTURF_TUNNEL_GRUNT, 13, 5
	goto RusturfTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

RusturfTunnel_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 11 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
	.2byte 0


RusturfTunnel_EventScript_Wanda::
# 16 "data/maps/RusturfTunnel/scripts.pory"
	lock_faceplayer
# 17 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 18 "data/maps/RusturfTunnel/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


RusturfTunnel_EventScript_WandasBoyfriend::
# 22 "data/maps/RusturfTunnel/scripts.pory"
	lock_faceplayer
# 23 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_WandasBoyfriend_2
# 26 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 27 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
RusturfTunnel_EventScript_WandasBoyfriend_1:
# 29 "data/maps/RusturfTunnel/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return

RusturfTunnel_EventScript_WandasBoyfriend_2:
# 24 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
	goto RusturfTunnel_EventScript_WandasBoyfriend_1


RusturfTunnel_EventScript_ClearTunnelScene::
# 33 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 34 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_TEMP_1
# 35 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_ClearTunnelScene_3
# 39 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_ClearTunnelScene_4
RusturfTunnel_EventScript_ClearTunnelScene_1:
# 42 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 43 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 44 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_ExclamationMark
# 45 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 46 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_Delay48
# 47 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 48 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 49 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_6
# 49 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_6
RusturfTunnel_EventScript_ClearTunnelScene_5:
# 54 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 55 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 56 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 57 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 58 "data/maps/RusturfTunnel/scripts.pory"
	switch VAR_TEMP_1
# 59 "data/maps/RusturfTunnel/scripts.pory"
	case 1, RusturfTunnel_EventScript_ClearTunnelScene_12
# 62 "data/maps/RusturfTunnel/scripts.pory"
	case 2, RusturfTunnel_EventScript_ClearTunnelScene_13
# 63 "data/maps/RusturfTunnel/scripts.pory"
	case 3, RusturfTunnel_EventScript_ClearTunnelScene_13
RusturfTunnel_EventScript_ClearTunnelScene_10:
# 69 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 70 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 71 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 72 "data/maps/RusturfTunnel/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq RusturfTunnel_EventScript_ClearTunnelScene_15
# 76 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_ClearTunnelScene_Movement_7
# 77 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_EventScript_ClearTunnelScene_Movement_5
# 78 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_8
RusturfTunnel_EventScript_ClearTunnelScene_14:
# 80 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 81 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 82 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end

RusturfTunnel_EventScript_ClearTunnelScene_3:
# 36 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_StepFasterUp
# 37 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 38 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
	goto RusturfTunnel_EventScript_ClearTunnelScene_1

RusturfTunnel_EventScript_ClearTunnelScene_4:
# 40 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_0
	goto RusturfTunnel_EventScript_ClearTunnelScene_1

RusturfTunnel_EventScript_ClearTunnelScene_6:
# 50 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 51 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, Common_Movement_WalkRight
# 52 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
	goto RusturfTunnel_EventScript_ClearTunnelScene_5

RusturfTunnel_EventScript_ClearTunnelScene_12:
# 60 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_ClearTunnelScene_Movement_1
# 61 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_2
	goto RusturfTunnel_EventScript_ClearTunnelScene_10

RusturfTunnel_EventScript_ClearTunnelScene_13:
# 64 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_ClearTunnelScene_Movement_3
# 65 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_4
# 66 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 67 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, Common_Movement_StepFasterDown
	goto RusturfTunnel_EventScript_ClearTunnelScene_10

RusturfTunnel_EventScript_ClearTunnelScene_15:
# 73 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDA, RusturfTunnel_EventScript_ClearTunnelScene_Movement_5
# 74 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_WANDAS_BF, RusturfTunnel_EventScript_ClearTunnelScene_Movement_6
	goto RusturfTunnel_EventScript_ClearTunnelScene_14


# 86 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 88 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 89 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_right
	step_end

# 92 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 94 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 95 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_up
# 96 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 97 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_right
	step_end

# 100 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 102 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 103 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_down
# 104 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 105 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_right
	step_end

RusturfTunnel_EventScript_TunnelBlockagePos1::
# 109 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
	end


RusturfTunnel_EventScript_TunnelBlockagePos2::
# 114 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
	end


RusturfTunnel_EventScript_TunnelBlockagePos3::
# 119 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
	end


RusturfTunnel_EventScript_AquaGruntBackUp::
# 124 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 125 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 126 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 127 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 128 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_EventScript_AquaGruntBackUp_Movement_0
# 129 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_EventScript_AquaGruntBackUp_Movement_0
# 130 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 131 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_GRUNT
# 132 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTURF_TUNNEL_PEEKO
# 133 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 134 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
	end


RusturfTunnel_EventScript_Peeko::
# 139 "data/maps/RusturfTunnel/scripts.pory"
	lock_faceplayer
# 140 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 141 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 142 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 143 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
	release_end


RusturfTunnel_EventScript_Grunt::
# 148 "data/maps/RusturfTunnel/scripts.pory"
	lock_faceplayer
# 149 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 150 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 151 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 152 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 153 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 154 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 155 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_Grunt_Movement_0
# 156 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_GRUNT, RusturfTunnel_EventScript_Grunt_Movement_1
# 157 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 158 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_GRUNT
# 159 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 160 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 161 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_EventScript_Grunt_Movement_2
# 162 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 163 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_Grunt_Movement_3
# 164 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_EventScript_Grunt_Movement_4
# 165 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 166 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 167 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, Common_Movement_FacePlayer
# 168 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 169 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 170 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 171 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 172 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 173 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 174 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 175 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 176 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, RusturfTunnel_EventScript_Grunt_Movement_5
# 177 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_BRINEY, RusturfTunnel_EventScript_Grunt_Movement_6
# 178 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_RUSTURF_TUNNEL_PEEKO, RusturfTunnel_EventScript_Grunt_Movement_7
# 179 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 180 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_BRINEY
# 181 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_RUSTURF_TUNNEL_PEEKO
# 182 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 183 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 184 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 185 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 186 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
	release_end


RusturfTunnel_EventScript_Mike::
# 191 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 192 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
	end


# 40 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_0:
# 40 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 40 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_right
	step_end

# 60 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_1:
# 60 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 60 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_right
	step_end

# 61 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_2:
# 61 "data/maps/RusturfTunnel/scripts.pory"
	step_fast_up
# 61 "data/maps/RusturfTunnel/scripts.pory"
	step_fast_up
# 61 "data/maps/RusturfTunnel/scripts.pory"
	run_up
# 61 "data/maps/RusturfTunnel/scripts.pory"
	run_right
	step_end

# 64 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_3:
# 64 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 64 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_left
	step_end

# 65 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_4:
# 65 "data/maps/RusturfTunnel/scripts.pory"
	step_fast_right
# 65 "data/maps/RusturfTunnel/scripts.pory"
	step_fast_right
# 65 "data/maps/RusturfTunnel/scripts.pory"
	run_right
# 65 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_up
	step_end

# 73 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_5:
# 73 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 73 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 73 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 73 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 73 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 73 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 73 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 73 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 73 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 73 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 73 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
	step_end

# 74 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_6:
# 74 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
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

# 76 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_7:
# 76 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 76 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_up
# 76 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 76 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 76 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_right
	step_end

# 78 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene_Movement_8:
# 78 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 78 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 78 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 78 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 78 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 78 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 78 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 78 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 78 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 78 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 78 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 78 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
	step_end

# 128 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp_Movement_0:
# 128 "data/maps/RusturfTunnel/scripts.pory"
	lock_look
# 128 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 128 "data/maps/RusturfTunnel/scripts.pory"
	unlock_look
	step_end

# 155 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_0:
# 155 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 155 "data/maps/RusturfTunnel/scripts.pory"
	lock_look
# 155 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 155 "data/maps/RusturfTunnel/scripts.pory"
	unlock_look
# 155 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_left
	step_end

# 156 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_1:
# 156 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 156 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 156 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 156 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 156 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 156 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 156 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 156 "data/maps/RusturfTunnel/scripts.pory"
	run_left
# 156 "data/maps/RusturfTunnel/scripts.pory"
	run_left
	step_end

# 161 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_2:
# 161 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 161 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 161 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 161 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 161 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 161 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 161 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
	step_end

# 163 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_3:
# 163 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 163 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_up
	step_end

# 164 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_4:
# 164 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 164 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
	step_end

# 176 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_5:
# 176 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 176 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 176 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 176 "data/maps/RusturfTunnel/scripts.pory"
	step_faster_left
	step_end

# 177 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_6:
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
	step_end

# 178 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt_Movement_7:
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
	step_end

RusturfTunnel_Text_ComeAndGetSome::
# 196 "data/maps/RusturfTunnel/scripts.pory"
	.string "What, are you coming?\n"
	.string "Come and get some, then!$"

RusturfTunnel_Text_Peeko::
# 201 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pii pihyoh!$"

RusturfTunnel_Text_GruntIntro::
# 205 "data/maps/RusturfTunnel/scripts.pory"
	.string "Grah, keelhaul it all!\p"
	.string "That hostage POKéMON turned out to\n"
	.string "be worthless!\p"
	.string "And to think I made a getaway…\n"
	.string "In this tunnel to nowhere!\p"
	.string "Hey! You!\n"
	.string "So you want to battle me?$"

RusturfTunnel_Text_GruntDefeat::
# 218 "data/maps/RusturfTunnel/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
	.string "a dead end!$"

RusturfTunnel_Text_GruntTakePackage::
# 223 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\p"
	.string "The BOSS told me this would be a\n"
	.string "slick-and-easy job to pull.\p"
	.string "All I had to do was steal some package\n"
	.string "from DEVON.\p"
	.string "Tch!\n"
	.string "You want it back that badly, take it!$"

RusturfTunnel_Text_PeekoGladToSeeYouSafe::
# 236 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO!\n"
	.string "Am I glad to see you're safe!$"

RusturfTunnel_Text_ThankYouLetsGoHomePeeko::
# 241 "data/maps/RusturfTunnel/scripts.pory"
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
	.string "PEEKO: Pihyoh!$"

RusturfTunnel_Text_WhyCantTheyKeepDigging::
# 265 "data/maps/RusturfTunnel/scripts.pory"
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
# 282 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from RUSTBORO to VERDANTURF,\n"
	.string "you need to go to DEWFORD, then pass\l"
	.string "through SLATEPORT and MAUVILLE…$"

RusturfTunnel_Text_YouShatteredBoulderTakeHM::
# 288 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered that boulder\n"
	.string "blocking the way.\p"
	.string "To show you how much I appreciate it,\n"
	.string "I'd like you to have this HM.$"

RusturfTunnel_Text_ExplainStrength::
# 296 "data/maps/RusturfTunnel/scripts.pory"
	.string "That HM contains STRENGTH.\p"
	.string "If a muscular POKéMON were to learn\n"
	.string "that, it would be able to move even\l"
	.string "large boulders.$"

RusturfTunnel_Text_WandaReunion::
# 304 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA!\n"
	.string "Now I can see you anytime!\p"
	.string "WANDA: That's…wonderful.\p"
	.string "Please, take some rest at my home.$"

RusturfTunnel_Text_BoyfriendOnOtherSideOfRock::
# 313 "data/maps/RusturfTunnel/scripts.pory"
	.string "On the other side of this rock…\n"
	.string "My boyfriend is there.\p"
	.string "He… He's not just digging the tunnel\n"
	.string "to come see me.\p"
	.string "He works his hands raw and rough\n"
	.string "for the benefit of everyone.$"

RusturfTunnel_Text_MikeIntro::
# 324 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\n"
	.string "mountains? A mountain man, right?\p"
	.string "So why don't they call a POKéMON in\n"
	.string "the mountains a mountain POKéMON?$"

RusturfTunnel_Text_MikeDefeat::
# 332 "data/maps/RusturfTunnel/scripts.pory"
	.string "My POKéMON…\n"
	.string "Ran out of power…$"

RusturfTunnel_Text_MikePostBattle::
# 337 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
	.string "protect POKéMON, right?\l"
	.string "There's a feel-good story!$"
