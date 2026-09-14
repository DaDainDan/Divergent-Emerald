RustboroCity_DevonCorp_3F_MapScripts::
# 2 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 15 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_DEVON_CORP_3F_STATE, 0
	goto_if_eq RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_CORP_3F_EMPLOYEE, 3, 2
# 5 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_CORP_3F_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
	goto RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 10 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 11 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
	end

RustboroCity_DevonCorp_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_MeetPresident
	.2byte 0


RustboroCity_DevonCorp_3F_EventScript_MeetPresident::
# 21 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lockall
# 22 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere, MSGBOX_DEFAULT
# 23 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_PARTS
# 25 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 26 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_0
# 28 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 80
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_1
# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe, MSGBOX_DEFAULT
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 34 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_2
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_3
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead, MSGBOX_DEFAULT
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 40 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadedefaultbgm
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_4
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_5
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIntro, MSGBOX_DEFAULT
# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 50 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 55 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VsSeeker, MSGBOX_DEFAULT
# 56 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_VS_SEEKER
# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_VS_SEEKER
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_LETTER
# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare, MSGBOX_DEFAULT
# 61 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 62 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 63 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 66 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 67 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 68 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
	end


# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_Unused:
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_faster_left
	step_end

RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock_faceplayer
# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStone_2
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_MrStone_3
# 94 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
RustboroCity_DevonCorp_3F_EventScript_MrStone_1:
# 96 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return

RustboroCity_DevonCorp_3F_EventScript_MrStone_2:
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
	goto RustboroCity_DevonCorp_3F_EventScript_MrStone_1

RustboroCity_DevonCorp_3F_EventScript_MrStone_3:
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_MrStone_8
RustboroCity_DevonCorp_3F_EventScript_MrStone_7:
# 90 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 91 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
	goto RustboroCity_DevonCorp_3F_EventScript_MrStone_1

RustboroCity_DevonCorp_3F_EventScript_MrStone_8:
# 88 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto RustboroCity_DevonCorp_3F_EventScript_MrStone_7


RustboroCity_DevonCorp_3F_EventScript_Employee::
# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock_faceplayer
# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_Employee_2
# 105 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
	release_end

RustboroCity_DevonCorp_3F_EventScript_Employee_2:
# 102 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
	release_end


RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 110 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
	end


# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_0:
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
	step_end

# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_1:
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
	step_end

# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_2:
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_faster_left
	step_end

# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_3:
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
	step_end

# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_4:
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_faster_down
	step_end

# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_5:
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_faster_right
	step_end

RustboroCity_DevonCorp_3F_Text_MrStoneIntro::
# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}I'm MR. STONE, \n"
	.string "PRESIDENT of the DEVON CORPORATION.\p"
	.string "I just received word of you.\p"
	.string "It seems we owe you a significant debt \n"
	.string "for returning company property and\l"
	.string "protecting one of our employees.\p"
	.string "We'd like to award you with two pieces\n"
	.string "of state-of-the-art DEVON technology.\p"
	.string "The first is our all-purpose TRAINER\n"
	.string "tool, the POKéMON NAVIGATOR.$"

RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis::
# 131 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{SPEAKER NAME_MR_STONE}The first is our all-purpose TRAINER\n"
	.string "tool, the POKéMON NAVIGATOR.$"

RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp::
# 136 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{SPEAKER NAME_MR_STONE}It serves as a map, a communication \n"
	.string "tool, and a POKéMON monitor.\p"
	.string "It's an indispensable tool for any \n"
	.string "adventurous TRAINER.$"

RustboroCity_DevonCorp_3F_Text_VsSeeker::
# 144 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{SPEAKER NAME_MR_STONE}Our second gift is the VS. SEEKER.\p"
	.string "It allows a TRAINER to connect with\n"
	.string "nearby TRAINERS looking to battle.\p"
	.string "This is most useful for linking up with\n"
	.string "TRAINERS you've previously fought.$"

RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor::
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{SPEAKER NAME_MR_STONE}I hope you enjoy our gifts, but I would\n"
	.string "also like to ask a favor of you.\p"
	.string "My son, STEVEN STONE, has been missing\n"
	.string "for some time.\p"
	.string "You may know him as the CHAMPION of\n"
	.string "the POKéMON LEAGUE.\p"
	.string "Please hold onto this LETTER for him.$"

RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare::
# 167 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{SPEAKER NAME_MR_STONE}I've already sent out many like it, but \n"
	.string "perhaps, a gifted trainer like you would\l"
	.string "be able to locate my son.\p"
	.string "Good luck, child.\n"
	.string "I wish you well on your journey.$"

RustboroCity_DevonCorp_3F_Text_ReceivedPokenav::
# 176 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} received a POKéNAV.$"

RustboroCity_DevonCorp_3F_Text_CountingOnYou::
# 180 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{SPEAKER NAME_MR_STONE}Please inform me if you are\n"
	.string "able to find my son.$"

RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter::
# 185 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{SPEAKER NAME_MR_STONE}You delivered my LETTER?\n"
	.string "Thank you kindly!\p"
	.string "This is my way of thanking you.\n"
	.string "It should help you, a TRAINER.$"

RustboroCity_DevonCorp_3F_Text_ExplainExpShare::
# 193 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{SPEAKER NAME_MR_STONE}A POKéMON holding that\n"
	.string "EXP. SHARE will be given some of the\l"
	.string "EXP Points from battle.\p"
	.string "It will get EXP Points even if it didn't\n"
	.string "actually battle.\p"
	.string "I would say EXP. SHARE is quite useful\n"
	.string "for raising weak POKéMON.$"

RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends::
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{SPEAKER NAME_MR_STONE}Since my youth, I've immersed\n"
	.string "myself in work.\p"
	.string "Consequently, I'm not familiar with\n"
	.string "trends and that sort of thing.\p"
	.string "But do young people all want to be\n"
	.string "TRAINERS in the POKéMON LEAGUE?$"

RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere::
# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is the DEVON CORPORATION's\n"
	.string "third floor.\p"
	.string "Our PRESIDENT's OFFICE is on\n"
	.string "this floor.\p"
	.string "Anyway, I can't tell you how much I'm\n"
	.string "grateful for what you've done.\p"
	.string "Um… By the way, that parcel\n"
	.string "you got back for us…\p"
	.string "Could I get you to deliver that to\n"
	.string "the SHIPYARD in SLATEPORT?\p"
	.string "It would be awful if those robbers\n"
	.string "tried to take it again.\p"
	.string "Uh… Hehehe, so, uh, could I count\n"
	.string "on you to do that for me?\p"
	.string "Oh, that's right.\n"
	.string "Could you wait here a second?$"

RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe::
# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our PRESIDENT would like to have\n"
	.string "a word with you.\p"
	.string "Please come with me.$"

RustboroCity_DevonCorp_3F_Text_PleaseGoAhead::
# 249 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please, go ahead.$"

RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard::
# 253 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "If you visit the SHIPYARD in SLATEPORT,\n"
	.string "you should go see CAPT. STERN.$"

RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular::
# 258 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEVON's new products, the REPEAT BALL\n"
	.string "and TIMER BALL, have become hugely\l"
	.string "popular among TRAINERS.$"

RustboroCity_DevonCorp_3F_Text_RareRocksDisplay::
# 264 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a collection of rare rocks and\n"
	.string "stones assembled by the PRESIDENT.$"
