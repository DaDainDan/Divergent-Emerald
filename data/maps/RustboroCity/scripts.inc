RustboroCity_MapScripts::
# 2 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 4 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 5 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 6 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 6
	goto_if_eq RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 8 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_0, 11
	goto_if_eq RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 11 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 12, 15
	goto RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 9 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_SCIENTIST, 11, 15
	goto RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

RustboroCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
	.2byte 0


RustboroCity_EventScript_ScientistAddMatchCall::
# 22 "data/maps/RustboroCity/scripts.pory"
	lockall
# 23 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 24 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 25 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 26 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 27 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 28 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_SCIENTIST
# 29 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, RustboroCity_EventScript_ScientistAddMatchCall_Movement_0
# 30 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 31 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 32 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_ExclamationMark
# 33 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 34 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_Delay48
# 35 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 36 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 37 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 38 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_StepDown
# 39 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 40 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 41 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 42 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 43 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_StepFasterLeft
# 44 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 45 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 46 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 47 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 48 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 49 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 50 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 51 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 52 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 53 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_StepFasterDown
# 54 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 55 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 56 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 57 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 58 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
	return


RustboroCity_EventScript_MatchCallTutorial::
# 62 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 63 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 64 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ne RustboroCity_EventScript_MatchCallTutorial_2
RustboroCity_EventScript_MatchCallTutorial_1:
# 70 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 71 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 72 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 73 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 74 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_SCIENTIST, Common_Movement_WalkUp
# 75 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 76 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 77 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_SCIENTIST
# 78 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 79 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 80 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 81 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_MatchCallTutorial_2:
# 65 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 66 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 67 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 68 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
	goto RustboroCity_EventScript_MatchCallTutorial_1


# 86 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 88 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 89 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 90 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 90 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 91 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 92 "data/maps/RustboroCity/scripts.pory"
	step_faster_up
# 93 "data/maps/RustboroCity/scripts.pory"
	delay_16
	step_end

RustboroCity_EventScript_FatMan::
# 97 "data/maps/RustboroCity/scripts.pory"
	lock_faceplayer
# 98 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatMan_2
# 102 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
	release_end

RustboroCity_EventScript_FatMan_2:
# 99 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
	release_end


RustboroCity_EventScript_DevonEmployee2::
# 107 "data/maps/RustboroCity/scripts.pory"
	lock_faceplayer
# 108 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
	release_end


RustboroCity_EventScript_Woman::
# 113 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
	end


RustboroCity_EventScript_Man1::
# 118 "data/maps/RustboroCity/scripts.pory"
	lock_faceplayer
# 119 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1_2
# 123 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
	release_end

RustboroCity_EventScript_Man1_2:
# 120 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
	release_end


RustboroCity_EventScript_Boy2::
# 128 "data/maps/RustboroCity/scripts.pory"
	lock_faceplayer
# 129 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2_2
# 133 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
	release_end

RustboroCity_EventScript_Boy2_2:
# 130 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
	release_end


RustboroCity_EventScript_Twin::
# 138 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
	end


RustboroCity_EventScript_NinjaBoy::
# 143 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
	end


RustboroCity_EventScript_TunnelSign::
# 148 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
	end


RustboroCity_EventScript_DevonCorpSign::
# 153 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
	end


RustboroCity_EventScript_GymSign::
# 158 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
	end


RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 164 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
	end


RustboroCity_EventScript_CitySign::
# 169 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
	end


RustboroCity_EventScript_TrainersSchoolSign::
# 174 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
	end


RustboroCity_EventScript_CuttersHouseSign::
# 179 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
	end


RustboroCity_EventScript_LittleBoy::
# 184 "data/maps/RustboroCity/scripts.pory"
	lock_faceplayer
# 185 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 186 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 187 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	release_end


RustboroCity_EventScript_LittleGirl::
# 192 "data/maps/RustboroCity/scripts.pory"
	lock_faceplayer
# 193 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 194 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 195 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	release_end


RustboroCity_EventScript_Man2::
# 200 "data/maps/RustboroCity/scripts.pory"
	lock_faceplayer
# 201 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
	release_end


RustboroCity_EventScript_StolenGoodsTrigger0::
# 206 "data/maps/RustboroCity/scripts.pory"
	lockall
# 207 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 208 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
	end


RustboroCity_EventScript_StolenGoodsTrigger1::
# 213 "data/maps/RustboroCity/scripts.pory"
	lockall
# 214 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 215 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
	end


RustboroCity_EventScript_StolenGoodsTrigger2::
# 220 "data/maps/RustboroCity/scripts.pory"
	lockall
# 221 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 222 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
	end


RustboroCity_EventScript_StolenGoodsTrigger3::
# 227 "data/maps/RustboroCity/scripts.pory"
	lockall
# 228 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 229 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
	end


RustboroCity_EventScript_StolenGoodsTrigger4::
# 234 "data/maps/RustboroCity/scripts.pory"
	lockall
# 235 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 236 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
	end


RustboroCity_EventScript_StolenGoodsScene::
# 241 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 14, 21
# 242 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_RUSTBORO_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 243 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 244 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 245 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 246 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_GRUNT
# 247 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 248 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_GRUNT, RustboroCity_EventScript_StolenGoodsScene_Movement_0
# 249 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 250 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_GRUNT
# 251 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_EventScript_StolenGoodsScene_Movement_1
# 252 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 253 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 254 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 255 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_EventScript_StolenGoodsScene_Movement_2
# 256 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 257 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 258 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 259 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_RUSTBORO_DEVON_EMPLOYEE, 30, 10
# 260 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 261 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 262 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 263 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 264 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 265 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 266 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 267 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 268 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 269 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 270 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end


RustboroCity_EventScript_ShadyCharacterTookOff::
# 276 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
	return


RustboroCity_EventScript_YouGotItThankYou::
# 282 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
	return


RustboroCity_EventScript_EmployeeApproachUp::
# 288 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_EventScript_EmployeeApproachUp_Movement_0
# 289 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeApproachLeft::
# 295 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_EventScript_EmployeeApproachLeft_Movement_0
# 296 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeApproachRight::
# 302 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_EventScript_EmployeeApproachLeft_Movement_0
# 303 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeApproachDown::
# 309 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_EventScript_EmployeeApproachDown_Movement_0
# 310 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 316 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, RustboroCity_EventScript_EmployeeApproachPlayerFar_Movement_0
# 317 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 318 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 319 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


# 324 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 326 "data/maps/RustboroCity/scripts.pory"
	sprint_right
# 326 "data/maps/RustboroCity/scripts.pory"
	sprint_right
# 327 "data/maps/RustboroCity/scripts.pory"
	run_right
# 327 "data/maps/RustboroCity/scripts.pory"
	run_right
# 327 "data/maps/RustboroCity/scripts.pory"
	run_right
# 327 "data/maps/RustboroCity/scripts.pory"
	run_right
# 328 "data/maps/RustboroCity/scripts.pory"
	run_up
# 328 "data/maps/RustboroCity/scripts.pory"
	run_up
# 328 "data/maps/RustboroCity/scripts.pory"
	run_up
# 328 "data/maps/RustboroCity/scripts.pory"
	run_up
# 328 "data/maps/RustboroCity/scripts.pory"
	run_up
# 328 "data/maps/RustboroCity/scripts.pory"
	run_up
# 328 "data/maps/RustboroCity/scripts.pory"
	run_up
# 328 "data/maps/RustboroCity/scripts.pory"
	run_up
# 328 "data/maps/RustboroCity/scripts.pory"
	run_up
# 328 "data/maps/RustboroCity/scripts.pory"
	run_up
# 328 "data/maps/RustboroCity/scripts.pory"
	run_up
	step_end

RustboroCity_EventScript_DevonEmployee1::
# 332 "data/maps/RustboroCity/scripts.pory"
	lock_faceplayer
# 333 "data/maps/RustboroCity/scripts.pory"
	goto_if_unset FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_DevonEmployee1_2
# 337 "data/maps/RustboroCity/scripts.pory"
	waitse
# 338 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 339 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end

RustboroCity_EventScript_DevonEmployee1_2:
# 334 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
	release_end


RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 344 "data/maps/RustboroCity/scripts.pory"
	lockall
# 345 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 346 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 351 "data/maps/RustboroCity/scripts.pory"
	lockall
# 352 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 353 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 358 "data/maps/RustboroCity/scripts.pory"
	lockall
# 359 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 360 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 365 "data/maps/RustboroCity/scripts.pory"
	lockall
# 366 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 367 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
	end


RustboroCity_EventScript_EmployeeAskToGetGoods::
# 372 "data/maps/RustboroCity/scripts.pory"
	switch VAR_TEMP_1
# 373 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EmployeeAskToGetGoods_3
# 374 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EmployeeAskToGetGoods_4
# 375 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EmployeeAskToGetGoods_5
# 376 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EmployeeAskToGetGoods_5
RustboroCity_EventScript_EmployeeAskToGetGoods_1:
# 378 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeAlert
# 379 "data/maps/RustboroCity/scripts.pory"
	switch VAR_TEMP_1
# 380 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_EmployeeAskToGetGoods_8
# 381 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_EmployeeAskToGetGoods_9
# 382 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_EmployeeAskToGetGoods_10
# 383 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_EmployeeAskToGetGoods_11
RustboroCity_EventScript_EmployeeAskToGetGoods_6:
# 388 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 389 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 390 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 391 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_RUSTBORO_DEVON_EMPLOYEE
# 392 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 393 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_EmployeeAskToGetGoods_3:
# 373 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_StepFasterUp
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_1

RustboroCity_EventScript_EmployeeAskToGetGoods_4:
# 374 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_StepFasterLeft
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_1

RustboroCity_EventScript_EmployeeAskToGetGoods_5:
# 376 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_StepFasterDown
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_1

RustboroCity_EventScript_EmployeeAskToGetGoods_8:
# 380 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_6

RustboroCity_EventScript_EmployeeAskToGetGoods_9:
# 381 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_6

RustboroCity_EventScript_EmployeeAskToGetGoods_10:
# 382 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_6

RustboroCity_EventScript_EmployeeAskToGetGoods_11:
# 384 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkDown
# 385 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 386 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto RustboroCity_EventScript_EmployeeAskToGetGoods_6


RustboroCity_EventScript_EmployeeAlert::
# 398 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 399 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 400 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 401 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 402 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_Delay48
# 403 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_ReturnGoodsTrigger0::
# 408 "data/maps/RustboroCity/scripts.pory"
	lockall
# 409 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 410 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoodsTrigger1::
# 415 "data/maps/RustboroCity/scripts.pory"
	lockall
# 416 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 417 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoodsTrigger2::
# 422 "data/maps/RustboroCity/scripts.pory"
	lockall
# 423 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 424 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoodsTrigger3::
# 429 "data/maps/RustboroCity/scripts.pory"
	lockall
# 430 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 431 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
	end


RustboroCity_EventScript_ReturnGoods::
# 436 "data/maps/RustboroCity/scripts.pory"
	switch VAR_TEMP_1
# 437 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_ReturnGoods_3
# 438 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_ReturnGoods_4
# 439 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_ReturnGoods_5
# 440 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_ReturnGoods_5
# 441 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_ReturnGoods_6
RustboroCity_EventScript_ReturnGoods_1:
# 443 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_EmployeeAlert
# 444 "data/maps/RustboroCity/scripts.pory"
	switch VAR_TEMP_1
# 445 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_ReturnGoods_9
# 446 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_ReturnGoods_10
# 447 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_ReturnGoods_11
# 448 "data/maps/RustboroCity/scripts.pory"
	case 3, RustboroCity_EventScript_ReturnGoods_12
RustboroCity_EventScript_ReturnGoods_7:
# 453 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 454 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
	giveitem ITEM_GREAT_BALL
# 0 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_EventScript_ReturnGoods_14
RustboroCity_EventScript_ReturnGoods_13:
# 458 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 459 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 460 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 461 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 462 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 463 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 464 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 465 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 466 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_ReturnGoods_3:
# 437 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_StepFasterUp
	goto RustboroCity_EventScript_ReturnGoods_1

RustboroCity_EventScript_ReturnGoods_4:
# 438 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_StepFasterRight
	goto RustboroCity_EventScript_ReturnGoods_1

RustboroCity_EventScript_ReturnGoods_5:
# 440 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_StepFasterDown
	goto RustboroCity_EventScript_ReturnGoods_1

RustboroCity_EventScript_ReturnGoods_6:
# 441 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_StepFasterLeft
	goto RustboroCity_EventScript_ReturnGoods_1

RustboroCity_EventScript_ReturnGoods_9:
# 445 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
	goto RustboroCity_EventScript_ReturnGoods_7

RustboroCity_EventScript_ReturnGoods_10:
# 446 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
	goto RustboroCity_EventScript_ReturnGoods_7

RustboroCity_EventScript_ReturnGoods_11:
# 447 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto RustboroCity_EventScript_ReturnGoods_7

RustboroCity_EventScript_ReturnGoods_12:
# 449 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_DEVON_EMPLOYEE, Common_Movement_WalkDown
# 450 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 451 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto RustboroCity_EventScript_ReturnGoods_7

RustboroCity_EventScript_ReturnGoods_14:
# 456 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
	goto RustboroCity_EventScript_ReturnGoods_13


RustboroCity_EventScript_Rival::
# 471 "data/maps/RustboroCity/scripts.pory"
	lockall
# 472 "data/maps/RustboroCity/scripts.pory"
	goto_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_Rival_2
RustboroCity_EventScript_Rival_1:
# 475 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_FacePlayer
# 476 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 477 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return

RustboroCity_EventScript_Rival_2:
# 473 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
	goto RustboroCity_EventScript_Rival_1


RustboroCity_EventScript_PlayRivalMusic::
	checkplayergender
# 0 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RustboroCity_EventScript_PlayRivalMusic_2
# 484 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
RustboroCity_EventScript_PlayRivalMusic_1:
	return

RustboroCity_EventScript_PlayRivalMusic_2:
# 482 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto RustboroCity_EventScript_PlayRivalMusic_1


RustboroCity_EventScript_RivalIntro::
# 490 "data/maps/RustboroCity/scripts.pory"
	lockall
# 491 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 492 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_StepFasterDown
# 493 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 494 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 495 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_ExclamationMark
# 496 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 497 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, Common_Movement_Delay48
# 498 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
	return


RustboroCity_EventScript_RivalTrigger0::
# 503 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalIntro
# 504 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger0_Movement_0
# 505 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 506 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 507 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 508 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger1::
# 512 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalIntro
# 513 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger1_Movement_0
# 514 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 515 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 516 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 517 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger2::
# 521 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalIntro
# 522 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger2_Movement_0
# 523 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 524 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 525 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 526 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger3::
# 530 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalIntro
# 531 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger3_Movement_0
# 532 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 533 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 534 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger4::
# 539 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalIntro
# 540 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger4_Movement_0
# 541 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 543 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger5::
# 548 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalIntro
# 549 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger5_Movement_0
# 550 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 552 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 553 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger6::
# 557 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalIntro
# 558 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger6_Movement_0
# 559 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 560 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 561 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 562 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalTrigger7::
# 566 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RivalIntro
# 567 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RUSTBORO_RIVAL, RustboroCity_EventScript_RivalTrigger7_Movement_0
# 568 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 569 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 570 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 571 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
	return


RustboroCity_EventScript_RivalEncounter::
	checkplayergender
# 0 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq RustboroCity_EventScript_RivalEncounter_2
# 578 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanEncounter
RustboroCity_EventScript_RivalEncounter_1:
	end

RustboroCity_EventScript_RivalEncounter_2:
# 576 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayEncounter
	goto RustboroCity_EventScript_RivalEncounter_1


RustboroCity_EventScript_MayEncounter::
# 584 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayEncounter_2
RustboroCity_EventScript_MayEncounter_1:
# 587 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayEncounter_5
# 597 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 598 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 599 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 600 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 601 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 602 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 603 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 604 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 605 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 606 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 607 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 608 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 609 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 610 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 611 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_MayEncounter_8
RustboroCity_EventScript_MayEncounter_7:
# 614 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 615 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 616 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_MayEncounter_2:
# 585 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
	goto RustboroCity_EventScript_MayEncounter_1

RustboroCity_EventScript_MayEncounter_5:
# 588 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 589 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 590 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_MayEncounter_11
RustboroCity_EventScript_MayEncounter_10:
# 593 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 594 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_MayEncounter_8:
# 612 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMay
	goto RustboroCity_EventScript_MayEncounter_7

RustboroCity_EventScript_MayEncounter_11:
# 591 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleMay
	goto RustboroCity_EventScript_MayEncounter_10


RustboroCity_EventScript_BattleMay::
# 621 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 622 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 623 "data/maps/RustboroCity/scripts.pory"
	case CHOSE_TREECKO, RustboroCity_EventScript_BattleMay_3
# 624 "data/maps/RustboroCity/scripts.pory"
	case CHOSE_TORCHIC, RustboroCity_EventScript_BattleMay_4
# 625 "data/maps/RustboroCity/scripts.pory"
	case CHOSE_MUDKIP, RustboroCity_EventScript_BattleMay_5
RustboroCity_EventScript_BattleMay_1:
# 627 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 628 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
	end

RustboroCity_EventScript_BattleMay_3:
# 623 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
	goto RustboroCity_EventScript_BattleMay_1

RustboroCity_EventScript_BattleMay_4:
# 624 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
	goto RustboroCity_EventScript_BattleMay_1

RustboroCity_EventScript_BattleMay_5:
# 625 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
	goto RustboroCity_EventScript_BattleMay_1


RustboroCity_EventScript_MayBrineyHint::
# 633 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 634 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq RustboroCity_EventScript_MayBrineyHint_2
RustboroCity_EventScript_MayBrineyHint_1:
# 637 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_MayBrineyHint_2:
# 635 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
	goto RustboroCity_EventScript_MayBrineyHint_1


RustboroCity_EventScript_RestoreBgm::
# 642 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 643 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
	return


RustboroCity_EventScript_BrendanEncounter::
# 648 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanEncounter_2
RustboroCity_EventScript_BrendanEncounter_1:
# 651 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanEncounter_5
# 660 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 661 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 662 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 663 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 664 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 665 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 666 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 667 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 668 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 669 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 670 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 671 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 672 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 673 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_BrendanEncounter_8
RustboroCity_EventScript_BrendanEncounter_7:
# 676 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 677 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 678 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_BrendanEncounter_2:
# 649 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
	goto RustboroCity_EventScript_BrendanEncounter_1

RustboroCity_EventScript_BrendanEncounter_5:
# 652 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 653 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_EventScript_BrendanEncounter_11
RustboroCity_EventScript_BrendanEncounter_10:
# 656 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 657 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_BrendanEncounter_8:
# 674 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendan
	goto RustboroCity_EventScript_BrendanEncounter_7

RustboroCity_EventScript_BrendanEncounter_11:
# 654 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BattleBrendan
	goto RustboroCity_EventScript_BrendanEncounter_10


RustboroCity_EventScript_BattleBrendan::
# 683 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 684 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 685 "data/maps/RustboroCity/scripts.pory"
	case CHOSE_TREECKO, RustboroCity_EventScript_BattleBrendan_3
# 686 "data/maps/RustboroCity/scripts.pory"
	case CHOSE_TORCHIC, RustboroCity_EventScript_BattleBrendan_4
# 687 "data/maps/RustboroCity/scripts.pory"
	case CHOSE_MUDKIP, RustboroCity_EventScript_BattleBrendan_5
RustboroCity_EventScript_BattleBrendan_1:
# 689 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 690 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
	end

RustboroCity_EventScript_BattleBrendan_3:
# 685 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
	goto RustboroCity_EventScript_BattleBrendan_1

RustboroCity_EventScript_BattleBrendan_4:
# 686 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
	goto RustboroCity_EventScript_BattleBrendan_1

RustboroCity_EventScript_BattleBrendan_5:
# 687 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
	goto RustboroCity_EventScript_BattleBrendan_1


RustboroCity_EventScript_BrendanBrineyHint::
# 695 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 696 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq RustboroCity_EventScript_BrendanBrineyHint_2
RustboroCity_EventScript_BrendanBrineyHint_1:
# 699 "data/maps/RustboroCity/scripts.pory"
	releaseall
	end

RustboroCity_EventScript_BrendanBrineyHint_2:
# 697 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
	goto RustboroCity_EventScript_BrendanBrineyHint_1


RustboroCity_EventScript_Boy1::
# 704 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
	end


# 29 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall_Movement_0:
# 29 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 29 "data/maps/RustboroCity/scripts.pory"
	delay_16
	step_end

# 248 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene_Movement_0:
# 248 "data/maps/RustboroCity/scripts.pory"
	sprint_right
# 248 "data/maps/RustboroCity/scripts.pory"
	sprint_right
# 248 "data/maps/RustboroCity/scripts.pory"
	run_right
# 248 "data/maps/RustboroCity/scripts.pory"
	run_right
# 248 "data/maps/RustboroCity/scripts.pory"
	run_right
# 248 "data/maps/RustboroCity/scripts.pory"
	run_right
# 248 "data/maps/RustboroCity/scripts.pory"
	run_right
# 248 "data/maps/RustboroCity/scripts.pory"
	run_up
# 248 "data/maps/RustboroCity/scripts.pory"
	run_up
# 248 "data/maps/RustboroCity/scripts.pory"
	run_up
# 248 "data/maps/RustboroCity/scripts.pory"
	run_up
# 248 "data/maps/RustboroCity/scripts.pory"
	run_up
# 248 "data/maps/RustboroCity/scripts.pory"
	run_up
# 248 "data/maps/RustboroCity/scripts.pory"
	run_up
# 248 "data/maps/RustboroCity/scripts.pory"
	run_up
# 248 "data/maps/RustboroCity/scripts.pory"
	run_up
	step_end

# 251 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene_Movement_1:
# 251 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 251 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 251 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 251 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 251 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 251 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 251 "data/maps/RustboroCity/scripts.pory"
	step_faster_up
	step_end

# 255 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene_Movement_2:
# 255 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 255 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 255 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 255 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 255 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 255 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 255 "data/maps/RustboroCity/scripts.pory"
	walk_up
	step_end

# 288 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp_Movement_0:
# 288 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 288 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 288 "data/maps/RustboroCity/scripts.pory"
	walk_right
	step_end

# 295 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft_Movement_0:
# 295 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 295 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 295 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 295 "data/maps/RustboroCity/scripts.pory"
	walk_right
	step_end

# 309 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown_Movement_0:
# 309 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 309 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 309 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 309 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 309 "data/maps/RustboroCity/scripts.pory"
	walk_right
	step_end

# 316 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar_Movement_0:
# 316 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 316 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 316 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 316 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 316 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 316 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 316 "data/maps/RustboroCity/scripts.pory"
	step_faster_down
	step_end

# 504 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0_Movement_0:
# 504 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 504 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 504 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 504 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 504 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 504 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 513 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1_Movement_0:
# 513 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 513 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 513 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 513 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 513 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 522 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2_Movement_0:
# 522 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 522 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 522 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 522 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 531 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3_Movement_0:
# 531 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 531 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 531 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 540 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4_Movement_0:
# 540 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 540 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 549 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5_Movement_0:
# 549 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 549 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 549 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 558 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6_Movement_0:
# 558 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 558 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 558 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 558 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

# 567 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7_Movement_0:
# 567 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 567 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 567 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 567 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 567 "data/maps/RustboroCity/scripts.pory"
	walk_down
	step_end

RustboroCity_Text_WeShortenItToDevon::
# 708 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
	.string "We all just shorten it to DEVON.\p"
	.string "That company makes all sorts of\n"
	.string "convenient products.$"

RustboroCity_Text_SneakyLookingManWentAroundCorner::
# 716 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
	.string "Come to think of it, yes, a shady-\n"
	.string "looking guy went around the corner.$"

RustboroCity_Text_HaveYouChallengedGym::
# 723 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
	.string "challenge?\p"
	.string "When you get that shiny GYM BADGE\n"
	.string "in hand, I guess TRAINERS begin to\l"
	.string "realize what is required of them.$"

RustboroCity_Text_HeyThatsRustborosGymBadge::
# 732 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
	.string "Out of all the POKéMON GYM BADGES,\n"
	.string "RUSTBORO's is the coolest, I'd say.$"

RustboroCity_Text_YoureNewAroundHere::
# 739 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
	.string "You're a new face around these parts.\p"
	.string "Have you just transferred into the\n"
	.string "POKéMON TRAINER'S SCHOOL?$"

RustboroCity_Text_GymLeaderIsntEasyWithFire::
# 747 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
	.string "It's not going to be easy winning with\n"
	.string "my FIRE-type POKéMON…\p"
	.string "FIRE-type POKéMON don't match up\n"
	.string "well against ROCK-type POKéMON…$"

RustboroCity_Text_MrBrineyWalksInTheTunnel::
# 757 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
	.string "a cottage by the sea.\p"
	.string "He goes for walks in the tunnel every\n"
	.string "so often.$"

RustboroCity_Text_MrBrineyLovesPeeko::
# 765 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
	.string "a cottage by the sea.\p"
	.string "He said he was going shopping in\n"
	.string "SLATEPORT for his pet, PEEKO.\p"
	.string "That old sea dog, he must really love\n"
	.string "that PEEKO.$"

RustboroCity_Text_WowYouHavePokemon::
# 776 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
	.string "When I get bigger, I'm going to go\n"
	.string "places with POKéMON, too.$"

RustboroCity_Text_CatchRarePokemonIfIGoToSchool::
# 783 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
	.string "If I go to this school, will I be able\n"
	.string "to catch rare POKéMON easily?$"

RustboroCity_Text_PokemonCanChangeLookFromExp::
# 790 "data/maps/RustboroCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
	.string "battles, it can sometimes change in\l"
	.string "the way it looks.$"

RustboroCity_Text_PokemonChangeShape::
# 796 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
	.string "If one did that, I would be shocked!$"

RustboroCity_Text_TradePokemonGrowFast::
# 801 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
	.string "someone grows fast.\p"
	.string "But if you don't have certain GYM\n"
	.string "BADGES, it may not obey you…$"

RustboroCity_Text_OutOfTheWay::
# 809 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
	.string "Out of the way!$"

RustboroCity_Text_WaitDontTakeMyGoods::
# 814 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
	.string "Don't take my GOODS!$"

RustboroCity_Text_HelpMeIWasRobbed::
# 820 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
	.string "You're that fantastic TRAINER who\n"
	.string "helped me in PETALBURG WOODS!\p"
	.string "Help me! I was robbed by TEAM AQUA!\n"
	.string "I have to get the DEVON GOODS back!\p"
	.string "If I don't…\n"
	.string "I'm going to be in serious trouble.$"

RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel::
# 833 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
	.string "off towards the tunnel over there.$"

RustboroCity_Text_YouGotItThankYou::
# 838 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
	.string "The DEVON GOODS?\p"
	.string "You did!\n"
	.string "You got them back!\p"
	.string "You really are a great TRAINER!\p"
	.string "I know! As my thanks, I'll give you\n"
	.string "another GREAT BALL!$"

RustboroCity_Text_YoureLoadedWithItems::
# 851 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
	.string "I can't give you this GREAT BALL.$"

RustboroCity_Text_PleaseComeWithMe::
# 856 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
	.string "Please come with me!$"

RustboroCity_Text_MayHiLetsRegister::
# 861 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
	.string "You had a MATCH CALL feature put\n"
	.string "on your POKéNAV!\p"
	.string "Let's register each other so we can\n"
	.string "contact one another anytime!\p"
	.string "… … … … … …$"

RustboroCity_Text_RegisteredMay::
# 873 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
	.string "in the POKéNAV.$"

RustboroCity_Text_MayPassedBrineyWantToBattle::
# 878 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
	.string "I guess he's on his way home to his\n"
	.string "cottage by the sea.\p"
	.string "How's your POKéDEX coming along,\n"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
	.string "So…\n"
	.string "How about a little battle?$"

RustboroCity_Text_MayOhHaventRaisedPokemonEnough::
# 892 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
	.string "Haven't you caught or raised your\n"
	.string "POKéMON very much?\p"
	.string "That's not very good for a TRAINER!$"

RustboroCity_Text_MayWantToBattle::
# 901 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
	.string "How about a little battle here?$"

RustboroCity_Text_MayImNotGoingToLose::
# 906 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"

RustboroCity_Text_MayDefeat::
# 911 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
	.string "You're better than I expected!$"

RustboroCity_Text_MayMrBrineyHint::
# 916 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
	.string "I just passed…\p"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
	.string "might not know this, but MR. BRINEY\l"
	.string "was once a revered seafarer.$"

RustboroCity_Text_BrendanHiLetsRegister::
# 925 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
	.string "You had a MATCH CALL feature put\n"
	.string "on your POKéNAV! Cool!\p"
	.string "Let's register each other so we can\n"
	.string "get in touch anytime!\p"
	.string "… … … … … …$"

RustboroCity_Text_RegisteredBrendan::
# 937 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
	.string "in the POKéNAV.$"

RustboroCity_Text_BrendanPassedBrineyWantToBattle::
# 942 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
	.string "I bet he was on his way home to his\n"
	.string "cottage by the sea.\p"
	.string "{PLAYER}, how's your POKéDEX?\n"
	.string "Have you filled in any pages yet?\p"
	.string "Mine rules.\p"
	.string "Want to have a battle to test how\n"
	.string "far you've progressed?$"

RustboroCity_Text_BrendanNoConfidenceInPokemon::
# 958 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
	.string "any confidence in your POKéMON?$"

RustboroCity_Text_BrendanWantToBattle::
# 963 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
	.string "Want to have a battle with me?$"

RustboroCity_Text_BrendanIWontGoEasy::
# 968 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
	.string "a TRAINER, but I won't go easy!$"

RustboroCity_Text_BrendanDefeat::
# 973 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
	.string "You're pretty good.$"

RustboroCity_Text_BrendanMrBrineyHint::
# 978 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
	.string "MR. BRINEY? The guy I just passed?\p"
	.string "I bet you didn't know this, since you\n"
	.string "just moved here, {PLAYER}, but\l"
	.string "MR. BRINEY was once a great sailor.$"

RustboroCity_Text_TunnelNearingCompletion::
# 987 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
	.string "completion!”\p"
	.string "…Is what it says on the sign, but\n"
	.string "there's also a big “X” splashed\l"
	.string "across it in red paint…$"

RustboroCity_Text_DevonCorpSign::
# 996 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
	.string "“For all your living needs, we make\n"
	.string "it all.”$"

RustboroCity_Text_GymSign::
# 1003 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
	.string "LEADER: ROXANNE\p"
	.string "“The ROCK-loving honors student!”$"

RustboroCity_Text_DevonCorpBranchOfficeSign::
# 1010 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
	.string "“Access limited to DEVON employees\n"
	.string "and authorized personnel.”$"

RustboroCity_Text_CitySign::
# 1017 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
	.string "“The city probing the integration of\n"
	.string "nature and science.”$"

RustboroCity_Text_TrainersSchoolSign::
# 1024 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
	.string "“We'll teach you anything about\n"
	.string "POKéMON!”$"

RustboroCity_Text_CuttersHouse::
# 1031 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"

RustboroCity_Text_DevelopedNewPokenavFeature::
# 1035 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
	.string "for the POKéNAV…\p"
	.string "And it turned out great!\p"
	.string "{PLAYER}, may I see that POKéNAV?\n"
	.string "The one our PRESIDENT gave you?$"

RustboroCity_Text_AddedMatchCallPleaseCallMrStone::
# 1045 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
	.string "I added a new feature named\n"
	.string "MATCH CALL to your POKéNAV.\p"
	.string "Using the MATCH CALL feature,\n"
	.string "you can chat with people who have\l"
	.string "been registered in your POKéNAV.\p"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
	.string "be registered in your POKéNAV.\p"
	.string "Test it out.\n"
	.string "Please give our PRESIDENT a call.$"

RustboroCity_Text_PleaseSelectPokenav::
# 1062 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"

RustboroCity_Text_IdBetterGetBackToWork::
# 1066 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
	.string "Please take care, {PLAYER}!$"

RustboroCity_Text_YouCanHave2On2Battle::
# 1071 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
	.string "You can have a 2-on-2 battle even\n"
	.string "if you're not with another TRAINER.\p"
	.string "If you catch the eyes of two TRAINERS\n"
	.string "when you have two or more POKéMON,\l"
	.string "they'll both challenge you.\p"
	.string "Don't you think it'd be cool if you\n"
	.string "could beat two TRAINERS by yourself?$"
