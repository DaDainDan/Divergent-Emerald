Route118_MapScripts::
# 2 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route118_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 12 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route118_MapScripts_MAP_SCRIPT_ON_LOAD
# 21 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route118_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route118_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route118/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 4 "data/maps/Route118/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	goto_if_eq Route118_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route118_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/Route118/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST
	goto_if_eq Route118_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 7 "data/maps/Route118/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST
	goto_if_eq Route118_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route118_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

Route118_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/Route118/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
	goto Route118_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route118_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 8 "data/maps/Route118/scripts.pory"
	call AbnormalWeather_StartGroudonWeather
	goto Route118_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route118_MapScripts_MAP_SCRIPT_ON_LOAD:
# 13 "data/maps/Route118/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST
	goto_if_eq Route118_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route118_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 16 "data/maps/Route118/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST
	goto_if_eq Route118_MapScripts_MAP_SCRIPT_ON_LOAD_5
Route118_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

Route118_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 14 "data/maps/Route118/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute118East
	goto Route118_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route118_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 17 "data/maps/Route118/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute118West
	goto Route118_MapScripts_MAP_SCRIPT_ON_LOAD_4

Route118_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 22 "data/maps/Route118/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0


Route118_EventScript_GoodRodFisherman::
# 27 "data/maps/Route118/scripts.pory"
	lock_faceplayer
# 28 "data/maps/Route118/scripts.pory"
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Route118_EventScript_GoodRodFisherman_2
# 32 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_YouAgreeGoodRodIsGood, MSGBOX_YESNO
# 33 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route118_EventScript_GoodRodFisherman_5
# 41 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DontYouLikeToFish, MSGBOX_DEFAULT
Route118_EventScript_GoodRodFisherman_4:
	release_end

Route118_EventScript_GoodRodFisherman_2:
# 29 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
	release_end

Route118_EventScript_GoodRodFisherman_5:
# 34 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_GOOD_ROD
# 0 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route118_EventScript_GoodRodFisherman_9
Route118_EventScript_GoodRodFisherman_8:
# 38 "data/maps/Route118/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 39 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_DEFAULT
	goto Route118_EventScript_GoodRodFisherman_4

Route118_EventScript_GoodRodFisherman_9:
# 36 "data/maps/Route118/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route118_EventScript_GoodRodFisherman_8


Route118_EventScript_Girl::
# 47 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
	end


Route118_EventScript_RouteSignMauville::
# 52 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
	end


Route118_EventScript_RouteSign119::
# 57 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
	end


Route118_EventScript_StevenTrigger0::
# 62 "data/maps/Route118/scripts.pory"
	lockall
# 63 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 0
# 64 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 65 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Common_Movement_WalkLeft
# 67 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
	end


Route118_EventScript_StevenTrigger1::
# 73 "data/maps/Route118/scripts.pory"
	lockall
# 74 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 1
# 75 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 76 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
	end


Route118_EventScript_StevenTrigger2::
# 82 "data/maps/Route118/scripts.pory"
	lockall
# 83 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 2
# 84 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 85 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Common_Movement_WalkRight
# 87 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
	end


Route118_EventScript_StevenTrigger::
# 93 "data/maps/Route118/scripts.pory"
	playse SE_LEDGE
# 94 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Route118_EventScript_StevenTrigger_Movement_0
# 95 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route118/scripts.pory"
	delay 30
# 97 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_StevenQuestions, MSGBOX_DEFAULT
# 98 "data/maps/Route118/scripts.pory"
	closemessage
# 99 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_PLAYER, Route118_EventScript_StevenTrigger_Movement_1
# 100 "data/maps/Route118/scripts.pory"
	switch VAR_0x8008
# 101 "data/maps/Route118/scripts.pory"
	case 0, Route118_EventScript_StevenTrigger_3
# 102 "data/maps/Route118/scripts.pory"
	case 1, Route118_EventScript_StevenTrigger_4
# 103 "data/maps/Route118/scripts.pory"
	case 2, Route118_EventScript_StevenTrigger_5
Route118_EventScript_StevenTrigger_1:
# 105 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route118/scripts.pory"
	setvar VAR_ROUTE118_STATE, 1
# 107 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_ROUTE118_STEVEN
# 108 "data/maps/Route118/scripts.pory"
	releaseall
	end

Route118_EventScript_StevenTrigger_3:
# 101 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Route118_EventScript_StevenTrigger_Movement_2
	goto Route118_EventScript_StevenTrigger_1

Route118_EventScript_StevenTrigger_4:
# 102 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Route118_EventScript_StevenTrigger_Movement_3
	goto Route118_EventScript_StevenTrigger_1

Route118_EventScript_StevenTrigger_5:
# 103 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_ROUTE118_STEVEN, Route118_EventScript_StevenTrigger_Movement_4
	goto Route118_EventScript_StevenTrigger_1


Route118_EventScript_Rose::
# 113 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route118_EventScript_Rose_2
# 119 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
	release_end

Route118_EventScript_Rose_2:
# 115 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
# 116 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
	end


Route118_EventScript_RegisterRose::
# 124 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 125 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 126 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
# 127 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_ROSE_1
	release_end


Route118_EventScript_Barny::
# 132 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
# 133 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
	end


Route118_EventScript_Wade::
# 138 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
# 139 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
	end


Route118_EventScript_Dalton::
# 144 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route118_EventScript_Dalton_2
# 150 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
	release_end

Route118_EventScript_Dalton_2:
# 146 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 147 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
	end


Route118_EventScript_RegisterDalton::
# 155 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 156 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 157 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 158 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
	release_end


Route118_EventScript_Perry::
# 163 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
# 164 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
	end


Route118_EventScript_Chester::
# 169 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat
# 170 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
	end


Route118_EventScript_Deandre::
# 175 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
# 176 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
	end


# 94 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger_Movement_0:
# 94 "data/maps/Route118/scripts.pory"
	jump_2_down
# 94 "data/maps/Route118/scripts.pory"
	delay_16
# 94 "data/maps/Route118/scripts.pory"
	walk_down
	step_end

# 99 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger_Movement_1:
# 99 "data/maps/Route118/scripts.pory"
	delay_16
# 99 "data/maps/Route118/scripts.pory"
	step_faster_right
	step_end

# 101 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger_Movement_2:
# 101 "data/maps/Route118/scripts.pory"
	walk_right
# 101 "data/maps/Route118/scripts.pory"
	walk_right
# 101 "data/maps/Route118/scripts.pory"
	walk_right
# 101 "data/maps/Route118/scripts.pory"
	walk_right
# 101 "data/maps/Route118/scripts.pory"
	walk_right
# 101 "data/maps/Route118/scripts.pory"
	walk_right
# 101 "data/maps/Route118/scripts.pory"
	walk_right
# 101 "data/maps/Route118/scripts.pory"
	walk_right
# 101 "data/maps/Route118/scripts.pory"
	walk_right
# 101 "data/maps/Route118/scripts.pory"
	walk_right
	step_end

# 102 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger_Movement_3:
# 102 "data/maps/Route118/scripts.pory"
	walk_right
# 102 "data/maps/Route118/scripts.pory"
	walk_right
# 102 "data/maps/Route118/scripts.pory"
	walk_right
# 102 "data/maps/Route118/scripts.pory"
	walk_right
# 102 "data/maps/Route118/scripts.pory"
	walk_right
# 102 "data/maps/Route118/scripts.pory"
	walk_right
# 102 "data/maps/Route118/scripts.pory"
	walk_right
# 102 "data/maps/Route118/scripts.pory"
	walk_right
# 102 "data/maps/Route118/scripts.pory"
	walk_right
	step_end

# 103 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger_Movement_4:
# 103 "data/maps/Route118/scripts.pory"
	walk_right
# 103 "data/maps/Route118/scripts.pory"
	walk_right
# 103 "data/maps/Route118/scripts.pory"
	walk_right
# 103 "data/maps/Route118/scripts.pory"
	walk_right
# 103 "data/maps/Route118/scripts.pory"
	walk_right
# 103 "data/maps/Route118/scripts.pory"
	walk_right
# 103 "data/maps/Route118/scripts.pory"
	walk_right
# 103 "data/maps/Route118/scripts.pory"
	walk_right
	step_end

Route118_Text_StevenQuestions::
# 180 "data/maps/Route118/scripts.pory"
	.string "STEVEN: Hi, {PLAYER}{KUN}!\p"
	.string "It's me, STEVEN!\n"
	.string "We met in the cave near DEWFORD.\p"
	.string "Have you met many kinds of POKéMON\n"
	.string "since I last saw you?\p"
	.string "There are many, many kinds of POKéMON\n"
	.string "in this wide world of ours.\p"
	.string "If you wanted to raise only your\n"
	.string "favorites, that's fine.\p"
	.string "Perhaps you find it more fun to raise\n"
	.string "all sorts of POKéMON.\p"
	.string "As a TRAINER of POKéMON,\n"
	.string "what do you think?\p"
	.string "Of course, it's not any of my business.\p"
	.string "It would be nice if we were to meet\n"
	.string "again somewhere.$"

Route118_Text_YouAgreeGoodRodIsGood::
# 207 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
	.string "A GOOD ROD is really good!\p"
	.string "Wouldn't you agree?$"

Route118_Text_IdenticalMindsTakeThis::
# 214 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
	.string "We're of identical minds!\p"
	.string "Hmm!\n"
	.string "Take this GOOD ROD!$"

Route118_Text_TryYourLuckFishing::
# 222 "data/maps/Route118/scripts.pory"
	.string "Wherever there's water, try your luck\n"
	.string "at fishing.$"

Route118_Text_DontYouLikeToFish::
# 227 "data/maps/Route118/scripts.pory"
	.string "Don't you like to fish?$"

Route118_Text_TryCatchingMonWithGoodRod::
# 231 "data/maps/Route118/scripts.pory"
	.string "Try catching all sorts of POKéMON\n"
	.string "with your GOOD ROD.$"

Route118_Text_CanCrossRiversWithSurf::
# 236 "data/maps/Route118/scripts.pory"
	.string "Even if there isn't a boat, you can\n"
	.string "cross rivers and the sea if you have\l"
	.string "a POKéMON that knows SURF.\p"
	.string "POKéMON can be counted on to do so\n"
	.string "much!$"

Route118_Text_RouteSignMauville::
# 245 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
	.string "{LEFT_ARROW} MAUVILLE CITY$"

Route118_Text_RouteSign119::
# 250 "data/maps/Route118/scripts.pory"
	.string "ROUTE 118\n"
	.string "{UP_ARROW} ROUTE 119$"
