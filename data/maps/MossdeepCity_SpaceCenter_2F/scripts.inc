MossdeepCity_SpaceCenter_2F_MapScripts::
# 2 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MossdeepCity_SpaceCenter_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_eq MossdeepCity_SpaceCenter_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MossdeepCity_SpaceCenter_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_MOSSDEEP_SPACE_CENTER_STATE, 2
	goto_if_eq MossdeepCity_SpaceCenter_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
MossdeepCity_SpaceCenter_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

MossdeepCity_SpaceCenter_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 5 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 3
# 6 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 7 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_RICH_BOY, 3, 2
# 8 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_RICH_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 9 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_GENTLEMAN, 1, 3
# 10 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_GENTLEMAN, MOVEMENT_TYPE_FACE_RIGHT
	goto MossdeepCity_SpaceCenter_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MossdeepCity_SpaceCenter_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 13 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_GRUNT_6, 11, 2
# 14 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_GRUNT_7, 15, 2
# 15 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_GRUNT_5, 13, 4
	goto MossdeepCity_SpaceCenter_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

MossdeepCity_SpaceCenter_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 20 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script_2 VAR_MOSSDEEP_SPACE_CENTER_STATE, 1, MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts
	.2byte 0


MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts::
# 25 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 26 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 27 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 28 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_Delay48
# 29 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 30 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn, MSGBOX_YESNO
# 31 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts_2
# 39 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro, MSGBOX_DEFAULT
# 40 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_5, MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat
# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_GRUNT_5, MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts_Movement_0
# 42 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 44 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 45 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro, MSGBOX_DEFAULT
# 46 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_6, MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat
# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_GRUNT_6, MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts_Movement_1
# 48 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 49 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 50 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 51 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro, MSGBOX_DEFAULT
# 52 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_7, MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat
# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_GRUNT_7, MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts_Movement_2
# 54 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 55 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 2
# 56 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_GRUNT_6
# 57 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_GRUNT_7
# 58 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SPACE_CENTER_GRUNT_5
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts_1:
# 60 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts_2:
# 32 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_GoodAnswer, MSGBOX_DEFAULT
# 33 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 34 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 35 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 36 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	warp MAP_MOSSDEEP_CITY_SPACE_CENTER_1F, 13, 1
# 37 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
	goto MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts_1


MossdeepCity_SpaceCenter_2F_EventScript_Scientist::
# 65 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_faceplayer
# 66 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_Scientist_2
# 66 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_lt MossdeepCity_SpaceCenter_2F_EventScript_Scientist_2
# 70 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel, MSGBOX_DEFAULT
	release_end

MossdeepCity_SpaceCenter_2F_EventScript_Scientist_2:
# 67 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets, MSGBOX_DEFAULT
	release_end


MossdeepCity_SpaceCenter_2F_EventScript_Gentleman::
# 75 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_faceplayer
# 76 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_Gentleman_2
# 76 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_lt MossdeepCity_SpaceCenter_2F_EventScript_Gentleman_2
# 80 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis, MSGBOX_DEFAULT
	release_end

MossdeepCity_SpaceCenter_2F_EventScript_Gentleman_2:
# 77 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut, MSGBOX_DEFAULT
	release_end


MossdeepCity_SpaceCenter_2F_EventScript_RichBoy::
# 85 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_faceplayer
# 86 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_RichBoy_2
# 86 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
	goto_if_lt MossdeepCity_SpaceCenter_2F_EventScript_RichBoy_2
# 90 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace, MSGBOX_DEFAULT
	release_end

MossdeepCity_SpaceCenter_2F_EventScript_RichBoy_2:
# 87 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace, MSGBOX_DEFAULT
	release_end


MossdeepCity_SpaceCenter_2F_EventScript_Grunt6::
# 96 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle, MSGBOX_NPC
	end


MossdeepCity_SpaceCenter_2F_EventScript_Grunt7::
# 101 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle, MSGBOX_NPC
	end


MossdeepCity_SpaceCenter_2F_EventScript_Grunt5::
# 106 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle, MSGBOX_NPC
	end


MossdeepCity_SpaceCenter_2F_EventScript_Tabitha::
# 111 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_faceplayer
# 112 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou, MSGBOX_DEFAULT
# 113 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 114 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
	release_end


MossdeepCity_SpaceCenter_2F_EventScript_Maxie::
# 119 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 120 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere, MSGBOX_DEFAULT
# 121 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
	end


MossdeepCity_SpaceCenter_2F_EventScript_Steven::
# 126 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 127 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER, MossdeepCity_SpaceCenter_2F_EventScript_Steven_2
MossdeepCity_SpaceCenter_2F_EventScript_Steven_1:
# 130 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 131 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel, MSGBOX_DEFAULT
# 132 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano, MSGBOX_DEFAULT
# 133 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 134 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 30
# 135 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 136 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_Steven_5
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_EventScript_Steven_Movement_0
MossdeepCity_SpaceCenter_2F_EventScript_Steven_4:
# 141 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 142 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_Steven_2:
# 128 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
	goto MossdeepCity_SpaceCenter_2F_EventScript_Steven_1

MossdeepCity_SpaceCenter_2F_EventScript_Steven_5:
# 137 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_2F_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth
	goto MossdeepCity_SpaceCenter_2F_EventScript_Steven_4


# 146 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth:
# 148 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_left
# 149 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_look
# 150 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	run_right
# 150 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	run_right
# 151 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_look
# 152 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 152 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 153 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	creep_left
# 153 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	creep_left
# 154 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_down
	step_end

MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt::
# 158 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 159 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 160 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle, MSGBOX_YESNO
# 161 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt_2
MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt_1:
# 164 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly, MSGBOX_DEFAULT
# 165 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 166 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_StepFasterDown
# 167 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 168 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt_2:
# 162 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt_1


MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle::
# 173 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_StepFasterDown
# 174 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 175 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SavePlayerParty
# 176 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 177 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 178 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle_2
# 187 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special LoadPlayerParty
# 188 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
	end

MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle_2:
# 179 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	multi_2_vs_2 TRAINER_MAXIE_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand, TRAINER_TABITHA_MOSSDEEP, MossdeepCity_SpaceCenter_Text_TabithaDefeat, PARTNER_STEVEN
# 180 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle_5
MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle_4:
# 183 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 184 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SetCB2WhiteOut
	end

MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle_5:
# 181 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha
	goto MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle_4


MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha::
# 193 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided, MSGBOX_DEFAULT
# 194 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 195 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 196 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_MAXIE, Common_Movement_StepFasterLeft
# 197 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_TABITHA, Common_Movement_StepFasterDown
# 198 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 199 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 60
# 200 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_MAXIE, Common_Movement_StepFasterUp
# 201 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_SPACE_CENTER_TABITHA, Common_Movement_StepFasterRight
# 202 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 203 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 204 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp, MSGBOX_DEFAULT
# 205 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 206 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 207 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadedefaultbgm
# 208 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 209 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
# 210 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 211 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 212 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 213 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_GRUNT_6
# 214 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_GRUNT_7
# 215 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_GRUNT_5
# 216 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_TABITHA
# 217 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_MAXIE
# 218 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 6
# 219 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_SCIENTIST, DIR_SOUTH
# 220 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_GENTLEMAN, 11, 8
# 221 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_GENTLEMAN, DIR_NORTH
# 222 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SPACE_CENTER_2F_RICH_BOY, 6, 2
# 223 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_RICH_BOY, DIR_NORTH
# 224 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 225 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha_3
# 226 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha_4
MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha_1:
# 228 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 229 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome, MSGBOX_DEFAULT
# 230 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 231 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 232 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 233 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 234 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_STEVEN
# 235 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 236 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 237 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 1
# 238 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 239 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SPACE_CENTER_2F_SCIENTIST
# 240 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SPACE_CENTER_2F_SCIENTIST, 5, 6
# 241 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SPACE_CENTER_2F_SCIENTIST, MOVEMENT_TYPE_WANDER_AROUND
# 242 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SPACE_CENTER_2F_SCIENTIST
# 243 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabithaEnd
	end

MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha_3:
# 225 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_STEVEN, DIR_NORTH
	goto MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha_1

MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha_4:
# 226 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SPACE_CENTER_2F_STEVEN, DIR_EAST
	goto MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha_1


# 247 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 248 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabithaEnd::
# 249 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 250 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
#ifdef BUGFIX
# 251 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 252 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
#endif
# 253 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end

MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall::
# 257 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall_2
# 261 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_BrendanRayquazaCall
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall_1:
# 263 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 264 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 265 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 266 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall_2:
# 259 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_MayRayquazaCall
	goto MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall_1


# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts_Movement_0:
# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_look
# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_look
	step_end

# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts_Movement_1:
# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_look
# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_look
	step_end

# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts_Movement_2:
# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_look
# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_right
# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_look
	step_end

# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Steven_Movement_0:
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_look
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	run_up
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	run_up
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_look
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	creep_down
# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	creep_down
	step_end

MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets::
# 270 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MOSSDEEP has mainly sunny weather,\n"
	.string "and its winds are stable.\p"
	.string "It's an ideal location for launching\n"
	.string "rockets.$"

MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel::
# 278 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Why would TEAM MAGMA want to steal\n"
	.string "our rocket fuel in the first place?$"

MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut::
# 283 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If only I was a little younger, I would\n"
	.string "have liked being an astronaut…\p"
	.string "No… It's not too late!\n"
	.string "I can and will try!$"

MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis::
# 291 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If TEAM MAGMA takes the rocket fuel,\n"
	.string "I won't be able to go to space!\p"
	.string "They can't be allowed to get away\n"
	.string "with such an outrage!$"

MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace::
# 299 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I wish ordinary people could go into\n"
	.string "space one day…$"

MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace::
# 304 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "TEAM MAGMA…\n"
	.string "Do they want to go to space, too?$"

MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn::
# 309 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's wrong with you?\p"
	.string "You're outnumbered three to one,\n"
	.string "but you still want to take us on?$"

MossdeepCity_SpaceCenter_2F_Text_GoodAnswer::
# 316 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Good answer!\n"
	.string "That's what a smart person'll do!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro::
# 321 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "A reckless go-getter, are you?\n"
	.string "Okay, I'll go first!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat::
# 326 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost!\n"
	.string "But!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro::
# 331 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's too soon to be relieved!\n"
	.string "I'm up next!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat::
# 336 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost, too!\n"
	.string "But!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro::
# 341 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I bet you want to take a break.\n"
	.string "But I'm not about to let you do that!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat::
# 346 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We should've taken a break…\n"
	.string "That's what we should've done…$"

MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle::
# 351 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Three of us here, and look at the sorry\n"
	.string "mess we got ourselves into.$"

MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle::
# 356 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We three losing like this…\n"
	.string "We look worse than usual by triple!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle::
# 361 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are we being useful to our leader\n"
	.string "at all?$"

MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou::
# 366 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Hehehe!\p"
	.string "We come all the way here to get some\n"
	.string "fuel, and we're interfered with again!\p"
	.string "If you're going to mess with us too,\n"
	.string "we'll take care of you at the same time!$"

MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere::
# 376 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: Clear out of the way!\n"
	.string "Don't you dare interfere!$"

MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel::
# 381 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: TEAM MAGMA…\p"
	.string "What's the point of stealing rocket\n"
	.string "fuel?$"

MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano::
# 388 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: Fufufu… Since you're so\n"
	.string "curious, you deserve an explanation.\p"
	.string "We're going to jettison the entire\n"
	.string "load into MT. CHIMNEY!\p"
	.string "With GROUDON gone, we have no need\n"
	.string "for that slag heap of a mountain!\p"
	.string "So we'll use the fuel's power to make\n"
	.string "the volcano erupt!\p"
	.string "It will be savage!$"

MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle::
# 404 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\n"
	.string "You're going to help me?\p"
	.string "Let's go into battle together!\n"
	.string "Are you ready?$"

MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly::
# 412 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Then, hurry!\n"
	.string "Get ready quickly!$"

MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand::
# 417 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "All I want…\n"
	.string "I just want to expand the land mass…$"

MossdeepCity_SpaceCenter_Text_TabithaDefeat::
# 422 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm with our leader…$"

MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided::
# 426 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: We failed to make the volcano\n"
	.string "erupt…\p"
	.string "We failed to control GROUDON after\n"
	.string "we had awoken it…\p"
	.string "Is our goal to expand the land\n"
	.string "misguided?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "If…\n"
	.string "If we, TEAM MAGMA, are wrong…\l"
	.string "… … … … … …\p"
	.string "Then might TEAM AQUA's goal to expand\n"
	.string "the sea also be equally misguided?$"

MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp::
# 447 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: All right…\n"
	.string "We will give up on the fuel…\p"
	.string "There appear to be more important\n"
	.string "matters that I must examine…$"

MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome::
# 455 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Whew, that was too tense.\n"
	.string "{PLAYER}{KUN}, thank you.\p"
	.string "I have something to give you as\n"
	.string "thanks for your support.\p"
	.string "Please come see me at home\n"
	.string "after this.\p"
	.string "Oh, yes, I don't live in RUSTBORO CITY.\n"
	.string "I live right here on this island.$"
