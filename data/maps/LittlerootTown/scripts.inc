LittlerootTown_MapScripts::
# 31 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 72 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 77 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 32 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 33 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 34 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 2
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 37 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 46 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 3
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 55 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
# 55 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 59 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_OLDALE_RIVAL_STATE, 1
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 63 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 66 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
# 67 "data/maps/LittlerootTown/scripts.pory"
	case 1, LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_29
# 68 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_30
LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_27:
	end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 35 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 38 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 0
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 42 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 43 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 47 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 48 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
# 52 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 9
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 39 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 40 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 56 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 57 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 50 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 5, 9
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 60 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 61 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_21

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 64 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_24

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 67 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_27

LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_30:
# 68 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_27

LittlerootTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 73 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 74 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 75 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
	.2byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 78 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 79 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 80 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2
# 85 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 13, 10
# 86 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 14, 10
LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1:
	end

LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2:
# 82 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 6, 10
# 83 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 5, 10
	goto LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1


LittlerootTown_EventScript_StepOffTruckMale::
# 94 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 95 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 96 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 97 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 98 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 99 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 100 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 101 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_StepOffTruckFemale::
# 106 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 107 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 108 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 109 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 110 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 111 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 112 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 113 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_GoInsideWithMom::
# 118 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 119 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 120 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_EventScript_GoInsideWithMom_Movement_0
# 121 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 122 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 123 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 124 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 125 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkDown
# 126 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 127 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 128 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 129 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 130 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_GoInsideWithMom_Movement_1
# 131 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 132 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 133 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 134 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_GoInsideWithMom_Movement_2
# 135 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_EventScript_GoInsideWithMom_Movement_3
# 136 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 137 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 138 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 139 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_GoInsideWithMom_Movement_4
# 140 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_EventScript_GoInsideWithMom_Movement_5
# 141 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 143 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 144 "data/maps/LittlerootTown/scripts.pory"
	hideplayer
# 145 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 146 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 147 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 148 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return


LittlerootTown_EventScript_BeginDexUpgradeScene::
# 153 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 154 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 155 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 156 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 157 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 158 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 159 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 160 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 161 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 162 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 163 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 164 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 165 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 166 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_FatMan::
# 171 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
	end


LittlerootTown_EventScript_Boy::
# 176 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
	end


LittlerootTown_EventScript_Twin::
# 181 "data/maps/LittlerootTown/scripts.pory"
	lock_faceplayer
# 182 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_Twin_2
# 185 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_Twin_3
# 189 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 0
	goto_if_ne LittlerootTown_EventScript_Twin_4
# 198 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
LittlerootTown_EventScript_Twin_1:
	release_end

LittlerootTown_EventScript_Twin_2:
# 183 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
	goto LittlerootTown_EventScript_Twin_1

LittlerootTown_EventScript_Twin_3:
# 186 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 187 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
	goto LittlerootTown_EventScript_Twin_1

LittlerootTown_EventScript_Twin_4:
# 190 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 191 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 192 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 193 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 194 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 195 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
	goto LittlerootTown_EventScript_Twin_1


LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 204 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 205 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 206 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 207 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 208 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_EventScript_NeedPokemonTriggerLeft_Movement_0
# 209 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 210 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 215 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 216 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 217 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 218 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 219 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_EventScript_NeedPokemonTriggerRight_Movement_0
# 220 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 221 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_DangerousWithoutPokemon::
# 226 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 227 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 228 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkDown
# 229 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_EventScript_DangerousWithoutPokemon_Movement_0
# 230 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 231 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 232 "data/maps/LittlerootTown/scripts.pory"
	closemessage
	return


# 236 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 237 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 238 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 239 "data/maps/LittlerootTown/scripts.pory"
	disable_landing_effect
# 240 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 241 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 242 "data/maps/LittlerootTown/scripts.pory"
	run_right
# 242 "data/maps/LittlerootTown/scripts.pory"
	run_right
# 242 "data/maps/LittlerootTown/scripts.pory"
	run_right
# 242 "data/maps/LittlerootTown/scripts.pory"
	run_right
# 243 "data/maps/LittlerootTown/scripts.pory"
	run_up
# 243 "data/maps/LittlerootTown/scripts.pory"
	run_up
# 244 "data/maps/LittlerootTown/scripts.pory"
	run_left
# 245 "data/maps/LittlerootTown/scripts.pory"
	face_down
	step_end

# 248 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 249 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 250 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 251 "data/maps/LittlerootTown/scripts.pory"
	disable_landing_effect
# 252 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 253 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 254 "data/maps/LittlerootTown/scripts.pory"
	run_right
# 254 "data/maps/LittlerootTown/scripts.pory"
	run_right
# 254 "data/maps/LittlerootTown/scripts.pory"
	run_right
# 255 "data/maps/LittlerootTown/scripts.pory"
	run_up
# 255 "data/maps/LittlerootTown/scripts.pory"
	run_up
# 256 "data/maps/LittlerootTown/scripts.pory"
	run_right
# 257 "data/maps/LittlerootTown/scripts.pory"
	face_down
	step_end

LittlerootTown_EventScript_GoSaveBirchTrigger::
# 261 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 262 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_StepFasterRight
# 263 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 264 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 265 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 266 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 267 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 268 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 269 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 270 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 271 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 272 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


LittlerootTown_EventScript_TownSign::
# 277 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BirchsLabSign::
# 282 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
	end


LittlerootTown_EventScript_BrendansHouseSign::
# 287 "data/maps/LittlerootTown/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_BrendansHouseSign_2
# 291 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
LittlerootTown_EventScript_BrendansHouseSign_1:
# 293 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

LittlerootTown_EventScript_BrendansHouseSign_2:
# 289 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
	goto LittlerootTown_EventScript_BrendansHouseSign_1


LittlerootTown_EventScript_MaysHouseSign::
# 298 "data/maps/LittlerootTown/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_EventScript_MaysHouseSign_2
# 302 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
LittlerootTown_EventScript_MaysHouseSign_1:
# 304 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

LittlerootTown_EventScript_MaysHouseSign_2:
# 300 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
	goto LittlerootTown_EventScript_MaysHouseSign_1


LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 309 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 310 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 311 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 10, 9
# 312 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 317 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 318 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 319 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 320 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 325 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 326 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 327 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 332 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 333 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 334 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 339 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 340 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 341 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 346 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 347 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 348 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
	end


LittlerootTown_EventScript_GiveRunningShoesTrigger::
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_GiveRunningShoesTrigger_2
# 357 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 358 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_StepFasterLeft
LittlerootTown_EventScript_GiveRunningShoesTrigger_1:
# 360 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 361 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 362 "data/maps/LittlerootTown/scripts.pory"
	closemessage
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_GiveRunningShoesTrigger_6
# 368 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomApproachPlayerFemale
# 369 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 370 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomReturnHomeFemale
LittlerootTown_EventScript_GiveRunningShoesTrigger_5:
# 372 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	end

LittlerootTown_EventScript_GiveRunningShoesTrigger_2:
# 354 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 355 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_StepFasterRight
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger_1

LittlerootTown_EventScript_GiveRunningShoesTrigger_6:
# 364 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomApproachPlayerMale
# 365 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 366 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomReturnHomeMale
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger_5


LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 377 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 378 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
	return


LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 383 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 384 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
	return


LittlerootTown_EventScript_MomApproachPlayerMale::
# 389 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_le LittlerootTown_EventScript_MomApproachPlayerMale_2
# 392 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
LittlerootTown_EventScript_MomApproachPlayerMale_1:
# 394 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 395 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 396 "data/maps/LittlerootTown/scripts.pory"
	case 0, LittlerootTown_EventScript_MomApproachPlayerMale_7
# 397 "data/maps/LittlerootTown/scripts.pory"
	case 1, LittlerootTown_EventScript_MomApproachPlayerMale_8
# 398 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomApproachPlayerMale_9
# 399 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomApproachPlayerMale_10
# 400 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomApproachPlayerMale_11
# 401 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomApproachPlayerMale_12
LittlerootTown_EventScript_MomApproachPlayerMale_5:
# 403 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	return

LittlerootTown_EventScript_MomApproachPlayerMale_2:
# 390 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
	goto LittlerootTown_EventScript_MomApproachPlayerMale_1

LittlerootTown_EventScript_MomApproachPlayerMale_7:
# 396 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomApproachPlayerMale_Movement_0
	goto LittlerootTown_EventScript_MomApproachPlayerMale_5

LittlerootTown_EventScript_MomApproachPlayerMale_8:
# 397 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomApproachPlayerMale_Movement_0
	goto LittlerootTown_EventScript_MomApproachPlayerMale_5

LittlerootTown_EventScript_MomApproachPlayerMale_9:
# 398 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomApproachPlayerMale_Movement_1
	goto LittlerootTown_EventScript_MomApproachPlayerMale_5

LittlerootTown_EventScript_MomApproachPlayerMale_10:
# 399 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomApproachPlayerMale_Movement_2
	goto LittlerootTown_EventScript_MomApproachPlayerMale_5

LittlerootTown_EventScript_MomApproachPlayerMale_11:
# 400 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomApproachPlayerMale_Movement_3
	goto LittlerootTown_EventScript_MomApproachPlayerMale_5

LittlerootTown_EventScript_MomApproachPlayerMale_12:
# 401 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomApproachPlayerMale_Movement_4
	goto LittlerootTown_EventScript_MomApproachPlayerMale_5


LittlerootTown_EventScript_MomApproachPlayerFemale::
# 408 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_le LittlerootTown_EventScript_MomApproachPlayerFemale_2
# 411 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
LittlerootTown_EventScript_MomApproachPlayerFemale_1:
# 413 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 414 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 415 "data/maps/LittlerootTown/scripts.pory"
	case 0, LittlerootTown_EventScript_MomApproachPlayerFemale_7
# 416 "data/maps/LittlerootTown/scripts.pory"
	case 1, LittlerootTown_EventScript_MomApproachPlayerFemale_8
# 417 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomApproachPlayerFemale_9
# 418 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomApproachPlayerFemale_10
# 419 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomApproachPlayerFemale_11
# 420 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomApproachPlayerFemale_12
LittlerootTown_EventScript_MomApproachPlayerFemale_5:
# 422 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
	return

LittlerootTown_EventScript_MomApproachPlayerFemale_2:
# 409 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
	goto LittlerootTown_EventScript_MomApproachPlayerFemale_1

LittlerootTown_EventScript_MomApproachPlayerFemale_7:
# 415 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomApproachPlayerMale_Movement_0
	goto LittlerootTown_EventScript_MomApproachPlayerFemale_5

LittlerootTown_EventScript_MomApproachPlayerFemale_8:
# 416 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomApproachPlayerMale_Movement_0
	goto LittlerootTown_EventScript_MomApproachPlayerFemale_5

LittlerootTown_EventScript_MomApproachPlayerFemale_9:
# 417 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomApproachPlayerFemale_Movement_0
	goto LittlerootTown_EventScript_MomApproachPlayerFemale_5

LittlerootTown_EventScript_MomApproachPlayerFemale_10:
# 418 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomApproachPlayerFemale_Movement_1
	goto LittlerootTown_EventScript_MomApproachPlayerFemale_5

LittlerootTown_EventScript_MomApproachPlayerFemale_11:
# 419 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomApproachPlayerFemale_Movement_2
	goto LittlerootTown_EventScript_MomApproachPlayerFemale_5

LittlerootTown_EventScript_MomApproachPlayerFemale_12:
# 420 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomApproachPlayerFemale_Movement_3
	goto LittlerootTown_EventScript_MomApproachPlayerFemale_5


LittlerootTown_EventScript_GiveRunningShoes::
# 427 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 428 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 429 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 430 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 431 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 432 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 433 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 434 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 435 "data/maps/LittlerootTown/scripts.pory"
	delay 30
	return


LittlerootTown_EventScript_MomReturnHomeMale::
# 440 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 441 "data/maps/LittlerootTown/scripts.pory"
	case 0, LittlerootTown_EventScript_MomReturnHomeMale_3
# 442 "data/maps/LittlerootTown/scripts.pory"
	case 1, LittlerootTown_EventScript_MomReturnHomeMale_4
# 443 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomReturnHomeMale_5
# 444 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomReturnHomeMale_6
# 445 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomReturnHomeMale_7
# 446 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomReturnHomeMale_8
LittlerootTown_EventScript_MomReturnHomeMale_1:
# 448 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 449 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_ge LittlerootTown_EventScript_MomReturnHomeMale_10
LittlerootTown_EventScript_MomReturnHomeMale_9:
	return

LittlerootTown_EventScript_MomReturnHomeMale_3:
# 441 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomReturnHomeMale_Movement_0
	goto LittlerootTown_EventScript_MomReturnHomeMale_1

LittlerootTown_EventScript_MomReturnHomeMale_4:
# 442 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomReturnHomeMale_Movement_0
	goto LittlerootTown_EventScript_MomReturnHomeMale_1

LittlerootTown_EventScript_MomReturnHomeMale_5:
# 443 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomReturnHomeMale_Movement_1
	goto LittlerootTown_EventScript_MomReturnHomeMale_1

LittlerootTown_EventScript_MomReturnHomeMale_6:
# 444 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomReturnHomeMale_Movement_2
	goto LittlerootTown_EventScript_MomReturnHomeMale_1

LittlerootTown_EventScript_MomReturnHomeMale_7:
# 445 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomReturnHomeMale_Movement_3
	goto LittlerootTown_EventScript_MomReturnHomeMale_1

LittlerootTown_EventScript_MomReturnHomeMale_8:
# 446 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomReturnHomeMale_Movement_4
	goto LittlerootTown_EventScript_MomReturnHomeMale_1

LittlerootTown_EventScript_MomReturnHomeMale_10:
# 450 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomEntersHouse
	goto LittlerootTown_EventScript_MomReturnHomeMale_9


LittlerootTown_EventScript_MomReturnHomeFemale::
# 456 "data/maps/LittlerootTown/scripts.pory"
	switch VAR_0x8008
# 457 "data/maps/LittlerootTown/scripts.pory"
	case 0, LittlerootTown_EventScript_MomReturnHomeFemale_3
# 458 "data/maps/LittlerootTown/scripts.pory"
	case 1, LittlerootTown_EventScript_MomReturnHomeFemale_4
# 459 "data/maps/LittlerootTown/scripts.pory"
	case 2, LittlerootTown_EventScript_MomReturnHomeFemale_5
# 460 "data/maps/LittlerootTown/scripts.pory"
	case 3, LittlerootTown_EventScript_MomReturnHomeFemale_6
# 461 "data/maps/LittlerootTown/scripts.pory"
	case 4, LittlerootTown_EventScript_MomReturnHomeFemale_7
# 462 "data/maps/LittlerootTown/scripts.pory"
	case 5, LittlerootTown_EventScript_MomReturnHomeFemale_8
LittlerootTown_EventScript_MomReturnHomeFemale_1:
# 464 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 465 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 2
	goto_if_ge LittlerootTown_EventScript_MomReturnHomeFemale_10
LittlerootTown_EventScript_MomReturnHomeFemale_9:
	return

LittlerootTown_EventScript_MomReturnHomeFemale_3:
# 457 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomReturnHomeMale_Movement_0
	goto LittlerootTown_EventScript_MomReturnHomeFemale_1

LittlerootTown_EventScript_MomReturnHomeFemale_4:
# 458 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomReturnHomeMale_Movement_0
	goto LittlerootTown_EventScript_MomReturnHomeFemale_1

LittlerootTown_EventScript_MomReturnHomeFemale_5:
# 459 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomReturnHomeFemale_Movement_0
	goto LittlerootTown_EventScript_MomReturnHomeFemale_1

LittlerootTown_EventScript_MomReturnHomeFemale_6:
# 460 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomReturnHomeFemale_Movement_1
	goto LittlerootTown_EventScript_MomReturnHomeFemale_1

LittlerootTown_EventScript_MomReturnHomeFemale_7:
# 461 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomReturnHomeFemale_Movement_2
	goto LittlerootTown_EventScript_MomReturnHomeFemale_1

LittlerootTown_EventScript_MomReturnHomeFemale_8:
# 462 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_EventScript_MomReturnHomeFemale_Movement_3
	goto LittlerootTown_EventScript_MomReturnHomeFemale_1

LittlerootTown_EventScript_MomReturnHomeFemale_10:
# 466 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomEntersHouse
	goto LittlerootTown_EventScript_MomReturnHomeFemale_9


LittlerootTown_EventScript_MomEntersHouse::
# 472 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 473 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 474 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkUp
# 475 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 476 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 477 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 478 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return


LittlerootTown_EventScript_SetReceivedRunningShoes::
# 483 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 484 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 485 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
	release_end


LittlerootTown_EventScript_Mom::
# 490 "data/maps/LittlerootTown/scripts.pory"
	lock_faceplayer
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_Mom_2
# 494 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoordsFemale
LittlerootTown_EventScript_Mom_1:
# 496 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 497 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_StepFasterUp
# 498 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 499 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MomEntersHouse
# 500 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
	end

LittlerootTown_EventScript_Mom_2:
# 492 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetHomeDoorCoordsMale
	goto LittlerootTown_EventScript_Mom_1


# 120 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom_Movement_0:
# 120 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 120 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 120 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 120 "data/maps/LittlerootTown/scripts.pory"
	delay_16
	step_end

# 130 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom_Movement_1:
# 130 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 130 "data/maps/LittlerootTown/scripts.pory"
	step_faster_left
	step_end

# 134 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom_Movement_2:
# 134 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 134 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 134 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

# 135 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom_Movement_3:
# 135 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 135 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 135 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 135 "data/maps/LittlerootTown/scripts.pory"
	step_faster_up
	step_end

# 139 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom_Movement_4:
# 139 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 139 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
	step_end

# 140 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom_Movement_5:
# 140 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 140 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

# 208 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft_Movement_0:
# 208 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 208 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 208 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 208 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 208 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 208 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 208 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 208 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 208 "data/maps/LittlerootTown/scripts.pory"
	step_faster_down
	step_end

# 219 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight_Movement_0:
# 219 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 219 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 219 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 219 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 219 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 219 "data/maps/LittlerootTown/scripts.pory"
	step_faster_down
	step_end

# 229 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon_Movement_0:
# 229 "data/maps/LittlerootTown/scripts.pory"
	lock_look
# 229 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 229 "data/maps/LittlerootTown/scripts.pory"
	unlock_look
	step_end

# 396 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale_Movement_0:
# 396 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 396 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 396 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 396 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 396 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 396 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

# 398 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale_Movement_1:
# 398 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 398 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 398 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 398 "data/maps/LittlerootTown/scripts.pory"
	walk_right
	step_end

# 399 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale_Movement_2:
# 399 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 399 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 399 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 399 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 399 "data/maps/LittlerootTown/scripts.pory"
	walk_right
	step_end

# 400 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale_Movement_3:
# 400 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 400 "data/maps/LittlerootTown/scripts.pory"
	walk_right
	step_end

# 401 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale_Movement_4:
# 401 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 401 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 401 "data/maps/LittlerootTown/scripts.pory"
	walk_right
	step_end

# 417 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale_Movement_0:
# 417 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 417 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 417 "data/maps/LittlerootTown/scripts.pory"
	walk_left
	step_end

# 418 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale_Movement_1:
# 418 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 418 "data/maps/LittlerootTown/scripts.pory"
	walk_left
	step_end

# 419 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale_Movement_2:
# 419 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 419 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 419 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 419 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 419 "data/maps/LittlerootTown/scripts.pory"
	walk_left
	step_end

# 420 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale_Movement_3:
# 420 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 420 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 420 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 420 "data/maps/LittlerootTown/scripts.pory"
	walk_left
	step_end

# 441 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale_Movement_0:
# 441 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 441 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 441 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 441 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 441 "data/maps/LittlerootTown/scripts.pory"
	walk_down
	step_end

# 443 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale_Movement_1:
# 443 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 443 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 443 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 443 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 443 "data/maps/LittlerootTown/scripts.pory"
	step_faster_up
	step_end

# 444 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale_Movement_2:
# 444 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 444 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 444 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 444 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 444 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 444 "data/maps/LittlerootTown/scripts.pory"
	step_faster_up
	step_end

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale_Movement_3:
# 445 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 445 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 445 "data/maps/LittlerootTown/scripts.pory"
	step_faster_up
	step_end

# 446 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale_Movement_4:
# 446 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 446 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 446 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 446 "data/maps/LittlerootTown/scripts.pory"
	step_faster_up
	step_end

# 459 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale_Movement_0:
# 459 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 459 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 459 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 459 "data/maps/LittlerootTown/scripts.pory"
	step_faster_up
	step_end

# 460 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale_Movement_1:
# 460 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 460 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 460 "data/maps/LittlerootTown/scripts.pory"
	step_faster_up
	step_end

# 461 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale_Movement_2:
# 461 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 461 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 461 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 461 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 461 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 461 "data/maps/LittlerootTown/scripts.pory"
	step_faster_up
	step_end

# 462 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale_Movement_3:
# 462 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 462 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 462 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 462 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 462 "data/maps/LittlerootTown/scripts.pory"
	step_faster_up
	step_end

LittlerootTown_Text_OurNewHomeLetsGoInside::
# 504 "data/maps/LittlerootTown/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}, we're here, honey!\p"
	.string "It must be tiring riding with our things\n"
	.string "in the moving truck.\p"
	.string "Well, this is LITTLEROOT TOWN.\p"
	.string "How do you like it?\n"
	.string "This is our new home!\p"
	.string "It has a quaint feel, but it seems to be\n"
	.string "an easy place to live, don't you think?\p"
	.string "And, you get your own room, {PLAYER}!\n"
	.string "Let's go inside.$"

LittlerootTown_Text_WaitPlayer::
# 522 "data/maps/LittlerootTown/scripts.pory"
	.string "{SPEAKER NAME_MOM}Wait, {PLAYER}!$"

LittlerootTown_Text_WearTheseRunningShoes::
# 526 "data/maps/LittlerootTown/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}! {PLAYER}! Did you\n"
	.string "introduce yourself to PROF. BIRCH?\p"
	.string "Oh! What an adorable POKéMON!\n"
	.string "You got it from PROF. BIRCH. How nice!\p"
	.string "You're your father's child, all right.\n"
	.string "You look good together with POKéMON!\p"
	.string "Here, honey! If you're going out on an\n"
	.string "adventure, wear these RUNNING SHOES.\p"
	.string "They'll put a zip in your step!$"

LittlerootTown_Text_SwitchShoesWithRunningShoes::
# 542 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "RUNNING SHOES.$"

LittlerootTown_Text_ExplainRunningShoes::
# 547 "data/maps/LittlerootTown/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}, those shoes came with\n"
	.string "instructions.\p"
	.string "“Press the B Button while wearing these\n"
	.string "RUNNING SHOES to run extra-fast!\p"
	.string "“Slip on these RUNNING SHOES and race\n"
	.string "in the great outdoors!”$"

LittlerootTown_Text_ComeHomeIfAnythingHappens::
# 558 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "To think that you have your very own\n"
	.string "POKéMON now…\l"
	.string "Your father will be overjoyed.\p"
	.string "…But please be careful.\n"
	.string "If anything happens, you can come home.\p"
	.string "Go on, go get them, honey!$"

LittlerootTown_Text_CanUsePCToStoreItems::
# 572 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
	.string "and POKéMON.\p"
	.string "The power of science is staggering!$"

LittlerootTown_Text_BirchSpendsDaysInLab::
# 579 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
	.string "studying, then he'll suddenly go out in\l"
	.string "the wild to do more research…\p"
	.string "When does PROF. BIRCH spend time\n"
	.string "at home?$"

LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut::
# 588 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
	.string "If you go outside and go in the grass,\n"
	.string "wild POKéMON will jump out!$"

LittlerootTown_Text_DangerousIfYouDontHavePokemon::
# 595 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
	.string "your own POKéMON.$"

LittlerootTown_Text_CanYouGoSeeWhatsHappening::
# 600 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
	.string "There are scary POKéMON outside!\n"
	.string "I can hear their cries!\p"
	.string "I want to go see what's going on,\n"
	.string "but I don't have any POKéMON…\p"
	.string "Can you go see what's happening\n"
	.string "for me?$"

LittlerootTown_Text_YouSavedBirch::
# 613 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
	.string "I'm so glad!$"

LittlerootTown_Text_GoodLuckCatchingPokemon::
# 618 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
	.string "Good luck!$"

LittlerootTown_Text_TownSign::
# 623 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
	.string "“A town that can't be shaded any hue.”$"

LittlerootTown_Text_ProfBirchsLab::
# 628 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"

LittlerootTown_Text_PlayersHouse::
# 632 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"

LittlerootTown_Text_ProfBirchsHouse::
# 636 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"

LittlerootTown_Text_BirchSomethingToShowYouAtLab::
# 640 "data/maps/LittlerootTown/scripts.pory"
	.string "{SPEAKER NAME_BIRCH}Well, well, {PLAYER}{KUN}!\n"
	.string "That was good work out there!\p"
	.string "I knew there was something special\n"
	.string "about you when I first saw you,\l"
	.string "but I never expected this.\p"
	.string "Oh, yes. Do you still have the POKéDEX\n"
	.string "I gave you?\p"
	.string "I have something to show you.\n"
	.string "Let's go to my LAB.$"
