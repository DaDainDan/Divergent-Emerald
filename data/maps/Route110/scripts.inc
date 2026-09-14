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
	lock_faceplayer
# 74 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RAPID_SPIN, Route110_EventScript_CyclingGuy2_2
# 78 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_DEFAULT
	giveitem ITEM_TM_RAPID_SPIN
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_EventScript_CyclingGuy2_5
Route110_EventScript_CyclingGuy2_4:
# 82 "data/maps/Route110/scripts.pory"
	setflag FLAG_RECEIVED_TM_RAPID_SPIN
	release_end

Route110_EventScript_CyclingGuy2_2:
# 75 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_GetRollin, MSGBOX_NPC
	end

Route110_EventScript_CyclingGuy2_5:
# 80 "data/maps/Route110/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route110_EventScript_CyclingGuy2_4


Route110_EventScript_Boy2::
# 87 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
	end


Route110_EventScript_SlateportCitySign::
# 92 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
	end


Route110_EventScript_CyclingRoadSign::
# 97 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
	end


Route110_EventScript_VandalizedSign::
# 102 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
	end


Route110_EventScript_Route103Sign::
# 107 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
	end


Route110_EventScript_SeasideParkingSign::
# 112 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
	end


Route110_EventScript_MauvilleCitySign::
# 117 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
	end


Route110_EventScript_TrainerTipsPrlzSleep::
# 122 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
	end


Route110_EventScript_TrainerTipsRegisterItems::
# 127 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
	end


Route110_EventScript_TrickHouseSign::
# 132 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
	end


Route110_EventScript_CyclingRoadResultsSign::
# 137 "data/maps/Route110/scripts.pory"
	lockall
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route110_EventScript_CyclingRoadResultsSign_2
# 141 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
Route110_EventScript_CyclingRoadResultsSign_1:
# 143 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_CyclingRoadResultsSign_2:
# 139 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
	goto Route110_EventScript_CyclingRoadResultsSign_1


Route110_EventScript_ChallengeGuy::
# 148 "data/maps/Route110/scripts.pory"
	lock_faceplayer
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route110_EventScript_ChallengeGuy_2
# 152 "data/maps/Route110/scripts.pory"
	compare VAR_CYCLING_CHALLENGE_STATE, 0
	goto_if_eq Route110_EventScript_ChallengeGuy_3
# 156 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
Route110_EventScript_ChallengeGuy_1:
	release_end

Route110_EventScript_ChallengeGuy_2:
# 150 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
	goto Route110_EventScript_ChallengeGuy_1

Route110_EventScript_ChallengeGuy_3:
# 153 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
	goto Route110_EventScript_ChallengeGuy_1


Route110_EventScript_Edward::
# 162 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 163 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Jaclyn::
# 168 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 169 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Edwin::
# 174 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route110_EventScript_Edwin_2
# 180 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
	release_end

Route110_EventScript_Edwin_2:
# 176 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 177 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 185 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 186 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 188 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
	release_end


Route110_EventScript_Darian::
# 193 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route110_Text_DarianIntro, Route110_Text_DarianDefeated
# 194 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Jacob::
# 199 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 200 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Anthony::
# 205 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 206 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Benjamin::
# 211 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route110_EventScript_Benjamin_2
# 217 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
	release_end

Route110_EventScript_Benjamin_2:
# 213 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 214 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 222 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 223 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 224 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 225 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
	release_end


Route110_EventScript_Jasmine::
# 230 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 231 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Abigail::
# 236 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route110_EventScript_Abigail_2
# 242 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
	release_end

Route110_EventScript_Abigail_2:
# 238 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 239 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 247 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 248 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 249 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 250 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
	release_end


Route110_EventScript_Kelly::
# 255 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KELLY_1, Route110_Text_KellyIntro, Route110_Text_KellyDefeated, Route110_EventScript_KellyRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route110_EventScript_Kelly_2
# 261 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KellyPostBattle, MSGBOX_DEFAULT
	release_end

Route110_EventScript_Kelly_2:
# 257 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_KELLY_1, Route110_Text_KellyRematchIntro, Route110_Text_KellyRematchDefeated
# 258 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KellyRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_KellyRegisterMatchCallAfterBattle::
# 266 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 267 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 268 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KellyRegister, MSGBOX_DEFAULT
# 269 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_KELLY_1
	release_end


Route110_EventScript_Tristan::
# 274 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TRISTAN, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 275 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Unused::
	end


Route110_EventScript_Kaleb::
# 284 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 285 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Joseph::
# 290 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 291 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_Alyssa::
# 296 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 297 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_EventScript_CyclingChallengeEnd::
# 302 "data/maps/Route110/scripts.pory"
	lockall
# 303 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_StepFasterRight
# 304 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 305 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 306 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 307 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 308 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_CyclingChallengeEnd_3
# 309 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_CyclingChallengeEnd_4
# 310 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_CyclingChallengeEnd_4
# 311 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_CyclingChallengeEnd_4
# 312 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_CyclingChallengeEnd_5
# 313 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_CyclingChallengeEnd_5
# 314 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_CyclingChallengeEnd_5
# 315 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_CyclingChallengeEnd_6
# 316 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_CyclingChallengeEnd_6
# 317 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_CyclingChallengeEnd_6
# 318 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_CyclingChallengeEnd_7
Route110_EventScript_CyclingChallengeEnd_1:
# 320 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 321 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 322 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 323 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_CyclingChallengeEnd_3:
# 308 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
	goto Route110_EventScript_CyclingChallengeEnd_1

Route110_EventScript_CyclingChallengeEnd_4:
# 311 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
	goto Route110_EventScript_CyclingChallengeEnd_1

Route110_EventScript_CyclingChallengeEnd_5:
# 314 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
	goto Route110_EventScript_CyclingChallengeEnd_1

Route110_EventScript_CyclingChallengeEnd_6:
# 317 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
	goto Route110_EventScript_CyclingChallengeEnd_1

Route110_EventScript_CyclingChallengeEnd_7:
# 318 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
	goto Route110_EventScript_CyclingChallengeEnd_1


Route110_EventScript_RivalTrigger1::
# 328 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 329 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
	end


Route110_EventScript_RivalTrigger2::
# 334 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 335 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
	end


Route110_EventScript_RivalTrigger3::
# 340 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 341 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
	end


Route110_EventScript_RivalScene::
# 346 "data/maps/Route110/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route110_EventScript_RivalScene_2
# 350 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
Route110_EventScript_RivalScene_1:
# 352 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_StepFasterDown
# 353 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 354 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_ExclamationMark
# 355 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 356 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_Delay48
# 357 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 358 "data/maps/Route110/scripts.pory"
	delay 30
# 359 "data/maps/Route110/scripts.pory"
	switch VAR_0x8008
# 360 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_RivalScene_7
# 361 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_RivalScene_8
# 362 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_RivalScene_9
Route110_EventScript_RivalScene_5:
# 364 "data/maps/Route110/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/Route110/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route110_EventScript_RivalScene_11
# 368 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanBattle
Route110_EventScript_RivalScene_10:
# 370 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_RivalScene_2:
# 348 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto Route110_EventScript_RivalScene_1

Route110_EventScript_RivalScene_7:
# 360 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_EventScript_RivalScene_Movement_0
	goto Route110_EventScript_RivalScene_5

Route110_EventScript_RivalScene_8:
# 361 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Common_Movement_WalkDown
	goto Route110_EventScript_RivalScene_5

Route110_EventScript_RivalScene_9:
# 362 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL, Route110_EventScript_RivalScene_Movement_1
	goto Route110_EventScript_RivalScene_5

Route110_EventScript_RivalScene_11:
# 366 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayBattle
	goto Route110_EventScript_RivalScene_10


Route110_EventScript_MayBattle::
# 375 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 376 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 377 "data/maps/Route110/scripts.pory"
	case PC_CHOSE_TREECKO, Route110_EventScript_MayBattle_3
# 378 "data/maps/Route110/scripts.pory"
	case PC_CHOSE_TORCHIC, Route110_EventScript_MayBattle_4
# 379 "data/maps/Route110/scripts.pory"
	case PC_CHOSE_MUDKIP, Route110_EventScript_MayBattle_5
Route110_EventScript_MayBattle_1:
# 381 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 382 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 383 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 384 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
	end

Route110_EventScript_MayBattle_3:
# 377 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
	goto Route110_EventScript_MayBattle_1

Route110_EventScript_MayBattle_4:
# 378 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
	goto Route110_EventScript_MayBattle_1

Route110_EventScript_MayBattle_5:
# 379 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
	goto Route110_EventScript_MayBattle_1


Route110_EventScript_BrendanBattle::
# 389 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 390 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 391 "data/maps/Route110/scripts.pory"
	case PC_CHOSE_TREECKO, Route110_EventScript_BrendanBattle_3
# 392 "data/maps/Route110/scripts.pory"
	case PC_CHOSE_TORCHIC, Route110_EventScript_BrendanBattle_4
# 393 "data/maps/Route110/scripts.pory"
	case PC_CHOSE_MUDKIP, Route110_EventScript_BrendanBattle_5
Route110_EventScript_BrendanBattle_1:
# 395 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 396 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 397 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 398 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
	end

Route110_EventScript_BrendanBattle_3:
# 391 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
	goto Route110_EventScript_BrendanBattle_1

Route110_EventScript_BrendanBattle_4:
# 392 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
	goto Route110_EventScript_BrendanBattle_1

Route110_EventScript_BrendanBattle_5:
# 393 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
	goto Route110_EventScript_BrendanBattle_1


Route110_EventScript_RivalExit::
# 403 "data/maps/Route110/scripts.pory"
	closemessage
# 404 "data/maps/Route110/scripts.pory"
	switch VAR_0x8008
# 405 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_RivalExit_3
# 406 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_RivalExit_4
# 407 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_RivalExit_5
Route110_EventScript_RivalExit_1:
# 409 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 410 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE110_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 411 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL
# 412 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 413 "data/maps/Route110/scripts.pory"
	delay 45
# 414 "data/maps/Route110/scripts.pory"
	switch VAR_0x8008
# 415 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_RivalExit_8
# 416 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_RivalExit_8
# 417 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_RivalExit_9
Route110_EventScript_RivalExit_6:
# 419 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 420 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_RIVAL_ON_BIKE
# 421 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 422 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 423 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 424 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_RivalExit_3:
# 405 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 33, 55
	goto Route110_EventScript_RivalExit_1

Route110_EventScript_RivalExit_4:
# 406 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 34, 55
	goto Route110_EventScript_RivalExit_1

Route110_EventScript_RivalExit_5:
# 407 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_ROUTE110_RIVAL_ON_BIKE, 35, 55
	goto Route110_EventScript_RivalExit_1

Route110_EventScript_RivalExit_8:
# 416 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_EventScript_RivalExit_Movement_0
	goto Route110_EventScript_RivalExit_6

Route110_EventScript_RivalExit_9:
# 417 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_RIVAL_ON_BIKE, Route110_EventScript_RivalExit_Movement_1
	goto Route110_EventScript_RivalExit_6


Route110_EventScript_BirchScene1::
# 429 "data/maps/Route110/scripts.pory"
	lockall
# 430 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 431 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
	return


Route110_EventScript_BirchScene2::
# 435 "data/maps/Route110/scripts.pory"
	lockall
# 436 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 437 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
	return


Route110_EventScript_BirchScene3::
# 441 "data/maps/Route110/scripts.pory"
	lockall
# 442 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 443 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
	return


Route110_EventScript_BirchScene4::
# 447 "data/maps/Route110/scripts.pory"
	lockall
# 448 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 449 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
	return


Route110_EventScript_BirchScene::
# 453 "data/maps/Route110/scripts.pory"
	addobject LOCALID_ROUTE110_BIRCH
# 454 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_EventScript_BirchScene_Movement_0
# 455 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 456 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 457 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_ExclamationMark
# 458 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 459 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_Delay48
# 460 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 461 "data/maps/Route110/scripts.pory"
	switch VAR_0x8008
# 462 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BirchScene_3
# 463 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BirchScene_4
# 464 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_BirchScene_5
# 465 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_BirchScene_6
Route110_EventScript_BirchScene_1:
# 467 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 468 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 469 "data/maps/Route110/scripts.pory"
	closemessage
# 470 "data/maps/Route110/scripts.pory"
	delay 20
# 471 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_StepFasterLeft
# 472 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 473 "data/maps/Route110/scripts.pory"
	delay 10
# 474 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_StepFasterRight
# 475 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 476 "data/maps/Route110/scripts.pory"
	delay 20
# 477 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Common_Movement_StepFasterDown
# 478 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 479 "data/maps/Route110/scripts.pory"
	delay 30
# 480 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 481 "data/maps/Route110/scripts.pory"
	closemessage
# 482 "data/maps/Route110/scripts.pory"
	delay 30
# 483 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 484 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 485 "data/maps/Route110/scripts.pory"
	waitfanfare
# 486 "data/maps/Route110/scripts.pory"
	closemessage
# 487 "data/maps/Route110/scripts.pory"
	delay 30
# 488 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 489 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 490 "data/maps/Route110/scripts.pory"
	closemessage
# 491 "data/maps/Route110/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq Route110_EventScript_BirchScene_8
# 494 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_EventScript_BirchScene_Movement_6
Route110_EventScript_BirchScene_7:
# 496 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 497 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_ROUTE110_BIRCH
# 498 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 499 "data/maps/Route110/scripts.pory"
	releaseall
	end

Route110_EventScript_BirchScene_3:
# 462 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_EventScript_BirchScene_Movement_1
	goto Route110_EventScript_BirchScene_1

Route110_EventScript_BirchScene_4:
# 463 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_EventScript_BirchScene_Movement_2
	goto Route110_EventScript_BirchScene_1

Route110_EventScript_BirchScene_5:
# 464 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_EventScript_BirchScene_Movement_3
	goto Route110_EventScript_BirchScene_1

Route110_EventScript_BirchScene_6:
# 465 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_EventScript_BirchScene_Movement_4
	goto Route110_EventScript_BirchScene_1

Route110_EventScript_BirchScene_8:
# 492 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_ROUTE110_BIRCH, Route110_EventScript_BirchScene_Movement_5
	goto Route110_EventScript_BirchScene_7


# 360 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_Movement_0:
# 360 "data/maps/Route110/scripts.pory"
	walk_down
# 360 "data/maps/Route110/scripts.pory"
	walk_left
# 360 "data/maps/Route110/scripts.pory"
	step_faster_down
	step_end

# 362 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene_Movement_1:
# 362 "data/maps/Route110/scripts.pory"
	walk_down
# 362 "data/maps/Route110/scripts.pory"
	walk_right
# 362 "data/maps/Route110/scripts.pory"
	step_faster_down
	step_end

# 416 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_Movement_0:
# 416 "data/maps/Route110/scripts.pory"
	run_up
# 416 "data/maps/Route110/scripts.pory"
	run_up
# 416 "data/maps/Route110/scripts.pory"
	run_up
# 416 "data/maps/Route110/scripts.pory"
	run_up
# 416 "data/maps/Route110/scripts.pory"
	run_up
# 416 "data/maps/Route110/scripts.pory"
	run_up
# 416 "data/maps/Route110/scripts.pory"
	run_up
	step_end

# 417 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit_Movement_1:
# 417 "data/maps/Route110/scripts.pory"
	run_up
# 417 "data/maps/Route110/scripts.pory"
	run_up
# 417 "data/maps/Route110/scripts.pory"
	run_up
# 417 "data/maps/Route110/scripts.pory"
	run_up
# 417 "data/maps/Route110/scripts.pory"
	run_up
# 417 "data/maps/Route110/scripts.pory"
	run_up
# 417 "data/maps/Route110/scripts.pory"
	run_up
# 417 "data/maps/Route110/scripts.pory"
	run_down
	step_end

# 454 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_Movement_0:
# 454 "data/maps/Route110/scripts.pory"
	walk_down
# 454 "data/maps/Route110/scripts.pory"
	walk_down
# 454 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

# 462 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_Movement_1:
# 462 "data/maps/Route110/scripts.pory"
	walk_down
# 462 "data/maps/Route110/scripts.pory"
	walk_left
# 462 "data/maps/Route110/scripts.pory"
	walk_left
# 462 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

# 463 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_Movement_2:
# 463 "data/maps/Route110/scripts.pory"
	walk_down
# 463 "data/maps/Route110/scripts.pory"
	walk_left
# 463 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

# 464 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_Movement_3:
# 464 "data/maps/Route110/scripts.pory"
	walk_down
# 464 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

# 465 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_Movement_4:
# 465 "data/maps/Route110/scripts.pory"
	walk_down
# 465 "data/maps/Route110/scripts.pory"
	walk_right
# 465 "data/maps/Route110/scripts.pory"
	walk_down
	step_end

# 492 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_Movement_5:
# 492 "data/maps/Route110/scripts.pory"
	walk_up
# 492 "data/maps/Route110/scripts.pory"
	walk_up
# 492 "data/maps/Route110/scripts.pory"
	walk_right
# 492 "data/maps/Route110/scripts.pory"
	walk_up
# 492 "data/maps/Route110/scripts.pory"
	walk_up
# 492 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

# 494 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene_Movement_6:
# 494 "data/maps/Route110/scripts.pory"
	walk_up
# 494 "data/maps/Route110/scripts.pory"
	walk_up
# 494 "data/maps/Route110/scripts.pory"
	walk_up
# 494 "data/maps/Route110/scripts.pory"
	walk_up
# 494 "data/maps/Route110/scripts.pory"
	walk_up
	step_end

Route110_Text_WeCantTalkAboutAquaActivities::
# 503 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
	.string "We can't talk about them yet.$"

Route110_Text_KickUpARuckus::
# 508 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
	.string "kick up a ruckus!$"

Route110_Text_MyFirstJobInAqua::
# 513 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
	.string "TEAM AQUA. It's a little scary.$"

Route110_Text_AquaActionsBringSmiles::
# 518 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
	.string "smiles to people's faces!$"

Route110_Text_MayLetsBattle::
# 523 "data/maps/Route110/scripts.pory"
	.string "{SPEAKER NAME_MAY}Hi, {PLAYER}{KUN}, long time no see!\p"
	.string "While I was searching for other\n"
	.string "POKéMON, my POKéMON grew stronger.\p"
	.string "So…\n"
	.string "How about a little battle?$"

Route110_Text_MayDefeated::
# 533 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
	.string "You're better than I expected!$"

Route110_Text_MayTakeThis::
# 538 "data/maps/Route110/scripts.pory"
	.string "{SPEAKER NAME_MAY}{PLAYER}{KUN}, you've been busy\n"
	.string "training, too, haven't you?\p"
	.string "I think you deserve a reward!\n"
	.string "This is from me!$"

Route110_Text_MayExplainItemfinder::
# 546 "data/maps/Route110/scripts.pory"
	.string "{SPEAKER NAME_MAY}That's an ITEMFINDER.\p"
	.string "Try it out. If there is an item that's\n"
	.string "not visible, it emits a sound.\p"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
	.string "I know it's a little silly coming from\n"
	.string "me, but I think you should train a lot\l"
	.string "harder for the next time.$"

Route110_Text_BrendanLetsBattle::
# 559 "data/maps/Route110/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}Hey, {PLAYER}.\n"
	.string "So this is where you were.\l"
	.string "How's it going?\p"
	.string "Have you been raising your POKéMON?\n"
	.string "I'll check for you.$"

Route110_Text_BrendanDefeated::
# 568 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
	.string "You're pretty good.$"

Route110_Text_BrendanTakeThis::
# 573 "data/maps/Route110/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}{PLAYER}, you've trained\n"
	.string "without me noticing…\p"
	.string "Good enough!\n"
	.string "Here, take this.$"

Route110_Text_BrendanExplainItemfinder::
# 581 "data/maps/Route110/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}That's an ITEMFINDER.\p"
	.string "Use it to root around for items that\n"
	.string "aren't visible.\p"
	.string "If it senses something, it emits\n"
	.string "a sound.\p"
	.string "Anyway, I'm off to look for new\n"
	.string "POKéMON.$"

Route110_Text_RideBikeAtFullSpeed::
# 594 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
	.string "at full speed on CYCLING ROAD?$"

Route110_Text_HairStreamsBehindMe::
# 599 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
	.string "colored hair streams behind me?\p"
	.string "I grew my hair out just for that.$"

Route110_Text_YouGotBikeFromRydel::
# 606 "data/maps/Route110/scripts.pory"
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
# 631 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
	.string "A road each for people and POKéMON.\n"
	.string "Perhaps that is right and fair.$"

Route110_Text_WalkOnTheLowRoad::
# 638 "data/maps/Route110/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
	.string "a leisurely walk on the low road.$"

Route110_Text_BikeTechniques::
# 643 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
	.string "riding even more fun.\p"
	.string "There are some places that you can\n"
	.string "reach only by using a BIKE technique.\p"
	.string "Here's a TM that teaches a spinning\n"
	.string "technique for you and your POKéMON.$"

Route110_Text_GetRollin::
# 654 "data/maps/Route110/scripts.pory"
	.string "Why are you talking to me when you\n"
	.string "should be putting pedal to metal?$"

Route110_Text_WhichShouldIChoose::
# 659 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
	.string "Make a beeline for MAUVILLE on\n"
	.string "CYCLING ROAD, or take the low road\l"
	.string "and look for POKéMON?$"

Route110_Text_CyclingChallengeResultSummary::
# 667 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
	.string "… … {STR_VAR_1}!\p"
	.string "Total time:\n"
	.string "… … {STR_VAR_2}!$"

Route110_Text_ChallengeReactionBest::
# 675 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
	.string "Your love of cycling comes from deep\n"
	.string "within your heart.\l"
	.string "You've shaken me to my very soul!$"

Route110_Text_ChallengeReactionGood::
# 683 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
	.string "I suggest you speed up a bit while\n"
	.string "still avoiding collisions.$"

Route110_Text_ChallengeReactionOk::
# 690 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
	.string "progress.\p"
	.string "Still, I hope you don't forget the\n"
	.string "sheer pleasure of cycling.$"

Route110_Text_ChallengeReactionBad::
# 698 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
	.string "on terrifying.\p"
	.string "Most certainly, you need much more\n"
	.string "practice riding.$"

Route110_Text_ChallengeReactionWorst::
# 706 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
	.string "You're perhaps not cut out for this\n"
	.string "unfortunate cycling business.\p"
	.string "You ought to give serious thought to\n"
	.string "returning that BIKE to RYDEL.$"

Route110_Text_RatedForNumberOfCollisions::
# 716 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
	.string "If you were to ride from MAUVILLE to\n"
	.string "SLATEPORT on a MACH BIKE, you would\l"
	.string "be rated for the number of collisions\l"
	.string "and your total time.$"

Route110_Text_AlwaysAimHigher::
# 725 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
	.string "seeing more challenges from you.\l"
	.string "Always aim higher!$"

Route110_Text_AcroBikesDoNotQualify::
# 731 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
	.string "MACH BIKES are rated for their number\l"
	.string "of collisions and their total times.\p"
	.string "ACRO BIKES do not qualify for rating.\n"
	.string "They are easy to turn, so it's not fair.$"

Route110_Text_SlateportCitySign::
# 740 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
	.string "{DOWN_ARROW} SLATEPORT CITY$"

Route110_Text_CyclingRoadSign::
# 745 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"

Route110_Text_AquaWasHere::
# 749 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
	.string "Someone painted that onto this sign,\n"
	.string "but then someone else painted over it.\p"
	.string "“TEAM MAGMA rules!” is what it\n"
	.string "says now.$"

Route110_Text_Route103Sign::
# 759 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
	.string "{LEFT_ARROW} ROUTE 103$"

Route110_Text_SeasideParkingSign::
# 764 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"

Route110_Text_MauvilleCitySign::
# 768 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110\n"
	.string "{UP_ARROW} MAUVILLE CITY$"

Route110_Text_TrainerTipsPrlzSleep::
# 773 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "The foe can be made helpless by\n"
	.string "paralyzing it or causing it to sleep.\p"
	.string "It is an important technique for\n"
	.string "POKéMON battles.$"

Route110_Text_TrainerTipsRegisterItems::
# 783 "data/maps/Route110/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "The items in the BAG can be reorganized\n"
	.string "by pressing SELECT.$"

Route110_Text_TrickHouseSign::
# 790 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
	.string "to reach the wondrous TRICK HOUSE.”$"

Route110_Text_BestRecord::
# 795 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
	.string "No. of collisions: {STR_VAR_1}\p"
	.string "Elapsed time: {STR_VAR_2}$"

Route110_Text_ThereIsNoRecord::
# 803 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
	.string "No one seems to have taken the\n"
	.string "challenge. There is no record…$"

Route110_Text_ImagineSeeingYouHere::
# 810 "data/maps/Route110/scripts.pory"
	.string "{SPEAKER NAME_BIRCH}Oh, {PLAYER}{KUN}!\n"
	.string "Imagine seeing you here!\p"
	.string "And where might my {RIVAL} be?$"

Route110_Text_HeardYouInstallMatchCall::
# 817 "data/maps/Route110/scripts.pory"
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
# 834 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
	.string "in the POKéNAV.$"

Route110_Text_KeepAnEyeOutForRival::
# 839 "data/maps/Route110/scripts.pory"
	.string "{SPEAKER NAME_BIRCH}{PLAYER}{KUN}…\p"
	.string "Please keep an eye out for my {RIVAL}.\n"
	.string "… … … … … …\p"
	.string "Well, I had better get going.\n"
	.string "See you again, {PLAYER}{KUN}!$"
