RustboroCity_PokemonSchool_MapScripts::
	.byte 0


RustboroCity_PokemonSchool_EventScript_Blackboard::
# 4 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 5 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
# 6 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end


RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
# 12 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 13 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 14 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_3
# 16 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_4
# 17 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_5
# 18 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_6
# 19 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_7
# 20 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_8
# 21 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_8
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1:
# 25 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_3:
# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_4:
# 16 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_5:
# 17 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_6:
# 18 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_7:
# 19 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_1

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic_8:
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
	end


RustboroCity_PokemonSchool_EventScript_GameboyKid1::
# 30 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_GameboyKid2::
# 35 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_RichBoy::
# 40 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_Lass::
# 45 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_SchoolKidM::
# 50 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
	end


RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 55 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
	end


RustboroCity_PokemonSchool_EventScript_Teacher::
# 60 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock_faceplayer
# 61 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_Teacher_2
# 73 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
RustboroCity_PokemonSchool_EventScript_Teacher_1:
# 75 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 76 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_StepFasterDown
# 77 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
	release_end

RustboroCity_PokemonSchool_EventScript_Teacher_2:
# 62 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_FACING
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case DIR_EAST, RustboroCity_PokemonSchool_EventScript_Teacher_7
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case DIR_WEST, RustboroCity_PokemonSchool_EventScript_Teacher_8
RustboroCity_PokemonSchool_EventScript_Teacher_5:
# 66 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 67 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
	giveitem ITEM_QUICK_CLAW
# 0 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Teacher_10
RustboroCity_PokemonSchool_EventScript_Teacher_9:
# 71 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
	goto RustboroCity_PokemonSchool_EventScript_Teacher_1

RustboroCity_PokemonSchool_EventScript_Teacher_7:
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
	goto RustboroCity_PokemonSchool_EventScript_Teacher_5

RustboroCity_PokemonSchool_EventScript_Teacher_8:
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
	goto RustboroCity_PokemonSchool_EventScript_Teacher_5

RustboroCity_PokemonSchool_EventScript_Teacher_10:
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto RustboroCity_PokemonSchool_EventScript_Teacher_9


# 81 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
# 83 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 85 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 86 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_faster_down
# 87 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 87 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 87 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_faster_left
# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 91 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 93 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 94 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 95 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 95 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
	step_end

# 100 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_faster_down
# 106 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 106 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 106 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 107 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_faster_left
# 109 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 109 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 110 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 114 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 115 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 115 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 116 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 116 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
	step_end

RustboroCity_PokemonSchool_EventScript_Scott::
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock_faceplayer
# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_Scott_2
# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_Scott_5
RustboroCity_PokemonSchool_EventScript_Scott_1:
# 126 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_Scott_9
# 137 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
# 138 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 139 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
	release_end

RustboroCity_PokemonSchool_EventScript_Scott_2:
# 123 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
	release_end

RustboroCity_PokemonSchool_EventScript_Scott_5:
# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_Scott_2
	goto RustboroCity_PokemonSchool_EventScript_Scott_1

RustboroCity_PokemonSchool_EventScript_Scott_9:
# 127 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_Scott_12
# 131 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
RustboroCity_PokemonSchool_EventScript_Scott_11:
# 133 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
	release_end

RustboroCity_PokemonSchool_EventScript_Scott_12:
# 128 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_Scott_11


RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges::
# 143 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
	.string "that may affect POKéMON in battle.$"

RustboroCity_PokemonSchool_Text_ReadWhichTopic::
# 148 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Which topic do you want to read?$"

RustboroCity_PokemonSchool_Text_ExplainPoison::
# 152 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is poisoned, it will\n"
	.string "steadily lose HP.\p"
	.string "The effects of poison remain after\n"
	.string "a battle.\p"
	.string "A poisoned POKéMON's HP will drop\n"
	.string "while it is traveling.\p"
	.string "Heal a poisoning using an ANTIDOTE.$"

RustboroCity_PokemonSchool_Text_ExplainParalysis::
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON becomes paralyzed,\n"
	.string "its SPEED drops.\p"
	.string "It may also not be able to move while\n"
	.string "it is in battle.\p"
	.string "Paralysis remains after battle.\n"
	.string "Cure it using a PARLYZ HEAL.$"

RustboroCity_PokemonSchool_Text_ExplainSleep::
# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON falls asleep, it will be\n"
	.string "unable to attack.\p"
	.string "A POKéMON may wake up on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "sleeping, it will stay asleep.\p"
	.string "Wake it up using an AWAKENING.$"

RustboroCity_PokemonSchool_Text_ExplainBurn::
# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn reduces ATTACK power, and it\n"
	.string "steadily reduces the victim's HP.\p"
	.string "A burn lingers after battle.\n"
	.string "Cure a burn using a BURN HEAL.$"

RustboroCity_PokemonSchool_Text_ExplainFreeze::
# 195 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is frozen, it becomes\n"
	.string "completely helpless.\p"
	.string "It will remain frozen after battle.\n"
	.string "Thaw it out using an ICE HEAL.$"

RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw::
# 203 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Students who don't study get a little\n"
	.string "taste of my QUICK CLAW.\p"
	.string "Whether or not you are a good student \n"
	.string "will be evident from the way you use\l"
	.string "this item.$"

RustboroCity_PokemonSchool_Text_ExplainQuickClaw::
# 212 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding the QUICK CLAW will\n"
	.string "occasionally speed up and get to move\l"
	.string "before its opponent.\p"
	.string "There are many other items that are\n"
	.string "meant to be held by POKéMON.\p"
	.string "Just those alone will give you many\n"
	.string "topics to study!$"

RustboroCity_PokemonSchool_Text_TradingRightNow::
# 224 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I'm trading POKéMON with my friend\n"
	.string "right now.$"

RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot::
# 229 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I always wanted a SEEDOT, and\n"
	.string "I'm finally getting one!$"

RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems::
# 234 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON can hold items, but they\n"
	.string "don't know what to do with man-made\l"
	.string "items like POTION and ANTIDOTE.$"

RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself::
# 240 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "You know how some POKéMON moves can\n"
	.string "confuse a POKéMON?\p"
	.string "A confused POKéMON will sometimes\n"
	.string "attack itself without meaning to.\p"
	.string "But once it leaves battle, it will\n"
	.string "return to normal.$"

RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry::
# 251 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding a BERRY will heal\n"
	.string "itself…\p"
	.string "There are many kinds of items that\n"
	.string "POKéMON can hold…\p"
	.string "Boy, it sure is hard taking notes\n"
	.string "down…$"

RustboroCity_PokemonSchool_Text_StudentsNotes::
# 262 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's this student's notebook…\p"
	.string "POKéMON are to be caught using\n"
	.string "POKé BALLS.\p"
	.string "Up to six POKéMON can accompany\n"
	.string "a TRAINER.\p"
	.string "A TRAINER is someone who catches\n"
	.string "POKéMON, raises them, and battles\l"
	.string "with them.\p"
	.string "A TRAINER's mission is to defeat\n"
	.string "the strong TRAINERS who await\l"
	.string "challengers in POKéMON GYMS.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut::
# 280 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in PETALBURG CITY.\p"
	.string "Let me introduce myself.\n"
	.string "My name's SCOTT.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding TRAINERS.\p"
	.string "More specifically, I'm looking for\n"
	.string "POKéMON battle experts.\p"
	.string "So, what brings you to this SCHOOL?\n"
	.string "Are you a TRAINER, too?\p"
	.string "The first thing you should do is to\n"
	.string "have a POKéMON learn the move CUT.\p"
	.string "If I remember correctly, someone in\n"
	.string "this town has CUT.$"

RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown::
# 303 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "{SPEAKER NAME_SCOTT}Hmm…\p"
	.string "The talent levels of the students here\n"
	.string "are unknown. The potential's there.$"

RustboroCity_PokemonSchool_Text_ScottStoneBadge::
# 310 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "{SPEAKER NAME_SCOTT}Oh, what's that?\p"
	.string "It's a STONE BADGE, isn't it?\n"
	.string "That's pretty impressive, I'd say.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as\n"
	.string "a TRAINER from a LEAGUE BADGE.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge::
# 323 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in PETALBURG CITY.\p"
	.string "Let me introduce myself.\n"
	.string "My name's SCOTT.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding TRAINERS.\p"
	.string "More specifically, I'm looking for\n"
	.string "POKéMON battle experts.\p"
	.string "Oh, what's that?\n"
	.string "It's a STONE BADGE, isn't it?\p"
	.string "That's pretty impressive, I'd say, for\n"
	.string "a starting TRAINER like yourself.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as\n"
	.string "a TRAINER from a LEAGUE BADGE.$"
