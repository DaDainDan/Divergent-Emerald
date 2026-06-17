ViridianCity_School_Frlg_MapScripts::
	.byte 0


ViridianCity_School_EventScript_Lass::
# 4 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_TryingToMemorizeNotes
# 6 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	closemessage
# 7 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_StepFasterUp
# 8 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	waitmovement 0
	release_end


ViridianCity_School_EventScript_Woman::
# 13 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	lock_faceplayer
# 14 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ReadBlackboardCarefully
# 15 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	closemessage
# 16 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	applymovement LOCALID_SCHOOL_WOMAN, Common_Movement_FaceOriginalDirection
# 17 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	waitmovement 0
	release_end


ViridianCity_School_EventScript_Notebook::
# 22 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	lockall
# 23 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFirstPage
# 24 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 25 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ViridianCity_School_EventScript_Notebook_2
ViridianCity_School_EventScript_Notebook_1:
# 40 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	releaseall
	end

ViridianCity_School_EventScript_Notebook_2:
# 26 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookSecondPage
# 27 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 28 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ViridianCity_School_EventScript_Notebook_4
	goto ViridianCity_School_EventScript_Notebook_1

ViridianCity_School_EventScript_Notebook_4:
# 29 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookThirdPage
# 30 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 31 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ViridianCity_School_EventScript_Notebook_6
	goto ViridianCity_School_EventScript_Notebook_1

ViridianCity_School_EventScript_Notebook_6:
# 32 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFourthPage
# 33 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_StepFasterUp
# 34 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	waitmovement 0
# 35 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 36 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_HeyDontLookAtMyNotes
	goto ViridianCity_School_EventScript_Notebook_1


ViridianCity_School_EventScript_Blackboard::
# 45 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	lockall
# 46 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_BlackboardListsStatusProblems
# 47 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end


ViridianCity_School_EventScript_ChooseBlackboardTopic::
# 52 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	message ViridianCity_School_Text_ReadWhichTopic
# 53 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	waitmessage
# 54 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	multichoicegrid 7, 1, MULTI_STATUS_INFO, 3, FALSE
# 55 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	switch VAR_RESULT
# 56 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 0, ViridianCity_School_EventScript_ChooseBlackboardTopic_3
# 57 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 1, ViridianCity_School_EventScript_ChooseBlackboardTopic_4
# 58 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 2, ViridianCity_School_EventScript_ChooseBlackboardTopic_5
# 59 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 3, ViridianCity_School_EventScript_ChooseBlackboardTopic_6
# 60 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 4, ViridianCity_School_EventScript_ChooseBlackboardTopic_7
# 61 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case 5, ViridianCity_School_EventScript_ChooseBlackboardTopic_8
# 62 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	case MULTI_B_PRESSED, ViridianCity_School_EventScript_ChooseBlackboardTopic_8
ViridianCity_School_EventScript_ChooseBlackboardTopic_1:
# 66 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
	end

ViridianCity_School_EventScript_ChooseBlackboardTopic_3:
# 56 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainSleep
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1

ViridianCity_School_EventScript_ChooseBlackboardTopic_4:
# 57 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainPoison
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1

ViridianCity_School_EventScript_ChooseBlackboardTopic_5:
# 58 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainParalysis
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1

ViridianCity_School_EventScript_ChooseBlackboardTopic_6:
# 59 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainBurn
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1

ViridianCity_School_EventScript_ChooseBlackboardTopic_7:
# 60 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainFreeze
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic_1

ViridianCity_School_EventScript_ChooseBlackboardTopic_8:
# 63 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	releaseall
	end


ViridianCity_School_Text_TryingToMemorizeNotes::
# 70 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Whew! I'm trying to memorize all my\n"
	.string "notes.$"

ViridianCity_School_Text_ReadBlackboardCarefully::
# 75 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Okay!\p"
	.string "Be sure to read what's on the\n"
	.string "blackboard carefully!$"

ViridianCity_School_Text_NotebookFirstPage::
# 82 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Let's check out the notebook.\p"
	.string "First page…\p"
	.string "POKé BALLS are used to catch\n"
	.string "POKéMON.\p"
	.string "Up to six POKéMON can be carried\n"
	.string "in your party.\p"
	.string "People who raise and battle\n"
	.string "with POKéMON are called TRAINERS.$"

ViridianCity_School_Text_NotebookSecondPage::
# 97 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Second page…\p"
	.string "A healthy POKéMON may be hard to\n"
	.string "catch, so weaken it first.\p"
	.string "Poison, burn, or cause another\n"
	.string "status problem to weaken it.$"

ViridianCity_School_Text_NotebookThirdPage::
# 107 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Third page…\p"
	.string "POKéMON TRAINERS seek others to\n"
	.string "engage in POKéMON battles.\p"
	.string "To TRAINERS, the taste of victory\n"
	.string "is sweet, indeed.\p"
	.string "Battles are constantly waged at\n"
	.string "POKéMON GYMS everywhere.$"

ViridianCity_School_Text_NotebookFourthPage::
# 120 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Fourth page…\p"
	.string "The ultimate goal for all POKéMON\n"
	.string "TRAINERS is simple.\p"
	.string "It is to defeat the top eight\n"
	.string "POKéMON GYM LEADERS.\p"
	.string "Do so to earn the right to face…\p"
	.string "The ELITE FOUR of the POKéMON\n"
	.string "LEAGUE!$"

ViridianCity_School_Text_TurnThePage::
# 135 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Turn the page?$"

ViridianCity_School_Text_HeyDontLookAtMyNotes::
# 139 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "GIRL: Hey!\n"
	.string "Don't look at my notes!$"

ViridianCity_School_Text_BlackboardListsStatusProblems::
# 144 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "The blackboard lists POKéMON\n"
	.string "STATUS problems during battles.$"

ViridianCity_School_Text_ReadWhichTopic::
# 149 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Which topic do you want to read?$"

ViridianCity_School_Text_ExplainSleep::
# 153 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "A POKéMON can't attack if it's\n"
	.string "asleep.\p"
	.string "POKéMON will stay asleep even\n"
	.string "after battles.\p"
	.string "Use AWAKENING to awaken one\n"
	.string "from sleep.$"

ViridianCity_School_Text_ExplainBurn::
# 164 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "A burn reduces ATTACK power.\n"
	.string "It also causes ongoing HP loss.\p"
	.string "A burn remains after a battle.\n"
	.string "Use BURN HEAL to cure a burn.$"

ViridianCity_School_Text_ExplainPoison::
# 172 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "When poisoned, a POKéMON's health\n"
	.string "steadily drops.\p"
	.string "Poison lingers after battles.\n"
	.string "Use an ANTIDOTE to cure poison!$"

ViridianCity_School_Text_ExplainFreeze::
# 180 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "A frozen POKéMON becomes\n"
	.string "helplessly immobile.\p"
	.string "It stays frozen even after the\n"
	.string "battle ends.\p"
	.string "Use ICE HEAL to thaw out the\n"
	.string "suffering POKéMON.$"

ViridianCity_School_Text_ExplainParalysis::
# 191 "data/maps/ViridianCity_School_Frlg/scripts.pory"
	.string "Paralysis reduces SPEED and may\n"
	.string "prevent the POKéMON from moving.\p"
	.string "Paralysis remains after battles.\n"
	.string "Use PARLYZ HEAL for treatment.$"
