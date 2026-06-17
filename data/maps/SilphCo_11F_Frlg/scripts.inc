SilphCo_11F_Frlg_MapScripts::
# 2 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_11F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SilphCo_11F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_11F_DOOR, SilphCo_11F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
SilphCo_11F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

SilphCo_11F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call EventScript_Close11FDoor
	goto SilphCo_11F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1


SilphCo_11F_EventScript_President::
# 11 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	lock_faceplayer
# 12 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_MASTER_BALL_FROM_SILPH, SilphCo_11F_EventScript_President_2
	checkplayergender
# 0 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SilphCo_11F_EventScript_President_5
# 19 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearGirl
SilphCo_11F_EventScript_President_4:
	checkitemspace ITEM_MASTER_BALL
# 0 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SilphCo_11F_EventScript_President_9
# 25 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	giveitem_msg SilphCo_11F_Text_ObtainedMasterBallFromPresident, ITEM_MASTER_BALL, 1, MUS_RG_OBTAIN_KEY_ITEM
# 26 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 27 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setflag FLAG_GOT_MASTER_BALL_FROM_SILPH
	release_end

SilphCo_11F_EventScript_President_2:
# 13 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
	release_end

SilphCo_11F_EventScript_President_5:
# 17 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearBoy
	goto SilphCo_11F_EventScript_President_4

SilphCo_11F_EventScript_President_9:
# 22 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_YouHaveNoRoomForThis
	release_end


SilphCo_11F_EventScript_Secretary::
# 32 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForRescuingUs, MSGBOX_NPC
	end


SilphCo_11F_EventScript_GiovanniTriggerLeft::
# 37 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	lockall
# 38 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 39 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
	end


SilphCo_11F_EventScript_GiovanniTriggerRight::
# 44 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	lockall
# 45 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 46 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
	end


SilphCo_11F_EventScript_BattleGiovanni::
# 51 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 52 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, Common_Movement_StepFasterDown
# 53 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	waitmovement 0
# 54 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay 25
# 55 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniIntro
# 56 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	closemessage
# 57 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 58 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	case 1, SilphCo_11F_EventScript_BattleGiovanni_3
# 59 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	case 0, SilphCo_11F_EventScript_BattleGiovanni_4
SilphCo_11F_EventScript_BattleGiovanni_1:
# 63 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	waitmovement 0
# 64 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SILPH_CO_GIOVANNI
# 65 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI_2, SilphCo_11F_Text_GiovanniDefeat
# 66 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniPostBattle
# 67 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	closemessage
# 68 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_CO_GIOVANNI
# 70 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_CO_11F_GRUNT1
# 71 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_CO_11F_GRUNT2
# 72 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 73 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SILPH_CO_11F, 1
# 74 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setflag FLAG_HIDE_SAFFRON_ROCKETS
# 75 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CIVILIANS
# 76 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	releaseall
	end

SilphCo_11F_EventScript_BattleGiovanni_3:
# 58 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, SilphCo_11F_EventScript_BattleGiovanni_Movement_0
	goto SilphCo_11F_EventScript_BattleGiovanni_1

SilphCo_11F_EventScript_BattleGiovanni_4:
# 60 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, SilphCo_11F_EventScript_BattleGiovanni_Movement_1
# 61 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SilphCo_11F_EventScript_BattleGiovanni_Movement_2
	goto SilphCo_11F_EventScript_BattleGiovanni_1


SilphCo_11F_EventScript_Monitor::
# 82 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_MonitorHasMonsOnIt, MSGBOX_SIGN
	end


SilphCo_11F_EventScript_FloorSign::
# 87 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_FloorSign, MSGBOX_SIGN
	end


SilphCo_11F_EventScript_Grunt1::
# 92 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_40, SilphCo_11F_Text_Grunt1Intro, SilphCo_11F_Text_Grunt1Defeat
# 93 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


SilphCo_11F_EventScript_Grunt2::
# 98 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_41, SilphCo_11F_Text_Grunt2Intro, SilphCo_11F_Text_Grunt2Defeat
# 99 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


# 58 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_BattleGiovanni_Movement_0:
# 58 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 58 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 58 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
	step_end

# 60 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_BattleGiovanni_Movement_1:
# 60 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 60 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 60 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 60 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 60 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	step_faster_left
	step_end

# 61 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_BattleGiovanni_Movement_2:
# 61 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_16
# 61 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_16
# 61 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_16
# 61 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_8
# 61 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_4
# 61 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	step_faster_right
	step_end

SilphCo_11F_Text_ThanksForSavingMeDearBoy::
# 103 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "PRESIDENT: Oh, dear boy!\n"
	.string "Thank you for saving SILPH.\p"
	.string "I will never forget you saved us in\n"
	.string "our moment of peril.\p"
	.string "I have to thank you in some way.\p"
	.string "Because I am rich, I can give you\n"
	.string "anything.\p"
	.string "Here, maybe this will do.$"

SilphCo_11F_Text_ThanksForSavingMeDearGirl::
# 118 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "PRESIDENT: Oh, dear girl!\n"
	.string "Thank you for saving SILPH.\p"
	.string "I will never forget you saved us in\n"
	.string "our moment of peril.\p"
	.string "I have to thank you in some way.\p"
	.string "Because I am rich, I can give you\n"
	.string "anything.\p"
	.string "Here, maybe this will do.$"

SilphCo_11F_Text_ObtainedMasterBallFromPresident::
# 133 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "{PLAYER} obtained a MASTER BALL\n"
	.string "from the PRESIDENT!$"

SilphCo_11F_Text_ThatsOurSecretPrototype::
# 138 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "PRESIDENT: You can't buy that\n"
	.string "anywhere.\p"
	.string "It's our secret prototype MASTER\n"
	.string "BALL.\p"
	.string "It will catch any POKéMON without\n"
	.string "fail!\p"
	.string "You should be quiet about using it,\n"
	.string "though.$"

SilphCo_11F_Text_YouHaveNoRoomForThis::
# 152 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "You have no room for this.$"

SilphCo_11F_Text_ThanksForRescuingUs::
# 156 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "SECRETARY: Thank you for rescuing\n"
	.string "all of us.\p"
	.string "We, from the PRESIDENT down,\n"
	.string "are indebted to you.$"

SilphCo_11F_Text_GiovanniIntro::
# 164 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Ah, {PLAYER}!\n"
	.string "So we meet again!\p"
	.string "The PRESIDENT and I are discussing\n"
	.string "a vital business proposition.\p"
	.string "Keep your nose out of grown-up\n"
	.string "matters…\p"
	.string "Or, experience a world of pain!$"

SilphCo_11F_Text_GiovanniDefeat::
# 177 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Arrgh!!\n"
	.string "I lost again!?$"

SilphCo_11F_Text_GiovanniPostBattle::
# 182 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Blast it all!\n"
	.string "You ruined our plans for SILPH!\p"
	.string "But, TEAM ROCKET will never fall!\p"
	.string "{PLAYER}! Never forget that all\n"
	.string "POKéMON exist for TEAM ROCKET!\p"
	.string "I must go, but I shall return!$"

SilphCo_11F_Text_Grunt2Intro::
# 194 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Stop right there!\n"
	.string "Don't you move!$"

SilphCo_11F_Text_Grunt2Defeat::
# 199 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Don't…\n"
	.string "Please!$"

SilphCo_11F_Text_Grunt2PostBattle::
# 204 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "So, you want to see my BOSS?$"

SilphCo_11F_Text_Grunt1Intro::
# 208 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Halt! Do you have an appointment\n"
	.string "with my BOSS?$"

SilphCo_11F_Text_Grunt1Defeat::
# 213 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Gaah!\n"
	.string "Demolished!$"

SilphCo_11F_Text_Grunt1PostBattle::
# 218 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Watch your step…\n"
	.string "My BOSS likes his POKéMON tough!$"

SilphCo_11F_Text_MonitorHasMonsOnIt::
# 223 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "The monitor has POKéMON on it!$"

SilphCo_11F_Text_FloorSign::
# 227 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
	.string "11F$"
