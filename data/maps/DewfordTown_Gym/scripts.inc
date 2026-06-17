DewfordTown_Gym_MapScripts::
# 2 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DewfordTown_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
	end


DewfordTown_Gym_EventScript_SetFlashLevel::
# 9 "data/maps/DewfordTown_Gym/scripts.pory"
	checktrainerflag TRAINER_BRAWLY_1
	goto_if 1, DewfordTown_Gym_EventScript_SetFlashLevel_2
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 13 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_0x8000
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	case 0, DewfordTown_Gym_EventScript_SetFlashLevel_6
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_SetFlashLevel_7
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_SetFlashLevel_8
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_SetFlashLevel_9
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_SetFlashLevel_10
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	case 5, DewfordTown_Gym_EventScript_SetFlashLevel_11
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 1
DewfordTown_Gym_EventScript_SetFlashLevel_1:
	return

DewfordTown_Gym_EventScript_SetFlashLevel_2:
# 10 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
	goto DewfordTown_Gym_EventScript_SetFlashLevel_1

DewfordTown_Gym_EventScript_SetFlashLevel_6:
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 7
	goto DewfordTown_Gym_EventScript_SetFlashLevel_1

DewfordTown_Gym_EventScript_SetFlashLevel_7:
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 6
	goto DewfordTown_Gym_EventScript_SetFlashLevel_1

DewfordTown_Gym_EventScript_SetFlashLevel_8:
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 5
	goto DewfordTown_Gym_EventScript_SetFlashLevel_1

DewfordTown_Gym_EventScript_SetFlashLevel_9:
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 4
	goto DewfordTown_Gym_EventScript_SetFlashLevel_1

DewfordTown_Gym_EventScript_SetFlashLevel_10:
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 3
	goto DewfordTown_Gym_EventScript_SetFlashLevel_1

DewfordTown_Gym_EventScript_SetFlashLevel_11:
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 2
	goto DewfordTown_Gym_EventScript_SetFlashLevel_1


DewfordTown_Gym_EventScript_BrightenRoom::
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
# 29 "data/maps/DewfordTown_Gym/scripts.pory"
	nop1
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, VAR_0x8001
	goto_if_ne DewfordTown_Gym_EventScript_BrightenRoom_2
DewfordTown_Gym_EventScript_BrightenRoom_1:
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_BrightenRoom_2:
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_eq DewfordTown_Gym_EventScript_BrightenRoom_5
# 35 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	switch VAR_0x8000
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
	case 1, DewfordTown_Gym_EventScript_BrightenRoom_8
# 39 "data/maps/DewfordTown_Gym/scripts.pory"
	case 2, DewfordTown_Gym_EventScript_BrightenRoom_9
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	case 3, DewfordTown_Gym_EventScript_BrightenRoom_10
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	case 4, DewfordTown_Gym_EventScript_BrightenRoom_11
# 42 "data/maps/DewfordTown_Gym/scripts.pory"
	case 5, DewfordTown_Gym_EventScript_BrightenRoom_12
# 43 "data/maps/DewfordTown_Gym/scripts.pory"
	case 6, DewfordTown_Gym_EventScript_BrightenRoom_13
	goto DewfordTown_Gym_EventScript_BrightenRoom_1

DewfordTown_Gym_EventScript_BrightenRoom_5:
	return

DewfordTown_Gym_EventScript_BrightenRoom_8:
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 6
	goto DewfordTown_Gym_EventScript_BrightenRoom_1

DewfordTown_Gym_EventScript_BrightenRoom_9:
# 39 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 5
	goto DewfordTown_Gym_EventScript_BrightenRoom_1

DewfordTown_Gym_EventScript_BrightenRoom_10:
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 4
	goto DewfordTown_Gym_EventScript_BrightenRoom_1

DewfordTown_Gym_EventScript_BrightenRoom_11:
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 3
	goto DewfordTown_Gym_EventScript_BrightenRoom_1

DewfordTown_Gym_EventScript_BrightenRoom_12:
# 42 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 2
	goto DewfordTown_Gym_EventScript_BrightenRoom_1

DewfordTown_Gym_EventScript_BrightenRoom_13:
# 43 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 1
	goto DewfordTown_Gym_EventScript_BrightenRoom_1


DewfordTown_Gym_EventScript_CountTrainersDefeated::
# 51 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
	checktrainerflag TRAINER_TAKAO
	goto_if 1, DewfordTown_Gym_EventScript_CountTrainersDefeated_2
DewfordTown_Gym_EventScript_CountTrainersDefeated_1:
# 55 "data/maps/DewfordTown_Gym/scripts.pory"
	checktrainerflag TRAINER_JOCELYN
	goto_if 1, DewfordTown_Gym_EventScript_CountTrainersDefeated_5
DewfordTown_Gym_EventScript_CountTrainersDefeated_4:
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	checktrainerflag TRAINER_LAURA
	goto_if 1, DewfordTown_Gym_EventScript_CountTrainersDefeated_8
DewfordTown_Gym_EventScript_CountTrainersDefeated_7:
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	checktrainerflag TRAINER_BRENDEN
	goto_if 1, DewfordTown_Gym_EventScript_CountTrainersDefeated_11
DewfordTown_Gym_EventScript_CountTrainersDefeated_10:
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	checktrainerflag TRAINER_CRISTIAN
	goto_if 1, DewfordTown_Gym_EventScript_CountTrainersDefeated_14
DewfordTown_Gym_EventScript_CountTrainersDefeated_13:
# 67 "data/maps/DewfordTown_Gym/scripts.pory"
	checktrainerflag TRAINER_LILITH
	goto_if 1, DewfordTown_Gym_EventScript_CountTrainersDefeated_17
DewfordTown_Gym_EventScript_CountTrainersDefeated_16:
	return

DewfordTown_Gym_EventScript_CountTrainersDefeated_2:
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
	goto DewfordTown_Gym_EventScript_CountTrainersDefeated_1

DewfordTown_Gym_EventScript_CountTrainersDefeated_5:
# 56 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
	goto DewfordTown_Gym_EventScript_CountTrainersDefeated_4

DewfordTown_Gym_EventScript_CountTrainersDefeated_8:
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
	goto DewfordTown_Gym_EventScript_CountTrainersDefeated_7

DewfordTown_Gym_EventScript_CountTrainersDefeated_11:
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
	goto DewfordTown_Gym_EventScript_CountTrainersDefeated_10

DewfordTown_Gym_EventScript_CountTrainersDefeated_14:
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
	goto DewfordTown_Gym_EventScript_CountTrainersDefeated_13

DewfordTown_Gym_EventScript_CountTrainersDefeated_17:
# 68 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_0x8000, 1
	goto DewfordTown_Gym_EventScript_CountTrainersDefeated_16


DewfordTown_Gym_EventScript_Brawly::
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_2
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_Brawly_5
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
	release_end

DewfordTown_Gym_EventScript_Brawly_2:
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Brawly_5:
	giveitem ITEM_TM_BULK_UP
# 0 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_8
DewfordTown_Gym_EventScript_Brawly_7:
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
	release_end

DewfordTown_Gym_EventScript_Brawly_8:
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto DewfordTown_Gym_EventScript_Brawly_7


DewfordTown_Gym_EventScript_BrawlyDefeated::
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 95 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 101 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 102 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_eq DewfordTown_Gym_EventScript_BrawlyDefeated_2
DewfordTown_Gym_EventScript_BrawlyDefeated_1:
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 107 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
	giveitem ITEM_TM_BULK_UP
# 0 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Gym_EventScript_BrawlyDefeated_5
DewfordTown_Gym_EventScript_BrawlyDefeated_4:
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 113 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	release_end

DewfordTown_Gym_EventScript_BrawlyDefeated_2:
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_ReadyPetalburgGymForBattle
	goto DewfordTown_Gym_EventScript_BrawlyDefeated_1

DewfordTown_Gym_EventScript_BrawlyDefeated_5:
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	goto Common_EventScript_BagIsFull
	goto DewfordTown_Gym_EventScript_BrawlyDefeated_4


DewfordTown_Gym_EventScript_Takao::
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TrainerBrightenRoom
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
	end


DewfordTown_Gym_EventScript_TrainerBrightenRoom::
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
	release_end


DewfordTown_Gym_EventScript_Jocelyn::
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_TrainerBrightenRoom
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end


DewfordTown_Gym_EventScript_Laura::
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_TrainerBrightenRoom
# 145 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end


DewfordTown_Gym_EventScript_Brenden::
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_TrainerBrightenRoom
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
	end


DewfordTown_Gym_EventScript_Cristian::
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_TrainerBrightenRoom
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
	end


DewfordTown_Gym_EventScript_Lilith::
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_TrainerBrightenRoom
# 163 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end


DewfordTown_Gym_EventScript_GymGuide::
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	lock_faceplayer
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuide_2
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release_end

DewfordTown_Gym_EventScript_GymGuide_2:
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release_end


DewfordTown_Gym_EventScript_LeftGymStatue::
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
	end


DewfordTown_Gym_EventScript_RightGymStatue::
# 184 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
	end


DewfordTown_Gym_EventScript_GymStatue::
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatue_2
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
DewfordTown_Gym_EventScript_GymStatue_1:
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
	end

DewfordTown_Gym_EventScript_GymStatue_2:
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	goto DewfordTown_Gym_EventScript_GymStatue_1


DewfordTown_Gym_Text_GymGuideAdvice::
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
	.string "FIGHTING-type POKéMON.\p"
	.string "Going against him with NORMAL-type\n"
	.string "POKéMON is asking for trouble.\p"
	.string "FIGHTING POKéMON will lay a serious\n"
	.string "smack down on NORMAL POKéMON,\l"
	.string "so be careful!\p"
	.string "What's worse, the GYM is as dark as\n"
	.string "the ocean floor.\p"
	.string "But it will get brighter after defeating\n"
	.string "the TRAINERS in your way.\p"
	.string "Hey, okay, go for it!$"

DewfordTown_Gym_Text_GymGuidePostVictory::
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
	.string "Your future is bright, too!$"

DewfordTown_Gym_Text_TakaoIntro::
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
	.string "Come on!$"

DewfordTown_Gym_Text_TakaoDefeat::
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"

DewfordTown_Gym_Text_TakaoPostBattle::
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
	.string "Your technique is commendable!$"

DewfordTown_Gym_Text_JocelynIntro::
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
	.string "involved!\p"
	.string "I'll crush you!$"

DewfordTown_Gym_Text_JocelynDefeat::
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
	.string "How could I lose so easily?$"

DewfordTown_Gym_Text_JocelynPostBattle::
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
	.string "I'll use it to motivate me to train!\p"
	.string "One day I'll become a GYM LEADER…\p"
	.string "No, I'll become the POKéMON LEAGUE\n"
	.string "CHAMPION!$"

DewfordTown_Gym_Text_LauraIntro::
# 264 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
	.string "It's not my fault if you cry!$"

DewfordTown_Gym_Text_LauraDefeat::
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
	.string "I lost!$"

DewfordTown_Gym_Text_LauraPostBattle::
# 274 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
	.string "stronger.\p"
	.string "But because it's so dark, I can never\n"
	.string "see BRAWLY's face…$"

DewfordTown_Gym_Text_LilithIntro::
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
	.string "Are you stumbling around in the dark?$"

DewfordTown_Gym_Text_LilithDefeat::
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
	.string "I don't want to know you!$"

DewfordTown_Gym_Text_LilithPostBattle::
# 292 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
	.string "back at the entrance again!$"

DewfordTown_Gym_Text_BrendenIntro::
# 297 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
	.string "a sailing man!$"

DewfordTown_Gym_Text_BrendenDefeat::
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
	.string "It's not like me to lose this way!$"

DewfordTown_Gym_Text_BrendenPostBattle::
# 307 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
	.string "our GYM LEADER.$"

DewfordTown_Gym_Text_CristianIntro::
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
	.string "through me!$"

DewfordTown_Gym_Text_CristianDefeat::
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
	.string "Vastly overpowered!$"

DewfordTown_Gym_Text_CristianPostBattle::
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
	.string "Go after that BADGE!$"

DewfordTown_Gym_Text_BrawlyIntro::
# 327 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
	.string "DEWFORD's GYM LEADER!\p"
	.string "I've been churned in the rough waves\n"
	.string "of these parts, and I've grown tough\l"
	.string "in the pitch-black cave!\p"
	.string "So you wanted to challenge me?\n"
	.string "Let me see what you're made of!$"

DewfordTown_Gym_Text_BrawlyDefeat::
# 339 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
	.string "splash than I expected!\p"
	.string "You swamped me!\p"
	.string "Okay, you've got me.\n"
	.string "Take this GYM BADGE!$"

DewfordTown_Gym_Text_ReceivedKnuckleBadge::
# 349 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
	.string "from BRAWLY.$"

DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis::
# 354 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
	.string "up to Level 30, even those you get in\l"
	.string "trades, obey without question.\p"
	.string "And, you'll be able to use the HM move\n"
	.string "FLASH outside of battle.\p"
	.string "If you'd like, use this TECHNICAL\n"
	.string "MACHINE, too.$"

DewfordTown_Gym_Text_ExplainBulkUp::
# 366 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
	.string "It's a move that raises both ATTACK\n"
	.string "and DEFENSE stats.\p"
	.string "… … … … … …$"

DewfordTown_Gym_Text_RegisteredBrawly::
# 375 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
	.string "in the POKéNAV.$"

DewfordTown_Gym_Text_BrawlyPostBattle::
# 380 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
	.string "wave to cause a storm of astonishment\l"
	.string "among TRAINERS one day!$"

DewfordTown_Gym_Text_GymStatue::
# 386 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"

DewfordTown_Gym_Text_GymStatueCertified::
# 390 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

DewfordTown_Gym_Text_BrawlyPreRematch::
# 397 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Show me how much higher\n"
	.string "you've gone!$"

DewfordTown_Gym_Text_BrawlyRematchDefeat::
# 408 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
	.string "Swamped again!$"

DewfordTown_Gym_Text_BrawlyPostRematch::
# 413 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
	.string "You can't see the bottom.\l"
	.string "It's just like the sea of HOENN!$"

DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons::
# 419 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Oh? You only have one POKéMON\n"
	.string "that can battle.\p"
	.string "I'm sorry, but I'd like you to come back\n"
	.string "with at least two POKéMON.$"
