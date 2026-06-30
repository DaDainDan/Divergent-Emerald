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


PetalburgCity_EventScript_NormansLodgeSign::
# 113 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_NormansLodgeSign, MSGBOX_SIGN
	end


PetalburgCity_EventScript_Gentleman::
# 118 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
	end


PetalburgCity_EventScript_WallyHouseSign::
# 123 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	end


PetalburgCity_EventScript_ShowGymToPlayer0::
# 128 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 129 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 130 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer1::
# 135 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 136 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 137 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer2::
# 142 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 143 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 144 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer3::
# 149 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 150 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 151 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end


PetalburgCity_EventScript_ShowGymToPlayer::
# 156 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 157 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 158 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 159 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 160 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 161 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 162 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 163 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 164 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 165 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_ShowGymToPlayer_3
# 169 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_ShowGymToPlayer_4
# 171 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_ShowGymToPlayer_5
# 175 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_ShowGymToPlayer_6
PetalburgCity_EventScript_ShowGymToPlayer_1:
# 180 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 181 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 182 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 183 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 184 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_ShowGymToPlayer_9
# 187 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_ShowGymToPlayer_10
# 190 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_ShowGymToPlayer_11
# 193 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_ShowGymToPlayer_12
PetalburgCity_EventScript_ShowGymToPlayer_7:
# 197 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 198 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 199 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_StepFasterLeft
# 200 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 201 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 202 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 203 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 204 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_11
# 205 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 206 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 207 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_ShowGymToPlayer_3:
# 166 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_0
# 167 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 168 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_4:
# 170 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_1
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_5:
# 172 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_2
# 173 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 174 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_6:
# 176 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_3
# 177 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 178 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PetalburgCity_EventScript_ShowGymToPlayer_1

PetalburgCity_EventScript_ShowGymToPlayer_9:
# 185 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_4
# 186 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_5
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_10:
# 188 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_6
# 189 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_7
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_11:
# 191 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_4
# 192 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_8
	goto PetalburgCity_EventScript_ShowGymToPlayer_7

PetalburgCity_EventScript_ShowGymToPlayer_12:
# 194 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_EventScript_ShowGymToPlayer_Movement_9
# 195 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_ShowGymToPlayer_Movement_10
	goto PetalburgCity_EventScript_ShowGymToPlayer_7


# 212 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48:
# 213 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 213 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 213 "data/maps/PetalburgCity/scripts.pory"
	delay_16
	step_end

PetalburgCity_EventScript_Scott0::
# 217 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 218 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 219 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 220 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 14
# 221 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott1::
# 226 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 227 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 228 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 229 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 15
# 230 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott2::
# 235 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 236 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 237 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 238 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 16
# 239 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott3::
# 244 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 245 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 246 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 247 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 17
# 248 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
	end


PetalburgCity_EventScript_Scott::
# 253 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_0
# 254 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 255 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 256 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 257 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 258 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 259 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 260 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_0
# 261 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 262 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 263 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 264 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 265 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 266 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 267 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_StepFasterRight
# 268 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 269 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 270 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 271 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 272 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_StepFasterLeft
# 273 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 274 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 275 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 276 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 277 "data/maps/PetalburgCity/scripts.pory"
	switch VAR_0x8008
# 278 "data/maps/PetalburgCity/scripts.pory"
	case 0, PetalburgCity_EventScript_Scott_3
# 281 "data/maps/PetalburgCity/scripts.pory"
	case 1, PetalburgCity_EventScript_Scott_4
# 284 "data/maps/PetalburgCity/scripts.pory"
	case 2, PetalburgCity_EventScript_Scott_5
# 287 "data/maps/PetalburgCity/scripts.pory"
	case 3, PetalburgCity_EventScript_Scott_6
PetalburgCity_EventScript_Scott_1:
# 291 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 292 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 293 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 294 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end

PetalburgCity_EventScript_Scott_3:
# 279 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_1
# 280 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_2
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_4:
# 282 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_3
# 283 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_4
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_5:
# 285 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_3
# 286 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_4
	goto PetalburgCity_EventScript_Scott_1

PetalburgCity_EventScript_Scott_6:
# 288 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_EventScript_Scott_Movement_5
# 289 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_EventScript_Scott_Movement_6
	goto PetalburgCity_EventScript_Scott_1


PetalburgCity_EventScript_GymBoy::
# 299 "data/maps/PetalburgCity/scripts.pory"
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

# 166 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_0:
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 166 "data/maps/PetalburgCity/scripts.pory"
	step_faster_up
	step_end

# 170 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_1:
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_right
	step_end

# 172 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_2:
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 172 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
	step_end

# 176 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_3:
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
	step_end

# 185 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_4:
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
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 186 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_5:
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 188 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_6:
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 189 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_7:
# 189 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 189 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 192 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_8:
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	step_end

# 194 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_9:
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 195 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_10:
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 204 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer_Movement_11:
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 204 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 204 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 204 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 204 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 204 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 204 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 204 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 204 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 204 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 204 "data/maps/PetalburgCity/scripts.pory"
	sprint_left
# 204 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
	step_end

# 253 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_0:
# 253 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 253 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 253 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 253 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 279 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_1:
# 279 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 279 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
# 279 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 279 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 279 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 279 "data/maps/PetalburgCity/scripts.pory"
	step_faster_left
	step_end

# 280 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_2:
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 280 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 282 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_3:
# 282 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 282 "data/maps/PetalburgCity/scripts.pory"
	step_faster_down
# 282 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 282 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 282 "data/maps/PetalburgCity/scripts.pory"
	step_faster_left
	step_end

# 283 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_4:
# 283 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 283 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 283 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 283 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 283 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 283 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 283 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 283 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 283 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 283 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 283 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 283 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

# 288 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_5:
# 288 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 288 "data/maps/PetalburgCity/scripts.pory"
	step_faster_up
# 288 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 288 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 288 "data/maps/PetalburgCity/scripts.pory"
	step_faster_left
	step_end

# 289 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott_Movement_6:
# 289 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 289 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 289 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 289 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 289 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 289 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 289 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 289 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 289 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 289 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 289 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 289 "data/maps/PetalburgCity/scripts.pory"
	walk_left
	step_end

PetalburgCity_Text_WhereIsWally::
# 303 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
	.string "We have to leave for VERDANTURF TOWN\n"
	.string "very soon…$"

PetalburgCity_Text_AreYouRookieTrainer::
# 310 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
	.string "A rookie TRAINER?\p"
	.string "Do you know what POKéMON TRAINERS\n"
	.string "do when they reach a new town?\p"
	.string "They first check what kind of GYM\n"
	.string "is in the town.$"

PetalburgCity_Text_ThisIsPetalburgGym::
# 321 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"

PetalburgCity_Text_ThisIsGymSign::
# 325 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
	.string "whenever you're looking for a GYM.$"

PetalburgCity_Text_WaterReflection::
# 330 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
	.string "It's a shining grin full of hope…\p"
	.string "Or it could be a look of somber silence\n"
	.string "struggling with fear…\p"
	.string "What do you see reflected in your face?$"

PetalburgCity_Text_FullPartyExplanation::
# 341 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
	.string "If you catch another one…\p"
	.string "It is automatically sent to a STORAGE\n"
	.string "BOX over a PC connection.$"

PetalburgCity_Text_GymSign::
# 349 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
	.string "LEADER: NORMAN\l"
	.string "“A man in pursuit of power!”$"

PetalburgCity_Text_CitySign::
# 355 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
	.string "“Where people mingle with nature.”$"

PetalburgCity_Text_NormansLodgeSign::
# 360 "data/maps/PetalburgCity/scripts.pory"
	.string "NORMAN'S LODGE$"

PetalburgCity_Text_WallyHouseSign::
# 364 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"

PetalburgCity_Text_AreYouATrainer::
# 368 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a POKéMON TRAINER?$"

PetalburgCity_Text_WellMaybeNot::
# 375 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie TRAINER,\n"
	.string "or maybe you're just an ordinary kid.$"

PetalburgCity_Text_ImLookingForTalentedTrainers::
# 385 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
	.string "talented TRAINERS.\p"
	.string "I'm sorry to have taken your time.$"
