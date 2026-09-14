MagmaHideout_4F_MapScripts::
	.byte 0


MagmaHideout_4F_EventScript_Maxie::
# 4 "data/maps/MagmaHideout_4F/scripts.pory"
	lockall
# 5 "data/maps/MagmaHideout_4F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 6 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
# 7 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 8 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 20
# 9 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 10 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_M_DETECT
# 11 "data/maps/MagmaHideout_4F/scripts.pory"
	dofieldeffectsparkle 18, 42, 0
# 12 "data/maps/MagmaHideout_4F/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 13 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_RESULT, 1
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 15 "data/maps/MagmaHideout_4F/scripts.pory"
	playse SE_ORB
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
	special DoOrbEffect
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 19 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 150
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON_SLEEPING
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	addobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 23 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 60
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_EventScript_Maxie_Movement_0
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	special FadeOutOrbEffect
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 1
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 1
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 32 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_GROUDON, MagmaHideout_4F_EventScript_Maxie_Movement_1
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GROUDON
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 4
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, 2
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8005, 2
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 40 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 41 "data/maps/MagmaHideout_4F/scripts.pory"
	special ShakeCamera
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	waitstate
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, MagmaHideout_4F_Movement_MaxieLookAround
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieGroudonWhatsWrong, MSGBOX_DEFAULT
# 47 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 48 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 30
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_4F_MAXIE, Common_Movement_FacePlayer
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmovement 0
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
# 57 "data/maps/MagmaHideout_4F/scripts.pory"
	closemessage
# 58 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_MAXIE
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_1
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_2
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_GRUNT_3
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject LOCALID_MAGMA_HIDEOUT_4F_TABITHA
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
	releaseall
	end


# 72 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_Movement_MaxieLookAround:
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	face_left
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	face_right
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	face_up
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
	step_end

MagmaHideout_4F_EventScript_Grunt11::
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_9, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
	end


MagmaHideout_4F_EventScript_Grunt12::
# 93 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_10, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
# 94 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
	end


MagmaHideout_4F_EventScript_Tabitha::
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	end


# 24 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie_Movement_0:
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	creep_down
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	creep_down
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	delay_16
	step_end

# 33 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Maxie_Movement_1:
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
# 33 "data/maps/MagmaHideout_4F/scripts.pory"
	slide_up
	step_end

MagmaHideout_4F_Text_Grunt11Intro::
# 110 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I want to see GROUDON, too, but they\n"
	.string "won't let me see even its tail…\p"
	.string "It's got me feeling really frustrated.\p"
	.string "Oh, no!\n"
	.string "I blabbed about GROUDON!$"

MagmaHideout_4F_Text_Grunt11Defeat::
# 120 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I guess it's impossible to win if one\n"
	.string "doesn't have a calm mind…$"

MagmaHideout_4F_Text_Grunt11PostBattle::
# 125 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "I wonder if GROUDON even has a tail?$"

MagmaHideout_4F_Text_Grunt12Intro::
# 129 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Fuhahaha!\n"
	.string "Soon! Very soon!\l"
	.string "Our grand objective will be achieved!$"

MagmaHideout_4F_Text_Grunt12Defeat::
# 135 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Grrr…\n"
	.string "I've come so far, but now this?$"

MagmaHideout_4F_Text_Grunt12PostBattle::
# 140 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "MAXIE, sir!\n"
	.string "An intruder is headed your way!$"

MagmaHideout_4F_Text_Grunt13Intro::
# 145 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "You're not finished yet!\n"
	.string "You're not getting by me easily!$"

MagmaHideout_4F_Text_Grunt13Defeat::
# 150 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Was I that easy to knock down?$"

MagmaHideout_4F_Text_Grunt13PostBattle::
# 154 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "C-come on, one more match…$"

MagmaHideout_4F_Text_TabithaIntro::
# 158 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Hehehe!\n"
	.string "You made it this far, so I'll tell you!\p"
	.string "That's right!\n"
	.string "Up ahead, GROUDON is sleeping!\p"
	.string "MAXIE went to GROUDON just seconds\n"
	.string "ago!\p"
	.string "It's going to awaken real soon!\n"
	.string "Hehe! Hehehe!$"

MagmaHideout_4F_Text_TabithaDefeat::
# 172 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "Taken down again…\n"
	.string "Hehe…$"

MagmaHideout_4F_Text_TabithaPostBattle::
# 177 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "…And while you wasted time with me,\n"
	.string "MAXIE should have awakened GROUDON…$"

MagmaHideout_4F_Text_MaxieAwakenGroudon::
# 182 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{SPEAKER NAME_TABITHA}GROUDON…\p"
	.string "Awaken now from your eternal slumber,\n"
	.string "and decimate this world.\p"
	.string "I command this of you, as the holder of\n"
	.string "the RED ORB!\p"
	.string "Split the grounds beneath you!\n"
	.string "Bathe the foolish masses in your heat!\l"
	.string "That is my greatest wish in this world!$"

MagmaHideout_4F_Text_MaxieGroudonWhatsWrong::
# 196 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{SPEAKER NAME_TABITHA}HAHAHAHAAHA!!\p"
	.string "What will you weaklings do now?\n"
	.string "Defeating me in battle won't prevent\l"
	.string "you from being crushed by GOD.$"

MagmaHideout_4F_Text_MaxieOhItWasYou::
# 204 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{SPEAKER NAME_TABITHA}We will meet again, {PLAYER}.\p"
	.string "And when we do, you will kneel before me,\n"
	.string "alongside all the other worms.$"

MagmaHideout_4F_Text_MaxieDefeat::
# 211 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "What makes you so adept at handling\n"
	.string "POKéMON?$"

MagmaHideout_4F_Text_MaxieImGoingAfterGroudon::
# 216 "data/maps/MagmaHideout_4F/scripts.pory"
	.string "{SPEAKER NAME_MAXIE}There has to be some reason\n"
	.string "why GROUDON fled…\p"
	.string "That's what you're trying to say,\n"
	.string "aren't you?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Humph…\n"
	.string "You think I didn't know that?\p"
	.string "With GROUDON gone, there is no longer\n"
	.string "any need for this blasted volcano.\p"
	.string "I am going after GROUDON, so this\n"
	.string "is where we part!$"
