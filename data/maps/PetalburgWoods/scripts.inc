PetalburgWoods_MapScripts::
# 2 "data/maps/PetalburgWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PetalburgWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PetalburgWoods/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 4 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_TEMP_0, 31
	goto_if_lt PetalburgWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 7 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_WildSet2Trigger
PetalburgWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

PetalburgWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_WildSet1Trigger
	goto PetalburgWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


PetalburgWoods_WildSet1Trigger::
# 14 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_WILD_SET, 0
	return


PetalburgWoods_WildSet2Trigger::
# 19 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_WILD_SET, 1
	return


PetalburgWoods_EventScript_DevonResearcherLeft::
# 24 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 25 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 26 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherLeft_Movement_0
# 27 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 28 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherAquaEnters
# 29 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcherLeft_Movement_1
# 30 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 31 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_StepFasterUp
# 32 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 33 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 34 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 35 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherLeft_Movement_2
# 36 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 37 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 38 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 39 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, Common_Movement_WalkDown
# 40 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 41 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish
# 42 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherLeft_Movement_3
# 43 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 44 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
	end


PetalburgWoods_EventScript_DevonResearcherRight::
# 49 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 50 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 51 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherRight_Movement_0
# 52 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 53 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 54 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 55 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherAquaEnters
# 56 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcherRight_Movement_1
# 57 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 58 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_StepFasterUp
# 59 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 60 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 61 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 62 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherRight_Movement_2
# 63 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 64 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 65 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 66 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 67 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish
# 68 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherRight_Movement_3
# 69 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 70 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
	end


PetalburgWoods_EventScript_DevonResearcherIntro::
# 75 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 76 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 77 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 78 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


PetalburgWoods_EventScript_DevonResearcherAquaEnters::
# 83 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 84 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 85 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 86 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcherAquaEnters_Movement_0
# 87 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 88 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 89 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish::
# 94 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 95 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 96 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_0
# 97 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 98 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 99 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 100 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_1
# 101 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 102 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 103 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 104 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 105 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
	giveitem ITEM_GREAT_BALL
# 0 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_2
PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_1:
# 109 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 110 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_2
# 111 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 112 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 113 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 114 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_3
	return

PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_2:
# 107 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
	goto PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_1


PetalburgWoods_EventScript_RemoveDevonResearcher::
# 119 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 120 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 121 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	end


# 125 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 127 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 128 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 129 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 130 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 131 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 132 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 133 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 134 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 135 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 136 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 137 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 138 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 139 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 140 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 141 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 142 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

PetalburgWoods_EventScript_Boy1::
# 146 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
	end


PetalburgWoods_EventScript_Boy2::
# 151 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
	end


PetalburgWoods_EventScript_Girl::
# 156 "data/maps/PetalburgWoods/scripts.pory"
	lock_faceplayer
# 157 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_unset FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_Girl_2
# 164 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
PetalburgWoods_EventScript_Girl_1:
	release_end

PetalburgWoods_EventScript_Girl_2:
# 158 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
	giveitem ITEM_MIRACLE_SEED
# 0 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods_EventScript_Girl_6
PetalburgWoods_EventScript_Girl_5:
# 162 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
	goto PetalburgWoods_EventScript_Girl_1

PetalburgWoods_EventScript_Girl_6:
# 160 "data/maps/PetalburgWoods/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto PetalburgWoods_EventScript_Girl_5


PetalburgWoods_EventScript_Sign1::
# 170 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
	end


PetalburgWoods_EventScript_Sign2::
# 175 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
	end


PetalburgWoods_EventScript_Lyle::
# 180 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 181 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
	end


PetalburgWoods_EventScript_James::
# 186 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgWoods_EventScript_James_2
# 192 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 193 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_James_6
PetalburgWoods_EventScript_James_4:
# 198 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
	release_end

PetalburgWoods_EventScript_James_2:
# 188 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 189 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_EventScript_James_5:
# 194 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 195 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
	release_end

PetalburgWoods_EventScript_James_6:
	specialvar VAR_RESULT, IsTrainerRegistered
# 0 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods_EventScript_James_5
	goto PetalburgWoods_EventScript_James_4


PetalburgWoods_EventScript_TryRegisterJames::
# 203 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 204 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 205 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_TryRegisterJames_2
PetalburgWoods_EventScript_TryRegisterJames_1:
	release_end

PetalburgWoods_EventScript_TryRegisterJames_2:
# 206 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 207 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
	goto PetalburgWoods_EventScript_TryRegisterJames_1


# 26 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft_Movement_0:
# 26 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 26 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 26 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 26 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
	step_end

# 29 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft_Movement_1:
# 29 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 29 "data/maps/PetalburgWoods/scripts.pory"
	run_down
	step_end

# 35 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft_Movement_2:
# 35 "data/maps/PetalburgWoods/scripts.pory"
	run_right
# 35 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 35 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 35 "data/maps/PetalburgWoods/scripts.pory"
	run_left
# 35 "data/maps/PetalburgWoods/scripts.pory"
	step_faster_up
	step_end

# 42 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft_Movement_3:
# 42 "data/maps/PetalburgWoods/scripts.pory"
	run_right
# 42 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 42 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 42 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 42 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 42 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 42 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 42 "data/maps/PetalburgWoods/scripts.pory"
	run_up
	step_end

# 51 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight_Movement_0:
# 51 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 51 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 51 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 51 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 51 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 51 "data/maps/PetalburgWoods/scripts.pory"
	step_faster_right
	step_end

# 56 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight_Movement_1:
# 56 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 56 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 56 "data/maps/PetalburgWoods/scripts.pory"
	run_down
	step_end

# 62 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight_Movement_2:
# 62 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 62 "data/maps/PetalburgWoods/scripts.pory"
	run_right
# 62 "data/maps/PetalburgWoods/scripts.pory"
	step_faster_up
	step_end

# 68 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight_Movement_3:
# 68 "data/maps/PetalburgWoods/scripts.pory"
	run_left
# 68 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 68 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 68 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 68 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 68 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 68 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 68 "data/maps/PetalburgWoods/scripts.pory"
	run_up
	step_end

# 86 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherAquaEnters_Movement_0:
# 86 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 86 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 86 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 86 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

# 96 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_0:
# 96 "data/maps/PetalburgWoods/scripts.pory"
	lock_look
# 96 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 96 "data/maps/PetalburgWoods/scripts.pory"
	unlock_look
	step_end

# 100 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_1:
# 100 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 100 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 100 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 100 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 100 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 100 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 100 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

# 110 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_2:
# 110 "data/maps/PetalburgWoods/scripts.pory"
	step_faster_down
# 110 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 110 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 110 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 110 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 110 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 110 "data/maps/PetalburgWoods/scripts.pory"
	face_up
	step_end

# 114 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_3:
# 114 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 114 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 114 "data/maps/PetalburgWoods/scripts.pory"
	step_faster_up
	step_end

PetalburgWoods_Text_NotAOneToBeFound::
# 212 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
	.string "They're supposed to be around here…$"

PetalburgWoods_Text_HaveYouSeenShroomish::
# 217 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any SHROOMISH\n"
	.string "around here?\p"
	.string "My daughter really loves that POKéMON,\n"
	.string "so I thought I'd catch her one as a\l"
	.string "birthday present.$"

PetalburgWoods_Text_IWasGoingToAmbushYou::
# 226 "data/maps/PetalburgWoods/scripts.pory"
	.string "You know, you aren't very careful for a\n"
	.string "guy delivering important cargo.\p"
	.string "I was hoping this would be a bit more\n"
	.string "difficult, so I could impress the BOSS.$"

PetalburgWoods_Text_HandOverThosePapers::
# 234 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now, Mushroom Man!\n"
	.string "Hand over that briefcase!\p"
	.string "And you best be quick about it unless\n"
	.string "you want to get hurt!$"

PetalburgWoods_Text_YouHaveToHelpMe::
# 242 "data/maps/PetalburgWoods/scripts.pory"
	.string "Um. Uhhhh.\n"
	.string "Oh, no. Oh, jeez…\p"
	.string "You!\n"
	.string "You're a POKéMON TRAINER, right?\p"
	.string "You've got to help me, please!\n"
	.string "I can't let anyone have my stuff!$"

PetalburgWoods_Text_NoOneCrossesTeamAqua::
# 253 "data/maps/PetalburgWoods/scripts.pory"
	.string "Are you serious?\n"
	.string "You're gonna use a kid as a meat shield?\p"
	.string "Kid,\n"
	.string "Just get lost.\p"
	.string "I don't wanna hurt you unless I have to.\p"
	.string "You're really gonna stick up for a rich,\n"
	.string "technocrat like this guy?\p"
	.string "Don't say I didn't warn you.\n"
	.string "You'll just have to learn the hard way.\p"
	.string "Come on, kid.\n"
	.string "Show me what you've got.$"

PetalburgWoods_Text_YoureKiddingMe::
# 272 "data/maps/PetalburgWoods/scripts.pory"
	.string "What the hell…\n"
	.string "but you're just some brat…$"

PetalburgWoods_Text_YouveGotSomeNerve::
# 277 "data/maps/PetalburgWoods/scripts.pory"
	.string "Damn it, kid.\n"
	.string "You've really done it now.\p"
	.string "It ain't a good idea to go messing\n"
	.string "around with TEAM AQUA.\p"
	.string "We're trying to save the world, and\n"
	.string "people who get in our way don't tend to\l"
	.string "last very long.\p"
	.string "If I were you, I'd think twice the next\n"
	.string "time I saw a blue bandana.$"

PetalburgWoods_Text_ThatWasAwfullyClose::
# 292 "data/maps/PetalburgWoods/scripts.pory"
	.string "Phew…\n"
	.string "That was close.\p"
	.string "Thanks to you, those thugs didn't get\n"
	.string "their hands on company secrets, and\l"
	.string "I'll get to keep my job.\p"
	.string "Take this as a “thank you” gift.$"

PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro::
# 303 "data/maps/PetalburgWoods/scripts.pory"
	.string "Anyways, I'd best get going.\n"
	.string "This stuff needs to go to HQ.$"

PetalburgWoods_Text_ICantBeWastingTime::
# 308 "data/maps/PetalburgWoods/scripts.pory"
	.string "Happy hunting!$"

PetalburgWoods_Text_YoureLoadedWithItems::
# 312 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
	.string "You'll have to make room.$"

PetalburgWoods_Text_GoBugPokemonTeam::
# 317 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
	.string "Go, go, go!\n"
	.string "My BUG POKéMON team!$"

PetalburgWoods_Text_ICouldntWin::
# 324 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
	.string "but I couldn't win…$"

PetalburgWoods_Text_ImOutOfPokeBalls::
# 329 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
	.string "Now I'm out of POKé BALLS.$"

PetalburgWoods_Text_InstantlyPopularWithBugPokemon::
# 334 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
	.string "you get to be instantly popular!$"

PetalburgWoods_Text_CantBePopularIfILose::
# 339 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"

PetalburgWoods_Text_PeopleRespectYou::
# 343 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
	.string "people respect you for it.$"

PetalburgWoods_Text_IWantRematch1::
# 348 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
	.string "POKéMON grow up!\p"
	.string "I'm registering you in my POKéNAV!$"

PetalburgWoods_Text_MyPokemonHaveGrown::
# 355 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
	.string "I'll be popular again.$"

PetalburgWoods_Text_CantBePopularIfLose::
# 360 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"

PetalburgWoods_Text_IveBeenTrainingHard::
# 364 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
	.string "strong POKéMON, right?\l"
	.string "So, I've been training hard.$"

PetalburgWoods_Text_StayOutOfTallGrass::
# 370 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
	.string "Your POKéMON doing okay?\p"
	.string "If your POKéMON are weak and you want\n"
	.string "to avoid battles, you should stay out\l"
	.string "of tall grass.$"

PetalburgWoods_Text_HiddenItemsExplanation::
# 379 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
	.string "ground even if you can't see them.\p"
	.string "That's why I always check where I'm\n"
	.string "walking.$"

PetalburgWoods_Text_TryUsingThisItem::
# 387 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
	.string "That's the BADGE from RUSTBORO GYM!\p"
	.string "You must be a TRAINER.\n"
	.string "You should try using this item.$"

PetalburgWoods_Text_MiracleSeedExplanation::
# 395 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
	.string "If a POKéMON holds that item, its\l"
	.string "GRASS-type moves become stronger.\p"
	.string "Besides MIRACLE SEED, I think there are\n"
	.string "other convenient items for POKéMON\l"
	.string "to hold.$"

PetalburgWoods_Text_TrainerTipsExperience::
# 405 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Any POKéMON that appears even once\n"
	.string "in a battle is awarded EXP Points.\p"
	.string "To raise a weak POKéMON, put it at the\n"
	.string "left of the team list.\p"
	.string "As soon as a battle starts, switch it\n"
	.string "out. It will earn EXP Points without\l"
	.string "being exposed to any harm.$"

PetalburgWoods_Text_TrainerTipsPP::
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "In addition to Hit Points (HP), POKéMON\n"
	.string "have Power Points (PP) that are used to\l"
	.string "make moves during battle.\p"
	.string "If a POKéMON runs out of PP, it must be\n"
	.string "taken to a POKéMON CENTER.$"
