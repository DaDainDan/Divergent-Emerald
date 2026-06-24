MossdeepCity_SpaceCenter_1F_MapScripts::
# 2 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD
# 8 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_le MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2
MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setmetatile 2, 5, METATILE_Facility_DataPad, TRUE
	goto MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1

MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_eq MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_SAILOR, 1, 9
# 11 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_SAILOR, MOVEMENT_TYPE_FACE_RIGHT
# 12 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_WOMAN, 0, 8
# 13 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_WOMAN, MOVEMENT_TYPE_FACE_RIGHT
# 14 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_OLD_MAN, 1, 6
# 15 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_OLD_MAN, MOVEMENT_TYPE_FACE_RIGHT
# 16 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_SCIENTIST_1, 3, 4
# 17 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_SCIENTIST_1, MOVEMENT_TYPE_FACE_RIGHT
# 18 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_1F_SCIENTIST_2, MOVEMENT_TYPE_FACE_RIGHT
# 19 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	switch VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE
# 20 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 21 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case 2, MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 22 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case 3, MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	goto MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 20 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, 12, 2
	goto MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 21 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, 13, 3
	goto MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 22 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, 14, 2
	goto MossdeepCity_SpaceCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter::
# 30 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_faceplayer
# 31 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	dotimebasedevents
# 32 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 33 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 34 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_2
# 41 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_12
# 44 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber, MSGBOX_DEFAULT
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_1:
# 47 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 48 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_6
# 51 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_5:
# 53 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
	release_end

MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_2:
# 35 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_9
# 38 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent, MSGBOX_DEFAULT
	goto MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_1

MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_6:
# 49 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_StepFasterRight
	goto MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_5

MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_9:
# 36 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent, MSGBOX_DEFAULT
	goto MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_1

MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_12:
# 42 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber, MSGBOX_DEFAULT
	goto MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter_1


MossdeepCity_SpaceCenter_1F_EventScript_Scientist::
# 58 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_faceplayer
# 59 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_Scientist_2
# 65 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection, MSGBOX_DEFAULT
	release_end

MossdeepCity_SpaceCenter_1F_EventScript_Scientist_2:
# 60 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter, MSGBOX_DEFAULT
# 61 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_StepFasterRight
# 62 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
	release_end


MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan::
# 70 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_faceplayer
# 71 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_2
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_1:
# 74 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_5
# 78 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt, MSGBOX_DEFAULT
	giveitem ITEM_SUN_STONE
# 0 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_8
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_7:
# 82 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 83 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
	release_end

MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_2:
# 72 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma
	goto MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_1

MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_5:
# 75 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
	release_end

MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_8:
# 80 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan_7


MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma::
# 88 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_2
# 92 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_SUN_STONE
# 0 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_6
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_5:
# 96 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 97 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_1:
# 99 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_StepFasterRight
# 100 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
	release_end

MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_2:
# 89 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
	goto MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_1

MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_6:
# 94 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma_5


MossdeepCity_SpaceCenter_1F_EventScript_Woman::
# 105 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_faceplayer
# 106 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_Woman_2
# 106 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_lt MossdeepCity_SpaceCenter_1F_EventScript_Woman_2
# 110 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma, MSGBOX_DEFAULT
	release_end

MossdeepCity_SpaceCenter_1F_EventScript_Woman_2:
# 107 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace, MSGBOX_DEFAULT
	release_end


MossdeepCity_SpaceCenter_1F_EventScript_OldMan::
# 115 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_faceplayer
# 116 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_1F_EventScript_OldMan_2
# 116 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_lt MossdeepCity_SpaceCenter_1F_EventScript_OldMan_2
# 119 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream, MSGBOX_DEFAULT
MossdeepCity_SpaceCenter_1F_EventScript_OldMan_1:
# 121 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end

MossdeepCity_SpaceCenter_1F_EventScript_OldMan_2:
# 117 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind, MSGBOX_DEFAULT
	goto MossdeepCity_SpaceCenter_1F_EventScript_OldMan_1


MossdeepCity_SpaceCenter_1F_EventScript_Steven::
# 126 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_faceplayer
# 127 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel, MSGBOX_DEFAULT
# 128 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 129 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
	release_end


MossdeepCity_SpaceCenter_1F_EventScript_MagmaNote::
# 134 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lockall
# 135 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice, MSGBOX_DEFAULT
# 136 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_1F_EventScript_Grunt3::
# 141 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_3, MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat
# 142 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_SpaceCenter_1F_EventScript_Grunt1::
# 147 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_1, MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat
# 148 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_SpaceCenter_1F_EventScript_Grunt4::
# 153 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_4, MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat
# 154 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end


MossdeepCity_SpaceCenter_1F_EventScript_Grunt2::
# 159 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_faceplayer
# 160 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F, MossdeepCity_SpaceCenter_1F_EventScript_Grunt2_2
# 164 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro, MSGBOX_DEFAULT
# 165 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_2, MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat
# 166 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F
# 167 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_1F_STAIR_GRUNT
# 168 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call MossdeepCity_SpaceCenter_1F_EventScript_Grunt2_HandleMovement
# 169 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 2
	release_end

MossdeepCity_SpaceCenter_1F_EventScript_Grunt2_2:
# 161 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
	release_end


# 173 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 174 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2_HandleMovement::
# 175 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	switch VAR_FACING
# 176 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest
# 177 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
#ifdef BUGFIX
# 178 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case DIR_EAST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast
# 179 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
#else
# 180 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast
# 181 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
#endif
# 182 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairs
# 183 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 184 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return

MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest::
# 188 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest_Movement_0
# 189 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 190 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 1
	release_end


MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast::
# 197 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_1F_STAIR_GRUNT, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast_Movement_0
# 198 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 199 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 3
	release_end


# 204 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairs:
# 206 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	face_left
# 207 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_look
# 208 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_right
# 209 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_look
	step_end

# 188 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest_Movement_0:
# 188 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_look
# 188 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_left
# 188 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_look
	step_end

# 197 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast_Movement_0:
# 197 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_look
# 197 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_right
# 197 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_look
	step_end

MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent::
# 212 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket's launch is imminent!$"

MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber::
# 216 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket launched safely!\n"
	.string "That's successful launch no. {STR_VAR_1}!$"

MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent::
# 221 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I know that things are a little\n"
	.string "haywire right now, but…\p"
	.string "The rocket's launch is imminent!$"

MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber::
# 228 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I know that things are a little\n"
	.string "haywire right now, but…\p"
	.string "The rocket launched safely!\n"
	.string "That's successful launch no. {STR_VAR_1}!$"

MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection::
# 236 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A rocket launch demands perfection.\n"
	.string "Not even a 1% margin of error is allowed.\p"
	.string "Even if it's 99% okay, the whole thing\n"
	.string "is useless if 1% happens to be no good.\p"
	.string "Despite that, we never stop trying.\n"
	.string "Why? It's a dream that never ends.$"

MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter::
# 247 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Those MAGMA thugs have their sights\n"
	.string "set on our SPACE CENTER.\p"
	.string "But we can't allow anything that minor\n"
	.string "to interfere with our rocket launch!$"

MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt::
# 255 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I was taking a stroll down the beach\n"
	.string "when I found this.\p"
	.string "It's not anything I need, so you can\n"
	.string "have it.$"

MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers::
# 263 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The HOENN region has been famous for \n"
	.string "its meteor showers for a long time.$"

MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis::
# 268 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM MAGMA can't be allowed to steal\n"
	.string "the rocket fuel.\p"
	.string "Oh, by the way, you can have this stone\n"
	.string "I found on the beach.$"

MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma::
# 276 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "With TEAM MAGMA around, I guess\n"
	.string "strolls on the beach aren't safe.$"

MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace::
# 281 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Some people claim that POKéMON came\n"
	.string "from space. Could it be true?$"

MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma::
# 286 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "TEAM AQUA should take care of\n"
	.string "TEAM MAGMA!\p"
	.string "But if they did that, TEAM AQUA will\n"
	.string "become bold and brazen, won't they?$"

MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind::
# 294 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A giant chunk of metal bursts through\n"
	.string "the skies and flies into space…\p"
	.string "It boggles my mind!$"

MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream::
# 301 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A giant chunk of metal bursts through\n"
	.string "the skies and flies into space…\p"
	.string "But TEAM MAGMA wants to spoil\n"
	.string "that dream of mine!\p"
	.string "I'm not having any of that!$"

MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel::
# 311 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}{PLAYER}{KUN}, have you read that\n"
	.string "proclamation already?\p"
	.string "TEAM MAGMA is coming after the rocket\n"
	.string "fuel on this island.\p"
	.string "I don't know what they'd need it for,\n"
	.string "but they can't be allowed to take it.\p"
	.string "I'll keep an eye on things for\n"
	.string "a while longer.\p"
	.string "In the meantime, why don't you go\n"
	.string "check out the town?$"

MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro::
# 328 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "As promised, we've come for\n"
	.string "the rocket fuel!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat::
# 333 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ran out of fuel…$"

MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle::
# 337 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Don't think you're on a roll just\n"
	.string "because you've beaten me!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro::
# 342 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We gave you fair warning!\n"
	.string "There's nothing sneaky about us!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat::
# 347 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Grrr…\n"
	.string "We should've used sneaky treachery…$"

MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle::
# 352 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Okay, I get it already! The next time,\n"
	.string "we'll come unannounced.$"

MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro::
# 357 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket fuel the SPACE CENTER has\n"
	.string "in storage--that's what we're after.\p"
	.string "We mean to take every last bit of it!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat::
# 364 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Please, can you spare some fuel?\n"
	.string "Even a chintzy cup will do!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle::
# 369 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "What are we going to do with\n"
	.string "the rocket fuel?\p"
	.string "How would I know?\n"
	.string "Ask our leader upstairs!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro::
# 377 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Our leader said no one, but no one,\n"
	.string "gets past me!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat::
# 382 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ack! Ack! Aaack!$"

MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle::
# 386 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Please, tell our leader that\n"
	.string "I never abandoned my post.\l"
	.string "That I stayed to the bitter end…$"

MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice::
# 392 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "This is…\n"
	.string "An intent-to-steal notice?\p"
	.string "“To the staff of the SPACE CENTER:\n"
	.string "How are you? We are doing fine.\p"
	.string "“We will soon visit you to take your\n"
	.string "rocket fuel.\p"
	.string "“Please don't try to stop us.\n"
	.string "We will take the fuel no matter what.\p"
	.string "“Let there be more land!\n"
	.string "TEAM MAGMA”$"
