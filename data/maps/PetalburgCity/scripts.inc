PetalburgCity_MapScripts::
# 2 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/PetalburgCity/scripts.pory"
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
	case 6, PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 10 "data/maps/PetalburgCity/scripts.pory"
	case 4, PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 8
	goto_if_eq PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
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

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_WALLY, 17, 6
# 12 "data/maps/PetalburgCity/scripts.pory"
	setobjectmovementtype LOCALID_PETALBURG_WALLY, MOVEMENT_TYPE_FACE_DOWN
	goto PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 15 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
	goto PetalburgCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 20 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 21 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 6, PetalburgCity_EventScript_WalkToWallyHouse
	.2byte 0


PetalburgCity_EventScript_WallyTutorial::
# 26 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 27 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 28 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 29 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 30 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_WallyTutorial_Movement_0
# 31 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 32 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 33 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 34 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 35 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_StepFasterLeft, MAP_PETALBURG_CITY
# 36 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 37 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 38 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 39 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 40 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 41 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 42 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 43 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 44 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 45 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 46 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 47 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 48 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end


# 52 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 53 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 54 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 54 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 55 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 56 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 56 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 56 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 56 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 56 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 56 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 56 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 56 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 56 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 56 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 56 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 57 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 58 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 58 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 59 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 60 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 61 "data/maps/PetalburgCity/scripts.pory"
	step_faster_up
# 62 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 62 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 63 "data/maps/PetalburgCity/scripts.pory"
	step_faster_right
	step_end

PetalburgCity_EventScript_WalkToWallyHouse::
# 67 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 68 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 69 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_EventScript_WalkToWallyHouse_Movement_0
# 70 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_WalkToWallyHouse_Movement_1
# 71 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 73 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 74 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 75 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 76 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_EventScript_WalkToWallyHouse_Movement_2
# 77 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_WalkToWallyHouse_Movement_3
# 78 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 79 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 80 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 81 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 82 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 83 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 84 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 85 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 86 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 87 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 88 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end


PetalburgCity_EventScript_Boy::
# 93 "data/maps/PetalburgCity/scripts.pory"
	lock_faceplayer
# 94 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 95 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 96 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 97 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	release_end


PetalburgCity_EventScript_WallysMom::
# 102 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
	end


PetalburgCity_EventScript_GymSign::
# 107 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
	end


PetalburgCity_EventScript_CitySign::
# 112 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
	end


PetalburgCity_EventScript_NormansLodgeSign::
# 117 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_NormansLodgeSign, MSGBOX_SIGN
	end


PetalburgCity_EventScript_Gentleman::
# 122 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
	end


PetalburgCity_EventScript_WallyHouseSign::
# 127 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	end


PetalburgCity_EventScript_ShowGymToPlayer0::
# 132 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 133 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 134 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer1::
# 139 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 140 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 141 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer2::
# 146 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 147 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 148 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer3::
# 153 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 154 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 155 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer::
# 160 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 161 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 162 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 163 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 164 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 165 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 166 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 167 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 168 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 169 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_ShowGymToPlayer_3
# 173 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_ShowGymToPlayer_4
# 175 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_ShowGymToPlayer_5
# 179 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_ShowGymToPlayer_6
PetalburgCity_EventScript_ShowGymToPlayer_1:
# 184 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 185 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 186 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 187 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 188 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_ShowGymToPlayer_9
# 191 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_ShowGymToPlayer_10
# 194 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_ShowGymToPlayer_11
# 197 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_ShowGymToPlayer_12
PetalburgCity_EventScript_ShowGymToPlayer_7:
# 201 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 202 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 203 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_StepFasterLeft
# 204 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 205 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 206 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 207 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 208 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_11
# 209 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 210 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 211 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_ShowGymToPlayer_3:
# 170 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_0
# 171 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 172 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_4:
# 174 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_1
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_5:
# 176 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_2
# 177 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 178 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_6:
# 180 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_3
# 181 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 182 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_9:
# 189 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_4
# 190 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_5
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_10:
# 192 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_6
# 193 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_7
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_11:
# 195 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_4
# 196 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_8
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_12:
# 198 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_9
# 199 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_10
	goto PetalburgCity_EventScript_ShowGymToPlayer_7


# 216 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48:
# 217 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 217 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 217 "data/maps/PetalburgCity/scripts.pory"
	delay_16
	step_end

PetalburgCity_EventScript_Scott0::
# 221 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 222 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 223 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 224 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 14
# 225 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott1::
# 230 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 231 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 232 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 233 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 15
# 234 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott2::
# 239 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 240 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 241 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 242 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 16
# 243 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott3::
# 248 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 249 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 250 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 251 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 17
# 252 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott::
# 257 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_0
# 258 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 259 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 260 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 261 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 262 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 263 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 264 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_0
# 265 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 266 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 267 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 268 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 269 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 270 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 271 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_StepFasterRight
# 272 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 273 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 274 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 275 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 276 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_StepFasterLeft
# 277 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 278 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 279 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 280 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 281 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 282 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_Scott_3
# 285 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_Scott_4
# 288 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_Scott_5
# 291 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_Scott_6
PetalburgCity_EventScript_Scott_1:
# 295 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 296 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 297 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 298 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_Scott_3:
# 283 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_1
# 284 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_2
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_4:
# 286 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_3
# 287 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_4
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_5:
# 289 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_3
# 290 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_4
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_6:
# 292 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_5
# 293 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_6
	goto PetalburgCity_EventScript_Scott_1


PetalburgCity_EventScript_GymBoy::
# 303 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
	end


PetalburgCity_EventScript_WallyBattle1::
# 308 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 309 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 310 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_WallyBattle
	end


PetalburgCity_EventScript_WallyBattle2::
# 315 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 316 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 317 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_WallyBattle
	end


PetalburgCity_EventScript_WallyBattle3::
# 322 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 323 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 324 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_WallyBattle
	end


PetalburgCity_EventScript_WallyBattle::
# 329 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 330 "data/maps/PetalburgCity/scripts.pory"
	opendoor 17, 6
# 331 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 332 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_WALLY
# 333 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkDown
# 334 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 335 "data/maps/PetalburgCity/scripts.pory"
	closedoor 12, 15
# 336 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 337 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq PetalburgCity_EventScript_WallyBattle_2
# 341 "data/maps/PetalburgCity/scripts.pory"
	compare VAR_0x8008, 3
	goto_if_eq PetalburgCity_EventScript_WallyBattle_3
PetalburgCity_EventScript_WallyBattle_1:
# 345 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 346 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_ExclamationMark
# 347 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 348 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_Delay48
# 349 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 350 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 351 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_WallyBattle_8
# 352 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_WallyBattle_9
# 353 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_WallyBattle_10
PetalburgCity_EventScript_WallyBattle_6:
# 355 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 356 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_WALLY_DRIVE, PetalburgCity_EventScript_WallyBattle_12
# 360 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_1, MSGBOX_DEFAULT
PetalburgCity_EventScript_WallyBattle_11:
# 362 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 363 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 364 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_WallyBattle_17
# 365 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_WallyBattle_18
# 366 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_WallyBattle_19
PetalburgCity_EventScript_WallyBattle_15:
# 368 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_EventScript_WallyBattle_Movement_3
# 369 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 370 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_WALLY_DRIVE, PetalburgCity_EventScript_WallyBattle_21
# 374 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_1, MSGBOX_DEFAULT
PetalburgCity_EventScript_WallyBattle_20:
# 376 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 377 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_EventScript_WallyBattle_Movement_4
# 378 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_WallyBattle_Movement_5
# 379 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 380 "data/maps/PetalburgCity/scripts.pory"
	goto_if_set FLAG_WALLY_DRIVE, PetalburgCity_EventScript_WallyBattle_25
# 385 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_PETALBURG_BOND, PetalburgCity_EventScript_WallyBattle_Text_3
# 386 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_1, MSGBOX_DEFAULT
PetalburgCity_EventScript_WallyBattle_24:
# 388 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 389 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 390 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_WallyBattle_2:
# 338 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_StepFasterLeft
# 339 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto PetalburgCity_EventScript_WallyBattle_1

PetalburgCity_EventScript_WallyBattle_3:
# 342 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_StepFasterRight
# 343 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
	goto PetalburgCity_EventScript_WallyBattle_1

PetalburgCity_EventScript_WallyBattle_8:
# 351 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto PetalburgCity_EventScript_WallyBattle_6

PetalburgCity_EventScript_WallyBattle_9:
# 352 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PetalburgCity_EventScript_WallyBattle_6

PetalburgCity_EventScript_WallyBattle_10:
# 353 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto PetalburgCity_EventScript_WallyBattle_6

PetalburgCity_EventScript_WallyBattle_12:
# 357 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_0, MSGBOX_DEFAULT
	goto PetalburgCity_EventScript_WallyBattle_11

PetalburgCity_EventScript_WallyBattle_17:
# 364 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_WallyBattle_Movement_0
	goto PetalburgCity_EventScript_WallyBattle_15

PetalburgCity_EventScript_WallyBattle_18:
# 365 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_WallyBattle_Movement_1
	goto PetalburgCity_EventScript_WallyBattle_15

PetalburgCity_EventScript_WallyBattle_19:
# 366 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_WallyBattle_Movement_2
	goto PetalburgCity_EventScript_WallyBattle_15

PetalburgCity_EventScript_WallyBattle_21:
# 371 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_0, MSGBOX_DEFAULT
	goto PetalburgCity_EventScript_WallyBattle_20

PetalburgCity_EventScript_WallyBattle_25:
# 381 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_PETALBURG_DRIVE, PetalburgCity_EventScript_WallyBattle_Text_2
# 382 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_WallyBattle_Text_0, MSGBOX_DEFAULT
	goto PetalburgCity_EventScript_WallyBattle_24


PetalburgCity_EventScript_GuardSpirit::
# 395 "data/maps/PetalburgCity/scripts.pory"
	lock_faceplayer
# 396 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_GuardSpirit_Text_0, MSGBOX_DEFAULT
	release_end


PetalburgCity_EventScript_GuardStrength::
# 407 "data/maps/PetalburgCity/scripts.pory"
	lock_faceplayer
# 408 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_GuardStrength_Text_0, MSGBOX_DEFAULT
	release_end


# 30 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial_Movement_0:
# 30 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 30 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 30 "data/maps/PetalburgCity/scripts.pory"
	step_faster_right
	step_end

# 69 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_0:
# 69 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 69 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 70 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_1:
# 70 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 70 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 76 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_2:
# 76 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 76 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
	step_end

# 77 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse_Movement_3:
# 77 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 77 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 170 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_0:
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 170 "data/maps/PetalburgCity/scripts.pory"
	step_faster_up
	step_end

# 174 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_1:
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 176 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_2:
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
	step_end

# 180 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_3:
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
	step_end

# 189 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_4:
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
	step_end

# 190 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_5:
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 192 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_6:
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 193 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_7:
# 193 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 193 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 196 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_8:
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 198 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_9:
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 199 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_10:
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 208 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_11:
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 208 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 208 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 208 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 208 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 208 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 208 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 208 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 208 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 208 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 208 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 208 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
	step_end

# 257 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_0:
# 257 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 257 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 257 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 257 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 283 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_1:
# 283 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 283 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
# 283 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 283 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 283 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 283 "data/maps/PetalburgCity/scripts.pory"
	step_faster_left
	step_end

# 284 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_2:
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 284 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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

# 286 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_3:
# 286 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 286 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
# 286 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 286 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 286 "data/maps/PetalburgCity/scripts.pory"
	step_faster_left
	step_end

# 287 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_4:
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 287 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 292 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_5:
# 292 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 292 "data/maps/PetalburgCity/scripts.pory"
	step_faster_up
# 292 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 292 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 292 "data/maps/PetalburgCity/scripts.pory"
	step_faster_left
	step_end

# 293 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_6:
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 293 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 364 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyBattle_Movement_0:
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 364 "data/maps/PetalburgCity/scripts.pory"
	step_faster_right
	step_end

# 365 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyBattle_Movement_1:
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 365 "data/maps/PetalburgCity/scripts.pory"
	step_faster_right
	step_end

# 366 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyBattle_Movement_2:
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 366 "data/maps/PetalburgCity/scripts.pory"
	step_faster_right
	step_end

# 368 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyBattle_Movement_3:
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 368 "data/maps/PetalburgCity/scripts.pory"
	step_faster_left
	step_end

# 377 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyBattle_Movement_4:
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 378 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyBattle_Movement_5:
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

PetalburgCity_EventScript_WallyBattle_Text_0:
# 357 "data/maps/PetalburgCity/scripts.pory"
	.string "!!!$"

PetalburgCity_EventScript_WallyBattle_Text_1:
# 360 "data/maps/PetalburgCity/scripts.pory"
	.string "…$"

PetalburgCity_EventScript_WallyBattle_Text_2:
# 381 "data/maps/PetalburgCity/scripts.pory"
	.string "No way, I lost.$"

PetalburgCity_EventScript_WallyBattle_Text_3:
# 385 "data/maps/PetalburgCity/scripts.pory"
	.string "Just as strong as always.$"

PetalburgCity_EventScript_GuardSpirit_Text_0:
# 396 "data/maps/PetalburgCity/scripts.pory"
	.string "You are approaching the entrance to\n"
	.string "Petalburg Dojo's Path of Spirit.\p"
	.string "I'm afraid you are not strong enough\n"
	.string "to attempt this challenge.\p"
	.string "Come back with more experience.$"

PetalburgCity_EventScript_GuardStrength_Text_0:
# 408 "data/maps/PetalburgCity/scripts.pory"
	.string "You are approaching the entrance to\n"
	.string "Petalburg Dojo's Path of Power.\p"
	.string "I'm afraid you are not strong enough\n"
	.string "to attempt this challenge.\p"
	.string "Come back with more experience.$"

PetalburgCity_Text_WhereIsWally::
# 418 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
	.string "We have to leave for VERDANTURF TOWN\n"
	.string "very soon…$"

PetalburgCity_Text_AreYouRookieTrainer::
# 425 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
	.string "A rookie TRAINER?\p"
	.string "Do you know what POKéMON TRAINERS\n"
	.string "do when they reach a new town?\p"
	.string "They first check what kind of GYM\n"
	.string "is in the town.$"

PetalburgCity_Text_ThisIsPetalburgGym::
# 436 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"

PetalburgCity_Text_ThisIsGymSign::
# 440 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
	.string "whenever you're looking for a GYM.$"

PetalburgCity_Text_WaterReflection::
# 445 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
	.string "It's a shining grin full of hope…\p"
	.string "Or it could be a look of somber silence\n"
	.string "struggling with fear…\p"
	.string "What do you see reflected in your face?$"

PetalburgCity_Text_FullPartyExplanation::
# 456 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
	.string "If you catch another one…\p"
	.string "It is automatically sent to a STORAGE\n"
	.string "BOX over a PC connection.$"

PetalburgCity_Text_GymSign::
# 464 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
	.string "LEADER: NORMAN\l"
	.string "“A man in pursuit of power!”$"

PetalburgCity_Text_CitySign::
# 470 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
	.string "“Where people mingle with nature.”$"

PetalburgCity_Text_NormansLodgeSign::
# 475 "data/maps/PetalburgCity/scripts.pory"
	.string "NORMAN'S LODGE$"

PetalburgCity_Text_WallyHouseSign::
# 479 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"

PetalburgCity_Text_AreYouATrainer::
# 483 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a POKéMON TRAINER?$"

PetalburgCity_Text_WellMaybeNot::
# 490 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie TRAINER,\n"
	.string "or maybe you're just an ordinary kid.$"

PetalburgCity_Text_ImLookingForTalentedTrainers::
# 500 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
	.string "talented TRAINERS.\p"
	.string "I'm sorry to have taken your time.$"
