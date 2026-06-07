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
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_0
# 25 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 26 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 80
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_1
# 28 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe, MSGBOX_DEFAULT
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_2
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_3
# 34 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead, MSGBOX_DEFAULT
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadedefaultbgm
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_4
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_5
# 40 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_LETTER
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis, MSGBOX_DEFAULT
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 50 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare, MSGBOX_DEFAULT
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 55 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 56 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 61 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 62 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 63 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
	end


# 67 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_Unused:
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_faster_left
	step_end

RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock_faceplayer
# 75 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStone_2
# 78 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_MrStone_3
# 87 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
RustboroCity_DevonCorp_3F_EventScript_MrStone_1:
# 89 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return

RustboroCity_DevonCorp_3F_EventScript_MrStone_2:
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
	goto RustboroCity_DevonCorp_3F_EventScript_MrStone_1

RustboroCity_DevonCorp_3F_EventScript_MrStone_3:
# 79 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE
# 0 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_3F_EventScript_MrStone_8
RustboroCity_DevonCorp_3F_EventScript_MrStone_7:
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
	goto RustboroCity_DevonCorp_3F_EventScript_MrStone_1

RustboroCity_DevonCorp_3F_EventScript_MrStone_8:
# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto RustboroCity_DevonCorp_3F_EventScript_MrStone_7


RustboroCity_DevonCorp_3F_EventScript_Employee::
# 93 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock_faceplayer
# 94 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_Employee_2
# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
	release_end

RustboroCity_DevonCorp_3F_EventScript_Employee_2:
# 95 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
	release_end


RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 103 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
	end


# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_0:
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
	step_end

# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_1:
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
	step_end

# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_2:
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_faster_left
	step_end

# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_3:
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
	step_end

# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_4:
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_faster_down
	step_end

# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident_Movement_5:
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_faster_right
	step_end

RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor::
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'm MR. STONE, the PRESIDENT of\n"
	.string "the DEVON CORPORATION.\p"
	.string "I'd just got word about you!\p"
	.string "You saved our staff not just once,\n"
	.string "but twice!\p"
	.string "I have a favor to ask of an amazing\n"
	.string "person like you.\p"
	.string "I understand that you're delivering\n"
	.string "a package to SLATEPORT's SHIPYARD.\p"
	.string "Well, on the way, could you stop off in\n"
	.string "DEWFORD TOWN?\p"
	.string "I was hoping that you'd deliver a\n"
	.string "LETTER to STEVEN in DEWFORD.$"

RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis::
# 129 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Now, you should know that\n"
	.string "I am a great PRESIDENT.\p"
	.string "So, I'd never be so cheap as to ask\n"
	.string "a favor for nothing in return.\p"
	.string "That's why I want you to have this!$"

RustboroCity_DevonCorp_3F_Text_ReceivedPokenav::
# 139 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} received a POKéNAV.$"

RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp::
# 143 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: That device…\p"
	.string "It's a POKéMON NAVIGATOR, or POKéNAV\n"
	.string "for short.\p"
	.string "It's an indispensable tool for any\n"
	.string "TRAINER on an adventure.\p"
	.string "It has a map of the HOENN region.\p"
	.string "You can check the locations of\n"
	.string "DEWFORD and SLATEPORT easily!\p"
	.string "By the way, I've heard that sinister\n"
	.string "criminals--MAGMA and AQUA, I believe--\l"
	.string "have been making trouble far and wide.\p"
	.string "I think it would be best if you rested\n"
	.string "up before you go on your way.$"

RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare::
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Well, then, {PLAYER}{KUN},\n"
	.string "go with caution and care!$"

RustboroCity_DevonCorp_3F_Text_CountingOnYou::
# 170 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: I'm counting on you!$"

RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter::
# 174 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: You delivered my LETTER?\n"
	.string "Thank you kindly!\p"
	.string "This is my way of thanking you.\n"
	.string "It should help you, a TRAINER.$"

RustboroCity_DevonCorp_3F_Text_ExplainExpShare::
# 182 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: A POKéMON holding that\n"
	.string "EXP. SHARE will be given some of the\l"
	.string "EXP Points from battle.\p"
	.string "It will get EXP Points even if it didn't\n"
	.string "actually battle.\p"
	.string "I would say EXP. SHARE is quite useful\n"
	.string "for raising weak POKéMON.$"

RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends::
# 194 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Since my youth, I've immersed\n"
	.string "myself in work.\p"
	.string "Consequently, I'm not familiar with\n"
	.string "trends and that sort of thing.\p"
	.string "But do young people all want to be\n"
	.string "TRAINERS in the POKéMON LEAGUE?$"

RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere::
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
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
# 231 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our PRESIDENT would like to have\n"
	.string "a word with you.\p"
	.string "Please come with me.$"

RustboroCity_DevonCorp_3F_Text_PleaseGoAhead::
# 238 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please, go ahead.$"

RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard::
# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "If you visit the SHIPYARD in SLATEPORT,\n"
	.string "you should go see CAPT. STERN.$"

RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular::
# 247 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEVON's new products, the REPEAT BALL\n"
	.string "and TIMER BALL, have become hugely\l"
	.string "popular among TRAINERS.$"

RustboroCity_DevonCorp_3F_Text_RareRocksDisplay::
# 253 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a collection of rare rocks and\n"
	.string "stones assembled by the PRESIDENT.$"
