SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts::
# 5 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 13 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2
	goto_if_eq SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 8 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 9 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 10 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 11 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
	goto SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 14 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions
	goto SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SaffronCity_PokemonTrainerFanClub_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1, SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans
	.2byte 0


SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions::
# 21 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_TryLoseFansFromPlayTime
# 22 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_2
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_1:
# 27 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_5
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_4:
# 32 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_8
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_7:
# 37 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_11
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_10:
# 41 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_14
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_13:
# 45 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_17
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_16:
# 49 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_20
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_19:
# 53 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_23
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_22:
	end

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_2:
# 24 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, 5, 2
# 25 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, MOVEMENT_TYPE_FACE_UP
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_1

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_5:
# 29 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, 7, 4
# 30 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_YOUNGSTER, MOVEMENT_TYPE_FACE_LEFT
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_4

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_8:
# 34 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, 2, 2
# 35 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_GENTLEMAN, MOVEMENT_TYPE_FACE_UP
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_7

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_11:
# 39 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_10

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_14:
# 43 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_13

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_17:
# 47 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_16

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_20:
# 51 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_19

SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_23:
# 55 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
	goto SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions_22


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable::
# 61 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, 3, 4
# 62 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_LITTLE_GIRL, MOVEMENT_TYPE_FACE_RIGHT
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable::
# 67 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_ROCKER, 4, 6
# 68 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_ROCKER, MOVEMENT_TYPE_FACE_UP
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable::
# 73 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_WOMAN, 10, 3
# 74 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_WOMAN, MOVEMENT_TYPE_FACE_UP
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable::
# 79 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BEAUTY, 7, 5
# 80 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BEAUTY, MOVEMENT_TYPE_FACE_LEFT
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable::
# 85 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, 9, 6
# 86 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TRAINER_FAN_CLUB_BLACK_BELT, MOVEMENT_TYPE_FACE_LEFT
	return


SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans::
# 91 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lockall
# 92 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 93 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_StepFasterDown
# 94 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 95 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	playse SE_PIN
# 96 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_ExclamationMark
# 97 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 98 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, Common_Movement_Delay48
# 99 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 100 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HuhYou
# 101 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	closemessage
# 102 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_TRAINER_FAN_CLUB_BATTLE_GIRL, SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer
# 103 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 104 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 105 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	waitmovement 0
# 106 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourePlayerWereYourFansNow
# 107 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2
# 108 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	releaseall
	end


# 112 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer:
# 114 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_16
# 115 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_8
# 116 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	walk_down
# 117 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_16
# 118 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	walk_down
# 119 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	delay_8
# 120 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	walk_left
	step_end

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl::
# 124 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock_faceplayer
# 125 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 126 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 127 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_2
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_3
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, LAST_NONFAN_MEMBER
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_4
# 141 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WasYourFanNotAnymore
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_1:
	release_end

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_2:
# 128 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainersCoolWhenBattling
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_1

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_3:
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_9
# 134 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_1

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_4:
# 138 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryonesYourFanButICantBe
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_1

SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_9:
# 132 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_IllAlwaysBelieveInYou
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl_1


SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl::
# 147 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock_faceplayer
# 148 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 149 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 150 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_2
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_3
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, LAST_NONFAN_MEMBER
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_4
# 164 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeSabrina
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_1:
	release_end

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_2:
# 151 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanIBecomeCoolTrainerOneDay
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_1

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_3:
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_9
# 157 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeYouOneDay
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_1

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_4:
# 161 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingSabrinasFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_1

SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_9:
# 155 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneButMeStoppedBeingYourFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl_1


SaffronCity_PokemonTrainerFanClub_EventScript_Youngster::
# 170 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock_faceplayer
# 171 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 172 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 173 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_2
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_3
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, LAST_NONFAN_MEMBER
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_4
# 187 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksMyHero
SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_1:
	release_end

SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_2:
# 174 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksLastWordOnCool
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_1

SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_3:
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_9
# 180 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanYouAutographShorts
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_1

SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_4:
# 184 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksFanToBitterEnd
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_1

SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_9:
# 178 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CountingOnYou
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Youngster_1


SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman::
# 193 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock_faceplayer
# 194 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 195 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
# 196 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_2
SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_1:
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_5
SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_4:
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, LAST_NONFAN_MEMBER
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_8
# 210 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HmmAndYouAre
SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_7:
	release_end

SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_2:
# 197 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YoullBeTalkedAboutIfYouKeepWinning
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_1

SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_5:
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_11
# 203 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HadPleasureOfWatchingYouBattle
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_4

SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_8:
# 207 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouveStillAWaysToGo
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_7

SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_11:
# 201 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverSeenTrainerOfYourMagnificence
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman_4


SaffronCity_PokemonTrainerFanClub_EventScript_Woman::
# 216 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock_faceplayer
# 217 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 218 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Woman_2
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, LAST_NONFAN_MEMBER
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Woman_3
# 230 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainerHasBeenOnFire
SaffronCity_PokemonTrainerFanClub_EventScript_Woman_1:
	release_end

SaffronCity_PokemonTrainerFanClub_EventScript_Woman_2:
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Woman_7
# 223 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AdoreWayYouBattle
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Woman_1

SaffronCity_PokemonTrainerFanClub_EventScript_Woman_3:
# 227 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneTalksAboutYou
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Woman_1

SaffronCity_PokemonTrainerFanClub_EventScript_Woman_7:
# 221 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourNumberOneFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Woman_1


SaffronCity_PokemonTrainerFanClub_EventScript_Rocker::
# 236 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock_faceplayer
# 237 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 238 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_2
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, LAST_NONFAN_MEMBER
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_3
# 250 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_LoveWayTrainerTalks
SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_1:
	release_end

SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_2:
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_7
# 243 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TheWayYouBattleIsCool
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_1

SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_3:
# 247 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImLoneTrainerFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_1

SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_7:
# 241 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImOnlyOneLeftOfYourFans
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Rocker_1


SaffronCity_PokemonTrainerFanClub_EventScript_Beauty::
# 256 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock_faceplayer
# 257 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 258 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_2
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, LAST_NONFAN_MEMBER
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_3
# 270 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WhyCantOthersSeeMastersDignity
SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_1:
	release_end

SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_2:
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_7
# 263 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouReallyAreAmazing
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_1

SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_3:
# 267 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BelieveInMasterWithAllMyHeart
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_1

SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_7:
# 261 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourOnlyFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_Beauty_1


SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt::
# 276 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	lock_faceplayer
# 277 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 278 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	special Script_BufferFanClubTrainerName
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_2
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, LAST_NONFAN_MEMBER
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_3
# 290 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_OnlyMasterHasMyRespect
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_1:
	release_end

SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_2:
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 0 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_7
# 283 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourBattleStyleIsEducational
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_1

SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_3:
# 287 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverBeFanOfAnyoneButMaster
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_1

SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_7:
# 281 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingYourFan
	goto SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt_1


SaffronCity_PokemonTrainerFanClub_Text_HuhYou::
# 295 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Huh?\n"
	.string "You…$"

SaffronCity_PokemonTrainerFanClub_Text_YourePlayerWereYourFansNow::
# 300 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Are you maybe…\n"
	.string "… …\p"
	.string "You are!\n"
	.string "You are {PLAYER}!\p"
	.string "We were just talking about you!\p"
	.string "We were talking about how an\n"
	.string "incredibly good TRAINER appeared.\p"
	.string "And that someone is you!\n"
	.string "You're so cool!\p"
	.string "So, we decided that we'll become\n"
	.string "your FAN CLUB!\p"
	.string "We all hope you'll keep battling\n"
	.string "and show us how cool you are.\p"
	.string "That way, maybe other people will\n"
	.string "become fans just like me.$"

SaffronCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou::
# 325 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'll always be cheering for you!\p"
	.string "Go, {PLAYER}, go!$"

SaffronCity_PokemonTrainerFanClub_Text_IllAlwaysBelieveInYou::
# 331 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'll always believe in you,\n"
	.string "{PLAYER}.\p"
	.string "Please show the others what you're\n"
	.string "like when you battle seriously.$"

SaffronCity_PokemonTrainerFanClub_Text_WasYourFanNotAnymore::
# 339 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm sorry.\n"
	.string "I was your fan before.\p"
	.string "But now, you seem to have lost\n"
	.string "the drive you had before.\p"
	.string "Lately, I think {STR_VAR_1} has been\n"
	.string "a lot cooler.$"

SaffronCity_PokemonTrainerFanClub_Text_EveryonesYourFanButICantBe::
# 350 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "{PLAYER}!\p"
	.string "Everyone's been all excited about\n"
	.string "you recently.\p"
	.string "I can understand why.\n"
	.string "I know that you're strong.\p"
	.string "But, do you know what?\p"
	.string "Once I became {STR_VAR_1}'s fan,\n"
	.string "I can't just stop being a fan.$"

SaffronCity_PokemonTrainerFanClub_Text_TrainersCoolWhenBattling::
# 366 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I think TRAINERS are so cool when\n"
	.string "they're battling.\p"
	.string "Don't you think so, too?$"

SaffronCity_PokemonTrainerFanClub_Text_CanYouAutographShorts::
# 373 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh! It's {PLAYER}!\n"
	.string "Too cool!\p"
	.string "Oh!\n"
	.string "Oh, yeah!\p"
	.string "Can you autograph something?\n"
	.string "How about my shorts?$"

SaffronCity_PokemonTrainerFanClub_Text_CountingOnYou::
# 384 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "However hot it's been…\p"
	.string "And however cold it may get…\p"
	.string "I've always believed in, and worn,\n"
	.string "shorts!\p"
	.string "I'm counting on you to keep\n"
	.string "winning!\p"
	.string "I believe in you just as much as\n"
	.string "I believe in shorts!$"

SaffronCity_PokemonTrainerFanClub_Text_BrocksMyHero::
# 399 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "BROCK's my hero!\n"
	.string "He's a man among men!\p"
	.string "Heheh, I got my mom to do\n"
	.string "something for me.\p"
	.string "I got her to embroider “BROCK”\n"
	.string "on my shorts!$"

SaffronCity_PokemonTrainerFanClub_Text_BrocksFanToBitterEnd::
# 410 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "…  …\p"
	.string "…  …\n"
	.string "I'm BROCK's fan!\p"
	.string "Even if I were his only fan,\n"
	.string "I swear it on my rock-hard will,\l"
	.string "and on my shorts!\p"
	.string "I'll be his fan to the bitter end!$"

SaffronCity_PokemonTrainerFanClub_Text_BrocksLastWordOnCool::
# 423 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "BROCK's the last word on cool,\n"
	.string "end of story!\p"
	.string "Now there's a guy who I want to\n"
	.string "be like!$"

SaffronCity_PokemonTrainerFanClub_Text_HadPleasureOfWatchingYouBattle::
# 431 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{PLAYER}, I've had the pleasure of\n"
	.string "watching you battle.\p"
	.string "It brings back sweet memories of\n"
	.string "my own long-lost youth.\p"
	.string "May you continue to find success.\n"
	.string "You have a fan in me!$"

SaffronCity_PokemonTrainerFanClub_Text_NeverSeenTrainerOfYourMagnificence::
# 442 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I have journeyed far and wide\n"
	.string "across the lands.\p"
	.string "But never have I seen a TRAINER\n"
	.string "of your magnificence.\p"
	.string "Take courage in your abilities\n"
	.string "and keep battling on!\p"
	.string "Make that a promise to me,\n"
	.string "my young idol!$"

SaffronCity_PokemonTrainerFanClub_Text_HmmAndYouAre::
# 456 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hmm…\n"
	.string "And you are?\p"
	.string "Were you hoping to sign up for\n"
	.string "a membership in our FAN CLUB?$"

SaffronCity_PokemonTrainerFanClub_Text_YouveStillAWaysToGo::
# 464 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Ah, so you are the much-\n"
	.string "talked-about {PLAYER}.\p"
	.string "You certainly do have the look of\n"
	.string "a winner.\p"
	.string "But for me to accept you as\n"
	.string "a true POKéMON great…\p"
	.string "… …\p"
	.string "You've still a ways to go!$"

SaffronCity_PokemonTrainerFanClub_Text_YoullBeTalkedAboutIfYouKeepWinning::
# 479 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "All of us gathered here are fans\n"
	.string "of POKéMON TRAINERS.\p"
	.string "The way they look in battle…\n"
	.string "They are the picture of coolness.\p"
	.string "Perhaps you will be talked about\n"
	.string "here, too, if you keep winning.$"

SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeYouOneDay::
# 490 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "It's {PLAYER}!\n"
	.string "It's {PLAYER}!\p"
	.string "I want to be like {PLAYER} one day!$"

SaffronCity_PokemonTrainerFanClub_Text_EveryoneButMeStoppedBeingYourFan::
# 497 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Everyone stopped being {PLAYER}'s\n"
	.string "fan…\p"
	.string "But that means I can have {PLAYER}\n"
	.string "all to myself!\p"
	.string "Yay! Go for it!\n"
	.string "My one and only {PLAYER}!$"

SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeSabrina::
# 508 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Do you know what?\n"
	.string "I want to be like SABRINA!\p"
	.string "I want to be a psychic girl just\n"
	.string "like her!$"

SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingSabrinasFan::
# 516 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Even if I'm the only one, I won't\n"
	.string "stop being SABRINA's fan.\p"
	.string "My dream is to be like SABRINA,\n"
	.string "cute, but cool.\p"
	.string "I want to be a psychic girl just\n"
	.string "like her!$"

SaffronCity_PokemonTrainerFanClub_Text_CanIBecomeCoolTrainerOneDay::
# 527 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I wonder if I can become a cool\n"
	.string "TRAINER one day?$"

SaffronCity_PokemonTrainerFanClub_Text_TheWayYouBattleIsCool::
# 532 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, man, oh, man!\n"
	.string "Cool! Too cool!\p"
	.string "…Huh?\n"
	.string "No, not you.\p"
	.string "Just the way you battle.\n"
	.string "That's cool.$"

SaffronCity_PokemonTrainerFanClub_Text_ImOnlyOneLeftOfYourFans::
# 543 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Yo, {PLAYER}!\p"
	.string "Looks like I'm the only one left\n"
	.string "out of your fans.\p"
	.string "But, you know, I like being an only\n"
	.string "fan… It's less stressful.\p"
	.string "Keep up and at it!$"

SaffronCity_PokemonTrainerFanClub_Text_LoveWayTrainerTalks::
# 555 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "{STR_VAR_1}'s cool, huh?\n"
	.string "I love the way he talks.\p"
	.string "I'd really relish a chance to meet\n"
	.string "him in person once.$"

SaffronCity_PokemonTrainerFanClub_Text_ImLoneTrainerFan::
# 563 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Huh, can you believe it?\n"
	.string "Everyone turned into your fans.\p"
	.string "So after all we've been through,\n"
	.string "I'm the lone {STR_VAR_1} fan?\p"
	.string "Eh, being the one and only\n"
	.string "{STR_VAR_1} fan's my style, anyway.$"

SaffronCity_PokemonTrainerFanClub_Text_AdoreWayYouBattle::
# 574 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, my goodness!\n"
	.string "Is it really you, {PLAYER}?\p"
	.string "I have to tell you, I adore the\n"
	.string "way you battle.\p"
	.string "I hope you'll keep at it.\n"
	.string "I'll be your number one fan!$"

SaffronCity_PokemonTrainerFanClub_Text_ImYourNumberOneFan::
# 585 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, my goodness!\n"
	.string "If it isn't {PLAYER}!\p"
	.string "It's so disappointing… I realized\n"
	.string "I'm your number-one-and-only fan!\p"
	.string "Well, it can't be helped!\n"
	.string "Let me cheer you on, at least!\p"
	.string "Hurray, hurray, {PLAYER}!$"

SaffronCity_PokemonTrainerFanClub_Text_TrainerHasBeenOnFire::
# 598 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Recently, {STR_VAR_1} has been on\n"
	.string "fire.\p"
	.string "The way he battles… It's just \n"
	.string "the way that I like it!$"

SaffronCity_PokemonTrainerFanClub_Text_EveryoneTalksAboutYou::
# 606 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Oh, hello!\n"
	.string "If it isn't {PLAYER}!\p"
	.string "Lately, all everyone talks about\n"
	.string "is you.\p"
	.string "I'm feeling lonesome because I\n"
	.string "prefer {STR_VAR_1}.$"

SaffronCity_PokemonTrainerFanClub_Text_YouReallyAreAmazing::
# 617 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Amazing!\n"
	.string "{PLAYER}, you really are amazing!\p"
	.string "Instead of just watching, maybe\n"
	.string "I should become a TRAINER, too.$"

SaffronCity_PokemonTrainerFanClub_Text_ImYourOnlyFan::
# 625 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I'm your only fan…\n"
	.string "Sigh… This is lonely…\p"
	.string "Can't you try harder and make the\n"
	.string "others take notice of you?$"

SaffronCity_PokemonTrainerFanClub_Text_WhyCantOthersSeeMastersDignity::
# 633 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Master {STR_VAR_1} is so dignified…\n"
	.string "He is so my type.\p"
	.string "Why can't the others see the\n"
	.string "dignity he simply oozes?$"

SaffronCity_PokemonTrainerFanClub_Text_BelieveInMasterWithAllMyHeart::
# 641 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "I believe in Master {STR_VAR_1}\n"
	.string "with all my heart.\p"
	.string "Even if I am the only one to\n"
	.string "believe in him.\p"
	.string "I won't ever feel lonesome, though.\p"
	.string "Not if I keep thinking about Master\n"
	.string "{STR_VAR_1}.$"

SaffronCity_PokemonTrainerFanClub_Text_YourBattleStyleIsEducational::
# 654 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hiyah!\p"
	.string "Your battling style is most\n"
	.string "educational.\p"
	.string "I hope that you will keep plugging\n"
	.string "away at success, hiyah!$"

SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingYourFan::
# 664 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Instead of just watching others\n"
	.string "battle, battle yourself!\p"
	.string "…My DOJO's MASTER chewed me out\n"
	.string "like that…\p"
	.string "But I won't let that stop me from\n"
	.string "being your fan!\p"
	.string "I can't stop being your fan!$"

SaffronCity_PokemonTrainerFanClub_Text_OnlyMasterHasMyRespect::
# 677 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hiyah! There is but one TRAINER\n"
	.string "who has my respect.\p"
	.string "And that is none other than my\n"
	.string "MASTER at the FIGHTING DOJO.\p"
	.string "You should become a fan of my\n"
	.string "MASTER like me! Hiyah!$"

SaffronCity_PokemonTrainerFanClub_Text_NeverBeFanOfAnyoneButMaster::
# 688 "data/maps/SaffronCity_PokemonTrainerFanClub_Frlg/scripts.pory"
	.string "Hiyah! I respect my MASTER at the\n"
	.string "FIGHTING DOJO.\p"
	.string "I will never become a fan of\n"
	.string "anyone other than my MASTER!\p"
	.string "I will even sneak out of the DOJO\n"
	.string "to spread word of his greatness.\p"
	.string "Hiyah!$"
