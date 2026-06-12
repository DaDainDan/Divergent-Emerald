BattleFrontier_BattlePalaceCorridor_MapScripts::
# 2 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePalaceCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BattleFrontier_BattlePalaceCorridor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor
	.2byte 0


BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor::
# 8 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	delay 16
# 9 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PALACE_CORRIDOR_ATTENDANT, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_Movement_0
# 10 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_Movement_0
# 11 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitmovement 0
# 12 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	lockall
# 13 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	palace_getcomment
# 14 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	switch VAR_RESULT
# 15 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	case 0, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_3
# 16 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	case 1, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_4
# 17 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	case 2, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_5
# 18 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	case 3, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_6
# 19 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	case 4, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_7
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_1:
# 21 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	closemessage
# 22 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 23 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_10
# 30 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PALACE_CORRIDOR_ATTENDANT, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_Movement_3
# 31 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_Movement_4
# 32 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitmovement 0
# 33 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	opendoor 6, 3
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_8:
# 35 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitdooranim
# 36 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PALACE_CORRIDOR_ATTENDANT, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_Movement_5
# 37 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 38 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitmovement 0
# 39 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	switch VAR_RESULT
# 40 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_14
# 41 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	closedoor 6, 3
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_12:
# 43 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitdooranim
# 44 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM, 7, 4
# 45 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitstate
	end

BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_3:
# 15 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	msgbox BattleFrontier_BattlePalaceCorridor_Text_PeopleAndMonAreSame, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_1

BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_4:
# 16 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	msgbox BattleFrontier_BattlePalaceCorridor_Text_LetMonDoWhatItLikes, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_1

BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_5:
# 17 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	msgbox BattleFrontier_BattlePalaceCorridor_Text_MonDifferentWhenCornered, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_1

BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_6:
# 18 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	msgbox BattleFrontier_BattlePalaceCorridor_Text_BeginningToUnderstandNature, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_1

BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_7:
# 19 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	msgbox BattleFrontier_BattlePalaceCorridor_Text_HeartfeltBondBetweenYouAndMons, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_1

BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_10:
# 25 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PALACE_CORRIDOR_ATTENDANT, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_Movement_1
# 26 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_Movement_2
# 27 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	waitmovement 0
# 28 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	opendoor 10, 3
	goto BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_8

BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_14:
# 40 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	closedoor 10, 3
	goto BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_12


# 9 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_Movement_0:
# 9 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 9 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 9 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 9 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
	step_end

# 25 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_Movement_1:
# 25 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 25 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_right
# 25 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_right
# 25 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 25 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 25 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
	step_end

# 26 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_Movement_2:
# 26 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 26 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 26 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_right
# 26 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_right
# 26 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 26 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
	step_end

# 30 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_Movement_3:
# 30 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 30 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 30 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_left
# 30 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_left
# 30 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 30 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
	step_end

# 31 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_Movement_4:
# 31 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 31 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 31 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 31 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_left
# 31 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_left
# 31 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
	step_end

# 36 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
BattleFrontier_BattlePalaceCorridor_EventScript_WalkThroughCorridor_Movement_5:
# 36 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	walk_up
# 36 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	set_invisible
	step_end

BattleFrontier_BattlePalaceCorridor_Text_PeopleAndMonAreSame::
# 49 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "People and POKéMON, they are but\n"
	.string "the same…\p"
	.string "Their individual nature makes them\n"
	.string "good at certain things, and not good\l"
	.string "at others.$"

BattleFrontier_BattlePalaceCorridor_Text_LetMonDoWhatItLikes::
# 58 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "Rather than trying to make a POKéMON\n"
	.string "do what it dislikes, try to let it do\l"
	.string "what it likes and is good at doing.\p"
	.string "Put yourself in the POKéMON's position\n"
	.string "and consider what moves it would like.$"

BattleFrontier_BattlePalaceCorridor_Text_MonDifferentWhenCornered::
# 67 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "A POKéMON's nature is a remarkable\n"
	.string "thing…\p"
	.string "Some POKéMON behave in a completely\n"
	.string "different way when they are cornered.$"

BattleFrontier_BattlePalaceCorridor_Text_BeginningToUnderstandNature::
# 75 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "Are you beginning to understand how\n"
	.string "a POKéMON's nature makes it behave?$"

BattleFrontier_BattlePalaceCorridor_Text_HeartfeltBondBetweenYouAndMons::
# 80 "data/maps/BattleFrontier_BattlePalaceCorridor/scripts.pory"
	.string "Ah… I see a strong, heartfelt bond\n"
	.string "between you and your POKéMON…$"
