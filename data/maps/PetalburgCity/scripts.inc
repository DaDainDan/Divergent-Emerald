PetalburgCity_MapScripts::
# 2 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 4 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_PETALBURG_CITY_STATE
# 5 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 6 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 7 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 8
	goto_if_eq PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	end

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 5 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
	goto PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 8 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 9 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
	goto PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 12 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
	goto PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5

PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 18 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
	.2byte 0


PetalburgCity_EventScript_WallyTutorial::
# 23 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 24 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 25 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 26 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 27 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_WallyTutorial_Movement_0
# 28 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 29 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 30 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 31 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 32 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_StepFasterLeft, MAP_PETALBURG_CITY
# 33 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 34 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 35 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 36 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 37 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 38 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 39 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 40 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 41 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 42 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 43 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 44 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end


# 48 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 49 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 50 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 50 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 50 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 50 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 50 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 50 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 50 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 52 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 52 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 54 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 55 "data/maps/PetalburgCity/scripts.pory"
	step_faster_up
# 56 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 56 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 57 "data/maps/PetalburgCity/scripts.pory"
	step_faster_right
	step_end

PetalburgCity_EventScript_WalkToWallyHouse::
# 61 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 62 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 63 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_EventScript_WalkToWallyHouse_Movement_0
# 64 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_WalkToWallyHouse_Movement_1
# 65 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 66 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 67 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 68 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 69 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 70 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_EventScript_WalkToWallyHouse_Movement_2
# 71 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_WalkToWallyHouse_Movement_3
# 72 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 73 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 74 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 75 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 76 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 77 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 78 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 79 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 80 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 81 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 82 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end


PetalburgCity_EventScript_Boy::
# 87 "data/maps/PetalburgCity/scripts.pory"
	lock_faceplayer
# 88 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 89 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 90 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 91 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	release_end


PetalburgCity_EventScript_WallysMom::
# 96 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
	end


PetalburgCity_EventScript_GymSign::
# 101 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
	end


PetalburgCity_EventScript_CitySign::
# 106 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
	end


PetalburgCity_EventScript_Gentleman::
# 111 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
	end


PetalburgCity_EventScript_WallyHouseSign::
# 116 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	end


PetalburgCity_EventScript_ShowGymToPlayer0::
# 121 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 122 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 123 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer1::
# 128 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 129 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 130 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer2::
# 135 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 136 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 137 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer3::
# 142 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 143 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 144 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer::
# 149 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 150 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 151 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 152 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 153 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 154 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 155 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 156 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 157 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 158 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_ShowGymToPlayer_3
# 162 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_ShowGymToPlayer_4
# 164 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_ShowGymToPlayer_5
# 168 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_ShowGymToPlayer_6
PetalburgCity_EventScript_ShowGymToPlayer_1:
# 173 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 174 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 175 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 176 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 177 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_ShowGymToPlayer_9
# 180 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_ShowGymToPlayer_10
# 183 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_ShowGymToPlayer_11
# 186 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_ShowGymToPlayer_12
PetalburgCity_EventScript_ShowGymToPlayer_7:
# 190 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 191 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 192 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_StepFasterRight
# 193 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 194 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 195 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 196 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 197 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_11
# 198 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 199 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 200 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_ShowGymToPlayer_3:
# 159 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_0
# 160 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 161 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_4:
# 163 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_1
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_5:
# 165 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_2
# 166 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 167 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_6:
# 169 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_3
# 170 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 171 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_9:
# 178 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_4
# 179 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_5
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_10:
# 181 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_6
# 182 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_7
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_11:
# 184 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_4
# 185 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_8
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_12:
# 187 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_9
# 188 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_10
	goto PetalburgCity_EventScript_ShowGymToPlayer_7


# 205 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 206 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 206 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 206 "data/maps/PetalburgCity/scripts.pory"
	delay_16
	step_end

PetalburgCity_EventScript_Scott0::
# 210 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 211 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 212 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 213 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
# 214 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott1::
# 219 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 220 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 221 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 222 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
# 223 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott2::
# 228 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 229 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 230 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 231 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
# 232 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott3::
# 237 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 238 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 239 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 240 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
# 241 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott::
# 246 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_0
# 247 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 248 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 249 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 250 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 251 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 252 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 253 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_0
# 254 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 255 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 256 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 257 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 258 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 259 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 260 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_StepFasterRight
# 261 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 262 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 263 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 264 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 265 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_StepFasterLeft
# 266 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 267 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 268 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 269 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 270 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 271 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_Scott_3
# 274 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_Scott_4
# 277 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_Scott_5
# 280 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_Scott_6
PetalburgCity_EventScript_Scott_1:
# 284 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 285 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 286 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 287 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_Scott_3:
# 272 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_1
# 273 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_2
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_4:
# 275 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_3
# 276 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_ShowGymToPlayer_Movement_11
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_5:
# 278 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_3
# 279 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_ShowGymToPlayer_Movement_11
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_6:
# 281 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_4
# 282 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_5
	goto PetalburgCity_EventScript_Scott_1


PetalburgCity_EventScript_GymBoy::
# 292 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
	end


# 27 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial_Movement_0:
# 27 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 27 "data/maps/PetalburgCity/scripts.pory"
	step_faster_right
	step_end

# 63 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_0:
# 63 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 63 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 64 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_1:
# 64 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 64 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 70 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_2:
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 70 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
	step_end

# 71 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_3:
# 71 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 71 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 159 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_0:
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 159 "data/maps/PetalburgCity/scripts.pory"
	step_faster_up
	step_end

# 163 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_1:
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 165 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_2:
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 165 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
	step_end

# 169 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_3:
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 169 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
	step_end

# 178 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_4:
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	step_faster_up
	step_end

# 179 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_5:
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 181 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_6:
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	step_faster_up
	step_end

# 182 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_7:
# 182 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 182 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 185 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_8:
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 187 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_9:
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	step_faster_up
	step_end

# 188 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_10:
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 197 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_11:
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 246 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_0:
# 246 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 246 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 246 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 246 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 272 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_1:
# 272 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 272 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
# 272 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 272 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 272 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 272 "data/maps/PetalburgCity/scripts.pory"
	step_faster_left
	step_end

# 273 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_2:
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 273 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 275 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_3:
# 275 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 275 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
# 275 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 275 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 275 "data/maps/PetalburgCity/scripts.pory"
	step_faster_left
	step_end

# 281 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_4:
# 281 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 281 "data/maps/PetalburgCity/scripts.pory"
	step_faster_up
# 281 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 281 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 281 "data/maps/PetalburgCity/scripts.pory"
	step_faster_left
	step_end

# 282 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_5:
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 282 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

PetalburgCity_Text_WhereIsWally::
# 296 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
	.string "We have to leave for VERDANTURF TOWN\n"
	.string "very soon…$"

PetalburgCity_Text_AreYouRookieTrainer::
# 303 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
	.string "A rookie TRAINER?\p"
	.string "Do you know what POKéMON TRAINERS\n"
	.string "do when they reach a new town?\p"
	.string "They first check what kind of GYM\n"
	.string "is in the town.$"

PetalburgCity_Text_ThisIsPetalburgGym::
# 314 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"

PetalburgCity_Text_ThisIsGymSign::
# 318 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
	.string "whenever you're looking for a GYM.$"

PetalburgCity_Text_WaterReflection::
# 323 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
	.string "It's a shining grin full of hope…\p"
	.string "Or it could be a look of somber silence\n"
	.string "struggling with fear…\p"
	.string "What do you see reflected in your face?$"

PetalburgCity_Text_FullPartyExplanation::
# 334 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
	.string "If you catch another one…\p"
	.string "It is automatically sent to a STORAGE\n"
	.string "BOX over a PC connection.$"

PetalburgCity_Text_GymSign::
# 342 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
	.string "LEADER: NORMAN\l"
	.string "“A man in pursuit of power!”$"

PetalburgCity_Text_CitySign::
# 348 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
	.string "“Where people mingle with nature.”$"

PetalburgCity_Text_WallyHouseSign::
# 353 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"

PetalburgCity_Text_AreYouATrainer::
# 357 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a POKéMON TRAINER?$"

PetalburgCity_Text_WellMaybeNot::
# 364 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie TRAINER,\n"
	.string "or maybe you're just an ordinary kid.$"

PetalburgCity_Text_ImLookingForTalentedTrainers::
# 374 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
	.string "talented TRAINERS.\p"
	.string "I'm sorry to have taken your time.$"
