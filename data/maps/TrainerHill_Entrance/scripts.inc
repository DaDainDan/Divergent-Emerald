TrainerHill_Entrance_MapScripts::
# 2 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_RESUME
# 17 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD
# 24 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 29 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD
# 35 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_resumetimer
# 4 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 0
# 5 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getusingereader
# 6 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_RESUME_2
# 13 "data/maps/TrainerHill_Entrance/scripts.pory"
	setobjectxy LOCALID_PLAYER, 9, 6
# 14 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	end

TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 7 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getwon
# 8 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_RESUME_5
TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_RESUME_4:
	end

TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 9 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	goto TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_RESUME_4

TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD:
# 18 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_NURSE
# 19 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_ATTENDANT
# 20 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_MAN
# 21 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_TRAINER_HILL_GIRL
	end

TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 25 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_TRAINER_HILL
# 26 "data/maps/TrainerHill_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
	end

TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD:
# 30 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_TEMP_D, 17
	goto_if_eq TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_2
TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 31 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
	goto TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_1

TrainerHill_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 36 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerHill_Entrance_EventScript_ExitChallenge
# 37 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_ExitElevator
# 38 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_EventScript_EntryTrigger
# 39 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, TrainerHill_EventScript_WarpToEntranceCounter
	.2byte 0


TrainerHill_Entrance_EventScript_ExitElevator::
# 44 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, TrainerHill_Entrance_EventScript_ExitElevator_Movement_0
# 46 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 47 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
# 48 "data/maps/TrainerHill_Entrance/scripts.pory"
	special DrawWholeMapView
# 49 "data/maps/TrainerHill_Entrance/scripts.pory"
	playse SE_CLICK
# 50 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitse
# 51 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_D, 0
# 52 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end


TrainerHill_Entrance_EventScript_ExitChallenge::
# 57 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 1
# 58 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getstatus
# 59 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 60 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallenge_3
# 64 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallenge_4
	end

TrainerHill_Entrance_EventScript_ExitChallenge_1:
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 71 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 72 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 75 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end

TrainerHill_Entrance_EventScript_ExitChallenge_3:
# 61 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 62 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 63 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_EventScript_ExitChallenge_1

TrainerHill_Entrance_EventScript_ExitChallenge_4:
# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 66 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 67 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_EventScript_ExitChallenge_1


TrainerHill_Entrance_EventScript_Nurse::
# 81 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x800B, LOCALID_TRAINER_HILL_NURSE
# 82 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 83 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 84 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitbuttonpress
	release_end


TrainerHill_Entrance_EventScript_Attendant::
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock_faceplayer
# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_inchallenge
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TrainerHill_Entrance_EventScript_Attendant_2
# 95 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
	release_end

TrainerHill_Entrance_EventScript_Attendant_2:
# 92 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
	release_end


TrainerHill_Entrance_EventScript_EntryTrigger::
# 100 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 101 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 102 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_EntryTrigger_2
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getsaved
# 112 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TrainerHill_Entrance_EventScript_EntryTrigger_5
TrainerHill_Entrance_EventScript_EntryTrigger_4:
# 123 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_allfloorsused
# 124 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TrainerHill_Entrance_EventScript_EntryTrigger_8
# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
TrainerHill_Entrance_EventScript_EntryTrigger_7:
# 129 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
	end

TrainerHill_Entrance_EventScript_EntryTrigger_2:
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
# 104 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 106 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 107 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end

TrainerHill_Entrance_EventScript_EntryTrigger_5:
# 113 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
# 114 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 115 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 1
# 116 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_SaveGame
# 117 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TrainerHill_Entrance_EventScript_EntryTrigger_12
TrainerHill_Entrance_EventScript_EntryTrigger_11:
# 121 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
	goto TrainerHill_Entrance_EventScript_EntryTrigger_4

TrainerHill_Entrance_EventScript_EntryTrigger_8:
# 125 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_EventScript_EntryTrigger_7

TrainerHill_Entrance_EventScript_EntryTrigger_12:
# 118 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_clearsaved
# 119 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
	goto TrainerHill_Entrance_EventScript_EntryTrigger_11


TrainerHill_Entrance_EventScript_AskChallengeTrainers::
# 134 "data/maps/TrainerHill_Entrance/scripts.pory"
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
# 135 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
# 137 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 138 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_Entrance_EventScript_AskChallengeTrainers_3
# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_Entrance_EventScript_AskChallengeTrainers_4
# 142 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_Entrance_EventScript_AskChallengeTrainers_5
# 143 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_AskChallengeTrainers_5
TrainerHill_Entrance_EventScript_AskChallengeTrainers_1:
	end

TrainerHill_Entrance_EventScript_AskChallengeTrainers_3:
# 138 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ChooseChallenge
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers_1

TrainerHill_Entrance_EventScript_AskChallengeTrainers_4:
# 140 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
# 141 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers_1

TrainerHill_Entrance_EventScript_AskChallengeTrainers_5:
# 144 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers_1


TrainerHill_Entrance_EventScript_ChooseChallenge::
# 150 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
# 151 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq TrainerHill_Entrance_EventScript_ChooseChallenge_2
# 151 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq TrainerHill_Entrance_EventScript_ChooseChallenge_2
TrainerHill_Entrance_EventScript_ChooseChallenge_1:
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setmode VAR_RESULT
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
# 156 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_start
# 161 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end

TrainerHill_Entrance_EventScript_ChooseChallenge_2:
# 152 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
	goto TrainerHill_Entrance_EventScript_ChooseChallenge_1


TrainerHill_Entrance_EventScript_CancelEntry::
# 166 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 167 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
# 168 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 169 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 170 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end


# 176 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_FaceUp:
# 178 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_up
	step_end

TrainerHill_Entrance_EventScript_Records::
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 184 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x8004, 0
# 185 "data/maps/TrainerHill_Entrance/scripts.pory"
	special ShowTrainerHillRecords
# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
	end


TrainerHill_Entrance_EventScript_Man::
# 191 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Man_2
# 195 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
	end

TrainerHill_Entrance_EventScript_Man_2:
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
	end


TrainerHill_Entrance_EventScript_Girl::
# 200 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Girl_2
# 204 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
	end

TrainerHill_Entrance_EventScript_Girl_2:
# 201 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
	end


TrainerHill_Entrance_EventScript_Clerk::
# 209 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock_faceplayer
# 210 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 211 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Clerk_2
TrainerHill_Entrance_EventScript_Clerk_1:
# 215 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Basic
# 216 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end

TrainerHill_Entrance_EventScript_Clerk_2:
# 213 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ExpandedPokemart
	goto TrainerHill_Entrance_EventScript_Clerk_1


	.align 2
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Basic:
# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 223 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 224 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_AWAKENING
# 225 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 226 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 229 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_NONE

TrainerHill_Entrance_EventScript_ExpandedPokemart::
# 235 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Expanded
# 236 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Expanded:
# 241 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 242 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MAX_POTION
# 243 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 244 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_REVIVE
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 247 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 250 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 251 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 252 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_NONE

# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitElevator_Movement_0:
# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
	step_end

TrainerHill_Entrance_Text_StillGettingReady::
# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
	.string "you may enjoy tag battles with many\l"
	.string "TRAINERS.\p"
	.string "Unfortunately, we're still getting\n"
	.string "things ready. Please come back later!$"

TrainerHill_Entrance_Text_WelcomeToTrainerHill::
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Welcome!\p"
	.string "This is the TRAINER HILL where\n"
	.string "you may enjoy tag battles with many\l"
	.string "TRAINERS!$"

TrainerHill_Entrance_Text_SaveGameBeforeEnter::
# 272 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Is this your first visit here?\p"
	.string "Before you enter, please save\n"
	.string "your game.$"

TrainerHill_Entrance_Text_TrainersUpToFloorX::
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
	.string "The TRAINERS here now are…\p"
	.string "Up to floor no. {STR_VAR_1}.$"

TrainerHill_Entrance_Text_TrainersInEveryRoom::
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
	.string "The TRAINERS here now are…\p"
	.string "There appear to be TRAINERS gathered\n"
	.string "in every room.$"

TrainerHill_Entrance_Text_LikeToChallengeTrainers::
# 294 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to challenge the\n"
	.string "waiting TRAINERS?$"

TrainerHill_Entrance_Text_TimeProgessGetSetGo::
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I will time your progress.\n"
	.string "Best of luck!\p"
	.string "On your marks…\p"
	.string "Get set…\p"
	.string "Go!$"

TrainerHill_Entrance_Text_PleaseVisitUsAgain::
# 310 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please do visit us again!$"

TrainerHill_Entrance_Text_TooBadTremendousEffort::
# 314 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That was too bad.\p"
	.string "I think you put in a tremendous\n"
	.string "effort in your battling.\p"
	.string "Please come back and try again!$"

TrainerHill_Entrance_Text_HopeYouGiveItYourBest::
# 323 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I hope you give it your best.$"

TrainerHill_Entrance_Text_MovedReceptionHereForSwitch::
# 327 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "When the TRAINERS switch places,\n"
	.string "the movement can be hectic.\p"
	.string "To avoid the stampede, we moved\n"
	.string "the reception counter here.\p"
	.string "I'm sorry for the inconvenience.$"

TrainerHill_Entrance_Text_ThankYouForPlaying::
# 337 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Thank you for playing!$"

TrainerHill_Entrance_Text_ExplainTrainerHill::
# 341 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Here at the TRAINER HILL, we conduct\n"
	.string "an event called the Time Attack.\p"
	.string "It is a race that measures how long\n"
	.string "you take to reach our owner on\l"
	.string "the rooftop from this counter.\p"
	.string "The fastest times are posted on\n"
	.string "the Time Board--try competing with\l"
	.string "your friends.\p"
	.string "In TRAINER battles along the way,\n"
	.string "neither Exp. Points nor money will\l"
	.string "be awarded.$"

TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon::
# 358 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, I'm sorry, but you appear to have\n"
	.string "only one POKéMON with you.\p"
	.string "You will need at least two POKéMON\n"
	.string "to enter this event.$"

TrainerHill_Roof_Text_YouFinallyCameBravo::
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hm! Hm!\p"
	.string "You finally came!\n"
	.string "Yes, you have arrived!\p"
	.string "Wait! Don't say it!\n"
	.string "I know why you came all the way\l"
	.string "here by yourself!\p"
	.string "You wanted to see me, the owner\n"
	.string "of the TRAINER HILL, because…\p"
	.string "You want to form a tag team with me!\n"
	.string "Wa-hoo!\p"
	.string "…Uh?\n"
	.string "That's not it?\p"
	.string "Anyway, I watched you on your way up.\n"
	.string "Marvelous battling! Bravo, indeed!$"

TrainerHill_Roof_Text_HaveTheMostMarvelousGift::
# 389 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "For a marvelous someone like you,\n"
	.string "I have the most marvelous gift!$"

TrainerHill_Roof_Text_FullUpBeBackLaterForThis::
# 394 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, no, full up with things!\n"
	.string "You'll be back later for this!$"

TrainerHill_Roof_Text_GotHereMarvelouslyQuickly::
# 399 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, hold on here! Did you possibly get\n"
	.string "here marvelously quickly?\p"
	.string "How splendid! You needn't have\n"
	.string "hurried so to see me!\p"
	.string "That is so delightful. I'll have the Time\n"
	.string "Board at the reception updated!$"

TrainerHill_Roof_Text_YouWerentVeryQuick::
# 410 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "But, oh…\n"
	.string "You weren't very quick getting here.$"

TrainerHill_Roof_Text_ArriveZippierNextTime::
# 415 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Perhaps it would please me more if you\n"
	.string "arrived zippier next time.\p"
	.string "Then, I should be pleased to form\n"
	.string "a tag team with you!\p"
	.string "Until we meet again, amigo!$"

TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner::
# 425 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I had the TRAINER HILL built for but\n"
	.string "one reason and one only!\p"
	.string "To find the most suitable partner\n"
	.string "with whom I may form a tag team!$"

TrainerHill_Entrance_Text_ChallengeTime::
# 433 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.$"

TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead::
# 437 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Who knows what sort of TRAINERS\n"
	.string "and POKéMON combos are ahead?\p"
	.string "All I know is that I'll knock aside\n"
	.string "anyone that stands in my way!$"

TrainerHill_Entrance_Text_CantWaitToTestTheWaters::
# 445 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I heard tough TRAINERS come to this\n"
	.string "TRAINER HILL from all over.\p"
	.string "I can't wait to test the waters!\p"
	.string "I'll knock aside anyone that stands\n"
	.string "in my way!$"

TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop::
# 455 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you see the Time Board over there?\p"
	.string "My friends and I are trying to see who\n"
	.string "can reach the top in the least time.$"

TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen::
# 462 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you know when they're opening\n"
	.string "this place up?\p"
	.string "I'm waiting here to be the first\n"
	.string "challenger ever!$"

TrainerHill_Elevator_Text_ReturnToReception::
# 470 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to return to\n"
	.string "the reception counter?$"
