LittlerootTown_MaysHouse_1F_MapScripts::
# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
	goto_if_lt LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2
LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_5
LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
	goto LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1

LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_5:
	checkplayergender
# 0 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_4

LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
	goto LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD_4

LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	switch VAR_LITTLEROOT_INTRO_STATE
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 3, LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 5, LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 6, LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 1, 8
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	goto LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 2, 4
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	goto LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 6, 5
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
	goto LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2
# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
	.2byte 0

LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
	end

LittlerootTown_MaysHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2:
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
	end


LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_WalkUp
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	end


LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor_Movement_0
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	end


RivalsHouse_1F_EventScript_RivalMom::
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock_faceplayer
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_RivalMom_2
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalMom_3
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
	goto_if_eq RivalsHouse_1F_EventScript_RivalMom_4
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
RivalsHouse_1F_EventScript_RivalMom_1:
	release_end

RivalsHouse_1F_EventScript_RivalMom_2:
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
	goto RivalsHouse_1F_EventScript_RivalMom_1

RivalsHouse_1F_EventScript_RivalMom_3:
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
	goto RivalsHouse_1F_EventScript_RivalMom_1

RivalsHouse_1F_EventScript_RivalMom_4:
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
	goto RivalsHouse_1F_EventScript_RivalMom_1


RivalsHouse_1F_EventScript_RivalSibling::
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock_faceplayer
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
	release_end


LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_StepFasterRight
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
	end


LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
	end


LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
	end


LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
	end


LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_ne LittlerootTown_MaysHouse_1F_EventScript_MeetRival_2
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_1:
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	switch VAR_0x8008
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 0, LittlerootTown_MaysHouse_1F_EventScript_MeetRival_6
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 1, LittlerootTown_MaysHouse_1F_EventScript_MeetRival_7
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 2, LittlerootTown_MaysHouse_1F_EventScript_MeetRival_8
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_4:
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	switch VAR_0x8008
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 0, LittlerootTown_MaysHouse_1F_EventScript_MeetRival_11
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 1, LittlerootTown_MaysHouse_1F_EventScript_MeetRival_12
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	case 2, LittlerootTown_MaysHouse_1F_EventScript_MeetRival_13
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_9:
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	end

LittlerootTown_MaysHouse_1F_EventScript_MeetRival_2:
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_1

LittlerootTown_MaysHouse_1F_EventScript_MeetRival_6:
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_0
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_4

LittlerootTown_MaysHouse_1F_EventScript_MeetRival_7:
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_1
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_4

LittlerootTown_MaysHouse_1F_EventScript_MeetRival_8:
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_2
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_4

LittlerootTown_MaysHouse_1F_EventScript_MeetRival_11:
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_3
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_4
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_9

LittlerootTown_MaysHouse_1F_EventScript_MeetRival_12:
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_5
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_9

LittlerootTown_MaysHouse_1F_EventScript_MeetRival_13:
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_6
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_7
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival_9


# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_right
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_up
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_left
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_up
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
	step_end

# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor_Movement_0:
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
	step_end

# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_0:
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_left
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_up
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
	step_end

# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_1:
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
	step_end

# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_2:
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_right
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_up
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
	step_end

# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_3:
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_right
	step_end

# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_4:
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_right
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_up
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
	step_end

# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_5:
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_right
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_up
	step_end

# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_6:
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_left
	step_end

# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival_Movement_7:
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_left
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_faster_up
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
	step_end

RivalsHouse_1F_Text_OhYoureTheNewNeighbor::
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hello. And you are?\p"
	.string "… … … … … … … … …\n"
	.string "… … … … … … … … …\p"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
	.string "neighbor! Hi!\p"
	.string "We have a {STR_VAR_1} about the same\n"
	.string "age as you.\p"
	.string "Our {STR_VAR_1} was excited about making\n"
	.string "a new friend.\p"
	.string "Our {STR_VAR_1} is upstairs, I think.$"

RivalsHouse_1F_Text_LikeChildLikeFather::
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like child, like father.\p"
	.string "My husband is as wild about POKéMON\n"
	.string "as our child.\p"
	.string "If he's not at his LAB, he's likely\n"
	.string "scrabbling about in grassy places.$"

RivalsHouse_1F_Text_TooBusyToNoticeVisit::
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "That {RIVAL}!\p"
	.string "I guess our child is too busy with\n"
	.string "POKéMON to notice that you came\l"
	.string "to visit, {PLAYER}{KUN}.$"

RivalsHouse_1F_Text_WentOutToRoute103::
# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} went out to ROUTE 103\n"
	.string "just a little while ago.\p"
	.string "Like father, like child.\n"
	.string "{RIVAL} can't stay quietly at home.$"

RivalsHouse_1F_Text_ShouldGoHomeEverySoOften::
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I think it's wonderful for people to\n"
	.string "travel with POKéMON.\p"
	.string "But you should go home every so often\n"
	.string "to let your mother know you're okay.\p"
	.string "She might not say it, but I'm sure she\n"
	.string "worries about you, {PLAYER}{KUN}.$"

RivalsHouse_1F_Text_MayWhoAreYou::
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh?\n"
	.string "Who… Who are you?\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "Oh, you're {PLAYER}{KUN}.\n"
	.string "So your move was today.\p"
	.string "Um… I'm MAY.\n"
	.string "Glad to meet you!\p"
	.string "I…\n"
	.string "I have this dream of becoming friends\l"
	.string "with POKéMON all over the world.\p"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
	.string "my dad, PROF. BIRCH.\p"
	.string "I was hoping that you would be nice,\n"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
	.string "Oh, this is silly, isn't it?\n"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
	.string "Eheheh…\p"
	.string "Oh, no! I forgot!\p"
	.string "I was supposed to go help Dad catch\n"
	.string "some wild POKéMON!\p"
	.string "{PLAYER}{KUN}, I'll catch you later!$"

RivalsHouse_1F_Text_BrendanWhoAreYou::
# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hey!\n"
	.string "You…\p"
	.string "Who are you?\p"
	.string "Oh, you're {PLAYER}, aren't you?\n"
	.string "Moved in next door, right?\p"
	.string "I didn't know that you're a girl.\p"
	.string "Dad, PROF. BIRCH, said that our new\n"
	.string "next-door neighbor is a GYM LEADER's\l"
	.string "kid, so I assumed you'd be a guy.\p"
	.string "My name's BRENDAN.\n"
	.string "So, hi, neighbor!\p"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
	.string "a POKéMON?\p"
	.string "Do you want me to go catch you one?\p"
	.string "Aw, darn, I forgot…\p"
	.string "I'm supposed to go help my dad catch\n"
	.string "some wild POKéMON.\p"
	.string "Some other time, okay?$"

RivalsHouse_1F_Text_DoYouHavePokemon::
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hi, neighbor!\p"
	.string "Do you already have your\n"
	.string "own POKéMON?$"
