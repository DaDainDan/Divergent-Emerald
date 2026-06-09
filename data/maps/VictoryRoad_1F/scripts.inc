VictoryRoad_1F_MapScripts::
# 2 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

VictoryRoad_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_VICTORY_ROAD_1F_STATE, 1
	goto_if_eq VictoryRoad_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
VictoryRoad_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_VICTORY_ROAD_1F_STATE, 2
	goto_if_eq VictoryRoad_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
VictoryRoad_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

VictoryRoad_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, 2, 24
# 5 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, MOVEMENT_TYPE_FACE_DOWN
	goto VictoryRoad_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

VictoryRoad_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 8 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, 3, 24
# 9 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectmovementtype LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, MOVEMENT_TYPE_FACE_DOWN
	goto VictoryRoad_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


VictoryRoad_1F_EventScript_WallyBattleTrigger1::
# 16 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 17 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 18 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_EventScript_WallyBattleTrigger1_Movement_0
# 20 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 21 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
	end


VictoryRoad_1F_EventScript_WallyBattleTrigger2::
# 26 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 27 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 28 "data/maps/VictoryRoad_1F/scripts.pory"
	addobject LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_VICTORY_ROAD_ENTRANCE_WALLY, VictoryRoad_1F_EventScript_WallyBattleTrigger2_Movement_0
# 30 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 31 "data/maps/VictoryRoad_1F/scripts.pory"
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
	end


VictoryRoad_1F_EventScript_WallyEntranceBattle::
# 36 "data/maps/VictoryRoad_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 37 "data/maps/VictoryRoad_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
# 39 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyEntranceDefeat
# 40 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
# 41 "data/maps/VictoryRoad_1F/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
# 42 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_VICTORY_ROAD_ENTRANCE_WALLY
# 43 "data/maps/VictoryRoad_1F/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 44 "data/maps/VictoryRoad_1F/scripts.pory"
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
# 45 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
	end


VictoryRoad_1F_EventScript_EntranceWally::
# 51 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
	end


VictoryRoad_1F_EventScript_ExitWally::
# 57 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/VictoryRoad_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq VictoryRoad_1F_EventScript_ExitWally_2
# 63 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_ExitWally_2:
# 59 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_rematch TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
# 60 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_1F_EventScript_Edgar::
# 68 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
# 69 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_1F_EventScript_Albert::
# 74 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
# 75 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_1F_EventScript_Hope::
# 80 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
# 81 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_1F_EventScript_Quincy::
# 86 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
# 87 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_1F_EventScript_Katelynn::
# 92 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
# 93 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
	end


# 19 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger1_Movement_0:
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 19 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
	step_end

# 29 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_WallyBattleTrigger2_Movement_0:
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_left
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	walk_up
	step_end

VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore::
# 97 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
	.string "I bet you're surprised to see me here!\p"
	.string "I made it all the way here, and it's\n"
	.string "all thanks to you!\p"
	.string "{PLAYER}, losing to you that time\n"
	.string "made me stronger!\p"
	.string "But I'm not going to lose anymore!\p"
	.string "I'm going to win! For the POKéMON who\n"
	.string "gave me courage and strength!\p"
	.string "Okay… Here I come!$"

VictoryRoad_1F_Text_WallyEntranceDefeat::
# 116 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
	.string "{PLAYER}, you are strong, after all!$"

VictoryRoad_1F_Text_WallyPostEntranceBattle::
# 121 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: I couldn't beat you today,\n"
	.string "{PLAYER}, but one of these days, I'll\l"
	.string "catch up to you!$"

VictoryRoad_1F_Text_WallyIntro::
# 127 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: Hi! {PLAYER}!\p"
	.string "I've gotten stronger since that last\n"
	.string "time! I wanted to show you, {PLAYER}!\p"
	.string "Okay… Here I come!$"

VictoryRoad_1F_Text_WallyDefeat::
# 136 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Wow!\n"
	.string "{PLAYER}, you are strong, after all!$"

VictoryRoad_1F_Text_WallyPostBattle::
# 141 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "WALLY: I couldn't beat you this time,\n"
	.string "too… But one of these days, {PLAYER},\l"
	.string "I'm going to catch up to you…\p"
	.string "And challenge the POKéMON LEAGUE!$"

VictoryRoad_1F_Text_EdgarIntro::
# 149 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I've made it this far a couple times,\n"
	.string "but the last stretch is so long…$"

VictoryRoad_1F_Text_EdgarDefeat::
# 154 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "My dream ends here again…$"

VictoryRoad_1F_Text_EdgarPostBattle::
# 158 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You've made it this far. Keep the\n"
	.string "momentum going and become the\l"
	.string "CHAMPION! If anyone can, it's you!$"

VictoryRoad_1F_Text_AlbertIntro::
# 164 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I didn't come all this way to lose now.\n"
	.string "That possibility doesn't exist!$"

VictoryRoad_1F_Text_AlbertDefeat::
# 169 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Impossible…\n"
	.string "I lost?$"

VictoryRoad_1F_Text_AlbertPostBattle::
# 174 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I lost here…\p"
	.string "That means I lack the qualifications\n"
	.string "to become the CHAMPION…$"

VictoryRoad_1F_Text_HopeIntro::
# 181 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This seemingly infinite and harsh road\n"
	.string "lives up to its name of VICTORY.$"

VictoryRoad_1F_Text_HopeDefeat::
# 186 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Your battle style is fantastic…$"

VictoryRoad_1F_Text_HopePostBattle::
# 190 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "You seem to have the potential for\n"
	.string "becoming the CHAMPION.$"

VictoryRoad_1F_Text_QuincyIntro::
# 195 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "What is the VICTORY ROAD?\n"
	.string "I'll tell you if you win!$"

VictoryRoad_1F_Text_QuincyDefeat::
# 200 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Okay!\n"
	.string "Well done!$"

VictoryRoad_1F_Text_QuincyPostBattle::
# 205 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Getting through here safely--that's\n"
	.string "the final test for any TRAINER aiming\l"
	.string "to become the POKéMON CHAMPION.\p"
	.string "That's why it's called the VICTORY\n"
	.string "ROAD.$"

VictoryRoad_1F_Text_KatelynnIntro::
# 214 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "I have nothing to say to anyone\n"
	.string "that's come this far. Come on!$"

VictoryRoad_1F_Text_KatelynnDefeat::
# 219 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "This is a disgrace…$"

VictoryRoad_1F_Text_KatelynnPostBattle::
# 223 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Humph, go right on ahead.\n"
	.string "See if I care.$"
