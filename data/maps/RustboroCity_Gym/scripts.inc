RustboroCity_Gym_MapScripts::
	.byte 0


RustboroCity_Gym_EventScript_Roxanne::
# 4 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, RustboroCity_Gym_EventScript_Roxanne_2
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, RustboroCity_Gym_EventScript_Roxanne_5
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_CUT, RustboroCity_Gym_EventScript_Roxanne_11
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
	release_end

RustboroCity_Gym_EventScript_Roxanne_2:
# 5 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_ROXANNE_FINAL, RustboroCity_Gym_EventScript_Roxanne_8
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxanneFinalIntro, MSGBOX_DEFAULT
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneFinalDefeat
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostFinal, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Roxanne_5:
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Roxanne_8:
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostFinal, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Roxanne_11:
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	call RustboroCity_Gym_EventScript_GiveCut
	release_end


RustboroCity_Gym_EventScript_RoxanneDefeated::
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	call RustboroCity_Gym_EventScript_GiveCut
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_MAGMA_GRUNT
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_eq RustboroCity_Gym_EventScript_RoxanneDefeated_2
RustboroCity_Gym_EventScript_RoxanneDefeated_1:
	end

RustboroCity_Gym_EventScript_RoxanneDefeated_2:
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_ReadyPetalburgGymForBattle
	goto RustboroCity_Gym_EventScript_RoxanneDefeated_1


RustboroCity_Gym_EventScript_GiveCut::
	giveitem ITEM_HM_CUT
# 0 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_Gym_EventScript_GiveCut_2
RustboroCity_Gym_EventScript_GiveCut_1:
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainCut, MSGBOX_DEFAULT
	return

RustboroCity_Gym_EventScript_GiveCut_2:
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	goto Common_EventScript_BagIsFull
	goto RustboroCity_Gym_EventScript_GiveCut_1


RustboroCity_Gym_EventScript_Trinity::
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TRINITY, RustboroCity_Gym_Text_TrinityIntro, RustboroCity_Gym_Text_TrinityDefeat
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TrinityPostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_Gym_EventScript_Sadie::
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SADIE, RustboroCity_Gym_Text_SadieIntro, RustboroCity_Gym_Text_SadieDefeat
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_SadiePostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_Gym_EventScript_Tommy::
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_Gym_EventScript_Marc::
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end


RustboroCity_Gym_EventScript_GymGuide::
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	lock_faceplayer
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GymGuide_2
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuide_3
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
RustboroCity_Gym_EventScript_GymGuide_1:
	release_end

RustboroCity_Gym_EventScript_GymGuide_2:
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideNextGym, MSGBOX_DEFAULT
	goto RustboroCity_Gym_EventScript_GymGuide_1

RustboroCity_Gym_EventScript_GymGuide_3:
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	giveitem ITEM_TM_ROCK_THROW
# 0 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_Gym_EventScript_GymGuide_8
RustboroCity_Gym_EventScript_GymGuide_7:
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
	goto RustboroCity_Gym_EventScript_GymGuide_1

RustboroCity_Gym_EventScript_GymGuide_8:
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto RustboroCity_Gym_EventScript_GymGuide_7


RustboroCity_Gym_EventScript_LeftGymStatue::
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
	return


RustboroCity_Gym_EventScript_RightGymStatue::
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
	return


RustboroCity_Gym_EventScript_GymStatue::
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatue_2
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
RustboroCity_Gym_EventScript_GymStatue_1:
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	end

RustboroCity_Gym_EventScript_GymStatue_2:
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	goto RustboroCity_Gym_EventScript_GymStatue_1


RustboroCity_Gym_EventScript_RegisterRoxanne::
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
	end


RustboroCity_Gym_Text_GymGuideAdvice::
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Welcome to Rustboro Gym, young trainer!\p"
	.string "This gym is helmed by the formidable \n"
	.string "Roxanne, known for her POKéMON's\l"
	.string "strength and resilience!\p"
	.string "She was a child prodigy born right here\n"
	.string "in Rustboro City.\p"
	.string "After graduating at the top of her\n"
	.string "class at Rustboro Trainer's School,\l"
	.string "she was quickly elevated to the rank of\l"
	.string "Gym Leader.\p"
	.string "Her advancement was not only\n"
	.string "unprecedented but also made her the\l"
	.string "youngest Gym Leader in the history of\l"
	.string "the Pokemon League!\p"
	.string "Proceed forward and defeat Roxanne's\n"
	.string "handpicked Gym Trainers!\p"
	.string "These Trainers will give you useful\n"
	.string "information about their Gym Leader,\l"
	.string "so you should listen carefully to what\l"
	.string "they have to say.\p"
	.string "Once they are all defeated, you will be\n"
	.string "able to challenge Roxanne herself!$"

RustboroCity_Gym_Text_GymGuidePostVictory::
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Outstanding!\n"
	.string "You've defeated Roxanne!\p"
	.string "Now that you've earned a badge,\n"
	.string "you're one step closer to completing\l"
	.string "the Gym Challenge!\p"
	.string "As a badge holder, you are also entitled\n"
	.string "to our GYM's unique TECHNICAL MACHINE!$"

RustboroCity_Gym_Text_GymGuideNextGym::
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Your next challenge lies to the east in\n"
	.string "Mauville City.\p"
	.string "There, you will be able to challenge\n"
	.string "WATTSON, the Gregarious Engineer.$"

RustboroCity_Gym_Text_TrinityIntro::
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You don't look like much!\n"
	.string "You won't even make it to Roxanne!$"

RustboroCity_Gym_Text_TrinityDefeat::
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hmph… not bad for a newbie.$"

RustboroCity_Gym_Text_TrinityPostBattle::
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have a lot in common with Roxanne.\n"
	.string "I'm top of my class in Trainer's School,\l"
	.string "and my Phanpy fights just like one of\l"
	.string "her POKéMON.\p"
	.string "I know I'll be a Gym Leader too\n"
	.string "one day!$"

RustboroCity_Gym_Text_SadieIntro::
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You don't look like much!\n"
	.string "You won't even make it to Roxanne!$"

RustboroCity_Gym_Text_SadieDefeat::
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hmph... not bad for a newbie.$"

RustboroCity_Gym_Text_SadiePostBattle::
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have a lot in common with Roxanne.\n"
	.string "I'm top of my class in Trainer's School,\l"
	.string "and my Phanpy fights just like one of\l"
	.string "her POKéMON.\p"
	.string "I know I'll be a Gym Leader too\n"
	.string "one day!$"

RustboroCity_Gym_Text_TommyIntro::
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne believed in me enough to make\n"
	.string "me one of her Gym Trainers!\p"
	.string "I have to win, so I won't let her down!$"

RustboroCity_Gym_Text_TommyDefeat::
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sorry Roxanne...\n"
	.string "I lost.$"

RustboroCity_Gym_Text_TommyPostBattle::
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I chose Nacli as my POKéMON because\n"
	.string "it's the same type as Roxanne's ace.\p"
	.string "Maybe I can't follow in her footsteps\n"
	.string "like I thought I could.$"

RustboroCity_Gym_Text_MarcIntro::
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Not just anyone can battle my niece!\n"
	.string "Prove your metal to me or get lost!$"

RustboroCity_Gym_Text_MarcDefeat::
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The way you battle…\n"
	.string "It almost reminds me of…$"

RustboroCity_Gym_Text_MarcPostBattle::
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I used to take Roxanne hiking around\n"
	.string "Meteor Falls when she was young.\p"
	.string "I think that's where she developed her\n"
	.string "passion for POKéMON.\p"
	.string "She even met one of her favorite\n"
	.string "POKéMON on Route 115!$"

RustboroCity_Gym_Text_RoxanneIntro::
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, challenger.\p"
	.string "I am ROXANNE, the GYM LEADER for\n"
	.string "RUSTBORO CITY.\p"
	.string "I'm always glad to be challenged by\n"
	.string "young trainers such as yourself.\p"
	.string "It takes courage and willpower for\n"
	.string "ANYONE to attempt the Gym Challenge,\l"
	.string "let alone one as young as you.\p"
	.string "Now, show me what you've learned.\p"
	.string "Let this battle mark the next stage in\n"
	.string "your development.$"

RustboroCity_Gym_Text_RoxanneDefeat::
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Congratulations!\n"
	.string "You've beaten me.\p"
	.string "I see that you've learned a lot despite\n"
	.string "only being a trainer for a short time.\p"
	.string "Please accept this badge as a\n"
	.string "commemoration of your victory.$"

RustboroCity_Gym_Text_ReceivedStoneBadge::
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
	.string "from ROXANNE.$"

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis::
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It is also my duty as Gym Leader to\n"
	.string "reward you with this HM.$"

RustboroCity_Gym_Text_ExplainCut::
# 306 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "HIDDEN MACHINES, or HMs, contain the\n"
	.string "instructions to teach any eligible\l"
	.string "POKéMON moves that can be helpful for\l"
	.string "traversing terrain, but they do not\l"
	.string "have to be taught in order for a\l"
	.string "POKéMON to use them.\p"
	.string "In this case, HM01 allows you to\n"
	.string "chop down small trees that are blocking\l"
	.string "your path.\p"
	.string "I hope this machine proves useful\n"
	.string "throughout your journey.$"

RustboroCity_Gym_Text_ExplainRockTomb::
# 322 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TM contains the instructions in\n"
	.string "order to teach the move ROCK TOMB to\l"
	.string "any eligible POKéMON.\p"
	.string "As the name clearly indicates, it's a\n"
	.string "ROCK-TYPE move, but in addition to\l"
	.string "dealing damage, it also lowers the\l"
	.string "opponent's SPEED.\p"
	.string "This can allow you to turn the tables on\n"
	.string "your opponent if used effectively.$"

RustboroCity_Gym_Text_RoxannePostBattle::
# 336 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Talent like yours is rare to come by.\p"
	.string "I hope you continue to hone your skills,\n"
	.string "and perhaps, we'll meet again one day.\p"
	.string "Until then, you have my best wishes!$"

RustboroCity_Gym_Text_GymStatue::
# 345 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"

RustboroCity_Gym_Text_GymStatueCertified::
# 349 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
	.string "NEWEST VICTOR:\n"
	.string "{PLAYER}$"

RustboroCity_Gym_Text_RoxanneRegisterCall::
# 356 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "{SPEAKER NAME_ROXANNE}Oh, hello, {PLAYER}?\n"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
	.string "I heard from BRAWLY that you're\n"
	.string "moving up through the ranks of\l"
	.string "TRAINERS at an incredible clip.\p"
	.string "Well, I'd rather not think that\n"
	.string "I can't beat you.\p"
	.string "I promise, I will shape up my GYM\n"
	.string "so that you may challenge us again.\p"
	.string "I hope you'll be looking forward to\n"
	.string "that occasion as much as me!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

RustboroCity_Gym_Text_RegisteredRoxanne::
# 380 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
	.string "in the POKéNAV.$"

RustboroCity_Gym_Text_RoxannePreRematch::
# 385 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_ROXANNE}I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"

RustboroCity_Gym_Text_RoxanneRematchDefeat::
# 396 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
	.string "Again, I have lost…$"

RustboroCity_Gym_Text_RoxannePostRematch::
# 401 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_ROXANNE}I still have much to learn\n"
	.string "when it comes to battling POKéMON.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"

RustboroCity_Gym_Text_RoxanneFinalIntro::
# 409 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_ROXANNE}I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"

RustboroCity_Gym_Text_RoxanneFinalDefeat::
# 420 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
	.string "Again, I have lost…$"

RustboroCity_Gym_Text_RoxannePostFinal::
# 425 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_ROXANNE}I still have much to learn\n"
	.string "when it comes to battling POKéMON.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"

RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons::
# 433 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_ROXANNE}I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become…\p"
	.string "Oh, no…\n"
	.string "You only have one POKéMON with you?\p"
	.string "Please return with at least one more\n"
	.string "POKéMON.$"
