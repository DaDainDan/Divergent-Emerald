SlateportCity_OceanicMuseum_2F_MapScripts::
	.byte 0


SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
# 4 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
# 6 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 7 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 8 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1
# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_0
# 10 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 11 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2
# 12 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, Common_Movement_WalkDown
# 13 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_1
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_2
# 16 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 17 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2
# 17 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1:
# 21 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
# 22 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_ne SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_7
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_6:
# 26 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
# 27 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 29 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, Common_Movement_WalkRight
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 31 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	switch VAR_FACING
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_11
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	case DIR_WEST, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_12
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9:
# 35 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 36 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat
# 37 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious, MSGBOX_DEFAULT
# 38 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_5
# 40 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 41 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, Common_Movement_WalkRight
# 42 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis, MSGBOX_DEFAULT
# 44 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat
# 45 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_5
# 46 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 47 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, Common_Movement_StepFasterDown
# 48 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, Common_Movement_StepFasterUp
# 49 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 50 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid, MSGBOX_DEFAULT
# 51 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 52 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 35
# 53 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_OCEANIC_MUSEUM_2F_ARCHIE
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_6
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_7
# 56 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 57 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, Common_Movement_WalkRight
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning, MSGBOX_DEFAULT
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 63 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 64 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 66 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_ARCHIE
# 67 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2
# 69 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 70 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 73 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 74 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
# 75 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_PARTS
# 76 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 77 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_HEAL
# 81 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 82 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special HealPlayerParty
# 83 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	callnative UpdateFollowingPokemon
# 84 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_OCEANIC_MUSEUM_2F_CAPT_STERN
# 85 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_REGISTER_BIRCH_STATE, 0
	goto_if_eq SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_14
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_13:
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 90 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
# 91 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	release_end

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_2:
# 18 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 19 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_1

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_7:
# 23 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_OCEANIC_MUSEUM_2F_CAPT_STERN, Common_Movement_StepFasterLeft
# 24 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_6

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_11:
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_3
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_12:
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_4
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_9

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_14:
# 87 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
	goto SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_13


# 97 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused:
# 99 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 104 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
	step_end

SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
# 128 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
# 148 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
# 153 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
	end


SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
# 158 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
	end


SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
	end


SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
# 168 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_faceplayer
# 169 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
	release_end


# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_0:
# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_faster_down
	step_end

# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_1:
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_2:
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_3:
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_faster_left
	step_end

# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_4:
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_faster_left
	step_end

# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_5:
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_look
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_look
	step_end

# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_6:
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
	step_end

# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern_Movement_7:
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	run_down
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_faster_up
	step_end

SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts::
# 176 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Yes? If you're looking for STERN,\n"
	.string "that would be me.\p"
	.string "Ah! Those must be the parts I ordered\n"
	.string "from MR. STONE of DEVON.\p"
	.string "Thank you! That's great!\n"
	.string "We can prepare for our expedition now.$"

SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts::
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hehehe, hold it!\n"
	.string "We'll take those parts!$"

SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou::
# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "{SPEAKER NAME_STERN}Wh-what?\n"
	.string "Who are you people?$"

SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua::
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We're TEAM AQUA!\p"
	.string "Our BOSS wants those parts!\n"
	.string "Shut your yap and fork them over!$"

SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat::
# 204 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Awaaaah!\n"
	.string "A kid beat me!$"

SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious::
# 209 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, man, what a disaster…\n"
	.string "The BOSS is going to be furious…$"

SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis::
# 214 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Humph, sniveling wimp!\n"
	.string "Let me take care of this!$"

SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat::
# 219 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What?!\n"
	.string "I lost, too!$"

SlateportCity_OceanicMuseum_2F_Text_MeddlingKid::
# 224 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Now what? If we don't get the parts,\n"
	.string "we're in for it!\p"
	.string "Arrgh, I didn't count on being meddled\n"
	.string "with by some meddling kid!$"

SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong::
# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I came to see what was taking so\n"
	.string "long to snatch some parts, and you\l"
	.string "simps are held up by a mere child?$"

SlateportCity_OceanicMuseum_2F_Text_ArchieWarning::
# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We are TEAM AQUA,\n"
	.string "and we love the sea!\p"
	.string "And I am TEAM AQUA's leader,\n"
	.string "ARCHIE!\p"
	.string "What makes you interfere with us?\p"
	.string "…No! You can't be!\n"
	.string "You're not one of TEAM MAGMA?\p"
	.string "Wait, that can't be right.\n"
	.string "You're not dressed for the part.\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "POKéMON, people… All life depends on\n"
	.string "the sea.\p"
	.string "So, TEAM AQUA is dedicated to\n"
	.string "the expansion of the sea.\p"
	.string "Don't you agree? What we are doing\n"
	.string "is a magnificent undertaking.\p"
	.string "Ah, fine…\n"
	.string "You're still too young to understand\l"
	.string "our noble objective.\p"
	.string "But, I warn you, don't even consider\n"
	.string "interfering with our plans again.\p"
	.string "The consequences will cost you\n"
	.string "dearly!\p"
	.string "And don't you forget it!$"

SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs::
# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "{SPEAKER NAME_STERN}You're…\n"
	.string "Ah, okay, you're {PLAYER}{KUN}…\p"
	.string "Anyway, that was a tense situation!\n"
	.string "Thank you for saving us!\p"
	.string "Oh, yes, I almost forgot that you\n"
	.string "even brought the parts from DEVON!$"

SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo::
# 289 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "{SPEAKER NAME_STERN}Whoops!\n"
	.string "There's no time to lose!\p"
	.string "We have to set out on our ocean-floor\n"
	.string "expedition really soon.\p"
	.string "Thanks again, but now I've got\n"
	.string "to go!\p"
	.string "Feel free to wander around and check\n"
	.string "out our facilities, though.$"

SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip::
# 303 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I saw a model of a ship here.\p"
	.string "It reminded me of the ABANDONED SHIP\n"
	.string "near DEWFORD TOWN…$"

SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum::
# 310 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you dare run around inside\n"
	.string "the MUSEUM!$"

SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine::
# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wow, the submarine's awesome!\n"
	.string "I want to go for a ride!$"

SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1::
# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 1,” the\n"
	.string "label says.\p"
	.string "The sea is all connected, but the\n"
	.string "water seems to differ by region.$"

SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2::
# 328 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“WATER QUALITY SAMPLE 2,” the\n"
	.string "label says.\p"
	.string "Does the saltiness of seawater differ\n"
	.string "by region, too?$"

SlateportCity_OceanicMuseum_2F_Text_PressureExperiment::
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A rubber ball is expanding and\n"
	.string "shrinking.\p"
	.string "“In the sea, the weight of water itself\n"
	.string "exerts pressure.\p"
	.string "“In shallow water, the pressure is not\n"
	.string "very heavy.\p"
	.string "“However, in extremely deep water,\n"
	.string "the pressure can reach even tens of\l"
	.string "thousands of tons on a small area.”$"

SlateportCity_OceanicMuseum_2F_Text_HoennModel::
# 351 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“MODEL OF HOENN REGION”\p"
	.string "It's a miniature diorama of the\n"
	.string "HOENN region.\p"
	.string "Where is LITTLEROOT TOWN on this?$"

SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay::
# 360 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
	.string "“Near the bottom of the sea, water\n"
	.string "flows due to differences in such\l"
	.string "factors as temperature and salinity.”$"

SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay::
# 368 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
	.string "“Toward the surface, seawater flows\n"
	.string "as currents driven by the winds.”$"

SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica::
# 375 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“THE FERRY S.S. TIDAL\p"
	.string "“A scale replica of the ship under\n"
	.string "construction at STERN'S SHIPYARD.”$"

SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica::
# 382 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMARINE EXPLORER 1\p"
	.string "“A replica of the high-performance\n"
	.string "ocean floor exploration submarine.”$"

SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica::
# 389 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“SUBMERSIBLE POD\p"
	.string "“A replica of a compact, unmanned\n"
	.string "pod for seafloor exploration.”$"

SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica::
# 396 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“S.S. ANNE\p"
	.string "“A replica of the luxury liner that\n"
	.string "circles the globe.”$"
