Route111_MapScripts::
# 2 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_MapScripts_MAP_SCRIPT_ON_LOAD
# 12 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 51 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 57 "data/maps/Route111/scripts.pory"
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
# 34 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_1, 34
	goto_if_lt Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
# 37 "data/maps/Route111/scripts.pory"
	setvar VAR_ROUTE111_WILD_SET, 0
Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 39 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 40 "data/maps/Route111/scripts.pory"
	checktrainerflag TRAINER_VICKY
	goto_if 0, Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_29
Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_28:
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
# 32 "data/maps/Route111/scripts.pory"
	setvar VAR_ROUTE111_WILD_SET, 1
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
	setvar VAR_ROUTE111_WILD_SET, 2
	goto Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_24

Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_29:
# 41 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 42 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 43 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 44 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 45 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 46 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 47 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
	goto Route111_MapScripts_MAP_SCRIPT_ON_TRANSITION_28

Route111_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 52 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

Route111_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 53 "data/maps/Route111/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
	end

Route111_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 58 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
	.2byte 0


Route111_EventScript_ShowTemporaryMirageTower::
# 64 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 65 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 66 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 67 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 68 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 69 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 70 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 71 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 72 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 73 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 74 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 75 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 76 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 77 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 78 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 79 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 80 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 81 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
	return


Route111_EventScript_MirageTowerDisappear::
# 86 "data/maps/Route111/scripts.pory"
	lockall
# 87 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 88 "data/maps/Route111/scripts.pory"
	delay 24
# 89 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 90 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 91 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 92 "data/maps/Route111/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 93 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 94 "data/maps/Route111/scripts.pory"
	delay 16
# 95 "data/maps/Route111/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 96 "data/maps/Route111/scripts.pory"
	delay 16
# 97 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 98 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 99 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 100 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 101 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_DOME_FOSSIL, Route111_EventScript_MirageTowerDisappear_2
# 104 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DomeFossilDisappeared, MSGBOX_DEFAULT
Route111_EventScript_MirageTowerDisappear_1:
# 106 "data/maps/Route111/scripts.pory"
	releaseall
	end

Route111_EventScript_MirageTowerDisappear_2:
# 102 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HelixFossilDisappeared, MSGBOX_DEFAULT
	goto Route111_EventScript_MirageTowerDisappear_1


# 111 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall:
# 113 "data/maps/Route111/scripts.pory"
	lock_anim
# 114 "data/maps/Route111/scripts.pory"
	run_down
# 114 "data/maps/Route111/scripts.pory"
	run_down
# 114 "data/maps/Route111/scripts.pory"
	run_down
# 114 "data/maps/Route111/scripts.pory"
	run_down
# 114 "data/maps/Route111/scripts.pory"
	run_down
# 114 "data/maps/Route111/scripts.pory"
	run_down
	step_end

Route111_EventScript_Girl::
# 118 "data/maps/Route111/scripts.pory"
	lock_faceplayer
# 119 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 120 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_Girl_2
# 124 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
	giveitem ITEM_RAZZ_BERRY
# 0 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route111_EventScript_Girl_5
Route111_EventScript_Girl_4:
# 128 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 129 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 130 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
	release_end

Route111_EventScript_Girl_2:
# 121 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
	release_end

Route111_EventScript_Girl_5:
# 126 "data/maps/Route111/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route111_EventScript_Girl_4


Route111_EventScript_ViciousSandstormTriggerUp::
# 136 "data/maps/Route111/scripts.pory"
	lockall
# 137 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 138 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
	end


Route111_EventScript_ViciousSandstormTriggerDown::
# 143 "data/maps/Route111/scripts.pory"
	lockall
# 144 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 145 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
	end


Route111_EventScript_ViciousSandstormTriggerLeft::
# 150 "data/maps/Route111/scripts.pory"
	lockall
# 151 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 152 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
	end


Route111_EventScript_ViciousSandstormTriggerRight::
# 158 "data/maps/Route111/scripts.pory"
	lockall
# 159 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 160 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
	end


Route111_EventScript_ViciousSandstormTrigger::
	checkitem ITEM_GO_GOGGLES
# 0 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route111_EventScript_ViciousSandstormTrigger_2
# 176 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
Route111_EventScript_ViciousSandstormTrigger_1:
# 178 "data/maps/Route111/scripts.pory"
	releaseall
	end

Route111_EventScript_ViciousSandstormTrigger_2:
# 166 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 167 "data/maps/Route111/scripts.pory"
	closemessage
# 168 "data/maps/Route111/scripts.pory"
	switch VAR_0x8004
# 169 "data/maps/Route111/scripts.pory"
	case 0, Route111_EventScript_ViciousSandstormTrigger_7
# 170 "data/maps/Route111/scripts.pory"
	case 1, Route111_EventScript_ViciousSandstormTrigger_8
# 171 "data/maps/Route111/scripts.pory"
	case 2, Route111_EventScript_ViciousSandstormTrigger_9
# 172 "data/maps/Route111/scripts.pory"
	case 3, Route111_EventScript_ViciousSandstormTrigger_10
Route111_EventScript_ViciousSandstormTrigger_5:
# 174 "data/maps/Route111/scripts.pory"
	waitmovement 0
	goto Route111_EventScript_ViciousSandstormTrigger_1

Route111_EventScript_ViciousSandstormTrigger_7:
# 169 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto Route111_EventScript_ViciousSandstormTrigger_5

Route111_EventScript_ViciousSandstormTrigger_8:
# 170 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	goto Route111_EventScript_ViciousSandstormTrigger_5

Route111_EventScript_ViciousSandstormTrigger_9:
# 171 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	goto Route111_EventScript_ViciousSandstormTrigger_5

Route111_EventScript_ViciousSandstormTrigger_10:
# 172 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	goto Route111_EventScript_ViciousSandstormTrigger_5


Route111_EventScript_SunTrigger::
# 183 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 184 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 185 "data/maps/Route111/scripts.pory"
	doweather
# 186 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 187 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 188 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_1, 46
	goto_if_lt Route111_EventScript_SunTrigger_2
# 191 "data/maps/Route111/scripts.pory"
	setvar VAR_ROUTE111_WILD_SET, 0
Route111_EventScript_SunTrigger_1:
	end

Route111_EventScript_SunTrigger_2:
# 189 "data/maps/Route111/scripts.pory"
	setvar VAR_ROUTE111_WILD_SET, 2
	goto Route111_EventScript_SunTrigger_1


Route111_EventScript_SandstormTrigger::
# 197 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 198 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 199 "data/maps/Route111/scripts.pory"
	doweather
# 200 "data/maps/Route111/scripts.pory"
	setvar VAR_ROUTE111_WILD_SET, 1
	end


Route111_EventScript_Victor::
# 205 "data/maps/Route111/scripts.pory"
	lock_faceplayer
# 206 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 207 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 208 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route111_EventScript_Victor_2
Route111_EventScript_Victor_1:
# 211 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
	release_end

Route111_EventScript_Victor_2:
# 209 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_BattleWinstrates
	goto Route111_EventScript_Victor_1


Route111_EventScript_BattleWinstrates::
# 216 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 217 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 218 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Common_Movement_StepFasterUp
# 219 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 220 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 221 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 222 "data/maps/Route111/scripts.pory"
	closemessage
# 223 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Route111_EventScript_BattleWinstrates_Movement_0
# 224 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTOR
# 226 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 227 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_EventScript_BattleWinstrates_Movement_1
# 228 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 229 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 230 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICTORIA
# 231 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Common_Movement_WalkDown
# 232 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 233 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 234 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 235 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 236 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Common_Movement_StepFasterUp
# 237 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 238 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 239 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 240 "data/maps/Route111/scripts.pory"
	closemessage
# 241 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_EventScript_BattleWinstrates_Movement_0
# 242 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 243 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTORIA
# 244 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 245 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_EventScript_BattleWinstrates_Movement_1
# 246 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 248 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VIVI
# 249 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Common_Movement_WalkDown
# 250 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 251 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 252 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 253 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 254 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Common_Movement_StepFasterUp
# 255 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 256 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 257 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 258 "data/maps/Route111/scripts.pory"
	closemessage
# 259 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_EventScript_BattleWinstrates_Movement_0
# 260 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 261 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VIVI
# 262 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 263 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_EventScript_BattleWinstrates_Movement_1
# 264 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 265 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 266 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICKY
# 267 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Common_Movement_WalkDown
# 268 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 269 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 270 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 271 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 272 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 273 "data/maps/Route111/scripts.pory"
	closemessage
# 274 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Common_Movement_StepFasterUp
# 275 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 276 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 277 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_EventScript_BattleWinstrates_Movement_0
# 278 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 279 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICKY
# 280 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
	release_end


Route111_EventScript_OpenWinstrateDoor::
# 285 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 286 "data/maps/Route111/scripts.pory"
	waitdooranim
	return


Route111_EventScript_CloseWinstrateDoor::
# 291 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 292 "data/maps/Route111/scripts.pory"
	waitdooranim
	return


Route111_EventScript_RouteSignMauville::
# 297 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
	end


Route111_EventScript_WinstrateHouseSign::
# 302 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
	end


Route111_EventScript_RouteSign112::
# 307 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
	end


Route111_EventScript_RouteSign113::
# 312 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
	end


Route111_EventScript_OldLadysRestStopSign::
# 317 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
	end


Route111_EventScript_TrainerTipsSpAtkSpDef::
# 322 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
	end


Route111_EventScript_Man1::
# 327 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
	end


Route111_EventScript_Man2::
# 332 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
	end


Route111_EventScript_Hiker::
# 337 "data/maps/Route111/scripts.pory"
	lock_faceplayer
# 338 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 3
	goto_if_eq Route111_EventScript_Hiker_2
# 341 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 2
	goto_if_eq Route111_EventScript_Hiker_3
# 344 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_Hiker_4
# 348 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
Route111_EventScript_Hiker_1:
	release_end

Route111_EventScript_Hiker_2:
# 339 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
	goto Route111_EventScript_Hiker_1

Route111_EventScript_Hiker_3:
# 342 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
	goto Route111_EventScript_Hiker_1

Route111_EventScript_Hiker_4:
# 345 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
	goto Route111_EventScript_Hiker_1


Route111_EventScript_RockSmashTipFatMan::
# 354 "data/maps/Route111/scripts.pory"
	lockall
# 355 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 356 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 357 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 358 "data/maps/Route111/scripts.pory"
	closemessage
# 359 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 360 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 361 "data/maps/Route111/scripts.pory"
	releaseall
	end


Route111_EventScript_Drew::
# 366 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 367 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Heidi::
# 372 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 373 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Beau::
# 378 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 379 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Becky::
# 384 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 385 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Dusty::
# 390 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route111_EventScript_Dusty_2
# 396 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
	release_end

Route111_EventScript_Dusty_2:
# 392 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 393 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_RegisterDusty::
# 401 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 402 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 403 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 404 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
	release_end


Route111_EventScript_Travis::
# 409 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 410 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Irene::
# 415 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 416 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Daisuke::
# 421 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 422 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Wilton::
# 427 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route111_EventScript_Wilton_2
# 433 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
	release_end

Route111_EventScript_Wilton_2:
# 429 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 430 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_RegisterWilton::
# 438 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 439 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 440 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 441 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
	release_end


Route111_EventScript_Brooke::
# 446 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route111_EventScript_Brooke_2
# 452 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
	release_end

Route111_EventScript_Brooke_2:
# 448 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 449 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_RegisterBrooke::
# 457 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 458 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 459 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 460 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
	release_end


Route111_EventScript_Hayden::
# 465 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 466 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Bianca::
# 471 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 472 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Tyron::
# 477 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 478 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Celina::
# 483 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 484 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Celia::
# 489 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 490 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Bryan::
# 495 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 496 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_Branden::
# 501 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 502 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
	end


Route111_EventScript_TrainerHillSign::
# 507 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
	end


# 223 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates_Movement_0:
# 223 "data/maps/Route111/scripts.pory"
	step_faster_up
# 223 "data/maps/Route111/scripts.pory"
	walk_up
	step_end

# 227 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates_Movement_1:
# 227 "data/maps/Route111/scripts.pory"
	delay_16
# 227 "data/maps/Route111/scripts.pory"
	delay_16
# 227 "data/maps/Route111/scripts.pory"
	delay_16
	step_end

Route111_Text_BattleOurFamily::
# 511 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
	.string "How's this? What do you say to taking\n"
	.string "on our family of four in a series of\l"
	.string "POKéMON battles?$"

Route111_Text_IsThatSo::
# 519 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
	.string "Drop in, if you change your mind!$"

Route111_Text_VictorIntro::
# 524 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"

Route111_Text_VictorDefeat::
# 528 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
	.string "You're a lot tougher than I expected!$"

Route111_Text_VictorPostBattle::
# 533 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
	.string "I've found a pretty strong TRAINER!$"

Route111_Text_VictoriaIntro::
# 538 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
	.string "You must be quite the TRAINER to beat\n"
	.string "my husband, though.\p"
	.string "It's my turn to battle now!$"

Route111_Text_VictoriaDefeat::
# 547 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
	.string "I can't get over how strong you are!$"

Route111_Text_VictoriaPostBattle::
# 552 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
	.string "This one's really strong!$"

Route111_Text_ViviIntro::
# 557 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
	.string "But I'm strong, too!\n"
	.string "Really! Honestly!$"

Route111_Text_ViviDefeat::
# 564 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"

Route111_Text_ViviPostBattle::
# 568 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
	.string "…Snivel… Grandma!$"

Route111_Text_VickyIntro::
# 574 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
	.string "cry!\p"
	.string "For that, I'm going to smack you!\n"
	.string "Prepare to lose!$"

Route111_Text_VickyDefeat::
# 582 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
	.string "My granddaughter was right…$"

Route111_Text_VickyPostBattle::
# 587 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
	.string "visit with us awhile.$"

Route111_Text_ToughToKeepWinningUpTheRanks::
# 592 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
	.string "more, it could be tough to keep winning\l"
	.string "up through the ranks.\p"
	.string "I've heard the POKéMON LEAGUE's\n"
	.string "ELITE FOUR are far stronger than\l"
	.string "any GYM LEADER.$"

Route111_Text_WinstrateFamilyDestroyedMe::
# 602 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
	.string "but four matches in a row is tough\l"
	.string "going… They destroyed me.$"

Route111_Text_RouteSignMauville::
# 608 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
	.string "{DOWN_ARROW} MAUVILLE CITY$"

Route111_Text_WinstrateHouseSign::
# 613 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
	.string "THE WINSTRATE'S HOUSE$"

Route111_Text_RouteSign112::
# 618 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
	.string "{LEFT_ARROW} ROUTE 112$"

Route111_Text_RouteSign113::
# 623 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
	.string "{LEFT_ARROW} ROUTE 113$"

Route111_Text_OldLadysRestStopSign::
# 628 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
	.string "“Come in and rest your tired bones.”$"

Route111_Text_TrainerTipsSpAtkSpDef::
# 633 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "One of the indicators of a POKéMON's\n"
	.string "powerfulness is SP. ATK. It stands for\l"
	.string "“SPECIAL ATTACK.”\p"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
	.string "DEFENSE.”$"

Route111_Text_ShouldBeMirageTowerAroundHere::
# 644 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
	.string "around here somewhere.\p"
	.string "But for some reason, it can be seen\n"
	.string "sometimes, and sometimes not.\p"
	.string "That's why I call it the MIRAGE TOWER.$"

Route111_Text_MirageTowerClearlyVisible::
# 654 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
	.string "The tower of sand!\p"
	.string "The sand tower they called a mirage\n"
	.string "is clearly visible!\p"
	.string "But it looks so fragile…\n"
	.string "It could crumble away anytime…\p"
	.string "I want to go inside it, but I can't\n"
	.string "get my courage up for it…$"

Route111_Text_ThatWasShockingSandRainedDown::
# 668 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
	.string "That was shocking.\p"
	.string "Sand rained down in chunks all of\n"
	.string "a sudden.\p"
	.string "What was it like inside?\n"
	.string "Were there sandy ghosts and such?$"

Route111_Text_MirageTowerHasntBeenSeenSince::
# 679 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
	.string "hasn't been seen.\p"
	.string "Perhaps it really was\n"
	.string "the MIRAGE TOWER…$"

Route111_Text_DomeFossilDisappeared::
# 687 "data/maps/Route111/scripts.pory"
	.string "The DOME FOSSIL disappeared into\n"
	.string "the sand…$"

Route111_Text_HelixFossilDisappeared::
# 692 "data/maps/Route111/scripts.pory"
	.string "The HELIX FOSSIL disappeared into\n"
	.string "the sand…$"

Route111_Text_MauvilleUncleToldMeToTakeRockSmash::
# 697 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
	.string "My uncle in MAUVILLE told me to take\n"
	.string "ROCK SMASH with me if I was going to\l"
	.string "ROUTE 111!\p"
	.string "My uncle? He lives across from\n"
	.string "the bike shop in MAUVILLE.$"

Route111_Text_TrainerHillSign::
# 708 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
	.string "“Scale the heights, you hot-blooded\n"
	.string "TRAINERS!”$"
