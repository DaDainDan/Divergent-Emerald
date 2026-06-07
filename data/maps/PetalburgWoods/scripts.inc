PetalburgWoods_MapScripts::
	.byte 0


PetalburgWoods_EventScript_DevonResearcherLeft::
# 4 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 5 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 6 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherLeft_Movement_0
# 7 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 8 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherAquaEnters
# 9 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcherLeft_Movement_1
# 10 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 11 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_StepFasterUp
# 12 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 13 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 14 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 15 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherLeft_Movement_2
# 16 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 17 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 18 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 19 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, Common_Movement_WalkDown
# 20 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 21 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish
# 22 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherLeft_Movement_3
# 23 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 24 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
	end


PetalburgWoods_EventScript_DevonResearcherRight::
# 29 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 30 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 31 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherRight_Movement_0
# 32 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 33 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 34 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 35 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherAquaEnters
# 36 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcherRight_Movement_1
# 37 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 38 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_StepFasterUp
# 39 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 40 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 41 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 42 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherRight_Movement_2
# 43 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 44 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 45 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 46 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 47 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish
# 48 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherRight_Movement_3
# 49 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 50 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
	end


PetalburgWoods_EventScript_DevonResearcherIntro::
# 55 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 56 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 57 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 58 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


PetalburgWoods_EventScript_DevonResearcherAquaEnters::
# 63 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 64 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 65 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 66 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcherAquaEnters_Movement_0
# 67 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 68 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 69 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish::
# 74 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 75 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 76 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_0
# 77 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 78 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 79 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 80 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_1
# 81 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 82 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 83 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 84 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 85 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
	giveitem ITEM_GREAT_BALL
# 0 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_2
PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_1:
# 89 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 90 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_2
# 91 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 92 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 93 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 94 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_3
	return

PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_2:
# 87 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
	goto PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_1


PetalburgWoods_EventScript_RemoveDevonResearcher::
# 99 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 100 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 101 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	end


# 105 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 107 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 108 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 109 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 110 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 111 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 112 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 113 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 114 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 115 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 116 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 117 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 118 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 119 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 120 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 121 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 122 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

PetalburgWoods_EventScript_Boy1::
# 126 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
	end


PetalburgWoods_EventScript_Boy2::
# 131 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
	end


PetalburgWoods_EventScript_Girl::
# 136 "data/maps/PetalburgWoods/scripts.pory"
	lock_faceplayer
# 137 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_unset FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_Girl_2
# 144 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
PetalburgWoods_EventScript_Girl_1:
	release_end

PetalburgWoods_EventScript_Girl_2:
# 138 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
	giveitem ITEM_MIRACLE_SEED
# 0 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods_EventScript_Girl_6
PetalburgWoods_EventScript_Girl_5:
# 142 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
	goto PetalburgWoods_EventScript_Girl_1

PetalburgWoods_EventScript_Girl_6:
# 140 "data/maps/PetalburgWoods/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto PetalburgWoods_EventScript_Girl_5


PetalburgWoods_EventScript_Sign1::
# 150 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
	end


PetalburgWoods_EventScript_Sign2::
# 155 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
	end


PetalburgWoods_EventScript_Lyle::
# 160 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 161 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
	end


PetalburgWoods_EventScript_James::
# 166 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgWoods_EventScript_James_2
# 172 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 173 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_James_6
PetalburgWoods_EventScript_James_4:
# 178 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
	release_end

PetalburgWoods_EventScript_James_2:
# 168 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 169 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_EventScript_James_5:
# 174 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 175 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
	release_end

PetalburgWoods_EventScript_James_6:
	specialvar VAR_RESULT, IsTrainerRegistered
# 0 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods_EventScript_James_5
	goto PetalburgWoods_EventScript_James_4


PetalburgWoods_EventScript_TryRegisterJames::
# 183 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 184 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 185 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_TryRegisterJames_2
PetalburgWoods_EventScript_TryRegisterJames_1:
	release_end

PetalburgWoods_EventScript_TryRegisterJames_2:
# 186 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 187 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
	goto PetalburgWoods_EventScript_TryRegisterJames_1


# 6 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft_Movement_0:
# 6 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 6 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 6 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 6 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
	step_end

# 9 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft_Movement_1:
# 9 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 9 "data/maps/PetalburgWoods/scripts.pory"
	run_down
	step_end

# 15 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft_Movement_2:
# 15 "data/maps/PetalburgWoods/scripts.pory"
	run_right
# 15 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 15 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 15 "data/maps/PetalburgWoods/scripts.pory"
	run_left
# 15 "data/maps/PetalburgWoods/scripts.pory"
	step_faster_up
	step_end

# 22 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft_Movement_3:
# 22 "data/maps/PetalburgWoods/scripts.pory"
	run_right
# 22 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 22 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 22 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 22 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 22 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 22 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 22 "data/maps/PetalburgWoods/scripts.pory"
	run_up
	step_end

# 31 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight_Movement_0:
# 31 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 31 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 31 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 31 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 31 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 31 "data/maps/PetalburgWoods/scripts.pory"
	step_faster_right
	step_end

# 36 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight_Movement_1:
# 36 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 36 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 36 "data/maps/PetalburgWoods/scripts.pory"
	run_down
	step_end

# 42 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight_Movement_2:
# 42 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 42 "data/maps/PetalburgWoods/scripts.pory"
	run_right
# 42 "data/maps/PetalburgWoods/scripts.pory"
	step_faster_up
	step_end

# 48 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight_Movement_3:
# 48 "data/maps/PetalburgWoods/scripts.pory"
	run_left
# 48 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 48 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 48 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 48 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 48 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 48 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 48 "data/maps/PetalburgWoods/scripts.pory"
	run_up
	step_end

# 66 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherAquaEnters_Movement_0:
# 66 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 66 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 66 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 66 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

# 76 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_0:
# 76 "data/maps/PetalburgWoods/scripts.pory"
	lock_look
# 76 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 76 "data/maps/PetalburgWoods/scripts.pory"
	unlock_look
	step_end

# 80 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_1:
# 80 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 80 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 80 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 80 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 80 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 80 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 80 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

# 90 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_2:
# 90 "data/maps/PetalburgWoods/scripts.pory"
	step_faster_down
# 90 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 90 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 90 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 90 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 90 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 90 "data/maps/PetalburgWoods/scripts.pory"
	face_up
	step_end

# 94 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_3:
# 94 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 94 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 94 "data/maps/PetalburgWoods/scripts.pory"
	step_faster_up
	step_end

PetalburgWoods_Text_NotAOneToBeFound::
# 192 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
	.string "Not a one to be found…$"

PetalburgWoods_Text_HaveYouSeenShroomish::
# 197 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
	.string "called SHROOMISH around here?\p"
	.string "I really love that POKéMON.$"

PetalburgWoods_Text_IWasGoingToAmbushYou::
# 204 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
	.string "had to dawdle in PETALBURG WOODS\l"
	.string "forever, didn't you?\p"
	.string "I got sick of waiting, so here I am!$"

PetalburgWoods_Text_HandOverThosePapers::
# 212 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
	.string "Hand over those papers!$"

PetalburgWoods_Text_YouHaveToHelpMe::
# 218 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
	.string "You're a POKéMON TRAINER, aren't you?\n"
	.string "You've got to help me, please!$"

PetalburgWoods_Text_NoOneCrossesTeamAqua::
# 225 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
	.string "What, you're going to protect him?\p"
	.string "No one who crosses TEAM AQUA\n"
	.string "gets any mercy, not even a kid!\p"
	.string "Come on and battle me!$"

PetalburgWoods_Text_YoureKiddingMe::
# 235 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"

PetalburgWoods_Text_YouveGotSomeNerve::
# 239 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
	.string "meddling with TEAM AQUA!\l"
	.string "Come on and battle me again!\p"
	.string "I wish I could say that, but I'm out of\n"
	.string "POKéMON…\p"
	.string "And, hey, we of TEAM AQUA are also\n"
	.string "after something in RUSTBORO.\p"
	.string "I'll let you go today!$"

PetalburgWoods_Text_ThatWasAwfullyClose::
# 253 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
	.string "That was awfully close!\p"
	.string "Thanks to you, he didn't rob me of\n"
	.string "these important papers.\p"
	.string "I know, I'll give you a GREAT BALL as\n"
	.string "my thanks!$"

PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro::
# 264 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
	.string "they were after something in\l"
	.string "RUSTBORO, too?$"

PetalburgWoods_Text_ICantBeWastingTime::
# 270 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
	.string "I can't be wasting time!$"

PetalburgWoods_Text_YoureLoadedWithItems::
# 275 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
	.string "I can't give you this GREAT BALL.$"

PetalburgWoods_Text_GoBugPokemonTeam::
# 280 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
	.string "Go, go, go!\n"
	.string "My BUG POKéMON team!$"

PetalburgWoods_Text_ICouldntWin::
# 287 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
	.string "but I couldn't win…$"

PetalburgWoods_Text_ImOutOfPokeBalls::
# 292 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
	.string "Now I'm out of POKé BALLS.$"

PetalburgWoods_Text_InstantlyPopularWithBugPokemon::
# 297 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
	.string "you get to be instantly popular!$"

PetalburgWoods_Text_CantBePopularIfILose::
# 302 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"

PetalburgWoods_Text_PeopleRespectYou::
# 306 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
	.string "people respect you for it.$"

PetalburgWoods_Text_IWantRematch1::
# 311 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
	.string "POKéMON grow up!\p"
	.string "I'm registering you in my POKéNAV!$"

PetalburgWoods_Text_IWantRematch2::
# 318 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
	.string "POKéMON grow up!\p"
	.string "I'm registering you in my POKéNAV!$"

PetalburgWoods_Text_MyPokemonHaveGrown::
# 325 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
	.string "I'll be popular again.$"

PetalburgWoods_Text_CantBePopularIfLose::
# 330 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"

PetalburgWoods_Text_IveBeenTrainingHard::
# 334 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
	.string "strong POKéMON, right?\l"
	.string "So, I've been training hard.$"

PetalburgWoods_Text_StayOutOfTallGrass::
# 340 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
	.string "Your POKéMON doing okay?\p"
	.string "If your POKéMON are weak and you want\n"
	.string "to avoid battles, you should stay out\l"
	.string "of tall grass.$"

PetalburgWoods_Text_HiddenItemsExplanation::
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
	.string "ground even if you can't see them.\p"
	.string "That's why I always check where I'm\n"
	.string "walking.$"

PetalburgWoods_Text_TryUsingThisItem::
# 357 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
	.string "That's the BADGE from RUSTBORO GYM!\p"
	.string "You must be a TRAINER.\n"
	.string "You should try using this item.$"

PetalburgWoods_Text_MiracleSeedExplanation::
# 365 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
	.string "If a POKéMON holds that item, its\l"
	.string "GRASS-type moves become stronger.\p"
	.string "Besides MIRACLE SEED, I think there are\n"
	.string "other convenient items for POKéMON\l"
	.string "to hold.$"

PetalburgWoods_Text_TrainerTipsExperience::
# 375 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Any POKéMON that appears even once\n"
	.string "in a battle is awarded EXP Points.\p"
	.string "To raise a weak POKéMON, put it at the\n"
	.string "left of the team list.\p"
	.string "As soon as a battle starts, switch it\n"
	.string "out. It will earn EXP Points without\l"
	.string "being exposed to any harm.$"

PetalburgWoods_Text_TrainerTipsPP::
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "In addition to Hit Points (HP), POKéMON\n"
	.string "have Power Points (PP) that are used to\l"
	.string "make moves during battle.\p"
	.string "If a POKéMON runs out of PP, it must be\n"
	.string "taken to a POKéMON CENTER.$"
