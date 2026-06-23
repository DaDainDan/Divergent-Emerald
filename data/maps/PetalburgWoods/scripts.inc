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
# 26 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 27 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 28 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherLeft_Movement_0
# 29 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 30 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherAquaEnters
# 31 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcherLeft_Movement_1
# 32 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 33 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_StepFasterUp
# 34 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 35 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 36 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 37 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherLeft_Movement_2
# 38 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 39 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 40 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 41 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, Common_Movement_WalkDown
# 42 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 43 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish
# 44 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherLeft_Movement_3
# 45 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 46 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
	end


PetalburgWoods_EventScript_DevonResearcherRight::
# 51 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 52 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 53 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherRight_Movement_0
# 54 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 55 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 56 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 57 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherAquaEnters
# 58 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcherRight_Movement_1
# 59 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 60 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_StepFasterUp
# 61 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 62 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 63 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 64 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherRight_Movement_2
# 65 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 66 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 67 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 68 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 69 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish
# 70 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherRight_Movement_3
# 71 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 72 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
	end


PetalburgWoods_EventScript_DevonResearcherIntro::
# 77 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 78 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 79 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 80 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


PetalburgWoods_EventScript_DevonResearcherAquaEnters::
# 85 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 86 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 87 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 88 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcherAquaEnters_Movement_0
# 89 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 90 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 91 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
	return


PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish::
# 96 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 97 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 98 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_0
# 99 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 100 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 101 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 102 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_1
# 103 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 104 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
# 105 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 106 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 107 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
	giveitem ITEM_GREAT_BALL
# 0 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_2
PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_1:
# 111 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 112 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_2
# 113 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 114 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 115 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 116 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_3
	return

PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_2:
# 109 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
	goto PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_1


PetalburgWoods_EventScript_RemoveDevonResearcher::
# 121 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
# 122 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 123 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	end


# 127 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 129 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 130 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 131 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 132 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 133 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 134 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 135 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 136 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 137 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 138 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 139 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 140 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 141 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 142 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 143 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 144 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

PetalburgWoods_EventScript_Boy1::
# 148 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
	end


PetalburgWoods_EventScript_Boy2::
# 153 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
	end


PetalburgWoods_EventScript_Girl::
# 158 "data/maps/PetalburgWoods/scripts.pory"
	lock_faceplayer
# 159 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_unset FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_Girl_2
# 166 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
PetalburgWoods_EventScript_Girl_1:
	release_end

PetalburgWoods_EventScript_Girl_2:
# 160 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
	giveitem ITEM_MIRACLE_SEED
# 0 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods_EventScript_Girl_6
PetalburgWoods_EventScript_Girl_5:
# 164 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
	goto PetalburgWoods_EventScript_Girl_1

PetalburgWoods_EventScript_Girl_6:
# 162 "data/maps/PetalburgWoods/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto PetalburgWoods_EventScript_Girl_5


PetalburgWoods_EventScript_Sign1::
# 172 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
	end


PetalburgWoods_EventScript_Sign2::
# 177 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
	end


PetalburgWoods_EventScript_Lyle::
# 182 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 183 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
	end


PetalburgWoods_EventScript_James::
# 188 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgWoods_EventScript_James_2
# 194 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 195 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_James_6
PetalburgWoods_EventScript_James_4:
# 200 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
	release_end

PetalburgWoods_EventScript_James_2:
# 190 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 191 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_EventScript_James_5:
# 196 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 197 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
	release_end

PetalburgWoods_EventScript_James_6:
	specialvar VAR_RESULT, IsTrainerRegistered
# 0 "data/maps/PetalburgWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoods_EventScript_James_5
	goto PetalburgWoods_EventScript_James_4


PetalburgWoods_EventScript_TryRegisterJames::
# 205 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 206 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 207 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_TryRegisterJames_2
PetalburgWoods_EventScript_TryRegisterJames_1:
	release_end

PetalburgWoods_EventScript_TryRegisterJames_2:
# 208 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 209 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
	goto PetalburgWoods_EventScript_TryRegisterJames_1


# 28 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft_Movement_0:
# 28 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 28 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 28 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 28 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
	step_end

# 31 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft_Movement_1:
# 31 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 31 "data/maps/PetalburgWoods/scripts.pory"
	run_down
	step_end

# 37 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft_Movement_2:
# 37 "data/maps/PetalburgWoods/scripts.pory"
	run_right
# 37 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 37 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 37 "data/maps/PetalburgWoods/scripts.pory"
	run_left
# 37 "data/maps/PetalburgWoods/scripts.pory"
	step_faster_up
	step_end

# 44 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft_Movement_3:
# 44 "data/maps/PetalburgWoods/scripts.pory"
	run_right
# 44 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 44 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 44 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 44 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 44 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 44 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 44 "data/maps/PetalburgWoods/scripts.pory"
	run_up
	step_end

# 53 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight_Movement_0:
# 53 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 53 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 53 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 53 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 53 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 53 "data/maps/PetalburgWoods/scripts.pory"
	step_faster_right
	step_end

# 58 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight_Movement_1:
# 58 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 58 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 58 "data/maps/PetalburgWoods/scripts.pory"
	run_down
	step_end

# 64 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight_Movement_2:
# 64 "data/maps/PetalburgWoods/scripts.pory"
	run_down
# 64 "data/maps/PetalburgWoods/scripts.pory"
	run_right
# 64 "data/maps/PetalburgWoods/scripts.pory"
	step_faster_up
	step_end

# 70 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight_Movement_3:
# 70 "data/maps/PetalburgWoods/scripts.pory"
	run_left
# 70 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 70 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 70 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 70 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 70 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 70 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 70 "data/maps/PetalburgWoods/scripts.pory"
	run_up
	step_end

# 88 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherAquaEnters_Movement_0:
# 88 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 88 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 88 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 88 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

# 98 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_0:
# 98 "data/maps/PetalburgWoods/scripts.pory"
	lock_look
# 98 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 98 "data/maps/PetalburgWoods/scripts.pory"
	unlock_look
	step_end

# 102 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_1:
# 102 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 102 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 102 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 102 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 102 "data/maps/PetalburgWoods/scripts.pory"
	run_up
# 102 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 102 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
	step_end

# 112 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_2:
# 112 "data/maps/PetalburgWoods/scripts.pory"
	step_faster_down
# 112 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 112 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 112 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 112 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 112 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 112 "data/maps/PetalburgWoods/scripts.pory"
	face_up
	step_end

# 116 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherAquaBattleAndFinish_Movement_3:
# 116 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 116 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 116 "data/maps/PetalburgWoods/scripts.pory"
	step_faster_up
	step_end

PetalburgWoods_Text_NotAOneToBeFound::
# 214 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
	.string "Not a one to be found…$"

PetalburgWoods_Text_HaveYouSeenShroomish::
# 219 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
	.string "called SHROOMISH around here?\p"
	.string "I really love that POKéMON.$"

PetalburgWoods_Text_IWasGoingToAmbushYou::
# 226 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
	.string "had to dawdle in PETALBURG WOODS\l"
	.string "forever, didn't you?\p"
	.string "I got sick of waiting, so here I am!$"

PetalburgWoods_Text_HandOverThosePapers::
# 234 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
	.string "Hand over those papers!$"

PetalburgWoods_Text_YouHaveToHelpMe::
# 240 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
	.string "You're a POKéMON TRAINER, aren't you?\n"
	.string "You've got to help me, please!$"

PetalburgWoods_Text_NoOneCrossesTeamAqua::
# 247 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
	.string "What, you're going to protect him?\p"
	.string "No one who crosses TEAM AQUA\n"
	.string "gets any mercy, not even a kid!\p"
	.string "Come on and battle me!$"

PetalburgWoods_Text_YoureKiddingMe::
# 257 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"

PetalburgWoods_Text_YouveGotSomeNerve::
# 261 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
	.string "meddling with TEAM AQUA!\l"
	.string "Come on and battle me again!\p"
	.string "I wish I could say that, but I'm out of\n"
	.string "POKéMON…\p"
	.string "And, hey, we of TEAM AQUA are also\n"
	.string "after something in RUSTBORO.\p"
	.string "I'll let you go today!$"

PetalburgWoods_Text_ThatWasAwfullyClose::
# 275 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
	.string "That was awfully close!\p"
	.string "Thanks to you, he didn't rob me of\n"
	.string "these important papers.\p"
	.string "I know, I'll give you a GREAT BALL as\n"
	.string "my thanks!$"

PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro::
# 286 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
	.string "they were after something in\l"
	.string "RUSTBORO, too?$"

PetalburgWoods_Text_ICantBeWastingTime::
# 292 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
	.string "I can't be wasting time!$"

PetalburgWoods_Text_YoureLoadedWithItems::
# 297 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
	.string "I can't give you this GREAT BALL.$"

PetalburgWoods_Text_GoBugPokemonTeam::
# 302 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
	.string "Go, go, go!\n"
	.string "My BUG POKéMON team!$"

PetalburgWoods_Text_ICouldntWin::
# 309 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
	.string "but I couldn't win…$"

PetalburgWoods_Text_ImOutOfPokeBalls::
# 314 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
	.string "Now I'm out of POKé BALLS.$"

PetalburgWoods_Text_InstantlyPopularWithBugPokemon::
# 319 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
	.string "you get to be instantly popular!$"

PetalburgWoods_Text_CantBePopularIfILose::
# 324 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"

PetalburgWoods_Text_PeopleRespectYou::
# 328 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
	.string "people respect you for it.$"

PetalburgWoods_Text_IWantRematch1::
# 333 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
	.string "POKéMON grow up!\p"
	.string "I'm registering you in my POKéNAV!$"

PetalburgWoods_Text_IWantRematch2::
# 340 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
	.string "POKéMON grow up!\p"
	.string "I'm registering you in my POKéNAV!$"

PetalburgWoods_Text_MyPokemonHaveGrown::
# 347 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
	.string "I'll be popular again.$"

PetalburgWoods_Text_CantBePopularIfLose::
# 352 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"

PetalburgWoods_Text_IveBeenTrainingHard::
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
	.string "strong POKéMON, right?\l"
	.string "So, I've been training hard.$"

PetalburgWoods_Text_StayOutOfTallGrass::
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
	.string "Your POKéMON doing okay?\p"
	.string "If your POKéMON are weak and you want\n"
	.string "to avoid battles, you should stay out\l"
	.string "of tall grass.$"

PetalburgWoods_Text_HiddenItemsExplanation::
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
	.string "ground even if you can't see them.\p"
	.string "That's why I always check where I'm\n"
	.string "walking.$"

PetalburgWoods_Text_TryUsingThisItem::
# 379 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
	.string "That's the BADGE from RUSTBORO GYM!\p"
	.string "You must be a TRAINER.\n"
	.string "You should try using this item.$"

PetalburgWoods_Text_MiracleSeedExplanation::
# 387 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
	.string "If a POKéMON holds that item, its\l"
	.string "GRASS-type moves become stronger.\p"
	.string "Besides MIRACLE SEED, I think there are\n"
	.string "other convenient items for POKéMON\l"
	.string "to hold.$"

PetalburgWoods_Text_TrainerTipsExperience::
# 397 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Any POKéMON that appears even once\n"
	.string "in a battle is awarded EXP Points.\p"
	.string "To raise a weak POKéMON, put it at the\n"
	.string "left of the team list.\p"
	.string "As soon as a battle starts, switch it\n"
	.string "out. It will earn EXP Points without\l"
	.string "being exposed to any harm.$"

PetalburgWoods_Text_TrainerTipsPP::
# 411 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "In addition to Hit Points (HP), POKéMON\n"
	.string "have Power Points (PP) that are used to\l"
	.string "make moves during battle.\p"
	.string "If a POKéMON runs out of PP, it must be\n"
	.string "taken to a POKéMON CENTER.$"
