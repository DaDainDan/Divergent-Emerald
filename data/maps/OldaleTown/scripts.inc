OldaleTown_MapScripts::
# 2 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 4 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 5 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 9 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	end

OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 7 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
	goto OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 12 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_OLDALE_MART_EMPLOYEE, 13, 14
# 13 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_OLDALE_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
	goto OldaleTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5


OldaleTown_EventScript_TownSign::
# 20 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
	end


OldaleTown_EventScript_Girl::
# 25 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
	end


OldaleTown_EventScript_MartEmployee::
# 30 "data/maps/OldaleTown/scripts.pory"
	lock_faceplayer
# 31 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MartEmployee_2
# 31 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_MartEmployee_2
# 35 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 36 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 37 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 38 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 39 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 40 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_MartEmployee_8
# 41 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_MartEmployee_9
# 42 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_MartEmployee_10
OldaleTown_EventScript_MartEmployee_6:
	end

OldaleTown_EventScript_MartEmployee_2:
# 32 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
	release_end

OldaleTown_EventScript_MartEmployee_8:
# 40 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_GoToMartSouth
	goto OldaleTown_EventScript_MartEmployee_6

OldaleTown_EventScript_MartEmployee_9:
# 41 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_GoToMartNorth
	goto OldaleTown_EventScript_MartEmployee_6

OldaleTown_EventScript_MartEmployee_10:
# 42 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_GoToMartEast
	goto OldaleTown_EventScript_MartEmployee_6


OldaleTown_EventScript_GoToMartSouth::
# 48 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_EventScript_GoToMartSouth_Movement_0
# 49 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_EventScript_GoToMartSouth_Movement_1
# 50 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 51 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
	end


OldaleTown_EventScript_GoToMartNorth::
# 56 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_EventScript_GoToMartNorth_Movement_0
# 57 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_EventScript_GoToMartNorth_Movement_1
# 58 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 59 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
	end


OldaleTown_EventScript_GoToMartEast::
# 64 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_EventScript_GoToMartEast_Movement_0
# 65 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_EventScript_GoToMartNorth_Movement_0
# 66 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 67 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
	end


OldaleTown_EventScript_ExplainPokemonMart::
# 72 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
	giveitem ITEM_POTION
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_EventScript_ExplainPokemonMart_2
# 76 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 77 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
OldaleTown_EventScript_ExplainPokemonMart_1:
# 79 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
	release_end

OldaleTown_EventScript_ExplainPokemonMart_2:
# 74 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	goto OldaleTown_EventScript_ExplainPokemonMart_1


# 83 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 84 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 84 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 85 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 85 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 85 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 85 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 86 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 86 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 86 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 86 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 86 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 87 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 88 "data/maps/OldaleTown/scripts.pory"
	step_faster_down
	step_end

# 91 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 93 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 93 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 94 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 94 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 94 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 94 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

OldaleTown_EventScript_FootprintsMan::
# 99 "data/maps/OldaleTown/scripts.pory"
	lock_faceplayer
# 100 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_FootprintsMan_2
# 104 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 105 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 106 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 107 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
	release_end

OldaleTown_EventScript_FootprintsMan_2:
# 101 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
	release_end


OldaleTown_EventScript_BlockedPath::
# 112 "data/maps/OldaleTown/scripts.pory"
	lockall
# 113 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_EventScript_BlockedPath_Movement_0
# 114 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_EventScript_BlockedPath_Movement_1
# 115 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 116 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 117 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 118 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_EventScript_BlockedPath_Movement_2
# 119 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 120 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end


OldaleTown_EventScript_Rival::
# 125 "data/maps/OldaleTown/scripts.pory"
	lockall
# 126 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 127 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 128 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 129 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
	end


OldaleTown_EventScript_RivalTrigger1::
# 134 "data/maps/OldaleTown/scripts.pory"
	lockall
# 135 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_EventScript_RivalTrigger1_Movement_0
# 136 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 137 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 138 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 139 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 140 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
	end


OldaleTown_EventScript_RivalTrigger2::
# 145 "data/maps/OldaleTown/scripts.pory"
	lockall
# 146 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_WalkLeft
# 147 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 149 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 150 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 151 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
	end


OldaleTown_EventScript_RivalTrigger3::
# 156 "data/maps/OldaleTown/scripts.pory"
	lockall
# 157 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FaceLeft
# 158 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 159 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 160 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 161 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 162 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
	end


OldaleTown_EventScript_ShowRivalMessage::
	checkplayergender
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq OldaleTown_EventScript_ShowRivalMessage_2
# 170 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
OldaleTown_EventScript_ShowRivalMessage_1:
# 172 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
	end

OldaleTown_EventScript_ShowRivalMessage_2:
# 168 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
	goto OldaleTown_EventScript_ShowRivalMessage_1


OldaleTown_EventScript_RivalFinish::
# 177 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 178 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8009, 0
	goto_if_ne OldaleTown_EventScript_RivalFinish_2
# 178 "data/maps/OldaleTown/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne OldaleTown_EventScript_RivalFinish_2
OldaleTown_EventScript_RivalFinish_1:
# 181 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_EventScript_RivalFinish_Movement_1
# 182 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 183 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_EventScript_RivalFinish_Movement_1
# 184 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 185 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 186 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 187 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 188 "data/maps/OldaleTown/scripts.pory"
	releaseall
	end

OldaleTown_EventScript_RivalFinish_2:
# 179 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_EventScript_RivalFinish_Movement_0
	goto OldaleTown_EventScript_RivalFinish_1


OldaleTown_EventScript_CandyGirl::
# 193 "data/maps/OldaleTown/scripts.pory"
	lock_faceplayer
# 194 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_GIRL, OldaleTown_EventScript_CandyGirl_2
# 201 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, OldaleTown_EventScript_CandyGirl_11
OldaleTown_EventScript_CandyGirl_9:
# 208 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, OldaleTown_EventScript_CandyGirl_8
OldaleTown_EventScript_CandyGirl_7:
# 216 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RARE_CANDY_GIRL3, OldaleTown_EventScript_CandyGirl_5
# 223 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_CandyGirlCandyGiven, MSGBOX_AUTOCLOSE
OldaleTown_EventScript_CandyGirl_1:
	release_end

OldaleTown_EventScript_CandyGirl_2:
# 195 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_CandyGirlInitial, MSGBOX_DEFAULT
	giveitem ITEM_RARE_CANDY
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_EventScript_CandyGirl_16
OldaleTown_EventScript_CandyGirl_15:
# 199 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RARE_CANDY_GIRL
	goto OldaleTown_EventScript_CandyGirl_1

OldaleTown_EventScript_CandyGirl_3:
# 202 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_CandyGirl2nd, MSGBOX_DEFAULT
	giveitem ITEM_RARE_CANDY, 5
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_EventScript_CandyGirl_19
OldaleTown_EventScript_CandyGirl_18:
# 206 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RARE_CANDY_GIRL2
	goto OldaleTown_EventScript_CandyGirl_1

OldaleTown_EventScript_CandyGirl_4:
# 209 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_CandyGirlFinal, MSGBOX_DEFAULT
	giveitem ITEM_RARE_CANDY, 10
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_EventScript_CandyGirl_22
OldaleTown_EventScript_CandyGirl_21:
# 213 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RARE_CANDY_GIRL3
# 214 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_CandyGirl_Text_0, MSGBOX_DEFAULT
	goto OldaleTown_EventScript_CandyGirl_1

OldaleTown_EventScript_CandyGirl_5:
# 217 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_CandyGirl_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_RARE_CANDY, 10
# 0 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_EventScript_CandyGirl_24
	goto OldaleTown_EventScript_CandyGirl_1

OldaleTown_EventScript_CandyGirl_8:
# 208 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_GIRL3, OldaleTown_EventScript_CandyGirl_4
	goto OldaleTown_EventScript_CandyGirl_7

OldaleTown_EventScript_CandyGirl_11:
# 201 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_RARE_CANDY_GIRL2, OldaleTown_EventScript_CandyGirl_3
	goto OldaleTown_EventScript_CandyGirl_9

OldaleTown_EventScript_CandyGirl_16:
# 197 "data/maps/OldaleTown/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto OldaleTown_EventScript_CandyGirl_15

OldaleTown_EventScript_CandyGirl_19:
# 204 "data/maps/OldaleTown/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto OldaleTown_EventScript_CandyGirl_18

OldaleTown_EventScript_CandyGirl_22:
# 211 "data/maps/OldaleTown/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto OldaleTown_EventScript_CandyGirl_21

OldaleTown_EventScript_CandyGirl_24:
# 219 "data/maps/OldaleTown/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto OldaleTown_EventScript_CandyGirl_1


# 48 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth_Movement_0:
# 48 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 48 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 48 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 48 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 48 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 48 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 48 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 48 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 48 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 48 "data/maps/OldaleTown/scripts.pory"
	step_faster_down
	step_end

# 49 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth_Movement_1:
# 49 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 49 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 49 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 49 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 49 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 49 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 49 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 49 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 49 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 56 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth_Movement_0:
# 56 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 56 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 56 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 56 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 56 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 56 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 56 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 56 "data/maps/OldaleTown/scripts.pory"
	step_faster_down
	step_end

# 57 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth_Movement_1:
# 57 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 57 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 57 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 57 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 57 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 57 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 57 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 64 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast_Movement_0:
# 64 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 64 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 64 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 64 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 64 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 64 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 64 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 113 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath_Movement_0:
# 113 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 113 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 114 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath_Movement_1:
# 114 "data/maps/OldaleTown/scripts.pory"
	run_up
# 114 "data/maps/OldaleTown/scripts.pory"
	step_faster_left
# 114 "data/maps/OldaleTown/scripts.pory"
	lock_look
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 114 "data/maps/OldaleTown/scripts.pory"
	unlock_look
	step_end

# 118 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath_Movement_2:
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 135 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1_Movement_0:
# 135 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 135 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 179 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish_Movement_0:
# 179 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 179 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 179 "data/maps/OldaleTown/scripts.pory"
	step_faster_down
	step_end

# 181 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish_Movement_1:
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_down
	step_end

OldaleTown_EventScript_CandyGirl_Text_0:
# 214 "data/maps/OldaleTown/scripts.pory"
	.string "Come back for more anytime!$"

OldaleTown_EventScript_CandyGirl_Text_1:
# 217 "data/maps/OldaleTown/scripts.pory"
	.string "Back for some more candy?\nHere ya go!$"

OldaleTown_Text_SavingMyProgress::
# 229 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
	.string "progress.$"

OldaleTown_Text_CandyGirlInitial::
# 234 "data/maps/OldaleTown/scripts.pory"
	.string "My mom doesn't let me eat candy, but my\n"
	.string "friend from Littleroot gave me these.\p"
	.string "Here, you can have one so long as you\n"
	.string "keep it a secret. Teehee!$"

OldaleTown_Text_CandyGirl2nd::
# 242 "data/maps/OldaleTown/scripts.pory"
	.string "Long time no see!\p"
	.string "Consider yourself in luck because I\n"
	.string "just got a bunch more candies in stock.\p"
	.string "Someone just left them lying in a bag\n"
	.string "behind the POKéMART.\p"
	.string "No one claimed them, so I figured this\n"
	.string "was a nice score for me.\p"
	.string "Here's your share of the loot, amigo.$"

OldaleTown_Text_CandyGirlFinal::
# 257 "data/maps/OldaleTown/scripts.pory"
	.string "Heya, hotshot!\n"
	.string "I heard you became the Champion.\p"
	.string "It's gonna sound dumb, but I actually\n"
	.string "bet my mom that if you became the\l"
	.string "champion, then I would get a lifetime\l"
	.string "supply of candy.\p"
	.string "Guess who's laughing now.$"

OldaleTown_Text_CandyGirlCandyGiven::
# 269 "data/maps/OldaleTown/scripts.pory"
	.string "Now don't be greedy.\n"
	.string "I already gave you your share.\p"
	.string "Tell you what, if I get any more, I'll\n"
	.string "share them with you. \l"
	.string "Deal?$"

OldaleTown_Text_IWorkAtPokemonMart::
# 278 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
	.string "I work at a POKéMON MART.\p"
	.string "Can I get you to come with me?$"

OldaleTown_Text_ThisIsAPokemonMart::
# 285 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
	.string "Just look for our blue roof.\p"
	.string "We sell a variety of goods including\n"
	.string "POKé BALLS for catching POKéMON.\p"
	.string "Here, I'd like you to have this as\n"
	.string "a promotional item.$"

OldaleTown_Text_PotionExplanation::
# 296 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
	.string "even more useful than a POKéMON CENTER\l"
	.string "in certain situations.$"

OldaleTown_Text_WaitDontComeInHere::
# 302 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
	.string "Please don't come in here.\p"
	.string "I just discovered the footprints of\n"
	.string "a rare POKéMON!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

OldaleTown_Text_DiscoveredFootprints::
# 313 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
	.string "a rare POKéMON!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

OldaleTown_Text_FinishedSketchingFootprints::
# 321 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
	.string "that rare POKéMON.\p"
	.string "I can't fully identify the species by\n"
	.string "these tracks, but it must be bipedal\l"
	.string "and about the size of a small child.$"

OldaleTown_Text_MayLetsGoBack::
# 330 "data/maps/OldaleTown/scripts.pory"
	.string "{SPEAKER NAME_MAY}{PLAYER}{KUN}!\n"
	.string "Over here!\l"
	.string "Let's hurry home!$"

OldaleTown_Text_BrendanLetsGoBack::
# 336 "data/maps/OldaleTown/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}I'm heading back to my dad's\n"
	.string "LAB now.\l"
	.string "{PLAYER}, you should hustle back, too.$"

OldaleTown_Text_TownSign::
# 342 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
	.string "“Where things start off scarce.”$"
