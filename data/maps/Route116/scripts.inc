Route116_MapScripts::
# 2 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route116_MapScripts_MAP_SCRIPT_ON_LOAD
# 24 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route116_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route116_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/Route116/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	goto_if_eq Route116_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route116_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 9 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH
	goto_if_eq Route116_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 10 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH
	goto_if_eq Route116_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Route116_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	end

Route116_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_ROUTE116_WANDAS_BF, 38, 10
	goto Route116_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route116_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 7 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
	goto Route116_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route116_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 11 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_StartGroudonWeather
	goto Route116_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Route116_MapScripts_MAP_SCRIPT_ON_LOAD:
# 16 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH
	goto_if_eq Route116_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route116_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 19 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH
	goto_if_eq Route116_MapScripts_MAP_SCRIPT_ON_LOAD_5
Route116_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

Route116_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 17 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute116North
	goto Route116_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route116_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 20 "data/maps/Route116/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute116South
	goto Route116_MapScripts_MAP_SCRIPT_ON_LOAD_4

Route116_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 25 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0


Route116_EventScript_WandasBoyfriend::
# 30 "data/maps/Route116/scripts.pory"
	lock_faceplayer
# 31 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_WandasBoyfriend_2
# 34 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_WandasBoyfriend_3
# 38 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
Route116_EventScript_WandasBoyfriend_1:
	release_end

Route116_EventScript_WandasBoyfriend_2:
# 32 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
	goto Route116_EventScript_WandasBoyfriend_1

Route116_EventScript_WandasBoyfriend_3:
# 35 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
	goto Route116_EventScript_WandasBoyfriend_1


Route116_EventScript_DevonEmployee::
# 44 "data/maps/Route116/scripts.pory"
	lock_faceplayer
# 45 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_DevonEmployee_2
# 48 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
Route116_EventScript_DevonEmployee_1:
# 50 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
	end

Route116_EventScript_DevonEmployee_2:
# 46 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
	goto Route116_EventScript_DevonEmployee_1


Route116_EventScript_GiveRepeatBall::
# 55 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 56 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 57 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_EventScript_GiveRepeatBall_2
# 61 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
# 62 "data/maps/Route116/scripts.pory"
	closemessage
# 63 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq Route116_EventScript_GiveRepeatBall_5
# 66 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_EventScript_GiveRepeatBall_Movement_1
Route116_EventScript_GiveRepeatBall_4:
# 68 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 70 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 71 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
	release_end

Route116_EventScript_GiveRepeatBall_2:
# 58 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
	release_end

Route116_EventScript_GiveRepeatBall_5:
# 64 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_EventScript_GiveRepeatBall_Movement_0
	goto Route116_EventScript_GiveRepeatBall_4


Route116_EventScript_RouteSignRustboro::
# 76 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
	end


Route116_EventScript_RusturfTunnelSign::
# 81 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
	end


Route116_EventScript_TunnelersRestHouseSign::
# 86 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
	end


Route116_EventScript_TrainerTipsBToStopEvolution::
# 91 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
	end


Route116_EventScript_TrainerTipsBagHasPockets::
# 96 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
	end


Route116_EventScript_Briney::
# 101 "data/maps/Route116/scripts.pory"
	lock_faceplayer
# 102 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 103 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
	release_end


Route116_EventScript_BrineyTrigger::
# 108 "data/maps/Route116/scripts.pory"
	lockall
# 109 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_ROUTE116_BRINEY, Common_Movement_StepFasterRight
# 110 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 111 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 113 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 114 "data/maps/Route116/scripts.pory"
	releaseall
	end


Route116_EventScript_GlassesMan::
# 119 "data/maps/Route116/scripts.pory"
	lock_faceplayer
	checkitem ITEM_BLACK_GLASSES
# 0 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_EventScript_GlassesMan_2
	specialvar VAR_RESULT, FoundBlackGlasses
# 0 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_EventScript_GlassesMan_3
# 138 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
	release_end

Route116_EventScript_GlassesMan_2:
# 121 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 122 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses, MSGBOX_DEFAULT
	specialvar VAR_RESULT, FoundBlackGlasses
# 0 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_EventScript_GlassesMan_7
# 129 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
	release_end

Route116_EventScript_GlassesMan_3:
# 133 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
# 134 "data/maps/Route116/scripts.pory"
	closemessage
# 135 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
	end

Route116_EventScript_GlassesMan_7:
# 124 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
# 125 "data/maps/Route116/scripts.pory"
	closemessage
# 126 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
	end


Route116_EventScript_GlassesManExit::
# 143 "data/maps/Route116/scripts.pory"
	delay 20
# 144 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq Route116_EventScript_GlassesManExit_2
# 147 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_EventScript_GlassesManExit_Movement_1
Route116_EventScript_GlassesManExit_1:
# 149 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
	release_end

Route116_EventScript_GlassesManExit_2:
# 145 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_EventScript_GlassesManExit_Movement_0
	goto Route116_EventScript_GlassesManExit_1


Route116_EventScript_Joey::
# 154 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route116_Text_JoeyIntro, Route116_Text_JoeyDefeat
# 155 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Jose::
# 160 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOSE, Route116_Text_JoseIntro, Route116_Text_JoseDefeat
# 161 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Jerry::
# 166 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route116_Text_JerryIntro, Route116_Text_JerryDefeat, Route116_EventScript_TryRegisterJerryAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_EventScript_Jerry_2
# 172 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_JERRY_1
# 173 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_Jerry_6
Route116_EventScript_Jerry_4:
# 178 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
	release_end

Route116_EventScript_Jerry_2:
# 168 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 169 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
	end

Route116_EventScript_Jerry_5:
# 174 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
# 175 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
	release_end

Route116_EventScript_Jerry_6:
	specialvar VAR_RESULT, IsTrainerRegistered
# 0 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_EventScript_Jerry_5
	goto Route116_EventScript_Jerry_4


Route116_EventScript_TryRegisterJerryAfterBattle::
# 183 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_TryRegisterJerryAfterBattle_2
Route116_EventScript_TryRegisterJerryAfterBattle_1:
	release_end

Route116_EventScript_TryRegisterJerryAfterBattle_2:
# 184 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 185 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 186 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
# 187 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
	goto Route116_EventScript_TryRegisterJerryAfterBattle_1


Route116_EventScript_Clark::
# 193 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_CLARK, Route116_Text_ClarkIntro, Route116_Text_ClarkDefeat
# 194 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Janice::
# 199 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route116_Text_JaniceIntro, Route116_Text_JaniceDefeat
# 200 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Karen::
# 205 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_KAREN_1, Route116_Text_KarenIntro, Route116_Text_KarenDefeat, Route116_EventScript_TryRegisterKarenAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route116_EventScript_Karen_2
# 211 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_KAREN_1
# 212 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_Karen_6
Route116_EventScript_Karen_4:
# 217 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
	release_end

Route116_EventScript_Karen_2:
# 207 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 208 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
	end

Route116_EventScript_Karen_5:
# 213 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 214 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
	release_end

Route116_EventScript_Karen_6:
	specialvar VAR_RESULT, IsTrainerRegistered
# 0 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route116_EventScript_Karen_5
	goto Route116_EventScript_Karen_4


Route116_EventScript_TryRegisterKarenAfterBattle::
# 222 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_TryRegisterKarenAfterBattle_2
Route116_EventScript_TryRegisterKarenAfterBattle_1:
	release_end

Route116_EventScript_TryRegisterKarenAfterBattle_2:
# 223 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 224 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 226 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
	goto Route116_EventScript_TryRegisterKarenAfterBattle_1


Route116_EventScript_Sarah::
# 232 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route116_Text_SarahIntro, Route116_Text_SarahDefeat
# 233 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Dawson::
# 238 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
# 239 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Devan::
# 244 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
# 245 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
	end


Route116_EventScript_Johnson::
# 250 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
# 251 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
	end


# 64 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall_Movement_0:
# 64 "data/maps/Route116/scripts.pory"
	walk_down
# 64 "data/maps/Route116/scripts.pory"
	walk_left
# 64 "data/maps/Route116/scripts.pory"
	walk_left
# 64 "data/maps/Route116/scripts.pory"
	walk_left
# 64 "data/maps/Route116/scripts.pory"
	walk_left
# 64 "data/maps/Route116/scripts.pory"
	walk_left
# 64 "data/maps/Route116/scripts.pory"
	walk_left
# 64 "data/maps/Route116/scripts.pory"
	walk_left
# 64 "data/maps/Route116/scripts.pory"
	walk_left
# 64 "data/maps/Route116/scripts.pory"
	walk_left
	step_end

# 66 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall_Movement_1:
# 66 "data/maps/Route116/scripts.pory"
	walk_left
# 66 "data/maps/Route116/scripts.pory"
	walk_left
# 66 "data/maps/Route116/scripts.pory"
	walk_left
# 66 "data/maps/Route116/scripts.pory"
	walk_left
# 66 "data/maps/Route116/scripts.pory"
	walk_left
# 66 "data/maps/Route116/scripts.pory"
	walk_left
# 66 "data/maps/Route116/scripts.pory"
	walk_left
# 66 "data/maps/Route116/scripts.pory"
	walk_left
	step_end

# 145 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit_Movement_0:
# 145 "data/maps/Route116/scripts.pory"
	walk_up
# 145 "data/maps/Route116/scripts.pory"
	walk_left
# 145 "data/maps/Route116/scripts.pory"
	walk_left
# 145 "data/maps/Route116/scripts.pory"
	walk_left
# 145 "data/maps/Route116/scripts.pory"
	walk_left
# 145 "data/maps/Route116/scripts.pory"
	walk_left
# 145 "data/maps/Route116/scripts.pory"
	walk_left
# 145 "data/maps/Route116/scripts.pory"
	walk_left
# 145 "data/maps/Route116/scripts.pory"
	walk_left
# 145 "data/maps/Route116/scripts.pory"
	walk_left
	step_end

# 147 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit_Movement_1:
# 147 "data/maps/Route116/scripts.pory"
	walk_left
# 147 "data/maps/Route116/scripts.pory"
	walk_left
# 147 "data/maps/Route116/scripts.pory"
	walk_left
# 147 "data/maps/Route116/scripts.pory"
	walk_left
# 147 "data/maps/Route116/scripts.pory"
	walk_left
# 147 "data/maps/Route116/scripts.pory"
	walk_left
# 147 "data/maps/Route116/scripts.pory"
	walk_left
# 147 "data/maps/Route116/scripts.pory"
	walk_left
# 147 "data/maps/Route116/scripts.pory"
	walk_left
	step_end

Route116_Text_ScoundrelMadeOffWithPeeko::
# 255 "data/maps/Route116/scripts.pory"
	.string "Ohhh, what am I to do?\p"
	.string "We were on our walk, PEEKO and I, when\n"
	.string "we were jumped by an odd thug…\p"
	.string "The scoundrel made off with my\n"
	.string "darling PEEKO!\p"
	.string "Wrrrooooooaaaar! PEEKO!$"

Route116_Text_WantToDigTunnel::
# 267 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
	.string "I want to dig that tunnel!$"

Route116_Text_DiggingTunnelWhenGoonOrderedMeOut::
# 273 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\n"
	.string "What's going on?\p"
	.string "I was digging the tunnel without any\n"
	.string "tools when some goon ordered me out!\p"
	.string "That tunnel's filled with POKéMON\n"
	.string "that react badly to loud noises.\l"
	.string "They could cause an uproar.\p"
	.string "That's why we stopped using heavy\n"
	.string "equipment for tunneling…\p"
	.string "I'm worried that the goon will do\n"
	.string "something stupid and startle the\l"
	.string "POKéMON into an uproar.$"

Route116_Text_GoonHightailedItOutOfTunnel::
# 292 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
	.string "That goofy goon hightailed it out of\n"
	.string "the tunnel! I can go back to digging!$"

Route116_Text_ThankYouTokenOfAppreciation::
# 299 "data/maps/Route116/scripts.pory"
	.string "Oh! It's you!\p"
	.string "You're that person who not only helped\n"
	.string "me in PETALBURG WOODS, but also got\l"
	.string "back my stolen package and then even\l"
	.string "graciously delivered it to SLATEPORT!\p"
	.string "CAPT. STERN informed us that the\n"
	.string "package arrived, too!\p"
	.string "I thank you very, very much!\p"
	.string "Why, if I were a rain cloud, I would\n"
	.string "shower you with gratitude and hail\l"
	.string "you as a hero!\p"
	.string "For you, the most wonderful TRAINER,\n"
	.string "I bear good news!\p"
	.string "Recently, our company developed\n"
	.string "a new kind of POKé BALL.\p"
	.string "As a token of our appreciation, this\n"
	.string "is our gift to our wonderful TRAINER!$"

Route116_Text_NewBallAvailableAtMart::
# 326 "data/maps/Route116/scripts.pory"
	.string "Our new POKé BALL will be available\n"
	.string "at the POKéMON MART in RUSTBORO.\p"
	.string "Please do try it out!\n"
	.string "Thank you and bye-bye!$"

Route116_Text_BagIsJamPacked::
# 334 "data/maps/Route116/scripts.pory"
	.string "Your BAG is jam-packed.\n"
	.string "I can't give you this REPEAT BALL.$"

Route116_Text_TokenOfAppreciation::
# 339 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation for\n"
	.string "your delivering our package, I have\l"
	.string "a gift of a new kind of POKé BALL\l"
	.string "for our most wonderful TRAINER!$"

Route116_Text_CanYouHelpMeFindGlasses::
# 346 "data/maps/Route116/scripts.pory"
	.string "I dropped my glasses…\n"
	.string "Can you help me find them?$"

Route116_Text_MayISeeThoseGlasses::
# 351 "data/maps/Route116/scripts.pory"
	.string "Those glasses!\n"
	.string "May I see them for a second?$"

Route116_Text_NotWhatImLookingForMaybeTheyArentHere::
# 356 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
	.string "These are BLACKGLASSES.\l"
	.string "They're not what I'm looking for…\p"
	.string "Maybe my glasses aren't around\n"
	.string "here…$"

Route116_Text_CantFindGlassesNotHere::
# 365 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
	.string "I can't find my glasses anywhere…\l"
	.string "Maybe they're not around here…$"

Route116_Text_NotWhatImLookingFor::
# 371 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
	.string "These are BLACKGLASSES.\l"
	.string "They're not what I'm looking for…$"

Route116_Text_RouteSignRustboro::
# 377 "data/maps/Route116/scripts.pory"
	.string "ROUTE 116\n"
	.string "{LEFT_ARROW} RUSTBORO CITY$"

Route116_Text_RusturfTunnelSign::
# 382 "data/maps/Route116/scripts.pory"
	.string "RUSTURF TUNNEL\n"
	.string "“Linking RUSTBORO and VERDANTURF\p"
	.string "“The tunnel project has been\n"
	.string "canceled.”$"

Route116_Text_TunnelersRestHouse::
# 390 "data/maps/Route116/scripts.pory"
	.string "TUNNELER'S REST HOUSE$"

Route116_Text_TrainerTipsBToStopEvolution::
# 394 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "If you want to stop a POKéMON from\n"
	.string "evolving, press the B Button while it\l"
	.string "is trying to evolve.\l"
	.string "The startled POKéMON will stop.\p"
	.string "This is called an evolution cancel.$"

Route116_Text_TrainerTipsBagHasPockets::
# 405 "data/maps/Route116/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Your BAG has several POCKETS.\p"
	.string "Items you obtain are automatically\n"
	.string "placed in the appropriate POCKETS.\p"
	.string "No TRAINER can afford to be without\n"
	.string "a BAG of their own.$"
