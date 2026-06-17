PokemonTower_7F_Frlg_MapScripts::
	.byte 0


PokemonTower_7F_EventScript_MrFuji::
# 4 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 6 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	setflag FLAG_HIDE_TOWER_FUJI
# 7 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_POKEHOUSE_FUJI
# 8 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	setflag FLAG_RESCUED_MR_FUJI
# 9 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	msgbox PokemonTower_7F_Text_MrFujiThankYouFollowMe
# 10 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	closemessage
# 11 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	warp MAP_LAVENDER_TOWN_VOLUNTEER_POKEMON_HOUSE, 4, 7
# 12 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	waitstate
	release_end


PokemonTower_7F_EventScript_Grunt1::
# 17 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_19, PokemonTower_7F_Text_Grunt1Intro, PokemonTower_7F_Text_Grunt1Defeat, PokemonTower_7F_EventScript_DefeatedGrunt1
# 18 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_7F_EventScript_DefeatedGrunt1::
# 23 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt1PostBattle
# 24 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	closemessage
# 25 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 26 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	switch VAR_0x8004
# 27 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	case 9, PokemonTower_7F_EventScript_DefeatedGrunt1_3
# 28 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	case 10, PokemonTower_7F_EventScript_DefeatedGrunt1_4
# 29 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	case 11, PokemonTower_7F_EventScript_DefeatedGrunt1_5
# 30 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_EventScript_DefeatedGrunt1_Movement_3
PokemonTower_7F_EventScript_DefeatedGrunt1_1:
# 33 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	waitmovement 0
# 34 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	compare VAR_0x8004, 9
	goto_if_eq PokemonTower_7F_EventScript_DefeatedGrunt1_8
PokemonTower_7F_EventScript_DefeatedGrunt1_7:
# 38 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_GRUNT1
	release_end

PokemonTower_7F_EventScript_DefeatedGrunt1_3:
# 27 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_EventScript_DefeatedGrunt1_Movement_0
	goto PokemonTower_7F_EventScript_DefeatedGrunt1_1

PokemonTower_7F_EventScript_DefeatedGrunt1_4:
# 28 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_EventScript_DefeatedGrunt1_Movement_1
	goto PokemonTower_7F_EventScript_DefeatedGrunt1_1

PokemonTower_7F_EventScript_DefeatedGrunt1_5:
# 29 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT1, PokemonTower_7F_EventScript_DefeatedGrunt1_Movement_2
	goto PokemonTower_7F_EventScript_DefeatedGrunt1_1

PokemonTower_7F_EventScript_DefeatedGrunt1_8:
# 35 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	playse SE_EXIT
# 36 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	delay 25
	goto PokemonTower_7F_EventScript_DefeatedGrunt1_7


PokemonTower_7F_EventScript_Grunt2::
# 43 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_20, PokemonTower_7F_Text_Grunt2Intro, PokemonTower_7F_Text_Grunt2Defeat, PokemonTower_7F_EventScript_DefeatedGrunt2
# 44 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_7F_EventScript_DefeatedGrunt2::
# 49 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 1
# 50 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt2PostBattle
# 51 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	closemessage
# 52 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 53 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	switch VAR_0x8004
# 54 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	case 12, PokemonTower_7F_EventScript_DefeatedGrunt2_3
# 55 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	case 13, PokemonTower_7F_EventScript_DefeatedGrunt2_4
# 56 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT2, PokemonTower_7F_EventScript_DefeatedGrunt1_Movement_3
PokemonTower_7F_EventScript_DefeatedGrunt2_1:
# 58 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	waitmovement 0
# 59 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_GRUNT2
	release_end

PokemonTower_7F_EventScript_DefeatedGrunt2_3:
# 54 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT2, PokemonTower_7F_EventScript_DefeatedGrunt2_Movement_0
	goto PokemonTower_7F_EventScript_DefeatedGrunt2_1

PokemonTower_7F_EventScript_DefeatedGrunt2_4:
# 55 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT2, PokemonTower_7F_EventScript_DefeatedGrunt2_Movement_1
	goto PokemonTower_7F_EventScript_DefeatedGrunt2_1


PokemonTower_7F_EventScript_Grunt3::
# 64 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_21, PokemonTower_7F_Text_Grunt3Intro, PokemonTower_7F_Text_Grunt3Defeat, PokemonTower_7F_EventScript_DefeatedGrunt3
# 65 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


PokemonTower_7F_EventScript_DefeatedGrunt3::
# 70 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	msgbox PokemonTower_7F_Text_Grunt3PostBattle
# 71 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	closemessage
# 72 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 73 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	switch VAR_0x8004
# 74 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	case 9, PokemonTower_7F_EventScript_DefeatedGrunt3_3
# 75 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	case 10, PokemonTower_7F_EventScript_DefeatedGrunt3_4
# 76 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT3, PokemonTower_7F_EventScript_DefeatedGrunt1_Movement_3
PokemonTower_7F_EventScript_DefeatedGrunt3_1:
# 78 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	waitmovement 0
# 79 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	removeobject LOCALID_POKEMON_TOWER_GRUNT3
	release_end

PokemonTower_7F_EventScript_DefeatedGrunt3_3:
# 74 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT3, PokemonTower_7F_EventScript_DefeatedGrunt3_Movement_0
	goto PokemonTower_7F_EventScript_DefeatedGrunt3_1

PokemonTower_7F_EventScript_DefeatedGrunt3_4:
# 75 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_TOWER_GRUNT3, PokemonTower_7F_EventScript_DefeatedGrunt3_Movement_1
	goto PokemonTower_7F_EventScript_DefeatedGrunt3_1


PokemonTower_7F_EventScript_Unused::
	release_end


# 27 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt1_Movement_0:
# 27 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_right
# 27 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 27 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 27 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 27 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 27 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_right
# 27 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 27 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 27 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	step_faster_left
	step_end

# 28 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt1_Movement_1:
# 28 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 28 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_right
# 28 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 28 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 28 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 28 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_right
# 28 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 28 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
	step_end

# 29 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt1_Movement_2:
# 29 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 29 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 29 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 29 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 29 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_right
# 29 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 29 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
	step_end

# 30 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt1_Movement_3:
# 30 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 30 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 30 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 30 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 30 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 30 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
	step_end

# 54 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt2_Movement_0:
# 54 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 54 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 54 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 54 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_left
# 54 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 54 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 54 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
	step_end

# 55 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt2_Movement_1:
# 55 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_left
# 55 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 55 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
	step_end

# 74 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt3_Movement_0:
# 74 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_right
# 74 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 74 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 74 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 74 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 74 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 74 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 74 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
	step_end

# 75 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
PokemonTower_7F_EventScript_DefeatedGrunt3_Movement_1:
# 75 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 75 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 75 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 75 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 75 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
# 75 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_right
# 75 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	walk_down
	step_end

PokemonTower_7F_Text_Grunt1Intro::
# 87 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "What do you want?\n"
	.string "Why are you here?$"

PokemonTower_7F_Text_Grunt1Defeat::
# 92 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "I give up!$"

PokemonTower_7F_Text_Grunt1PostBattle::
# 96 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "I'm not going to forget this!$"

PokemonTower_7F_Text_Grunt2Intro::
# 100 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "This old guy marched right up to\n"
	.string "our HIDEOUT.\p"
	.string "Then, he starts ranting about how\n"
	.string "TEAM ROCKET's abusing POKéMON.\p"
	.string "So, we're just talking it over as\n"
	.string "adults.$"

PokemonTower_7F_Text_Grunt2Defeat::
# 111 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "Please!\n"
	.string "No more!$"

PokemonTower_7F_Text_Grunt2PostBattle::
# 116 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "POKéMON are only good for making\n"
	.string "money. Why not use them?\p"
	.string "You stay out of our business!$"

PokemonTower_7F_Text_Grunt3Intro::
# 123 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "You're not saving anyone, kid!$"

PokemonTower_7F_Text_Grunt3Defeat::
# 127 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "Don't fight us ROCKETS!$"

PokemonTower_7F_Text_Grunt3PostBattle::
# 131 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "You're not getting away with this!$"

PokemonTower_7F_Text_MrFujiThankYouFollowMe::
# 135 "data/maps/PokemonTower_7F_Frlg/scripts.pory"
	.string "MR. FUJI: Heh?\n"
	.string "You came to save me?\p"
	.string "Thank you. But, I came here of my\n"
	.string "own free will.\p"
	.string "I came to calm the spirit of\n"
	.string "CUBONE's mother.\p"
	.string "I think MAROWAK's spirit has\n"
	.string "finally left us.\p"
	.string "I must thank you for your kind\n"
	.string "concern.\p"
	.string "Follow me to my home, POKéMON\n"
	.string "HOUSE, at the foot of this tower.$"
