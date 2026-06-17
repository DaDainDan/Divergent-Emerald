FuchsiaCity_SafariZone_Entrance_Frlg_MapScripts::
# 2 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FuchsiaCity_SafariZone_Entrance_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FuchsiaCity_SafariZone_Entrance_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 1, FuchsiaCity_SafariZone_Entrance_EventScript_ExitWarpIn
# 4 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 2, FuchsiaCity_SafariZone_Entrance_EventScript_ExitEarly
# 5 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 3, FuchsiaCity_SafariZone_Entrance_EventScript_ExitWalkIn
	.2byte 0


FuchsiaCity_SafariZone_Entrance_EventScript_ExitWalkIn::
# 11 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 12 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 13 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_EventScript_ExitWalkIn_Movement_0
# 14 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 15 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_CatchFairShareComeAgain
# 16 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ExitEnd
	end


FuchsiaCity_SafariZone_Entrance_EventScript_ExitWarpIn::
# 22 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 23 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 24 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_CatchFairShareComeAgain
# 25 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ExitEnd
	end


FuchsiaCity_SafariZone_Entrance_EventScript_ExitEarly::
# 31 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 32 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 33 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_GoingToLeaveSafariZoneEarly, MSGBOX_YESNO
# 34 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FuchsiaCity_SafariZone_Entrance_EventScript_ExitEarly_2
# 43 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_PleaseReturnSafariBalls
# 44 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ExitEnd
	end

FuchsiaCity_SafariZone_Entrance_EventScript_ExitEarly_2:
# 35 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_GoodLuck
# 36 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 37 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 38 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 39 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	warp MAP_SAFARI_ZONE_CENTER, 26, 30
# 40 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitstate
	end


FuchsiaCity_SafariZone_Entrance_EventScript_ExitEnd::
# 49 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 50 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_EventScript_ExitEnd_Movement_0
# 51 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 52 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	special ExitSafariMode
# 53 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 0
# 54 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	releaseall
	end


FuchsiaCity_SafariZone_Entrance_EventScript_EntryTriggerMid::
# 59 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 60 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 0
# 61 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone
	end


FuchsiaCity_SafariZone_Entrance_EventScript_EntryTriggerRight::
# 66 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 67 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 1
# 68 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone
	end


FuchsiaCity_SafariZone_Entrance_EventScript_EntryTriggerLeft::
# 73 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lockall
# 74 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 2
# 75 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone
	end


FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone::
# 80 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 81 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_WelcomeToSafariZone
# 82 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 83 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 84 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	showmoneybox 0, 0
# 85 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_PlaySafariGameFor500, MSGBOX_YESNO
# 86 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone_2
FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone_1:
# 89 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_OkayPleaseComeAgain
# 90 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack
	end

FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone_2:
# 87 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone
	goto FuchsiaCity_SafariZone_Entrance_EventScript_AskEnterSafariZone_1


FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone::
# 95 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	getpartysize
# 96 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_5
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_4:
	checkmoney 500
# 0 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_3
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_1:
# 104 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	removemoney 500
# 105 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	updatemoneybox
# 106 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_ThatllBe500WeOnlyUseSpecialBalls
# 107 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 108 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 109 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	message FuchsiaCity_SafariZone_Entrance_Text_PlayerReceived30SafariBalls
# 110 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitfanfare
# 111 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 112 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_CallYouOnPAWhenYouRunOut
# 113 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 114 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	hidemoneybox
# 115 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	switch VAR_TEMP_2
# 116 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	case 0, FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_10
# 117 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	case 1, FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_11
# 118 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	case 2, FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_12
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_8:
# 120 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 121 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	special EnterSafariMode
# 122 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 2
# 123 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	warp MAP_SAFARI_ZONE_CENTER, 255, 26, 30
# 124 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitstate
	end

FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_2:
# 97 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PCIsFull
# 98 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack
	goto FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_1

FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_3:
# 101 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_OopsNotEnoughMoney
# 102 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	goto FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack
	goto FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_1

FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_5:
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
# 0 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_2
	goto FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_4

FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_10:
# 116 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_Movement_0
	goto FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_8

FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_11:
# 117 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_Movement_1
	goto FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_8

FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_12:
# 118 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_Movement_2
	goto FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_8


FuchsiaCity_SafariZone_Entrance_EventScript_ForcePlayerBack::
# 129 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	closemessage
# 130 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	hidemoneybox
# 131 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 132 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	waitmovement 0
# 133 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	releaseall
	end


FuchsiaCity_SafariZone_Entrance_EventScript_InfoAttendant::
# 138 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	lock_faceplayer
# 139 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_FirstTimeAtSafariZone, MSGBOX_YESNO
# 140 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FuchsiaCity_SafariZone_Entrance_EventScript_InfoAttendant_2
# 144 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_SorryYoureARegularHere
	release_end

FuchsiaCity_SafariZone_Entrance_EventScript_InfoAttendant_2:
# 141 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	msgbox FuchsiaCity_SafariZone_Entrance_Text_ExplainSafariZone
	release_end


# 13 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ExitWalkIn_Movement_0:
# 13 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_down
# 13 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	delay_8
	step_end

# 50 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_ExitEnd_Movement_0:
# 50 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_down
	step_end

# 116 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_Movement_0:
# 116 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 116 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
	step_end

# 117 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_Movement_1:
# 117 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 117 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_left
# 117 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
	step_end

# 118 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
FuchsiaCity_SafariZone_Entrance_EventScript_TryEnterSafariZone_Movement_2:
# 118 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
# 118 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_right
# 118 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	walk_up
	step_end

FuchsiaCity_SafariZone_Entrance_Text_WelcomeToSafariZone::
# 148 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Welcome to the SAFARI ZONE!$"

FuchsiaCity_SafariZone_Entrance_Text_PlaySafariGameFor500::
# 152 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "For just ¥500, you can play the\n"
	.string "SAFARI GAME.\p"
	.string "You can roam the wide-open safari\n"
	.string "and catch what you like.\p"
	.string "Would you like to play?$"

FuchsiaCity_SafariZone_Entrance_Text_ThatllBe500WeOnlyUseSpecialBalls::
# 162 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "That'll be ¥500, please!\p"
	.string "We only use a special kind of \n"
	.string "POKé BALLS here.$"

FuchsiaCity_SafariZone_Entrance_Text_PlayerReceived30SafariBalls::
# 169 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "{PLAYER} received 30 SAFARI BALLS\n"
	.string "from the attendant.$"

FuchsiaCity_SafariZone_Entrance_Text_CallYouOnPAWhenYouRunOut::
# 174 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "We'll call you on the PA when you\n"
	.string "run out of time or SAFARI BALLS.\p"
	.string "Well, I'll wish you the best of\n"
	.string "luck!$"

FuchsiaCity_SafariZone_Entrance_Text_OkayPleaseComeAgain::
# 182 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Okay.\n"
	.string "Please come again!$"

FuchsiaCity_SafariZone_Entrance_Text_OopsNotEnoughMoney::
# 187 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Oops!\n"
	.string "Not enough money!$"

FuchsiaCity_SafariZone_Entrance_Text_GoingToLeaveSafariZoneEarly::
# 192 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Are you going to leave the\n"
	.string "SAFARI ZONE early?$"

FuchsiaCity_SafariZone_Entrance_Text_PleaseReturnSafariBalls::
# 197 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Please return any SAFARI BALLS\n"
	.string "you may have left.$"

FuchsiaCity_SafariZone_Entrance_Text_GoodLuck::
# 202 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Good luck!$"

FuchsiaCity_SafariZone_Entrance_Text_CatchFairShareComeAgain::
# 206 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Did you catch your fair share?\n"
	.string "Come again!$"

FuchsiaCity_SafariZone_Entrance_Text_FirstTimeAtSafariZone::
# 211 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Hi! Is it your first time here at\n"
	.string "the SAFARI ZONE?$"

FuchsiaCity_SafariZone_Entrance_Text_ExplainSafariZone::
# 216 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "The SAFARI ZONE actually has\n"
	.string "four zones in it.\p"
	.string "Each zone has different kinds of\n"
	.string "POKéMON, even some rare ones.\p"
	.string "Use the supplied SAFARI BALLS to\n"
	.string "catch them.\p"
	.string "You can also throw BAIT or ROCKS\n"
	.string "besides the SAFARI BALLS.\p"
	.string "If you throw BAIT, the POKéMON\n"
	.string "becomes less likely to flee, but\l"
	.string "harder to catch.\p"
	.string "If you throw ROCKS, the POKéMON\n"
	.string "becomes more likely to flee, but\l"
	.string "easier to catch.\p"
	.string "When you run out of time or SAFARI\n"
	.string "BALLS, it's game over for you!$"

FuchsiaCity_SafariZone_Entrance_Text_SorryYoureARegularHere::
# 241 "data/maps/FuchsiaCity_SafariZone_Entrance_Frlg/scripts.pory"
	.string "Sorry, you're a regular here!$"
