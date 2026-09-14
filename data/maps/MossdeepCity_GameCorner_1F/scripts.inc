MossdeepCity_GameCorner_1F_MapScripts::
# 8 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 2 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_GameCorner_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MossdeepCity_GameCorner_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

MossdeepCity_GameCorner_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
	.2byte 0

MossdeepCity_GameCorner_1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_CheckTurnAttendant
	.2byte 0


MossdeepCity_GameCorner_1F_EventScript_InfoMan::
# 13 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock_faceplayer
# 14 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_InfoMan2
	release_end


MossdeepCity_GameCorner_1F_EventScript_OldMan::
# 20 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock_faceplayer
# 21 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_OldMan2
	release_end


MossdeepCity_GameCorner_1F_EventScript_IVSpecialist::
# 26 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	lock_faceplayer
# 27 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto_if_unset FLAG_MET_HYPER_TRAINER, MossdeepCity_GameCorner_1F_EventScript_IVSpecialist_2
MossdeepCity_GameCorner_1F_EventScript_IVSpecialist_1:
	checkitem ITEM_BOTTLE_CAP
# 0 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_IVSpecialist_6
MossdeepCity_GameCorner_1F_EventScript_IVSpecialist_4:
# 35 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox HyperTrainer_Text_WantHyperTraining, MSGBOX_YESNO
# 36 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_IVSpecialist_10
MossdeepCity_GameCorner_1F_EventScript_IVSpecialist_9:
# 39 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseMon
	end

MossdeepCity_GameCorner_1F_EventScript_IVSpecialist_2:
# 28 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setflag FLAG_MET_HYPER_TRAINER
# 29 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox HyperTrainer_Text_Introduction, MSGBOX_DEFAULT
	goto MossdeepCity_GameCorner_1F_EventScript_IVSpecialist_1

MossdeepCity_GameCorner_1F_EventScript_IVSpecialist_5:
# 32 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox HyperTrainer_Text_NeedABottleCap
# 33 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ComeAgain
	goto MossdeepCity_GameCorner_1F_EventScript_IVSpecialist_4

MossdeepCity_GameCorner_1F_EventScript_IVSpecialist_6:
	checkitem ITEM_GOLD_BOTTLE_CAP
# 0 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_IVSpecialist_5
	goto MossdeepCity_GameCorner_1F_EventScript_IVSpecialist_4

MossdeepCity_GameCorner_1F_EventScript_IVSpecialist_10:
# 37 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ComeAgain
	goto MossdeepCity_GameCorner_1F_EventScript_IVSpecialist_9


MossdeepCity_GameCorner_1F_EventScript_ChooseMon::
# 44 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox HyperTrainer_Text_WhichMon
# 45 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	special ChoosePartyMon
# 46 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge MossdeepCity_GameCorner_1F_EventScript_ChooseMon_2
MossdeepCity_GameCorner_1F_EventScript_ChooseMon_1:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 0 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_ChooseMon_5
MossdeepCity_GameCorner_1F_EventScript_ChooseMon_4:
# 53 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType
	end

MossdeepCity_GameCorner_1F_EventScript_ChooseMon_2:
# 47 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ComeAgain
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseMon_1

MossdeepCity_GameCorner_1F_EventScript_ChooseMon_5:
# 50 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox HyperTrainer_Text_ThatsAnEgg
# 51 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseMon
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseMon_4


MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType::
# 58 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	message HyperTrainer_Text_WhichTrainType
# 59 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitmessage
	checkitem ITEM_BOTTLE_CAP
# 0 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_2
MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_1:
	checkitem ITEM_GOLD_BOTTLE_CAP
# 0 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_5
MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_4:
# 66 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	dynmultipush MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_Text_2, 2
# 67 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	dynmultistack 30, 0, FALSE, 3, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 68 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 69 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	switch VAR_RESULT
# 70 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	case 0, MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_9
# 71 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	case 1, MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_10
# 72 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	case 2, MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_11
MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_7:
	end

MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_2:
# 61 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	dynmultipush MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_Text_0, 0
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_1

MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_5:
# 64 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	dynmultipush MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_Text_1, 1
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_4

MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_9:
# 70 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_7

MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_10:
# 71 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_7

MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_11:
# 72 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ComeAgain
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_7


MossdeepCity_GameCorner_1F_EventScript_ChooseStat::
# 78 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	message HyperTrainer_Text_WhichStat
# 79 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitmessage
# 80 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	dynmultipush MossdeepCity_GameCorner_1F_EventScript_ChooseStat_Text_0, STAT_HP
# 81 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	dynmultipush MossdeepCity_GameCorner_1F_EventScript_ChooseStat_Text_1, STAT_ATK
# 82 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	dynmultipush MossdeepCity_GameCorner_1F_EventScript_ChooseStat_Text_2, STAT_DEF
# 83 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	dynmultipush MossdeepCity_GameCorner_1F_EventScript_ChooseStat_Text_3, STAT_SPEED
# 84 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	dynmultipush MossdeepCity_GameCorner_1F_EventScript_ChooseStat_Text_4, STAT_SPATK
# 85 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	dynmultipush MossdeepCity_GameCorner_1F_EventScript_ChooseStat_Text_5, STAT_SPDEF
# 86 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	dynmultipush MossdeepCity_GameCorner_1F_EventScript_ChooseStat_Text_6, NUM_STATS
# 87 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	dynmultistack 30, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 88 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	closemessage
# 89 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, NUM_STATS
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_ChooseStat_2
MossdeepCity_GameCorner_1F_EventScript_ChooseStat_1:
# 92 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 93 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	switch VAR_0x8005
# 94 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	case STAT_HP, MossdeepCity_GameCorner_1F_EventScript_ChooseStat_6
# 95 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	case STAT_ATK, MossdeepCity_GameCorner_1F_EventScript_ChooseStat_7
# 96 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	case STAT_DEF, MossdeepCity_GameCorner_1F_EventScript_ChooseStat_8
# 97 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	case STAT_SPEED, MossdeepCity_GameCorner_1F_EventScript_ChooseStat_9
# 98 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	case STAT_SPATK, MossdeepCity_GameCorner_1F_EventScript_ChooseStat_10
# 99 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	case STAT_SPDEF, MossdeepCity_GameCorner_1F_EventScript_ChooseStat_11
MossdeepCity_GameCorner_1F_EventScript_ChooseStat_4:
# 101 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_ChooseStat_13
MossdeepCity_GameCorner_1F_EventScript_ChooseStat_12:
# 105 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox HyperTrainer_Text_ConfirmBottleCap, MSGBOX_YESNO
# 106 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne MossdeepCity_GameCorner_1F_EventScript_ChooseStat_16
MossdeepCity_GameCorner_1F_EventScript_ChooseStat_15:
	checkitem ITEM_BOTTLE_CAP
# 0 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_ChooseStat_19
MossdeepCity_GameCorner_1F_EventScript_ChooseStat_18:
# 113 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	removeitem ITEM_BOTTLE_CAP
# 114 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	switch VAR_0x8005
# 115 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	case STAT_HP, MossdeepCity_GameCorner_1F_EventScript_ChooseStat_23
# 116 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	case STAT_ATK, MossdeepCity_GameCorner_1F_EventScript_ChooseStat_24
# 117 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	case STAT_DEF, MossdeepCity_GameCorner_1F_EventScript_ChooseStat_25
# 118 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	case STAT_SPEED, MossdeepCity_GameCorner_1F_EventScript_ChooseStat_26
# 119 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	case STAT_SPATK, MossdeepCity_GameCorner_1F_EventScript_ChooseStat_27
# 120 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	case STAT_SPDEF, MossdeepCity_GameCorner_1F_EventScript_ChooseStat_28
MossdeepCity_GameCorner_1F_EventScript_ChooseStat_21:
# 122 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 123 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	waitfanfare
# 124 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox HyperTrainer_Text_Done, MSGBOX_DEFAULT
# 125 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType
	end

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_2:
# 90 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_1

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_6:
# 94 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	canhypertrain STAT_HP, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_4

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_7:
# 95 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	canhypertrain STAT_ATK, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_4

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_8:
# 96 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	canhypertrain STAT_DEF, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_4

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_9:
# 97 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	canhypertrain STAT_SPEED, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_4

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_10:
# 98 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	canhypertrain STAT_SPATK, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_4

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_11:
# 99 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	canhypertrain STAT_SPDEF, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_4

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_13:
# 102 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox HyperTrainer_Text_CantTrainThatStat
# 103 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_12

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_16:
# 107 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_15

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_19:
# 110 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox HyperTrainer_Text_NoBottleCaps
# 111 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_18

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_23:
# 115 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_21

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_24:
# 116 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_21

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_25:
# 117 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_21

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_26:
# 118 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_21

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_27:
# 119 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_21

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_28:
# 120 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseStat_21


MossdeepCity_GameCorner_1F_EventScript_TrainAllStats::
# 130 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setvar VAR_0x8006, FALSE
# 131 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	canhypertrain STAT_HP, VAR_0x8004
# 132 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_2
MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_1:
# 136 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	canhypertrain STAT_ATK, VAR_0x8004
# 137 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_5
MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_4:
# 141 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	canhypertrain STAT_DEF, VAR_0x8004
# 142 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_8
MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_7:
# 146 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	canhypertrain STAT_SPEED, VAR_0x8004
# 147 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_11
MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_10:
# 151 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	canhypertrain STAT_SPATK, VAR_0x8004
# 152 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_14
MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_13:
# 156 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	canhypertrain STAT_SPDEF, VAR_0x8004
# 157 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_17
MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_16:
# 161 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_0x8006, FALSE
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_20
MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_19:
# 165 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox HyperTrainer_Text_ConfirmGoldBottleCap, MSGBOX_YESNO
# 166 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_23
MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_22:
	checkitem ITEM_GOLD_BOTTLE_CAP
# 0 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_26
MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_25:
# 173 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	removeitem ITEM_GOLD_BOTTLE_CAP
# 174 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto_if_set FLAG_TEMP_1, MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_29
MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_28:
# 177 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto_if_set FLAG_TEMP_2, MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_32
MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_31:
# 180 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto_if_set FLAG_TEMP_3, MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_35
MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_34:
# 183 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto_if_set FLAG_TEMP_4, MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_38
MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_37:
# 186 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_41
MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_40:
# 189 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto_if_set FLAG_TEMP_6, MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_44
MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_43:
# 192 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox HyperTrainer_Text_MaxedOut, MSGBOX_DEFAULT
# 193 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseMon
	end

MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_2:
# 133 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setvar VAR_0x8006, TRUE
# 134 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_1

MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_5:
# 138 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setvar VAR_0x8006, TRUE
# 139 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setflag FLAG_TEMP_2
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_4

MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_8:
# 143 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setvar VAR_0x8006, TRUE
# 144 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setflag FLAG_TEMP_3
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_7

MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_11:
# 148 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setvar VAR_0x8006, TRUE
# 149 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setflag FLAG_TEMP_4
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_10

MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_14:
# 153 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setvar VAR_0x8006, TRUE
# 154 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setflag FLAG_TEMP_5
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_13

MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_17:
# 158 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setvar VAR_0x8006, TRUE
# 159 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	setflag FLAG_TEMP_6
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_16

MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_20:
# 162 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox HyperTrainer_Text_AlreadyPerfect
# 163 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_19

MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_23:
# 167 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_22

MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_26:
# 170 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox HyperTrainer_Text_NoGoldBottleCap
# 171 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	goto MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_25

MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_29:
# 175 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_28

MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_32:
# 178 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_31

MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_35:
# 181 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_34

MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_38:
# 184 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_37

MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_41:
# 187 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_40

MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_44:
# 190 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
	goto MossdeepCity_GameCorner_1F_EventScript_TrainAllStats_43


MossdeepCity_GameCorner_1F_EventScript_ComeAgain::
# 198 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox HyperTrainer_Text_ComeAgain
	release_end


RS_MysteryEventsHouse_EventScript_Door::
# 298 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	msgbox RS_MysteryEventsHouse_Text_DoorIsLocked, MSGBOX_SIGN
	end


MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_Text_0:
# 61 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "BOTTLE CAP$"

MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_Text_1:
# 64 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "GOLD BOTTLE CAP$"

MossdeepCity_GameCorner_1F_EventScript_ChooseTrainType_Text_2:
# 66 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "NOTHING$"

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_Text_0:
# 80 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "HP$"

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_Text_1:
# 81 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "ATTACK$"

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_Text_2:
# 82 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "DEFENSE$"

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_Text_3:
# 83 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "SPEED$"

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_Text_4:
# 84 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "SP. ATK$"

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_Text_5:
# 85 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "SP. DEF$"

MossdeepCity_GameCorner_1F_EventScript_ChooseStat_Text_6:
# 86 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "CANCEL$"

HyperTrainer_Text_Introduction::
# 202 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Ah, a fellow gamer.\n"
	.string "This place is usually pretty dead.\p"
	.string "Say, do you have any BOTTLE CAPS?\n"
	.string "I'm a big collector.\p"
	.string "If you bring me some, I'll enhance your \n"
	.string "POKéMON's stats!\p"
	.string "How? Pyschic mumbo-jumbo, what do you\n"
	.string "want me to say?$"

HyperTrainer_Text_WantHyperTraining::
# 216 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Nice! You've got some BOTTLE CAPS.\n"
	.string "Are you interested in a trade?$"

HyperTrainer_Text_NeedABottleCap::
# 221 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Where are your CAPS, dude?\p"
	.string "Did you just want to team up on\n"
	.string "POKéMON JUMP?$"

HyperTrainer_Text_WhichMon::
# 228 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Which POKéMON were you thinking?$"

HyperTrainer_Text_ThatsAnEgg::
# 232 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "I can't do crap with an EGG, man.$"

HyperTrainer_Text_WhichTrainType::
# 236 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "What CAP were you looking to trade?\p"
	.string "For regular CAPS, I'll enhance one stat.\n"
	.string "For GOLD CAPS, I'll enhance them all.$"

HyperTrainer_Text_WhichStat::
# 243 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Which stat should I enhance?$"

HyperTrainer_Text_CantTrainThatStat::
# 247 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "That stat's already perfected.\n"
	.string "You'll have to pick a different one.$"

HyperTrainer_Text_ConfirmBottleCap::
# 252 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Alright just give me the BOTTLE CAP and \n"
	.string "we can get started. Okay?$"

HyperTrainer_Text_NoBottleCaps::
# 257 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Hold on, you're out of BOTTLE CAPS!$"

HyperTrainer_Text_ConfirmGoldBottleCap::
# 261 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "That GOLD BOTTLE CAP is a beauty.\n"
	.string "You ready to give it up?$"

HyperTrainer_Text_NoGoldBottleCap::
# 266 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Hold on, you're out of GOLD BOTTLE\n"
	.string "CAPS!$"

HyperTrainer_Text_AlreadyPerfect::
# 271 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "That's a wicked POKéMON you've got.\p"
	.string "Even with my abilities, I don't think \n"
	.string "I can make it any stronger.$"

HyperTrainer_Text_Done::
# 278 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Your POKéMON's stat is now perfected.$"

HyperTrainer_Text_MaxedOut::
# 282 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "There you go. Absolute perfection.\n"
	.string "Just like this GOLDEN CAP I'm adding to\l"
	.string "my collection.$"

HyperTrainer_Text_ComeAgain::
# 288 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Come back if you want to play or when\n"
	.string "you've got some CAPS, man.$"

RS_MysteryEventsHouse_Text_OldManGreeting::
# 302 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "When I was young, I traveled the world\n"
	.string "as a POKéMON TRAINER.\p"
	.string "Now that I've become an old buzzard,\n"
	.string "my only amusement is watching young\l"
	.string "TRAINERS battle.$"

RS_MysteryEventsHouse_Text_DoorIsLocked::
# 311 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "The door appears to be locked.$"

RS_MysteryEventsHouse_Text_ChallengeVisitingTrainer::
# 315 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "A TRAINER named {STR_VAR_1} is\n"
	.string "visiting my home.\p"
	.string "Would you like to challenge\n"
	.string "{STR_VAR_1}?$"

RS_MysteryEventsHouse_Text_YouWontBattle::
# 323 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "You won't battle? I'm disappointed\n"
	.string "that I can't see you battle…$"

RS_MysteryEventsHouse_Text_KeepItToA3On3::
# 328 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Oh, good, good!\p"
	.string "But my house isn't all that sturdy.\p"
	.string "Could I ask you to keep it down to\n"
	.string "a 3-on-3 match?$"

RS_MysteryEventsHouse_Text_SaveYourProgress::
# 337 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Before you two battle, you should\n"
	.string "save your progress.$"

RS_MysteryEventsHouse_Text_HopeToSeeAGoodMatch::
# 342 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "I hope to see a good match!$"

RS_MysteryEventsHouse_Text_BattleTie::
# 346 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "So, it became a standoff.\p"
	.string "It was a brilliant match in which\n"
	.string "neither side conceded a step!$"

RS_MysteryEventsHouse_Text_BattleWon::
# 353 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "That was superlative!\p"
	.string "Why, it was like seeing myself in\n"
	.string "my youth again!$"

RS_MysteryEventsHouse_Text_BattleLost::
# 360 "data/maps/MossdeepCity_GameCorner_1F/scripts.pory"
	.string "Ah, too bad for you!\p"
	.string "But it was a good match.\n"
	.string "I hope you can win next time.$"
