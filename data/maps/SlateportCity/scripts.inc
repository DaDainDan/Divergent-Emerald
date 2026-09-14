SlateportCity_MapScripts::
# 2 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 35 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 4 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 5 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 6 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 7 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
	goto_if_eq SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 23 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
	goto_if_eq SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_CAPT_STERN, 28, 13
# 9 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_OLD_WOMAN, 25, 13
# 10 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_RICH_BOY, 25, 14
# 11 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_COOK, 27, 16
# 12 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_GIRL, 28, 16
# 13 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_FAT_MAN, 29, 16
# 14 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_MAN_1, 31, 14
# 15 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 16 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 17 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 18 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_COOK, MOVEMENT_TYPE_FACE_UP
# 19 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_GIRL, MOVEMENT_TYPE_FACE_UP
# 20 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 21 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_MAN_1, MOVEMENT_TYPE_FACE_LEFT
	goto SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 24 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 25 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 26 "data/maps/SlateportCity/scripts.pory"
	compare VAR_0x8004, 30
	goto_if_eq SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 29 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 23, 27
SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 31 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
	goto SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 27 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 22, 27
	goto SlateportCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

SlateportCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 36 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
	.2byte 0


SlateportCity_EventScript_ScottScene::
# 41 "data/maps/SlateportCity/scripts.pory"
	lockall
# 42 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 43 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_EventScript_ScottScene_Movement_0
# 44 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_EventScript_ScottScene_Movement_1
# 45 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 46 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 47 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 48 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_StepFasterLeft
# 49 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 51 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 52 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_StepFasterRight
# 53 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 55 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 56 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 57 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 58 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 59 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 60 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 61 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 62 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 63 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 64 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 65 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_EventScript_ScottScene_Movement_2
# 66 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 67 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 68 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 10, 12
# 69 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 70 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 71 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 72 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 73 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end


SlateportCity_EventScript_EnergyGuru::
# 78 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 79 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 80 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 81 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 82 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 86 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 87 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTECTOR
# 88 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 89 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 90 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_BELT
# 91 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_LENS
# 92 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_BAND
# 93 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 94 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MACHO_BRACE
	.2byte ITEM_NONE

SlateportCity_EventScript_EffortRibbonWoman::
# 98 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 99 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 100 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 0 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_EventScript_EffortRibbonWoman_2
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 0 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_EventScript_EffortRibbonWoman_3
# 108 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 109 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 110 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 111 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 112 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 113 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
SlateportCity_EventScript_EffortRibbonWoman_1:
	release_end

SlateportCity_EventScript_EffortRibbonWoman_2:
# 102 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
	goto SlateportCity_EventScript_EffortRibbonWoman_1

SlateportCity_EventScript_EffortRibbonWoman_3:
# 105 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
	goto SlateportCity_EventScript_EffortRibbonWoman_1


SlateportCity_EventScript_Cook::
# 119 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 120 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
	goto_if_eq SlateportCity_EventScript_Cook_2
# 124 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 125 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 126 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_Herbs
# 127 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end

SlateportCity_EventScript_Cook_2:
# 121 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
	release_end


	.align 2
# 131 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_Herbs:
# 132 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_HERB
# 133 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 134 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 135 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MIRROR_HERB
	.2byte ITEM_NONE

SlateportCity_EventScript_OldWoman::
# 139 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 140 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
	goto_if_eq SlateportCity_EventScript_OldWoman_2
# 144 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
	release_end

SlateportCity_EventScript_OldWoman_2:
# 141 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
	release_end


SlateportCity_EventScript_Girl::
# 149 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 150 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
	goto_if_eq SlateportCity_EventScript_Girl_2
# 153 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_Girl_3
# 157 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
SlateportCity_EventScript_Girl_1:
	release_end

SlateportCity_EventScript_Girl_2:
# 151 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
	goto SlateportCity_EventScript_Girl_1

SlateportCity_EventScript_Girl_3:
# 154 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
	goto SlateportCity_EventScript_Girl_1


SlateportCity_EventScript_RichBoy::
# 163 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 164 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
	goto_if_eq SlateportCity_EventScript_RichBoy_2
# 168 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
	release_end

SlateportCity_EventScript_RichBoy_2:
# 165 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
	release_end


SlateportCity_EventScript_FatMan::
# 173 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
	goto_if_eq SlateportCity_EventScript_FatMan_2
# 177 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
	end

SlateportCity_EventScript_FatMan_2:
# 174 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
	end


SlateportCity_EventScript_Man1::
# 182 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 183 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
	goto_if_eq SlateportCity_EventScript_Man1_2
# 187 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
	release_end

SlateportCity_EventScript_Man1_2:
# 184 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
	release_end


SlateportCity_EventScript_Woman1::
# 192 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 193 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1_2
# 197 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
	release_end

SlateportCity_EventScript_Woman1_2:
# 194 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
	release_end


SlateportCity_EventScript_BattleTentSign::
# 202 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
	end


SlateportCity_EventScript_SternsShipyardSign::
# 207 "data/maps/SlateportCity/scripts.pory"
	lockall
# 208 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardSign_2
# 211 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardSign_3
# 215 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
SlateportCity_EventScript_SternsShipyardSign_1:
# 217 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end

SlateportCity_EventScript_SternsShipyardSign_2:
# 209 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
	goto SlateportCity_EventScript_SternsShipyardSign_1

SlateportCity_EventScript_SternsShipyardSign_3:
# 212 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
	goto SlateportCity_EventScript_SternsShipyardSign_1


SlateportCity_EventScript_PokemonFanClubSign::
# 222 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
	end


SlateportCity_EventScript_OceanicMuseumSign::
# 227 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
	end


SlateportCity_EventScript_CitySign::
# 232 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
	end


SlateportCity_EventScript_MarketSign::
# 237 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
	end


SlateportCity_EventScript_HarborSign::
# 242 "data/maps/SlateportCity/scripts.pory"
	lockall
# 243 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSign_2
# 246 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
SlateportCity_EventScript_HarborSign_1:
# 248 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end

SlateportCity_EventScript_HarborSign_2:
# 244 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
	goto SlateportCity_EventScript_HarborSign_1


SlateportCity_EventScript_NameRatersHouseSign::
# 253 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
	end


SlateportCity_EventScript_Maniac::
# 258 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 259 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
	release_end


SlateportCity_EventScript_Woman2::
# 264 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
	end


SlateportCity_EventScript_Sailor1::
# 269 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
	end


SlateportCity_EventScript_Sailor2::
# 274 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
	end


SlateportCity_EventScript_PokefanF::
# 279 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
	end


SlateportCity_EventScript_Man2::
# 284 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
	end


SlateportCity_EventScript_AquaGrunt1::
# 289 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 290 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 291 "data/maps/SlateportCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


SlateportCity_EventScript_AquaGrunt2::
# 296 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 297 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 298 "data/maps/SlateportCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


SlateportCity_EventScript_AquaGrunt3::
# 303 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 304 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 305 "data/maps/SlateportCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


SlateportCity_EventScript_AquaGrunt4::
# 310 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 311 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 312 "data/maps/SlateportCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


SlateportCity_EventScript_AquaGrunt5::
# 317 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 318 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 319 "data/maps/SlateportCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


SlateportCity_EventScript_AquaGrunt6::
# 324 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 325 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 326 "data/maps/SlateportCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


SlateportCity_EventScript_AquaGrunt7::
# 331 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 332 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 333 "data/maps/SlateportCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


SlateportCity_EventScript_AquaGrunt8::
# 338 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 339 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 340 "data/maps/SlateportCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


SlateportCity_EventScript_AquaGrunt9::
# 345 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 346 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 347 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_ExclamationMark
# 348 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 349 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_Delay48
# 350 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 351 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 352 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 353 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 354 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 355 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_EventScript_AquaGrunt9_Movement_0
# 356 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 357 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 358 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 359 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 360 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 361 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 362 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 363 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_EventScript_AquaGrunt9_Movement_0
# 364 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 365 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 366 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 367 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 368 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 369 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_EventScript_AquaGrunt9_Movement_0
# 370 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 371 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 372 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
	release_end


SlateportCity_EventScript_AquaGrunt10::
# 377 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
	end


SlateportCity_EventScript_AquaGrunt11::
# 382 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 383 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 384 "data/maps/SlateportCity/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


SlateportCity_EventScript_IncenseClerk::
# 389 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 390 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 391 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 392 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_Incenses
# 393 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 397 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_Incenses:
# 398 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 399 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 400 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 401 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 402 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 403 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 404 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 405 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
	.2byte ITEM_NONE

SlateportCity_EventScript_DecorClerk::
# 409 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 410 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_DecorClerk_2
# 414 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 415 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 416 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 417 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end

SlateportCity_EventScript_DecorClerk_2:
# 411 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
	release_end


	.align 2
# 421 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 422 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 423 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 424 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 425 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 426 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 427 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 428 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 429 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 430 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 431 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 432 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 433 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 434 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 435 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
	.2byte ITEM_NONE

SlateportCity_EventScript_PowerTMClerk::
# 439 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 440 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 441 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 442 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 443 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 447 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 448 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_ICY_WIND
# 449 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_TAILWIND
# 450 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SILVER_WIND
# 451 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_STORED_POWER
	.2byte ITEM_NONE

SlateportCity_EventScript_InsuranceSalesman::
# 455 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 456 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_EventScript_InsuranceSalesman_Text_0
# 458 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 459 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_Policies
# 460 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_InsuranceSalesman_Text_1, MSGBOX_DEFAULT
	release_end


	.align 2
# 467 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_Policies:
# 468 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 469 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HAPLESS_POLICY
# 470 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
	.2byte ITEM_NONE

SlateportCity_EventScript_CaptStern::
# 474 "data/maps/SlateportCity/scripts.pory"
	lockall
# 475 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 476 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 477 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 478 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, Common_Movement_StepFasterRight
# 479 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 480 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 481 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, Common_Movement_StepFasterDown
# 482 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 483 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 484 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_EventScript_CaptStern_Movement_0
# 485 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_EventScript_CaptStern_Movement_1
# 486 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, SlateportCity_EventScript_CaptStern_Movement_2
# 487 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, SlateportCity_EventScript_CaptStern_Movement_3
# 488 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 489 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_GABBY
# 490 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_TY
# 491 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 492 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_StepFasterUp
# 493 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 494 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 495 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 496 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 497 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_COOK, Common_Movement_StepFasterLeft
# 498 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_FAT_MAN, Common_Movement_StepFasterLeft
# 499 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 500 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_RICH_BOY, Common_Movement_QuestionMark
# 501 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_MAN_1, SlateportCity_Movement_ManConcern
# 502 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 503 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_StepFasterDown
# 504 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 505 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 506 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 507 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_ExclamationMark
# 508 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 509 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_Delay48
# 510 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 511 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_StepFasterUp
# 512 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 513 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 514 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 515 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 516 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_EventScript_CaptStern_Movement_4
# 517 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_EventScript_CaptStern_Movement_5
# 518 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_CAPT_STERN
# 520 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 521 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 522 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 523 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 524 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 525 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 526 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 527 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end


# 531 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 533 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 533 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 534 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 535 "data/maps/SlateportCity/scripts.pory"
	step_faster_right
# 536 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 536 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 537 "data/maps/SlateportCity/scripts.pory"
	step_faster_left
	step_end

# 540 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 542 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 543 "data/maps/SlateportCity/scripts.pory"
	step_faster_up
# 544 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 545 "data/maps/SlateportCity/scripts.pory"
	step_faster_down
# 546 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 546 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 547 "data/maps/SlateportCity/scripts.pory"
	step_faster_left
	step_end

# 550 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 552 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 553 "data/maps/SlateportCity/scripts.pory"
	step_faster_up
	step_end

SlateportCity_EventScript_Ty::
# 557 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
	end


SlateportCity_EventScript_Gabby::
# 562 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
	end


SlateportCity_EventScript_Man3::
# 567 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
	end


SlateportCity_EventScript_BerryPowderClerk::
# 572 "data/maps/SlateportCity/scripts.pory"
	lock_faceplayer
# 573 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_BerryPowderClerk_2
SlateportCity_EventScript_BerryPowderClerk_1:
# 583 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 584 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 585 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 586 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
	release_end

SlateportCity_EventScript_BerryPowderClerk_2:
# 574 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 0 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_EventScript_BerryPowderClerk_5
# 579 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 580 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 581 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
	goto SlateportCity_EventScript_BerryPowderClerk_1

SlateportCity_EventScript_BerryPowderClerk_5:
# 576 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
	release_end


SlateportCity_EventScript_ChooseBerryPowderItem::
# 591 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 592 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 593 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 594 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 595 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 596 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_ChooseBerryPowderItem_3
# 597 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_ChooseBerryPowderItem_4
# 598 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_ChooseBerryPowderItem_5
# 599 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_ChooseBerryPowderItem_6
# 600 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_ChooseBerryPowderItem_7
# 601 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_ChooseBerryPowderItem_8
# 602 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_ChooseBerryPowderItem_9
# 603 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_ChooseBerryPowderItem_10
# 604 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_ChooseBerryPowderItem_11
# 605 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_ChooseBerryPowderItem_12
# 606 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_ChooseBerryPowderItem_13
# 607 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_ChooseBerryPowderItem_14
# 608 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_ChooseBerryPowderItem_14
SlateportCity_EventScript_ChooseBerryPowderItem_1:
# 613 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, VAR_GIFT_ITEM
# 614 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_ChooseBerryPowderItem_3:
# 596 "data/maps/SlateportCity/scripts.pory"
	setitemandprice ITEM_ENERGY_POWDER, 80
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_4:
# 597 "data/maps/SlateportCity/scripts.pory"
	setitemandprice ITEM_ENERGY_ROOT, 120
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_5:
# 598 "data/maps/SlateportCity/scripts.pory"
	setitemandprice ITEM_HEAL_POWDER, 20
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_6:
# 599 "data/maps/SlateportCity/scripts.pory"
	setitemandprice ITEM_REVIVAL_HERB, 180
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_7:
# 600 "data/maps/SlateportCity/scripts.pory"
	setitemandprice ITEM_PROTEIN, 150
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_8:
# 601 "data/maps/SlateportCity/scripts.pory"
	setitemandprice ITEM_IRON, 150
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_9:
# 602 "data/maps/SlateportCity/scripts.pory"
	setitemandprice ITEM_CARBOS, 150
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_10:
# 603 "data/maps/SlateportCity/scripts.pory"
	setitemandprice ITEM_CALCIUM, 150
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_11:
# 604 "data/maps/SlateportCity/scripts.pory"
	setitemandprice ITEM_ZINC, 150
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_12:
# 605 "data/maps/SlateportCity/scripts.pory"
	setitemandprice ITEM_HP_UP, 150
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_13:
# 606 "data/maps/SlateportCity/scripts.pory"
	setitemandprice ITEM_PP_UP, 150
	goto SlateportCity_EventScript_ChooseBerryPowderItem_1

SlateportCity_EventScript_ChooseBerryPowderItem_14:
# 609 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 610 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
	release_end


SlateportCity_EventScript_TryBuyBerryPowderItem::
# 619 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 620 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_EventScript_TryBuyBerryPowderItem_2
SlateportCity_EventScript_TryBuyBerryPowderItem_1:
# 623 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_EXCHANGE_PRICE
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 0 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_EventScript_TryBuyBerryPowderItem_5
SlateportCity_EventScript_TryBuyBerryPowderItem_4:
	giveitem VAR_GIFT_ITEM
# 0 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_EventScript_TryBuyBerryPowderItem_8
# 633 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_EXCHANGE_PRICE
# 634 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 635 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 636 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 637 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_EventScript_TryBuyBerryPowderItem_11
SlateportCity_EventScript_TryBuyBerryPowderItem_10:
# 640 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 641 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
	release_end

SlateportCity_EventScript_TryBuyBerryPowderItem_2:
# 621 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
	goto SlateportCity_EventScript_TryBuyBerryPowderItem_1

SlateportCity_EventScript_TryBuyBerryPowderItem_5:
# 625 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 626 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
	goto SlateportCity_EventScript_TryBuyBerryPowderItem_4

SlateportCity_EventScript_TryBuyBerryPowderItem_8:
# 629 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 630 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
	release_end

SlateportCity_EventScript_TryBuyBerryPowderItem_11:
# 638 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
	goto SlateportCity_EventScript_TryBuyBerryPowderItem_10


SlateportCity_EventScript_ScottBattleTentScene::
# 646 "data/maps/SlateportCity/scripts.pory"
	lockall
# 647 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 648 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 649 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 650 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 651 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 652 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_EventScript_ScottBattleTentScene_Movement_0
# 653 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_EventScript_ScottBattleTentScene_Movement_1
# 654 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 656 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 657 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 658 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 659 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_EventScript_ScottBattleTentScene_Movement_2
# 660 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_EventScript_ScottBattleTentScene_Movement_3
# 661 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 663 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 664 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 665 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end


SlateportCity_EventScript_BerryCrushRankingsSign::
# 670 "data/maps/SlateportCity/scripts.pory"
	lockall
# 671 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 672 "data/maps/SlateportCity/scripts.pory"
	releaseall
	end


# 43 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene_Movement_0:
# 43 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 43 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 43 "data/maps/SlateportCity/scripts.pory"
	step_faster_left
	step_end

# 44 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene_Movement_1:
# 44 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 44 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 44 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 44 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 44 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 44 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 44 "data/maps/SlateportCity/scripts.pory"
	walk_right
	step_end

# 65 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene_Movement_2:
# 65 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 65 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 65 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 65 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 65 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 65 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 65 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 65 "data/maps/SlateportCity/scripts.pory"
	walk_left
	step_end

# 355 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9_Movement_0:
# 355 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 355 "data/maps/SlateportCity/scripts.pory"
	delay_16
	step_end

# 484 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Movement_0:
# 484 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 484 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 484 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 484 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 484 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 484 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 484 "data/maps/SlateportCity/scripts.pory"
	walk_left
	step_end

# 485 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Movement_1:
# 485 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 485 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 485 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 485 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 485 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 485 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 485 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 485 "data/maps/SlateportCity/scripts.pory"
	step_faster_down
	step_end

# 486 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Movement_2:
# 486 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 486 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 486 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 486 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 486 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 486 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 486 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 486 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 486 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 486 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 486 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 486 "data/maps/SlateportCity/scripts.pory"
	walk_left
	step_end

# 487 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Movement_3:
# 487 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 487 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 487 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 487 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 487 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 487 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 487 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 487 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 487 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 487 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 487 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 487 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 487 "data/maps/SlateportCity/scripts.pory"
	walk_left
	step_end

# 516 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Movement_4:
# 516 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 516 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 516 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 516 "data/maps/SlateportCity/scripts.pory"
	set_invisible
	step_end

# 517 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern_Movement_5:
# 517 "data/maps/SlateportCity/scripts.pory"
	step_faster_right
# 517 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 517 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 517 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 517 "data/maps/SlateportCity/scripts.pory"
	walk_up
	step_end

# 652 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene_Movement_0:
# 652 "data/maps/SlateportCity/scripts.pory"
	lock_look
# 652 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 652 "data/maps/SlateportCity/scripts.pory"
	unlock_look
	step_end

# 653 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene_Movement_1:
# 653 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 653 "data/maps/SlateportCity/scripts.pory"
	walk_down
	step_end

# 659 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene_Movement_2:
# 659 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 659 "data/maps/SlateportCity/scripts.pory"
	step_faster_right
	step_end

# 660 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene_Movement_3:
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_right
	step_end

SlateportCity_EventScript_InsuranceSalesman_Text_0:
# 456 "data/maps/SlateportCity/scripts.pory"
	.string "Hello, kiddo! Could I interest you in \n"
	.string "some insurance POLICIES?$"

SlateportCity_EventScript_InsuranceSalesman_Text_1:
# 460 "data/maps/SlateportCity/scripts.pory"
	.string "Do come back!\p"
	.string "Anything that can go wrong, \n"
	.string "will go wrong!$"

SlateportCity_Text_EnergyGuruSellWhatYouNeed::
# 676 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
	.string "sell you what you need!$"

SlateportCity_Text_OhYourPokemon::
# 681 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
	.string "Your {STR_VAR_1}…$"

SlateportCity_Text_PleaseGiveItThisEffortRibbon::
# 686 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
	.string "As its reward, please give it this\n"
	.string "EFFORT RIBBON.$"

SlateportCity_Text_ReceivedEffortRibbon::
# 693 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"

SlateportCity_Text_PutEffortRibbonOnMon::
# 697 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
	.string "on {STR_VAR_1}.$"

SlateportCity_Text_GoForItLittleHarder::
# 702 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
	.string "If you do, I'll give your POKéMON\n"
	.string "something nice.$"

SlateportCity_Text_EffortRibbonLooksGoodOnIt::
# 709 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
	.string "RIBBON looks good on it!$"

SlateportCity_Text_WonderIfLighthouseStartlesPokemon::
# 714 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
	.string "dozens of miles away.\p"
	.string "I wonder if it doesn't startle POKéMON\n"
	.string "in the sea.$"

SlateportCity_Text_SeaweedFullOfLife::
# 722 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
	.string "The seaweed you can get around these\n"
	.string "parts is fresh and full of life.\p"
	.string "Why, it looks like it can even rear up\n"
	.string "and attack!$"

SlateportCity_Text_HowTownIsBornAndGrows::
# 732 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
	.string "of bountiful harvest gather.\p"
	.string "And where people gather, a market\n"
	.string "soon starts.\p"
	.string "That is how a town is born and grows.$"

SlateportCity_Text_SlateportWonderfulPlace::
# 742 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
	.string "scent of the ocean…\p"
	.string "SLATEPORT is such a wonderful place!$"

SlateportCity_Text_BuyBricksSoDecorWontGetDirty::
# 749 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
	.string "the floor, they'll get dirty.\p"
	.string "I'm going to buy some BRICKS so my\n"
	.string "DOLLS and CUSHIONS won't get dirty\l"
	.string "when I leave them out.$"

SlateportCity_Text_GoingToCompeteInBattleTent::
# 758 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
	.string "the BATTLE TENT, too!\p"
	.string "But before that, I need to catch\n"
	.string "some POKéMON!$"

SlateportCity_Text_BushedHikingFromMauville::
# 766 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
	.string "I hiked over from MAUVILLE CITY.\n"
	.string "But, boy, this city's huge.\p"
	.string "If I'd known this, I would've ridden\n"
	.string "my BIKE here.$"

SlateportCity_Text_EveryoneCallsHimCaptStern::
# 776 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
	.string "MUSEUM, also happens to be the leader\l"
	.string "of an undersea exploration team.\p"
	.string "So, everyone calls him CAPT. STERN.$"

SlateportCity_Text_WhatsLongLineOverThere::
# 784 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
	.string "That long line…$"

SlateportCity_Text_VisitedMuseumOften::
# 789 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
	.string "the MUSEUM often.\p"
	.string "I used to dream about the mysteries of\n"
	.string "the sea after seeing the exhibits.$"

SlateportCity_Text_QuitPushing::
# 797 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
	.string "This is the line, can't you see?$"

SlateportCity_Text_AquaHasPolicy::
# 802 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
	.string "assembling and dispersing at\l"
	.string "the operation site.$"

SlateportCity_Text_BossIsBrilliant::
# 808 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
	.string "What would he want to do with\n"
	.string "a MUSEUM now?$"

SlateportCity_Text_WhatsNewSchemeIWonder::
# 815 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
	.string "Our BOSS is scary when he's mad, so\n"
	.string "I'd better not screw things up…$"

SlateportCity_Text_ShouldTakeItAll::
# 822 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
	.string "the MUSEUM, we should take it all!$"

SlateportCity_Text_DontButtIn::
# 827 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
	.string "Don't butt in!$"

SlateportCity_Text_RemindsMeOfLongLineForGames::
# 832 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
	.string "It reminds me of the times I lined up to\n"
	.string "buy smash-hit games…$"

SlateportCity_Text_WhyAreWeLiningUp::
# 839 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
	.string "We should just march in!$"

SlateportCity_Text_WhatDoYouWant::
# 844 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
	.string "What do you want?$"

SlateportCity_Text_IllReadSignForYou::
# 849 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
	.string "I'll read it for you!$"

SlateportCity_Text_SaysSomethingLikeSeaIsEndless::
# 854 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
	.string "Um… I think it says something like\n"
	.string "“the life in the sea is endless.”\p"
	.string "Yup, I'm pretty sure that's what\n"
	.string "it says.$"

SlateportCity_Text_ShouldveBroughtMyGameBoy::
# 864 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
	.string "I should've brought my Game Boy\n"
	.string "Advance so I wouldn't get bored in line…\p"
	.string "Grumble…$"

SlateportCity_Text_HotSpringsAfterOperation::
# 873 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
	.string "you to a hot spring spa!\p"
	.string "That's what our leader said.\n"
	.string "I can't wait!$"

SlateportCity_Text_SeaIsSoWet::
# 881 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
	.string "Could the sea have been made by\n"
	.string "the tears shed by POKéMON?$"

SlateportCity_Text_SinkOldBoats::
# 888 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
	.string "ships that become too creaky to sail?\p"
	.string "They sink them in the sea so they\n"
	.string "become habitats for POKéMON.$"

SlateportCity_Text_BuyTooMuch::
# 896 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
	.string "away and buy too much.$"

SlateportCity_Text_GetNameRaterToHelpYou::
# 901 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
	.string "nickname, you'll have to get the NAME\l"
	.string "RATER to help you.$"

SlateportCity_Text_CantChangeTradeMonName::
# 907 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
	.string "you can't change its nickname.\p"
	.string "The original TRAINER's love for that\n"
	.string "POKéMON is in the nickname.$"

SlateportCity_Text_BattleTentBuiltRecently::
# 915 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
	.string "in SLATEPORT.\p"
	.string "GYMS are fun, but the BATTLE TENT's\n"
	.string "awesome in its own way.\p"
	.string "You should go find tough POKéMON\n"
	.string "for the BATTLE TENT!$"

SlateportCity_Text_CaptSternBeingInterviewed::
# 926 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
	.string "so I could get an autograph.\p"
	.string "But who's that being interviewed?\n"
	.string "Isn't that CAPT. STERN?$"

SlateportCity_Text_InterviewerSoCool::
# 934 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
	.string "and pretty.\p"
	.string "When I grow up, I'm going to be\n"
	.string "an international journalist!$"

SlateportCity_Text_SternSaysDiscoveredSomething::
# 942 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
	.string "something at the bottom of the sea.\p"
	.string "I wonder what it is?\n"
	.string "What could it be?$"

SlateportCity_Text_CaptainComeBackWithBigFish::
# 950 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
	.string "Did the good CAPTAIN come back with\n"
	.string "a big fish from the ocean floor?$"

SlateportCity_Text_AmIOnTV::
# 957 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
	.string "Am I on TV?$"

SlateportCity_Text_CaptainsACelebrity::
# 962 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
	.string "The CAPTAIN's a celebrity!$"

SlateportCity_Text_BigSmileForCamera::
# 967 "data/maps/SlateportCity/scripts.pory"
	.string "{SPEAKER NAME_TY}Okay, CAPT. STERN, a big smile\n"
	.string "for the camera!$"

SlateportCity_Text_MostInvaluableExperience::
# 972 "data/maps/SlateportCity/scripts.pory"
	.string "{SPEAKER NAME_GABBY}I see, I see. You've had a most\n"
	.string "invaluable experience…$"

SlateportCity_Text_SternMoveAheadWithExploration::
# 977 "data/maps/SlateportCity/scripts.pory"
	.string "{SPEAKER NAME_STERN}Yes, indeed. We intend to\n"
	.string "move ahead with our exploration.$"

SlateportCity_Text_GabbyWonderfulThanksForInterview::
# 982 "data/maps/SlateportCity/scripts.pory"
	.string "{SPEAKER NAME_GABBY}That's wonderful, CAPT. STERN!\n"
	.string "Thank you for taking the time from\l"
	.string "your busy schedule to talk to us.\p"
	.string "We hope we can interview you again\n"
	.string "with news of more discoveries!$"

SlateportCity_Text_SternWhewFirstInterview::
# 991 "data/maps/SlateportCity/scripts.pory"
	.string "{SPEAKER NAME_STERN}Whew…\p"
	.string "That was my first time to be filmed for\n"
	.string "TV. That was nerve-wracking.$"

SlateportCity_Text_OhPlayerWeMadeDiscovery::
# 998 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
	.string "You're looking great!\p"
	.string "We made a huge discovery on our last\n"
	.string "seafloor exploration.\p"
	.string "We found an underwater cavern on\n"
	.string "ROUTE 128.\p"
	.string "We think it's the habitat of a POKéMON\n"
	.string "that's said to have been long extinct.$"

SlateportCity_Text_AquaWillAssumeControlOfSubmarine::
# 1012 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
	.string "CAPT. STERN, I presume.\p"
	.string "We of TEAM AQUA will assume\n"
	.string "control of your submarine!\p"
	.string "Your objections are meaningless!\n"
	.string "We expect your total cooperation!\p"
	.string "Fufufu…\n"
	.string "Just watch and learn what TEAM\l"
	.string "AQUA has planned!$"

SlateportCity_Text_SternWhatWasAllThat::
# 1027 "data/maps/SlateportCity/scripts.pory"
	.string "{SPEAKER NAME_STERN}What was that all about?\p"
	.string "It sounded like someone using\n"
	.string "a megaphone…\p"
	.string "Where did it come from?$"

SlateportCity_Text_FromHarborTryingToTakeSub::
# 1036 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
	.string "The submarine!\n"
	.string "They're trying to take it!$"

SlateportCity_Text_PleaseComeWithMe::
# 1043 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
	.string "Please, come with me!$"

SlateportCity_Text_BattleTentSign::
# 1048 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
	.string "“Find it! The ultimate POKéMON!”$"

SlateportCity_Text_SternsShipyardWantedSign::
# 1053 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
	.string "“Wanted: A sailor capable of sailing\n"
	.string "in all currents.”$"

SlateportCity_Text_SternsShipyardNearsCompletion::
# 1060 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
	.string "“The ferry S.S. TIDAL nears\n"
	.string "completion for serving the ports of\l"
	.string "SLATEPORT and LILYCOVE.”$"

SlateportCity_Text_SternsShipyardFerryComplete::
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
	.string "ferry S.S. TIDAL is handled at the\l"
	.string "HARBOR.”$"

SlateportCity_Text_PokemonFanClubSign::
# 1076 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
	.string "“Calling all fans of POKéMON!”$"

SlateportCity_Text_OceanicMuseumSign::
# 1081 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
	.string "all life.”\p"
	.string "OCEANIC MUSEUM$"

SlateportCity_Text_CitySign::
# 1088 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
	.string "“The port where people and POKéMON\n"
	.string "cross paths.”$"

SlateportCity_Text_MarketSign::
# 1095 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
	.string "“Unique items found nowhere else!”$"

SlateportCity_Text_HarborFerryUnderConstruction::
# 1100 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
	.string "“The ferry S.S. TIDAL is under\n"
	.string "construction in the SHIPYARD.\p"
	.string "“Service is scheduled to begin\n"
	.string "shortly.”$"

SlateportCity_Text_HarborSign::
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
	.string "“Enjoy a delightful cruise on\n"
	.string "the ferry S.S. TIDAL.”$"

SlateportCity_Text_NameRatersHouseSign::
# 1117 "data/maps/SlateportCity/scripts.pory"
	.string "SWAP MASTER'S HOUSE\n"
	.string "“Up is down. Black is white.”$"

SlateportCity_Text_ExplainBerries::
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
	.string "itself by chewing on BERRIES.\p"
	.string "Did you know that?\p"
	.string "Somebody saw that and got the idea\n"
	.string "of making medicine from BERRIES.\p"
	.string "Did you know that?\p"
	.string "To turn BERRIES into medicine,\n"
	.string "they must be crushed into powder.\p"
	.string "Did you know that?\p"
	.string "You seem to have an interest\n"
	.string "in BERRIES!\p"
	.string "I've got something good for someone\n"
	.string "like you.$"

SlateportCity_Text_ExplainBerryPowder::
# 1145 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
	.string "The BERRY CRUSH machines are at\n"
	.string "the DIRECT CORNER upstairs.\p"
	.string "Did you know?\p"
	.string "Could you make BERRY POWDER for\n"
	.string "me using those machines?\p"
	.string "I can make you all sorts of medicine\n"
	.string "if you bring me lots of BERRY POWDER.$"

SlateportCity_Text_BroughtMeSomeBerryPowder::
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
	.string "BERRY POWDER?$"

SlateportCity_Text_ExchangeWhatWithIt::
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
	.string "it with?$"

SlateportCity_Text_ExchangeBerryPowderForItem::
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
	.string "BERRY POWDER for one {STR_VAR_1}?$"

SlateportCity_Text_DontHaveEnoughBerryPowder::
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
	.string "BERRY POWDER.$"

SlateportCity_Text_FineBerryPowderTradeSomethingElse::
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
	.string "It will make excellent medicine.\p"
	.string "Would you like to trade more of your\n"
	.string "BERRY POWDER for something else?$"

SlateportCity_Text_WhenYouGetMoreBringItToMe::
# 1189 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
	.string "BERRY POWDER, bring it to me, please!$"

SlateportCity_Text_ComeBackToTradeBerryPowder::
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
	.string "BERRY POWDER for some medicine.\p"
	.string "I'm always running a bazaar here.\p"
	.string "Did you know?$"

SlateportCity_Text_YouDroveTeamAquaAway::
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "{SPEAKER NAME_SCOTT}Huh?\n"
	.string "I'm sure I met you somewhere before.\p"
	.string "Have I introduced myself to you?\n"
	.string "If not, my name's SCOTT.\p"
	.string "I just saw TEAM AQUA run away from\n"
	.string "here like they were stung.\p"
	.string "Let me guess--you drove them away?$"

SlateportCity_Text_MaybeThisTrainer::
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "{SPEAKER NAME_SCOTT}Hmm…\n"
	.string "Maybe, just maybe, this TRAINER…$"

SlateportCity_Text_LetsRegisterEachOther::
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "{SPEAKER NAME_SCOTT}All right! I think you're going\n"
	.string "to become a good friend.\p"
	.string "So, let's register each other in our\n"
	.string "POKéNAVS.\p"
	.string "… … … … … …$"

SlateportCity_Text_RegisteredScott::
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
	.string "in the POKéNAV.$"

SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou::
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "{SPEAKER NAME_SCOTT}What I'd like to do is tag along\n"
	.string "with you, but I do want to keep an eye\l"
	.string "on the talents of other people, too.\p"
	.string "So, I'll be off to roam other towns\n"
	.string "a bit more.\p"
	.string "Be seeing you, {PLAYER}{KUN}!$"

SlateportCity_Text_TakingBattleTentChallenge::
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "{SPEAKER NAME_SCOTT}Oh, hey!\n"
	.string "If it isn't {PLAYER}{KUN}!\p"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
	.string "to take the BATTLE TENT challenge?\p"
	.string "Yeah! That's a good idea!\n"
	.string "That's a really great idea!\p"
	.string "After all, a tough TRAINER is\n"
	.string "the perfect fit for the BATTLE TENT!\p"
	.string "Give it your best effort!$"
