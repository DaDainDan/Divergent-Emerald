MauvilleCity_MapScripts::
# 2 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 4 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 5 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 6 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 7 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 8 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 9 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 11 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 12 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
	goto MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


MauvilleCity_EventScript_Boy::
# 19 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
	end


MauvilleCity_EventScript_Maniac::
# 24 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
	end


MauvilleCity_EventScript_Woman::
# 29 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
	end


MauvilleCity_EventScript_RichBoy::
# 34 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
	end


MauvilleCity_EventScript_CitySign::
# 39 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_GymSign::
# 44 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_BikeShopSign::
# 49 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_GameCornerSign::
# 54 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
	end


MauvilleCity_EventScript_SchoolKidM::
# 59 "data/maps/MauvilleCity/scripts.pory"
	lock_faceplayer
# 60 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_SchoolKidM_2
# 64 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 65 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
	release_end

MauvilleCity_EventScript_SchoolKidM_2:
# 61 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
	release_end


MauvilleCity_EventScript_WallysUncle::
# 70 "data/maps/MauvilleCity/scripts.pory"
	lock_faceplayer
# 71 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallysUncle_2
# 74 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
MauvilleCity_EventScript_WallysUncle_1:
# 76 "data/maps/MauvilleCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end

MauvilleCity_EventScript_WallysUncle_2:
# 72 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
	goto MauvilleCity_EventScript_WallysUncle_1


MauvilleCity_EventScript_Wally::
# 81 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 82 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_Wally_2
# 89 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_StepFasterRight
# 90 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 92 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 93 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 94 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 95 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 96 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 97 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_ExclamationMark
# 98 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 99 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_Delay48
# 100 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 102 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end

MauvilleCity_EventScript_Wally_2:
# 83 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 84 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 85 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 86 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end


MauvilleCity_EventScript_BattleWallyPrompt::
# 107 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_EventScript_BattleWallyPrompt_2
# 120 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 121 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
	release_end

MauvilleCity_EventScript_BattleWallyPrompt_1:
# 124 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 125 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 126 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWallyPrompt_7
# 141 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWallyPrompt_8
MauvilleCity_EventScript_BattleWallyPrompt_5:
# 156 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_EventScript_BattleWallyPrompt_Movement_13
# 157 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 158 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
	end

MauvilleCity_EventScript_BattleWallyPrompt_2:
# 108 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 109 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 110 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_StepFasterRight
# 111 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 112 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 113 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 114 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 115 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 116 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_StepFasterRight
# 117 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 118 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
	goto MauvilleCity_EventScript_BattleWallyPrompt_1

MauvilleCity_EventScript_BattleWallyPrompt_7:
# 127 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_EventScript_BattleWallyPrompt_Movement_0
# 128 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_EventScript_BattleWallyPrompt_Movement_1
# 129 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_EventScript_BattleWallyPrompt_Movement_2
# 130 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 131 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_StepFasterRight
# 132 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 133 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 134 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_EventScript_BattleWallyPrompt_Movement_3
# 135 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_EventScript_BattleWallyPrompt_Movement_4
# 136 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 137 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 138 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 139 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_EventScript_BattleWallyPrompt_Movement_5
# 140 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_EventScript_BattleWallyPrompt_Movement_6
	goto MauvilleCity_EventScript_BattleWallyPrompt_5

MauvilleCity_EventScript_BattleWallyPrompt_8:
# 142 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_EventScript_BattleWallyPrompt_Movement_7
# 143 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_EventScript_BattleWallyPrompt_Movement_8
# 144 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_EventScript_BattleWallyPrompt_Movement_9
# 145 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 146 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_StepFasterRight
# 147 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 148 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 149 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_EventScript_BattleWallyPrompt_Movement_10
# 150 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 151 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 152 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 153 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_EventScript_BattleWallyPrompt_Movement_11
# 154 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_EventScript_BattleWallyPrompt_Movement_12
	goto MauvilleCity_EventScript_BattleWallyPrompt_5


MauvilleCity_EventScript_DefeatedWally::
# 163 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLY
# 164 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLYS_UNCLE
# 165 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 166 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 167 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 168 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 169 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 170 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 171 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_DefeatedWally_3
# 174 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_DefeatedWally_4
MauvilleCity_EventScript_DefeatedWally_1:
# 179 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 180 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 181 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 182 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 183 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 184 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 185 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 186 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_DefeatedWally_7
# 189 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_DefeatedWally_8
MauvilleCity_EventScript_DefeatedWally_5:
# 193 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 194 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_SCOTT
# 195 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end

MauvilleCity_EventScript_DefeatedWally_3:
# 172 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 173 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_EventScript_DefeatedWally_Movement_0
	goto MauvilleCity_EventScript_DefeatedWally_1

MauvilleCity_EventScript_DefeatedWally_4:
# 175 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_MAUVILLE_SCOTT, 12, 13
# 176 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 177 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_EventScript_DefeatedWally_Movement_1
	goto MauvilleCity_EventScript_DefeatedWally_1

MauvilleCity_EventScript_DefeatedWally_7:
# 187 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_EventScript_BattleWallyPrompt_Movement_0
# 188 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_EventScript_DefeatedWally_Movement_2
	goto MauvilleCity_EventScript_DefeatedWally_5

MauvilleCity_EventScript_DefeatedWally_8:
# 190 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_EventScript_DefeatedWally_Movement_3
# 191 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_EventScript_DefeatedWally_Movement_4
	goto MauvilleCity_EventScript_DefeatedWally_5


MauvilleCity_EventScript_Wattson::
# 200 "data/maps/MauvilleCity/scripts.pory"
	lock_faceplayer
# 201 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_Wattson_2
# 204 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 2
	goto_if_eq MauvilleCity_EventScript_Wattson_3
# 212 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_Wattson_4
# 216 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
	giveitem ITEM_BASEMENT_KEY
# 0 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_EventScript_Wattson_13
MauvilleCity_EventScript_Wattson_12:
# 220 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 221 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
MauvilleCity_EventScript_Wattson_1:
	release_end

MauvilleCity_EventScript_Wattson_2:
# 202 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
	goto MauvilleCity_EventScript_Wattson_1

MauvilleCity_EventScript_Wattson_3:
# 205 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_THUNDERBOLT
# 0 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_EventScript_Wattson_10
MauvilleCity_EventScript_Wattson_9:
# 209 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 210 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
	goto MauvilleCity_EventScript_Wattson_1

MauvilleCity_EventScript_Wattson_4:
# 213 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
	goto MauvilleCity_EventScript_Wattson_1

MauvilleCity_EventScript_Wattson_10:
# 207 "data/maps/MauvilleCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_EventScript_Wattson_9

MauvilleCity_EventScript_Wattson_13:
# 218 "data/maps/MauvilleCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_EventScript_Wattson_12


MauvilleCity_EventScript_RegisterWallyCall::
# 227 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 228 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 229 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 230 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 231 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 232 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 233 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 234 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 235 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 236 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 237 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 238 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


# 127 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_0:
# 127 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 127 "data/maps/MauvilleCity/scripts.pory"
	step_faster_left
	step_end

# 128 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_1:
# 128 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 128 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 128 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 128 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 128 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 129 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_2:
# 129 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 129 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 129 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 129 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 129 "data/maps/MauvilleCity/scripts.pory"
	walk_down
	step_end

# 134 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_3:
# 134 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 134 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 134 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 134 "data/maps/MauvilleCity/scripts.pory"
	step_faster_down
	step_end

# 135 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_4:
# 135 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 135 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 135 "data/maps/MauvilleCity/scripts.pory"
	step_faster_up
	step_end

# 139 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_5:
# 139 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 139 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 139 "data/maps/MauvilleCity/scripts.pory"
	step_faster_left
	step_end

# 140 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_6:
# 140 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 140 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 140 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 140 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 140 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 140 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 140 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 140 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 142 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_7:
# 142 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 142 "data/maps/MauvilleCity/scripts.pory"
	step_faster_down
	step_end

# 143 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_8:
# 143 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 143 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 143 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 143 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 143 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 144 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_9:
# 144 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 144 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 144 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 144 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 144 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 149 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_10:
# 149 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 149 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 153 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_11:
# 153 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 153 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 153 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 153 "data/maps/MauvilleCity/scripts.pory"
	step_faster_left
	step_end

# 154 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_12:
# 154 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 154 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 154 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 154 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 154 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 154 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 154 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 154 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 154 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 156 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_13:
# 156 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 156 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 156 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 156 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 156 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 156 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 156 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 156 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 156 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 156 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 156 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 173 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally_Movement_0:
# 173 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 173 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 173 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 173 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 173 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 173 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 173 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 173 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 173 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 173 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 173 "data/maps/MauvilleCity/scripts.pory"
	step_faster_up
	step_end

# 177 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally_Movement_1:
# 177 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 177 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 177 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 177 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 177 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 177 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 177 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 177 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 177 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 177 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 177 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 188 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally_Movement_2:
# 188 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 188 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 188 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 188 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 188 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 188 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 188 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 188 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 188 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 190 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally_Movement_3:
# 190 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 190 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 190 "data/maps/MauvilleCity/scripts.pory"
	step_faster_left
	step_end

# 191 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally_Movement_4:
# 191 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 191 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 191 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 191 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 191 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 191 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 191 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 191 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 191 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 191 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

MauvilleCity_Text_UncleHesTooPeppy::
# 242 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
	.string "this boy's got more pep, I suppose…\l"
	.string "But he's become a bit too peppy…$"

MauvilleCity_Text_WallyWantToChallengeGym::
# 248 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
	.string "I want to challenge this GYM and see\n"
	.string "how much better I've become.\p"
	.string "Please? May I, please?$"

MauvilleCity_Text_UncleYourePushingIt::
# 257 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
	.string "Since you started living with POKéMON,\n"
	.string "you have grown quite a lot stronger.\p"
	.string "But don't you think you're pushing it\n"
	.string "to suddenly challenge a GYM?$"

MauvilleCity_Text_WallyWeCanBeatAnyone::
# 267 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
	.string "If I combine forces with RALTS,\n"
	.string "we can beat anyone!$"

MauvilleCity_Text_WallyWillYouBattleMe::
# 274 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
	.string "I've gotten a lot stronger since\n"
	.string "we met.\p"
	.string "{PLAYER}, I want you and my UNCLE to\n"
	.string "understand that.\p"
	.string "{PLAYER}, please, will you have\n"
	.string "a battle with me?$"

MauvilleCity_Text_WallyMyUncleWontKnowImStrong::
# 287 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
	.string "become really strong.$"

MauvilleCity_Text_UncleCanYouBattleWally::
# 293 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
	.string "On WALLY's behalf, can I ask you to\l"
	.string "battle with him just this once?\p"
	.string "I don't think he's going to listen to\n"
	.string "any reason the way he is now.$"

MauvilleCity_Text_WallyPleaseBattleMe::
# 302 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
	.string "Battle with me, please.$"

MauvilleCity_Text_WallyHereICome::
# 307 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
	.string "Okay… Here I come!$"

MauvilleCity_Text_WallyDefeat::
# 313 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
	.string "… … … … … … … …\p"
	.string "I lost…$"

MauvilleCity_Text_WallyIllGoBackToVerdanturf::
# 321 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
	.string "I'll go back to VERDANTURF…$"

MauvilleCity_Text_ThankYouNotEnoughToBattle::
# 326 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
	.string "Being a TRAINER is tough, isn't it?\p"
	.string "It's not enough just to have POKéMON\n"
	.string "and make them battle. That isn't what\l"
	.string "being a real TRAINER is about.$"

MauvilleCity_Text_UncleNoNeedToBeDown::
# 335 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
	.string "down on yourself.\p"
	.string "Why, what's keeping you from becoming\n"
	.string "stronger and stronger?\p"
	.string "Come on, let's go home.\n"
	.string "Everyone's waiting for you.$"

MauvilleCity_Text_UncleVisitUsSometime::
# 346 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
	.string "that you must be the TRAINER who kept\l"
	.string "an eye out for WALLY when he caught\l"
	.string "his POKéMON.\p"
	.string "Why don't you visit us in VERDANTURF\n"
	.string "sometime?\l"
	.string "I'm sure WALLY would enjoy it.$"

MauvilleCity_Text_WallyPokenavCall::
# 357 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
	.string "I just wanted to tell you that\n"
	.string "my uncle bought me a POKéNAV!\p"
	.string "Now I can get in touch with you\n"
	.string "anytime, {PLAYER}!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

MauvilleCity_Text_RegisteredWally::
# 373 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
	.string "in the POKéNAV.$"

MauvilleCity_Text_ScottYouDidntHoldBack::
# 378 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
	.string "I was watching that match!\p"
	.string "You're friends with that boy WALLY,\n"
	.string "aren't you?\p"
	.string "But you didn't hold anything back\n"
	.string "and beat him impressively.\p"
	.string "Yeah! That's what a real POKéMON\n"
	.string "battle is all about!\p"
	.string "I idolize TRAINERS like that!\p"
	.string "… … … … … …\n"
	.string "I'll be cheering for you!$"

MauvilleCity_Text_WattsonNeedFavorTakeKey::
# 397 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
	.string "You look like you have a lot of zip!\l"
	.string "That's a good thing, wahahahaha!\p"
	.string "Fine! I've decided!\n"
	.string "I need a favor, {PLAYER}{KUN}!\p"
	.string "MAUVILLE CITY has an underground\n"
	.string "sector called NEW MAUVILLE.\p"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
	.string "switch off the GENERATOR.\p"
	.string "The GENERATOR has been running a bit\n"
	.string "haywire. It's getting unsafe.\p"
	.string "Here, this is the KEY to get into\n"
	.string "NEW MAUVILLE.$"

MauvilleCity_Text_WattsonWontBeChallenge::
# 418 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
	.string "It won't be a challenge to you.\p"
	.string "The entrance to NEW MAUVILLE is just\n"
	.string "a short SURF away from ROUTE 110.\p"
	.string "That's it, then, you have my trust!\n"
	.string "Wahahahaha!$"

MauvilleCity_Text_WattsonThanksTakeTM::
# 429 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
	.string "the right choice asking you!\p"
	.string "This is my thanks--a TM containing\n"
	.string "THUNDERBOLT!\p"
	.string "Go on, you've earned it!$"

MauvilleCity_Text_WattsonYoungTakeCharge::
# 441 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
	.string "It pleases me to no end to see\n"
	.string "the young step up and take charge!$"

MauvilleCity_Text_NurseHurtMonBackToHealth::
# 448 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
	.string "battles and stuff…\p"
	.string "But if your POKéMON gets hurt,\n"
	.string "you have to nurse it back to health.$"

MauvilleCity_Text_AllSortsOfPeopleComeThrough::
# 456 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
	.string "and south, and east and west.\p"
	.string "Because of that, we get all sorts of\n"
	.string "people coming through.$"

MauvilleCity_Text_RydelVeryGenerous::
# 464 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
	.string "RYDEL, the owner, is a very generous\n"
	.string "man.$"

MauvilleCity_Text_PokemonCanJumpYouOnBike::
# 471 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
	.string "wild POKéMON could jump you.$"

MauvilleCity_Text_CitySign::
# 476 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
	.string "“The bright and shiny city of fun!”$"

MauvilleCity_Text_GymSign::
# 481 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
	.string "LEADER: WATTSON\l"
	.string "“The cheerfully electrifying man!”$"

MauvilleCity_Text_BikeShopSign::
# 487 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
	.string "soul!”\l"
	.string "RYDEL'S CYCLES$"

MauvilleCity_Text_GameCornerSign::
# 493 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
	.string "MAUVILLE GAME CORNER$"

MauvilleCity_Text_ExplainTV::
# 498 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
	.string "They've added a bunch of cool new\n"
	.string "shows recently.\p"
	.string "TV is so cool. I've seen my friends on\n"
	.string "TV just out of the blue.\p"
	.string "And, sometimes, they even put you on TV\n"
	.string "without telling you.\p"
	.string "I wish I would be on TV sometime.\p"
	.string "That's why I think you should check\n"
	.string "out TVs whenever you can.$"

MauvilleCity_Text_BeenCheckingOutTV::
# 516 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
