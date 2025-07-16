# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 3 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 4 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 5 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 6 "data/maps/PetalburgCity/scripts.pory"

# 7 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 8 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 9 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 10 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 11 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 12 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 13 "data/maps/PetalburgCity/scripts.pory"
	end
# 14 "data/maps/PetalburgCity/scripts.pory"

# 15 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 16 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 15
# 17 "data/maps/PetalburgCity/scripts.pory"
	return
# 18 "data/maps/PetalburgCity/scripts.pory"

# 19 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 20 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 21 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 22 "data/maps/PetalburgCity/scripts.pory"
	return
# 23 "data/maps/PetalburgCity/scripts.pory"

# 24 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 25 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 26 "data/maps/PetalburgCity/scripts.pory"
	return
# 27 "data/maps/PetalburgCity/scripts.pory"

# 28 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 29 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 30 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 31 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 32 "data/maps/PetalburgCity/scripts.pory"

# 33 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 34 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 35 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 36 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 37 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 38 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 39 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 40 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 41 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 42 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 43 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 44 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 45 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 46 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 47 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 48 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 49 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 50 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 51 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 52 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 53 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 54 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 55 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 56 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 57 "data/maps/PetalburgCity/scripts.pory"
	end
# 58 "data/maps/PetalburgCity/scripts.pory"

# 59 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 60 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 61 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 62 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 63 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 64 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 65 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 66 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 67 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 68 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 69 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 70 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 71 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 73 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 74 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 75 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 76 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 77 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 78 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 79 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 80 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 81 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 82 "data/maps/PetalburgCity/scripts.pory"
	end
# 83 "data/maps/PetalburgCity/scripts.pory"

# 84 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 85 "data/maps/PetalburgCity/scripts.pory"
	lock
# 86 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 87 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 88 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 89 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 90 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/PetalburgCity/scripts.pory"
	release
# 92 "data/maps/PetalburgCity/scripts.pory"
	end
# 93 "data/maps/PetalburgCity/scripts.pory"

# 94 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 95 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 96 "data/maps/PetalburgCity/scripts.pory"
	end
# 97 "data/maps/PetalburgCity/scripts.pory"

# 98 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 99 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 100 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 101 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 102 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 103 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 104 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 105 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 106 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 107 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 108 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 109 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 124 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 125 "data/maps/PetalburgCity/scripts.pory"

# 126 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 129 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 130 "data/maps/PetalburgCity/scripts.pory"

# 131 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 132 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 157 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 158 "data/maps/PetalburgCity/scripts.pory"

# 159 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 161 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 162 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 163 "data/maps/PetalburgCity/scripts.pory"

# 164 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 165 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 205 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 206 "data/maps/PetalburgCity/scripts.pory"

# 207 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 208 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 225 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 227 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 228 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 230 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 231 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 234 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 235 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 236 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 237 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 238 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 239 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 240 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 241 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 242 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 243 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 244 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 245 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 246 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 247 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 248 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 249 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 250 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 251 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 252 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 253 "data/maps/PetalburgCity/scripts.pory"

# 254 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 255 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 256 "data/maps/PetalburgCity/scripts.pory"
	end
# 257 "data/maps/PetalburgCity/scripts.pory"

# 258 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 259 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 260 "data/maps/PetalburgCity/scripts.pory"
	end
# 261 "data/maps/PetalburgCity/scripts.pory"

# 262 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 263 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 264 "data/maps/PetalburgCity/scripts.pory"
	end
# 265 "data/maps/PetalburgCity/scripts.pory"

# 266 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 267 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 268 "data/maps/PetalburgCity/scripts.pory"
	end
# 269 "data/maps/PetalburgCity/scripts.pory"

# 270 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 271 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 272 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 273 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 274 "data/maps/PetalburgCity/scripts.pory"
	end
# 275 "data/maps/PetalburgCity/scripts.pory"

# 276 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 277 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 278 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 279 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 280 "data/maps/PetalburgCity/scripts.pory"
	end
# 281 "data/maps/PetalburgCity/scripts.pory"

# 282 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 283 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 284 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 285 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 286 "data/maps/PetalburgCity/scripts.pory"
	end
# 287 "data/maps/PetalburgCity/scripts.pory"

# 288 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 289 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 290 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 291 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 292 "data/maps/PetalburgCity/scripts.pory"
	end
# 293 "data/maps/PetalburgCity/scripts.pory"

# 294 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 295 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 296 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 297 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 298 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 299 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 300 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 301 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 302 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 303 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 304 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 305 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 306 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 307 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 308 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 309 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 310 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 311 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 312 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 313 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 314 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterLeft
# 315 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 316 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 317 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 318 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 319 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 320 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 322 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 323 "data/maps/PetalburgCity/scripts.pory"
	end
# 324 "data/maps/PetalburgCity/scripts.pory"

# 325 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 326 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 327 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 329 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 330 "data/maps/PetalburgCity/scripts.pory"
	return
# 331 "data/maps/PetalburgCity/scripts.pory"

# 332 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 333 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 334 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 335 "data/maps/PetalburgCity/scripts.pory"
	return
# 336 "data/maps/PetalburgCity/scripts.pory"

# 337 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 338 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 339 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 340 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 341 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 342 "data/maps/PetalburgCity/scripts.pory"
	return
# 343 "data/maps/PetalburgCity/scripts.pory"

# 344 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 345 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 346 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 347 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 348 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 349 "data/maps/PetalburgCity/scripts.pory"
	return
# 350 "data/maps/PetalburgCity/scripts.pory"

# 351 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 352 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 353 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 354 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 355 "data/maps/PetalburgCity/scripts.pory"
	return
# 356 "data/maps/PetalburgCity/scripts.pory"

# 357 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 358 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 359 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 360 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 361 "data/maps/PetalburgCity/scripts.pory"
	return
# 362 "data/maps/PetalburgCity/scripts.pory"

# 363 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 364 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 365 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 366 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 367 "data/maps/PetalburgCity/scripts.pory"
	return
# 368 "data/maps/PetalburgCity/scripts.pory"

# 369 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 370 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 371 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 372 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 373 "data/maps/PetalburgCity/scripts.pory"
	return
# 374 "data/maps/PetalburgCity/scripts.pory"

# 375 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 376 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 377 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 378 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 379 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 380 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 381 "data/maps/PetalburgCity/scripts.pory"

# 382 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 387 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 388 "data/maps/PetalburgCity/scripts.pory"

# 389 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 392 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 393 "data/maps/PetalburgCity/scripts.pory"

# 394 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 399 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 400 "data/maps/PetalburgCity/scripts.pory"

# 401 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 407 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 408 "data/maps/PetalburgCity/scripts.pory"

# 409 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 424 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 425 "data/maps/PetalburgCity/scripts.pory"

# 426 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 444 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 445 "data/maps/PetalburgCity/scripts.pory"

# 446 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 461 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 462 "data/maps/PetalburgCity/scripts.pory"

# 463 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 479 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 480 "data/maps/PetalburgCity/scripts.pory"

# 481 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 500 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 501 "data/maps/PetalburgCity/scripts.pory"

# 502 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 505 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 506 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 507 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 508 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 509 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 510 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 511 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 512 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 513 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 514 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 515 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 516 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 517 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 518 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 519 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 520 "data/maps/PetalburgCity/scripts.pory"

# 521 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 522 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 523 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 524 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 525 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 526 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 527 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 528 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 529 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 530 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 531 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 532 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 533 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 534 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 535 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 536 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 537 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 538 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 539 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 540 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 541 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 542 "data/maps/PetalburgCity/scripts.pory"

# 543 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 544 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 545 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 546 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 547 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 548 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 549 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 550 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 551 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 552 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 553 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 554 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 555 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 556 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 557 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 558 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 559 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 560 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 561 "data/maps/PetalburgCity/scripts.pory"

# 562 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 563 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 564 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 565 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 566 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 567 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 568 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 569 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 570 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 571 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 572 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 573 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 574 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 575 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 576 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 577 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 578 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 579 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 580 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 581 "data/maps/PetalburgCity/scripts.pory"

# 582 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 583 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 584 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 585 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 586 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 14
# 587 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 588 "data/maps/PetalburgCity/scripts.pory"
	end
# 589 "data/maps/PetalburgCity/scripts.pory"

# 590 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 591 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 592 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 593 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 594 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 15
# 595 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 596 "data/maps/PetalburgCity/scripts.pory"
	end
# 597 "data/maps/PetalburgCity/scripts.pory"

# 598 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 599 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 600 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 601 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 602 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 16
# 603 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 604 "data/maps/PetalburgCity/scripts.pory"
	end
# 605 "data/maps/PetalburgCity/scripts.pory"

# 606 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 607 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 608 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 609 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 610 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 17
# 611 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 612 "data/maps/PetalburgCity/scripts.pory"
	end
# 613 "data/maps/PetalburgCity/scripts.pory"

# 614 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 615 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 616 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 617 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 618 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 619 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 620 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 621 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 622 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 623 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 624 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 625 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 626 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 627 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 628 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 629 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 630 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 631 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 632 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 633 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 634 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 635 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 636 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 637 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 638 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 639 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 640 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 641 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 642 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 643 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 644 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 645 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 646 "data/maps/PetalburgCity/scripts.pory"
	end
# 647 "data/maps/PetalburgCity/scripts.pory"

# 648 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 649 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 650 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit0
# 651 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 652 "data/maps/PetalburgCity/scripts.pory"
	return
# 653 "data/maps/PetalburgCity/scripts.pory"

# 654 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 655 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 656 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit1
# 657 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 658 "data/maps/PetalburgCity/scripts.pory"
	return
# 659 "data/maps/PetalburgCity/scripts.pory"

# 660 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 661 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 662 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit2
# 663 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 664 "data/maps/PetalburgCity/scripts.pory"
	return
# 665 "data/maps/PetalburgCity/scripts.pory"

# 666 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 667 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 668 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit3
# 669 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 670 "data/maps/PetalburgCity/scripts.pory"
	return
# 671 "data/maps/PetalburgCity/scripts.pory"

# 672 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 677 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 678 "data/maps/PetalburgCity/scripts.pory"

# 679 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 680 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 681 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 682 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 683 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 684 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 685 "data/maps/PetalburgCity/scripts.pory"

# 686 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 687 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 688 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 689 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 691 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 692 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 695 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 696 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 697 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 698 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 699 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 700 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 701 "data/maps/PetalburgCity/scripts.pory"

# 702 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 703 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 704 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 705 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 706 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 707 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 708 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 709 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 710 "data/maps/PetalburgCity/scripts.pory"

# 711 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 712 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 713 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 714 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 715 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 716 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 717 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 718 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 719 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 720 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 721 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 722 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 723 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 724 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 725 "data/maps/PetalburgCity/scripts.pory"

# 726 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 727 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 728 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 729 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 730 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 731 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 732 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 733 "data/maps/PetalburgCity/scripts.pory"

# 734 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 735 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 736 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 737 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 738 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 739 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 740 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 741 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 742 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 743 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 744 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 745 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 746 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 747 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 748 "data/maps/PetalburgCity/scripts.pory"

# 749 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 750 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 751 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 752 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 753 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 754 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 755 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 756 "data/maps/PetalburgCity/scripts.pory"

# 757 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 758 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 759 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 760 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 761 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 762 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 763 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 764 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 765 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 766 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 767 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 768 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 769 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 770 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 771 "data/maps/PetalburgCity/scripts.pory"

# 772 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 773 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 774 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 775 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 776 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 777 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 778 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 779 "data/maps/PetalburgCity/scripts.pory"

# 780 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 781 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 782 "data/maps/PetalburgCity/scripts.pory"
	end
# 783 "data/maps/PetalburgCity/scripts.pory"

# 784 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 785 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 786 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 787 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 788 "data/maps/PetalburgCity/scripts.pory"

# 789 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 790 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 791 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 792 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 793 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 794 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 795 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 796 "data/maps/PetalburgCity/scripts.pory"

# 797 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 798 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 799 "data/maps/PetalburgCity/scripts.pory"

# 800 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 801 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 802 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 803 "data/maps/PetalburgCity/scripts.pory"

# 804 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 805 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 806 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 807 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 808 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 809 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 810 "data/maps/PetalburgCity/scripts.pory"

# 811 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 812 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 813 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 814 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 815 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 816 "data/maps/PetalburgCity/scripts.pory"

# 817 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 818 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 819 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 820 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 821 "data/maps/PetalburgCity/scripts.pory"

# 822 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 823 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 824 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 825 "data/maps/PetalburgCity/scripts.pory"

# 826 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 827 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 828 "data/maps/PetalburgCity/scripts.pory"

# 829 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 830 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 831 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 832 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 833 "data/maps/PetalburgCity/scripts.pory"

# 834 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 835 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 836 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 837 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 838 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 839 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 840 "data/maps/PetalburgCity/scripts.pory"

# 841 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 842 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 843 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 844 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"
