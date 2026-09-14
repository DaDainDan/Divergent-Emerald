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
	setflag FLAG_SYS_TV_START
# 6 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 7 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 8 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE_VOUCHER, MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
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

MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 8 "data/maps/MauvilleCity/scripts.pory"
	goto_if_unset FLAG_HIDE_ROUTE_110_TEAM_AQUA, MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto MauvilleCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_3


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
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 90 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 91 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 92 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 93 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 95 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_ExclamationMark
# 96 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 97 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_Delay48
# 98 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 99 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 100 "data/maps/MauvilleCity/scripts.pory"
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
# 105 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MauvilleCity_EventScript_BattleWallyPrompt_2
# 118 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 119 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
	release_end

MauvilleCity_EventScript_BattleWallyPrompt_1:
# 122 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 123 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 124 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_BattleWallyPrompt_7
# 138 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_BattleWallyPrompt_8
MauvilleCity_EventScript_BattleWallyPrompt_5:
# 152 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_EventScript_BattleWallyPrompt_Movement_13
# 153 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 154 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_ScottEncounter
	end

MauvilleCity_EventScript_BattleWallyPrompt_2:
# 106 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 107 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 108 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_StepFasterLeft
# 109 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 110 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 111 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
# 112 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 113 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 114 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_StepFasterLeft
# 115 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 116 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
	goto MauvilleCity_EventScript_BattleWallyPrompt_1

MauvilleCity_EventScript_BattleWallyPrompt_7:
# 125 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_EventScript_BattleWallyPrompt_Movement_0
# 126 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_EventScript_BattleWallyPrompt_Movement_1
# 127 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_EventScript_BattleWallyPrompt_Movement_2
# 128 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 129 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_StepFasterRight
# 130 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 131 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 132 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_EventScript_BattleWallyPrompt_Movement_3
# 133 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_EventScript_BattleWallyPrompt_Movement_4
# 134 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 135 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_WallyBondOrDrive
# 136 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_EventScript_BattleWallyPrompt_Movement_5
# 137 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_EventScript_BattleWallyPrompt_Movement_6
	goto MauvilleCity_EventScript_BattleWallyPrompt_5

MauvilleCity_EventScript_BattleWallyPrompt_8:
# 139 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_EventScript_BattleWallyPrompt_Movement_7
# 140 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_EventScript_BattleWallyPrompt_Movement_8
# 141 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_EventScript_BattleWallyPrompt_Movement_9
# 142 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 143 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_StepFasterRight
# 144 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 145 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 146 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_EventScript_BattleWallyPrompt_Movement_10
# 147 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 148 "data/maps/MauvilleCity/scripts.pory"
	call MauvilleCity_EventScript_WallyBondOrDrive
# 149 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_EventScript_BattleWallyPrompt_Movement_11
# 150 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_EventScript_BattleWallyPrompt_Movement_12
	goto MauvilleCity_EventScript_BattleWallyPrompt_5


MauvilleCity_EventScript_WallyBondOrDrive::
# 159 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWhatIsYourSecret, MSGBOX_DEFAULT
# 160 "data/maps/MauvilleCity/scripts.pory"
	dynmultipush MauvilleCity_EventScript_WallyBondOrDrive_Text_0, 0
# 161 "data/maps/MauvilleCity/scripts.pory"
	dynmultipush MauvilleCity_EventScript_WallyBondOrDrive_Text_1, 1
# 162 "data/maps/MauvilleCity/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 163 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_EventScript_WallyBondOrDrive_2
MauvilleCity_EventScript_WallyBondOrDrive_1:
# 166 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIUnderstand, MSGBOX_DEFAULT
# 167 "data/maps/MauvilleCity/scripts.pory"
	closemessage
	return

MauvilleCity_EventScript_WallyBondOrDrive_2:
# 164 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WALLY_DRIVE
	goto MauvilleCity_EventScript_WallyBondOrDrive_1


MauvilleCity_EventScript_ScottEncounter::
# 172 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLY
# 173 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_WALLYS_UNCLE
# 174 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 175 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 176 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 177 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 178 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_ScottEncounter_3
# 181 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_ScottEncounter_4
MauvilleCity_EventScript_ScottEncounter_1:
# 186 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 187 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 188 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 189 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 190 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 191 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BLACK_GLASSES
# 192 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_ScottEncounter_Text_0, MSGBOX_DEFAULT
# 193 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 194 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 195 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 196 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_ScottEncounter_7
# 199 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_ScottEncounter_8
MauvilleCity_EventScript_ScottEncounter_5:
# 203 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 204 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_MAUVILLE_SCOTT
# 205 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end

MauvilleCity_EventScript_ScottEncounter_3:
# 179 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 180 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_EventScript_ScottEncounter_Movement_0
	goto MauvilleCity_EventScript_ScottEncounter_1

MauvilleCity_EventScript_ScottEncounter_4:
# 182 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_MAUVILLE_SCOTT, 12, 13
# 183 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_MAUVILLE_SCOTT
# 184 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_EventScript_ScottEncounter_Movement_1
	goto MauvilleCity_EventScript_ScottEncounter_1

MauvilleCity_EventScript_ScottEncounter_7:
# 197 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_EventScript_BattleWallyPrompt_Movement_0
# 198 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_EventScript_ScottEncounter_Movement_2
	goto MauvilleCity_EventScript_ScottEncounter_5

MauvilleCity_EventScript_ScottEncounter_8:
# 200 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_PLAYER, MauvilleCity_EventScript_ScottEncounter_Movement_3
# 201 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_EventScript_ScottEncounter_Movement_4
	goto MauvilleCity_EventScript_ScottEncounter_5


MauvilleCity_EventScript_Wattson::
# 210 "data/maps/MauvilleCity/scripts.pory"
	lock_faceplayer
# 211 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_Wattson_2
# 214 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 4
	goto_if_eq MauvilleCity_EventScript_Wattson_3
# 222 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_BIKE_VOUCHER, MauvilleCity_EventScript_Wattson_4
# 225 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 2
	goto_if_eq MauvilleCity_EventScript_Wattson_5
# 233 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_Wattson_6
# 237 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
	giveitem ITEM_BASEMENT_KEY
# 0 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_EventScript_Wattson_20
MauvilleCity_EventScript_Wattson_19:
# 241 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 242 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
MauvilleCity_EventScript_Wattson_1:
	release_end

MauvilleCity_EventScript_Wattson_2:
# 212 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
	goto MauvilleCity_EventScript_Wattson_1

MauvilleCity_EventScript_Wattson_3:
# 215 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Wattson_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_TM_THUNDER_WAVE
# 0 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_EventScript_Wattson_14
MauvilleCity_EventScript_Wattson_13:
# 219 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 220 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
	goto MauvilleCity_EventScript_Wattson_1

MauvilleCity_EventScript_Wattson_4:
# 223 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Wattson_Text_0, MSGBOX_DEFAULT
	goto MauvilleCity_EventScript_Wattson_1

MauvilleCity_EventScript_Wattson_5:
# 226 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
	giveitem ITEM_BIKE_VOUCHER
# 0 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_EventScript_Wattson_17
MauvilleCity_EventScript_Wattson_16:
# 230 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_RECEIVED_BIKE_VOUCHER
# 231 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Wattson_Text_0, MSGBOX_DEFAULT
	goto MauvilleCity_EventScript_Wattson_1

MauvilleCity_EventScript_Wattson_6:
# 234 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
	goto MauvilleCity_EventScript_Wattson_1

MauvilleCity_EventScript_Wattson_14:
# 217 "data/maps/MauvilleCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_EventScript_Wattson_13

MauvilleCity_EventScript_Wattson_17:
# 228 "data/maps/MauvilleCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_EventScript_Wattson_16

MauvilleCity_EventScript_Wattson_20:
# 239 "data/maps/MauvilleCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MauvilleCity_EventScript_Wattson_19


MauvilleCity_EventScript_RegisterWallyCall::
# 248 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 249 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 250 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 251 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 252 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 253 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 254 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 255 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 256 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 257 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 258 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 259 "data/maps/MauvilleCity/scripts.pory"
	releaseall
	end


# 125 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_0:
# 125 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 125 "data/maps/MauvilleCity/scripts.pory"
	step_faster_left
	step_end

# 126 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_1:
# 126 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 126 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 126 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 126 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 126 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 127 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_2:
# 127 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 127 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 127 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 127 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 127 "data/maps/MauvilleCity/scripts.pory"
	walk_down
	step_end

# 132 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_3:
# 132 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 132 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 132 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 132 "data/maps/MauvilleCity/scripts.pory"
	step_faster_down
	step_end

# 133 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_4:
# 133 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 133 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 133 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 133 "data/maps/MauvilleCity/scripts.pory"
	step_faster_up
	step_end

# 136 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_5:
# 136 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 136 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 136 "data/maps/MauvilleCity/scripts.pory"
	step_faster_left
	step_end

# 137 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_6:
# 137 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 137 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 137 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 137 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 137 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 137 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 137 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 137 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 139 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_7:
# 139 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 139 "data/maps/MauvilleCity/scripts.pory"
	step_faster_down
	step_end

# 140 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_8:
# 140 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 140 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 140 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 140 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 140 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 141 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_9:
# 141 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 141 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 141 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 141 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 141 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 146 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_10:
# 146 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 146 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 149 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_11:
# 149 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 149 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 149 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 149 "data/maps/MauvilleCity/scripts.pory"
	step_faster_left
	step_end

# 150 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_12:
# 150 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 150 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 150 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 150 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 150 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 150 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 150 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 150 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 150 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 152 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt_Movement_13:
# 152 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 152 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 152 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 152 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 152 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 152 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 152 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 152 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 152 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 152 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 152 "data/maps/MauvilleCity/scripts.pory"
	delay_8
	step_end

# 180 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottEncounter_Movement_0:
# 180 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 180 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 180 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 180 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 180 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 180 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 180 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 180 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 180 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 180 "data/maps/MauvilleCity/scripts.pory"
	step_faster_up
	step_end

# 184 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottEncounter_Movement_1:
# 184 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 184 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 184 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 184 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 184 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 184 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 184 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 184 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 184 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 184 "data/maps/MauvilleCity/scripts.pory"
	walk_up
	step_end

# 198 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottEncounter_Movement_2:
# 198 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 198 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 198 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 198 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 198 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 198 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 198 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 198 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 198 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

# 200 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottEncounter_Movement_3:
# 200 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 200 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 200 "data/maps/MauvilleCity/scripts.pory"
	step_faster_left
	step_end

# 201 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottEncounter_Movement_4:
# 201 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 201 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 201 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 201 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 201 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 201 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 201 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 201 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 201 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 201 "data/maps/MauvilleCity/scripts.pory"
	walk_left
	step_end

MauvilleCity_EventScript_WallyBondOrDrive_Text_0:
# 160 "data/maps/MauvilleCity/scripts.pory"
	.string "BONDS WITH POKéMON$"

MauvilleCity_EventScript_WallyBondOrDrive_Text_1:
# 161 "data/maps/MauvilleCity/scripts.pory"
	.string "DRIVE TO BE THE BEST$"

MauvilleCity_EventScript_ScottEncounter_Text_0:
# 192 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be rooting for you, kid!$"

MauvilleCity_EventScript_Wattson_Text_0:
# 215 "data/maps/MauvilleCity/scripts.pory"
	.string "…$"

MauvilleCity_Text_UncleHesTooPeppy::
# 263 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}It's because of POKéMON that\n"
	.string "this boy's got more pep, I suppose…\l"
	.string "But he's become a bit too peppy…$"

MauvilleCity_Text_WallyWantToChallengeGym::
# 269 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_WALLY}Aww, UNCLE, please?\p"
	.string "I want to challenge this GYM and see\n"
	.string "how much better I've become.\p"
	.string "Please? May I, please?$"

MauvilleCity_Text_UncleYourePushingIt::
# 278 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Now hold on, WALLY.\p"
	.string "Since you started living with POKéMON,\n"
	.string "you have grown quite a lot stronger.\p"
	.string "But don't you think you're pushing it\n"
	.string "to suddenly challenge a GYM?$"

MauvilleCity_Text_WallyWeCanBeatAnyone::
# 288 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_WALLY}I'm not pushing it.\p"
	.string "If I combine forces with RALTS,\n"
	.string "we can beat anyone!$"

MauvilleCity_Text_WallyWillYouBattleMe::
# 295 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_WALLY}Oh! Hi, {PLAYER}!\p"
	.string "I've gotten a lot stronger since\n"
	.string "we met.\p"
	.string "{PLAYER}, I want you and my UNCLE to\n"
	.string "understand that.\p"
	.string "{PLAYER}, please, will you have\n"
	.string "a battle with me?$"

MauvilleCity_Text_WallyMyUncleWontKnowImStrong::
# 308 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_WALLY}Oh… If you won't battle me,\n"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
	.string "become really strong.$"

MauvilleCity_Text_UncleCanYouBattleWally::
# 314 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_WADE}{PLAYER}{KUN}, was it?\n"
	.string "On WALLY's behalf, can I ask you to\l"
	.string "battle with him just this once?\p"
	.string "I don't think he's going to listen to\n"
	.string "any reason the way he is now.$"

MauvilleCity_Text_WallyPleaseBattleMe::
# 323 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_WALLY}{PLAYER}, please!\n"
	.string "Battle with me, please.$"

MauvilleCity_Text_WallyHereICome::
# 328 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_WALLY}{PLAYER}, thank you.\p"
	.string "Okay… Here I come!$"

MauvilleCity_Text_WallyDefeat::
# 334 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … …\p"
	.string "… … … … … … … …\p"
	.string "I lost…$"

MauvilleCity_Text_WallyIllGoBackToVerdanturf::
# 342 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_WALLY}UNCLE…\n"
	.string "I'll go back to VERDANTURF…$"

MauvilleCity_Text_WallyWhatIsYourSecret::
# 347 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}…\n"
	.string "What's your secret?\p"
	.string "What makes you such a great TRAINER?\n"
	.string "Can you tell me?$"

MauvilleCity_Text_WallyIUnderstand::
# 355 "data/maps/MauvilleCity/scripts.pory"
	.string "I see…\p"
	.string "I think…\n"
	.string "I think I understand…\p"
	.string "Thank you.$"

MauvilleCity_Text_ThankYouNotEnoughToBattle::
# 364 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
	.string "Being a TRAINER is tough, isn't it?\p"
	.string "It's not enough just to have POKéMON\n"
	.string "and make them battle. That isn't what\l"
	.string "being a real TRAINER is about.$"

MauvilleCity_Text_UncleNoNeedToBeDown::
# 373 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_WADE}WALLY, there's no need to be so\n"
	.string "down on yourself.\p"
	.string "Why, what's keeping you from becoming\n"
	.string "stronger and stronger?\p"
	.string "Come on, let's go home.\n"
	.string "Everyone's waiting for you.$"

MauvilleCity_Text_UncleVisitUsSometime::
# 384 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_WADE}{PLAYER}{KUN}, it just dawned on me\n"
	.string "that you must be the TRAINER who kept\l"
	.string "an eye out for WALLY when he caught\l"
	.string "his POKéMON.\p"
	.string "Why don't you visit us in VERDANTURF\n"
	.string "sometime?\l"
	.string "I'm sure WALLY would enjoy it.$"

MauvilleCity_Text_WallyPokenavCall::
# 395 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "{SPEAKER NAME_WALLY}Oh, hello, {PLAYER}!\p"
	.string "I just wanted to tell you that\n"
	.string "my uncle bought me a POKéNAV!\p"
	.string "Now I can get in touch with you\n"
	.string "anytime, {PLAYER}!\p"
	.string "{SPEAKER NAME_NONE}… … … … … …\n"
	.string "… … … … … Click!$"

MauvilleCity_Text_RegisteredWally::
# 411 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
	.string "in the POKéNAV.$"

MauvilleCity_Text_ScottYouDidntHoldBack::
# 416 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_SCOTT}Hehe…\n"
	.string "I was watching that match!\p"
	.string "You're friends with that boy WALLY,\n"
	.string "aren't you?\p"
	.string "But you didn't hold anything back\n"
	.string "and beat him impressively.\p"
	.string "Yeah! That's what a real POKéMON\n"
	.string "battle is all about!\p"
	.string "I idolize cool TRAINERS like that!\p"
	.string "And any cool TRAINER needs a cool\n"
	.string "pair of sunglasses like mine.$"

MauvilleCity_Text_WattsonNeedFavorTakeKey::
# 435 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_WATSON}Oh, {PLAYER}{KUN}!\n"
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
# 456 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_WATSON}Don't you worry about it.\n"
	.string "It won't be a challenge to you.\p"
	.string "The entrance to NEW MAUVILLE is just\n"
	.string "a short SURF away from ROUTE 110.\p"
	.string "That's it, then, you have my trust!\n"
	.string "Wahahahaha!$"

MauvilleCity_Text_WattsonThanksTakeTM::
# 467 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_WATSON}Wahahahaha!\p"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
	.string "the right choice asking you!\p"
	.string "This is my thanks--a TM containing\n"
	.string "THUNDERBOLT!\p"
	.string "Go on, you've earned it!$"

MauvilleCity_Text_WattsonYoungTakeCharge::
# 479 "data/maps/MauvilleCity/scripts.pory"
	.string "{SPEAKER NAME_WATSON}Wahahahaha!\p"
	.string "It pleases me to no end to see\n"
	.string "the young step up and take charge!$"

MauvilleCity_Text_NurseHurtMonBackToHealth::
# 486 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
	.string "battles and stuff…\p"
	.string "But if your POKéMON gets hurt,\n"
	.string "you have to nurse it back to health.$"

MauvilleCity_Text_AllSortsOfPeopleComeThrough::
# 494 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
	.string "and south, and east and west.\p"
	.string "Because of that, we get all sorts of\n"
	.string "people coming through.$"

MauvilleCity_Text_RydelVeryGenerous::
# 502 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
	.string "RYDEL, the owner, is a very generous\n"
	.string "man.$"

MauvilleCity_Text_PokemonCanJumpYouOnBike::
# 509 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
	.string "wild POKéMON could jump you.$"

MauvilleCity_Text_CitySign::
# 514 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
	.string "“The bright and shiny city of fun!”$"

MauvilleCity_Text_GymSign::
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
	.string "LEADER: WATTSON\l"
	.string "“The cheerfully electrifying man!”$"

MauvilleCity_Text_BikeShopSign::
# 525 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
	.string "soul!”\l"
	.string "RYDEL'S CYCLES$"

MauvilleCity_Text_GameCornerSign::
# 531 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
	.string "MAUVILLE GAME CORNER$"

MauvilleCity_Text_ExplainTV::
# 536 "data/maps/MauvilleCity/scripts.pory"
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
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
