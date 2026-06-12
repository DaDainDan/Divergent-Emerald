BattleFrontier_BattlePyramidTop_MapScripts::
# 2 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME
# 39 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 27 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 44 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getbrainstatus
# 4 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, FRONTIER_BRAIN_NOT_READY
	goto_if_ne BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_2
BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 7 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	copyvar VAR_TEMP_C, VAR_RESULT
# 8 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getstatus
# 9 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	switch VAR_TEMP_CHALLENGE_STATUS
# 10 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 11 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case 0, BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_7
# 12 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_7
BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 21 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 22 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_9
# 22 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_DREW
	goto_if_eq BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_9
# 22 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_FORFEITED
	goto_if_eq BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_9
BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_8:
	end

BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 5 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_setbrainobj
	goto BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_1

BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 10 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobby
	goto BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_4

BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_7:
# 13 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_save CHALLENGE_STATUS_SAVING
# 14 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SavePlayerParty
# 15 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 16 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_settrainers
# 17 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 18 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_9:
# 23 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	goto BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_RESUME_8

BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 40 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	pyramid_updatelight 200, PYRAMID_LIGHT_SET_RADIUS
# 41 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 28 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 33 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 29 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 30 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
	end

BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 34 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special ShowMapNamePopup
# 35 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_F, 0
	end

BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 45 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 46 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_1, 1
# 47 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 48 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_TEMP_C, 0
	goto_if_eq BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2
BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1:
	end

BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_2:
# 49 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setobjectxyperm LOCALID_BRANDON, 0, 0
	goto BattleFrontier_BattlePyramidTop_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0_1


BattleFrontier_BattlePyramidTop_EventScript_Attendant::
# 57 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	lock_faceplayer
# 58 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_TEMP_D, 0
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_Attendant_2
# 63 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_TEMP_C, FRONTIER_BRAIN_NOT_READY
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_Attendant_5
# 70 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo, MSGBOX_DEFAULT
# 71 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 72 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_EventScript_Attendant_Movement_0
# 73 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 74 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePyramidTop_EventScript_Attendant_Movement_1
# 75 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 76 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_EventScript_Attendant_Movement_2
# 77 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 78 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid
# 79 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 80 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_B_POINTS
# 81 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 82 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 83 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
	return

BattleFrontier_BattlePyramidTop_EventScript_Attendant_2:
# 59 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_StepForwardWhenReady, MSGBOX_DEFAULT
# 60 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
	end

BattleFrontier_BattlePyramidTop_EventScript_Attendant_5:
# 64 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere, MSGBOX_DEFAULT
# 65 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_EventScript_Attendant_Movement_0
# 66 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	setvar VAR_TEMP_D, 1
# 67 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
	end


BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon::
# 87 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
# 88 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 7, 13
# 89 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitstate
	end


BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon::
# 94 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	lockall
# 95 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	switch VAR_TEMP_C
# 96 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_3
# 97 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_4
# 98 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_5
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_1:
# 100 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 101 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_7
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_6:
# 104 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SpawnCameraObject
# 105 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_CAMERA, BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_Movement_0
# 106 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 107 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure, MSGBOX_DEFAULT
# 108 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 109 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 110 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, Common_Movement_RunDown
# 111 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 112 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon, MSGBOX_DEFAULT
# 113 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver
	end

BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_3:
# 96 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_1

BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_4:
# 97 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_1

BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_5:
# 98 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_1

BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_7:
# 102 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_6


BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech::
# 118 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, Common_Movement_RunDown
# 119 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 120 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver
	end


BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver::
# 125 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle, MSGBOX_DEFAULT
# 126 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle
# 127 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 128 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_2
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_1:
# 141 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	return

BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_2:
# 129 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getsymbols
# 130 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_5
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_4:
# 139 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_1

BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_5:
# 131 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease, MSGBOX_DEFAULT
# 132 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 133 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol
# 134 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 135 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 136 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_givesymbol
# 137 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonSilver_4


BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold::
# 145 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 146 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold_2
BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold_1:
# 149 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	special SpawnCameraObject
# 150 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_CAMERA, BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_Movement_0
# 151 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 152 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned, MSGBOX_DEFAULT
# 153 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 154 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 155 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, Common_Movement_RunDown
# 156 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 157 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter, MSGBOX_DEFAULT
# 158 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold
	end

BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold_2:
# 147 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech
	goto BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold_1


BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech::
# 163 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	applymovement LOCALID_BRANDON, Common_Movement_RunDown
# 164 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmovement 0
# 165 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold
	return


BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold::
# 169 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_EverythingYouHave, MSGBOX_DEFAULT
# 170 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	call BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle
# 171 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playbgm MUS_B_PYRAMID_TOP, FALSE
# 172 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_2
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_1:
# 185 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	return

BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_2:
# 173 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_getsymbols
# 174 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ne BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_5
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_4:
# 183 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_1

BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_5:
# 175 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis, MSGBOX_DEFAULT
# 176 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 177 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	message BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine
# 178 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitmessage
# 179 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitfanfare
# 180 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	frontier_givesymbol
# 181 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	msgbox BattleFrontier_BattlePyramidTop_Text_FarewellForNow, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandonGold_4


BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle::
# 189 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	closemessage
# 190 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	dofacilitytrainerbattle FACILITY_BATTLE_PYRAMID
# 191 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	waitstate
	return


# 65 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_Attendant_Movement_0:
# 65 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_right
# 65 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_faster_left
	step_end

# 74 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_Attendant_Movement_1:
# 74 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 74 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 74 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 74 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 74 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_up
# 74 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_faster_down
	step_end

# 76 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_Attendant_Movement_2:
# 76 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	walk_left
# 76 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	step_faster_up
	step_end

# 105 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_Movement_0:
# 105 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	creep_up
# 105 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	creep_up
# 105 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	delay_16
	step_end

BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo::
# 195 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "It is a delight to see you here!\n"
	.string "You have reached the summit of\l"
	.string "the BATTLE PYRAMID!\p"
	.string "Above here is the PYRAMID's\n"
	.string "lookout point.\p"
	.string "It is a place open only to those\n"
	.string "who have conquered the PYRAMID.\p"
	.string "Now, please!\n"
	.string "Up you go!$"

BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid::
# 210 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The PYRAMID's new conqueror!\n"
	.string "Let the name {PLAYER} be known!$"

BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere::
# 215 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "It is a delight to see you here!\p"
	.string "Unfortunately, you were second by\n"
	.string "a mere fraction of time!\p"
	.string "Our chief has already conquered\n"
	.string "the PYRAMID ahead of you.\p"
	.string "However, my young explorer…\n"
	.string "You are a TRAINER!\p"
	.string "Assert your power and take the glory\n"
	.string "of the pinnacle from our chief!\p"
	.string "Now, please! When you are ready,\n"
	.string "take one more step of courage!$"

BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure::
# 234 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Young adventurer…\p"
	.string "Wouldn't you agree that explorations\n"
	.string "are the grandest of adventures?\p"
	.string "Your own wits!\p"
	.string "Your own strength!\p"
	.string "Your own POKéMON!\p"
	.string "And, above all, only your own courage\n"
	.string "to lead you through unknown worlds…$"

BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon::
# 250 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Aah, yes, indeed this life is grand!\n"
	.string "Grand, it is! Eh?\p"
	.string "I'm BRANDON!\p"
	.string "I'm the PYRAMID KING, which means\n"
	.string "I'm in charge here.\p"
	.string "Most people call me the chief!\p"
	.string "You coming here means you have\n"
	.string "that much confidence in yourself,\l"
	.string "am I right?\p"
	.string "Hahahah!\n"
	.string "This should be exciting!$"

BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle::
# 269 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, then!\n"
	.string "Bring your courage to our battle!$"

BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease::
# 274 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "BRANDON: Hahahah! Grand it was!\n"
	.string "Grand, yes, indeed!\p"
	.string "Well done! You've earned recognition!\n"
	.string "Your FRONTIER PASS, please!$"

BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol::
# 282 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The Brave Symbol was embossed on\n"
	.string "the FRONTIER PASS!$"

BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting::
# 287 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Young explorer!\n"
	.string "I look forward to our next meeting!$"

BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned::
# 292 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "BRANDON: …You've finally returned,\n"
	.string "young explorer…\p"
	.string "Your love of adventure seems to come\n"
	.string "deep from within your heart…\p"
	.string "Yes… You are exactly as I was in\n"
	.string "my own youth…\p"
	.string "… … …Ah…\p"
	.string "The passionate!\p"
	.string "The dangerous!\p"
	.string "The desperate!\p"
	.string "Those days of death-defying,\n"
	.string "life-affirming adventures are back…$"

BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter::
# 314 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, then!\p"
	.string "I sense my own courage is off\n"
	.string "the meter!$"

BattleFrontier_BattlePyramidTop_Text_EverythingYouHave::
# 321 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Everything you have!\n"
	.string "I'm braced for it all!$"

BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis::
# 326 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "BRANDON: Hahahah!\n"
	.string "Remarkable!\l"
	.string "Yes, it's grand, indeed!\p"
	.string "Young explorer!\p"
	.string "You've bested me through and through!\n"
	.string "Here! I want you to have this!$"

BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine::
# 337 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "The Brave Symbol took on\n"
	.string "a golden shine!$"

BattleFrontier_BattlePyramidTop_Text_FarewellForNow::
# 342 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Ah, yes! It just goes to show that\n"
	.string "I have much to learn still!\p"
	.string "May our paths cross again!\n"
	.string "Farewell for now, young explorer!$"

BattleFrontier_BattlePyramidTop_Text_StepForwardWhenReady::
# 350 "data/maps/BattleFrontier_BattlePyramidTop/scripts.pory"
	.string "Now, when you are ready, take courage\n"
	.string "and step forward.$"
