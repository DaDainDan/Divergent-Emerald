Route111_MapScripts::
# 2 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_MapScripts_MAP_SCRIPT_ON_LOAD
# 12 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 45 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 51 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route111_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route111/scripts.pory"
	goto_if_unset FLAG_REGI_DOORS_OPENED, Route111_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route111_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 1
	goto_if_eq Route111_MapScripts_MAP_SCRIPT_ON_LOAD_5
Route111_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

Route111_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 5 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
	goto Route111_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route111_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 8 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_ShowTemporaryMirageTower
	goto Route111_MapScripts_MAP_SCRIPT_ON_LOAD_4

Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 14 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 15 "data/maps/Route111/scripts.pory"
	goto_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 18 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 1
	goto_if_eq Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 25 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 2
	goto_if_eq Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 28 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 29 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_1, 34
	goto_if_ge Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 33 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 34 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_VICKY
	goto_if 0, Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
	end

Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
	goto Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	checkplayergender
# 0 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 22 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	goto Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 26 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
	goto Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 20 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	goto Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 31 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
	goto Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 30 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_1, 72
	goto_if_gt Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
# 30 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_ge Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
	goto Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 29 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_1, 107
	goto_if_le Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
	goto Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 30 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_0, 2000
	goto_if_le Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	goto Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_13

Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 35 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 36 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 37 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 38 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 39 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 40 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 41 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
	goto Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_24

Route111_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 46 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

Route111_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 47 "data/maps/Route111/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
	end

Route111_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 52 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
	.2byte 0


Route111_EventScript_ShowTemporaryMirageTower::
# 58 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 59 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 60 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 61 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 62 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 63 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 64 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 65 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 66 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 67 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 68 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 69 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 70 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 71 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 72 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 73 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 74 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 75 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
	return


Route111_EventScript_MirageTowerDisappear::
# 80 "data/maps/Route111/scripts.pory"
	lockall
# 81 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 82 "data/maps/Route111/scripts.pory"
	delay 24
# 83 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 84 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 85 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 86 "data/maps/Route111/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 87 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 88 "data/maps/Route111/scripts.pory"
	delay 16
# 89 "data/maps/Route111/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 90 "data/maps/Route111/scripts.pory"
	delay 16
# 91 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 92 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 93 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 94 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 95 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_MirageTowerDisappear_2
# 98 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
Route111_EventScript_MirageTowerDisappear_1:
# 100 "data/maps/Route111/scripts.pory"
	releaseall
	end

Route111_EventScript_MirageTowerDisappear_2:
# 96 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
	goto Route111_EventScript_MirageTowerDisappear_1


# 105 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall:
# 107 "data/maps/Route111/scripts.pory"
	lock_anim
# 108 "data/maps/Route111/scripts.pory"
	run_down
# 108 "data/maps/Route111/scripts.pory"
	run_down
# 108 "data/maps/Route111/scripts.pory"
	run_down
# 108 "data/maps/Route111/scripts.pory"
	run_down
# 108 "data/maps/Route111/scripts.pory"
	run_down
# 108 "data/maps/Route111/scripts.pory"
	run_down
	step_end

Route111_EventScript_Girl::
# 112 "data/maps/Route111/scripts.pory"
	lock_faceplayer
# 113 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 114 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_Girl_2
# 118 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
	giveitem ITEM_RAZZ_BERRY
# 0 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route111_EventScript_Girl_5
Route111_EventScript_Girl_4:
# 122 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 123 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 124 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
	release_end

Route111_EventScript_Girl_2:
# 115 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
	release_end

Route111_EventScript_Girl_5:
# 120 "data/maps/Route111/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route111_EventScript_Girl_4


Route111_EventScript_ViciousSandstormTriggerUp::
# 130 "data/maps/Route111/scripts.pory"
	lockall
# 131 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 132 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
	end


Route111_EventScript_ViciousSandstormTriggerDown::
# 137 "data/maps/Route111/scripts.pory"
	lockall
# 138 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 139 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
	end


Route111_EventScript_ViciousSandstormTriggerLeft::
# 144 "data/maps/Route111/scripts.pory"
	lockall
# 145 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 146 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
	end


Route111_EventScript_ViciousSandstormTriggerRight::
# 152 "data/maps/Route111/scripts.pory"
	lockall
# 153 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 154 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
	end


Route111_EventScript_ViciousSandstormTrigger::
	checkitem ITEM_GO_GOGGLES
# 0 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route111_EventScript_ViciousSandstormTrigger_2
# 170 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
Route111_EventScript_ViciousSandstormTrigger_1:
# 172 "data/maps/Route111/scripts.pory"
	releaseall
	end

Route111_EventScript_ViciousSandstormTrigger_2:
# 160 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 161 "data/maps/Route111/scripts.pory"
	closemessage
# 162 "data/maps/Route111/scripts.pory"
	switch VAR_0x8004
# 163 "data/maps/Route111/scripts.pory"
	case 0, Route111_EventScript_ViciousSandstormTrigger_7
# 164 "data/maps/Route111/scripts.pory"
	case 1, Route111_EventScript_ViciousSandstormTrigger_8
# 165 "data/maps/Route111/scripts.pory"
	case 2, Route111_EventScript_ViciousSandstormTrigger_9
# 166 "data/maps/Route111/scripts.pory"
	case 3, Route111_EventScript_ViciousSandstormTrigger_10
Route111_EventScript_ViciousSandstormTrigger_5:
# 168 "data/maps/Route111/scripts.pory"
	waitmovement 0
	goto Route111_EventScript_ViciousSandstormTrigger_1

Route111_EventScript_ViciousSandstormTrigger_7:
# 163 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto Route111_EventScript_ViciousSandstormTrigger_5

Route111_EventScript_ViciousSandstormTrigger_8:
# 164 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	goto Route111_EventScript_ViciousSandstormTrigger_5

Route111_EventScript_ViciousSandstormTrigger_9:
# 165 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	goto Route111_EventScript_ViciousSandstormTrigger_5

Route111_EventScript_ViciousSandstormTrigger_10:
# 166 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	goto Route111_EventScript_ViciousSandstormTrigger_5


Route111_EventScript_SunTrigger::
# 177 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 178 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 179 "data/maps/Route111/scripts.pory"
	doweather
# 180 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
	end


Route111_EventScript_SandstormTrigger::
# 185 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 186 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 187 "data/maps/Route111/scripts.pory"
	doweather
	end


Route111_EventScript_Victor::
# 192 "data/maps/Route111/scripts.pory"
	lock_faceplayer
# 193 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 194 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 195 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route111_EventScript_Victor_2
Route111_EventScript_Victor_1:
# 198 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
	release_end

Route111_EventScript_Victor_2:
# 196 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_BattleWinstrates
	goto Route111_EventScript_Victor_1


Route111_EventScript_BattleWinstrates::
# 203 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 204 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 205 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Common_Movement_StepFasterUp
# 206 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 207 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 208 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 209 "data/maps/Route111/scripts.pory"
	closemessage
# 210 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Route111_EventScript_BattleWinstrates_Movement_0
# 211 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 212 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTOR
# 213 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 214 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_EventScript_BattleWinstrates_Movement_1
# 215 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 216 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 217 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICTORIA
# 218 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Common_Movement_WalkDown
# 219 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 220 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 221 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 222 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 223 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Common_Movement_StepFasterUp
# 224 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 226 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 227 "data/maps/Route111/scripts.pory"
	closemessage
# 228 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_EventScript_BattleWinstrates_Movement_0
# 229 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 230 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTORIA
# 231 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 232 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_EventScript_BattleWinstrates_Movement_1
# 233 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 234 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 235 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VIVI
# 236 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Common_Movement_WalkDown
# 237 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 238 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 239 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 240 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 241 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Common_Movement_StepFasterUp
# 242 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 243 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 244 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 245 "data/maps/Route111/scripts.pory"
	closemessage
# 246 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_EventScript_BattleWinstrates_Movement_0
# 247 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VIVI
# 249 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 250 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_EventScript_BattleWinstrates_Movement_1
# 251 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 253 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICKY
# 254 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Common_Movement_WalkDown
# 255 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 256 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 257 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 258 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 259 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 260 "data/maps/Route111/scripts.pory"
	closemessage
# 261 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Common_Movement_StepFasterUp
# 262 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 263 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 264 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_EventScript_BattleWinstrates_Movement_0
# 265 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 266 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICKY
# 267 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
	release_end


Route111_EventScript_OpenWinstrateDoor::
# 272 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 273 "data/maps/Route111/scripts.pory"
	waitdooranim
	return


Route111_EventScript_CloseWinstrateDoor::
# 278 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 279 "data/maps/Route111/scripts.pory"
	waitdooranim
	return


Route111_EventScript_RouteSignMauville::
# 284 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
	end


Route111_EventScript_WinstrateHouseSign::
# 289 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
	end


Route111_EventScript_RouteSign112::
# 294 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
	end


Route111_EventScript_RouteSign113::
# 299 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
	end


Route111_EventScript_OldLadysRestStopSign::
# 304 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
	end


Route111_EventScript_TrainerTipsSpAtkSpDef::
# 309 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
	end


Route111_EventScript_Man1::
# 314 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
	end


Route111_EventScript_Man2::
# 319 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
	end


Route111_EventScript_Hiker::
# 324 "data/maps/Route111/scripts.pory"
	lock_faceplayer
# 325 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 3
	goto_if_eq Route111_EventScript_Hiker_2
# 328 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 2
	goto_if_eq Route111_EventScript_Hiker_3
# 331 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_Hiker_4
# 335 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
Route111_EventScript_Hiker_1:
	release_end

Route111_EventScript_Hiker_2:
# 326 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
	goto Route111_EventScript_Hiker_1

Route111_EventScript_Hiker_3:
# 329 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
	goto Route111_EventScript_Hiker_1

Route111_EventScript_Hiker_4:
# 332 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
	goto Route111_EventScript_Hiker_1


Route111_EventScript_RockSmashTipFatMan::
# 341 "data/maps/Route111/scripts.pory"
	lockall
# 342 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 343 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 344 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 345 "data/maps/Route111/scripts.pory"
	closemessage
# 346 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 347 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 348 "data/maps/Route111/scripts.pory"
	releaseall
	end


Route111_EventScript_Drew::
# 353 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 354 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Heidi::
# 359 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 360 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Beau::
# 365 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 366 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Becky::
# 371 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 372 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Dusty::
# 377 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route111_EventScript_Dusty_2
# 383 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
	release_end

Route111_EventScript_Dusty_2:
# 379 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 380 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_RegisterDusty::
# 388 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 389 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 390 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 391 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
	release_end


Route111_EventScript_Travis::
# 396 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 397 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Irene::
# 402 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 403 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Daisuke::
# 408 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 409 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Wilton::
# 414 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route111_EventScript_Wilton_2
# 420 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
	release_end

Route111_EventScript_Wilton_2:
# 416 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 417 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_RegisterWilton::
# 425 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 426 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 427 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 428 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
	release_end


Route111_EventScript_Brooke::
# 433 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route111_EventScript_Brooke_2
# 439 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
	release_end

Route111_EventScript_Brooke_2:
# 435 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 436 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_RegisterBrooke::
# 444 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 445 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 446 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 447 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
	release_end


Route111_EventScript_Hayden::
# 452 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 453 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Bianca::
# 458 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 459 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Tyron::
# 464 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 465 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Celina::
# 470 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 471 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Celia::
# 476 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 477 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Bryan::
# 482 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 483 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Branden::
# 488 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 489 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_TrainerHillSign::
# 494 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
	end


# 210 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates_Movement_0:
# 210 "data/maps/Route111/scripts.pory"
	step_faster_up
# 210 "data/maps/Route111/scripts.pory"
	walk_up
	step_end

# 214 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates_Movement_1:
# 214 "data/maps/Route111/scripts.pory"
	delay_16
# 214 "data/maps/Route111/scripts.pory"
	delay_16
# 214 "data/maps/Route111/scripts.pory"
	delay_16
	step_end

Route111_Text_BattleOurFamily::
# 498 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
	.string "How's this? What do you say to taking\n"
	.string "on our family of four in a series of\l"
	.string "POKéMON battles?$"

Route111_Text_IsThatSo::
# 506 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
	.string "Drop in, if you change your mind!$"

Route111_Text_VictorIntro::
# 511 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"

Route111_Text_VictorDefeat::
# 515 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
	.string "You're a lot tougher than I expected!$"

Route111_Text_VictorPostBattle::
# 520 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
	.string "I've found a pretty strong TRAINER!$"

Route111_Text_VictoriaIntro::
# 525 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
	.string "You must be quite the TRAINER to beat\n"
	.string "my husband, though.\p"
	.string "It's my turn to battle now!$"

Route111_Text_VictoriaDefeat::
# 534 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
	.string "I can't get over how strong you are!$"

Route111_Text_VictoriaPostBattle::
# 539 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
	.string "This one's really strong!$"

Route111_Text_ViviIntro::
# 544 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
	.string "But I'm strong, too!\n"
	.string "Really! Honestly!$"

Route111_Text_ViviDefeat::
# 551 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"

Route111_Text_ViviPostBattle::
# 555 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
	.string "…Snivel… Grandma!$"

Route111_Text_VickyIntro::
# 561 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
	.string "cry!\p"
	.string "For that, I'm going to smack you!\n"
	.string "Prepare to lose!$"

Route111_Text_VickyDefeat::
# 569 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
	.string "My granddaughter was right…$"

Route111_Text_VickyPostBattle::
# 574 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
	.string "visit with us awhile.$"

Route111_Text_ToughToKeepWinningUpTheRanks::
# 579 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
	.string "more, it could be tough to keep winning\l"
	.string "up through the ranks.\p"
	.string "I've heard the POKéMON LEAGUE's\n"
	.string "ELITE FOUR are far stronger than\l"
	.string "any GYM LEADER.$"

Route111_Text_WinstrateFamilyDestroyedMe::
# 589 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
	.string "but four matches in a row is tough\l"
	.string "going… They destroyed me.$"

Route111_Text_RouteSignMauville::
# 595 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
	.string "{DOWN_ARROW} MAUVILLE CITY$"

Route111_Text_WinstrateHouseSign::
# 600 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
	.string "THE WINSTRATE'S HOUSE$"

Route111_Text_RouteSign112::
# 605 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
	.string "{LEFT_ARROW} ROUTE 112$"

Route111_Text_RouteSign113::
# 610 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
	.string "{LEFT_ARROW} ROUTE 113$"

Route111_Text_OldLadysRestStopSign::
# 615 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
	.string "“Come in and rest your tired bones.”$"

Route111_Text_TrainerTipsSpAtkSpDef::
# 620 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "One of the indicators of a POKéMON's\n"
	.string "powerfulness is SP. ATK. It stands for\l"
	.string "“SPECIAL ATTACK.”\p"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
	.string "DEFENSE.”$"

Route111_Text_ShouldBeMirageTowerAroundHere::
# 631 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
	.string "around here somewhere.\p"
	.string "But for some reason, it can be seen\n"
	.string "sometimes, and sometimes not.\p"
	.string "That's why I call it the MIRAGE TOWER.$"

Route111_Text_MirageTowerClearlyVisible::
# 641 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
	.string "The tower of sand!\p"
	.string "The sand tower they called a mirage\n"
	.string "is clearly visible!\p"
	.string "But it looks so fragile…\n"
	.string "It could crumble away anytime…\p"
	.string "I want to go inside it, but I can't\n"
	.string "get my courage up for it…$"

Route111_Text_ThatWasShockingSandRainedDown::
# 655 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
	.string "That was shocking.\p"
	.string "Sand rained down in chunks all of\n"
	.string "a sudden.\p"
	.string "What was it like inside?\n"
	.string "Were there sandy ghosts and such?$"

Route111_Text_MirageTowerHasntBeenSeenSince::
# 666 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
	.string "hasn't been seen.\p"
	.string "Perhaps it really was\n"
	.string "the MIRAGE TOWER…$"

Route111_Text_ClawFossilDisappeared::
# 674 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
	.string "the sand…$"

Route111_Text_RootFossilDisappeared::
# 679 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
	.string "the sand…$"

Route111_Text_MauvilleUncleToldMeToTakeRockSmash::
# 684 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
	.string "My uncle in MAUVILLE told me to take\n"
	.string "ROCK SMASH with me if I was going to\l"
	.string "ROUTE 111!\p"
	.string "My uncle? He lives across from\n"
	.string "the bike shop in MAUVILLE.$"

Route111_Text_TrainerHillSign::
# 695 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
	.string "“Scale the heights, you hot-blooded\n"
	.string "TRAINERS!”$"
