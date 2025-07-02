# 1 "data/maps/Route111/scripts.pory"

# 2 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 3 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 4 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 5 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 6 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 7 "data/maps/Route111/scripts.pory"
	.byte 0
# 8 "data/maps/Route111/scripts.pory"

# 9 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 10 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 11 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 12 "data/maps/Route111/scripts.pory"
	end
# 13 "data/maps/Route111/scripts.pory"

# 14 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 15 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 16 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 17 "data/maps/Route111/scripts.pory"
	return
# 18 "data/maps/Route111/scripts.pory"

# 19 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 20 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 21 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 22 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 23 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 24 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 25 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 26 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 27 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 28 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 29 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 30 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 31 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 32 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 33 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 34 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 35 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 36 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 37 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 38 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 39 "data/maps/Route111/scripts.pory"
	return
# 40 "data/maps/Route111/scripts.pory"

# 41 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 42 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 43 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 44 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 45 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 46 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 47 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 48 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 49 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 50 "data/maps/Route111/scripts.pory"
	end
# 51 "data/maps/Route111/scripts.pory"

# 52 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 53 "data/maps/Route111/scripts.pory"
	checkplayergender
# 54 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 55 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 56 "data/maps/Route111/scripts.pory"
	return
# 57 "data/maps/Route111/scripts.pory"

# 58 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 59 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 60 "data/maps/Route111/scripts.pory"
	return
# 61 "data/maps/Route111/scripts.pory"

# 62 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 63 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 64 "data/maps/Route111/scripts.pory"
	return
# 65 "data/maps/Route111/scripts.pory"

# 66 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 67 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 68 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 69 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 70 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 71 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 72 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 73 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 74 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 75 "data/maps/Route111/scripts.pory"
	setvar VAR_ROUTE111_WILD_SET, 1
# 76 "data/maps/Route111/scripts.pory"
	return
# 77 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 78 "data/maps/Route111/scripts.pory"
	setvar VAR_ROUTE111_WILD_SET, 0
# 79 "data/maps/Route111/scripts.pory"
	return
# 80 "data/maps/Route111/scripts.pory"

# 81 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 82 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 83 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 84 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 85 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 86 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 87 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 88 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 89 "data/maps/Route111/scripts.pory"
	end
# 90 "data/maps/Route111/scripts.pory"

# 91 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 92 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 93 "data/maps/Route111/scripts.pory"
	return
# 94 "data/maps/Route111/scripts.pory"

# 95 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 96 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 97 "data/maps/Route111/scripts.pory"
	return
# 98 "data/maps/Route111/scripts.pory"

# 99 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 100 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 101 "data/maps/Route111/scripts.pory"
	.2byte 0
# 102 "data/maps/Route111/scripts.pory"

# 103 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 104 "data/maps/Route111/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 105 "data/maps/Route111/scripts.pory"
	end
# 106 "data/maps/Route111/scripts.pory"

# 107 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 108 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 109 "data/maps/Route111/scripts.pory"
	.2byte 0
# 110 "data/maps/Route111/scripts.pory"

# 111 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 112 "data/maps/Route111/scripts.pory"
	lockall
# 113 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 114 "data/maps/Route111/scripts.pory"
	waitstate
# 115 "data/maps/Route111/scripts.pory"
	delay 24
# 116 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 117 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 118 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 119 "data/maps/Route111/scripts.pory"
	waitstate
# 120 "data/maps/Route111/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_LITTLEROOT_TOWN
# 121 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 122 "data/maps/Route111/scripts.pory"
	delay 16
# 123 "data/maps/Route111/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 124 "data/maps/Route111/scripts.pory"
	delay 16
# 125 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 126 "data/maps/Route111/scripts.pory"
	waitstate
# 127 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 128 "data/maps/Route111/scripts.pory"
	waitstate
# 129 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 130 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 131 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 132 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 133 "data/maps/Route111/scripts.pory"
	releaseall
# 134 "data/maps/Route111/scripts.pory"
	end
# 135 "data/maps/Route111/scripts.pory"

# 136 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 137 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 138 "data/maps/Route111/scripts.pory"
	releaseall
# 139 "data/maps/Route111/scripts.pory"
	end
# 140 "data/maps/Route111/scripts.pory"

# 141 "data/maps/Route111/scripts.pory"
@ Unused
# 142 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 143 "data/maps/Route111/scripts.pory"
	lock_anim
# 144 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 145 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 146 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 147 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 148 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 149 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 150 "data/maps/Route111/scripts.pory"
	step_end
# 151 "data/maps/Route111/scripts.pory"

# 152 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 153 "data/maps/Route111/scripts.pory"
	lock
# 154 "data/maps/Route111/scripts.pory"
	faceplayer
# 155 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 156 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 157 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 158 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 159 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 160 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 161 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 162 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 163 "data/maps/Route111/scripts.pory"
	release
# 164 "data/maps/Route111/scripts.pory"
	end
# 165 "data/maps/Route111/scripts.pory"

# 166 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 167 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 168 "data/maps/Route111/scripts.pory"
	release
# 169 "data/maps/Route111/scripts.pory"
	end
# 170 "data/maps/Route111/scripts.pory"

# 171 "data/maps/Route111/scripts.pory"
@ Unused
# 172 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 173 "data/maps/Route111/scripts.pory"
	lockall
# 174 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 175 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 176 "data/maps/Route111/scripts.pory"
	end
# 177 "data/maps/Route111/scripts.pory"

# 178 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 179 "data/maps/Route111/scripts.pory"
	lockall
# 180 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 181 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 182 "data/maps/Route111/scripts.pory"
	end
# 183 "data/maps/Route111/scripts.pory"

# 184 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 185 "data/maps/Route111/scripts.pory"
	lockall
# 186 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 187 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 188 "data/maps/Route111/scripts.pory"
	end
# 189 "data/maps/Route111/scripts.pory"

# 190 "data/maps/Route111/scripts.pory"
@ Unused
# 191 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 192 "data/maps/Route111/scripts.pory"
	lockall
# 193 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 194 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 195 "data/maps/Route111/scripts.pory"
	end
# 196 "data/maps/Route111/scripts.pory"

# 197 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 198 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 199 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 200 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 201 "data/maps/Route111/scripts.pory"
	releaseall
# 202 "data/maps/Route111/scripts.pory"
	end
# 203 "data/maps/Route111/scripts.pory"

# 204 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 205 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 206 "data/maps/Route111/scripts.pory"
	closemessage
# 207 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 208 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 209 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 210 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 211 "data/maps/Route111/scripts.pory"
	releaseall
# 212 "data/maps/Route111/scripts.pory"
	end
# 213 "data/maps/Route111/scripts.pory"

# 214 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 215 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushUpFromRoute
# 216 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 217 "data/maps/Route111/scripts.pory"
	return
# 218 "data/maps/Route111/scripts.pory"

# 219 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 220 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushDownFromRoute
# 221 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 222 "data/maps/Route111/scripts.pory"
	return
# 223 "data/maps/Route111/scripts.pory"

# 224 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 225 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushLeftFromRoute
# 226 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 227 "data/maps/Route111/scripts.pory"
	return
# 228 "data/maps/Route111/scripts.pory"

# 229 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 230 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_PushRightFromRoute
# 231 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 232 "data/maps/Route111/scripts.pory"
	return
# 233 "data/maps/Route111/scripts.pory"

# 234 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 235 "data/maps/Route111/scripts.pory"
	walk_up
# 236 "data/maps/Route111/scripts.pory"
	step_end
# 237 "data/maps/Route111/scripts.pory"

# 238 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 239 "data/maps/Route111/scripts.pory"
	walk_down
# 240 "data/maps/Route111/scripts.pory"
	step_end
# 241 "data/maps/Route111/scripts.pory"

# 242 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 243 "data/maps/Route111/scripts.pory"
	walk_left
# 244 "data/maps/Route111/scripts.pory"
	step_end
# 245 "data/maps/Route111/scripts.pory"

# 246 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 247 "data/maps/Route111/scripts.pory"
	walk_right
# 248 "data/maps/Route111/scripts.pory"
	step_end
# 249 "data/maps/Route111/scripts.pory"

# 250 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 251 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 252 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 253 "data/maps/Route111/scripts.pory"
	doweather
# 254 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 255 "data/maps/Route111/scripts.pory"
	setvar VAR_ROUTE111_WILD_SET, 0
# 256 "data/maps/Route111/scripts.pory"
	end
# 257 "data/maps/Route111/scripts.pory"

# 258 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 259 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 260 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 261 "data/maps/Route111/scripts.pory"
	doweather
# 262 "data/maps/Route111/scripts.pory"
	setvar VAR_ROUTE111_WILD_SET, 1
# 263 "data/maps/Route111/scripts.pory"
	end
# 264 "data/maps/Route111/scripts.pory"

# 265 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 266 "data/maps/Route111/scripts.pory"
	lock
# 267 "data/maps/Route111/scripts.pory"
	faceplayer
# 268 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 269 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 270 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 271 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 272 "data/maps/Route111/scripts.pory"
	release
# 273 "data/maps/Route111/scripts.pory"
	end
# 274 "data/maps/Route111/scripts.pory"

# 275 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 276 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 277 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 278 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 279 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 280 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 281 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 282 "data/maps/Route111/scripts.pory"
	closemessage
# 283 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTOR, Route111_Movement_WinstrateEnterHouse
# 284 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 285 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTOR
# 286 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 287 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 288 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 289 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 290 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICTORIA
# 291 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateExitHouse
# 292 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 293 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 294 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 295 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 296 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 297 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 298 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 299 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 300 "data/maps/Route111/scripts.pory"
	closemessage
# 301 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 302 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 303 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICTORIA
# 304 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 305 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 306 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 307 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 308 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VIVI
# 309 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateExitHouse
# 310 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 311 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 312 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 313 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 314 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Common_Movement_WalkInPlaceFasterUp
# 315 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 316 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 317 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 318 "data/maps/Route111/scripts.pory"
	closemessage
# 319 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VIVI, Route111_Movement_WinstrateEnterHouse
# 320 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 321 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VIVI
# 322 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 323 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 324 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 325 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 326 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_VICKY
# 327 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateExitHouse
# 328 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 329 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 330 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 331 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 332 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 333 "data/maps/Route111/scripts.pory"
	closemessage
# 334 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Common_Movement_WalkInPlaceFasterUp
# 335 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 336 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 337 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_VICKY, Route111_Movement_WinstrateEnterHouse
# 338 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 339 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_VICKY
# 340 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 341 "data/maps/Route111/scripts.pory"
	release
# 342 "data/maps/Route111/scripts.pory"
	end
# 343 "data/maps/Route111/scripts.pory"

# 344 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 345 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 346 "data/maps/Route111/scripts.pory"
	waitdooranim
# 347 "data/maps/Route111/scripts.pory"
	return
# 348 "data/maps/Route111/scripts.pory"

# 349 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 350 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 351 "data/maps/Route111/scripts.pory"
	waitdooranim
# 352 "data/maps/Route111/scripts.pory"
	return
# 353 "data/maps/Route111/scripts.pory"

# 354 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 355 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 356 "data/maps/Route111/scripts.pory"
	walk_up
# 357 "data/maps/Route111/scripts.pory"
	step_end
# 358 "data/maps/Route111/scripts.pory"

# 359 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 360 "data/maps/Route111/scripts.pory"
	walk_down
# 361 "data/maps/Route111/scripts.pory"
	step_end
# 362 "data/maps/Route111/scripts.pory"

# 363 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 364 "data/maps/Route111/scripts.pory"
	delay_16
# 365 "data/maps/Route111/scripts.pory"
	delay_16
# 366 "data/maps/Route111/scripts.pory"
	delay_16
# 367 "data/maps/Route111/scripts.pory"
	step_end
# 368 "data/maps/Route111/scripts.pory"

# 369 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 370 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 371 "data/maps/Route111/scripts.pory"
	end
# 372 "data/maps/Route111/scripts.pory"

# 373 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 374 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 375 "data/maps/Route111/scripts.pory"
	end
# 376 "data/maps/Route111/scripts.pory"

# 377 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 378 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 379 "data/maps/Route111/scripts.pory"
	end
# 380 "data/maps/Route111/scripts.pory"

# 381 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 382 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 383 "data/maps/Route111/scripts.pory"
	end
# 384 "data/maps/Route111/scripts.pory"

# 385 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 386 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 387 "data/maps/Route111/scripts.pory"
	end
# 388 "data/maps/Route111/scripts.pory"

# 389 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 390 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 391 "data/maps/Route111/scripts.pory"
	end
# 392 "data/maps/Route111/scripts.pory"

# 393 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 394 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 395 "data/maps/Route111/scripts.pory"
	end
# 396 "data/maps/Route111/scripts.pory"

# 397 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 398 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 399 "data/maps/Route111/scripts.pory"
	end
# 400 "data/maps/Route111/scripts.pory"

# 401 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 402 "data/maps/Route111/scripts.pory"
	lock
# 403 "data/maps/Route111/scripts.pory"
	faceplayer
# 404 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 405 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 406 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 407 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 408 "data/maps/Route111/scripts.pory"
	release
# 409 "data/maps/Route111/scripts.pory"
	end
# 410 "data/maps/Route111/scripts.pory"

# 411 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 412 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 413 "data/maps/Route111/scripts.pory"
	release
# 414 "data/maps/Route111/scripts.pory"
	end
# 415 "data/maps/Route111/scripts.pory"

# 416 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 417 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 418 "data/maps/Route111/scripts.pory"
	release
# 419 "data/maps/Route111/scripts.pory"
	end
# 420 "data/maps/Route111/scripts.pory"

# 421 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 422 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 423 "data/maps/Route111/scripts.pory"
	release
# 424 "data/maps/Route111/scripts.pory"
	end
# 425 "data/maps/Route111/scripts.pory"

# 426 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 427 "data/maps/Route111/scripts.pory"
	lockall
# 428 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 429 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 430 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 431 "data/maps/Route111/scripts.pory"
	closemessage
# 432 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROUTE111_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 433 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 434 "data/maps/Route111/scripts.pory"
	releaseall
# 435 "data/maps/Route111/scripts.pory"
	end
# 436 "data/maps/Route111/scripts.pory"

# 437 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 438 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 439 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 440 "data/maps/Route111/scripts.pory"
	end
# 441 "data/maps/Route111/scripts.pory"

# 442 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 443 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 444 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 445 "data/maps/Route111/scripts.pory"
	end
# 446 "data/maps/Route111/scripts.pory"

# 447 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 448 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 449 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 450 "data/maps/Route111/scripts.pory"
	end
# 451 "data/maps/Route111/scripts.pory"

# 452 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 453 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 454 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 455 "data/maps/Route111/scripts.pory"
	end
# 456 "data/maps/Route111/scripts.pory"

# 457 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 458 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 459 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 460 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 461 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 462 "data/maps/Route111/scripts.pory"
	release
# 463 "data/maps/Route111/scripts.pory"
	end
# 464 "data/maps/Route111/scripts.pory"

# 465 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 466 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 467 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 468 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 469 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 470 "data/maps/Route111/scripts.pory"
	release
# 471 "data/maps/Route111/scripts.pory"
	end
# 472 "data/maps/Route111/scripts.pory"

# 473 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 474 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 475 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 476 "data/maps/Route111/scripts.pory"
	end
# 477 "data/maps/Route111/scripts.pory"

# 478 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 479 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 480 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 481 "data/maps/Route111/scripts.pory"
	end
# 482 "data/maps/Route111/scripts.pory"

# 483 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 484 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 485 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 486 "data/maps/Route111/scripts.pory"
	end
# 487 "data/maps/Route111/scripts.pory"

# 488 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 489 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 490 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 491 "data/maps/Route111/scripts.pory"
	end
# 492 "data/maps/Route111/scripts.pory"

# 493 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 494 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 495 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 496 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 497 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 498 "data/maps/Route111/scripts.pory"
	release
# 499 "data/maps/Route111/scripts.pory"
	end
# 500 "data/maps/Route111/scripts.pory"

# 501 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 502 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 503 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 504 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 505 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 506 "data/maps/Route111/scripts.pory"
	release
# 507 "data/maps/Route111/scripts.pory"
	end
# 508 "data/maps/Route111/scripts.pory"

# 509 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 510 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 511 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 512 "data/maps/Route111/scripts.pory"
	end
# 513 "data/maps/Route111/scripts.pory"

# 514 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 515 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 516 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 517 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 518 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 519 "data/maps/Route111/scripts.pory"
	release
# 520 "data/maps/Route111/scripts.pory"
	end
# 521 "data/maps/Route111/scripts.pory"

# 522 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 523 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 524 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 525 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 526 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 527 "data/maps/Route111/scripts.pory"
	release
# 528 "data/maps/Route111/scripts.pory"
	end
# 529 "data/maps/Route111/scripts.pory"

# 530 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 531 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 532 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 533 "data/maps/Route111/scripts.pory"
	end
# 534 "data/maps/Route111/scripts.pory"

# 535 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 536 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 537 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 538 "data/maps/Route111/scripts.pory"
	end
# 539 "data/maps/Route111/scripts.pory"

# 540 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 541 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 542 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 543 "data/maps/Route111/scripts.pory"
	end
# 544 "data/maps/Route111/scripts.pory"

# 545 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 546 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 547 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 548 "data/maps/Route111/scripts.pory"
	end
# 549 "data/maps/Route111/scripts.pory"

# 550 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 551 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 552 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 553 "data/maps/Route111/scripts.pory"
	end
# 554 "data/maps/Route111/scripts.pory"

# 555 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 556 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 557 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 558 "data/maps/Route111/scripts.pory"
	end
# 559 "data/maps/Route111/scripts.pory"

# 560 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 561 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 562 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 563 "data/maps/Route111/scripts.pory"
	end
# 564 "data/maps/Route111/scripts.pory"

# 565 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 566 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 567 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 568 "data/maps/Route111/scripts.pory"
	end
# 569 "data/maps/Route111/scripts.pory"

# 570 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 571 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 572 "data/maps/Route111/scripts.pory"
	end
# 573 "data/maps/Route111/scripts.pory"

# 574 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 575 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 576 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 577 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 578 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 579 "data/maps/Route111/scripts.pory"

# 580 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 581 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 582 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 583 "data/maps/Route111/scripts.pory"

# 584 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 585 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 586 "data/maps/Route111/scripts.pory"

# 587 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 588 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 589 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 590 "data/maps/Route111/scripts.pory"

# 591 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 592 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 593 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 594 "data/maps/Route111/scripts.pory"

# 595 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 596 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 597 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 598 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 599 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 600 "data/maps/Route111/scripts.pory"

# 601 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 602 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 603 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 604 "data/maps/Route111/scripts.pory"

# 605 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 606 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 607 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 608 "data/maps/Route111/scripts.pory"

# 609 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 610 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 611 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 612 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 613 "data/maps/Route111/scripts.pory"

# 614 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 615 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 616 "data/maps/Route111/scripts.pory"

# 617 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 618 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 619 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 620 "data/maps/Route111/scripts.pory"

# 621 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 622 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 623 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 624 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 625 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 626 "data/maps/Route111/scripts.pory"

# 627 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 628 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 629 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 630 "data/maps/Route111/scripts.pory"

# 631 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 632 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 633 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 634 "data/maps/Route111/scripts.pory"

# 635 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 636 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 637 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 638 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 639 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 640 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 641 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 642 "data/maps/Route111/scripts.pory"

# 643 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 644 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 645 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 646 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 647 "data/maps/Route111/scripts.pory"

# 648 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 649 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 650 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 651 "data/maps/Route111/scripts.pory"

# 652 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 653 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 654 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 655 "data/maps/Route111/scripts.pory"

# 656 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 657 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 658 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 659 "data/maps/Route111/scripts.pory"

# 660 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 661 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 662 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 663 "data/maps/Route111/scripts.pory"

# 664 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 665 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 666 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 667 "data/maps/Route111/scripts.pory"

# 668 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 669 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 670 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 671 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 672 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 673 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 674 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 675 "data/maps/Route111/scripts.pory"

# 676 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 677 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 678 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 679 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 680 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 681 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 682 "data/maps/Route111/scripts.pory"

# 683 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 684 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 685 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 686 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 687 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 688 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 689 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 690 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 691 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 692 "data/maps/Route111/scripts.pory"

# 693 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 694 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 695 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 696 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 697 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 698 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 699 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 700 "data/maps/Route111/scripts.pory"

# 701 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 702 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 703 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 704 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 705 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 706 "data/maps/Route111/scripts.pory"

# 707 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 708 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 709 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 710 "data/maps/Route111/scripts.pory"

# 711 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 712 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 713 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 714 "data/maps/Route111/scripts.pory"

# 715 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 716 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 717 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 718 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 719 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 720 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 721 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 722 "data/maps/Route111/scripts.pory"

# 723 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 724 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 725 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 726 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"
