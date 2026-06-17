SilphCo_7F_Frlg_MapScripts::
# 2 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
# 14 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_7F_DOOR_1, SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_7F_DOOR_2, SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5
SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 9 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_7F_DOOR_3, SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_8
SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_7:
	end

SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call EventScript_Close7FDoor1
	goto SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 7 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call EventScript_Close7FDoor2
	goto SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4

SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 10 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call EventScript_Close7FDoor3
	goto SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_7

SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 16 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_SILPH_CO_7F_WORKER_M2, MOVEMENT_TYPE_FACE_UP
	goto SilphCo_7F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


SilphCo_7F_EventScript_RivalTriggerTop::
# 23 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lockall
# 24 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 25 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene
	end


SilphCo_7F_EventScript_RivalTriggerBottom::
# 30 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lockall
# 31 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 32 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene
	end


SilphCo_7F_EventScript_RivalScene::
# 37 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 38 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 39 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, Common_Movement_ExclamationMark
# 40 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmovement 0
# 41 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 42 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, Common_Movement_Delay48
# 43 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmovement 0
# 44 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_RivalWhatKeptYou
# 45 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq SilphCo_7F_EventScript_RivalScene_2
SilphCo_7F_EventScript_RivalScene_1:
# 50 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_RivalIntro
# 51 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SILPH_CO_RIVAL
# 52 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	switch VAR_STARTER_MON
# 53 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	case CHOSE_BULBASAUR, SilphCo_7F_EventScript_RivalScene_6
# 54 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	case CHOSE_SQUIRTLE, SilphCo_7F_EventScript_RivalScene_7
# 55 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	case CHOSE_CHARMENDER, SilphCo_7F_EventScript_RivalScene_8
SilphCo_7F_EventScript_RivalScene_4:
# 57 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_RivalPostBattle
# 58 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	closemessage
# 59 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 60 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 61 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	case 0, SilphCo_7F_EventScript_RivalScene_11
# 62 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	case 1, SilphCo_7F_EventScript_RivalScene_12
SilphCo_7F_EventScript_RivalScene_9:
# 64 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmovement 0
# 65 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	playse SE_WARP_IN
# 66 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	fadedefaultbgm
# 67 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_CO_RIVAL
# 68 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitse
# 69 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SILPH_CO_7F, 1
# 70 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	releaseall
	end

SilphCo_7F_EventScript_RivalScene_2:
# 46 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	closemessage
# 47 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, Common_Movement_WalkUp
# 48 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmovement 0
	goto SilphCo_7F_EventScript_RivalScene_1

SilphCo_7F_EventScript_RivalScene_6:
# 53 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_CHARMANDER, SilphCo_7F_Text_RivalDefeat
	goto SilphCo_7F_EventScript_RivalScene_4

SilphCo_7F_EventScript_RivalScene_7:
# 54 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_BULBASAUR, SilphCo_7F_Text_RivalDefeat
	goto SilphCo_7F_EventScript_RivalScene_4

SilphCo_7F_EventScript_RivalScene_8:
# 55 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_SQUIRTLE, SilphCo_7F_Text_RivalDefeat
	goto SilphCo_7F_EventScript_RivalScene_4

SilphCo_7F_EventScript_RivalScene_11:
# 61 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, SilphCo_7F_EventScript_RivalScene_Movement_0
	goto SilphCo_7F_EventScript_RivalScene_9

SilphCo_7F_EventScript_RivalScene_12:
# 62 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_RIVAL, SilphCo_7F_EventScript_RivalScene_Movement_1
	goto SilphCo_7F_EventScript_RivalScene_9


SilphCo_7F_EventScript_LaprasGuy::
# 75 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lock_faceplayer
# 76 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_LAPRAS_FROM_SILPH, SilphCo_7F_EventScript_LaprasGuy_2
# 80 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_HaveMonForSavingUs
# 81 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LAPRAS
	givemon SPECIES_LAPRAS, 25
# 0 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq SilphCo_7F_EventScript_LaprasGuy_5
SilphCo_7F_EventScript_LaprasGuy_4:
# 85 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 86 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 87 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 88 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	message SilphCo_7F_Text_ObtainedLaprasFromEmployee
# 89 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitmessage
# 90 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	waitfanfare
# 91 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LAPRAS
# 92 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 93 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	switch VAR_0x8007
# 94 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	case MON_GIVEN_TO_PARTY, SilphCo_7F_EventScript_LaprasGuy_9
# 99 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	case MON_GIVEN_TO_PC, SilphCo_7F_EventScript_LaprasGuy_10
SilphCo_7F_EventScript_LaprasGuy_7:
# 105 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 106 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_ExplainLapras
# 107 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	setflag FLAG_GOT_LAPRAS_FROM_SILPH
	release_end

SilphCo_7F_EventScript_LaprasGuy_2:
# 77 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_RocketBossWentToBoardroom
	release_end

SilphCo_7F_EventScript_LaprasGuy_5:
# 83 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto SilphCo_7F_EventScript_LaprasGuy_4

SilphCo_7F_EventScript_LaprasGuy_9:
# 95 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SilphCo_7F_EventScript_LaprasGuy_11
	goto SilphCo_7F_EventScript_LaprasGuy_7

SilphCo_7F_EventScript_LaprasGuy_10:
# 100 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SilphCo_7F_EventScript_LaprasGuy_14
SilphCo_7F_EventScript_LaprasGuy_13:
# 103 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto SilphCo_7F_EventScript_LaprasGuy_7

SilphCo_7F_EventScript_LaprasGuy_11:
# 96 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 97 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto SilphCo_7F_EventScript_LaprasGuy_7

SilphCo_7F_EventScript_LaprasGuy_14:
# 101 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto SilphCo_7F_EventScript_LaprasGuy_13


SilphCo_7F_EventScript_WorkerM1::
# 112 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lock_faceplayer
# 113 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_7F_EventScript_WorkerM1_2
# 117 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_RocketsAfterMasterBall
	release_end

SilphCo_7F_EventScript_WorkerM1_2:
# 114 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_CanceledMasterBallProject
	release_end


SilphCo_7F_EventScript_WorkerM2::
# 122 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lock_faceplayer
# 123 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_7F_EventScript_WorkerM2_2
# 127 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_BadIfTeamRocketTookOver
	release_end

SilphCo_7F_EventScript_WorkerM2_2:
# 124 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_WowYouChasedOffTeamRocket
	release_end


SilphCo_7F_EventScript_WorkerF::
# 132 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	lock_faceplayer
# 133 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_SILPH_CO_11F, 1
	goto_if_ge SilphCo_7F_EventScript_WorkerF_2
# 137 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_ReallyDangerousHere
	release_end

SilphCo_7F_EventScript_WorkerF_2:
# 134 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_ThankYouSoMuch
	release_end


SilphCo_7F_EventScript_FloorSign::
# 142 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_7F_EventScript_Joshua::
# 147 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JOSHUA, SilphCo_7F_Text_JoshuaIntro, SilphCo_7F_Text_JoshuaDefeat
# 148 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_7F_EventScript_Grunt1::
# 153 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_33, SilphCo_7F_Text_Grunt1Intro, SilphCo_7F_Text_Grunt1Defeat
# 154 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_7F_EventScript_Grunt2::
# 159 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_34, SilphCo_7F_Text_Grunt2Intro, SilphCo_7F_Text_Grunt2Defeat
# 160 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_7F_EventScript_Grunt3::
# 165 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_35, SilphCo_7F_Text_Grunt3Intro, SilphCo_7F_Text_Grunt3Defeat
# 166 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	msgbox SilphCo_7F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


# 61 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_Movement_0:
# 61 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 61 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 61 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 61 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_up
# 61 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	delay_16
	step_end

# 62 "data/maps/SilphCo_7F_Frlg/scripts.pory"
SilphCo_7F_EventScript_RivalScene_Movement_1:
# 62 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_left
# 62 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_up
# 62 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 62 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 62 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 62 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	walk_right
# 62 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	delay_16
	step_end

SilphCo_7F_Text_HaveMonForSavingUs::
# 170 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Oh! Hi! You're not a ROCKET!\n"
	.string "You came to save us?\l"
	.string "Why, thank you!\p"
	.string "I want you to have this POKéMON\n"
	.string "for saving us.$"

SilphCo_7F_Text_ObtainedLaprasFromEmployee::
# 179 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "{PLAYER} obtained a LAPRAS from\n"
	.string "the SILPH employee!$"

SilphCo_7F_Text_ExplainLapras::
# 184 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "It's a LAPRAS.\n"
	.string "It's a very intelligent POKéMON.\p"
	.string "We kept it in our lab, but it will\n"
	.string "be much better off with you.\p"
	.string "I think you will be a good TRAINER\n"
	.string "for LAPRAS!\p"
	.string "It's a good swimmer.\n"
	.string "It'll give you a lift across water!$"

SilphCo_7F_Text_RocketBossWentToBoardroom::
# 198 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "TEAM ROCKET's BOSS went to the\n"
	.string "boardroom!\p"
	.string "Is our PRESIDENT okay?\n"
	.string "I'm worried.$"

SilphCo_7F_Text_RocketsAfterMasterBall::
# 206 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "TEAM ROCKET was after the MASTER\n"
	.string "BALL, which catches any POKéMON.$"

SilphCo_7F_Text_CanceledMasterBallProject::
# 211 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "We canceled the MASTER BALL\n"
	.string "project because of TEAM ROCKET.$"

SilphCo_7F_Text_BadIfTeamRocketTookOver::
# 216 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "It would be bad if TEAM ROCKET\n"
	.string "took over SILPH or our POKéMON.$"

SilphCo_7F_Text_WowYouChasedOffTeamRocket::
# 221 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Wow!\p"
	.string "You chased off TEAM ROCKET all by\n"
	.string "yourself?$"

SilphCo_7F_Text_ReallyDangerousHere::
# 228 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You!\n"
	.string "It's really dangerous here!\p"
	.string "You came to save me?\n"
	.string "You can't!$"

SilphCo_7F_Text_ThankYouSoMuch::
# 236 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Thank you so much!$"

SilphCo_7F_Text_Grunt3Intro::
# 240 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Uh-oh!\n"
	.string "I smell a little mouse!$"

SilphCo_7F_Text_Grunt3Defeat::
# 245 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Lights out!$"

SilphCo_7F_Text_Grunt3PostBattle::
# 249 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "You won't find my BOSS by just\n"
	.string "scurrying around!$"

SilphCo_7F_Text_JoshuaIntro::
# 254 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Heheh!\p"
	.string "You mistook me for a SILPH worker?$"

SilphCo_7F_Text_JoshuaDefeat::
# 260 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I'm done!$"

SilphCo_7F_Text_JoshuaPostBattle::
# 264 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Despite your age, you are a\n"
	.string "skilled TRAINER!$"

SilphCo_7F_Text_Grunt1Intro::
# 269 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "I am one of the four ROCKET\n"
	.string "BROTHERS!$"

SilphCo_7F_Text_Grunt1Defeat::
# 274 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Aack!\n"
	.string "Brothers, I lost!$"

SilphCo_7F_Text_Grunt1PostBattle::
# 279 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Doesn't matter.\n"
	.string "My brothers will repay the favor!$"

SilphCo_7F_Text_Grunt2Intro::
# 284 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "A child intruder?\n"
	.string "That must be you!$"

SilphCo_7F_Text_Grunt2Defeat::
# 289 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Fine!\n"
	.string "I lost!$"

SilphCo_7F_Text_Grunt2PostBattle::
# 294 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Go on home before my BOSS gets\n"
	.string "ticked off!$"

SilphCo_7F_Text_RivalWhatKeptYou::
# 299 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "{RIVAL}: What kept you, {PLAYER}?$"

SilphCo_7F_Text_RivalIntro::
# 303 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "{RIVAL}: Hahaha! I thought you'd\n"
	.string "turn up if I waited here!\p"
	.string "I guess TEAM ROCKET slowed you\n"
	.string "down! Not that I care!\p"
	.string "I saw you in SAFFRON, so I decided\n"
	.string "to see if you got better!$"

SilphCo_7F_Text_RivalDefeat::
# 314 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Oh, man!\n"
	.string "So, you are ready for BOSS\l"
	.string "ROCKET!$"

SilphCo_7F_Text_RivalPostBattle::
# 320 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "Well, {PLAYER}!\n"
	.string "I'm moving on up and ahead!\p"
	.string "By checking my POKéDEX, I'm\n"
	.string "starting to see what's strong and\l"
	.string "how they evolve!\p"
	.string "Am I a genius or what?\p"
	.string "I'm going to the POKéMON LEAGUE to\n"
	.string "boot out the ELITE FOUR.\p"
	.string "I'll become the world's most\n"
	.string "powerful TRAINER!\p"
	.string "{PLAYER}, well, good luck to you!\n"
	.string "Don't sweat it!\l"
	.string "Smell ya!$"

SilphCo_7F_Text_FloorSign::
# 341 "data/maps/SilphCo_7F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
	.string "7F$"
