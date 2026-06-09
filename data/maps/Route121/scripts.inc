Route121_MapScripts::
	.byte 0


Route121_EventScript_Woman::
# 4 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AheadLoomsMtPyre, MSGBOX_NPC
	end


Route121_EventScript_MtPyrePierSign::
# 9 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MtPyrePierSign, MSGBOX_SIGN
	end


Route121_EventScript_SafariZoneSign::
# 14 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_SafariZoneSign, MSGBOX_SIGN
	end


Route121_EventScript_AquaGruntsMoveOut::
# 19 "data/maps/Route121/scripts.pory"
	lockall
# 20 "data/maps/Route121/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 21 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_ROUTE121_GRUNT_2, Common_Movement_StepRight
# 22 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_OkayMoveOutToMtPyre, MSGBOX_DEFAULT
# 24 "data/maps/Route121/scripts.pory"
	closemessage
# 25 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_ROUTE121_GRUNT_1, Route121_EventScript_AquaGruntsMoveOut_Movement_0
# 26 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_ROUTE121_GRUNT_2, Route121_EventScript_AquaGruntsMoveOut_Movement_0
# 27 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_ROUTE121_GRUNT_3, Route121_EventScript_AquaGruntsMoveOut_Movement_0
# 28 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route121/scripts.pory"
	fadedefaultbgm
# 30 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_ROUTE121_GRUNT_1
# 31 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_ROUTE121_GRUNT_2
# 32 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_ROUTE121_GRUNT_3
# 33 "data/maps/Route121/scripts.pory"
	setvar VAR_ROUTE121_STATE, 1
# 34 "data/maps/Route121/scripts.pory"
	releaseall
	end


Route121_EventScript_Vanessa::
# 39 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_VANESSA, Route121_Text_VanessaIntro, Route121_Text_VanessaDefeat
# 40 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
	end


Route121_EventScript_Walter::
# 45 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_WALTER_1, Route121_Text_WalterIntro, Route121_Text_WalterDefeat, Route121_EventScript_RegisterWalter
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route121/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route121_EventScript_Walter_2
# 51 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostBattle, MSGBOX_DEFAULT
	release_end

Route121_EventScript_Walter_2:
# 47 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_WALTER_1, Route121_Text_WalterRematchIntro, Route121_Text_WalterRematchDefeat
# 48 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostRematch, MSGBOX_AUTOCLOSE
	end


Route121_EventScript_RegisterWalter::
# 56 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 57 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterRegister, MSGBOX_DEFAULT
# 59 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_WALTER_1
	release_end


Route121_EventScript_Tammy::
# 64 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_TAMMY, Route121_Text_TammyIntro, Route121_Text_TammyDefeat
# 65 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
	end


Route121_EventScript_Kate::
# 70 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_KateIntro, Route121_Text_KateDefeat, Route121_Text_KateNotEnoughMons
# 71 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
	end


Route121_EventScript_Joy::
# 76 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_JoyIntro, Route121_Text_JoyDefeat, Route121_Text_JoyNotEnoughMons
# 77 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
	end


Route121_EventScript_Jessica::
# 82 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_JESSICA_1, Route121_Text_JessicaIntro, Route121_Text_JessicaDefeat, Route121_EventScript_RegisterJessica
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route121/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route121_EventScript_Jessica_2
# 88 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostBattle, MSGBOX_DEFAULT
	release_end

Route121_EventScript_Jessica_2:
# 84 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_JESSICA_1, Route121_Text_JessicaRematchIntro, Route121_Text_JessicaRematchDefeat
# 85 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostRematch, MSGBOX_AUTOCLOSE
	end


Route121_EventScript_RegisterJessica::
# 93 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 94 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaRegister, MSGBOX_DEFAULT
# 96 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_JESSICA_1
	release_end


Route121_EventScript_Cale::
# 101 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CALE, Route121_Text_CaleIntro, Route121_Text_CaleDefeat
# 102 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
	end


Route121_EventScript_Myles::
# 107 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MYLES, Route121_Text_MylesIntro, Route121_Text_MylesDefeat
# 108 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
	end


Route121_EventScript_Pat::
# 113 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_PAT, Route121_Text_PatIntro, Route121_Text_PatDefeat
# 114 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
	end


Route121_EventScript_Marcel::
# 119 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MARCEL, Route121_Text_MarcelIntro, Route121_Text_MarcelDefeat
# 120 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
	end


Route121_EventScript_Cristin::
# 125 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CRISTIN_1, Route121_Text_CristinIntro, Route121_Text_CristinDefeat, Route121_EventScript_RegisterCristin
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route121/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route121_EventScript_Cristin_2
# 131 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostBattle, MSGBOX_DEFAULT
	release_end

Route121_EventScript_Cristin_2:
# 127 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_CRISTIN_1, Route121_Text_CristinRematchIntro, Route121_Text_CristinRematchDefeat
# 128 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostRematch, MSGBOX_AUTOCLOSE
	end


Route121_EventScript_RegisterCristin::
# 136 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 137 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinRegister, MSGBOX_DEFAULT
# 139 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_CRISTIN_1
	release_end


# 25 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGruntsMoveOut_Movement_0:
# 25 "data/maps/Route121/scripts.pory"
	walk_down
# 25 "data/maps/Route121/scripts.pory"
	walk_down
# 25 "data/maps/Route121/scripts.pory"
	walk_down
# 25 "data/maps/Route121/scripts.pory"
	walk_down
# 25 "data/maps/Route121/scripts.pory"
	walk_down
# 25 "data/maps/Route121/scripts.pory"
	walk_down
# 25 "data/maps/Route121/scripts.pory"
	walk_down
# 25 "data/maps/Route121/scripts.pory"
	walk_down
	step_end

Route121_Text_OkayMoveOutToMtPyre::
# 143 "data/maps/Route121/scripts.pory"
	.string "Okay!\n"
	.string "We're to move out to MT. PYRE!$"

Route121_Text_AheadLoomsMtPyre::
# 148 "data/maps/Route121/scripts.pory"
	.string "Ahead looms MT. PYRE…\p"
	.string "It is a natural monument to the spirits \n"
	.string "of departed POKéMON…$"

Route121_Text_MtPyrePierSign::
# 155 "data/maps/Route121/scripts.pory"
	.string "MT. PYRE PIER\p"
	.string "…The sign is old and worn out.\n"
	.string "The words are barely legible…$"

Route121_Text_SafariZoneSign::
# 162 "data/maps/Route121/scripts.pory"
	.string "“Filled with rare POKéMON!”\n"
	.string "SAFARI ZONE$"
