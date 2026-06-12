BattleFrontier_BattlePyramidFloor_MapScripts::
# 2 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME
# 43 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 30 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_setfloorpal
# 4 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_getstatus
# 5 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	switch VAR_TEMP_CHALLENGE_STATUS
# 6 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_3
# 7 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case 0, BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_4
# 8 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_4
BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 17 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 18 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 18 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 18 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_6
# 22 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_13
# 22 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_DREW
	goto_if_eq BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_13
# 22 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_FORFEITED
	goto_if_eq BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_13
BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_12:
# 25 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_isbattletype BATTLE_TYPE_TRAINER
# 26 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_D, 1
# 27 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_resetparty
	end

BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_3:
# 6 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobby
	goto BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_1

BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 9 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_save CHALLENGE_STATUS_SAVING
# 10 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special SavePlayerParty
# 11 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 12 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_settrainers
# 13 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 14 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_6:
# 19 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_resetparty
	end

BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_13:
# 23 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	goto BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_RESUME_12

BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 44 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_updatelight 32, PYRAMID_LIGHT_SET_RADIUS
# 45 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 31 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_D, 1, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight
# 32 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
# 37 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2
	.2byte 0

BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 33 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	playbgm MUS_B_PYRAMID, FALSE
# 34 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
	end

BattleFrontier_BattlePyramidFloor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_2:
# 38 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special ShowMapNamePopup
# 39 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 0
	end


BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight::
# 51 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	lockall
# 53 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8004, BATTLE_PYRAMID_FUNC_UPDATE_LIGHT
# 54 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8005, 4
# 55 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8006, PYRAMID_LIGHT_INCR_RADIUS
# 56 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8007, SE_SAVE
# 57 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_RESULT, 0
# 58 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop
	end


BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop::
# 63 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special CallBattlePyramidFunction
# 64 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	delay 2
# 65 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ne BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop_2
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop_1:
# 68 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_D, 0
# 69 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	releaseall
	end

BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop_2:
# 66 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop
	goto BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop_1


BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost::
# 74 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 75 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_set PYRAMID_DATA_TRAINER_FLAGS, 255
# 76 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobby
	end


BattleFrontier_BattlePyramid_EventScript_WarpToLobby::
# 81 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_updatelight 0, PYRAMID_LIGHT_SET_RADIUS
# 82 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_clearhelditems
# 83 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special HealPlayerParty
# 84 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 7, 13
# 85 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
	end


BattlePyramid_WarpToNextFloor::
# 90 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_incrementstreak
# 91 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM
# 92 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	addvar VAR_RESULT, 1
# 93 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 94 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq BattlePyramid_WarpToNextFloor_2
# 97 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_seedfloor
# 98 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 99 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_RESULT, 0
# 100 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 1, 1
BattlePyramid_WarpToNextFloor_1:
# 102 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
	end

BattlePyramid_WarpToNextFloor_2:
# 95 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP, 17, 17
	goto BattlePyramid_WarpToNextFloor_1


BattlePyramid_TrainerBattle::
# 108 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	facilitytrainerbattle FACILITY_BATTLE_PYRAMID
# 109 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_showhint
# 110 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitmessage
# 111 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitbuttonpress
# 112 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	closemessage
# 113 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	releaseall
	end


BattlePyramid_FindItemBall::
# 118 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_setitem
# 119 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	callstd STD_FIND_ITEM
# 120 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	compare VAR_0x8007, 0
	goto_if_ne BattlePyramid_FindItemBall_2
BattlePyramid_FindItemBall_1:
	end

BattlePyramid_FindItemBall_2:
# 121 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_hideitem
	goto BattlePyramid_FindItemBall_1


BattlePyramid_Retire::
# 127 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	return


BattleFacility_TrainerBattle_PlaceholderText::
# 131 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is a sample message.$"

gText_BattlePyramidConfirmRest::
# 135 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Your BATTLE PYRAMID quest will be\n"
	.string "saved so that you may quit for now.\l"
	.string "Is that okay?$"

gText_BattlePyramidConfirmRetire::
# 141 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you sure you want to quit your\n"
	.string "PYRAMID quest?$"

BattlePyramid_Text_ExitHintUp1::
# 146 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This floor's exit is in\n"
	.string "that direction: {UP_ARROW}$"

BattlePyramid_Text_ExitHintLeft1::
# 151 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This floor's exit is in\n"
	.string "that direction: {LEFT_ARROW}$"

BattlePyramid_Text_ExitHintRight1::
# 156 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This floor's exit is in\n"
	.string "that direction: {RIGHT_ARROW}$"

BattlePyramid_Text_ExitHintDown1::
# 161 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This floor's exit is in\n"
	.string "that direction: {DOWN_ARROW}$"

BattlePyramid_Text_ExitHintUp2::
# 166 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit on this floor is in\n"
	.string "the {UP_ARROW} direction.$"

BattlePyramid_Text_ExitHintLeft2::
# 171 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit on this floor is in\n"
	.string "the {LEFT_ARROW} direction.$"

BattlePyramid_Text_ExitHintRight2::
# 176 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit on this floor is in\n"
	.string "the {RIGHT_ARROW} direction.$"

BattlePyramid_Text_ExitHintDown2::
# 181 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit on this floor is in\n"
	.string "the {DOWN_ARROW} direction.$"

BattlePyramid_Text_ExitHintUp3::
# 186 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit is over\n"
	.string "that {UP_ARROW} way.$"

BattlePyramid_Text_ExitHintLeft3::
# 191 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit is over\n"
	.string "that {LEFT_ARROW} way.$"

BattlePyramid_Text_ExitHintRight3::
# 196 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit is over\n"
	.string "that {RIGHT_ARROW} way.$"

BattlePyramid_Text_ExitHintDown3::
# 201 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit is over\n"
	.string "that {DOWN_ARROW} way.$"

BattlePyramid_Text_ExitHintUp4::
# 206 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor, the exit is somewhere\n"
	.string "in the {UP_ARROW} direction.$"

BattlePyramid_Text_ExitHintLeft4::
# 211 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor, the exit is somewhere\n"
	.string "in the {LEFT_ARROW} direction.$"

BattlePyramid_Text_ExitHintRight4::
# 216 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor, the exit is somewhere\n"
	.string "in the {RIGHT_ARROW} direction.$"

BattlePyramid_Text_ExitHintDown4::
# 221 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor, the exit is somewhere\n"
	.string "in the {DOWN_ARROW} direction.$"

BattlePyramid_Text_ExitHintUp5::
# 226 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit?\n"
	.string "It's that {UP_ARROW} way.$"

BattlePyramid_Text_ExitHintLeft5::
# 231 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit?\n"
	.string "It's that {LEFT_ARROW} way.$"

BattlePyramid_Text_ExitHintRight5::
# 236 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit?\n"
	.string "It's that {RIGHT_ARROW} way.$"

BattlePyramid_Text_ExitHintDown5::
# 241 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit?\n"
	.string "It's that {DOWN_ARROW} way.$"

BattlePyramid_Text_ExitHintUp6::
# 246 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit happens to be in\n"
	.string "the {UP_ARROW} direction.$"

BattlePyramid_Text_ExitHintLeft6::
# 251 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit happens to be in\n"
	.string "the {LEFT_ARROW} direction.$"

BattlePyramid_Text_ExitHintRight6::
# 256 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit happens to be in\n"
	.string "the {RIGHT_ARROW} direction.$"

BattlePyramid_Text_ExitHintDown6::
# 261 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit happens to be in\n"
	.string "the {DOWN_ARROW} direction.$"

BattlePyramid_Text_EightItemsRemaining1::
# 266 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
	.string "There are eight items left to\n"
	.string "be found.$"

BattlePyramid_Text_SevenItemsRemaining1::
# 273 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
	.string "There are seven items left to\n"
	.string "be found.$"

BattlePyramid_Text_SixItemsRemaining1::
# 280 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
	.string "There are six items left to\n"
	.string "be found.$"

BattlePyramid_Text_FiveItemsRemaining1::
# 287 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
	.string "There are five items left to\n"
	.string "be found.$"

BattlePyramid_Text_FourItemsRemaining1::
# 294 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
	.string "There are four items left to\n"
	.string "be found.$"

BattlePyramid_Text_ThreeItemsRemaining1::
# 301 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
	.string "There are three items left to\n"
	.string "be found.$"

BattlePyramid_Text_TwoItemsRemaining1::
# 308 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
	.string "There are two items left to\n"
	.string "be found.$"

BattlePyramid_Text_OneItemRemaining1::
# 315 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
	.string "There is one item left to\n"
	.string "be found.$"

BattlePyramid_Text_ZeroItemsRemaining1::
# 322 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
	.string "There isn't anything left to\n"
	.string "be found!$"

BattlePyramid_Text_EightItemsRemaining2::
# 329 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There are eight items\n"
	.string "lying around here.$"

BattlePyramid_Text_SevenItemsRemaining2::
# 337 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There are seven items left\n"
	.string "lying around here.$"

BattlePyramid_Text_SixItemsRemaining2::
# 345 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There are six items left\n"
	.string "lying around here.$"

BattlePyramid_Text_FiveItemsRemaining2::
# 353 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There are five items left\n"
	.string "lying around here.$"

BattlePyramid_Text_FourItemsRemaining2::
# 361 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There are four items left\n"
	.string "lying around here.$"

BattlePyramid_Text_ThreeItemsRemaining2::
# 369 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There are three items left\n"
	.string "lying around here.$"

BattlePyramid_Text_TwoItemsRemaining2::
# 377 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There are two items left\n"
	.string "lying around here.$"

BattlePyramid_Text_OneItemRemaining2::
# 385 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There is just one item\n"
	.string "lying around here.$"

BattlePyramid_Text_ZeroItemsRemaining2::
# 393 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
	.string "a little secret!\p"
	.string "There isn't anything left\n"
	.string "lying around here.$"

BattlePyramid_Text_EightItemsRemaining3::
# 401 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are eight items left\n"
	.string "waiting to be found on this floor.$"

BattlePyramid_Text_SevenItemsRemaining3::
# 408 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are seven items left\n"
	.string "waiting to be found on this floor.$"

BattlePyramid_Text_SixItemsRemaining3::
# 415 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are six items left\n"
	.string "waiting to be found on this floor.$"

BattlePyramid_Text_FiveItemsRemaining3::
# 422 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are five items left\n"
	.string "waiting to be found on this floor.$"

BattlePyramid_Text_FourItemsRemaining3::
# 429 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are four items left\n"
	.string "waiting to be found on this floor.$"

BattlePyramid_Text_ThreeItemsRemaining3::
# 436 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are three items left\n"
	.string "waiting to be found on this floor.$"

BattlePyramid_Text_TwoItemsRemaining3::
# 443 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are two items left\n"
	.string "waiting to be found on this floor.$"

BattlePyramid_Text_OneItemRemaining3::
# 450 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
	.string "I reckon there's but one item left\n"
	.string "waiting to be found on this floor.$"

BattlePyramid_Text_ZeroItemsRemaining3::
# 457 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
	.string "I reckon there are no more items\n"
	.string "waiting to be found on this floor.\l"
	.string "You take care now!$"

BattlePyramid_Text_EightItemsRemaining4::
# 465 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be eight more\n"
	.string "items on the ground.$"

BattlePyramid_Text_SevenItemsRemaining4::
# 473 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be seven more\n"
	.string "items on the ground.$"

BattlePyramid_Text_SixItemsRemaining4::
# 481 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be six more\n"
	.string "items on the ground.$"

BattlePyramid_Text_FiveItemsRemaining4::
# 489 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be five more\n"
	.string "items on the ground.$"

BattlePyramid_Text_FourItemsRemaining4::
# 497 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be four more\n"
	.string "items on the ground.$"

BattlePyramid_Text_ThreeItemsRemaining4::
# 505 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be three more\n"
	.string "items on the ground.$"

BattlePyramid_Text_TwoItemsRemaining4::
# 513 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be two more\n"
	.string "items on the ground.$"

BattlePyramid_Text_OneItemRemaining4::
# 521 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appears to be only one more\n"
	.string "item on the ground.$"

BattlePyramid_Text_ZeroItemsRemaining4::
# 529 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
	.string "a hint!\p"
	.string "There appear to be no more\n"
	.string "items on the ground.$"

BattlePyramid_Text_EightItemsRemaining5::
# 537 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are eight items…$"

BattlePyramid_Text_SevenItemsRemaining5::
# 542 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are seven items…$"

BattlePyramid_Text_SixItemsRemaining5::
# 547 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are six items…$"

BattlePyramid_Text_FiveItemsRemaining5::
# 552 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are five items…$"

BattlePyramid_Text_FourItemsRemaining5::
# 557 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are four items…$"

BattlePyramid_Text_ThreeItemsRemaining5::
# 562 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are three items…$"

BattlePyramid_Text_TwoItemsRemaining5::
# 567 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are two items…$"

BattlePyramid_Text_OneItemRemaining5::
# 572 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there is one item…$"

BattlePyramid_Text_ZeroItemsRemaining5::
# 577 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
	.string "I hear there are no items…$"

BattlePyramid_Text_EightItemsRemaining6::
# 582 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
	.string "I believe there are eight more\n"
	.string "items on this floor.$"

BattlePyramid_Text_SevenItemsRemaining6::
# 589 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
	.string "I believe there are seven more\n"
	.string "items on this floor.$"

BattlePyramid_Text_SixItemsRemaining6::
# 596 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
	.string "I believe there are six more\n"
	.string "items on this floor.$"

BattlePyramid_Text_FiveItemsRemaining6::
# 603 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
	.string "I believe there are five more\n"
	.string "items on this floor.$"

BattlePyramid_Text_FourItemsRemaining6::
# 610 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
	.string "I believe there are four more\n"
	.string "items on this floor.$"

BattlePyramid_Text_ThreeItemsRemaining6::
# 617 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
	.string "I believe there are three more\n"
	.string "items on this floor.$"

BattlePyramid_Text_TwoItemsRemaining6::
# 624 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
	.string "I believe there are two more\n"
	.string "items on this floor.$"

BattlePyramid_Text_OneItemRemaining6::
# 631 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
	.string "I believe there is one more\n"
	.string "item on this floor.$"

BattlePyramid_Text_ZeroItemsRemaining6::
# 638 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
	.string "I believe there are no more\n"
	.string "items on this floor.$"

BattlePyramid_Text_SevenTrainersRemaining1::
# 645 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
	.string "But there are still seven tough\n"
	.string "TRAINERS other than me!$"

BattlePyramid_Text_SixTrainersRemaining1::
# 652 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
	.string "But there are still six tough\n"
	.string "TRAINERS other than me!$"

BattlePyramid_Text_FiveTrainersRemaining1::
# 659 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
	.string "But there are still five tough\n"
	.string "TRAINERS other than me!$"

BattlePyramid_Text_FourTrainersRemaining1::
# 666 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
	.string "But there are still four tough\n"
	.string "TRAINERS other than me!$"

BattlePyramid_Text_ThreeTrainersRemaining1::
# 673 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
	.string "But there are still three tough\n"
	.string "TRAINERS other than me!$"

BattlePyramid_Text_TwoTrainersRemaining1::
# 680 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
	.string "But there are still two tough\n"
	.string "TRAINERS other than me!$"

BattlePyramid_Text_OneTrainersRemaining1::
# 687 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
	.string "But there's still one tough\n"
	.string "TRAINER other than me!$"

BattlePyramid_Text_ZeroTrainersRemaining1::
# 694 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
	.string "There's no one left that\n"
	.string "can beat you!$"

BattlePyramid_Text_SevenTrainersRemaining2::
# 701 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
	.string "But there are seven TRAINERS left!\n"
	.string "Someone will humble you!$"

BattlePyramid_Text_SixTrainersRemaining2::
# 708 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
	.string "But there are six TRAINERS left!\n"
	.string "Someone will humble you!$"

BattlePyramid_Text_FiveTrainersRemaining2::
# 715 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
	.string "But there are five TRAINERS left!\n"
	.string "Someone will humble you!$"

BattlePyramid_Text_FourTrainersRemaining2::
# 722 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
	.string "But there are four TRAINERS left!\n"
	.string "Someone will humble you!$"

BattlePyramid_Text_ThreeTrainersRemaining2::
# 729 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
	.string "But there are three TRAINERS left!\n"
	.string "Someone will humble you!$"

BattlePyramid_Text_TwoTrainersRemaining2::
# 736 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
	.string "But there are two TRAINERS left!\n"
	.string "Someone will humble you!$"

BattlePyramid_Text_OneTrainersRemaining2::
# 743 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
	.string "But there's one TRAINER left!\n"
	.string "I'm sure you will be humbled!$"

BattlePyramid_Text_ZeroTrainersRemaining2::
# 750 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
	.string "But there are no more TRAINERS\n"
	.string "who can engage you!$"

BattlePyramid_Text_SevenTrainersRemaining3::
# 757 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
	.string "But there are seven more TRAINERS\n"
	.string "on this floor. Can you beat them all?$"

BattlePyramid_Text_SixTrainersRemaining3::
# 764 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
	.string "But there are six more TRAINERS\n"
	.string "on this floor. Can you beat them all?$"

BattlePyramid_Text_FiveTrainersRemaining3::
# 771 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
	.string "But there are five more TRAINERS\n"
	.string "on this floor. Can you beat them all?$"

BattlePyramid_Text_FourTrainersRemaining3::
# 778 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
	.string "But there are four more TRAINERS\n"
	.string "on this floor. Can you beat them all?$"

BattlePyramid_Text_ThreeTrainersRemaining3::
# 785 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
	.string "But there are three more TRAINERS\n"
	.string "on this floor. Can you beat them all?$"

BattlePyramid_Text_TwoTrainersRemaining3::
# 792 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
	.string "But there are two more TRAINERS\n"
	.string "on this floor. Can you beat them both?$"

BattlePyramid_Text_OneTrainersRemaining3::
# 799 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
	.string "But there's still one more TRAINER\n"
	.string "on this floor. Can you prevail?$"

BattlePyramid_Text_ZeroTrainersRemaining3::
# 806 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
	.string "You've gone through all the TRAINERS\n"
	.string "on this floor.$"

BattlePyramid_Text_SevenTrainersRemaining4::
# 813 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
	.string "the seven TRAINERS left on this floor.$"

BattlePyramid_Text_SixTrainersRemaining4::
# 818 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
	.string "the six TRAINERS left on this floor.$"

BattlePyramid_Text_FiveTrainersRemaining4::
# 823 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
	.string "the five TRAINERS left on this floor.$"

BattlePyramid_Text_FourTrainersRemaining4::
# 828 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
	.string "the four TRAINERS left on this floor.$"

BattlePyramid_Text_ThreeTrainersRemaining4::
# 833 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
	.string "the three TRAINERS left on this floor.$"

BattlePyramid_Text_TwoTrainersRemaining4::
# 838 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
	.string "the two TRAINERS left on this floor.$"

BattlePyramid_Text_OneTrainersRemaining4::
# 843 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could complete your sweep\n"
	.string "with the one TRAINER left on this floor.$"

BattlePyramid_Text_ZeroTrainersRemaining4::
# 848 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There isn't a single person left who\n"
	.string "can defeat you now…$"

BattlePyramid_Text_SevenTrainersRemaining5::
# 853 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
	.string "the seven expert TRAINERS who remain.$"

BattlePyramid_Text_SixTrainersRemaining5::
# 858 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
	.string "the six expert TRAINERS who remain.$"

BattlePyramid_Text_FiveTrainersRemaining5::
# 863 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
	.string "the five expert TRAINERS who remain.$"

BattlePyramid_Text_FourTrainersRemaining5::
# 868 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
	.string "the four expert TRAINERS who remain.$"

BattlePyramid_Text_ThreeTrainersRemaining5::
# 873 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
	.string "the three expert TRAINERS who remain.$"

BattlePyramid_Text_TwoTrainersRemaining5::
# 878 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
	.string "the two expert TRAINERS who remain.$"

BattlePyramid_Text_OneTrainersRemaining5::
# 883 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
	.string "the one expert TRAINER who remains.$"

BattlePyramid_Text_ZeroTrainersRemaining5::
# 888 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Your skills are beyond reproach.\p"
	.string "There are no more TRAINERS here\n"
	.string "who have any chance of beating you.$"

BattlePyramid_Text_SevenTrainersRemaining6::
# 895 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
	.string "the seven remaining TRAINERS?$"

BattlePyramid_Text_SixTrainersRemaining6::
# 900 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
	.string "the six remaining TRAINERS?$"

BattlePyramid_Text_FiveTrainersRemaining6::
# 905 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
	.string "the five remaining TRAINERS?$"

BattlePyramid_Text_FourTrainersRemaining6::
# 910 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
	.string "the four remaining TRAINERS?$"

BattlePyramid_Text_ThreeTrainersRemaining6::
# 915 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
	.string "the three remaining TRAINERS?$"

BattlePyramid_Text_TwoTrainersRemaining6::
# 920 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
	.string "the two remaining TRAINERS?$"

BattlePyramid_Text_OneTrainersRemaining6::
# 925 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
	.string "the last remaining TRAINER?$"

BattlePyramid_Text_ZeroTrainersRemaining6::
# 930 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There aren't any TRAINERS left that\n"
	.string "can take you on now…$"
