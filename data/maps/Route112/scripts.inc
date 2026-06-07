Route112_MapScripts::
# 2 "data/maps/Route112/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route112_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route112/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 4 "data/maps/Route112/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
	end


Route112_EventScript_MagmaGrunts::
# 10 "data/maps/Route112/scripts.pory"
	lockall
# 11 "data/maps/Route112/scripts.pory"
	delay 40
# 12 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_StepFasterRight
# 13 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 14 "data/maps/Route112/scripts.pory"
	delay 20
# 15 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LeaderGoingToAwakenThing, MSGBOX_DEFAULT
# 16 "data/maps/Route112/scripts.pory"
	closemessage
# 17 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_FaceOriginalDirection
# 18 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route112/scripts.pory"
	delay 40
# 20 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_StepFasterLeft
# 21 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 22 "data/maps/Route112/scripts.pory"
	delay 20
# 23 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_YeahWeNeedMeteorite, MSGBOX_DEFAULT
# 24 "data/maps/Route112/scripts.pory"
	closemessage
# 25 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_FaceOriginalDirection
# 26 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route112/scripts.pory"
	delay 40
# 28 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_StepFasterRight
# 29 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route112/scripts.pory"
	delay 20
# 31 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_OhThatsWhyCrewWentToFallarbor, MSGBOX_DEFAULT
# 32 "data/maps/Route112/scripts.pory"
	closemessage
# 33 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_FaceOriginalDirection
# 34 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route112/scripts.pory"
	delay 40
# 36 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_StepFasterLeft
# 37 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route112/scripts.pory"
	delay 20
# 39 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CantLetAnyonePassUntilTheyreBack, MSGBOX_DEFAULT
# 40 "data/maps/Route112/scripts.pory"
	closemessage
# 41 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_FaceOriginalDirection
# 42 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route112/scripts.pory"
	releaseall
	end


Route112_EventScript_MtChimneyCableCarSign::
# 48 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneyCableCarSign, MSGBOX_SIGN
	end


Route112_EventScript_MtChimneySign::
# 53 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneySign, MSGBOX_SIGN
	end


Route112_EventScript_RouteSignLavaridge::
# 58 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_RouteSignLavaridge, MSGBOX_SIGN
	end


Route112_EventScript_Hiker::
# 63 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_NotEasyToGetBackToLavaridge, MSGBOX_NPC
	end


Route112_EventScript_Brice::
# 68 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRICE, Route112_Text_BriceIntro, Route112_Text_BriceDefeat
# 69 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BricePostBattle, MSGBOX_AUTOCLOSE
	end


Route112_EventScript_Trent::
# 74 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_TRENT_1, Route112_Text_TrentIntro, Route112_Text_TrentDefeat, Route112_EventScript_RegisterTrent
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route112/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route112_EventScript_Trent_2
# 80 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentPostBattle, MSGBOX_DEFAULT
	release_end

Route112_EventScript_Trent_2:
# 76 "data/maps/Route112/scripts.pory"
	trainerbattle_rematch TRAINER_TRENT_1, Route112_Text_TrentRematchIntro, Route112_Text_TrentRematchDefeat
# 77 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route112_EventScript_RegisterTrent::
# 85 "data/maps/Route112/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 86 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRegister, MSGBOX_DEFAULT
# 88 "data/maps/Route112/scripts.pory"
	register_matchcall TRAINER_TRENT_1
	release_end


Route112_EventScript_Larry::
# 93 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_LARRY, Route112_Text_LarryIntro, Route112_Text_LarryDefeat
# 94 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
	end


Route112_EventScript_Carol::
# 99 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route112_Text_CarolIntro, Route112_Text_CarolDefeat
# 100 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
	end


Route112_EventScript_Bryant::
# 105 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRYANT, Route112_Text_BryantIntro, Route112_Text_BryantDefeat
# 106 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BryantPostBattle, MSGBOX_AUTOCLOSE
	end


Route112_EventScript_Shayla::
# 111 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_SHAYLA, Route112_Text_ShaylaIntro, Route112_Text_ShaylaDefeat
# 112 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_ShaylaPostBattle, MSGBOX_AUTOCLOSE
	end


Route112_Text_LeaderGoingToAwakenThing::
# 116 "data/maps/Route112/scripts.pory"
	.string "Hey, man, is our leader really going\n"
	.string "to awaken that thing?$"

Route112_Text_YeahWeNeedMeteorite::
# 121 "data/maps/Route112/scripts.pory"
	.string "Sounds like it, yeah. But I heard\n"
	.string "we need a METEORITE to do it.$"

Route112_Text_OhThatsWhyCrewWentToFallarbor::
# 126 "data/maps/Route112/scripts.pory"
	.string "Oh, I get it now. That's why the rest\n"
	.string "of the crew went out to FALLARBOR.$"

Route112_Text_CantLetAnyonePassUntilTheyreBack::
# 131 "data/maps/Route112/scripts.pory"
	.string "You got it. And until they come back,\n"
	.string "we're not to let anyone pass, right.$"

Route112_Text_NotEasyToGetBackToLavaridge::
# 136 "data/maps/Route112/scripts.pory"
	.string "Eh, I'd like to get to MAUVILLE, but if\n"
	.string "I went down these ledges, it'd be no\l"
	.string "easy matter to get back to LAVARIDGE.$"

Route112_Text_MtChimneyCableCarSign::
# 142 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY CABLE CAR\n"
	.string "“A short walk {UP_ARROW} way!”$"

Route112_Text_MtChimneySign::
# 147 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY\p"
	.string "“For LAVARIDGE TOWN or the summit,\n"
	.string "please take the CABLE CAR.”$"

Route112_Text_RouteSignLavaridge::
# 154 "data/maps/Route112/scripts.pory"
	.string "ROUTE 112\n"
	.string "{LEFT_ARROW} LAVARIDGE TOWN$"
