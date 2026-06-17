SixIsland_DottedHole_SapphireRoom_Frlg_MapScripts::
	.byte 0


SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire::
# 4 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 6 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 7 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	message SixIsland_DottedHole_SapphireRoom_Text_FoundSapphire
# 8 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmessage
# 9 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitfanfare
# 10 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	closemessage
# 11 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setobjectxyperm LOCALID_DOTTED_HOLE_THIEF, 5, 0
# 12 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	addobject LOCALID_DOTTED_HOLE_THIEF
# 13 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playse SE_FALL
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_Movement_0
# 15 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 16 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playse SE_M_STRENGTH
# 17 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_2
# 17 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_2
# 20 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_1:
# 22 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 23 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 3
# 24 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8005, 0
# 25 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8006, 12
# 26 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8007, 3
# 27 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	special ShakeScreen
# 28 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	delay 60
# 29 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_8
# 29 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_8
# 32 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_Movement_2
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_7:
# 34 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 35 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 36 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_IWasRightInTailingYou
# 37 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	closemessage
# 38 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_14
# 38 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_14
# 41 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, Common_Movement_WalkUp
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_13:
# 43 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 44 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	switch VAR_FACING
# 45 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	case DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_21
# 46 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	case DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_22
# 47 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	case DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_23
# 48 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	case DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_24
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_19:
# 50 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 51 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	removeobject LOCALID_SAPPHIRE
# 52 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_26
# 52 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_26
# 55 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_25:
# 57 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 58 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_SellToTeamRocketTellPassword
# 59 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	closemessage
# 60 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_Movement_3
# 61 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	switch VAR_FACING
# 62 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	case DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_33
# 63 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	case DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_34
# 64 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	case DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_35
# 65 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	case DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_35
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_31:
# 68 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	waitmovement 0
# 69 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	playse SE_EXIT
# 70 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	delay 35
# 71 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	removeobject LOCALID_DOTTED_HOLE_THIEF
# 72 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setflag FLAG_LEARNED_YES_NAH_CHANSEY
	release_end

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_2:
# 18 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_1

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_8:
# 30 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_Movement_1
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_7

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_14:
# 39 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, Common_Movement_WalkRight
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_13

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_21:
# 45 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_19

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_22:
# 46 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_19

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_23:
# 47 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_19

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_24:
# 48 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_19

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_26:
# 53 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_25

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_33:
# 62 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_Movement_4
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_31

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_34:
# 63 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_Movement_5
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_31

SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_35:
# 66 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	applymovement LOCALID_DOTTED_HOLE_THIEF, SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_Movement_6
	goto SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_31


SixIsland_DottedHole_SapphireRoom_EventScript_BrailleMessage::
# 77 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	lockall
# 78 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	setvar VAR_0x8005, 130
# 79 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_LetTheTwo
# 80 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Glittering
# 81 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Stones
# 82 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_OneInRed
# 83 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_OneInBlue
# 84 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_ConnectThe
# 85 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Past
# 86 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_TwoFriends
# 87 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Sharing
# 88 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_PowerOpen
# 89 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_AWindowTo
# 90 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_ANewWorld
# 91 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_ThatGlows
# 92 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_TheNext
# 93 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_WorldWaits
# 94 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	braillemsgbox Braille_Text_ForYou
# 95 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	releaseall
	end


# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_Movement_0:
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	face_down
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	disable_anim
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	slide_down
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	restore_anim
	step_end

# 30 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_Movement_1:
# 30 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_up
# 30 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_up
# 30 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_faster_right
	step_end

# 32 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_Movement_2:
# 32 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_right
# 32 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	walk_right
# 32 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_faster_up
	step_end

# 60 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_Movement_3:
# 60 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	delay_16
# 60 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	step_faster_right
	step_end

# 62 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_Movement_4:
# 62 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_up
# 62 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_right
# 62 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_right
# 62 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_right
# 62 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_down
# 62 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_right
# 62 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_right
	step_end

# 63 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_Movement_5:
# 63 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_down
# 63 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_right
# 63 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_right
# 63 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_right
# 63 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_up
# 63 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_right
# 63 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_right
	step_end

# 66 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire_Movement_6:
# 66 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_right
# 66 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_right
# 66 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_right
# 66 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_right
# 66 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	run_up
	step_end

SixIsland_DottedHole_SapphireRoom_Text_FoundSapphire::
# 99 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "{PLAYER} found a SAPPHIRE!$"

SixIsland_DottedHole_SapphireRoom_Text_IWasRightInTailingYou::
# 103 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "Fufu… Fufufufu…\n"
	.string "I guessed right.\p"
	.string "I was right in tailing you!$"

SixIsland_DottedHole_SapphireRoom_Text_SellToTeamRocketTellPassword::
# 110 "data/maps/SixIsland_DottedHole_SapphireRoom_Frlg/scripts.pory"
	.string "I knew that there was a SAPPHIRE\n"
	.string "here, so it belongs to me!\p"
	.string "I'll sell it to TEAM ROCKET for\n"
	.string "serious money.\p"
	.string "…D-don't glare at me like that!\p"
	.string "If you want it back, why don't you\n"
	.string "go get it after I sell it?\p"
	.string "I'll even tell you one of the\n"
	.string "passwords to TEAM ROCKET's\l"
	.string "WAREHOUSE.\p"
	.string "The WAREHOUSE password I know is\n"
	.string "“Yes, nah, CHANSEY.”\p"
	.string "I'm done.\n"
	.string "Don't think badly of me!$"
