GraniteCave_StevensRoom_MapScripts::
	.byte 0


GraniteCave_StevensRoom_EventScript_Steven::
# 4 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock_faceplayer
# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_STEEL_WING
# 0 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GraniteCave_StevensRoom_EventScript_Steven_2
GraniteCave_StevensRoom_EventScript_Steven_1:
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	switch VAR_FACING
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_NORTH, GraniteCave_StevensRoom_EventScript_Steven_6
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_SOUTH, GraniteCave_StevensRoom_EventScript_Steven_7
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_WEST, GraniteCave_StevensRoom_EventScript_Steven_8
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	case DIR_EAST, GraniteCave_StevensRoom_EventScript_Steven_8
GraniteCave_StevensRoom_EventScript_Steven_4:
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_GRANITE_CAVE_STEVEN
	release_end

GraniteCave_StevensRoom_EventScript_Steven_2:
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
	goto GraniteCave_StevensRoom_EventScript_Steven_1

GraniteCave_StevensRoom_EventScript_Steven_6:
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_STEVEN, GraniteCave_StevensRoom_EventScript_Steven_Movement_0
	goto GraniteCave_StevensRoom_EventScript_Steven_4

GraniteCave_StevensRoom_EventScript_Steven_7:
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_PLAYER, GraniteCave_StevensRoom_EventScript_Steven_Movement_1
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_STEVEN, GraniteCave_StevensRoom_EventScript_Steven_Movement_2
	goto GraniteCave_StevensRoom_EventScript_Steven_4

GraniteCave_StevensRoom_EventScript_Steven_8:
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_PLAYER, GraniteCave_StevensRoom_EventScript_Steven_Movement_1
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_GRANITE_CAVE_STEVEN, GraniteCave_StevensRoom_EventScript_Steven_Movement_0
	goto GraniteCave_StevensRoom_EventScript_Steven_4


# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven_Movement_0:
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
	step_end

# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven_Movement_1:
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_faster_up
	step_end

# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven_Movement_2:
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
	step_end

GraniteCave_StevensRoom_Text_ImStevenLetterForMe::
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "My name is STEVEN.\p"
	.string "I'm interested in rare stones,\n"
	.string "so I travel here and there.\p"
	.string "Oh?\n"
	.string "A LETTER for me?$"

GraniteCave_StevensRoom_Text_ThankYouTakeThis::
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}Okay, thank you.\p"
	.string "You went through all this trouble to\n"
	.string "deliver that. I need to thank you.\p"
	.string "Let me see…\n"
	.string "I'll give you this TM.\p"
	.string "It contains my favorite move,\n"
	.string "STEEL WING.$"

GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister::
# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "{SPEAKER NAME_STEVEN}Your POKéMON appear quite\n"
	.string "capable.\p"
	.string "If you keep training, you could even\n"
	.string "become the CHAMPION of the POKéMON\l"
	.string "LEAGUE one day. That's what I think.\p"
	.string "I know, since we've gotten to know each\n"
	.string "other, let's register one another in\l"
	.string "our POKéNAVS.\p"
	.string "… … … … … …$"

GraniteCave_StevensRoom_Text_RegisteredSteven::
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered STEVEN\n"
	.string "in the POKéNAV.$"

GraniteCave_StevensRoom_Text_IveGotToHurryAlong::
# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.$"

GraniteCave_StevensRoom_Text_OhBagIsFull::
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh, your BAG is full…\n"
	.string "That's too bad, then.$"
