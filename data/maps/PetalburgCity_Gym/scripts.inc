PetalburgCity_Gym_MapScripts::
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_eq PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 7
	goto_if_ge PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_5
PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_RANDALL
	goto_if 1, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_8
PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 10 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_MARY
	goto_if 1, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_11
PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 13 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_PARKER
	goto_if 1, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_14
PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_ALEXIA
	goto_if 1, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_17
PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_GEORGE
	goto_if 1, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_20
PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_19:
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_JODY
	goto_if 1, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_23
PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_22:
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_BERKE
	goto_if 1, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_26
PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_25:
	end

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
	goto PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_4

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
	goto PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_7

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
	goto PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_10

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
	goto PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_13

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_17:
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
	goto PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_16

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_20:
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
	goto PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_19

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_23:
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
	goto PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_22

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_26:
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
	goto PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_25

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 1
	goto_if_eq PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_lt PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	end

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_WALLY, 5, 108
	goto PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_NORMAN, 4, 107
	goto PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 43 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 0 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 8
	goto_if_eq PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_GYM_NORMAN, 4, 107
	goto PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
	end

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
	end

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

PetalburgCity_Gym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
	.2byte 0


PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 68 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
	return


PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial_Movement_0
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


PetalburgCity_Gym_EventScript_Norman::
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	vsseeker_rematchid TRAINER_NORMAN_1
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock_faceplayer
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_Norman_3
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_Norman_4
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_Norman_5
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_Norman_5
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_Norman_6
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_Norman_7
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_Norman_8
PetalburgCity_Gym_EventScript_Norman_1:
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_Norman_11
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_Norman_12
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_Norman_13
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_Norman_14
PetalburgCity_Gym_EventScript_Norman_9:
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
	end

PetalburgCity_Gym_EventScript_Norman_3:
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
	release_end

PetalburgCity_Gym_EventScript_Norman_4:
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
	release_end

PetalburgCity_Gym_EventScript_Norman_5:
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
	release_end

PetalburgCity_Gym_EventScript_Norman_6:
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanBattle
	goto PetalburgCity_Gym_EventScript_Norman_1

PetalburgCity_Gym_EventScript_Norman_7:
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanPostBattle
	goto PetalburgCity_Gym_EventScript_Norman_1

PetalburgCity_Gym_EventScript_Norman_8:
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanRematch
	goto PetalburgCity_Gym_EventScript_Norman_1

PetalburgCity_Gym_EventScript_Norman_11:
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
	goto PetalburgCity_Gym_EventScript_Norman_9

PetalburgCity_Gym_EventScript_Norman_12:
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
	goto PetalburgCity_Gym_EventScript_Norman_9

PetalburgCity_Gym_EventScript_Norman_13:
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
	goto PetalburgCity_Gym_EventScript_Norman_9

PetalburgCity_Gym_EventScript_Norman_14:
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
	goto PetalburgCity_Gym_EventScript_Norman_9


PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLY
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8008
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_BeginWallyTutorial_3
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_BeginWallyTutorial_4
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_BeginWallyTutorial_5
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_BeginWallyTutorial_5
PetalburgCity_Gym_EventScript_BeginWallyTutorial_1:
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8008
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_BeginWallyTutorial_8
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_BeginWallyTutorial_9
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_BeginWallyTutorial_10
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_BeginWallyTutorial_11
PetalburgCity_Gym_EventScript_BeginWallyTutorial_6:
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_13
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_StepFasterDown
PetalburgCity_Gym_EventScript_BeginWallyTutorial_12:
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq PetalburgCity_Gym_EventScript_BeginWallyTutorial_17
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_FacePlayer
PetalburgCity_Gym_EventScript_BeginWallyTutorial_16:
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8008
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_BeginWallyTutorial_22
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_BeginWallyTutorial_23
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_BeginWallyTutorial_24
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_BeginWallyTutorial_25
PetalburgCity_Gym_EventScript_BeginWallyTutorial_20:
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLY
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
	release_end

PetalburgCity_Gym_EventScript_BeginWallyTutorial_3:
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_StepFasterDown
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_EventScript_BeginWallyTutorial_Movement_0
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_1

PetalburgCity_Gym_EventScript_BeginWallyTutorial_4:
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_StepFasterRight
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_1

PetalburgCity_Gym_EventScript_BeginWallyTutorial_5:
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_StepFasterDown
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_EventScript_BeginWallyTutorial_Movement_0
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_1

PetalburgCity_Gym_EventScript_BeginWallyTutorial_8:
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_StepFasterUp
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_6

PetalburgCity_Gym_EventScript_BeginWallyTutorial_9:
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_StepFasterDown
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_6

PetalburgCity_Gym_EventScript_BeginWallyTutorial_10:
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_StepFasterRight
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_6

PetalburgCity_Gym_EventScript_BeginWallyTutorial_11:
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_StepFasterLeft
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_6

PetalburgCity_Gym_EventScript_BeginWallyTutorial_13:
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_StepFasterRight
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_12

PetalburgCity_Gym_EventScript_BeginWallyTutorial_17:
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_StepFasterDown
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, Common_Movement_StepFasterDown
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_16

PetalburgCity_Gym_EventScript_BeginWallyTutorial_22:
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_StepFasterDown
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_EventScript_BeginWallyTutorial_Movement_1
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_EventScript_BeginWallyTutorial_Movement_2
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_20

PetalburgCity_Gym_EventScript_BeginWallyTutorial_23:
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_EventScript_BeginWallyTutorial_Movement_3
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_EventScript_BeginWallyTutorial_Movement_4
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_20

PetalburgCity_Gym_EventScript_BeginWallyTutorial_24:
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_EventScript_BeginWallyTutorial_Movement_1
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_EventScript_BeginWallyTutorial_Movement_5
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_20

PetalburgCity_Gym_EventScript_BeginWallyTutorial_25:
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial_20


# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_faster_left
	step_end

# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_faster_up
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_down
	step_end

# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_faster_down
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
	step_end

PetalburgCity_Gym_EventScript_NormanBattle::
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	special ResetHealLocationFromDewford
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 40
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_NormanBattle_3
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_NormanBattle_4
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_NormanBattle_5
PetalburgCity_Gym_EventScript_NormanBattle_1:
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
	end

PetalburgCity_Gym_EventScript_NormanBattle_3:
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
	goto PetalburgCity_Gym_EventScript_NormanBattle_1

PetalburgCity_Gym_EventScript_NormanBattle_4:
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
	goto PetalburgCity_Gym_EventScript_NormanBattle_1

PetalburgCity_Gym_EventScript_NormanBattle_5:
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
	goto PetalburgCity_Gym_EventScript_NormanBattle_1


PetalburgCity_Gym_EventScript_GiveFacade::
	giveitem ITEM_TM_FACADE
# 0 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgCity_Gym_EventScript_GiveFacade_2
PetalburgCity_Gym_EventScript_GiveFacade_1:
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
	return

PetalburgCity_Gym_EventScript_GiveFacade_2:
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto Common_EventScript_BagIsFull
	goto PetalburgCity_Gym_EventScript_GiveFacade_1


PetalburgCity_Gym_EventScript_WallysDadArrives::
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_ExclamationMark
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_Delay48
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8008
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_WallysDadArrives_3
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_WallysDadArrives_4
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_WallysDadArrives_5
PetalburgCity_Gym_EventScript_WallysDadArrives_1:
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8008
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_WallysDadArrives_8
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_WallysDadArrives_9
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_WallysDadArrives_10
PetalburgCity_Gym_EventScript_WallysDadArrives_6:
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8008
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_WallysDadArrives_13
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_WallysDadArrives_14
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_WallysDadArrives_15
PetalburgCity_Gym_EventScript_WallysDadArrives_11:
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_PETALBURG_GYM_WALLYS_DAD
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
	release_end

PetalburgCity_Gym_EventScript_WallysDadArrives_3:
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_EventScript_WallysDadArrives_Movement_0
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_StepFasterLeft
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_1

PetalburgCity_Gym_EventScript_WallysDadArrives_4:
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_EventScript_WallysDadArrives_Movement_1
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_StepFasterDown
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_1

PetalburgCity_Gym_EventScript_WallysDadArrives_5:
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_EventScript_WallysDadArrives_Movement_2
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_StepFasterDown
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_1

PetalburgCity_Gym_EventScript_WallysDadArrives_8:
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_StepFasterUp
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_6

PetalburgCity_Gym_EventScript_WallysDadArrives_9:
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_StepFasterRight
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_6

PetalburgCity_Gym_EventScript_WallysDadArrives_10:
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, Common_Movement_StepFasterLeft
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_6

PetalburgCity_Gym_EventScript_WallysDadArrives_13:
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_NORMAN, Common_Movement_StepFasterDown
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_EventScript_WallysDadArrives_Movement_3
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_11

PetalburgCity_Gym_EventScript_WallysDadArrives_14:
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_EventScript_WallysDadArrives_Movement_4
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_11

PetalburgCity_Gym_EventScript_WallysDadArrives_15:
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PETALBURG_GYM_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Gym_EventScript_WallysDadArrives_Movement_5
	goto PetalburgCity_Gym_EventScript_WallysDadArrives_11


# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_faster_up
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_down
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
	step_end

# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_faster_up
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_down
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
	step_end

# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_faster_up
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_down
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
	step_end

# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_faster_right
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_faster_left
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_faster_up
	step_end

# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_faster_up
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_faster_down
	step_end

PetalburgCity_Gym_EventScript_NormanPostBattle::
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgCity_Gym_EventScript_NormanPostBattle_2
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_NormanPostBattle_5
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NormanPostBattle_6
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
PetalburgCity_Gym_EventScript_NormanPostBattle_4:
	release_end

PetalburgCity_Gym_EventScript_NormanPostBattle_2:
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 0 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgCity_Gym_EventScript_NormanPostBattle_11
PetalburgCity_Gym_EventScript_NormanPostBattle_10:
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
	release_end

PetalburgCity_Gym_EventScript_NormanPostBattle_5:
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_4

PetalburgCity_Gym_EventScript_NormanPostBattle_6:
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_4

PetalburgCity_Gym_EventScript_NormanPostBattle_11:
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto PetalburgCity_Gym_EventScript_NormanPostBattle_10


PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 0 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_2
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 0 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_2
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 0 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_2
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_ENIGMA_BERRY_AVAILABLE, 0
	goto_if_eq PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_2
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_1:
	return

PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_2:
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
	goto PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry_1


PetalburgCity_Gym_EventScript_NormanRematch::
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
	end


PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_lt PetalburgCity_Gym_EventScript_SpeedRoomDoor_2
PetalburgCity_Gym_EventScript_SpeedRoomDoor_1:
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_SpeedRoomDoor_5
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
PetalburgCity_Gym_EventScript_SpeedRoomDoor_4:
	end

PetalburgCity_Gym_EventScript_SpeedRoomDoor_2:
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_SpeedRoomDoor_1

PetalburgCity_Gym_EventScript_SpeedRoomDoor_5:
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_SpeedRoomDoor_4


PetalburgCity_Gym_EventScript_EnterRoom::
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


PetalburgCity_Gym_EventScript_DontEnterRoom::
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


PetalburgCity_Gym_EventScript_DoorLocked::
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	end


PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_lt PetalburgCity_Gym_EventScript_AccuracyRoomDoor_2
PetalburgCity_Gym_EventScript_AccuracyRoomDoor_1:
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_AccuracyRoomDoor_5
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
PetalburgCity_Gym_EventScript_AccuracyRoomDoor_4:
	end

PetalburgCity_Gym_EventScript_AccuracyRoomDoor_2:
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_AccuracyRoomDoor_1

PetalburgCity_Gym_EventScript_AccuracyRoomDoor_5:
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_AccuracyRoomDoor_4


PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_RANDALL
	goto_if 0, PetalburgCity_Gym_EventScript_ConfusionRoomDoor_2
PetalburgCity_Gym_EventScript_ConfusionRoomDoor_1:
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_ConfusionRoomDoor_5
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
PetalburgCity_Gym_EventScript_ConfusionRoomDoor_4:
	end

PetalburgCity_Gym_EventScript_ConfusionRoomDoor_2:
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_ConfusionRoomDoor_1

PetalburgCity_Gym_EventScript_ConfusionRoomDoor_5:
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_ConfusionRoomDoor_4


PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_RANDALL
	goto_if 0, PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_2
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_1:
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_5
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_4:
	end

PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_2:
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_1

PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_5:
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor_4


PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_MARY
	goto_if 0, PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_2
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_1:
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_5
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_4:
	end

PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_2:
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_1

PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_5:
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_RightDefenseRoomDoor_4


PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_MARY
	goto_if 0, PetalburgCity_Gym_EventScript_RecoveryRoomDoor_2
PetalburgCity_Gym_EventScript_RecoveryRoomDoor_1:
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_RecoveryRoomDoor_5
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
PetalburgCity_Gym_EventScript_RecoveryRoomDoor_4:
	end

PetalburgCity_Gym_EventScript_RecoveryRoomDoor_2:
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_RecoveryRoomDoor_1

PetalburgCity_Gym_EventScript_RecoveryRoomDoor_5:
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_RecoveryRoomDoor_4


PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_PARKER
	goto_if 0, PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_2
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_1:
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_5
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_4:
	end

PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_2:
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_1

PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_5:
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_4


PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_ALEXIA
	goto_if 0, PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_2
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_1:
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_5
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_4:
	end

PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_2:
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_1

PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_5:
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_4


PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_ALEXIA
	goto_if 0, PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_2
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_1:
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_5
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_4:
	end

PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_2:
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_1

PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_5:
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_LeftOHKORoomDoor_4


PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_GEORGE
	goto_if 0, PetalburgCity_Gym_EventScript_RightOHKORoomDoor_2
PetalburgCity_Gym_EventScript_RightOHKORoomDoor_1:
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_RightOHKORoomDoor_5
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
PetalburgCity_Gym_EventScript_RightOHKORoomDoor_4:
	end

PetalburgCity_Gym_EventScript_RightOHKORoomDoor_2:
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_RightOHKORoomDoor_1

PetalburgCity_Gym_EventScript_RightOHKORoomDoor_5:
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_RightOHKORoomDoor_4


PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_JODY
	goto_if 0, PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_2
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_1:
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_5
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_4:
	end

PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_2:
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_1

PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_5:
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor_4


PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_BERKE
	goto_if 0, PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_2
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_1:
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_5
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_4:
	end

PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_2:
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_1

PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_5:
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor_4


PetalburgCity_Gym_EventScript_Randall::
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Randall_2
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_Randall_2:
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
	end


PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
	release_end


PetalburgCity_Gym_EventScript_Parker::
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Parker_2
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_Parker_2:
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
	end


PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
	release_end


PetalburgCity_Gym_EventScript_George::
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_George_2
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_George_2:
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
	end


PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
	release_end


PetalburgCity_Gym_EventScript_Berke::
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Berke_2
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_Berke_2:
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
	end


PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
	release_end


PetalburgCity_Gym_EventScript_Mary::
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Mary_2
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_Mary_2:
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
	end


PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
	release_end


PetalburgCity_Gym_EventScript_Alexia::
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Alexia_2
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_Alexia_2:
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
	end


PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
	release_end


PetalburgCity_Gym_EventScript_Jody::
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_Jody_2
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_Jody_2:
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
	end


PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
	release_end


PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8005
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_3
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_4
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_1:
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_3:
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_1

PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_4:
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenGymEntranceDoors_1


PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8005
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_3
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_4
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_1:
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_3:
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_1

PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_4:
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors_1


PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8005
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_3
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_4
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_1:
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_3:
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_1

PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_4:
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors_1


PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8005
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_3
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_4
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_1:
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_3:
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_1

PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_4:
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors_1


PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8005
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_3
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_4
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_1:
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_3:
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_1

PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_4:
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors_1


PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8005
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_3
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_4
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_1:
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_3:
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_1

PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_4:
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors_1


PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8005
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_3
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_4
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_1:
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_3:
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_1

PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_4:
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors_1


PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_0x8005
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_3
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_4
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_1:
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_3:
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_1

PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_4:
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockRoomDoors
	goto PetalburgCity_Gym_EventScript_OpenOHKORoomDoors_1


PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
	return


PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
	return


PetalburgCity_Gym_EventScript_GymGuide::
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock_faceplayer
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuide_2
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release_end

PetalburgCity_Gym_EventScript_GymGuide_2:
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release_end


PetalburgCity_Gym_EventScript_LeftGymStatue::
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GymStatue
	end


PetalburgCity_Gym_EventScript_RightGymStatue::
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GymStatue
	end


PetalburgCity_Gym_EventScript_GymStatue::
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatue_2
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
PetalburgCity_Gym_EventScript_GymStatue_1:
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
	return

PetalburgCity_Gym_EventScript_GymStatue_2:
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	goto PetalburgCity_Gym_EventScript_GymStatue_1


# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial_Movement_0:
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
	step_end

# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_Movement_0:
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
	step_end

# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_Movement_1:
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_faster_up
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_down
	step_end

# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_Movement_2:
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
	step_end

# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_Movement_3:
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_faster_up
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_down
	step_end

# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_Movement_4:
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
	step_end

# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial_Movement_5:
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
	step_end

# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_Movement_0:
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_faster_right
	step_end

# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_Movement_1:
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
	step_end

# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_Movement_2:
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
	step_end

# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_Movement_3:
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
	step_end

# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_Movement_4:
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
	step_end

# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives_Movement_5:
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
	step_end

PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon::
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm?\p"
	.string "Well, if it isn't {PLAYER}!\n"
	.string "So you're all finished moving in?\p"
	.string "I'm surprised that you managed to\n"
	.string "get here by yourself.\p"
	.string "Oh, I see.\n"
	.string "You're with your POKéMON.\p"
	.string "Hm… Then I guess you're going to\n"
	.string "become a TRAINER like me, {PLAYER}.\p"
	.string "That's great news!\n"
	.string "I'll be looking forward to it!$"

PetalburgCity_Gym_Text_WallyIdLikeAPokemon::
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
	.string "I'd like to get a POKéMON, please…$"

PetalburgCity_Gym_Text_DadOhYoureWallyRight::
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? You're… Uh… Oh, right.\n"
	.string "You're WALLY, right?$"

PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon::
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: I'm going to go stay with my\n"
	.string "relatives in VERDANTURF TOWN.\p"
	.string "I thought I would be lonely by myself,\n"
	.string "so I wanted to take a POKéMON along.\p"
	.string "But I've never caught a POKéMON before.\n"
	.string "I don't know how…$"

PetalburgCity_Gym_Text_DadHmISee::
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm. I see.$"

PetalburgCity_Gym_Text_DadPlayerGoWithWally::
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you heard that,\n"
	.string "right?\p"
	.string "Go with WALLY and make sure that he\n"
	.string "safely catches a POKéMON.$"

PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon::
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY, here, I'll loan you my POKéMON.\p"
	.string "WALLY received a ZIGZAGOON!$"

PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall::
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
	.string "A POKéMON!\p"
	.string "DAD: Hm. I'll give you a POKé BALL, too.\n"
	.string "Go for it!\p"
	.string "WALLY received a POKé BALL!$"

PetalburgCity_Gym_Text_WallyOhWowThankYou::
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
	.string "Thank you!$"

PetalburgCity_Gym_Text_WouldYouReallyComeWithMe::
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
	.string "with me?$"

PetalburgCity_Gym_Text_DadSoDidItWorkOut::
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: So, did it work out?$"

PetalburgCity_Gym_Text_WallyThankYouBye::
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Thank you, yes, it did.\n"
	.string "Here's your POKéMON back.\p"
	.string "{PLAYER}, thank you for coming along\n"
	.string "with me.\p"
	.string "You two are why I was able to catch\n"
	.string "my POKéMON.\p"
	.string "I promise I'll take really good\n"
	.string "care of it.\p"
	.string "Oh! My mom's waiting for me,\n"
	.string "so I have to go!\p"
	.string "Bye, {PLAYER}!$"

PetalburgCity_Gym_Text_DadGoCollectBadges::
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Now…\p"
	.string "{PLAYER}, if you want to become a\n"
	.string "strong TRAINER, here's my advice.\p"
	.string "Head for RUSTBORO CITY beyond this\n"
	.string "town.\p"
	.string "There, you should challenge\n"
	.string "the GYM LEADER, ROXANNE.\p"
	.string "After her, go on to other POKéMON\n"
	.string "GYMS and defeat their LEADERS.\p"
	.string "Collect BADGES from them,\n"
	.string "understood?\p"
	.string "Of course, I'm a GYM LEADER, too.\n"
	.string "We'll battle one day, {PLAYER}.\p"
	.string "But that's only after you become\n"
	.string "stronger.$"

PetalburgCity_Gym_Text_NormanGoToRustboro::
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? Aren't you going to the\n"
	.string "POKéMON GYM in RUSTBORO CITY?\p"
	.string "There's no challenge for me to\n"
	.string "battle a greenhorn TRAINER.\p"
	.string "{PLAYER}, I want you to challenge me\n"
	.string "when you become a lot stronger.\p"
	.string "I'll battle you, {PLAYER}, when you\n"
	.string "can show me four GYM BADGES, okay?$"

PetalburgCity_Gym_Text_NormanGoToDewford::
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: I see… So, you've beaten\n"
	.string "the GYM LEADER in RUSTBORO CITY.\p"
	.string "But there are many more TRAINERS\n"
	.string "who are stronger than you, {PLAYER}.\p"
	.string "Across the sea in DEWFORD TOWN is a\n"
	.string "GYM LEADER named BRAWLY.\p"
	.string "You should go challenge him.$"

PetalburgCity_Gym_Text_YouHaveGottenStronger::
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm… {PLAYER}, you have gotten\n"
	.string "stronger.\p"
	.string "I can tell by the number of BADGES\n"
	.string "that you've earned.$"

PetalburgCity_Gym_Text_NormanIntro::
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm…\n"
	.string "So, you did get four GYM BADGES.\p"
	.string "Fine, as I promised, we will have\n"
	.string "a POKéMON battle.\p"
	.string "{PLAYER}…\p"
	.string "I'm so happy that I can have\n"
	.string "a real battle with my own child.\p"
	.string "But, a battle is a battle!\p"
	.string "I will do everything in my power as\n"
	.string "a GYM LEADER to win.\p"
	.string "{PLAYER}, you'd better give it your\n"
	.string "best shot, too!$"

PetalburgCity_Gym_Text_NormanDefeat::
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
	.string "I… I can't…\p"
	.string "I can't believe it. {PLAYER}…\p"
	.string "I lost to {PLAYER}?\p"
	.string "But, rules are rules!\n"
	.string "Here, take this.$"

PetalburgCity_Gym_Text_ReceivedBalanceBadge::
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the BALANCE BADGE\n"
	.string "from DAD!$"

PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis::
# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: With that BADGE, the DEFENSE\n"
	.string "of all your POKéMON will increase.\p"
	.string "POKéMON that know the HM move SURF\n"
	.string "will be able to travel over water.\p"
	.string "This is my gift to you. {PLAYER}, I'm\n"
	.string "sure you can use it correctly.$"

PetalburgCity_Gym_Text_ExplainFacade::
# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: TM42 contains FACADE.\p"
	.string "It doubles the power of moves if\n"
	.string "the POKéMON is poisoned, paralyzed,\l"
	.string "or burned.\p"
	.string "It might be able to turn a bad\n"
	.string "situation into an advantage.$"

PetalburgCity_Gym_Text_DadHappyAndSad::
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: As the GYM LEADER, I can't\n"
	.string "express how upset I am…\p"
	.string "But as a father, it makes me both\n"
	.string "happy and a little sad. It's odd…$"

PetalburgCity_Gym_Text_PleaseComeWithMe::
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
	.string "Please come with me.\n"
	.string "I have something I want you to have.$"

PetalburgCity_Gym_Text_LetMeBorrowPlayer::
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN, you don't mind, do you?\p"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
	.string "a minute or two.$"

PetalburgCity_Gym_Text_DadGoingToKeepTraining::
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you should go visit\n"
	.string "your mother every so often.\p"
	.string "I'm going to stay here and redouble\n"
	.string "my training.\p"
	.string "It would bother me as a TRAINER to\n"
	.string "not avenge my loss to you, {PLAYER}!$"

PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough::
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, how are things going?\p"
	.string "The world of POKéMON is deep.\p"
	.string "I honestly think that no amount of\n"
	.string "training would ever be enough.$"

PetalburgCity_Gym_Text_GymGuideAdvice::
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "The doors in this GYM open when you\n"
	.string "beat the awaiting TRAINERS.\p"
	.string "Whoops! The doors in this room are\n"
	.string "already open, so don't attack me!\p"
	.string "The TRAINERS of PETALBURG GYM\n"
	.string "use all kinds of items.\p"
	.string "The door at the left leads to\n"
	.string "the SPEED ROOM.\p"
	.string "The door at the right leads to\n"
	.string "the ACCURACY ROOM.\p"
	.string "The room's name will be on\n"
	.string "the door, so choose carefully.\p"
	.string "Once you've chosen the door…\n"
	.string "Well, hey, go for it!$"

PetalburgCity_Gym_Text_GymGuidePostVictory::
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
	.string "your own father!\p"
	.string "Like, whoa!\n"
	.string "What a stunning turn of events!$"

PetalburgCity_Gym_Text_RandallIntro::
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
	.string "opponent…\p"
	.string "Just that alone puts me at a great\n"
	.string "advantage, don't you agree?$"

PetalburgCity_Gym_Text_RandallDefeat::
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"

PetalburgCity_Gym_Text_RandallPostBattle::
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
	.string "challenge awaits you.\p"
	.string "At the left is the CONFUSION ROOM.\p"
	.string "The right door leads to the DEFENSE\n"
	.string "ROOM.$"

PetalburgCity_Gym_Text_RandallPostBadge::
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
	.string "may lose to, you never shirk from\l"
	.string "training yourself and your POKéMON.\p"
	.string "That's what I think being a\n"
	.string "GYM LEADER is all about.$"

PetalburgCity_Gym_Text_ParkerIntro::
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the CONFUSION ROOM.\p"
	.string "Let me see how well bonded you are\n"
	.string "with your POKéMON!$"

PetalburgCity_Gym_Text_ParkerDefeat::
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
	.string "You share a strong bond together.$"

PetalburgCity_Gym_Text_ParkerPostBattle::
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the STRENGTH ROOM.\n"
	.string "Can you withstand brute force?$"

PetalburgCity_Gym_Text_ParkerPostBadge::
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our LEADER, the\n"
	.string "training has become a lot tougher.$"

PetalburgCity_Gym_Text_GeorgeIntro::
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
	.string "win, your opponent restores HP…\p"
	.string "Can you just imagine how awful that\n"
	.string "must feel?\p"
	.string "I'll show you exactly how awful it\n"
	.string "feels!$"

PetalburgCity_Gym_Text_GeorgeDefeat::
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
	.string "What ATTACK power…$"

PetalburgCity_Gym_Text_GeorgePostBattle::
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
	.string "our LEADER's kid.\p"
	.string "No, wait! A TRAINER's abilities are\n"
	.string "earned only through effort.\p"
	.string "I lost because my own efforts\n"
	.string "weren't enough.\p"
	.string "Go on! The ONE-HIT KO ROOM is next.$"

PetalburgCity_Gym_Text_GeorgePostBadge::
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at GYMS.\n"
	.string "One day, I'll become a LEADER.$"

PetalburgCity_Gym_Text_BerkeIntro::
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
	.string "because you're our LEADER's kid.\p"
	.string "I'll show you how horrid it is for\n"
	.string "a POKéMON to take a critical hit!$"

PetalburgCity_Gym_Text_BerkeDefeat::
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
	.string "You're the real deal.$"

PetalburgCity_Gym_Text_BerkePostBattle::
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
	.string "He's a TRAINER worth my respect.\p"
	.string "And, I sense the same glow coming\n"
	.string "from you as your father.\p"
	.string "I hope that you'll stage a terrific\n"
	.string "battle with your father!$"

PetalburgCity_Gym_Text_BerkePostBadge::
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the LEADER,\n"
	.string "the TRAINERS of PETALBURG CITY have\l"
	.string "become a lot tougher.$"

PetalburgCity_Gym_Text_MaryIntro::
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
	.string "This is the ACCURACY ROOM.\p"
	.string "It's pretty nasty when every attack\n"
	.string "lands without fail.$"

PetalburgCity_Gym_Text_MaryDefeat::
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"

PetalburgCity_Gym_Text_MaryPostBattle::
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
	.string "TRAINERS waiting for you.\p"
	.string "The left is the DEFENSE ROOM, and\n"
	.string "the right is the RECOVERY ROOM.\p"
	.string "Your POKéMON's ATTACK power will be\n"
	.string "on trial either way.$"

PetalburgCity_Gym_Text_MaryPostBadge::
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
	.string "achieve as TRAINERS?\p"
	.string "We're striving to become soul mates\n"
	.string "with our POKéMON.$"

PetalburgCity_Gym_Text_AlexiaIntro::
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the DEFENSE, the more\n"
	.string "reckless I can be in attack.$"

PetalburgCity_Gym_Text_AlexiaDefeat::
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"

PetalburgCity_Gym_Text_AlexiaPostBattle::
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
	.string "lesson here.\p"
	.string "Now, go on! The left door goes to\n"
	.string "the STRENGTH ROOM.\p"
	.string "The right door opens to\n"
	.string "the ONE-HIT KO ROOM.\p"
	.string "Both of them have TRAINERS who are\n"
	.string "skilled at offense.$"

PetalburgCity_Gym_Text_AlexiaPostBadge::
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"

PetalburgCity_Gym_Text_JodyIntro::
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our GYM LEADER told us to go all out\n"
	.string "and beat you.\p"
	.string "Even if you happen to be the\n"
	.string "LEADER's kid!$"

PetalburgCity_Gym_Text_JodyDefeat::
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"

PetalburgCity_Gym_Text_JodyPostBattle::
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your POKéMON…\n"
	.string "It's like your father's style.\p"
	.string "Go on through! The GYM LEADER, your\n"
	.string "father, is waiting!$"

PetalburgCity_Gym_Text_JodyPostBadge::
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your POKéMON\n"
	.string "stronger.\p"
	.string "But what decides the winner?\p"
	.string "Why, it's the feelings TRAINERS have\n"
	.string "for their POKéMON.$"

PetalburgCity_Gym_Text_DoorAppearsLocked::
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
	.string "right now…$"

PetalburgCity_Gym_Text_EnterSpeedRoom::
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“SPEED ROOM,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_DoorAppearsLocked2::
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
	.string "right now…$"

PetalburgCity_Gym_Text_EnterAccuracyRoom::
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ACCURACY ROOM,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterConfusionRoom::
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“CONFUSION ROOM,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterDefenseRoom::
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“DEFENSE ROOM,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterRecoveryRoom::
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“RECOVERY ROOM,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterStrengthRoom::
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“STRENGTH ROOM,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterOHKORoom::
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“ONE-HIT KO ROOM,” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_EnterGymLeadersRoom::
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“GYM LEADER'S ROOM\p"
	.string "“See for yourself what POKéMON await\n"
	.string "you!” the sign says.\p"
	.string "Do you want to go through?$"

PetalburgCity_Gym_Text_GymStatue::
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM$"

PetalburgCity_Gym_Text_GymStatueCertified::
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\p"
	.string "NORMAN'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

PetalburgCity_Gym_Text_NormanPreRematch::
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
	.string "I had a feeling that you would come.\p"
	.string "I would never refuse to accept\n"
	.string "a challenge from you.\p"
	.string "You do understand, don't you?\p"
	.string "Inside a GYM, it doesn't matter that\n"
	.string "we are a parent and child.\p"
	.string "…No, because we are parent and child,\n"
	.string "we owe it to each other to do the best\l"
	.string "we can. Isn't that right, {PLAYER}?$"

PetalburgCity_Gym_Text_NormanRematchDefeat::
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
	.string "Maybe that was going too hard…$"

PetalburgCity_Gym_Text_NormanPostRematch::
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
	.string "What is your dream?\p"
	.string "My dream…\n"
	.string "Hahaha…\l"
	.string "It has already come true, actually.$"

PetalburgCity_Gym_Text_NormanRematchNeedTwoMons::
# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}…\n"
	.string "I had a feeling that you would come.\p"
	.string "I would never refuse to accept\n"
	.string "a challenge from you.\p"
	.string "You do understand, don't you?\p"
	.string "Inside a GYM, it doesn't matter that\n"
	.string "we are a parent and child.\p"
	.string "Hm? Wait a second, {PLAYER}.\p"
	.string "Do you only have one POKéMON that is\n"
	.string "capable of battle?\p"
	.string "Sorry, but you'll have to come back\n"
	.string "with at least two POKéMON.$"
