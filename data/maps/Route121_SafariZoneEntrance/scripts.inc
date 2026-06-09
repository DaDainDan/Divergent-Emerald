Route121_SafariZoneEntrance_MapScripts::
# 2 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route121_SafariZoneEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route121_SafariZoneEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	map_script_2 VAR_SAFARI_ZONE_STATE, 1, Route121_SafariZoneEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route121_SafariZoneEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lockall
# 5 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route121_SafariZoneEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 6 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 7 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 0
# 8 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	releaseall
	end


Route121_SafariZoneEntrance_EventScript_WelcomeAttendant::
# 15 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WelcomeToSafariZone, MSGBOX_NPC
	end


Route121_SafariZoneEntrance_EventScript_InfoAttendant::
# 20 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lock_faceplayer
# 21 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WelcomeFirstTime, MSGBOX_YESNO
# 22 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route121_SafariZoneEntrance_EventScript_InfoAttendant_2
# 26 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_ComeInAndEnjoy, MSGBOX_DEFAULT
	release_end

Route121_SafariZoneEntrance_EventScript_InfoAttendant_2:
# 23 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_FirstTimeInfo, MSGBOX_DEFAULT
	release_end


Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger::
# 31 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	lockall
# 32 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 33 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	showmoneybox 0, 0
# 35 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay, MSGBOX_YESNO
# 36 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger_2
Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger_1:
# 39 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PlayAnotherTime, MSGBOX_DEFAULT
# 40 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	end

Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger_2:
# 37 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone
	goto Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger_1


Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone::
	checkitem ITEM_POKEBLOCK_CASE
# 0 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_2
Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_1:
	getpartysize
# 0 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_6
Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_4:
	checkmoney 500
# 0 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_10
Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_9:
# 57 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	playse SE_SHOP
# 58 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_ThatWillBe500Please, MSGBOX_DEFAULT
# 59 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	removemoney 500
# 60 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	updatemoneybox
# 61 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls, MSGBOX_DEFAULT
# 62 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 63 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	message Route121_SafariZoneEntrance_Text_Received30SafariBalls
# 64 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitfanfare
# 65 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
# 66 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
# 67 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	hidemoneybox
# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_Movement_0
# 69 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	special EnterSafariMode
# 71 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	setvar VAR_SAFARI_ZONE_STATE, 2
# 72 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	clearflag FLAG_GOOD_LUCK_SAFARI_ZONE
# 73 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	warp MAP_SAFARI_ZONE_SOUTH, 32, 33
# 74 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitstate
	end

Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_2:
# 46 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase, MSGBOX_DEFAULT
# 47 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	goto Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_1

Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_5:
# 50 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_PCIsFull, MSGBOX_DEFAULT
# 51 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	goto Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_4

Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_6:
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
# 0 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_5
	goto Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_4

Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_10:
# 54 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 55 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	goto Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_9


Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter::
# 79 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	closemessage
# 80 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	hidemoneybox
# 81 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 82 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	releaseall
	end


Route121_SafariZoneEntrance_EventScript_TrainerTipSign::
# 88 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	msgbox Route121_SafariZoneEntrance_Text_TrainerTip, MSGBOX_SIGN
	end


# 5 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 5 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_up
# 5 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 5 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 5 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 5 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 5 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 5 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
# 5 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_right
	step_end

# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone_Movement_0:
# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_left
# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	walk_down
# 68 "data/maps/Route121_SafariZoneEntrance/scripts.pory"
	delay_16
	step_end
