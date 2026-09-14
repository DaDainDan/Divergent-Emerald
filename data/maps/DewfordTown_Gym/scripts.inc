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
	checktrainerflag TRAINER_BRYSON
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
	goto_if_set FLAG_SYS_GAME_CLEAR, DewfordTown_Gym_EventScript_Brawly_2
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	checktrainerflag TRAINER_NORMAN_2
	goto_if 1, DewfordTown_Gym_EventScript_Brawly_3
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_FLASH, DewfordTown_Gym_EventScript_Brawly_7
DewfordTown_Gym_EventScript_Brawly_6:
# 95 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
	release_end

DewfordTown_Gym_EventScript_Brawly_2:
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_DEFEATED_BRAWLY_FINAL, DewfordTown_Gym_EventScript_Brawly_10
DewfordTown_Gym_EventScript_Brawly_9:
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostFinal, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Brawly_3:
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Brawly_7:
	giveitem ITEM_HM_FLASH
# 0 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_13
DewfordTown_Gym_EventScript_Brawly_12:
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
	goto DewfordTown_Gym_EventScript_Brawly_6

DewfordTown_Gym_EventScript_Brawly_10:
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyFinalIntro, MSGBOX_DEFAULT
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyFinalDefeat
	goto DewfordTown_Gym_EventScript_Brawly_9

DewfordTown_Gym_EventScript_Brawly_13:
# 90 "data/maps/DewfordTown_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto DewfordTown_Gym_EventScript_Brawly_12


DewfordTown_Gym_EventScript_BrawlyDefeated::
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	playse SE_SWITCH
# 101 "data/maps/DewfordTown_Gym/scripts.pory"
	animateflash 0
# 102 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 107 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 108 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_HIDE_BIKE_SHOP_BALL
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
	giveitem ITEM_HM_FLASH
# 0 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Gym_EventScript_BrawlyDefeated_2
DewfordTown_Gym_EventScript_BrawlyDefeated_1:
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
	release_end

DewfordTown_Gym_EventScript_BrawlyDefeated_2:
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_BagIsFull
	goto DewfordTown_Gym_EventScript_BrawlyDefeated_1


DewfordTown_Gym_EventScript_Takao::
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TrainerBrightenRoom
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
	end


DewfordTown_Gym_EventScript_TrainerBrightenRoom::
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_BrightenRoom
	release_end


DewfordTown_Gym_EventScript_Jocelyn::
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_TrainerBrightenRoom
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end


DewfordTown_Gym_EventScript_Laura::
# 147 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_TrainerBrightenRoom
# 148 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end


DewfordTown_Gym_EventScript_Bryson::
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRYSON, DewfordTown_Gym_Text_BrysonIntro, DewfordTown_Gym_Text_BrysonDefeat, DewfordTown_Gym_EventScript_TrainerBrightenRoom
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrysonPostBattle, MSGBOX_AUTOCLOSE
	end


DewfordTown_Gym_EventScript_Cristian::
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_TrainerBrightenRoom
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
	end


DewfordTown_Gym_EventScript_Lilith::
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_TrainerBrightenRoom
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end


DewfordTown_Gym_EventScript_GymGuide::
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	lock_faceplayer
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GymGuide_2
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuide_5
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release_end

DewfordTown_Gym_EventScript_GymGuide_2:
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release_end

DewfordTown_Gym_EventScript_GymGuide_5:
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 178 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GymGuide_8
DewfordTown_Gym_EventScript_GymGuide_7:
	release_end

DewfordTown_Gym_EventScript_GymGuide_8:
	giveitem ITEM_TM_REVERSAL
# 0 "data/maps/DewfordTown_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Gym_EventScript_GymGuide_11
DewfordTown_Gym_EventScript_GymGuide_10:
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 183 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
	goto DewfordTown_Gym_EventScript_GymGuide_7

DewfordTown_Gym_EventScript_GymGuide_11:
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto DewfordTown_Gym_EventScript_GymGuide_10


DewfordTown_Gym_EventScript_LeftGymStatue::
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
	end


DewfordTown_Gym_EventScript_RightGymStatue::
# 198 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 199 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
	end


DewfordTown_Gym_EventScript_GymStatue::
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatue_2
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
DewfordTown_Gym_EventScript_GymStatue_1:
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
	end

DewfordTown_Gym_EventScript_GymStatue_2:
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	goto DewfordTown_Gym_EventScript_GymStatue_1


DewfordTown_Gym_Text_GymGuideAdvice::
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
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
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
	.string "Your future is bright, too!$"

DewfordTown_Gym_Text_TakaoIntro::
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
	.string "Come on!$"

DewfordTown_Gym_Text_TakaoDefeat::
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"

DewfordTown_Gym_Text_TakaoPostBattle::
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
	.string "Your technique is commendable!$"

DewfordTown_Gym_Text_JocelynIntro::
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
	.string "involved!\p"
	.string "I'll crush you!$"

DewfordTown_Gym_Text_JocelynDefeat::
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
	.string "How could I lose so easily?$"

DewfordTown_Gym_Text_JocelynPostBattle::
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
	.string "I'll use it to motivate me to train!\p"
	.string "One day I'll become a GYM LEADER…\p"
	.string "No, I'll become the POKéMON LEAGUE\n"
	.string "CHAMPION!$"

DewfordTown_Gym_Text_LauraIntro::
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
	.string "It's not my fault if you cry!$"

DewfordTown_Gym_Text_LauraDefeat::
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
	.string "I lost!$"

DewfordTown_Gym_Text_LauraPostBattle::
# 288 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
	.string "stronger.\p"
	.string "But because it's so dark, I can never\n"
	.string "see BRAWLY's face…$"

DewfordTown_Gym_Text_LilithIntro::
# 296 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
	.string "Are you stumbling around in the dark?$"

DewfordTown_Gym_Text_LilithDefeat::
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
	.string "I don't want to know you!$"

DewfordTown_Gym_Text_LilithPostBattle::
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
	.string "back at the entrance again!$"

DewfordTown_Gym_Text_BrysonIntro::
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
	.string "a sailing man!$"

DewfordTown_Gym_Text_BrysonDefeat::
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
	.string "It's not like me to lose this way!$"

DewfordTown_Gym_Text_BrysonPostBattle::
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
	.string "our GYM LEADER.$"

DewfordTown_Gym_Text_CristianIntro::
# 326 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
	.string "through me!$"

DewfordTown_Gym_Text_CristianDefeat::
# 331 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
	.string "Vastly overpowered!$"

DewfordTown_Gym_Text_CristianPostBattle::
# 336 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
	.string "Go after that BADGE!$"

DewfordTown_Gym_Text_BrawlyIntro::
# 341 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
	.string "DEWFORD's GYM LEADER!\p"
	.string "I've been churned in the rough waves\n"
	.string "of these parts, and I've grown tough\l"
	.string "in the pitch-black cave!\p"
	.string "So you wanted to challenge me?\n"
	.string "Let me see what you're made of!$"

DewfordTown_Gym_Text_BrawlyDefeat::
# 353 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
	.string "splash than I expected!\p"
	.string "You swamped me!\p"
	.string "Okay, you've got me.\n"
	.string "Take this GYM BADGE!$"

DewfordTown_Gym_Text_ReceivedKnuckleBadge::
# 363 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
	.string "from BRAWLY.$"

DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis::
# 368 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
	.string "up to Level 30, even those you get in\l"
	.string "trades, obey without question.\p"
	.string "And, you'll be able to use the HM move\n"
	.string "FLASH outside of battle.\p"
	.string "If you'd like, use this TECHNICAL\n"
	.string "MACHINE, too.$"

DewfordTown_Gym_Text_ExplainBulkUp::
# 380 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
	.string "It's a move that raises both ATTACK\n"
	.string "and DEFENSE stats.\p"
	.string "… … … … … …$"

DewfordTown_Gym_Text_RegisteredBrawly::
# 389 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
	.string "in the POKéNAV.$"

DewfordTown_Gym_Text_BrawlyPostBattle::
# 394 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
	.string "wave to cause a storm of astonishment\l"
	.string "among TRAINERS one day!$"

DewfordTown_Gym_Text_GymStatue::
# 400 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"

DewfordTown_Gym_Text_GymStatueCertified::
# 404 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

DewfordTown_Gym_Text_BrawlyPreRematch::
# 411 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{SPEAKER NAME_BRAWLY}A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Show me how much higher\n"
	.string "you've gone!$"

DewfordTown_Gym_Text_BrawlyRematchDefeat::
# 422 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
	.string "Swamped again!$"

DewfordTown_Gym_Text_BrawlyPostRematch::
# 427 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{SPEAKER NAME_BRAWLY}Battling is vast and it's deep.\n"
	.string "You can't see the bottom.\l"
	.string "It's just like the sea of HOENN!$"

DewfordTown_Gym_Text_BrawlyFinalIntro::
# 433 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{SPEAKER NAME_BRAWLY}A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Show me how much higher\n"
	.string "you've gone!$"

DewfordTown_Gym_Text_BrawlyFinalDefeat::
# 444 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
	.string "Swamped again!$"

DewfordTown_Gym_Text_BrawlyPostFinal::
# 449 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{SPEAKER NAME_BRAWLY}Battling is vast and it's deep.\n"
	.string "You can't see the bottom.\l"
	.string "It's just like the sea of HOENN!$"

DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons::
# 455 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{SPEAKER NAME_BRAWLY}A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Oh? You only have one POKéMON\n"
	.string "that can battle.\p"
	.string "I'm sorry, but I'd like you to come back\n"
	.string "with at least two POKéMON.$"
