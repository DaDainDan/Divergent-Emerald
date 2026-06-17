Route22_Frlg_MapScripts::
	.byte 0


Route22_EventScript_EarlyRivalTriggerTop::
# 4 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 5 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 6 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival
	end


Route22_EventScript_EarlyRivalTriggerMid::
# 11 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 12 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 13 "data/maps/Route22_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 14 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival
	end


Route22_EventScript_EarlyRivalTriggerBottom::
# 19 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 20 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 21 "data/maps/Route22_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 22 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_EarlyRival
	end


Route22_EventScript_EarlyRival::
# 27 "data/maps/Route22_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 28 "data/maps/Route22_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 29 "data/maps/Route22_Frlg/scripts.pory"
	addobject LOCALID_ROUTE22_RIVAL
# 30 "data/maps/Route22_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 32 "data/maps/Route22_Frlg/scripts.pory"
	case 2, Route22_EventScript_EarlyRival_4
# 31 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_EventScript_EarlyRival_Movement_0
Route22_EventScript_EarlyRival_1:
# 36 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route22_Frlg/scripts.pory"
	delay 6
# 38 "data/maps/Route22_Frlg/scripts.pory"
	msgbox Route22_Text_EarlyRivalIntro
# 39 "data/maps/Route22_Frlg/scripts.pory"
	switch VAR_STARTER_MON
# 40 "data/maps/Route22_Frlg/scripts.pory"
	case CHOSE_BULBASAUR, Route22_EventScript_EarlyRival_7
# 41 "data/maps/Route22_Frlg/scripts.pory"
	case CHOSE_SQUIRTLE, Route22_EventScript_EarlyRival_8
# 42 "data/maps/Route22_Frlg/scripts.pory"
	case CHOSE_CHARMANDER, Route22_EventScript_EarlyRival_9
Route22_EventScript_EarlyRival_5:
# 44 "data/maps/Route22_Frlg/scripts.pory"
	msgbox Route22_Text_EarlyRivalPostBattle
# 45 "data/maps/Route22_Frlg/scripts.pory"
	closemessage
# 46 "data/maps/Route22_Frlg/scripts.pory"
	delay 10
# 47 "data/maps/Route22_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 48 "data/maps/Route22_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 49 "data/maps/Route22_Frlg/scripts.pory"
	case 2, Route22_EventScript_EarlyRival_12
# 50 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_EventScript_EarlyRival_Movement_4
Route22_EventScript_EarlyRival_10:
# 52 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route22_Frlg/scripts.pory"
	fadedefaultbgm
# 54 "data/maps/Route22_Frlg/scripts.pory"
	removeobject LOCALID_ROUTE22_RIVAL
# 55 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 56 "data/maps/Route22_Frlg/scripts.pory"
	releaseall
	end

Route22_EventScript_EarlyRival_4:
# 33 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_EventScript_EarlyRival_Movement_1
# 34 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_EventScript_EarlyRival_Movement_2
	goto Route22_EventScript_EarlyRival_1

Route22_EventScript_EarlyRival_7:
# 40 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_CHARMANDER, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	goto Route22_EventScript_EarlyRival_5

Route22_EventScript_EarlyRival_8:
# 41 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_BULBASAUR, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	goto Route22_EventScript_EarlyRival_5

Route22_EventScript_EarlyRival_9:
# 42 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_SQUIRTLE, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	goto Route22_EventScript_EarlyRival_5

Route22_EventScript_EarlyRival_12:
# 49 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_EventScript_EarlyRival_Movement_3
	goto Route22_EventScript_EarlyRival_10


# 61 "data/maps/Route22_Frlg/scripts.pory"
Route22_Movement_UnusedRivalExit:
# 63 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 63 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 63 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 63 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 63 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 63 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 63 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
	step_end

Route22_EventScript_LateRivalTriggerTop::
# 67 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 68 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 69 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_LateRival
	end


Route22_EventScript_LateRivalTriggerMid::
# 74 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 75 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 76 "data/maps/Route22_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 77 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_LateRival
	end


Route22_EventScript_LateRivalTriggerBottom::
# 82 "data/maps/Route22_Frlg/scripts.pory"
	lockall
# 83 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 84 "data/maps/Route22_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 85 "data/maps/Route22_Frlg/scripts.pory"
	goto Route22_EventScript_LateRival
	end


Route22_EventScript_LateRival::
# 90 "data/maps/Route22_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 91 "data/maps/Route22_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 92 "data/maps/Route22_Frlg/scripts.pory"
	addobject LOCALID_ROUTE22_RIVAL
# 93 "data/maps/Route22_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 95 "data/maps/Route22_Frlg/scripts.pory"
	case 2, Route22_EventScript_LateRival_4
# 94 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_EventScript_EarlyRival_Movement_0
Route22_EventScript_LateRival_1:
# 99 "data/maps/Route22_Frlg/scripts.pory"
	msgbox Route22_Text_LateRivalIntro
# 100 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ROUTE22_RIVAL
# 101 "data/maps/Route22_Frlg/scripts.pory"
	switch VAR_STARTER_MON
# 102 "data/maps/Route22_Frlg/scripts.pory"
	case CHOSE_BULBASAUR, Route22_EventScript_LateRival_7
# 103 "data/maps/Route22_Frlg/scripts.pory"
	case CHOSE_SQUIRTLE, Route22_EventScript_LateRival_8
# 104 "data/maps/Route22_Frlg/scripts.pory"
	case CHOSE_CHARMANDER, Route22_EventScript_LateRival_9
Route22_EventScript_LateRival_5:
# 106 "data/maps/Route22_Frlg/scripts.pory"
	msgbox Route22_Text_LateRivalPostBattle
# 107 "data/maps/Route22_Frlg/scripts.pory"
	closemessage
# 108 "data/maps/Route22_Frlg/scripts.pory"
	delay 10
# 109 "data/maps/Route22_Frlg/scripts.pory"
	playbgm MUS_RG_RIVAL_EXIT, 0
# 110 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_EventScript_LateRival_Movement_0
# 111 "data/maps/Route22_Frlg/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route22_Frlg/scripts.pory"
	fadedefaultbgm
# 113 "data/maps/Route22_Frlg/scripts.pory"
	removeobject LOCALID_ROUTE22_RIVAL
# 114 "data/maps/Route22_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 4
# 115 "data/maps/Route22_Frlg/scripts.pory"
	releaseall
	end

Route22_EventScript_LateRival_4:
# 96 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_EventScript_EarlyRival_Movement_1
# 97 "data/maps/Route22_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_EventScript_EarlyRival_Movement_2
	goto Route22_EventScript_LateRival_1

Route22_EventScript_LateRival_7:
# 102 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_CHARMANDER, Route22_Text_LateRivalDefeat
	goto Route22_EventScript_LateRival_5

Route22_EventScript_LateRival_8:
# 103 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_BULBASAUR, Route22_Text_LateRivalDefeat
	goto Route22_EventScript_LateRival_5

Route22_EventScript_LateRival_9:
# 104 "data/maps/Route22_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_SQUIRTLE, Route22_Text_LateRivalDefeat
	goto Route22_EventScript_LateRival_5


Route22_EventScript_LeagueGateSign::
# 120 "data/maps/Route22_Frlg/scripts.pory"
	msgbox Route22_Text_LeagueGateSign, MSGBOX_SIGN
	end


# 31 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_Movement_0:
# 31 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 31 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 31 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 31 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 31 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 31 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 31 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
	step_end

# 33 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_Movement_1:
# 33 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 33 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 33 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 33 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 33 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 33 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 33 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 33 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 33 "data/maps/Route22_Frlg/scripts.pory"
	step_faster_down
	step_end

# 34 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_Movement_2:
# 34 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 34 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 34 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 34 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 34 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 34 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 34 "data/maps/Route22_Frlg/scripts.pory"
	delay_16
# 34 "data/maps/Route22_Frlg/scripts.pory"
	delay_8
# 34 "data/maps/Route22_Frlg/scripts.pory"
	step_faster_up
	step_end

# 49 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_Movement_3:
# 49 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 49 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 49 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 49 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 49 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 49 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 49 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 49 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 49 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 49 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 49 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
	step_end

# 50 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_EarlyRival_Movement_4:
# 50 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 50 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 50 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 50 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 50 "data/maps/Route22_Frlg/scripts.pory"
	walk_right
# 50 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
# 50 "data/maps/Route22_Frlg/scripts.pory"
	walk_down
	step_end

# 110 "data/maps/Route22_Frlg/scripts.pory"
Route22_EventScript_LateRival_Movement_0:
# 110 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 110 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 110 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 110 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 110 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 110 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
# 110 "data/maps/Route22_Frlg/scripts.pory"
	walk_left
	step_end

Route22_Text_EarlyRivalIntro::
# 124 "data/maps/Route22_Frlg/scripts.pory"
	.string "{RIVAL}: Hey! {PLAYER}!\p"
	.string "You're off to the POKéMON LEAGUE?\n"
	.string "Forget about it!\p"
	.string "You probably don't have any\n"
	.string "BADGES, do you?\p"
	.string "The guard won't let you through\n"
	.string "without them.\p"
	.string "By the way, did your POKéMON get\n"
	.string "any stronger?$"

Route22_Text_EarlyRivalDefeat::
# 140 "data/maps/Route22_Frlg/scripts.pory"
	.string "Awww!\n"
	.string "You just lucked out!$"

Route22_Text_EarlyRivalPostBattle::
# 145 "data/maps/Route22_Frlg/scripts.pory"
	.string "I heard the POKéMON LEAGUE is\n"
	.string "crawling with tough TRAINERS.\p"
	.string "I have to figure out how to get\n"
	.string "past them.\p"
	.string "You should quit dawdling and get a\n"
	.string "move on!$"

Route22_Text_RivalShouldCatchSomeMons::
# 157 "data/maps/Route22_Frlg/scripts.pory"
	.string "{RIVAL}“なんだ？\n"
	.string "ポケモン　2ひきも\l"
	.string "もってるの　なぜか　だって？\p"
	.string "おまえも\n"
	.string "つかまえれば　いい　じゃん！$"

Route22_Text_LateRivalIntro::
# 166 "data/maps/Route22_Frlg/scripts.pory"
	.string "{RIVAL}: What? {PLAYER}!\n"
	.string "What a surprise to see you here!\p"
	.string "So you're going to the POKéMON\n"
	.string "LEAGUE?\p"
	.string "You collected all the BADGES, too?\n"
	.string "That's cool!\p"
	.string "Then I'll whip you, {PLAYER}, as a\n"
	.string "warm-up for the POKéMON LEAGUE!\p"
	.string "Come on!$"

Route22_Text_LateRivalDefeat::
# 182 "data/maps/Route22_Frlg/scripts.pory"
	.string "What!?\p"
	.string "I was just careless, you!$"

Route22_Text_LateRivalPostBattle::
# 188 "data/maps/Route22_Frlg/scripts.pory"
	.string "That loosened me up.\n"
	.string "I'm ready for the POKéMON LEAGUE!\p"
	.string "{PLAYER}, you need more practice.\p"
	.string "But hey, you know that!\n"
	.string "I'm out of here. Smell ya!$"

Route22_Text_LateRivalVictory::
# 199 "data/maps/Route22_Frlg/scripts.pory"
	.string "{RIVAL}“ひゃははッ　{PLAYER}ー！\n"
	.string "それで　がんばってるのかよ！\l"
	.string "おれの　さいのうに　くらべりゃ\l"
	.string "{PLAYER}は　まだまだ　だな！\p"
	.string "もっと　れんしゅう　こいよ！\n"
	.string "あははーッ！$"

Route22_Text_LeagueGateSign::
# 209 "data/maps/Route22_Frlg/scripts.pory"
	.string "POKéMON LEAGUE\n"
	.string "Front Gate$"
