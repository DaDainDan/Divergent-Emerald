SSAnne_2F_Corridor_Frlg_MapScripts::
	.byte 0


SSAnne_2F_Corridor_EventScript_RivalTriggerLeft::
# 4 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	lockall
# 5 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 6 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
	end


SSAnne_2F_Corridor_EventScript_RivalTriggerMid::
# 11 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	lockall
# 12 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 13 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
	end


SSAnne_2F_Corridor_EventScript_RivalTriggerRight::
# 18 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	lockall
# 19 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 20 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
	end


SSAnne_2F_Corridor_EventScript_RivalTrigger::
# 25 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 26 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	playse SE_EXIT
# 27 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay 5
# 28 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 29 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	addobject LOCALID_SS_ANNE_RIVAL
# 30 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay 10
# 31 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, Common_Movement_StepFasterDown
# 32 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
# 33 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay 20
# 34 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 35 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	case 0, SSAnne_2F_Corridor_EventScript_RivalTrigger_3
# 36 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	case 1, SSAnne_2F_Corridor_EventScript_RivalTrigger_4
# 39 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	case 2, SSAnne_2F_Corridor_EventScript_RivalTrigger_5
SSAnne_2F_Corridor_EventScript_RivalTrigger_1:
# 43 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
# 44 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_RivalIntro
# 45 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SS_ANNE_RIVAL
# 46 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	switch VAR_STARTER_MON
# 47 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	case PC_CHOSE_BULBASAUR, SSAnne_2F_Corridor_EventScript_RivalTrigger_8
# 48 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	case PC_CHOSE_SQUIRTLE, SSAnne_2F_Corridor_EventScript_RivalTrigger_9
# 49 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	case PC_CHOSE_CHARMANDER, SSAnne_2F_Corridor_EventScript_RivalTrigger_10
SSAnne_2F_Corridor_EventScript_RivalTrigger_6:
# 51 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_RivalPostBattle
# 52 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	closemessage
# 53 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay 10
# 54 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 55 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 56 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	case 0, SSAnne_2F_Corridor_EventScript_RivalTrigger_13
# 57 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	case 1, SSAnne_2F_Corridor_EventScript_RivalTrigger_14
# 58 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	case 2, SSAnne_2F_Corridor_EventScript_RivalTrigger_15
SSAnne_2F_Corridor_EventScript_RivalTrigger_11:
# 60 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	waitmovement 0
# 61 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	fadedefaultbgm
# 62 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	removeobject LOCALID_SS_ANNE_RIVAL
# 63 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 1
# 64 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	releaseall
	end

SSAnne_2F_Corridor_EventScript_RivalTrigger_3:
# 35 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_EventScript_RivalTrigger_Movement_0
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_1

SSAnne_2F_Corridor_EventScript_RivalTrigger_4:
# 37 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_EventScript_RivalTrigger_Movement_1
# 38 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_2F_Corridor_EventScript_RivalTrigger_Movement_2
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_1

SSAnne_2F_Corridor_EventScript_RivalTrigger_5:
# 40 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_2F_Corridor_EventScript_RivalTrigger_Movement_2
# 41 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_EventScript_RivalTrigger_Movement_3
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_1

SSAnne_2F_Corridor_EventScript_RivalTrigger_8:
# 47 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_CHARMANDER, SSAnne_2F_Corridor_Text_RivalDefeat
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_6

SSAnne_2F_Corridor_EventScript_RivalTrigger_9:
# 48 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_BULBASAUR, SSAnne_2F_Corridor_Text_RivalDefeat
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_6

SSAnne_2F_Corridor_EventScript_RivalTrigger_10:
# 49 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_SQUIRTLE, SSAnne_2F_Corridor_Text_RivalDefeat
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_6

SSAnne_2F_Corridor_EventScript_RivalTrigger_13:
# 56 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_EventScript_RivalTrigger_Movement_4
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_11

SSAnne_2F_Corridor_EventScript_RivalTrigger_14:
# 57 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_EventScript_RivalTrigger_Movement_5
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_11

SSAnne_2F_Corridor_EventScript_RivalTrigger_15:
# 58 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	applymovement LOCALID_SS_ANNE_RIVAL, SSAnne_2F_Corridor_EventScript_RivalTrigger_Movement_5
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger_11


SSAnne_2F_Corridor_EventScript_Sailor::
# 69 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_ThisShipIsLuxuryLiner, MSGBOX_NPC
	end


# 35 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_Movement_0:
# 35 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 35 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 35 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
	step_end

# 37 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_Movement_1:
# 37 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 37 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 37 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 37 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 37 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_faster_right
	step_end

# 38 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_Movement_2:
# 38 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 38 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 38 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 38 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_16
# 38 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	step_faster_left
	step_end

# 41 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_Movement_3:
# 41 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 41 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 41 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 41 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 41 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_right
# 41 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	delay_4
	step_end

# 56 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_Movement_4:
# 56 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_right
# 56 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 56 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 56 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 56 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 56 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 56 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 56 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
	step_end

# 57 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger_Movement_5:
# 57 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 57 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 57 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 57 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 57 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 57 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
# 57 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	walk_down
	step_end

SSAnne_2F_Corridor_Text_ThisShipIsLuxuryLiner::
# 73 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "This ship, she is a luxury liner for\n"
	.string "TRAINERS of the world!\p"
	.string "At every port, we hold parties with\n"
	.string "invited TRAINERS.$"

SSAnne_2F_Corridor_Text_RivalIntro::
# 81 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "{RIVAL}: Bonjour!\n"
	.string "{PLAYER}!\p"
	.string "Imagine seeing you here!\n"
	.string "{PLAYER}, were you really invited?\p"
	.string "So how's your POKéDEX coming?\p"
	.string "I already caught 40 kinds, pal.\n"
	.string "Different kinds are everywhere.\p"
	.string "Crawl around in grassy areas, and\n"
	.string "look hard for them.$"

SSAnne_2F_Corridor_Text_RivalDefeat::
# 97 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "Humph!\p"
	.string "At least you're raising your\n"
	.string "POKéMON!$"

SSAnne_2F_Corridor_Text_RivalVictory::
# 104 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "{PLAYER}..！\n"
	.string "ふなよい　してるのか！\p"
	.string "もっと　からだ\n"
	.string "きたえた　ほうが　いいぜ！$"

SSAnne_2F_Corridor_Text_RivalPostBattle::
# 112 "data/maps/SSAnne_2F_Corridor_Frlg/scripts.pory"
	.string "{RIVAL}: I heard there was a CUT\n"
	.string "master on board.\p"
	.string "But he was just a seasick old man!\p"
	.string "CUT itself is really useful.\n"
	.string "Yup, it'll be handy.\p"
	.string "You should go see him, too.\n"
	.string "Smell ya!$"
