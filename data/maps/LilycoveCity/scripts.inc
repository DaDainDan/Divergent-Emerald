LilycoveCity_MapScripts::
# 2 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 12 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

LilycoveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 4 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 5 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 6 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, LilycoveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LilycoveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	end

LilycoveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto LilycoveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LilycoveCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 13 "data/maps/LilycoveCity/scripts.pory"
	goto_if_unset FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA, LilycoveCity_MapScripts_MAP_SCRIPT_ON_LOAD_2
LilycoveCity_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 27 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 2
	goto_if_lt LilycoveCity_MapScripts_MAP_SCRIPT_ON_LOAD_5
LilycoveCity_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

LilycoveCity_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 14 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 15 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 16 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 17 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 18 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 19 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 20 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 21 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 22 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 23 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 24 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 25 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
	goto LilycoveCity_MapScripts_MAP_SCRIPT_ON_LOAD_1

LilycoveCity_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 28 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 69, 33, 0x170, TRUE
# 29 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 70, 33, 0x170, TRUE
# 30 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 69, 34, 0x170, TRUE
# 31 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 70, 34, 0x170, TRUE
	goto LilycoveCity_MapScripts_MAP_SCRIPT_ON_LOAD_4


LilycoveCity_EventScript_BerryGentleman::
# 38 "data/maps/LilycoveCity/scripts.pory"
	lock_faceplayer
# 39 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 40 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_BerryGentleman_2
# 44 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 45 "data/maps/LilycoveCity/scripts.pory"
	giverandomberry BERRY_ID_FIGY, BERRY_ID_IAPAPA
# 46 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_EventScript_BerryGentleman_5
LilycoveCity_EventScript_BerryGentleman_4:
# 49 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 50 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
	release_end

LilycoveCity_EventScript_BerryGentleman_2:
# 41 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
	release_end

LilycoveCity_EventScript_BerryGentleman_5:
# 47 "data/maps/LilycoveCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto LilycoveCity_EventScript_BerryGentleman_4


LilycoveCity_EventScript_Man3::
# 55 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
	end


LilycoveCity_EventScript_Girl::
# 60 "data/maps/LilycoveCity/scripts.pory"
	lock_faceplayer
# 61 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_Girl_2
# 65 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
	release_end

LilycoveCity_EventScript_Girl_2:
# 62 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
	release_end


LilycoveCity_EventScript_RichBoy::
# 70 "data/maps/LilycoveCity/scripts.pory"
	lock_faceplayer
# 71 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_BINDING_BAND, LilycoveCity_EventScript_RichBoy_2
# 75 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_LameToy, MSGBOX_DEFAULT
	giveitem ITEM_BINDING_BAND
# 0 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_EventScript_RichBoy_5
LilycoveCity_EventScript_RichBoy_4:
# 79 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_RECEIVED_BINDING_BAND
	release_end

LilycoveCity_EventScript_RichBoy_2:
# 72 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_NewToys, MSGBOX_DEFAULT
	release_end

LilycoveCity_EventScript_RichBoy_5:
# 77 "data/maps/LilycoveCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto LilycoveCity_EventScript_RichBoy_4


LilycoveCity_EventScript_Sailor2::
# 84 "data/maps/LilycoveCity/scripts.pory"
	lock_faceplayer
# 85 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2_2
# 89 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
	release_end

LilycoveCity_EventScript_Sailor2_2:
# 86 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
	release_end


LilycoveCity_EventScript_Woman2::
# 94 "data/maps/LilycoveCity/scripts.pory"
	lock_faceplayer
# 95 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2_2
# 99 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
	release_end

LilycoveCity_EventScript_Woman2_2:
# 96 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
	release_end


LilycoveCity_EventScript_Man2::
# 104 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
	end


LilycoveCity_EventScript_ExpertM1::
# 109 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
	end


LilycoveCity_EventScript_ExpertF::
# 114 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
	end


LilycoveCity_EventScript_ExpertM2::
# 119 "data/maps/LilycoveCity/scripts.pory"
	lock_faceplayer
# 120 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2_2
# 124 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
	release_end

LilycoveCity_EventScript_ExpertM2_2:
# 121 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
	release_end


LilycoveCity_EventScript_Sailor1::
# 129 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
	end


LilycoveCity_EventScript_FatMan::
# 134 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
	end


LilycoveCity_EventScript_Man1::
# 139 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 140 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 141 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_LILYCOVE_MAN_1, Common_Movement_FaceOriginalDirection
	end


LilycoveCity_EventScript_Woman1::
# 146 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 147 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 148 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_LILYCOVE_WOMAN_1, Common_Movement_FaceOriginalDirection
	end


LilycoveCity_EventScript_CitySign::
# 153 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
	end


LilycoveCity_EventScript_ContestHallSign::
# 158 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
	end


LilycoveCity_EventScript_MotelSign::
# 163 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
	end


LilycoveCity_EventScript_MuseumSign::
# 168 "data/maps/LilycoveCity/scripts.pory"
	lockall
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 0 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_0x8004, 0
	goto_if_ne LilycoveCity_EventScript_MuseumSign_2
# 172 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
LilycoveCity_EventScript_MuseumSign_1:
# 174 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end

LilycoveCity_EventScript_MuseumSign_2:
# 170 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
	goto LilycoveCity_EventScript_MuseumSign_1


LilycoveCity_EventScript_HarborSign::
# 179 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 180 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSign_2
# 183 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
LilycoveCity_EventScript_HarborSign_1:
# 185 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end

LilycoveCity_EventScript_HarborSign_2:
# 181 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
	goto LilycoveCity_EventScript_HarborSign_1


LilycoveCity_EventScript_TrainerFanClubSign::
# 190 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
	end


LilycoveCity_EventScript_DepartmentStoreSign::
# 195 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
	end


LilycoveCity_EventScript_MoveDeletersHouseSign::
# 200 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
	end


LilycoveCity_EventScript_WailmerTrainerGrunt::
# 205 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 206 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_WailmerTrainerGrunt_2
# 209 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 210 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 211 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 212 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 213 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 214 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 215 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
LilycoveCity_EventScript_WailmerTrainerGrunt_1:
# 217 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end

LilycoveCity_EventScript_WailmerTrainerGrunt_2:
# 207 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
	goto LilycoveCity_EventScript_WailmerTrainerGrunt_1


LilycoveCity_EventScript_AquaGrunt1::
# 222 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
	end


LilycoveCity_EventScript_AquaGrunt2::
# 227 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
	end


LilycoveCity_EventScript_AquaGrunt3::
# 232 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
	end


LilycoveCity_EventScript_AquaGrunt4::
# 237 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
	end


LilycoveCity_EventScript_Rival::
# 242 "data/maps/LilycoveCity/scripts.pory"
	lock_faceplayer
	checkplayergender
# 0 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_EventScript_Rival_2
# 246 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Brendan
LilycoveCity_EventScript_Rival_1:
	end

LilycoveCity_EventScript_Rival_2:
# 244 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_May
	goto LilycoveCity_EventScript_Rival_1


LilycoveCity_EventScript_May::
# 252 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 253 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_May_2
# 256 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
LilycoveCity_EventScript_May_1:
# 258 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_EventScript_May_6
# 265 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 266 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 267 "data/maps/LilycoveCity/scripts.pory"
	case PC_CHOSE_TREECKO, LilycoveCity_EventScript_May_10
# 268 "data/maps/LilycoveCity/scripts.pory"
	case PC_CHOSE_TORCHIC, LilycoveCity_EventScript_May_11
# 269 "data/maps/LilycoveCity/scripts.pory"
	case PC_CHOSE_MUDKIP, LilycoveCity_EventScript_May_12
LilycoveCity_EventScript_May_8:
# 271 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
	end

LilycoveCity_EventScript_May_2:
# 254 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
	goto LilycoveCity_EventScript_May_1

LilycoveCity_EventScript_May_6:
# 259 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 260 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 261 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 262 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
	release_end

LilycoveCity_EventScript_May_10:
# 267 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_May_8

LilycoveCity_EventScript_May_11:
# 268 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_May_8

LilycoveCity_EventScript_May_12:
# 269 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_May_8


LilycoveCity_EventScript_Brendan::
# 276 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 277 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_Brendan_2
# 280 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
LilycoveCity_EventScript_Brendan_1:
# 282 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_EventScript_Brendan_6
# 289 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 290 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 291 "data/maps/LilycoveCity/scripts.pory"
	case PC_CHOSE_TREECKO, LilycoveCity_EventScript_Brendan_10
# 292 "data/maps/LilycoveCity/scripts.pory"
	case PC_CHOSE_TORCHIC, LilycoveCity_EventScript_Brendan_11
# 293 "data/maps/LilycoveCity/scripts.pory"
	case PC_CHOSE_MUDKIP, LilycoveCity_EventScript_Brendan_12
LilycoveCity_EventScript_Brendan_8:
# 295 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
	end

LilycoveCity_EventScript_Brendan_2:
# 278 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
	goto LilycoveCity_EventScript_Brendan_1

LilycoveCity_EventScript_Brendan_6:
# 283 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 284 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 285 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 286 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
	release_end

LilycoveCity_EventScript_Brendan_10:
# 291 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_Brendan_8

LilycoveCity_EventScript_Brendan_11:
# 292 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_Brendan_8

LilycoveCity_EventScript_Brendan_12:
# 293 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_Brendan_8


LilycoveCity_EventScript_DefeatedMay::
# 300 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 301 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 302 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_DefeatedMay_2
LilycoveCity_EventScript_DefeatedMay_1:
# 305 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_EventScript_DefeatedMay_5
# 308 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_DefeatedMay_8
# 311 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
LilycoveCity_EventScript_DefeatedMay_4:
# 314 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 315 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 316 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalGiveStarter
	end

LilycoveCity_EventScript_DefeatedMay_2:
# 303 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
	goto LilycoveCity_EventScript_DefeatedMay_1

LilycoveCity_EventScript_DefeatedMay_5:
# 306 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
	goto LilycoveCity_EventScript_DefeatedMay_4

LilycoveCity_EventScript_DefeatedMay_8:
# 309 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
	goto LilycoveCity_EventScript_DefeatedMay_4


LilycoveCity_EventScript_DefeatedBrendan::
# 321 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 322 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 323 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_DefeatedBrendan_2
LilycoveCity_EventScript_DefeatedBrendan_1:
# 326 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_EventScript_DefeatedBrendan_5
LilycoveCity_EventScript_DefeatedBrendan_4:
# 329 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_EventScript_DefeatedBrendan_8
LilycoveCity_EventScript_DefeatedBrendan_7:
# 336 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 337 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 338 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalGiveStarter
	end

LilycoveCity_EventScript_DefeatedBrendan_2:
# 324 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
	goto LilycoveCity_EventScript_DefeatedBrendan_1

LilycoveCity_EventScript_DefeatedBrendan_5:
# 327 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
	goto LilycoveCity_EventScript_DefeatedBrendan_4

LilycoveCity_EventScript_DefeatedBrendan_8:
# 330 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_DefeatedBrendan_10
# 333 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
	goto LilycoveCity_EventScript_DefeatedBrendan_7

LilycoveCity_EventScript_DefeatedBrendan_10:
# 331 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
	goto LilycoveCity_EventScript_DefeatedBrendan_7


LilycoveCity_EventScript_RivalGiveStarter::
# 343 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 344 "data/maps/LilycoveCity/scripts.pory"
	case PC_CHOSE_TREECKO, LilycoveCity_EventScript_RivalGiveStarter_3
# 353 "data/maps/LilycoveCity/scripts.pory"
	case PC_CHOSE_TORCHIC, LilycoveCity_EventScript_RivalGiveStarter_4
# 362 "data/maps/LilycoveCity/scripts.pory"
	case PC_CHOSE_MUDKIP, LilycoveCity_EventScript_RivalGiveStarter_5
LilycoveCity_EventScript_RivalGiveStarter_1:
# 372 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq LilycoveCity_EventScript_RivalGiveStarter_7
LilycoveCity_EventScript_RivalGiveStarter_6:
# 375 "data/maps/LilycoveCity/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 376 "data/maps/LilycoveCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 377 "data/maps/LilycoveCity/scripts.pory"
	message LilycoveCity_EventScript_RivalGiveStarter_Text_0
# 378 "data/maps/LilycoveCity/scripts.pory"
	waitmessage
# 379 "data/maps/LilycoveCity/scripts.pory"
	waitfanfare
# 380 "data/maps/LilycoveCity/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 381 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_RESULT
# 382 "data/maps/LilycoveCity/scripts.pory"
	case MON_GIVEN_TO_PARTY, LilycoveCity_EventScript_RivalGiveStarter_20
# 387 "data/maps/LilycoveCity/scripts.pory"
	case MON_GIVEN_TO_PC, LilycoveCity_EventScript_RivalGiveStarter_21
LilycoveCity_EventScript_RivalGiveStarter_18:
# 393 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_YouShouldHaveThem, MSGBOX_DEFAULT
# 394 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_RECEIVED_RIVAL_STARTER
# 395 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 396 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_StepFasterDown
# 397 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 398 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 399 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 400 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 401 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 402 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 403 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 404 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 405 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 406 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
	release_end

LilycoveCity_EventScript_RivalGiveStarter_3:
# 345 "data/maps/LilycoveCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DELPHOX
# 346 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DELPHOX
	checkplayergender
# 0 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_EventScript_RivalGiveStarter_9
# 351 "data/maps/LilycoveCity/scripts.pory"
	givemon SPECIES_DELPHOX, 63
	goto LilycoveCity_EventScript_RivalGiveStarter_1

LilycoveCity_EventScript_RivalGiveStarter_4:
# 354 "data/maps/LilycoveCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SAMUROTT
# 355 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SAMUROTT
	checkplayergender
# 0 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_EventScript_RivalGiveStarter_12
# 360 "data/maps/LilycoveCity/scripts.pory"
	givemon SPECIES_SAMUROTT, 63
	goto LilycoveCity_EventScript_RivalGiveStarter_1

LilycoveCity_EventScript_RivalGiveStarter_5:
# 363 "data/maps/LilycoveCity/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SERPERIOR
# 364 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SERPERIOR
	checkplayergender
# 0 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_EventScript_RivalGiveStarter_15
# 369 "data/maps/LilycoveCity/scripts.pory"
	givemon SPECIES_SERPERIOR, 63
	goto LilycoveCity_EventScript_RivalGiveStarter_1

LilycoveCity_EventScript_RivalGiveStarter_7:
# 373 "data/maps/LilycoveCity/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto LilycoveCity_EventScript_RivalGiveStarter_6

LilycoveCity_EventScript_RivalGiveStarter_9:
# 348 "data/maps/LilycoveCity/scripts.pory"
	givemon SPECIES_DELPHOX, 63
	goto LilycoveCity_EventScript_RivalGiveStarter_1

LilycoveCity_EventScript_RivalGiveStarter_12:
# 357 "data/maps/LilycoveCity/scripts.pory"
	givemon SPECIES_SAMUROTT, 63
	goto LilycoveCity_EventScript_RivalGiveStarter_1

LilycoveCity_EventScript_RivalGiveStarter_15:
# 366 "data/maps/LilycoveCity/scripts.pory"
	givemon SPECIES_SERPERIOR, 63
	goto LilycoveCity_EventScript_RivalGiveStarter_1

LilycoveCity_EventScript_RivalGiveStarter_20:
# 383 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_EventScript_RivalGiveStarter_22
	goto LilycoveCity_EventScript_RivalGiveStarter_18

LilycoveCity_EventScript_RivalGiveStarter_21:
# 388 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_EventScript_RivalGiveStarter_25
LilycoveCity_EventScript_RivalGiveStarter_24:
# 391 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto LilycoveCity_EventScript_RivalGiveStarter_18

LilycoveCity_EventScript_RivalGiveStarter_22:
# 384 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 385 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LilycoveCity_EventScript_RivalGiveStarter_18

LilycoveCity_EventScript_RivalGiveStarter_25:
# 389 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto LilycoveCity_EventScript_RivalGiveStarter_24


LilycoveCity_EventScript_SchoolKidM::
# 411 "data/maps/LilycoveCity/scripts.pory"
	lock_faceplayer
# 412 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 413 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_EventScript_SchoolKidM_2
# 417 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
LilycoveCity_EventScript_SchoolKidM_1:
	release_end

LilycoveCity_EventScript_SchoolKidM_2:
# 414 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
	goto LilycoveCity_EventScript_SchoolKidM_1


LilycoveCity_EventScript_RivalGiveStarter_Text_0:
# 377 "data/maps/LilycoveCity/scripts.pory"
	.string "…$"

LilycoveCity_Text_MayShoppingLetsBattle::
# 422 "data/maps/LilycoveCity/scripts.pory"
	.string "{SPEAKER NAME_MAY}Oh, hey?\n"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
	.string "I bought a whole bunch of DOLLS and\n"
	.string "POSTERS.\p"
	.string "Of course, I've also caught a lot of\n"
	.string "POKéMON, and I'm raising them\l"
	.string "properly, too.\p"
	.string "Actually, I'm more worried if you're\n"
	.string "raising POKéMON properly, {PLAYER}{KUN}.\p"
	.string "I'll battle with you, so you can show\n"
	.string "me your POKéMON, {PLAYER}{KUN}.$"

LilycoveCity_Text_MayNotRaisingPokemon::
# 440 "data/maps/LilycoveCity/scripts.pory"
	.string "{SPEAKER NAME_MAY}Oh, why? {PLAYER}{KUN}, haven't you\n"
	.string "been raising your POKéMON?\p"
	.string "That's not a very good showing as a\n"
	.string "TRAINER…$"

LilycoveCity_Text_MayBattleMe::
# 448 "data/maps/LilycoveCity/scripts.pory"
	.string "{SPEAKER NAME_MAY}Come on, battle with me, so I can\n"
	.string "check out your POKéMON!$"

LilycoveCity_Text_MayWontBeBeaten::
# 453 "data/maps/LilycoveCity/scripts.pory"
	.string "{SPEAKER NAME_MAY}The POKéMON I raised won't be\n"
	.string "beaten by your POKéMON, {PLAYER}{KUN}!$"

LilycoveCity_Text_MayDefeat::
# 458 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
	.string "I remember the battle I had with you,\n"
	.string "{PLAYER}{KUN}, on ROUTE 103.\p"
	.string "That battle helped you become this\n"
	.string "strong, {PLAYER}{KUN}, didn't it?$"

LilycoveCity_Text_MayGoingBackToLittleroot::
# 468 "data/maps/LilycoveCity/scripts.pory"
	.string "{SPEAKER NAME_MAY}I'm thinking of going back to\n"
	.string "LITTLEROOT soon.\p"
	.string "I've caught a decent group of POKéMON,\n"
	.string "and my POKéDEX is coming along, so\l"
	.string "I'm going home to show my dad.$"

LilycoveCity_Text_MayYouGoingToCollectBadges::
# 477 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
	.string "Collect all the GYM BADGES and take\n"
	.string "the POKéMON LEAGUE challenge?\p"
	.string "Well, while you're collecting BADGES,\n"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
	.string "POKéDEX. I'll complete it before you!\p"
	.string "See you!$"

LilycoveCity_Text_MayYouGoingToPokemonLeague::
# 490 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
	.string "Are you taking the POKéMON LEAGUE\n"
	.string "challenge?\p"
	.string "Or, are you going to complete your\n"
	.string "POKéDEX?\p"
	.string "I might've lost to you in battling,\n"
	.string "but I'll finish my POKéDEX before you!\p"
	.string "See you!$"

LilycoveCity_Text_MayYouGoingToBattleFrontier::
# 505 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
	.string "Are you taking the BATTLE FRONTIER\n"
	.string "challenge?\p"
	.string "Or, are you going to complete your\n"
	.string "POKéDEX?\p"
	.string "I might've lost to you in battling,\n"
	.string "but I'll finish my POKéDEX before you!\p"
	.string "See you!$"

LilycoveCity_Text_BrendanShoppingLetsBattle::
# 520 "data/maps/LilycoveCity/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}Oh, hey, it's {PLAYER}.\p"
	.string "I'm running an errand for my dad.\n"
	.string "No, I'm not buying any DOLLS.\p"
	.string "Anyways, it's been a while.\p"
	.string "Want to have a battle to see who's been\n"
	.string "raising POKéMON better?$"

LilycoveCity_Text_BrendanNoConfidence::
# 532 "data/maps/LilycoveCity/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}Oh, what's the matter?\n"
	.string "Don't have the confidence?$"

LilycoveCity_Text_BrendanBattleMe::
# 537 "data/maps/LilycoveCity/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}Want to battle to see who's\n"
	.string "been raising POKéMON better?$"

LilycoveCity_Text_BrendanWontBeBeaten::
# 542 "data/maps/LilycoveCity/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}Aww, but you know I'm not\n"
	.string "going to lose to no {PLAYER}.$"

LilycoveCity_Text_BrendanDefeat::
# 547 "data/maps/LilycoveCity/scripts.pory"
	.string "Humph…\n"
	.string "You've done a lot of raising.\p"
	.string "That stings a bit--I had a head start\n"
	.string "on you as a TRAINER…$"

LilycoveCity_Text_BrendanGoingBackToLittleroot::
# 555 "data/maps/LilycoveCity/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}I…\n"
	.string "I plan on going home to LITTLEROOT.\p"
	.string "You know I'm helping out my dad on his\n"
	.string "POKéDEX. It's coming together pretty\l"
	.string "decently, so I should go show him.$"

LilycoveCity_Text_BrendanYouGoingToCollectBadges::
# 564 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
	.string "Collect all the GYM BADGES and take\n"
	.string "the POKéMON LEAGUE challenge?\p"
	.string "Maybe I'll do that, too…\p"
	.string "Well, anyway, hang in there!$"

LilycoveCity_Text_BrendanYouGoingToPokemonLeague::
# 575 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
	.string "Since you're that strong, are you\n"
	.string "taking the POKéMON LEAGUE challenge?\p"
	.string "Heh, even me--if I trained my POKéMON\n"
	.string "a bit more, I should be stronger than\l"
	.string "you, {PLAYER}.\p"
	.string "Well, anyway, hang in there!$"

LilycoveCity_Text_BrendanYouGoingToBattleFrontier::
# 588 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
	.string "Are you taking the BATTLE FRONTIER\n"
	.string "challenge?\p"
	.string "Or, are you going to complete your\n"
	.string "POKéDEX?\p"
	.string "Since you're that strong, you should\n"
	.string "consider the BATTLE FRONTIER.\p"
	.string "Heh, if I train my POKéMON a bit more,\n"
	.string "I'll get stronger than you, {PLAYER}.\p"
	.string "Maybe I should go to the BATTLE\n"
	.string "FRONTIER.\p"
	.string "Well, anyway, hang in there!$"

LilycoveCity_Text_MovedLootIntoHideoutToday::
# 609 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
	.string "We moved more loot into our secret\n"
	.string "HIDEOUT today…\p"
	.string "Wh-who are you?!\n"
	.string "I was just talking to myself!$"

LilycoveCity_Text_ChanceToDoBigThings::
# 619 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a GRUNT, so I don't know what\n"
	.string "the BOSS is thinking…\p"
	.string "But being on TEAM AQUA, I know I'll get\n"
	.string "the chance to do big things!\p"
	.string "Wh-who are you?!\n"
	.string "I was just talking to myself!$"

LilycoveCity_Text_DontGoNearCaveInCove::
# 630 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
	.string "Don't go near the cave in the cove!\p"
	.string "Why? You don't need a reason why!\n"
	.string "I'm an adult, so you just listen to me!$"

LilycoveCity_Text_IfWorldBecomesOurs::
# 639 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
	.string "TEAM AQUA's, it will be a happier\l"
	.string "place for POKéMON, too.$"

LilycoveCity_Text_WailmerLeapOutOfWater::
# 645 "data/maps/LilycoveCity/scripts.pory"
	.string "There! WAILMER!\n"
	.string "Leap out of the water now!$"

LilycoveCity_Text_GetLostMessingUpTraining::
# 650 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
	.string "You're messing up our training,\n"
	.string "so can you, like, get lost?$"

LilycoveCity_Text_ContestHallInTown::
# 657 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a POKéMON CONTEST HALL\n"
	.string "right in this here town.\p"
	.string "That means well-raised POKéMON will\n"
	.string "come from all over the country.\p"
	.string "My heart swells with excitement!$"

LilycoveCity_Text_StrangeCaveInCove::
# 667 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\n"
	.string "the cove at the edge of town?$"

LilycoveCity_Text_GoingToMoveDeleterForHMs::
# 672 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my POKéMON some new\n"
	.string "moves for entering a CONTEST.\p"
	.string "So, I'm going to see the MOVE DELETER\n"
	.string "and make it forget HM moves.$"

LilycoveCity_Text_ImFromKanto::
# 680 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from KANTO.\p"
	.string "The HOENN region is beautiful with\n"
	.string "all its water and verdant nature.\p"
	.string "Hunh? Wait a second…\p"
	.string "Could there be rare POKéMON that live\n"
	.string "only in this area?$"

LilycoveCity_Text_TeamAquaBeenTrainingWailmer::
# 692 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's been training their\n"
	.string "WAILMER in the cove.\p"
	.string "We SAILORS can't get our boats out\n"
	.string "to sea with them in the way!$"

LilycoveCity_Text_SomeonePuntedTeamAquaOut::
# 700 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
	.string "Someone punted TEAM AQUA out of\n"
	.string "the way for us!\p"
	.string "That got the WAILMER out of the cove,\n"
	.string "so we can get our boats out again.$"

LilycoveCity_Text_SomeoneStoleMyPokemon::
# 710 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
	.string "seaside inn to the sound of waves…\p"
	.string "When someone stole my POKéMON!\p"
	.string "Who's the abductor?\n"
	.string "TEAM AQUA? Is it TEAM AQUA?$"

LilycoveCity_Text_MissingPokemonCameBack::
# 720 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing POKéMON…\n"
	.string "It came back without me noticing!$"

LilycoveCity_Text_ImArtDealer::
# 725 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an ART DEALER.\p"
	.string "I am a buyer and seller of fine art,\n"
	.string "especially paintings.\p"
	.string "I've heard that the MUSEUM here has\n"
	.string "magnificent works on exhibit…$"

LilycoveCity_Text_SeaRemainsForeverYoung::
# 735 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
	.string "the sea remains forever young with\l"
	.string "the vivid brilliance of life…\p"
	.string "Fwohoho fwohohohoho…$"

LilycoveCity_Text_SixtyYearsAgoHusbandProposed::
# 743 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
	.string "proposed to me here.\l"
	.string "The sea remains as beautiful as ever.\p"
	.string "Mufufufu mufufufufufu…$"

LilycoveCity_Text_TeamAquaRenovatedCavern::
# 751 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
	.string "in this cove?\p"
	.string "That had been a natural formation,\n"
	.string "but then that TEAM AQUA lot came\l"
	.string "along and made their renovations.\p"
	.string "They call themselves\n"
	.string "the “nature-loving TEAM AQUA”!\p"
	.string "But what they do and what they say\n"
	.string "don't match at all!$"

LilycoveCity_Text_TeamAquaLotGoneForGood::
# 766 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
	.string "I didn't notice it right away,\n"
	.string "but it's completely empty now.\p"
	.string "That TEAM AQUA lot, they must\n"
	.string "have gone away for good.$"

LilycoveCity_Text_CitySign::
# 776 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY\p"
	.string "“Where the land ends and the\n"
	.string "sea begins.”$"

LilycoveCity_Text_ContestHallSign::
# 783 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON CONTEST HALL\n"
	.string "“The gathering place for TRAINERS!”$"

LilycoveCity_Text_MotelSign::
# 788 "data/maps/LilycoveCity/scripts.pory"
	.string "COVE LILY MOTEL\p"
	.string "“Remember us as COVE LILY of\n"
	.string "LILYCOVE.”$"

LilycoveCity_Text_MuseumSign::
# 795 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
	.string "“POKéMON Masterpiece Collection\n"
	.string "on exhibit!”$"

LilycoveCity_Text_MuseumSignPlayersExhibit::
# 802 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
	.string "“{PLAYER}'s POKéMON Collection\n"
	.string "on exhibit!”$"

LilycoveCity_Text_HarborSignUnderConstruction::
# 809 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
	.string "“The ferry S.S. TIDAL is under\n"
	.string "construction in SLATEPORT CITY.\p"
	.string "“Service is scheduled to begin\n"
	.string "shortly.”$"

LilycoveCity_Text_HarborSign::
# 819 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
	.string "“Enjoy a delightful cruise on\n"
	.string "the ferry S.S. TIDAL.”$"

LilycoveCity_Text_TrainerFanClubSign::
# 826 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\p"
	.string "The names of TRAINERS are scribbled\n"
	.string "all over the sign…$"

LilycoveCity_Text_DepartmentStoreSign::
# 833 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE DEPARTMENT STORE\p"
	.string "“Overflowing with great merchandise\n"
	.string "and excitement!\p"
	.string "“A great place to find that something\n"
	.string "you need!”$"

LilycoveCity_Text_MoveDeletersHouseSign::
# 843 "data/maps/LilycoveCity/scripts.pory"
	.string "MOVE DELETER'S HOUSE\p"
	.string "“Unwanted POKéMON moves deleted.”$"

LilycoveCity_Text_DoYouKnowAboutBerryBlender::
# 849 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
	.string "BERRY BLENDER?$"

LilycoveCity_Text_FasterSpinBetterPokeblocks::
# 854 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
	.string "to spin faster.\p"
	.string "The faster you can make it spin, the\n"
	.string "better {POKEBLOCK}S you can get, I've heard.$"

LilycoveCity_Text_ExplainBerryBlender::
# 862 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
	.string "called a {POKEBLOCK}.\p"
	.string "If you give a good {POKEBLOCK} to a POKéMON,\n"
	.string "its condition will improve by a lot.$"

LilycoveCity_Text_HeardTowerCalledSkyPillar::
# 870 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
	.string "on the sea routes.\p"
	.string "It's called the SKY PILLAR, I hear.$"

LilycoveCity_Text_SawTallTowerOnRoute131::
# 877 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
	.string "around ROUTE 131.\p"
	.string "Could that possibly be…?$"

LilycoveCity_Text_JustArrivedAndSawRarePokemon::
# 884 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
	.string "honeymoon vacation.\p"
	.string "We happened to see a DRAGON-type\n"
	.string "POKéMON flying way up in the sky.\p"
	.string "Do cool POKéMON like that live in\n"
	.string "the HOENN region?$"

LilycoveCity_Text_HoneymoonVowToSeeRarePokemon::
# 895 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
	.string "many rare POKéMON as we can.\p"
	.string "So we were delighted to see a rare\n"
	.string "POKéMON as soon as we arrived.\p"
	.string "I mean, we are totally happy!$"

LilycoveCity_Text_LameToy::
# 905 "data/maps/LilycoveCity/scripts.pory"
	.string "My daddy gave me this to play with,\n"
	.string "but I'm already bored.\p"
	.string "Why don't you just take it?\n"
	.string "I want something that's more fun.$"

LilycoveCity_Text_NewToys::
# 913 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you have any cool toys?\n"
	.string "No? So boring...$"

LilycoveCity_Text_PlayerReceivedRivalStarter::
# 918 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you have any cool toys?\n"
	.string "No? So boring...$"

LilycoveCity_Text_YouShouldHaveThem::
# 923 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you have any cool toys?\n"
	.string "No? So boring...$"
