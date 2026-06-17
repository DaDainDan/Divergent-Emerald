CeruleanCity_Frlg_MapScripts::
# 2 "data/maps/CeruleanCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CeruleanCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CERULEAN_CITY
# 4 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_SS_TICKET, CeruleanCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
CeruleanCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

CeruleanCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_POLICEMAN, 30, 12
# 6 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_SLOWBRO, 26, 31
# 7 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_LASS, 27, 31
	goto CeruleanCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


CeruleanCity_EventScript_RivalTriggerLeft::
# 14 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lockall
# 15 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 16 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Rival
	end


CeruleanCity_EventScript_RivalTriggerMid::
# 21 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lockall
# 22 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 23 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 23, 0
# 24 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Rival
	end


CeruleanCity_EventScript_RivalTriggerRight::
# 29 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lockall
# 30 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 31 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 24, 0
# 32 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_Rival
	end


CeruleanCity_EventScript_Rival::
# 37 "data/maps/CeruleanCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 38 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 39 "data/maps/CeruleanCity_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 40 "data/maps/CeruleanCity_Frlg/scripts.pory"
	addobject LOCALID_CERULEAN_RIVAL
# 41 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_EventScript_Rival_Movement_0
# 42 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 43 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_RivalIntro
# 44 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_RIVAL
# 45 "data/maps/CeruleanCity_Frlg/scripts.pory"
	switch VAR_STARTER_MON
# 46 "data/maps/CeruleanCity_Frlg/scripts.pory"
	case CHOSE_BULBASAUR, CeruleanCity_EventScript_Rival_3
# 47 "data/maps/CeruleanCity_Frlg/scripts.pory"
	case CHOSE_SQUIRTLE, CeruleanCity_EventScript_Rival_4
# 48 "data/maps/CeruleanCity_Frlg/scripts.pory"
	case CHOSE_CHARMANDER, CeruleanCity_EventScript_Rival_5
CeruleanCity_EventScript_Rival_1:
# 50 "data/maps/CeruleanCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 0
# 51 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_RivalPostBattle
# 52 "data/maps/CeruleanCity_Frlg/scripts.pory"
	closemessage
# 53 "data/maps/CeruleanCity_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 54 "data/maps/CeruleanCity_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 55 "data/maps/CeruleanCity_Frlg/scripts.pory"
	case 2, CeruleanCity_EventScript_Rival_8
# 59 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CeruleanCity_EventScript_Rival_Movement_3
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_EventScript_Rival_Movement_4
CeruleanCity_EventScript_Rival_6:
# 62 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 63 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_OhRightLittlePresentAsFavor
# 64 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1
# 65 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setflag FLAG_GOT_FAME_CHECKER
# 66 "data/maps/CeruleanCity_Frlg/scripts.pory"
	giveitem ITEM_FAME_CHECKER
# 67 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_ExplainFameCheckerSmellYa
# 68 "data/maps/CeruleanCity_Frlg/scripts.pory"
	closemessage
# 69 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_EventScript_Rival_Movement_5
# 70 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 71 "data/maps/CeruleanCity_Frlg/scripts.pory"
	fadedefaultbgm
# 72 "data/maps/CeruleanCity_Frlg/scripts.pory"
	removeobject LOCALID_CERULEAN_RIVAL
# 73 "data/maps/CeruleanCity_Frlg/scripts.pory"
	releaseall
	end

CeruleanCity_EventScript_Rival_3:
# 46 "data/maps/CeruleanCity_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_CHARMANDER, CeruleanCity_Text_RivalDefeat
	goto CeruleanCity_EventScript_Rival_1

CeruleanCity_EventScript_Rival_4:
# 47 "data/maps/CeruleanCity_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_BULBASAUR, CeruleanCity_Text_RivalDefeat
	goto CeruleanCity_EventScript_Rival_1

CeruleanCity_EventScript_Rival_5:
# 48 "data/maps/CeruleanCity_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_SQUIRTLE, CeruleanCity_Text_RivalDefeat
	goto CeruleanCity_EventScript_Rival_1

CeruleanCity_EventScript_Rival_8:
# 56 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CeruleanCity_EventScript_Rival_Movement_1
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_EventScript_Rival_Movement_2
	goto CeruleanCity_EventScript_Rival_6


CeruleanCity_EventScript_Grunt::
# 78 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lock_faceplayer
# 79 "data/maps/CeruleanCity_Frlg/scripts.pory"
	checktrainerflag TRAINER_TEAM_ROCKET_GRUNT_5
	goto_if 0, CeruleanCity_EventScript_Grunt_2
CeruleanCity_EventScript_Grunt_1:
# 87 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
	end

CeruleanCity_EventScript_Grunt_2:
# 80 "data/maps/CeruleanCity_Frlg/scripts.pory"
	message CeruleanCity_Text_GruntIntro
# 81 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmessage
# 82 "data/maps/CeruleanCity_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 83 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitbuttonpress
# 84 "data/maps/CeruleanCity_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 85 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
	goto CeruleanCity_EventScript_Grunt_1


CeruleanCity_EventScript_GruntDefeated::
# 92 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_OkayIllReturnStolenTM
# 93 "data/maps/CeruleanCity_Frlg/scripts.pory"
	checkitemspace ITEM_TM28
# 94 "data/maps/CeruleanCity_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeruleanCity_EventScript_GruntDefeated_2
# 99 "data/maps/CeruleanCity_Frlg/scripts.pory"
	giveitem_msg CeruleanCity_Text_RecoveredTM28FromGrunt, ITEM_TM28
# 100 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_BetterGetMovingBye
# 101 "data/maps/CeruleanCity_Frlg/scripts.pory"
	closemessage
# 102 "data/maps/CeruleanCity_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 103 "data/maps/CeruleanCity_Frlg/scripts.pory"
	removeobject LOCALID_CERULEAN_GRUNT
# 104 "data/maps/CeruleanCity_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 105 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setflag FLAG_GOT_TM28_FROM_ROCKET
	release_end

CeruleanCity_EventScript_GruntDefeated_2:
# 95 "data/maps/CeruleanCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 96 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_MakeRoomForThisCantRun
	release_end


CeruleanCity_EventScript_GruntTriggerTop::
# 110 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lockall
# 111 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 112 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_StepFasterUp
# 113 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 114 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 115 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 116 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
	end


CeruleanCity_EventScript_GruntTriggerBottom::
# 121 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lockall
# 122 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 123 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_StepFasterDown
# 124 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 125 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 126 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 127 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
	end


CeruleanCity_EventScript_GruntTrigger::
# 132 "data/maps/CeruleanCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 133 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_GruntIntro
# 134 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_GRUNT
# 135 "data/maps/CeruleanCity_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 136 "data/maps/CeruleanCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
# 137 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
	end


CeruleanCity_EventScript_Policeman::
# 142 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lock_faceplayer
# 143 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_PeopleHereWereRobbed
# 144 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


CeruleanCity_EventScript_LittleBoy::
# 149 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lock_faceplayer
# 150 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, CeruleanCity_EventScript_LittleBoy_2
# 154 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_IfSlowbroWasntThereCouldCutTree
	release_end

CeruleanCity_EventScript_LittleBoy_2:
# 151 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_YouCanCutDownSmallTrees
	release_end


CeruleanCity_EventScript_BaldingMan::
# 159 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_PokemonEncyclopediaAmusing, MSGBOX_NPC
	end


CeruleanCity_EventScript_Youngster::
# 164 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_TrainerLifeIsToughIsntIt, MSGBOX_NPC
	end


CeruleanCity_EventScript_CeruleanCaveGuard::
# 169 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_ThisIsCeruleanCave, MSGBOX_NPC
	end


CeruleanCity_EventScript_Woman::
# 174 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lock_faceplayer
# 175 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_WantBrightRedBicycle
# 176 "data/maps/CeruleanCity_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


CeruleanCity_EventScript_Lass::
# 181 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lock
# 182 "data/maps/CeruleanCity_Frlg/scripts.pory"
	random 3
# 183 "data/maps/CeruleanCity_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 184 "data/maps/CeruleanCity_Frlg/scripts.pory"
	switch VAR_0x8008
# 185 "data/maps/CeruleanCity_Frlg/scripts.pory"
	case 0, CeruleanCity_EventScript_Lass_3
# 186 "data/maps/CeruleanCity_Frlg/scripts.pory"
	case 1, CeruleanCity_EventScript_Lass_4
# 187 "data/maps/CeruleanCity_Frlg/scripts.pory"
	case 2, CeruleanCity_EventScript_Lass_5
CeruleanCity_EventScript_Lass_1:
# 189 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmessage
# 190 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay 40
# 191 "data/maps/CeruleanCity_Frlg/scripts.pory"
	playse SE_PIN
# 192 "data/maps/CeruleanCity_Frlg/scripts.pory"
	applymovement LOCALID_CERULEAN_SLOWBRO, Common_Movement_QuestionMark
# 193 "data/maps/CeruleanCity_Frlg/scripts.pory"
	waitmovement 0
# 194 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay 30
# 195 "data/maps/CeruleanCity_Frlg/scripts.pory"
	switch VAR_0x8008
# 196 "data/maps/CeruleanCity_Frlg/scripts.pory"
	case 0, CeruleanCity_EventScript_Lass_8
# 197 "data/maps/CeruleanCity_Frlg/scripts.pory"
	case 1, CeruleanCity_EventScript_Lass_9
# 198 "data/maps/CeruleanCity_Frlg/scripts.pory"
	case 2, CeruleanCity_EventScript_Lass_10
CeruleanCity_EventScript_Lass_6:
	release_end

CeruleanCity_EventScript_Lass_3:
# 185 "data/maps/CeruleanCity_Frlg/scripts.pory"
	message CeruleanCity_Text_SlowbroUseSonicboom
	goto CeruleanCity_EventScript_Lass_1

CeruleanCity_EventScript_Lass_4:
# 186 "data/maps/CeruleanCity_Frlg/scripts.pory"
	message CeruleanCity_Text_SlowbroPunch
	goto CeruleanCity_EventScript_Lass_1

CeruleanCity_EventScript_Lass_5:
# 187 "data/maps/CeruleanCity_Frlg/scripts.pory"
	message CeruleanCity_Text_SlowbroWithdraw
	goto CeruleanCity_EventScript_Lass_1

CeruleanCity_EventScript_Lass_8:
# 196 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroPayAttention
	goto CeruleanCity_EventScript_Lass_6

CeruleanCity_EventScript_Lass_9:
# 197 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_NoYouBlewItAgain
	goto CeruleanCity_EventScript_Lass_6

CeruleanCity_EventScript_Lass_10:
# 198 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_HardToControlMonsObedience
	goto CeruleanCity_EventScript_Lass_6


CeruleanCity_EventScript_Slowbro::
# 204 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lock
# 205 "data/maps/CeruleanCity_Frlg/scripts.pory"
	random 4
# 206 "data/maps/CeruleanCity_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 207 "data/maps/CeruleanCity_Frlg/scripts.pory"
	switch VAR_0x8008
# 208 "data/maps/CeruleanCity_Frlg/scripts.pory"
	case 0, CeruleanCity_EventScript_Slowbro_3
# 209 "data/maps/CeruleanCity_Frlg/scripts.pory"
	case 1, CeruleanCity_EventScript_Slowbro_4
# 210 "data/maps/CeruleanCity_Frlg/scripts.pory"
	case 2, CeruleanCity_EventScript_Slowbro_5
# 211 "data/maps/CeruleanCity_Frlg/scripts.pory"
	case 3, CeruleanCity_EventScript_Slowbro_6
CeruleanCity_EventScript_Slowbro_1:
	release_end

CeruleanCity_EventScript_Slowbro_3:
# 208 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTookSnooze
	goto CeruleanCity_EventScript_Slowbro_1

CeruleanCity_EventScript_Slowbro_4:
# 209 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroLoafingAround
	goto CeruleanCity_EventScript_Slowbro_1

CeruleanCity_EventScript_Slowbro_5:
# 210 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTurnedAway
	goto CeruleanCity_EventScript_Slowbro_1

CeruleanCity_EventScript_Slowbro_6:
# 211 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroIgnoredOrders
	goto CeruleanCity_EventScript_Slowbro_1


CeruleanCity_EventScript_CitySign::
# 217 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_CitySign, MSGBOX_SIGN
	end


CeruleanCity_EventScript_TrainerTips::
# 222 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_TrainerTipsHeldItems, MSGBOX_SIGN
	end


CeruleanCity_EventScript_BikeShopSign::
# 227 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_BikeShopSign, MSGBOX_SIGN
	end


CeruleanCity_EventScript_GymSign::
# 232 "data/maps/CeruleanCity_Frlg/scripts.pory"
	lockall
# 233 "data/maps/CeruleanCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, 0
# 234 "data/maps/CeruleanCity_Frlg/scripts.pory"
	msgbox CeruleanCity_Text_GymSign
# 235 "data/maps/CeruleanCity_Frlg/scripts.pory"
	releaseall
	end


# 41 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_Movement_0:
# 41 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 41 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 41 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 41 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 41 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
	step_end

# 56 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_Movement_1:
# 56 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 56 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_8
# 56 "data/maps/CeruleanCity_Frlg/scripts.pory"
	step_faster_left
# 56 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 56 "data/maps/CeruleanCity_Frlg/scripts.pory"
	step_faster_down
	step_end

# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_Movement_2:
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_left
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_right
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 57 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
	step_end

# 59 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_Movement_3:
# 59 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 59 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_8
# 59 "data/maps/CeruleanCity_Frlg/scripts.pory"
	step_faster_right
# 59 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 59 "data/maps/CeruleanCity_Frlg/scripts.pory"
	step_faster_down
	step_end

# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_Movement_4:
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_right
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	delay_16
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_left
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
# 60 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_up
	step_end

# 69 "data/maps/CeruleanCity_Frlg/scripts.pory"
CeruleanCity_EventScript_Rival_Movement_5:
# 69 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 69 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 69 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 69 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 69 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 69 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
# 69 "data/maps/CeruleanCity_Frlg/scripts.pory"
	walk_down
	step_end

CeruleanCity_Text_RivalIntro::
# 239 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "{RIVAL}: Yo! {PLAYER}!\p"
	.string "You're still struggling along back\n"
	.string "here?\p"
	.string "I'm doing great! I caught a bunch\n"
	.string "of strong and smart POKéMON!\p"
	.string "Here, let me see what you caught,\n"
	.string "{PLAYER}!$"

CeruleanCity_Text_RivalDefeat::
# 252 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Hey!\n"
	.string "Take it easy!\l"
	.string "You won already!$"

CeruleanCity_Text_RivalPostBattle::
# 258 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "{RIVAL}: Hey, guess what?\p"
	.string "I went to BILL's and got him to\n"
	.string "show me his rare POKéMON.\p"
	.string "That added a lot of pages to my\n"
	.string "POKéDEX!\p"
	.string "After all, BILL's world famous as a\n"
	.string "POKéMANIAC.\p"
	.string "He invented the POKéMON Storage\n"
	.string "System on PC, too.\p"
	.string "Since you're using his system,\n"
	.string "you should go thank him.\p"
	.string "Well, I better get rolling!\n"
	.string "Smell ya later!$"

CeruleanCity_Text_OhRightLittlePresentAsFavor::
# 280 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Oh, yeah, right.\p"
	.string "I feel sorry for you. No, really.\n"
	.string "You're always plodding behind me.\p"
	.string "So here, I'll give you a little\n"
	.string "present as a favor.$"

CeruleanCity_Text_ExplainFameCheckerSmellYa::
# 290 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "A chatty gossip like you…\n"
	.string "That thing's perfect.\p"
	.string "I don't need it because I don't\n"
	.string "give a hoot about others.\p"
	.string "All right, this time I really am\n"
	.string "gone. Smell ya!$"

CeruleanCity_Text_GruntIntro::
# 301 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Hey! Stay out!\n"
	.string "It's not your yard!\p"
	.string "…Huh?\n"
	.string "Me?\p"
	.string "I'm an innocent bystander!\n"
	.string "Don't you believe me?{PLAY_BGM}{MUS_RG_ENCOUNTER_ROCKET}$"

CeruleanCity_Text_GruntDefeat::
# 312 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "GRUNT: Stop! I give up!\n"
	.string "I'll leave quietly!$"

CeruleanCity_Text_OkayIllReturnStolenTM::
# 317 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "…Okay.\n"
	.string "I'll return the TM I stole.$"

CeruleanCity_Text_RecoveredTM28FromGrunt::
# 322 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "{PLAYER} recovered TM28 from\n"
	.string "the TEAM ROCKET GRUNT.$"

CeruleanCity_Text_BetterGetMovingBye::
# 327 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "I better get moving!\n"
	.string "Bye!$"

CeruleanCity_Text_MakeRoomForThisCantRun::
# 332 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Make room for this!\n"
	.string "I can't run until I give it to you!$"

CeruleanCity_Text_TrainerLifeIsToughIsntIt::
# 337 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "You're a TRAINER, too?\p"
	.string "Collecting, battling…\n"
	.string "It's a tough life, isn't it?$"

CeruleanCity_Text_YouCanCutDownSmallTrees::
# 344 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Did you know that you can CUT down\n"
	.string "small trees?\p"
	.string "Even that small tree in front of\n"
	.string "the shop can be CUT down.\p"
	.string "I think there's a way around it,\n"
	.string "though.$"

CeruleanCity_Text_IfSlowbroWasntThereCouldCutTree::
# 355 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "If that SLOWBRO wasn't there, you\n"
	.string "could CUT down the small tree.\p"
	.string "That way, you could get to the\n"
	.string "other side.\p"
	.string "I think there's a way around it,\n"
	.string "though.$"

CeruleanCity_Text_PokemonEncyclopediaAmusing::
# 366 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "You're making an encyclopedia on\n"
	.string "POKéMON? That sounds amusing.$"

CeruleanCity_Text_PeopleHereWereRobbed::
# 371 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "The people here were robbed.\p"
	.string "It's obvious that TEAM ROCKET is\n"
	.string "behind this most heinous crime!\p"
	.string "Even our POLICE FORCE has\n"
	.string "trouble with the ROCKETS!$"

CeruleanCity_Text_SlowbroUseSonicboom::
# 381 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Okay! SLOWBRO!\n"
	.string "Use SONICBOOM!$"

CeruleanCity_Text_SlowbroPayAttention::
# 386 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Come on, SLOWBRO, pay attention!$"

CeruleanCity_Text_SlowbroPunch::
# 390 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "SLOWBRO, punch!$"

CeruleanCity_Text_NoYouBlewItAgain::
# 394 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "No!\n"
	.string "You blew it again!$"

CeruleanCity_Text_SlowbroWithdraw::
# 399 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "SLOWBRO, WITHDRAW!$"

CeruleanCity_Text_HardToControlMonsObedience::
# 403 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "No! That's wrong!\n"
	.string "It's so hard to control POKéMON!\p"
	.string "Your POKéMON's obedience depends\n"
	.string "on your abilities as a TRAINER.$"

CeruleanCity_Text_SlowbroTookSnooze::
# 411 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "SLOWBRO took a snooze…$"

CeruleanCity_Text_SlowbroLoafingAround::
# 415 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "SLOWBRO is loafing around…$"

CeruleanCity_Text_SlowbroTurnedAway::
# 419 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "SLOWBRO turned away…$"

CeruleanCity_Text_SlowbroIgnoredOrders::
# 423 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "SLOWBRO ignored orders…$"

CeruleanCity_Text_WantBrightRedBicycle::
# 427 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "I want a bright red bicycle.\p"
	.string "I'll keep it at home, so it won't\n"
	.string "get dirty.$"

CeruleanCity_Text_ThisIsCeruleanCave::
# 434 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "This is CERULEAN CAVE.\p"
	.string "Horribly strong POKéMON live inside\n"
	.string "there.\p"
	.string "It takes a very special TRAINER to\n"
	.string "be allowed inside there.\p"
	.string "You'd have to be strong enough to\n"
	.string "become the POKéMON LEAGUE\l"
	.string "CHAMPION for starters.\p"
	.string "And, you would have to have\n"
	.string "made a great achievement.$"

CeruleanCity_Text_CitySign::
# 451 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "CERULEAN CITY\n"
	.string "A Mysterious, Blue Aura Surrounds\l"
	.string "It$"

CeruleanCity_Text_TrainerTipsHeldItems::
# 457 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "A POKéMON can be made to hold\n"
	.string "an item.\p"
	.string "Some items can even be used by\n"
	.string "the holding POKéMON in battle.$"

CeruleanCity_Text_BikeShopSign::
# 467 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "Grass and caves handled easily!\n"
	.string "BIKE SHOP$"

CeruleanCity_Text_GymSign::
# 472 "data/maps/CeruleanCity_Frlg/scripts.pory"
	.string "CERULEAN CITY POKéMON GYM\n"
	.string "LEADER: MISTY\l"
	.string "The Tomboyish Mermaid!$"
