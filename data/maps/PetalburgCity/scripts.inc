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
	setobjectxyperm LOCALID_GYM_BOY, 5, 15
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
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 51 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 52 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 52 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 52 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 52 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 52 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 52 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 52 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 52 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 52 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 52 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 52 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 53 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 54 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 54 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 56 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 57 "data/maps/PetalburgCity/scripts.pory"
	step_faster_up
# 58 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 58 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 59 "data/maps/PetalburgCity/scripts.pory"
	step_faster_right
	step_end

PetalburgCity_EventScript_WalkToWallyHouse::
# 63 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 64 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 65 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_EventScript_WalkToWallyHouse_Movement_0
# 66 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_WalkToWallyHouse_Movement_1
# 67 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 68 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 69 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 70 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 71 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 72 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_EventScript_WalkToWallyHouse_Movement_2
# 73 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_WalkToWallyHouse_Movement_3
# 74 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 75 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 76 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 77 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 78 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 79 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 80 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 81 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 82 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 83 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 84 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end


PetalburgCity_EventScript_Boy::
# 89 "data/maps/PetalburgCity/scripts.pory"
	lock_faceplayer
# 90 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 91 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 92 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 93 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	release_end


PetalburgCity_EventScript_WallysMom::
# 98 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
	end


PetalburgCity_EventScript_GymSign::
# 103 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
	end


PetalburgCity_EventScript_CitySign::
# 108 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
	end


PetalburgCity_EventScript_Gentleman::
# 113 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
	end


PetalburgCity_EventScript_WallyHouseSign::
# 118 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	end


PetalburgCity_EventScript_ShowGymToPlayer0::
# 123 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 124 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 125 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer1::
# 130 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 131 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 132 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer2::
# 137 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 138 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 139 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer3::
# 144 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 145 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 146 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer::
# 151 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 152 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 153 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 154 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 155 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 156 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 157 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 158 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 159 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 160 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_ShowGymToPlayer_3
# 164 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_ShowGymToPlayer_4
# 166 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_ShowGymToPlayer_5
# 170 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_ShowGymToPlayer_6
PetalburgCity_EventScript_ShowGymToPlayer_1:
# 175 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 176 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 177 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 178 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 179 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_ShowGymToPlayer_9
# 182 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_ShowGymToPlayer_10
# 185 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_ShowGymToPlayer_11
# 188 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_ShowGymToPlayer_12
PetalburgCity_EventScript_ShowGymToPlayer_7:
# 192 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 193 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 194 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_StepFasterLeft
# 195 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 196 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 197 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 198 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 199 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_11
# 200 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 201 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 202 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_ShowGymToPlayer_3:
# 161 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_0
# 162 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 163 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_4:
# 165 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_1
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_5:
# 167 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_2
# 168 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 169 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_6:
# 171 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_3
# 172 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 173 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_9:
# 180 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_4
# 181 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_5
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_10:
# 183 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_6
# 184 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_7
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_11:
# 186 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_4
# 187 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_8
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_12:
# 189 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_9
# 190 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_10
	goto PetalburgCity_EventScript_ShowGymToPlayer_7


# 207 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48:
# 208 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 208 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 208 "data/maps/PetalburgCity/scripts.pory"
	delay_16
	step_end

PetalburgCity_EventScript_Scott0::
# 212 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 213 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 214 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 215 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 14
# 216 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott1::
# 221 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 222 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 223 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 224 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 15
# 225 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott2::
# 230 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 231 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 232 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 233 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 16
# 234 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott3::
# 239 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 240 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 241 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 242 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 17
# 243 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott::
# 248 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_0
# 249 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 250 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 251 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 252 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 253 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 254 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 255 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_0
# 256 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 257 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 258 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 259 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 260 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 261 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 262 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_StepFasterRight
# 263 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 264 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 265 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 266 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 267 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_StepFasterLeft
# 268 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 269 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 270 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 271 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 272 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 273 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_Scott_3
# 276 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_Scott_4
# 279 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_Scott_5
# 282 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_Scott_6
PetalburgCity_EventScript_Scott_1:
# 286 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 287 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 288 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 289 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_Scott_3:
# 274 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_1
# 275 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_2
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_4:
# 277 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_3
# 278 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_4
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_5:
# 280 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_3
# 281 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_4
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_6:
# 283 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_5
# 284 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_6
	goto PetalburgCity_EventScript_Scott_1


PetalburgCity_EventScript_GymBoy::
# 294 "data/maps/PetalburgCity/scripts.pory"
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
	walk_left
# 27 "data/maps/PetalburgCity/scripts.pory"
	walk_left
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

# 65 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_0:
# 65 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 65 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 66 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_1:
# 66 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 66 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 72 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_2:
# 72 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 72 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
	step_end

# 73 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_3:
# 73 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 73 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 161 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_0:
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 161 "data/maps/PetalburgCity/scripts.pory"
	step_faster_up
	step_end

# 165 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_1:
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 167 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_2:
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 167 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
	step_end

# 171 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_3:
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 171 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
	step_end

# 180 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_4:
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 181 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_5:
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
	walk_up
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 183 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_6:
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 184 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_7:
# 184 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 184 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 187 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_8:
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_up
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 189 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_9:
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 190 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_10:
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 199 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_11:
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 199 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 199 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 199 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 199 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 199 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 199 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 199 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 199 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 199 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 199 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 199 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
	step_end

# 248 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_0:
# 248 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 248 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 248 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 248 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 274 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_1:
# 274 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 274 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
# 274 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 274 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 274 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 274 "data/maps/PetalburgCity/scripts.pory"
	step_faster_left
	step_end

# 275 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_2:
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 275 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 277 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_3:
# 277 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 277 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
# 277 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 277 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 277 "data/maps/PetalburgCity/scripts.pory"
	step_faster_left
	step_end

# 278 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_4:
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 278 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 283 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_5:
# 283 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 283 "data/maps/PetalburgCity/scripts.pory"
	step_faster_up
# 283 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 283 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 283 "data/maps/PetalburgCity/scripts.pory"
	step_faster_left
	step_end

# 284 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_6:
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

PetalburgCity_Text_WhereIsWally::
# 298 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
	.string "We have to leave for VERDANTURF TOWN\n"
	.string "very soon…$"

PetalburgCity_Text_AreYouRookieTrainer::
# 305 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
	.string "A rookie TRAINER?\p"
	.string "Do you know what POKéMON TRAINERS\n"
	.string "do when they reach a new town?\p"
	.string "They first check what kind of GYM\n"
	.string "is in the town.$"

PetalburgCity_Text_ThisIsPetalburgGym::
# 316 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"

PetalburgCity_Text_ThisIsGymSign::
# 320 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
	.string "whenever you're looking for a GYM.$"

PetalburgCity_Text_WaterReflection::
# 325 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
	.string "It's a shining grin full of hope…\p"
	.string "Or it could be a look of somber silence\n"
	.string "struggling with fear…\p"
	.string "What do you see reflected in your face?$"

PetalburgCity_Text_FullPartyExplanation::
# 336 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
	.string "If you catch another one…\p"
	.string "It is automatically sent to a STORAGE\n"
	.string "BOX over a PC connection.$"

PetalburgCity_Text_GymSign::
# 344 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
	.string "LEADER: NORMAN\l"
	.string "“A man in pursuit of power!”$"

PetalburgCity_Text_CitySign::
# 350 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
	.string "“Where people mingle with nature.”$"

PetalburgCity_Text_WallyHouseSign::
# 355 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"

PetalburgCity_Text_AreYouATrainer::
# 359 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a POKéMON TRAINER?$"

PetalburgCity_Text_WellMaybeNot::
# 366 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie TRAINER,\n"
	.string "or maybe you're just an ordinary kid.$"

PetalburgCity_Text_ImLookingForTalentedTrainers::
# 376 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
	.string "talented TRAINERS.\p"
	.string "I'm sorry to have taken your time.$"
