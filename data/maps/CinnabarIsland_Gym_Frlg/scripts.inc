CinnabarIsland_Gym_Frlg_MapScripts::
# 2 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 12 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5
CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 15 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_8
CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 18 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_11
CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 21 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_14
CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 24 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_17
CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_16:
# 27 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_20
CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_19:
	end

CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 5 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 6 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 7 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 8 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 9 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
	end

CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 13 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
	goto CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4

CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 16 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
	goto CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_7

CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 19 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
	goto CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_10

CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 22 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
	goto CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_13

CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_17:
# 25 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
	goto CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_16

CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_20:
# 28 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
	goto CinnabarIsland_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_19


CinnabarIsland_Gym_EventScript_Blaine::
# 35 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 36 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE, CinnabarIsland_Gym_Text_BlaineIntro, CinnabarIsland_Gym_Text_BlaineDefeat, CinnabarIsland_Gym_EventScript_DefeatedBlaine, NO_MUSIC
# 37 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM38_FROM_BLAINE, CinnabarIsland_Gym_EventScript_Blaine_2
CinnabarIsland_Gym_EventScript_Blaine_1:
# 40 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlainePostBattle
	release_end

CinnabarIsland_Gym_EventScript_Blaine_2:
# 38 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GiveTM38
	goto CinnabarIsland_Gym_EventScript_Blaine_1


CinnabarIsland_Gym_EventScript_DefeatedBlaine::
# 45 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 1
# 46 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_BLAINE
# 47 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE07_GET
# 48 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
# 49 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 1
# 50 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 51 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 7
# 52 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GiveTM38
	end


CinnabarIsland_Gym_EventScript_GiveTM38::
# 57 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ExplainVolcanoBadge
	checkitemspace ITEM_TM38
# 0 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CinnabarIsland_Gym_EventScript_GiveTM38_2
# 62 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	giveitem_msg CinnabarIsland_Gym_Text_ReceivedTM38FromBlaine, ITEM_TM38
# 63 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM38_FROM_BLAINE
# 64 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_FireBlastIsUltimateFireMove
	release_end

CinnabarIsland_Gym_EventScript_GiveTM38_2:
# 59 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_MakeSpaceForThis
	release_end


CinnabarIsland_Gym_EventScript_Erik::
# 69 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ERIK, CinnabarIsland_Gym_Text_ErikIntro, CinnabarIsland_Gym_Text_ErikDefeat
# 70 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ErikPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_Avery::
# 75 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryIntro, CinnabarIsland_Gym_Text_AveryDefeat, CinnabarIsland_Gym_EventScript_DefeatedAvery
# 76 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedAvery::
# 81 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DefeatedAvery_2
CinnabarIsland_Gym_EventScript_DefeatedAvery_1:
	release_end

CinnabarIsland_Gym_EventScript_DefeatedAvery_2:
# 82 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
	goto CinnabarIsland_Gym_EventScript_DefeatedAvery_1


CinnabarIsland_Gym_EventScript_Derek::
# 88 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekIntro, CinnabarIsland_Gym_Text_DerekDefeat, CinnabarIsland_Gym_EventScript_DefeatedDerek
# 89 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 2
# 90 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedDerek::
# 95 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DefeatedDerek_2
CinnabarIsland_Gym_EventScript_DefeatedDerek_1:
	release_end

CinnabarIsland_Gym_EventScript_DefeatedDerek_2:
# 96 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
	goto CinnabarIsland_Gym_EventScript_DefeatedDerek_1


CinnabarIsland_Gym_EventScript_Zac::
# 102 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacIntro, CinnabarIsland_Gym_Text_ZacDefeat, CinnabarIsland_Gym_EventScript_DefeatedZac
# 103 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedZac::
# 108 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DefeatedZac_2
CinnabarIsland_Gym_EventScript_DefeatedZac_1:
	release_end

CinnabarIsland_Gym_EventScript_DefeatedZac_2:
# 109 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
	goto CinnabarIsland_Gym_EventScript_DefeatedZac_1


CinnabarIsland_Gym_EventScript_Quinn::
# 115 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnIntro, CinnabarIsland_Gym_Text_QuinnDefeat, CinnabarIsland_Gym_EventScript_DefeatedQuinn
# 116 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedQuinn::
# 121 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DefeatedQuinn_2
CinnabarIsland_Gym_EventScript_DefeatedQuinn_1:
	release_end

CinnabarIsland_Gym_EventScript_DefeatedQuinn_2:
# 122 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
	goto CinnabarIsland_Gym_EventScript_DefeatedQuinn_1


CinnabarIsland_Gym_EventScript_Ramon::
# 128 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonIntro, CinnabarIsland_Gym_Text_RamonDefeat, CinnabarIsland_Gym_EventScript_DefeatedRamon
# 129 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedRamon::
# 134 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DefeatedRamon_2
CinnabarIsland_Gym_EventScript_DefeatedRamon_1:
	release_end

CinnabarIsland_Gym_EventScript_DefeatedRamon_2:
# 135 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
	goto CinnabarIsland_Gym_EventScript_DefeatedRamon_1


CinnabarIsland_Gym_EventScript_Dusty::
# 141 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyIntro, CinnabarIsland_Gym_Text_DustyDefeat, CinnabarIsland_Gym_EventScript_DefeatedDusty
# 142 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedDusty::
# 147 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DefeatedDusty_2
CinnabarIsland_Gym_EventScript_DefeatedDusty_1:
	release_end

CinnabarIsland_Gym_EventScript_DefeatedDusty_2:
# 148 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
	goto CinnabarIsland_Gym_EventScript_DefeatedDusty_1


CinnabarIsland_Gym_EventScript_GymGuy::
# 154 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lock_faceplayer
# 155 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_EventScript_GymGuy_2
# 159 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyAdvice
	release_end

CinnabarIsland_Gym_EventScript_GymGuy_2:
# 156 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyPostVictory
	release_end


CinnabarIsland_Gym_EventScript_GymStatue::
# 164 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 165 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, CinnabarIsland_Gym_EventScript_GymStatue_2
# 168 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatue
CinnabarIsland_Gym_EventScript_GymStatue_1:
# 170 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_GymStatue_2:
# 166 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatuePlayerWon
	goto CinnabarIsland_Gym_EventScript_GymStatue_1


CinnabarIsland_Gym_EventScript_Quz1Left::
# 175 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 176 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 177 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
	end


CinnabarIsland_Gym_EventScript_Quz1Right::
# 182 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 183 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 184 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
	end


CinnabarIsland_Gym_EventScript_Quiz1::
# 189 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 190 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion1, MSGBOX_YESNO
# 191 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz1_2
# 197 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 198 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	checktrainerflag TRAINER_BURGLAR_QUINN
	goto_if 0, CinnabarIsland_Gym_EventScript_Quiz1_7
CinnabarIsland_Gym_EventScript_Quiz1_1:
# 209 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_Quiz1_2:
# 192 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 193 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_Quiz1_5
	goto CinnabarIsland_Gym_EventScript_Quiz1_1

CinnabarIsland_Gym_EventScript_Quiz1_5:
# 194 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
	goto CinnabarIsland_Gym_EventScript_Quiz1_1

CinnabarIsland_Gym_EventScript_Quiz1_7:
# 199 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_0x800A, LOCALID_QUINN
# 200 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_TrainerWalkLeft
# 201 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 202 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnIntro
# 203 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnDefeat
# 204 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_Quiz1_9
	goto CinnabarIsland_Gym_EventScript_Quiz1_1

CinnabarIsland_Gym_EventScript_Quiz1_9:
# 205 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
	goto CinnabarIsland_Gym_EventScript_Quiz1_1


CinnabarIsland_Gym_EventScript_CorrectAnswer::
# 214 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 215 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitfanfare
# 216 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_CorrectGoOnThrough
	return


CinnabarIsland_Gym_EventScript_IncorrectAnswer::
# 221 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 222 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_BOO
# 223 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 224 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_SorryBadCall
# 225 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	closemessage
	return


CinnabarIsland_Gym_EventScript_TrainerWalkLeft::
# 230 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 231 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 232 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	case 0, CinnabarIsland_Gym_EventScript_TrainerWalkLeft_3
# 233 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	case 1, CinnabarIsland_Gym_EventScript_TrainerWalkLeft_4
CinnabarIsland_Gym_EventScript_TrainerWalkLeft_1:
# 235 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
	return

CinnabarIsland_Gym_EventScript_TrainerWalkLeft_3:
# 232 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement VAR_0x800A, CinnabarIsland_Gym_EventScript_TrainerWalkLeft_Movement_0
	goto CinnabarIsland_Gym_EventScript_TrainerWalkLeft_1

CinnabarIsland_Gym_EventScript_TrainerWalkLeft_4:
# 233 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement VAR_0x800A, Common_Movement_WalkLeft
	goto CinnabarIsland_Gym_EventScript_TrainerWalkLeft_1


CinnabarIsland_Gym_EventScript_Quiz1Complete::
# 240 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 241 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 242 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 243 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 244 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_1
	return


CinnabarIsland_Gym_EventScript_Quiz2Left::
# 249 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 250 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 251 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
	end


CinnabarIsland_Gym_EventScript_Quiz2Right::
# 256 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 257 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 258 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
	end


CinnabarIsland_Gym_EventScript_Quiz2::
# 263 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 264 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion2, MSGBOX_YESNO
# 265 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz2_2
# 282 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 283 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_Quiz2_7
CinnabarIsland_Gym_EventScript_Quiz2_1:
# 287 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_Quiz2_2:
# 266 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 267 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	checktrainerflag TRAINER_SUPER_NERD_AVERY
	goto_if 0, CinnabarIsland_Gym_EventScript_Quiz2_5
	goto CinnabarIsland_Gym_EventScript_Quiz2_1

CinnabarIsland_Gym_EventScript_Quiz2_5:
# 268 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Gym_EventScript_Quiz2_Movement_0
# 269 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 270 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	case 0, CinnabarIsland_Gym_EventScript_Quiz2_11
# 271 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	case 1, CinnabarIsland_Gym_EventScript_Quiz2_12
CinnabarIsland_Gym_EventScript_Quiz2_9:
# 273 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
# 274 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 275 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryIntro
# 276 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryDefeat
# 277 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_Quiz2_13
	goto CinnabarIsland_Gym_EventScript_Quiz2_1

CinnabarIsland_Gym_EventScript_Quiz2_7:
# 284 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
	goto CinnabarIsland_Gym_EventScript_Quiz2_1

CinnabarIsland_Gym_EventScript_Quiz2_11:
# 270 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_EventScript_Quiz2_Movement_1
	goto CinnabarIsland_Gym_EventScript_Quiz2_9

CinnabarIsland_Gym_EventScript_Quiz2_12:
# 271 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_EventScript_Quiz2_Movement_2
	goto CinnabarIsland_Gym_EventScript_Quiz2_9

CinnabarIsland_Gym_EventScript_Quiz2_13:
# 278 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
	goto CinnabarIsland_Gym_EventScript_Quiz2_1


CinnabarIsland_Gym_EventScript_Quiz2Complete::
# 292 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 293 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 294 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 295 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 296 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_2
	return


CinnabarIsland_Gym_EventScript_Quiz3Left::
# 301 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 302 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 303 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
	end


CinnabarIsland_Gym_EventScript_Quiz3Right::
# 308 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 309 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 310 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
	end


CinnabarIsland_Gym_EventScript_Quiz3::
# 315 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 316 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion3, MSGBOX_YESNO
# 317 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz3_2
# 330 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 331 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_Quiz3_7
CinnabarIsland_Gym_EventScript_Quiz3_1:
# 335 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_Quiz3_2:
# 318 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 319 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	checktrainerflag TRAINER_BURGLAR_RAMON
	goto_if 0, CinnabarIsland_Gym_EventScript_Quiz3_5
	goto CinnabarIsland_Gym_EventScript_Quiz3_1

CinnabarIsland_Gym_EventScript_Quiz3_5:
# 320 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_0x800A, LOCALID_RAMON
# 321 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_TrainerWalkLeft
# 322 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 323 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonIntro
# 324 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonDefeat
# 325 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_Quiz3_9
	goto CinnabarIsland_Gym_EventScript_Quiz3_1

CinnabarIsland_Gym_EventScript_Quiz3_7:
# 332 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
	goto CinnabarIsland_Gym_EventScript_Quiz3_1

CinnabarIsland_Gym_EventScript_Quiz3_9:
# 326 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
	goto CinnabarIsland_Gym_EventScript_Quiz3_1


CinnabarIsland_Gym_EventScript_Quiz3Complete::
# 340 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 341 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 342 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 343 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 344 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_3
	return


CinnabarIsland_Gym_EventScript_Quiz4Left::
# 349 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 350 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 351 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
	end


CinnabarIsland_Gym_EventScript_Quiz4Right::
# 356 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 357 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 358 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
	end


CinnabarIsland_Gym_EventScript_Quiz4::
# 363 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 364 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion4, MSGBOX_YESNO
# 365 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz4_2
# 378 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 379 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_Quiz4_7
CinnabarIsland_Gym_EventScript_Quiz4_1:
# 383 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_Quiz4_2:
# 366 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 367 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	checktrainerflag TRAINER_SUPER_NERD_DEREK
	goto_if 0, CinnabarIsland_Gym_EventScript_Quiz4_5
	goto CinnabarIsland_Gym_EventScript_Quiz4_1

CinnabarIsland_Gym_EventScript_Quiz4_5:
# 368 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_0x800A, LOCALID_DEREK
# 369 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_TrainerWalkLeft
# 370 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 371 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekIntro
# 372 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekDefeat
# 373 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_Quiz4_9
	goto CinnabarIsland_Gym_EventScript_Quiz4_1

CinnabarIsland_Gym_EventScript_Quiz4_7:
# 380 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
	goto CinnabarIsland_Gym_EventScript_Quiz4_1

CinnabarIsland_Gym_EventScript_Quiz4_9:
# 374 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
	goto CinnabarIsland_Gym_EventScript_Quiz4_1


CinnabarIsland_Gym_EventScript_Quiz4Complete::
# 388 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 389 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 390 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 391 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 392 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_4
	return


CinnabarIsland_Gym_EventScript_Quiz5Left::
# 397 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 398 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 399 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
	end


CinnabarIsland_Gym_EventScript_Quiz5Right::
# 404 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 405 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 406 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
	end


CinnabarIsland_Gym_EventScript_Quiz5::
# 411 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 412 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion5, MSGBOX_YESNO
# 413 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz5_2
# 419 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 420 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	checktrainerflag TRAINER_BURGLAR_DUSTY
	goto_if 0, CinnabarIsland_Gym_EventScript_Quiz5_7
CinnabarIsland_Gym_EventScript_Quiz5_1:
# 431 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_Quiz5_2:
# 414 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 415 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_Quiz5_5
	goto CinnabarIsland_Gym_EventScript_Quiz5_1

CinnabarIsland_Gym_EventScript_Quiz5_5:
# 416 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
	goto CinnabarIsland_Gym_EventScript_Quiz5_1

CinnabarIsland_Gym_EventScript_Quiz5_7:
# 421 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_0x800A, LOCALID_DUSTY
# 422 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_TrainerWalkLeft
# 423 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 424 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyIntro
# 425 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyDefeat
# 426 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_Quiz5_9
	goto CinnabarIsland_Gym_EventScript_Quiz5_1

CinnabarIsland_Gym_EventScript_Quiz5_9:
# 427 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
	goto CinnabarIsland_Gym_EventScript_Quiz5_1


CinnabarIsland_Gym_EventScript_Quiz5Complete::
# 436 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 437 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 438 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 439 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 440 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_5
	return


CinnabarIsland_Gym_EventScript_Quiz6Left::
# 445 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 446 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 447 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
	end


CinnabarIsland_Gym_EventScript_Quiz6Right::
# 452 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 453 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 454 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
	end


CinnabarIsland_Gym_EventScript_Quiz6::
# 459 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 460 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion6, MSGBOX_YESNO
# 461 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz6_2
# 474 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 475 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_Quiz6_7
CinnabarIsland_Gym_EventScript_Quiz6_1:
# 479 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_Quiz6_2:
# 462 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 463 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	checktrainerflag TRAINER_SUPER_NERD_ZAC
	goto_if 0, CinnabarIsland_Gym_EventScript_Quiz6_5
	goto CinnabarIsland_Gym_EventScript_Quiz6_1

CinnabarIsland_Gym_EventScript_Quiz6_5:
# 464 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_0x800A, LOCALID_ZAC
# 465 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_TrainerWalkLeft
# 466 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 467 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacIntro
# 468 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacDefeat
# 469 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_Quiz6_9
	goto CinnabarIsland_Gym_EventScript_Quiz6_1

CinnabarIsland_Gym_EventScript_Quiz6_7:
# 476 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
	goto CinnabarIsland_Gym_EventScript_Quiz6_1

CinnabarIsland_Gym_EventScript_Quiz6_9:
# 470 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
	goto CinnabarIsland_Gym_EventScript_Quiz6_1


CinnabarIsland_Gym_EventScript_Quiz6Complete::
# 484 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 485 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 486 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 487 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 488 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_6
	return


CinnabarIsland_Gym_EventScript_OpenDoor1::
# 493 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 26, 8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 494 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 27, 8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 495 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 26, 9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 496 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 27, 9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 497 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 26, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 498 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 27, 10, METATILE_CinnabarGym_Floor, 0
# 499 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 28, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return


CinnabarIsland_Gym_EventScript_OpenDoor2::
# 504 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 505 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 506 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 507 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 508 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 509 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 10, METATILE_CinnabarGym_Floor, 0
# 510 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 19, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return


CinnabarIsland_Gym_EventScript_OpenDoor3::
# 515 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 15, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 516 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 15, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 517 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 16, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 518 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 16, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 519 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 17, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 520 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 17, METATILE_CinnabarGym_Floor, 0
# 521 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 19, 17, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return


CinnabarIsland_Gym_EventScript_OpenDoor4::
# 526 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 11, 21, METATILE_CinnabarGym_Wall_RetractedBarrier, 1
# 527 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 11, 22, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 528 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 11, 23, METATILE_CinnabarGym_Floor, 0
	return


CinnabarIsland_Gym_EventScript_OpenDoor5::
# 533 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 16, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 534 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 16, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 535 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 17, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 536 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 17, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 537 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 18, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 538 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 18, METATILE_CinnabarGym_Floor, 0
# 539 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 7, 18, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return


CinnabarIsland_Gym_EventScript_OpenDoor6::
# 544 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 545 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 546 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 547 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 548 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 549 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 10, METATILE_CinnabarGym_Floor, 0
# 550 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 7, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return


# 232 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_TrainerWalkLeft_Movement_0:
# 232 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 232 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
	step_end

# 268 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2_Movement_0:
# 268 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	delay_16
# 268 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	delay_16
# 268 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_faster_right
	step_end

# 270 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2_Movement_1:
# 270 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_up
# 270 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_up
# 270 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
	step_end

# 271 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2_Movement_2:
# 271 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_up
# 271 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_up
# 271 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_faster_left
	step_end

CinnabarIsland_Gym_Text_BlaineIntro::
# 554 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Hah!\p"
	.string "I am BLAINE, the red-hot LEADER\n"
	.string "of CINNABAR GYM!\p"
	.string "My fiery POKéMON are all rough\n"
	.string "and ready with intense heat!\p"
	.string "They incinerate all challengers!\p"
	.string "Hah!\n"
	.string "You better have BURN HEAL!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

CinnabarIsland_Gym_Text_BlaineDefeat::
# 569 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I have burned down to nothing!\n"
	.string "Not even ashes remain!\p"
	.string "You have earned the VOLCANOBADGE.$"

CinnabarIsland_Gym_Text_FireBlastIsUltimateFireMove::
# 576 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "FIRE BLAST is the ultimate fire\n"
	.string "technique.\p"
	.string "Don't waste it on WATER POKéMON.$"

CinnabarIsland_Gym_Text_ExplainVolcanoBadge::
# 583 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Hah!\p"
	.string "The VOLCANOBADGE heightens the\n"
	.string "SPECIAL stats of your POKéMON.\p"
	.string "Here, you can have this, too!$"

CinnabarIsland_Gym_Text_ReceivedTM38FromBlaine::
# 592 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM38\n"
	.string "from BLAINE.$"

CinnabarIsland_Gym_Text_BlainePostBattle::
# 597 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "TM38 contains FIRE BLAST.\n"
	.string "Teach it to FIRE-type POKéMON.\p"
	.string "VULPIX or CHARMELEON would be\n"
	.string "ideal for that move.$"

CinnabarIsland_Gym_Text_MakeSpaceForThis::
# 605 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Make space for this, child!$"

CinnabarIsland_Gym_Text_ErikIntro::
# 609 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Do you know how hot POKéMON fire\n"
	.string "breath can get?$"

CinnabarIsland_Gym_Text_ErikDefeat::
# 614 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Yow!\n"
	.string "Hot, hot, hot!$"

CinnabarIsland_Gym_Text_ErikPostBattle::
# 619 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Fire, or to be more precise,\n"
	.string "combustion…\p"
	.string "…Oxygen in the air…\n"
	.string "Blah, blah, blah, blah…$"

CinnabarIsland_Gym_Text_QuinnIntro::
# 627 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I was a thief, but I went straight\n"
	.string "as a TRAINER.$"

CinnabarIsland_Gym_Text_QuinnDefeat::
# 632 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I surrender!$"

CinnabarIsland_Gym_Text_QuinnPostBattle::
# 636 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I get this uncontrollable urge to\n"
	.string "steal other people's POKéMON.$"

CinnabarIsland_Gym_Text_AveryIntro::
# 641 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I've studied POKéMON thoroughly.\n"
	.string "You can't win!$"

CinnabarIsland_Gym_Text_AveryDefeat::
# 646 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Waah!\n"
	.string "My studies were insufficient!$"

CinnabarIsland_Gym_Text_AveryPostBattle::
# 651 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "My theories are too complicated\n"
	.string "for you to understand.$"

CinnabarIsland_Gym_Text_RamonIntro::
# 656 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I like using FIRE-type POKéMON.\n"
	.string "I just do.$"

CinnabarIsland_Gym_Text_RamonDefeat::
# 661 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Too hot to handle!$"

CinnabarIsland_Gym_Text_RamonPostBattle::
# 665 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I wish there were a thief POKéMON.\n"
	.string "I'd use that!$"

CinnabarIsland_Gym_Text_DerekIntro::
# 670 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I know why BLAINE became a\n"
	.string "TRAINER.$"

CinnabarIsland_Gym_Text_DerekDefeat::
# 675 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Ow!$"

CinnabarIsland_Gym_Text_DerekPostBattle::
# 679 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Our LEADER, BLAINE, became lost\n"
	.string "in the mountains but good.\p"
	.string "Night fell when a fiery bird\n"
	.string "POKéMON appeared.\p"
	.string "Its light allowed BLAINE to find\n"
	.string "his way down safely.$"

CinnabarIsland_Gym_Text_DustyIntro::
# 690 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I've been to many GYMS, but this\n"
	.string "one best suits my style.$"

CinnabarIsland_Gym_Text_DustyDefeat::
# 695 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Yowza!\n"
	.string "Too hot!$"

CinnabarIsland_Gym_Text_DustyPostBattle::
# 700 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "PONYTA, NINETALES…\n"
	.string "Those are popular FIRE POKéMON.$"

CinnabarIsland_Gym_Text_ZacIntro::
# 705 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Fire is weak against H2O.$"

CinnabarIsland_Gym_Text_ZacDefeat::
# 709 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "Snuffed out!$"

CinnabarIsland_Gym_Text_ZacPostBattle::
# 714 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Water beats fire, of course.\p"
	.string "But fire melts ice, so the FIRE\n"
	.string "type beats ICE-type POKéMON.$"

CinnabarIsland_Gym_Text_GymGuyAdvice::
# 721 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
	.string "Champ in the making!\p"
	.string "The hotheaded BLAINE is a FIRE\n"
	.string "POKéMON pro.\p"
	.string "Douse his spirits with water!\p"
	.string "You'd better take some\n"
	.string "BURN HEALS, too.$"

CinnabarIsland_Gym_Text_GymGuyPostVictory::
# 734 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "{PLAYER}!\n"
	.string "You beat that firebrand!$"

CinnabarIsland_Gym_Text_GymStatue::
# 739 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "CINNABAR POKéMON GYM\n"
	.string "LEADER: BLAINE\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

CinnabarIsland_Gym_Text_GymStatuePlayerWon::
# 747 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "CINNABAR POKéMON GYM\n"
	.string "LEADER: BLAINE\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

CinnabarIsland_Gym_Text_PokemonQuizRules::
# 755 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "POKéMON Quiz!\p"
	.string "Get it right, and the door opens to\n"
	.string "the next room.\p"
	.string "Get it wrong, and face a TRAINER!\p"
	.string "If you want to conserve your\n"
	.string "POKéMON for the GYM LEADER…\p"
	.string "Then get it right!\n"
	.string "Here we go!$"

CinnabarIsland_Gym_Text_QuizQuestion1::
# 770 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "CATERPIE evolves into METAPOD?$"

CinnabarIsland_Gym_Text_QuizQuestion2::
# 774 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "There are nine certified POKéMON\n"
	.string "LEAGUE BADGES?$"

CinnabarIsland_Gym_Text_QuizQuestion3::
# 779 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "POLIWAG evolves three times?$"

CinnabarIsland_Gym_Text_QuizQuestion4::
# 783 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Are electric moves effective\n"
	.string "against GROUND-type POKéMON?$"

CinnabarIsland_Gym_Text_QuizQuestion5::
# 788 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "POKéMON of the same kind and level\n"
	.string "are not identical?$"

CinnabarIsland_Gym_Text_QuizQuestion6::
# 793 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "TM28 contains TOMBSTONY?$"

CinnabarIsland_Gym_Text_CorrectGoOnThrough::
# 797 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "You're absolutely correct!\p"
	.string "Go on through!$"

CinnabarIsland_Gym_Text_SorryBadCall::
# 803 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Sorry!\n"
	.string "Bad call!$"
