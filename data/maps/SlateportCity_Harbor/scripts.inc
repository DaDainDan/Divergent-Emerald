SlateportCity_Harbor_MapScripts::
# 2 "data/maps/SlateportCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SlateportCity_Harbor/scripts.pory"
	setescapewarp MAP_SLATEPORT_CITY, 28, 13
# 4 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 0
# 5 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_SLATEPORT_HARBOR_STATE, 1
	goto_if_eq SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/SlateportCity_Harbor/scripts.pory"
	savebgm MUS_ENCOUNTER_AQUA
# 7 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_HARBOR_CAPT_STERN, 12, 13
# 8 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_HARBOR_CAPT_STERN, MOVEMENT_TYPE_FACE_LEFT
# 9 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
	goto SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/SlateportCity_Harbor/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL
	goto SlateportCity_Harbor_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


SlateportCity_Harbor_EventScript_AquaEscapeTrigger0::
# 19 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 20 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 0
# 21 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
	end


SlateportCity_Harbor_EventScript_AquaEscapeTrigger1::
# 26 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 27 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 1
# 28 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
	end


SlateportCity_Harbor_EventScript_AquaEscapeTrigger2::
# 33 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 34 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 2
# 35 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
	end


SlateportCity_Harbor_EventScript_AquaEscapeTrigger3::
# 40 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 41 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 3
# 42 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 43 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 44 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
	end


SlateportCity_Harbor_EventScript_AquaEscapeScene::
# 49 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_ARCHIE, Common_Movement_StepFasterDown
# 50 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 51 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_GRUNT, Common_Movement_StepFasterDown
# 52 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 53 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 54 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove, MSGBOX_DEFAULT
# 55 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_GRUNT, SlateportCity_Harbor_EventScript_AquaEscapeScene_Movement_0
# 57 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_ARCHIE, SlateportCity_Harbor_EventScript_AquaEscapeScene_Movement_0
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_SUBMARINE, SlateportCity_Harbor_EventScript_AquaEscapeScene_Movement_1
# 59 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 60 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SLATEPORT_HARBOR_GRUNT
# 61 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SLATEPORT_HARBOR_ARCHIE
# 62 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SLATEPORT_HARBOR_SUBMARINE
# 63 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 2
# 64 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_MET_TEAM_AQUA_HARBOR
# 65 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
# 66 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_0x8008
# 67 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_AquaEscapeScene_3
# 71 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_AquaEscapeScene_4
# 75 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_AquaEscapeScene_5
# 76 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 3, SlateportCity_Harbor_EventScript_AquaEscapeScene_5
SlateportCity_Harbor_EventScript_AquaEscapeScene_1:
# 81 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 82 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 83 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 84 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
# 85 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
# 86 "data/maps/SlateportCity_Harbor/scripts.pory"
	copyobjectxytoperm LOCALID_SLATEPORT_HARBOR_CAPT_STERN
# 87 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_HARBOR_CAPT_STERN, MOVEMENT_TYPE_FACE_RIGHT
# 88 "data/maps/SlateportCity_Harbor/scripts.pory"
	releaseall
	end

SlateportCity_Harbor_EventScript_AquaEscapeScene_3:
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_CAPT_STERN, SlateportCity_Harbor_EventScript_AquaEscapeScene_Movement_2
# 69 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 70 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene_1

SlateportCity_Harbor_EventScript_AquaEscapeScene_4:
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_CAPT_STERN, SlateportCity_Harbor_EventScript_AquaEscapeScene_Movement_3
# 73 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 74 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene_1

SlateportCity_Harbor_EventScript_AquaEscapeScene_5:
# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SLATEPORT_HARBOR_CAPT_STERN, SlateportCity_Harbor_EventScript_AquaEscapeScene_Movement_4
# 78 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 79 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene_1


SlateportCity_Harbor_EventScript_FerryAttendant::
# 93 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock_faceplayer
# 94 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_FerryAttendant_2
SlateportCity_Harbor_EventScript_FerryAttendant_1:
# 97 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FerryServiceUnavailable, MSGBOX_DEFAULT
	release_end

SlateportCity_Harbor_EventScript_FerryAttendant_2:
# 95 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AskForTicket
	goto SlateportCity_Harbor_EventScript_FerryAttendant_1


SlateportCity_Harbor_EventScript_AskForTicket::
# 102 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 103 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_FlashedTicketWhereTo
# 104 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 105 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
	end


SlateportCity_Harbor_EventScript_ChooseDestination::
# 110 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_ON_SS_TIDAL, SlateportCity_Harbor_EventScript_ChooseDestination_2
# 120 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 18, 8, MULTI_SSTIDAL_SLATEPORT_NO_BF, 2, FALSE
# 121 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 122 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_ChooseDestination_10
# 123 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_ChooseDestination_11
# 124 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_ChooseDestination_11
SlateportCity_Harbor_EventScript_ChooseDestination_1:
	end

SlateportCity_Harbor_EventScript_ChooseDestination_2:
# 111 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 17, 6, MULTI_SSTIDAL_SLATEPORT_WITH_BF, 2, FALSE
# 112 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 113 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_ChooseDestination_6
# 114 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_ChooseDestination_7
# 115 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_ChooseDestination_8
# 116 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_ChooseDestination_8
	goto SlateportCity_Harbor_EventScript_ChooseDestination_1

SlateportCity_Harbor_EventScript_ChooseDestination_6:
# 113 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_Lilycove
	goto SlateportCity_Harbor_EventScript_ChooseDestination_1

SlateportCity_Harbor_EventScript_ChooseDestination_7:
# 114 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_BattleFrontier
	goto SlateportCity_Harbor_EventScript_ChooseDestination_1

SlateportCity_Harbor_EventScript_ChooseDestination_8:
# 117 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_CancelDestinationSelect
	goto SlateportCity_Harbor_EventScript_ChooseDestination_1

SlateportCity_Harbor_EventScript_ChooseDestination_10:
# 122 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_Lilycove
	goto SlateportCity_Harbor_EventScript_ChooseDestination_1

SlateportCity_Harbor_EventScript_ChooseDestination_11:
# 125 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_CancelDestinationSelect
	goto SlateportCity_Harbor_EventScript_ChooseDestination_1


SlateportCity_Harbor_EventScript_NoTicket::
# 133 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_YouMustHaveTicket, MSGBOX_DEFAULT
	release_end


SlateportCity_Harbor_EventScript_Lilycove::
# 138 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LilycoveItIs, MSGBOX_YESNO
# 139 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_Harbor_EventScript_Lilycove_2
SlateportCity_Harbor_EventScript_Lilycove_1:
# 142 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_SLATEPORT
# 143 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 144 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 1, 10
# 145 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
	release_end

SlateportCity_Harbor_EventScript_Lilycove_2:
# 140 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseNewDestination
	goto SlateportCity_Harbor_EventScript_Lilycove_1


SlateportCity_Harbor_EventScript_BattleFrontier::
# 150 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 151 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_Harbor_EventScript_BattleFrontier_2
SlateportCity_Harbor_EventScript_BattleFrontier_1:
# 154 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 155 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 19, 67
# 156 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
	release_end

SlateportCity_Harbor_EventScript_BattleFrontier_2:
# 152 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseNewDestination
	goto SlateportCity_Harbor_EventScript_BattleFrontier_1


SlateportCity_Harbor_EventScript_ChooseNewDestination::
# 161 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhereWouldYouLikeToGo
# 162 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 163 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
	end


SlateportCity_Harbor_EventScript_BoardFerry::
# 168 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 169 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 170 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_StepFasterUp
# 171 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 172 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 173 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_SLATEPORT_CITY_HARBOR
# 174 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_FACING
# 175 "data/maps/SlateportCity_Harbor/scripts.pory"
	case DIR_NORTH, SlateportCity_Harbor_EventScript_BoardFerry_3
# 176 "data/maps/SlateportCity_Harbor/scripts.pory"
	case DIR_EAST, SlateportCity_Harbor_EventScript_BoardFerry_4
SlateportCity_Harbor_EventScript_BoardFerry_1:
# 178 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 179 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 180 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideplayer
# 181 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SLATEPORT_HARBOR_SS_TIDAL
# 182 "data/maps/SlateportCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
	return

SlateportCity_Harbor_EventScript_BoardFerry_3:
# 175 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto SlateportCity_Harbor_EventScript_BoardFerry_1

SlateportCity_Harbor_EventScript_BoardFerry_4:
# 176 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Harbor_EventScript_BoardFerry_Movement_0
	goto SlateportCity_Harbor_EventScript_BoardFerry_1


SlateportCity_Harbor_EventScript_CancelDestinationSelect::
# 187 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
	release_end


SlateportCity_Harbor_EventScript_Sailor::
# 192 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock_faceplayer
# 193 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 194 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_DEFEATED_KYOGRE, SlateportCity_Harbor_EventScript_Sailor_2
SlateportCity_Harbor_EventScript_Sailor_1:
# 197 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_DEFEATED_GROUDON, SlateportCity_Harbor_EventScript_Sailor_5
SlateportCity_Harbor_EventScript_Sailor_4:
# 200 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_Sailor_8
# 200 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_0x8004, 2
	goto_if_eq SlateportCity_Harbor_EventScript_Sailor_8
# 204 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_AbnormalWeather, MSGBOX_DEFAULT
	release_end

SlateportCity_Harbor_EventScript_Sailor_2:
# 195 "data/maps/SlateportCity_Harbor/scripts.pory"
	addvar VAR_0x8004, 1
	goto SlateportCity_Harbor_EventScript_Sailor_1

SlateportCity_Harbor_EventScript_Sailor_5:
# 198 "data/maps/SlateportCity_Harbor/scripts.pory"
	addvar VAR_0x8004, 1
	goto SlateportCity_Harbor_EventScript_Sailor_4

SlateportCity_Harbor_EventScript_Sailor_8:
# 201 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday, MSGBOX_DEFAULT
	release_end


SlateportCity_Harbor_EventScript_FatMan::
# 209 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SubTooSmallForMe, MSGBOX_NPC
	end


SlateportCity_Harbor_EventScript_CaptStern::
# 214 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock_faceplayer
# 215 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_Harbor_EventScript_CaptStern_2
# 218 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE, SlateportCity_Harbor_EventScript_CaptStern_3
# 221 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, SlateportCity_Harbor_EventScript_CaptStern_4
# 225 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_SLATEPORT_HARBOR_STATE, 2
	goto_if_eq SlateportCity_Harbor_EventScript_CaptStern_5
# 229 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum, MSGBOX_DEFAULT
# 230 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
SlateportCity_Harbor_EventScript_CaptStern_1:
	release_end

SlateportCity_Harbor_EventScript_CaptStern_2:
# 216 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment
	goto SlateportCity_Harbor_EventScript_CaptStern_1

SlateportCity_Harbor_EventScript_CaptStern_3:
# 219 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_NeedDiveToCatchSub, MSGBOX_DEFAULT
	goto SlateportCity_Harbor_EventScript_CaptStern_1

SlateportCity_Harbor_EventScript_CaptStern_4:
# 222 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE
# 223 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TeamAquaLeftNeedDive, MSGBOX_DEFAULT
	goto SlateportCity_Harbor_EventScript_CaptStern_1

SlateportCity_Harbor_EventScript_CaptStern_5:
# 226 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
	goto SlateportCity_Harbor_EventScript_CaptStern_1


SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment::
# 236 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_2
	checkitem ITEM_SCANNER
# 0 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_3
# 244 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_4
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_1:
# 248 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry, MSGBOX_DEFAULT
	release_end

SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_2:
# 237 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
	goto SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_1

SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_3:
# 240 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WouldYouTradeScanner
# 241 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 242 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
	goto SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_1

SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment_4:
# 245 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FinishedMakingFerry, MSGBOX_DEFAULT
	release_end


SlateportCity_Harbor_EventScript_ChooseScannerTrade::
# 253 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoice 0, 0, MULTI_STERN_DEEPSEA, FALSE
# 254 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 255 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_ChooseScannerTrade_3
# 256 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_ChooseScannerTrade_4
# 257 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_ChooseScannerTrade_5
# 258 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_ChooseScannerTrade_5
SlateportCity_Harbor_EventScript_ChooseScannerTrade_1:
	end

SlateportCity_Harbor_EventScript_ChooseScannerTrade_3:
# 255 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_DeepSeaTooth
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade_1

SlateportCity_Harbor_EventScript_ChooseScannerTrade_4:
# 256 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_DeepSeaScale
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade_1

SlateportCity_Harbor_EventScript_ChooseScannerTrade_5:
# 259 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow, MSGBOX_DEFAULT
	release_end


SlateportCity_Harbor_EventScript_DeepSeaTooth::
# 266 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaTooth, MSGBOX_YESNO
# 267 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_Harbor_EventScript_DeepSeaTooth_2
SlateportCity_Harbor_EventScript_DeepSeaTooth_1:
	giveitem ITEM_DEEP_SEA_TOOTH
# 0 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_Harbor_EventScript_DeepSeaTooth_5
SlateportCity_Harbor_EventScript_DeepSeaTooth_4:
# 273 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ScannerTradeFinish
	end

SlateportCity_Harbor_EventScript_DeepSeaTooth_2:
# 268 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDifferentTrade
	goto SlateportCity_Harbor_EventScript_DeepSeaTooth_1

SlateportCity_Harbor_EventScript_DeepSeaTooth_5:
# 271 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SlateportCity_Harbor_EventScript_DeepSeaTooth_4


SlateportCity_Harbor_EventScript_DeepSeaScale::
# 278 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaScale, MSGBOX_YESNO
# 279 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SlateportCity_Harbor_EventScript_DeepSeaScale_2
SlateportCity_Harbor_EventScript_DeepSeaScale_1:
	giveitem ITEM_DEEP_SEA_SCALE
# 0 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SlateportCity_Harbor_EventScript_DeepSeaScale_5
SlateportCity_Harbor_EventScript_DeepSeaScale_4:
# 285 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ScannerTradeFinish
	end

SlateportCity_Harbor_EventScript_DeepSeaScale_2:
# 280 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDifferentTrade
	goto SlateportCity_Harbor_EventScript_DeepSeaScale_1

SlateportCity_Harbor_EventScript_DeepSeaScale_5:
# 283 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SlateportCity_Harbor_EventScript_DeepSeaScale_4


SlateportCity_Harbor_EventScript_ScannerTradeFinish::
# 290 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 291 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 292 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 293 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
	end


SlateportCity_Harbor_EventScript_ChooseDifferentTrade::
# 298 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhichOneDoYouWant
# 299 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 300 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
	end


SlateportCity_Harbor_EventScript_TradedScanner::
# 305 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 306 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ThisWillHelpResearch, MSGBOX_DEFAULT
	release_end


# 56 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene_Movement_0:
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
	step_end

# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene_Movement_1:
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	run_right
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	run_right
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	run_right
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	run_right
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	run_right
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	run_right
	step_end

# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene_Movement_2:
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
	step_end

# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene_Movement_3:
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
	step_end

# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene_Movement_4:
# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
	step_end

# 176 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerry_Movement_0:
# 176 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 176 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_faster_up
	step_end

SlateportCity_Harbor_Text_FerryServiceUnavailable::
# 310 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I beg your pardon?\n"
	.string "You're looking for a ship?\p"
	.string "I'm sorry, the ferry service isn't\n"
	.string "available at present…$"

SlateportCity_Harbor_Text_MayISeeYourTicket::
# 318 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
	.string "May I see your TICKET?$"

SlateportCity_Harbor_Text_YouMustHaveTicket::
# 323 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the TICKET…\p"
	.string "I'm terribly sorry.\p"
	.string "You must have a TICKET to board\n"
	.string "the ferry.$"

SlateportCity_Harbor_Text_FlashedTicketWhereTo::
# 332 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the TICKET.\p"
	.string "Perfect! That's all you need!\p"
	.string "And where would you like to go?$"

SlateportCity_Harbor_Text_SailAnotherTime::
# 340 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"

SlateportCity_Harbor_Text_LilycoveItIs::
# 344 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "LILYCOVE CITY it is, then!$"

SlateportCity_Harbor_Text_BattleFrontierItIs::
# 348 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "BATTLE FRONTIER it is, then!$"

SlateportCity_Harbor_Text_PleaseBoardFerry::
# 352 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
	.string "departure.$"

SlateportCity_Harbor_Text_WhereWouldYouLikeToGo::
# 357 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"

SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday::
# 361 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A journey to the bottom of the sea…\n"
	.string "I wonder what it'd be like?\p"
	.string "I'd love to go deep underwater like\n"
	.string "that someday.$"

SlateportCity_Harbor_Text_AbnormalWeather::
# 369 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "For a ship to sail safely, we need to\n"
	.string "know about the weather!\p"
	.string "Speaking of weather, I heard something\n"
	.string "from a guy at the WEATHER INSTITUTE.\p"
	.string "He was saying abnormal weather has\n"
	.string "been reported all over the place!\p"
	.string "You should visit the WEATHER INSTITUTE\n"
	.string "and ask around!$"

SlateportCity_Harbor_Text_SubTooSmallForMe::
# 383 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wanted to go with CAPT. STERN on\n"
	.string "the ocean floor exploration.\p"
	.string "But the sub's too small for me.\p"
	.string "If I squeezed in, there wouldn't be\n"
	.string "any room for the CAPTAIN…$"

SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum::
# 393 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{SPEAKER NAME_STERN}Those thugs…\p"
	.string "They're the same lot who tried to rob\n"
	.string "the DEVON GOODS at the MUSEUM.$"

SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove::
# 400 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{SPEAKER NAME_ARCHIE}Oh?\n"
	.string "Not you again…\p"
	.string "You are tenacious to track us here,\n"
	.string "that much I will give you.\p"
	.string "But now…\n"
	.string "No one can stop us! No one!\p"
	.string "Or, will you follow us back to our\n"
	.string "HIDEOUT in LILYCOVE CITY?\p"
	.string "Fwahahahaha…$"

SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine::
# 416 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{SPEAKER NAME_STERN}Why…\p"
	.string "Why would TEAM AQUA steal my\n"
	.string "SUBMARINE EXPLORER 1?\p"
	.string "They can't be after the slumbering\n"
	.string "POKéMON at the bottom of the sea…\p"
	.string "But even if I were to chase them,\n"
	.string "I don't stand a chance against them…$"

SlateportCity_Harbor_Text_TeamAquaLeftNeedDive::
# 429 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{SPEAKER NAME_STERN}Oh, {PLAYER}{KUN}…\p"
	.string "Okay… So TEAM AQUA left before you\n"
	.string "could stop them…\p"
	.string "Oh, no, don't blame yourself.\n"
	.string "You're not responsible for this.\p"
	.string "Trying to catch a submarine…\n"
	.string "It's impossible for most people.\p"
	.string "You would need a POKéMON that knows\n"
	.string "how to DIVE…\p"
	.string "Perhaps if you went out to\n"
	.string "MOSSDEEP CITY…\p"
	.string "A lot of divers live out there, so\n"
	.string "someone might teach you…$"

SlateportCity_Harbor_Text_NeedDiveToCatchSub::
# 451 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{SPEAKER NAME_STERN}Trying to catch a\n"
	.string "submarine… It's impossible.\p"
	.string "You would need a POKéMON that knows\n"
	.string "how to DIVE…\p"
	.string "Perhaps if you went out to\n"
	.string "MOSSDEEP CITY…\p"
	.string "A lot of divers live out there, so\n"
	.string "someone might teach you…$"

SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry::
# 465 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{SPEAKER NAME_STERN}Oh, yes.\n"
	.string "MR. BRINEY came to our SHIPYARD.\p"
	.string "It won't be long now before we finish\n"
	.string "making the ferry!$"

SlateportCity_Harbor_Text_FinishedMakingFerry::
# 473 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{SPEAKER NAME_STERN}{PLAYER}{KUN}!\p"
	.string "We finally finished making the ferry\n"
	.string "S.S. TIDAL!\p"
	.string "We couldn't have done it without\n"
	.string "your friend MR. BRINEY.\p"
	.string "Please go for a short cruise on it!$"

SlateportCity_Harbor_Text_WouldYouTradeScanner::
# 485 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{SPEAKER NAME_STERN}Oh?\n"
	.string "{PLAYER}{KUN}, that item you have…\p"
	.string "That's a SCANNER! That would sure\n"
	.string "help us on our explorations.\p"
	.string "{PLAYER}{KUN}, would you trade your\n"
	.string "SCANNER for something?\p"
	.string "Like, say, a DEEPSEATOOTH or\n"
	.string "a DEEPSEASCALE that I have?$"

SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow::
# 499 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{SPEAKER NAME_STERN}Are you certain?\n"
	.string "It's useless to you, {PLAYER}{KUN}…\p"
	.string "Well, okay, then. If you want to trade\n"
	.string "your SCANNER, let me know.$"

SlateportCity_Harbor_Text_TradeForDeepSeaTooth::
# 507 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{SPEAKER NAME_STERN}So you'll trade it for\n"
	.string "my DEEPSEATOOTH?$"

SlateportCity_Harbor_Text_TradeForDeepSeaScale::
# 512 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{SPEAKER NAME_STERN}So you'll trade it for\n"
	.string "my DEEPSEASCALE?$"

SlateportCity_Harbor_Text_WhichOneDoYouWant::
# 517 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{SPEAKER NAME_STERN}Which one do you want?$"

SlateportCity_Harbor_Text_HandedScannerToStern::
# 521 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} handed the SCANNER to\n"
	.string "CAPT. STERN.$"

SlateportCity_Harbor_Text_ThisWillHelpResearch::
# 526 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{SPEAKER NAME_STERN}Thanks, {PLAYER}{KUN}!\n"
	.string "This will help our research a lot!$"
