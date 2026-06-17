Route110_MapScripts::
# 2 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_MapScripts_MAP_SCRIPT_ON_RESUME
# 6 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route110_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
	end

Route110_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 8 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 9 "data/maps/Route110/scripts.pory"
	compare VAR_CYCLING_CHALLENGE_STATE, 1
	goto_if_eq Route110_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route110_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route110_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
	goto Route110_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route110_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route110_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 16 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 17 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
	return


Route110_EventScript_AquaGrunt1::
# 24 "data/maps/Route110/scripts.pory"
	lock_faceplayer
# 25 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 26 "data/maps/Route110/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


Route110_EventScript_AquaGrunt2::
# 30 "data/maps/Route110/scripts.pory"
	lock_faceplayer
# 31 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 32 "data/maps/Route110/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


Route110_EventScript_AquaGrunt3::
# 36 "data/maps/Route110/scripts.pory"
	lock_faceplayer
# 37 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 38 "data/maps/Route110/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


Route110_EventScript_AquaGrunt4::
# 42 "data/maps/Route110/scripts.pory"
	lock_faceplayer
# 43 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 44 "data/maps/Route110/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


Route110_EventScript_Boy1::
# 48 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
	end


Route110_EventScript_CyclingGirl1::
# 53 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
	end


Route110_EventScript_CyclingGuy1::
# 58 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
	end


Route110_EventScript_OldMan::
# 63 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
	end


Route110_EventScript_OldWoman::
# 68 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
	end


Route110_EventScript_CyclingGuy2::
# 73 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
	end


Route110_EventScript_Boy2::
# 78 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
	end


Route110_EventScript_SlateportCitySign::
# 83 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
	end


Route110_EventScript_CyclingRoadSign::
# 88 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
	end


Route110_EventScript_VandalizedSign::
# 93 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
	end


Route110_EventScript_Route103Sign::
# 98 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
	end


Route110_EventScript_SeasideParkingSign::
# 103 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
	end


Route110_EventScript_MauvilleCitySign::
# 108 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
	end


Route110_EventScript_TrainerTipsPrlzSleep::
# 113 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
	end


Route110_EventScript_TrainerTipsRegisterItems::
# 118 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
	end


Route110_EventScript_TrickHouseSign::
# 123 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
	end


Route110_EventScript_CyclingRoadResultsSign::
# 128 "data/maps/Route110/scripts.pory"
	lockall
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_EventScript_CyclingRoadResultsSign_2
# 132 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
Route110_EventScript_CyclingRoadResultsSign_1:
# 134 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_CyclingRoadResultsSign_2:
# 130 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
	goto Route110_EventScript_CyclingRoadResultsSign_1


Route110_EventScript_ChallengeGuy::
# 139 "data/maps/Route110/scripts.pory"
	lock_faceplayer
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route110_EventScript_ChallengeGuy_2
# 143 "data/maps/Route110/scripts.pory"
	compare VAR_CYCLING_CHALLENGE_STATE, 0
	goto_if_eq Route110_EventScript_ChallengeGuy_3
# 147 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
Route110_EventScript_ChallengeGuy_1:
	release_end

Route110_EventScript_ChallengeGuy_2:
# 141 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
	goto Route110_EventScript_ChallengeGuy_1

Route110_EventScript_ChallengeGuy_3:
# 144 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
	goto Route110_EventScript_ChallengeGuy_1


Route110_EventScript_Edward::
# 153 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 154 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Jaclyn::
# 159 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 160 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Edwin::
# 165 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route110_EventScript_Edwin_2
# 171 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
	release_end

Route110_EventScript_Edwin_2:
# 167 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 168 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 176 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 177 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 178 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 179 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
	release_end


Route110_EventScript_Dale::
# 184 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 185 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Jacob::
# 190 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 191 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Anthony::
# 196 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 197 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Benjamin::
# 202 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route110_EventScript_Benjamin_2
# 208 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
	release_end

Route110_EventScript_Benjamin_2:
# 204 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 205 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 213 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 214 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 215 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 216 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
	release_end


Route110_EventScript_Jasmine::
# 221 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 222 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Abigail::
# 227 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route110_EventScript_Abigail_2
# 233 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
	release_end

Route110_EventScript_Abigail_2:
# 229 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 230 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 238 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 239 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 240 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 241 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
	release_end


Route110_EventScript_Isabel::
# 246 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route110_EventScript_Isabel_2
# 252 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
	release_end

Route110_EventScript_Isabel_2:
# 248 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 249 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 257 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 258 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 259 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 260 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
	release_end


Route110_EventScript_Timmy::
# 265 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 266 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Unused::
	end


Route110_EventScript_Kaleb::
# 275 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 276 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Joseph::
# 281 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 282 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Alyssa::
# 287 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 288 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_CyclingChallengeEnd::
# 293 "data/maps/Route110/scripts.pory"
	lockall
# 294 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_StepFasterRight
# 295 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 296 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 297 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 298 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 299 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_CyclingChallengeEnd_3
# 300 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_CyclingChallengeEnd_4
# 301 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_CyclingChallengeEnd_4
# 302 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_CyclingChallengeEnd_4
# 303 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_CyclingChallengeEnd_5
# 304 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_CyclingChallengeEnd_5
# 305 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_CyclingChallengeEnd_5
# 306 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_CyclingChallengeEnd_6
# 307 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_CyclingChallengeEnd_6
# 308 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_CyclingChallengeEnd_6
# 309 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_CyclingChallengeEnd_7
Route110_EventScript_CyclingChallengeEnd_1:
# 311 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 312 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 313 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 314 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_CyclingChallengeEnd_3:
# 299 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
	goto Route110_EventScript_CyclingChallengeEnd_1

Route110_EventScript_CyclingChallengeEnd_4:
# 302 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
	goto Route110_EventScript_CyclingChallengeEnd_1

Route110_EventScript_CyclingChallengeEnd_5:
# 305 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
	goto Route110_EventScript_CyclingChallengeEnd_1

Route110_EventScript_CyclingChallengeEnd_6:
# 308 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
	goto Route110_EventScript_CyclingChallengeEnd_1

Route110_EventScript_CyclingChallengeEnd_7:
# 309 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
	goto Route110_EventScript_CyclingChallengeEnd_1


Route110_EventScript_RivalTrigger1::
# 319 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 320 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
	end


Route110_EventScript_RivalTrigger2::
# 325 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 326 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
	end


Route110_EventScript_RivalTrigger3::
# 331 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 332 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
	end


Route110_EventScript_RivalScene::
# 337 "data/maps/Route110/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route110_EventScript_RivalScene_2
# 341 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
Route110_EventScript_RivalScene_1:
# 343 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_StepFasterDown
# 344 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 345 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_ExclamationMark
# 346 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 347 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_Delay48
# 348 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 349 "data/maps/Route110/scripts.pory"
	delay 30
# 350 "data/maps/Route110/scripts.pory"
	switch VAR_0x8008
# 351 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_RivalScene_7
# 352 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_RivalScene_8
# 353 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_RivalScene_9
Route110_EventScript_RivalScene_5:
# 355 "data/maps/Route110/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route110_EventScript_RivalScene_11
# 359 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanBattle
Route110_EventScript_RivalScene_10:
# 361 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_RivalScene_2:
# 339 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto Route110_EventScript_RivalScene_1

Route110_EventScript_RivalScene_7:
# 351 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_EventScript_RivalScene_Movement_0
	goto Route110_EventScript_RivalScene_5

Route110_EventScript_RivalScene_8:
# 352 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_WalkDown
	goto Route110_EventScript_RivalScene_5

Route110_EventScript_RivalScene_9:
# 353 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_EventScript_RivalScene_Movement_1
	goto Route110_EventScript_RivalScene_5

Route110_EventScript_RivalScene_11:
# 357 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayBattle
	goto Route110_EventScript_RivalScene_10


Route110_EventScript_MayBattle::
# 366 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 367 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 368 "data/maps/Route110/scripts.pory"
	case PC_CHOSE_TREECKO, Route110_EventScript_MayBattle_3
# 369 "data/maps/Route110/scripts.pory"
	case PC_CHOSE_TORCHIC, Route110_EventScript_MayBattle_4
# 370 "data/maps/Route110/scripts.pory"
	case PC_CHOSE_MUDKIP, Route110_EventScript_MayBattle_5
Route110_EventScript_MayBattle_1:
# 372 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 373 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 374 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 375 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
	end

Route110_EventScript_MayBattle_3:
# 368 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
	goto Route110_EventScript_MayBattle_1

Route110_EventScript_MayBattle_4:
# 369 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
	goto Route110_EventScript_MayBattle_1

Route110_EventScript_MayBattle_5:
# 370 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
	goto Route110_EventScript_MayBattle_1


Route110_EventScript_BrendanBattle::
# 380 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 381 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 382 "data/maps/Route110/scripts.pory"
	case PC_CHOSE_TREECKO, Route110_EventScript_BrendanBattle_3
# 383 "data/maps/Route110/scripts.pory"
	case PC_CHOSE_TORCHIC, Route110_EventScript_BrendanBattle_4
# 384 "data/maps/Route110/scripts.pory"
	case PC_CHOSE_MUDKIP, Route110_EventScript_BrendanBattle_5
Route110_EventScript_BrendanBattle_1:
# 386 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 387 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 388 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 389 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
	end

Route110_EventScript_BrendanBattle_3:
# 382 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
	goto Route110_EventScript_BrendanBattle_1

Route110_EventScript_BrendanBattle_4:
# 383 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
	goto Route110_EventScript_BrendanBattle_1

Route110_EventScript_BrendanBattle_5:
# 384 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
	goto Route110_EventScript_BrendanBattle_1


Route110_EventScript_RivalExit::
# 394 "data/maps/Route110/scripts.pory"
	closemessage
# 395 "data/maps/Route110/scripts.pory"
	switch VAR_0x8008
# 396 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_RivalExit_3
# 397 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_RivalExit_4
# 398 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_RivalExit_5
Route110_EventScript_RivalExit_1:
# 400 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 401 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 402 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL
# 403 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 404 "data/maps/Route110/scripts.pory"
	delay 45
# 405 "data/maps/Route110/scripts.pory"
	switch VAR_0x8008
# 406 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_RivalExit_8
# 407 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_RivalExit_8
# 408 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_RivalExit_9
Route110_EventScript_RivalExit_6:
# 410 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 411 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 412 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 413 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 414 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 415 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_RivalExit_3:
# 396 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 33, 55
	goto Route110_EventScript_RivalExit_1

Route110_EventScript_RivalExit_4:
# 397 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 34, 55
	goto Route110_EventScript_RivalExit_1

Route110_EventScript_RivalExit_5:
# 398 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 35, 55
	goto Route110_EventScript_RivalExit_1

Route110_EventScript_RivalExit_8:
# 407 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_EventScript_RivalExit_Movement_0
	goto Route110_EventScript_RivalExit_6

Route110_EventScript_RivalExit_9:
# 408 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_EventScript_RivalExit_Movement_1
	goto Route110_EventScript_RivalExit_6


Route110_EventScript_BirchScene1::
# 420 "data/maps/Route110/scripts.pory"
	lockall
# 421 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 422 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
	return


Route110_EventScript_BirchScene2::
# 426 "data/maps/Route110/scripts.pory"
	lockall
# 427 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 428 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
	return


Route110_EventScript_BirchScene3::
# 432 "data/maps/Route110/scripts.pory"
	lockall
# 433 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 434 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
	return


Route110_EventScript_BirchScene4::
# 438 "data/maps/Route110/scripts.pory"
	lockall
# 439 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 440 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
	return


Route110_EventScript_BirchScene::
# 444 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_BIRCH
# 445 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_EventScript_BirchScene_Movement_0
# 446 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 447 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 448 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_ExclamationMark
# 449 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 450 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_Delay48
# 451 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 452 "data/maps/Route110/scripts.pory"
	switch VAR_0x8008
# 453 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BirchScene_3
# 454 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BirchScene_4
# 455 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_BirchScene_5
# 456 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_BirchScene_6
Route110_EventScript_BirchScene_1:
# 458 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 459 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 460 "data/maps/Route110/scripts.pory"
	closemessage
# 461 "data/maps/Route110/scripts.pory"
	delay 20
# 462 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_StepFasterLeft
# 463 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 464 "data/maps/Route110/scripts.pory"
	delay 10
# 465 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_StepFasterRight
# 466 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 467 "data/maps/Route110/scripts.pory"
	delay 20
# 468 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_StepFasterDown
# 469 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 470 "data/maps/Route110/scripts.pory"
	delay 30
# 471 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 472 "data/maps/Route110/scripts.pory"
	closemessage
# 473 "data/maps/Route110/scripts.pory"
	delay 30
# 474 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 475 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 476 "data/maps/Route110/scripts.pory"
	waitfanfare
# 477 "data/maps/Route110/scripts.pory"
	closemessage
# 478 "data/maps/Route110/scripts.pory"
	delay 30
# 479 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 480 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 481 "data/maps/Route110/scripts.pory"
	closemessage
# 482 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route110_EventScript_BirchScene_8
# 485 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_EventScript_BirchScene_Movement_6
Route110_EventScript_BirchScene_7:
# 487 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 488 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_BIRCH
# 489 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 490 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_BirchScene_3:
# 453 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_EventScript_BirchScene_Movement_1
	goto Route110_EventScript_BirchScene_1

Route110_EventScript_BirchScene_4:
# 454 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_EventScript_BirchScene_Movement_2
	goto Route110_EventScript_BirchScene_1

Route110_EventScript_BirchScene_5:
# 455 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_EventScript_BirchScene_Movement_3
	goto Route110_EventScript_BirchScene_1

Route110_EventScript_BirchScene_6:
# 456 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_EventScript_BirchScene_Movement_4
	goto Route110_EventScript_BirchScene_1

Route110_EventScript_BirchScene_8:
# 483 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_EventScript_BirchScene_Movement_5
	goto Route110_EventScript_BirchScene_7


# 351 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_Movement_0:
# 351 "data/maps/Route110/scripts.pory"
	walk_down
# 351 "data/maps/Route110/scripts.pory"
	walk_left
# 351 "data/maps/Route110/scripts.pory"
	step_faster_down
	step_end

# 353 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_Movement_1:
# 353 "data/maps/Route110/scripts.pory"
	walk_down
# 353 "data/maps/Route110/scripts.pory"
	walk_right
# 353 "data/maps/Route110/scripts.pory"
	step_faster_down
	step_end

# 407 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_Movement_0:
# 407 "data/maps/Route110/scripts.pory"
	run_up
# 407 "data/maps/Route110/scripts.pory"
	run_up
# 407 "data/maps/Route110/scripts.pory"
	run_up
# 407 "data/maps/Route110/scripts.pory"
	run_up
# 407 "data/maps/Route110/scripts.pory"
	run_up
# 407 "data/maps/Route110/scripts.pory"
	run_up
# 407 "data/maps/Route110/scripts.pory"
	run_up
	step_end

# 408 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_Movement_1:
# 408 "data/maps/Route110/scripts.pory"
	run_up
# 408 "data/maps/Route110/scripts.pory"
	run_up
# 408 "data/maps/Route110/scripts.pory"
	run_up
# 408 "data/maps/Route110/scripts.pory"
	run_up
# 408 "data/maps/Route110/scripts.pory"
	run_up
# 408 "data/maps/Route110/scripts.pory"
	run_up
# 408 "data/maps/Route110/scripts.pory"
	run_up
# 408 "data/maps/Route110/scripts.pory"
	run_down
	step_end

# 445 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_Movement_0:
# 445 "data/maps/Route110/scripts.pory"
	walk_down
# 445 "data/maps/Route110/scripts.pory"
	walk_down
# 445 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

# 453 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_Movement_1:
# 453 "data/maps/Route110/scripts.pory"
	walk_down
# 453 "data/maps/Route110/scripts.pory"
	walk_left
# 453 "data/maps/Route110/scripts.pory"
	walk_left
# 453 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

# 454 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_Movement_2:
# 454 "data/maps/Route110/scripts.pory"
	walk_down
# 454 "data/maps/Route110/scripts.pory"
	walk_left
# 454 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

# 455 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_Movement_3:
# 455 "data/maps/Route110/scripts.pory"
	walk_down
# 455 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

# 456 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_Movement_4:
# 456 "data/maps/Route110/scripts.pory"
	walk_down
# 456 "data/maps/Route110/scripts.pory"
	walk_right
# 456 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

# 483 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_Movement_5:
# 483 "data/maps/Route110/scripts.pory"
	walk_up
# 483 "data/maps/Route110/scripts.pory"
	walk_up
# 483 "data/maps/Route110/scripts.pory"
	walk_right
# 483 "data/maps/Route110/scripts.pory"
	walk_up
# 483 "data/maps/Route110/scripts.pory"
	walk_up
# 483 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 485 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_Movement_6:
# 485 "data/maps/Route110/scripts.pory"
	walk_up
# 485 "data/maps/Route110/scripts.pory"
	walk_up
# 485 "data/maps/Route110/scripts.pory"
	walk_up
# 485 "data/maps/Route110/scripts.pory"
	walk_up
# 485 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

Route110_Text_WeCantTalkAboutAquaActivities::
# 494 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
	.string "We can't talk about them yet.$"

Route110_Text_KickUpARuckus::
# 499 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
	.string "kick up a ruckus!$"

Route110_Text_MyFirstJobInAqua::
# 504 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
	.string "TEAM AQUA. It's a little scary.$"

Route110_Text_AquaActionsBringSmiles::
# 509 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
	.string "smiles to people's faces!$"

Route110_Text_MayLetsBattle::
# 514 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
	.string "While I was searching for other\n"
	.string "POKéMON, my POKéMON grew stronger.\p"
	.string "So…\n"
	.string "How about a little battle?$"

Route110_Text_MayDefeated::
# 524 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
	.string "You're better than I expected!$"

Route110_Text_MayTakeThis::
# 529 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
	.string "training, too, haven't you?\p"
	.string "I think you deserve a reward!\n"
	.string "This is from me!$"

Route110_Text_MayExplainItemfinder::
# 537 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
	.string "Try it out. If there is an item that's\n"
	.string "not visible, it emits a sound.\p"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
	.string "I know it's a little silly coming from\n"
	.string "me, but I think you should train a lot\l"
	.string "harder for the next time.$"

Route110_Text_BrendanLetsBattle::
# 550 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
	.string "So this is where you were.\l"
	.string "How's it going?\p"
	.string "Have you been raising your POKéMON?\n"
	.string "I'll check for you.$"

Route110_Text_BrendanDefeated::
# 559 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
	.string "You're pretty good.$"

Route110_Text_BrendanTakeThis::
# 564 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
	.string "without me noticing…\p"
	.string "Good enough!\n"
	.string "Here, take this.$"

Route110_Text_BrendanExplainItemfinder::
# 572 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
	.string "Use it to root around for items that\n"
	.string "aren't visible.\p"
	.string "If it senses something, it emits\n"
	.string "a sound.\p"
	.string "Anyway, I'm off to look for new\n"
	.string "POKéMON.$"

Route110_Text_RideBikeAtFullSpeed::
# 585 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
	.string "at full speed on CYCLING ROAD?$"

Route110_Text_HairStreamsBehindMe::
# 590 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
	.string "colored hair streams behind me?\p"
	.string "I grew my hair out just for that.$"

Route110_Text_YouGotBikeFromRydel::
# 597 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
	.string "Oh, it's glaringly obvious.\n"
	.string "It says right on your bike…\p"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
	.string "That name's everywhere.\p"
	.string "You should ride it around all over\n"
	.string "the place--it's good advertising!$"

Route110_Text_TwoRoads::
# 622 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
	.string "A road each for people and POKéMON.\n"
	.string "Perhaps that is right and fair.$"

Route110_Text_WalkOnTheLowRoad::
# 629 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
	.string "a leisurely walk on the low road.$"

Route110_Text_BikeTechniques::
# 634 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
	.string "riding even more fun.\p"
	.string "There are some places that you can\n"
	.string "reach only by using a BIKE technique.$"

Route110_Text_WhichShouldIChoose::
# 642 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
	.string "Make a beeline for MAUVILLE on\n"
	.string "CYCLING ROAD, or take the low road\l"
	.string "and look for POKéMON?$"

Route110_Text_CyclingChallengeResultSummary::
# 650 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
	.string "… … {STR_VAR_1}!\p"
	.string "Total time:\n"
	.string "… … {STR_VAR_2}!$"

Route110_Text_ChallengeReactionBest::
# 658 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
	.string "Your love of cycling comes from deep\n"
	.string "within your heart.\l"
	.string "You've shaken me to my very soul!$"

Route110_Text_ChallengeReactionGood::
# 666 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
	.string "I suggest you speed up a bit while\n"
	.string "still avoiding collisions.$"

Route110_Text_ChallengeReactionOk::
# 673 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
	.string "progress.\p"
	.string "Still, I hope you don't forget the\n"
	.string "sheer pleasure of cycling.$"

Route110_Text_ChallengeReactionBad::
# 681 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
	.string "on terrifying.\p"
	.string "Most certainly, you need much more\n"
	.string "practice riding.$"

Route110_Text_ChallengeReactionWorst::
# 689 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
	.string "You're perhaps not cut out for this\n"
	.string "unfortunate cycling business.\p"
	.string "You ought to give serious thought to\n"
	.string "returning that BIKE to RYDEL.$"

Route110_Text_RatedForNumberOfCollisions::
# 699 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
	.string "If you were to ride from MAUVILLE to\n"
	.string "SLATEPORT on a MACH BIKE, you would\l"
	.string "be rated for the number of collisions\l"
	.string "and your total time.$"

Route110_Text_AlwaysAimHigher::
# 708 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
	.string "seeing more challenges from you.\l"
	.string "Always aim higher!$"

Route110_Text_AcroBikesDoNotQualify::
# 714 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
	.string "MACH BIKES are rated for their number\l"
	.string "of collisions and their total times.\p"
	.string "ACRO BIKES do not qualify for rating.\n"
	.string "They are easy to turn, so it's not fair.$"

Route110_Text_SlateportCitySign::
# 723 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
	.string "{DOWN_ARROW} SLATEPORT CITY$"

Route110_Text_CyclingRoadSign::
# 728 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"

Route110_Text_AquaWasHere::
# 732 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
	.string "Someone painted that onto this sign,\n"
	.string "but then someone else painted over it.\p"
	.string "“TEAM MAGMA rules!” is what it\n"
	.string "says now.$"

Route110_Text_Route103Sign::
# 742 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
	.string "{LEFT_ARROW} ROUTE 103$"

Route110_Text_SeasideParkingSign::
# 747 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"

Route110_Text_MauvilleCitySign::
# 751 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
	.string "{UP_ARROW} MAUVILLE CITY$"

Route110_Text_TrainerTipsPrlzSleep::
# 756 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "The foe can be made helpless by\n"
	.string "paralyzing it or causing it to sleep.\p"
	.string "It is an important technique for\n"
	.string "POKéMON battles.$"

Route110_Text_TrainerTipsRegisterItems::
# 766 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "The items in the BAG can be reorganized\n"
	.string "by pressing SELECT.$"

Route110_Text_TrickHouseSign::
# 773 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
	.string "to reach the wondrous TRICK HOUSE.”$"

Route110_Text_BestRecord::
# 778 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
	.string "No. of collisions: {STR_VAR_1}\p"
	.string "Elapsed time: {STR_VAR_2}$"

Route110_Text_ThereIsNoRecord::
# 786 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
	.string "No one seems to have taken the\n"
	.string "challenge. There is no record…$"

Route110_Text_ImagineSeeingYouHere::
# 793 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
	.string "Imagine seeing you here!\p"
	.string "And where might my {RIVAL} be?$"

Route110_Text_HeardYouInstallMatchCall::
# 800 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
	.string "You two are running separately.\l"
	.string "Well, that's fine.\p"
	.string "Oh, yes, I heard that your POKéNAV\n"
	.string "had the MATCH CALL system installed.\p"
	.string "Well, then, I should register you in\n"
	.string "my POKéNAV as well.\p"
	.string "That way, even when we're apart,\n"
	.string "I can rate your POKéDEX anytime.\p"
	.string "… … … … … …$"

Route110_Text_RegisteredBirchInPokenav::
# 817 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
	.string "in the POKéNAV.$"

Route110_Text_KeepAnEyeOutForRival::
# 822 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
	.string "Please keep an eye out for my {RIVAL}.\n"
	.string "… … … … … …\p"
	.string "Well, I had better get going.\n"
	.string "See you again, {PLAYER}{KUN}!$"
