Route120_MapScripts::
# 3 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route120_MapScripts_MAP_SCRIPT_ON_RESUME
# 14 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 35 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route120_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route120_MapScripts_MAP_SCRIPT_ON_RESUME:
# 4 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_MapScripts_MAP_SCRIPT_ON_RESUME_3
Route120_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

Route120_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 5 "data/maps/Route120/scripts.pory"
	compare VAR_0x8009, 0
	goto_if_eq Route120_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 9 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto Route120_MapScripts_MAP_SCRIPT_ON_RESUME_1

Route120_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route120_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto Route120_MapScripts_MAP_SCRIPT_ON_RESUME_1

Route120_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 6 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 7 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
	goto Route120_MapScripts_MAP_SCRIPT_ON_RESUME_1

Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 16 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 17 "data/maps/Route120/scripts.pory"
	compare VAR_TEMP_1, 14
	goto_if_le Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 20 "data/maps/Route120/scripts.pory"
	compare VAR_TEMP_1, 60
	goto_if_le Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 30 "data/maps/Route120/scripts.pory"
	compare VAR_TEMP_1, 61
	goto_if_ge Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
	goto Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 21 "data/maps/Route120/scripts.pory"
	compare VAR_TEMP_0, 7
	goto_if_le Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 24 "data/maps/Route120/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_le Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 27 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
	end

Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 31 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
	goto Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 22 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
	goto Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_8

Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 25 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
	goto Route120_MapScripts_MAP_SCRIPT_ON_TRANSITION_11

Route120_MapScripts_MAP_SCRIPT_ON_LOAD:
# 36 "data/maps/Route120/scripts.pory"
	goto_if_unset FLAG_REGI_DOORS_OPENED, Route120_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route120_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 40 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_MapScripts_MAP_SCRIPT_ON_LOAD_5
Route120_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 46 "data/maps/Route120/scripts.pory"
	goto_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_MapScripts_MAP_SCRIPT_ON_LOAD_8
Route120_MapScripts_MAP_SCRIPT_ON_LOAD_7:
	end

Route120_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 37 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 38 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
	goto Route120_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route120_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 41 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 42 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 43 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 44 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
	goto Route120_MapScripts_MAP_SCRIPT_ON_LOAD_4

Route120_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 47 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
	goto Route120_MapScripts_MAP_SCRIPT_ON_LOAD_7


Route120_EventScript_BerryBeauty::
# 54 "data/maps/Route120/scripts.pory"
	lock_faceplayer
# 55 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 56 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_BerryBeauty_2
# 60 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 61 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route120_EventScript_BerryBeauty_5
# 64 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
Route120_EventScript_BerryBeauty_4:
# 66 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 67 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 68 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_BerryBeauty_10
# 69 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_BerryBeauty_10
# 70 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_BerryBeauty_11
# 71 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_BerryBeauty_11
# 72 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_BerryBeauty_12
# 73 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_BerryBeauty_12
# 74 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_BerryBeauty_13
# 75 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_BerryBeauty_13
# 76 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_BerryBeauty_14
# 77 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_BerryBeauty_14
Route120_EventScript_BerryBeauty_8:
	giveitem VAR_GIFT_ITEM
# 0 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route120_EventScript_BerryBeauty_16
Route120_EventScript_BerryBeauty_15:
# 82 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 83 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
	release_end

Route120_EventScript_BerryBeauty_2:
# 57 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
	release_end

Route120_EventScript_BerryBeauty_5:
# 62 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
	goto Route120_EventScript_BerryBeauty_4

Route120_EventScript_BerryBeauty_10:
# 69 "data/maps/Route120/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_FIGY_BERRY
	goto Route120_EventScript_BerryBeauty_8

Route120_EventScript_BerryBeauty_11:
# 71 "data/maps/Route120/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_WIKI_BERRY
	goto Route120_EventScript_BerryBeauty_8

Route120_EventScript_BerryBeauty_12:
# 73 "data/maps/Route120/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_MAGO_BERRY
	goto Route120_EventScript_BerryBeauty_8

Route120_EventScript_BerryBeauty_13:
# 75 "data/maps/Route120/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_AGUAV_BERRY
	goto Route120_EventScript_BerryBeauty_8

Route120_EventScript_BerryBeauty_14:
# 77 "data/maps/Route120/scripts.pory"
	setvar VAR_GIFT_ITEM, ITEM_IAPAPA_BERRY
	goto Route120_EventScript_BerryBeauty_8

Route120_EventScript_BerryBeauty_16:
# 80 "data/maps/Route120/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route120_EventScript_BerryBeauty_15


Route120_EventScript_Steven::
# 88 "data/maps/Route120/scripts.pory"
	lock_faceplayer
# 89 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_Steven_2
# 92 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
Route120_EventScript_Steven_1:
# 94 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route120_EventScript_Steven_6
# 99 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 100 "data/maps/Route120/scripts.pory"
	closemessage
# 101 "data/maps/Route120/scripts.pory"
	switch VAR_FACING
# 102 "data/maps/Route120/scripts.pory"
	case DIR_NORTH, Route120_EventScript_Steven_10
# 103 "data/maps/Route120/scripts.pory"
	case DIR_WEST, Route120_EventScript_Steven_11
Route120_EventScript_Steven_8:
# 105 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_StepFasterLeft
# 107 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route120/scripts.pory"
	delay 20
# 109 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 110 "data/maps/Route120/scripts.pory"
	closemessage
# 111 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_StepFasterRight
# 112 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 113 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 114 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 115 "data/maps/Route120/scripts.pory"
	waitse
# 116 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 117 "data/maps/Route120/scripts.pory"
	delay 40
# 118 "data/maps/Route120/scripts.pory"
	waitmoncry
# 119 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 30
# 120 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 121 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 122 "data/maps/Route120/scripts.pory"
	dowildbattle
# 123 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 124 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 125 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 126 "data/maps/Route120/scripts.pory"
	case B_OUTCOME_WON, Route120_EventScript_Steven_14
# 127 "data/maps/Route120/scripts.pory"
	case B_OUTCOME_RAN, Route120_EventScript_Steven_14
# 128 "data/maps/Route120/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_Steven_14
Route120_EventScript_Steven_12:
# 134 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_StepFasterDown
# 135 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 136 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 137 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 138 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 139 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 140 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 141 "data/maps/Route120/scripts.pory"
	closemessage
# 142 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_ROUTE120_STEVEN, Common_Movement_StepFasterDown
# 143 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 144 "data/maps/Route120/scripts.pory"
	delay 50
# 145 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 146 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 147 "data/maps/Route120/scripts.pory"
	delay 15
# 148 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_ROUTE120_STEVEN
# 149 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 150 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 151 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 152 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 153 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 154 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
	release_end

Route120_EventScript_Steven_2:
# 90 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
	goto Route120_EventScript_Steven_1

Route120_EventScript_Steven_6:
# 95 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 96 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
	release_end

Route120_EventScript_Steven_10:
# 102 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto Route120_EventScript_Steven_8

Route120_EventScript_Steven_11:
# 103 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_PLAYER, Route120_EventScript_Steven_Movement_0
	goto Route120_EventScript_Steven_8

Route120_EventScript_Steven_14:
# 129 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 130 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 131 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 132 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Route120_EventScript_Steven_12


Route120_EventScript_BridgeKecleon::
# 159 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
	end


Route120_EventScript_RouteSignFortree::
# 164 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
	end


Route120_EventScript_RouteSign121::
# 169 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
	end


Route120_EventScript_Colin::
# 174 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 175 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
	end


Route120_EventScript_Robert::
# 180 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route120_EventScript_Robert_2
# 186 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
	release_end

Route120_EventScript_Robert_2:
# 182 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 183 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
	end


Route120_EventScript_RegisterRobert::
# 191 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 192 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 193 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 194 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
	release_end


Route120_EventScript_Lorenzo::
# 199 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 200 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
	end


Route120_EventScript_Jenna::
# 205 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 206 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
	end


Route120_EventScript_Jeffrey::
# 211 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route120_EventScript_Jeffrey_2
# 217 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
	release_end

Route120_EventScript_Jeffrey_2:
# 213 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 214 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
	end


Route120_EventScript_RegisterJeffrey::
# 222 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 223 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 224 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 225 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
	release_end


Route120_EventScript_Jennifer::
# 230 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 231 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
	end


Route120_EventScript_Chip::
# 236 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CHIP, Route120_Text_ChipIntro, Route120_Text_ChipDefeat
# 237 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
	end


Route120_EventScript_Clarissa::
# 242 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 243 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
	end


Route120_EventScript_Angelica::
# 248 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 249 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
	end


Route120_EventScript_Keigo::
# 254 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 255 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
	end


Route120_EventScript_Riley::
# 260 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 261 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
	end


Route120_EventScript_Leonel::
# 266 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 267 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
	end


Route120_EventScript_Callie::
# 272 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 273 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
	end


# 103 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven_Movement_0:
# 103 "data/maps/Route120/scripts.pory"
	walk_down
# 103 "data/maps/Route120/scripts.pory"
	walk_left
	step_end

Route120_Text_StevenGreeting::
# 277 "data/maps/Route120/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}Hm? {PLAYER}{KUN}, hi.\n"
	.string "It's been a while.\p"
	.string "There's something here that you can't\n"
	.string "see, right?\p"
	.string "Now, if I were to use this device on\n"
	.string "the invisible obstacle…\p"
	.string "No, no. Rather than describing it,\n"
	.string "I should just show you.\l"
	.string "That would be more fun.\p"
	.string "{PLAYER}{KUN}, are your POKéMON ready for\n"
	.string "battle?$"

Route120_Text_StevenIllWaitHere::
# 295 "data/maps/Route120/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}No?\p"
	.string "I'll wait here, so you can get ready.$"

Route120_Text_StevenReadyForBattle::
# 301 "data/maps/Route120/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}{PLAYER}{KUN}, are your POKéMON\n"
	.string "ready for battle?$"

Route120_Text_StevenShowMeYourPower::
# 306 "data/maps/Route120/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}{PLAYER}{KUN}, show me your true\n"
	.string "power as a TRAINER!$"

Route120_Text_StevenUsedDevonScope::
# 311 "data/maps/Route120/scripts.pory"
	.string "STEVEN used the DEVON SCOPE.\p"
	.string "An invisible POKéMON became completely\n"
	.string "visible!\p"
	.string "The startled POKéMON attacked!$"

Route120_Text_StevenGiveDevonScope::
# 320 "data/maps/Route120/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}I see…\n"
	.string "Your battle style is intriguing.\p"
	.string "Your POKéMON have obviously grown\n"
	.string "since I first met you in DEWFORD.\p"
	.string "I'd like you to have this\n"
	.string "DEVON SCOPE.\p"
	.string "Who knows, there may be other\n"
	.string "concealed POKéMON.$"

Route120_Text_StevenGoodbye::
# 334 "data/maps/Route120/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}{PLAYER}{KUN}.\p"
	.string "I enjoy seeing POKéMON and TRAINERS\n"
	.string "who strive together.\p"
	.string "I think you're doing great.\p"
	.string "Well, let's meet again somewhere.$"

Kecleon_Text_SomethingUnseeable::
# 345 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"

Kecleon_Text_WantToUseDevonScope::
# 349 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
	.string "Want to use the DEVON SCOPE?$"

Kecleon_Text_UseDevonScopeMonAttacked::
# 355 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
	.string "An invisible POKéMON became completely\n"
	.string "visible!\p"
	.string "The startled POKéMON attacked!$"

Route120_Text_RouteSignFortree::
# 364 "data/maps/Route120/scripts.pory"
	.string "ROUTE 120\n"
	.string "{LEFT_ARROW} FORTREE CITY$"

Route120_Text_RouteSign121::
# 369 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 121\n"
	.string "{LEFT_ARROW} ROUTE 120$"
