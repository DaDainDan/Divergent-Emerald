Route24_Frlg_MapScripts::
	.byte 0


Route24_EventScript_Rocket::
# 4 "data/maps/Route24_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/Route24_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE24, 1
	goto_if_eq Route24_EventScript_Rocket_2
# 9 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_JustEarnedFabulousPrize
	checkitemspace ITEM_NUGGET
# 0 "data/maps/Route24_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route24_EventScript_Rocket_5
# 14 "data/maps/Route24_Frlg/scripts.pory"
	call Route24_EventScript_BattleRocket
	release_end

Route24_EventScript_Rocket_2:
# 6 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_YoudBecomeTopRocketLeader
	release_end

Route24_EventScript_Rocket_5:
# 11 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_YouDontHaveAnyRoom
	release_end


Route24_EventScript_RocketTriggerLeft::
# 19 "data/maps/Route24_Frlg/scripts.pory"
	lockall
# 20 "data/maps/Route24_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 21 "data/maps/Route24_Frlg/scripts.pory"
	goto Route24_EventScript_RocketTrigger
	end


Route24_EventScript_RocketTriggerRight::
# 26 "data/maps/Route24_Frlg/scripts.pory"
	lockall
# 27 "data/maps/Route24_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 28 "data/maps/Route24_Frlg/scripts.pory"
	goto Route24_EventScript_RocketTrigger
	end


Route24_EventScript_RocketTrigger::
# 33 "data/maps/Route24_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 34 "data/maps/Route24_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 35 "data/maps/Route24_Frlg/scripts.pory"
	case 0, Route24_EventScript_RocketTrigger_3
# 36 "data/maps/Route24_Frlg/scripts.pory"
	case 1, Route24_EventScript_RocketTrigger_4
Route24_EventScript_RocketTrigger_1:
# 38 "data/maps/Route24_Frlg/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route24_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 40 "data/maps/Route24_Frlg/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_JustEarnedFabulousPrize
	checkitemspace ITEM_NUGGET
# 0 "data/maps/Route24_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route24_EventScript_RocketTrigger_6
# 53 "data/maps/Route24_Frlg/scripts.pory"
	call Route24_EventScript_BattleRocket
# 54 "data/maps/Route24_Frlg/scripts.pory"
	releaseall
	end

Route24_EventScript_RocketTrigger_3:
# 35 "data/maps/Route24_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Common_Movement_WalkLeft
	goto Route24_EventScript_RocketTrigger_1

Route24_EventScript_RocketTrigger_4:
# 36 "data/maps/Route24_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Common_Movement_StepFasterLeft
	goto Route24_EventScript_RocketTrigger_1

Route24_EventScript_RocketTrigger_6:
# 43 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_YouDontHaveAnyRoom
# 44 "data/maps/Route24_Frlg/scripts.pory"
	closemessage
# 45 "data/maps/Route24_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 46 "data/maps/Route24_Frlg/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route24_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Route24_EventScript_RocketTrigger_9
Route24_EventScript_RocketTrigger_8:
	release_end

Route24_EventScript_RocketTrigger_9:
# 48 "data/maps/Route24_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE24_ROCKET, Route24_EventScript_RocketTrigger_Movement_0
# 49 "data/maps/Route24_Frlg/scripts.pory"
	waitmovement 0
	goto Route24_EventScript_RocketTrigger_8


Route24_EventScript_BattleRocket::
# 59 "data/maps/Route24_Frlg/scripts.pory"
	giveitem_msg Route24_Text_ReceivedNuggetFromMysteryTrainer, ITEM_NUGGET
# 60 "data/maps/Route24_Frlg/scripts.pory"
	message Route24_Text_JoinTeamRocket
# 61 "data/maps/Route24_Frlg/scripts.pory"
	waitmessage
# 62 "data/maps/Route24_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 63 "data/maps/Route24_Frlg/scripts.pory"
	waitbuttonpress
# 64 "data/maps/Route24_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ROUTE24_ROCKET
# 65 "data/maps/Route24_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_6, Route24_Text_RocketDefeat
# 66 "data/maps/Route24_Frlg/scripts.pory"
	msgbox Route24_Text_YoudBecomeTopRocketLeader
# 67 "data/maps/Route24_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE24, 1
	return


# 48 "data/maps/Route24_Frlg/scripts.pory"
Route24_EventScript_RocketTrigger_Movement_0:
# 48 "data/maps/Route24_Frlg/scripts.pory"
	walk_right
# 48 "data/maps/Route24_Frlg/scripts.pory"
	step_faster_left
	step_end

Route24_Text_JustEarnedFabulousPrize::
# 71 "data/maps/Route24_Frlg/scripts.pory"
	.string "Congratulations! You beat our\n"
	.string "five contest TRAINERS!\p"
	.string "You just earned a fabulous prize!$"

Route24_Text_ReceivedNuggetFromMysteryTrainer::
# 78 "data/maps/Route24_Frlg/scripts.pory"
	.string "{PLAYER} received a NUGGET\n"
	.string "from the mystery TRAINER!$"

Route24_Text_YouDontHaveAnyRoom::
# 83 "data/maps/Route24_Frlg/scripts.pory"
	.string "You don't have any room!$"

Route24_Text_JoinTeamRocket::
# 87 "data/maps/Route24_Frlg/scripts.pory"
	.string "By the way, how would you like to\n"
	.string "join TEAM ROCKET?\p"
	.string "We're a group of professional\n"
	.string "criminals specializing in POKéMON!\p"
	.string "Want to join?\p"
	.string "Are you sure?\p"
	.string "Come on, join us!\p"
	.string "I'm telling you to join!\p"
	.string "…Okay, you need convincing!\p"
	.string "I'll make you an offer you can't\n"
	.string "refuse!$"

Route24_Text_RocketDefeat::
# 108 "data/maps/Route24_Frlg/scripts.pory"
	.string "Arrgh!\n"
	.string "You are good!$"

Route24_Text_YoudBecomeTopRocketLeader::
# 113 "data/maps/Route24_Frlg/scripts.pory"
	.string "With your ability, you'd become\n"
	.string "a top leader in TEAM ROCKET.\p"
	.string "Come on, think of the opportunity!\n"
	.string "Don't let this chance go to waste.$"

Route24_Text_ShaneIntro::
# 121 "data/maps/Route24_Frlg/scripts.pory"
	.string "I saw your feat from the grass!$"

Route24_Text_ShaneDefeat::
# 125 "data/maps/Route24_Frlg/scripts.pory"
	.string "I thought not!$"

Route24_Text_ShanePostBattle::
# 129 "data/maps/Route24_Frlg/scripts.pory"
	.string "I hid because the people on the\n"
	.string "bridge frightened me.$"

Route24_Text_EthanIntro::
# 134 "data/maps/Route24_Frlg/scripts.pory"
	.string "Okay! I'm No. 5!\n"
	.string "I'll stomp you!$"

Route24_Text_EthanDefeat::
# 139 "data/maps/Route24_Frlg/scripts.pory"
	.string "Whoa!\n"
	.string "Too much!$"

Route24_Text_EthanPostBattle::
# 144 "data/maps/Route24_Frlg/scripts.pory"
	.string "I did my best. I have no regrets!$"

Route24_Text_ReliIntro::
# 148 "data/maps/Route24_Frlg/scripts.pory"
	.string "I'm No. 4!\n"
	.string "Getting tired?$"

Route24_Text_ReliDefeat::
# 153 "data/maps/Route24_Frlg/scripts.pory"
	.string "I lost, too!$"

Route24_Text_ReliPostBattle::
# 157 "data/maps/Route24_Frlg/scripts.pory"
	.string "I did my best, so I've no regrets!$"

Route24_Text_TimmyIntro::
# 161 "data/maps/Route24_Frlg/scripts.pory"
	.string "Here's No. 3!\n"
	.string "I won't be easy!$"

Route24_Text_TimmyDefeat::
# 166 "data/maps/Route24_Frlg/scripts.pory"
	.string "Ow!\n"
	.string "Stomped flat!$"

Route24_Text_TimmyPostBattle::
# 171 "data/maps/Route24_Frlg/scripts.pory"
	.string "I did my best. I have no regrets!$"

Route24_Text_AliIntro::
# 175 "data/maps/Route24_Frlg/scripts.pory"
	.string "I'm second!\n"
	.string "Now it's serious!$"

Route24_Text_AliDefeat::
# 180 "data/maps/Route24_Frlg/scripts.pory"
	.string "How could I lose?$"

Route24_Text_AliPostBattle::
# 184 "data/maps/Route24_Frlg/scripts.pory"
	.string "I did my best. I have no regrets!$"

Route24_Text_CaleIntro::
# 188 "data/maps/Route24_Frlg/scripts.pory"
	.string "People call this the NUGGET\n"
	.string "BRIDGE!\p"
	.string "Beat us five TRAINERS and win\n"
	.string "a fabulous prize!\p"
	.string "Think you got what it takes?$"

Route24_Text_CaleDefeat::
# 198 "data/maps/Route24_Frlg/scripts.pory"
	.string "Whoo!\n"
	.string "Good stuff!$"

Route24_Text_CalePostBattle::
# 203 "data/maps/Route24_Frlg/scripts.pory"
	.string "I did my best. I have no regrets!$"
