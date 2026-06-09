AquaHideout_B1F_MapScripts::
# 2 "data/maps/AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_RESUME
# 10 "data/maps/AquaHideout_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_2
AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_2:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_4
	goto AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_1

AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 5 "data/maps/AquaHideout_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_RESUME_1

AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT, AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/AquaHideout_B1F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT, AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1
	goto AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 15 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2
	goto AquaHideout_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


AquaHideout_B1F_EventScript_ElectrodeBattle::
# 22 "data/maps/AquaHideout_B1F/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 30
# 23 "data/maps/AquaHideout_B1F/scripts.pory"
	waitse
# 24 "data/maps/AquaHideout_B1F/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 25 "data/maps/AquaHideout_B1F/scripts.pory"
	delay 40
# 26 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmoncry
# 27 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 28 "data/maps/AquaHideout_B1F/scripts.pory"
	dowildbattle
# 29 "data/maps/AquaHideout_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/AquaHideout_B1F/scripts.pory"
	switch VAR_0x8007
# 31 "data/maps/AquaHideout_B1F/scripts.pory"
	case 1, AquaHideout_B1F_EventScript_ElectrodeBattle_3
# 32 "data/maps/AquaHideout_B1F/scripts.pory"
	case 2, AquaHideout_B1F_EventScript_ElectrodeBattle_4
AquaHideout_B1F_EventScript_ElectrodeBattle_1:
# 34 "data/maps/AquaHideout_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 35 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AquaHideout_B1F_EventScript_ElectrodeBattle_6
# 35 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AquaHideout_B1F_EventScript_ElectrodeBattle_6
# 36 "data/maps/AquaHideout_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq AquaHideout_B1F_EventScript_ElectrodeBattle_6
AquaHideout_B1F_EventScript_ElectrodeBattle_5:
	release_end

AquaHideout_B1F_EventScript_ElectrodeBattle_3:
# 31 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
	goto AquaHideout_B1F_EventScript_ElectrodeBattle_1

AquaHideout_B1F_EventScript_ElectrodeBattle_4:
# 32 "data/maps/AquaHideout_B1F/scripts.pory"
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
	goto AquaHideout_B1F_EventScript_ElectrodeBattle_1

AquaHideout_B1F_EventScript_ElectrodeBattle_6:
# 37 "data/maps/AquaHideout_B1F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto AquaHideout_B1F_EventScript_ElectrodeBattle_5


AquaHideout_B1F_EventScript_Electrode1::
# 43 "data/maps/AquaHideout_B1F/scripts.pory"
	lock_faceplayer
# 44 "data/maps/AquaHideout_B1F/scripts.pory"
	setvar VAR_0x8007, 1
# 45 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_ElectrodeBattle
	end


AquaHideout_B1F_EventScript_Electrode2::
# 50 "data/maps/AquaHideout_B1F/scripts.pory"
	lock_faceplayer
# 51 "data/maps/AquaHideout_B1F/scripts.pory"
	setvar VAR_0x8007, 2
# 52 "data/maps/AquaHideout_B1F/scripts.pory"
	goto AquaHideout_B1F_EventScript_ElectrodeBattle
	end


AquaHideout_B1F_EventScript_Grunt2::
# 57 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, AquaHideout_B1F_Text_Grunt2Intro, AquaHideout_B1F_Text_Grunt2Defeat, AquaHideout_B1F_EventScript_Grunt2Defeated
# 58 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


AquaHideout_B1F_EventScript_Grunt2Defeated::
# 63 "data/maps/AquaHideout_B1F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 64 "data/maps/AquaHideout_B1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
	release_end


AquaHideout_B1F_EventScript_Grunt3::
# 70 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, AquaHideout_B1F_Text_Grunt3Intro, AquaHideout_B1F_Text_Grunt3Defeat, AquaHideout_B1F_EventScript_Grunt3Defeated
# 71 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


AquaHideout_B1F_EventScript_Grunt3Defeated::
# 76 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt3PostBattle, MSGBOX_DEFAULT
	release_end


AquaHideout_B1F_EventScript_Grunt5::
# 81 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, AquaHideout_B1F_Text_Grunt5Intro, AquaHideout_B1F_Text_Grunt5Defeat
# 82 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end


AquaHideout_B1F_EventScript_Grunt7::
# 87 "data/maps/AquaHideout_B1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_7, AquaHideout_B1F_Text_Grunt7Intro, AquaHideout_B1F_Text_Grunt7Defeat
# 88 "data/maps/AquaHideout_B1F/scripts.pory"
	msgbox AquaHideout_B1F_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
	end


AquaHideout_B1F_Text_Grunt2Intro::
# 92 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "If you want to know the secret about\n"
	.string "our HIDEOUT, you have me to beat!$"

AquaHideout_B1F_Text_Grunt2Defeat::
# 97 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "I can't win at all…$"

AquaHideout_B1F_Text_Grunt2PostBattle::
# 101 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Our HIDEOUT's secret?\p"
	.string "Well, let's just say…\n"
	.string "There's a submarine at the far end!\p"
	.string "But, by now…\n"
	.string "Kekekeke…$"

AquaHideout_B1F_Text_Grunt3Intro::
# 111 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Fuel supply loaded A-OK!\n"
	.string "In-cruise snacks loaded A-OK!\p"
	.string "Nothing left to do but KO a pesky\n"
	.string "meddler!$"

AquaHideout_B1F_Text_Grunt3Defeat::
# 119 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "I took a serious licking!$"

AquaHideout_B1F_Text_Grunt3PostBattle::
# 123 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Humph!\n"
	.string "This was supposed to happen!\p"
	.string "My mission was to just hold you up!$"

AquaHideout_B1F_Text_Grunt5Intro::
# 130 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Yawn… Keeping watch over the\n"
	.string "HIDEOUT bores me. I'll take you on.$"

AquaHideout_B1F_Text_Grunt5Defeat::
# 135 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Yawn…\n"
	.string "Oh, I lost…$"

AquaHideout_B1F_Text_Grunt5PostBattle::
# 140 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "If you scurry too much, other TEAM\n"
	.string "AQUA members might get you.$"

AquaHideout_B1F_Text_Grunt7Intro::
# 145 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "Hey!\n"
	.string "You there!\p"
	.string "Which do you think is cooler?\n"
	.string "TEAM AQUA's uniform or TEAM MAGMA's?$"

AquaHideout_B1F_Text_Grunt7Defeat::
# 153 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "I lost in a cool way…$"

AquaHideout_B1F_Text_Grunt7PostBattle::
# 157 "data/maps/AquaHideout_B1F/scripts.pory"
	.string "If you have a cool uniform, you look\n"
	.string "good even in a loss, don't you think?$"
