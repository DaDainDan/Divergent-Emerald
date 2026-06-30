Route104_MrBrineysHouse_MapScripts::
# 2 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_MrBrineysHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route104_MrBrineysHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_LANDMARK_MR_BRINEY_HOUSE
# 4 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_BRINEY_HOUSE_STATE, 1
	goto_if_eq Route104_MrBrineysHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route104_MrBrineysHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, Route104_MrBrineysHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route104_MrBrineysHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

Route104_MrBrineysHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_BRINEYS_HOUSE_BRINEY, 9, 3
# 6 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_BRINEYS_HOUSE_BRINEY, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT
# 7 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_BRINEYS_HOUSE_PEEKO, 9, 6
# 8 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_BRINEYS_HOUSE_PEEKO, MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN
	goto Route104_MrBrineysHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route104_MrBrineysHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
	goto Route104_MrBrineysHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


Route104_MrBrineysHouse_EventScript_Briney::
# 18 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock_faceplayer
# 19 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_MR_BRINEY_SAILING_INTRO, Route104_MrBrineysHouse_EventScript_Briney_2
# 24 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_MrBrineysHouse_EventScript_Briney_3
# 27 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route104_MrBrineysHouse_EventScript_Briney_4
# 31 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_WhereAreWeBound
Route104_MrBrineysHouse_EventScript_Briney_1:
# 33 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailingYesNoResult
	end

Route104_MrBrineysHouse_EventScript_Briney_2:
# 20 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_MR_BRINEY_SAILING_INTRO
# 21 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_WaitUpPeeko, MSGBOX_DEFAULT
# 22 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford, MSGBOX_YESNO
	goto Route104_MrBrineysHouse_EventScript_Briney_1

Route104_MrBrineysHouse_EventScript_Briney_3:
# 25 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford, MSGBOX_YESNO
	goto Route104_MrBrineysHouse_EventScript_Briney_1

Route104_MrBrineysHouse_EventScript_Briney_4:
# 28 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford, MSGBOX_YESNO
	goto Route104_MrBrineysHouse_EventScript_Briney_1


Route104_MrBrineysHouse_EventScript_SailingYesNoResult::
# 38 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route104_MrBrineysHouse_EventScript_SailingYesNoResult_2
# 42 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
	end

Route104_MrBrineysHouse_EventScript_SailingYesNoResult_2:
# 39 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_DeclineDeliverySail, MSGBOX_DEFAULT
	release_end


Route104_MrBrineysHouse_EventScript_WhereAreWeBound::
# 47 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	message Route104_MrBrineysHouse_Text_WhereAreWeBound
# 48 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmessage
# 49 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	multichoicedefault 20, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 50 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	switch VAR_RESULT
# 51 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 0, Route104_MrBrineysHouse_EventScript_WhereAreWeBound_3
# 52 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 1, Route104_MrBrineysHouse_EventScript_WhereAreWeBound_4
# 53 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case MULTI_B_PRESSED, Route104_MrBrineysHouse_EventScript_WhereAreWeBound_4
Route104_MrBrineysHouse_EventScript_WhereAreWeBound_1:
	end

Route104_MrBrineysHouse_EventScript_WhereAreWeBound_3:
# 51 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
	goto Route104_MrBrineysHouse_EventScript_WhereAreWeBound_1

Route104_MrBrineysHouse_EventScript_WhereAreWeBound_4:
# 54 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail, MSGBOX_DEFAULT
	release_end


Route104_MrBrineysHouse_EventScript_SailToDewford::
# 61 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_SetSailForDewford, MSGBOX_DEFAULT
# 62 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 63 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 1
# 64 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY
# 65 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 66 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 67 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 68 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 69 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 70 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_RIVAL
# 71 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	warp MAP_ROUTE104, 13, 51
# 72 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitstate
# 73 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	releaseall
	end


Route104_MrBrineysHouse_EventScript_Peeko::
# 78 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock_faceplayer
# 79 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitse
# 80 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 81 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_Peeko, MSGBOX_DEFAULT
# 82 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmoncry
	release_end


Route104_MrBrineysHouse_Text_WaitUpPeeko::
# 86 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "{SPEAKER NAME_BRINEY}Hold on, lass!\n"
	.string "Wait up, PEEKO!$"

Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford::
# 91 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Hm? You're {PLAYER}{KUN}!\n"
	.string "You saved my darling PEEKO!\l"
	.string "We owe so much to you!\p"
	.string "What's that?\n"
	.string "You want to sail with me?\p"
	.string "Hmhm…\p"
	.string "You have a LETTER bound for DEWFORD\n"
	.string "and a package for SLATEPORT, then?\p"
	.string "Quite the busy life you must lead!\p"
	.string "But, certainly, what you're asking is\n"
	.string "no problem at all.\p"
	.string "You've come to the right man!\n"
	.string "We'll set sail for DEWFORD.$"

Route104_MrBrineysHouse_Text_SetSailForDewford::
# 113 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "{SPEAKER NAME_BRINEY}DEWFORD it is, then!\p"
	.string "Anchors aweigh!\n"
	.string "PEEKO, we're setting sail, my darling!$"

Route104_MrBrineysHouse_Text_DeclineDeliverySail::
# 120 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "{SPEAKER NAME_BRINEY}Is that so?\n"
	.string "Your deliveries can wait?\p"
	.string "You just go on and tell me whenever\n"
	.string "you want to set sail!$"

Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford::
# 128 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "{SPEAKER NAME_BRINEY}Ahoy!\n"
	.string "I know exactly what you want to say!\p"
	.string "You're to deliver a LETTER to DEWFORD\n"
	.string "and a package to SLATEPORT.\p"
	.string "What you need me to do is no problem\n"
	.string "at all--I'm the man for the job!\p"
	.string "First, we'll set sail for DEWFORD.$"

Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford::
# 141 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "{SPEAKER NAME_BRINEY}Ahoy!\n"
	.string "I know exactly what you want to say!\p"
	.string "You're to deliver a package to\n"
	.string "CAPT. STERN in SLATEPORT.\p"
	.string "What you need me to do is no problem\n"
	.string "at all--I'm the man for the job!\p"
	.string "First, we'll set sail for DEWFORD.$"

Route104_MrBrineysHouse_Text_WhereAreWeBound::
# 154 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "{SPEAKER NAME_BRINEY}Ahoy!\n"
	.string "For you, I'll go out to sea anytime!\p"
	.string "Now, my friend, where are we bound?$"

Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail::
# 161 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "{SPEAKER NAME_BRINEY}Is that so?\n"
	.string "Well, PEEKO owes her life to you.\p"
	.string "You just go on and tell me whenever\n"
	.string "you want to set sail!$"

Route104_MrBrineysHouse_Text_Peeko::
# 169 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "{SPEAKER NAME_PEEKO}Pii piihyoro!$"
