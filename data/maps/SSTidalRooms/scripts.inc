SSTidalRooms_MapScripts::
	.byte 0


SSTidalRooms_EventScript_SnatchGiver::
# 4 "data/maps/SSTidalRooms/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SSTidalRooms/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SNATCH, SSTidalRooms_EventScript_SnatchGiver_2
# 9 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NotSuspiciousTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_SNATCH
# 0 "data/maps/SSTidalRooms/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SSTidalRooms_EventScript_SnatchGiver_5
SSTidalRooms_EventScript_SnatchGiver_4:
# 13 "data/maps/SSTidalRooms/scripts.pory"
	setflag FLAG_RECEIVED_TM_SNATCH
# 14 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
	release_end

SSTidalRooms_EventScript_SnatchGiver_2:
# 6 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
	release_end

SSTidalRooms_EventScript_SnatchGiver_5:
# 11 "data/maps/SSTidalRooms/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SSTidalRooms_EventScript_SnatchGiver_4


SSTidalRooms_EventScript_Bed::
# 19 "data/maps/SSTidalRooms/scripts.pory"
	lockall
# 20 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_TakeRestOnBed, MSGBOX_DEFAULT
# 21 "data/maps/SSTidalRooms/scripts.pory"
	closemessage
# 22 "data/maps/SSTidalRooms/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 23 "data/maps/SSTidalRooms/scripts.pory"
	call SSTidalRooms_EventScript_ProgessCruiseAfterBed
# 24 "data/maps/SSTidalRooms/scripts.pory"
	releaseall
	end


SSTidalRooms_EventScript_Colton::
# 29 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_COLTON, SSTidalRooms_Text_ColtonIntro, SSTidalRooms_Text_ColtonDefeat
# 30 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ColtonPostBattle, MSGBOX_AUTOCLOSE
	end


SSTidalRooms_EventScript_Micah::
# 35 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_MICAH, SSTidalRooms_Text_MicahIntro, SSTidalRooms_Text_MicahDefeat
# 36 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_MicahPostBattle, MSGBOX_AUTOCLOSE
	end


SSTidalRooms_EventScript_Thomas::
# 41 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_THOMAS, SSTidalRooms_Text_ThomasIntro, SSTidalRooms_Text_ThomasDefeat
# 42 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_ThomasPostBattle, MSGBOX_AUTOCLOSE
	end


SSTidalRooms_EventScript_Jed::
# 47 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_JedIntro, SSTidalRooms_Text_JedDefeat, SSTidalRooms_Text_JedNotEnoughMons
# 48 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_JedPostBattle, MSGBOX_AUTOCLOSE
	end


SSTidalRooms_EventScript_Lea::
# 53 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_LeaIntro, SSTidalRooms_Text_LeaDefeat, SSTidalRooms_Text_LeaNotEnoughMons
# 54 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_LeaPostBattle, MSGBOX_AUTOCLOSE
	end


SSTidalRooms_EventScript_Garret::
# 59 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_GARRET, SSTidalRooms_Text_GarretIntro, SSTidalRooms_Text_GarretDefeat
# 60 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
	end


SSTidalRooms_EventScript_Naomi::
# 65 "data/maps/SSTidalRooms/scripts.pory"
	trainerbattle_single TRAINER_NAOMI, SSTidalRooms_Text_NaomiIntro, SSTidalRooms_Text_NaomiDefeat
# 66 "data/maps/SSTidalRooms/scripts.pory"
	msgbox SSTidalRooms_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
	end


SSTidalRooms_Text_TakeRestOnBed::
# 70 "data/maps/SSTidalRooms/scripts.pory"
	.string "There's a bed…\n"
	.string "Let's take a rest.$"

SSTidalRooms_Text_ColtonIntro::
# 75 "data/maps/SSTidalRooms/scripts.pory"
	.string "I often sail to LILYCOVE CITY.\p"
	.string "I enjoy attending CONTESTS,\n"
	.string "you see.$"

SSTidalRooms_Text_ColtonDefeat::
# 82 "data/maps/SSTidalRooms/scripts.pory"
	.string "That was an enjoyable match!$"

SSTidalRooms_Text_ColtonPostBattle::
# 86 "data/maps/SSTidalRooms/scripts.pory"
	.string "I get so excited imagining what kinds\n"
	.string "of POKéMON I'll get to see in the next\l"
	.string "CONTEST. The anticipation of it thrills!$"

SSTidalRooms_Text_MicahIntro::
# 92 "data/maps/SSTidalRooms/scripts.pory"
	.string "Are your friends strong?$"

SSTidalRooms_Text_MicahDefeat::
# 96 "data/maps/SSTidalRooms/scripts.pory"
	.string "Your friends are, indeed, strong.$"

SSTidalRooms_Text_MicahPostBattle::
# 100 "data/maps/SSTidalRooms/scripts.pory"
	.string "Friends need not be human.\n"
	.string "For me, POKéMON are treasured friends!$"

SSTidalRooms_Text_ThomasIntro::
# 105 "data/maps/SSTidalRooms/scripts.pory"
	.string "Child…\n"
	.string "Did you knock on the door?$"

SSTidalRooms_Text_ThomasDefeat::
# 110 "data/maps/SSTidalRooms/scripts.pory"
	.string "A loss is to be accepted without haste\n"
	.string "or panic.$"

SSTidalRooms_Text_ThomasPostBattle::
# 115 "data/maps/SSTidalRooms/scripts.pory"
	.string "To be never ruffled in any situation is\n"
	.string "the GENTLEMAN's code of conduct.$"

SSTidalRooms_Text_JedIntro::
# 120 "data/maps/SSTidalRooms/scripts.pory"
	.string "{SPEAKER NAME_JED}I feel a little shy about this, but…\n"
	.string "We'll show you our lovey-dovey power!$"

SSTidalRooms_Text_JedDefeat::
# 125 "data/maps/SSTidalRooms/scripts.pory"
	.string "{SPEAKER NAME_JED}Sigh…$"

SSTidalRooms_Text_JedPostBattle::
# 129 "data/maps/SSTidalRooms/scripts.pory"
	.string "{SPEAKER NAME_JED}It's the first time that our lovey-\n"
	.string "dovey power couldn't prevail!\l"
	.string "You must be an awesome TRAINER!$"

SSTidalRooms_Text_JedNotEnoughMons::
# 135 "data/maps/SSTidalRooms/scripts.pory"
	.string "{SPEAKER NAME_JED}You only have one POKéMON?\n"
	.string "Isn't that just too lonesome?$"

SSTidalRooms_Text_LeaIntro::
# 140 "data/maps/SSTidalRooms/scripts.pory"
	.string "{SPEAKER NAME_LEA}I feel a little silly, but…\n"
	.string "We'll show you our lovey-dovey power!$"

SSTidalRooms_Text_LeaDefeat::
# 145 "data/maps/SSTidalRooms/scripts.pory"
	.string "{SPEAKER NAME_LEA}Oh, boo!$"

SSTidalRooms_Text_LeaPostBattle::
# 149 "data/maps/SSTidalRooms/scripts.pory"
	.string "{SPEAKER NAME_LEA}I can't believe it!\n"
	.string "Our lovey-dovey power failed…\l"
	.string "You must be an awesome TRAINER!$"

SSTidalRooms_Text_LeaNotEnoughMons::
# 155 "data/maps/SSTidalRooms/scripts.pory"
	.string "{SPEAKER NAME_LEA}I wanted to battle…\n"
	.string "But you don't even have two POKéMON…$"

SSTidalRooms_Text_GarretIntro::
# 160 "data/maps/SSTidalRooms/scripts.pory"
	.string "Ah, you've come just in time.\p"
	.string "I'm bored, you see.\n"
	.string "You may entertain me.$"

SSTidalRooms_Text_GarretDefeat::
# 167 "data/maps/SSTidalRooms/scripts.pory"
	.string "…That will do.$"

SSTidalRooms_Text_GarretPostBattle::
# 171 "data/maps/SSTidalRooms/scripts.pory"
	.string "Perhaps I shall get Father to acquire\n"
	.string "a yacht for me.\l"
	.string "A yacht for me and POKéMON!$"

SSTidalRooms_Text_NaomiIntro::
# 177 "data/maps/SSTidalRooms/scripts.pory"
	.string "Oh, you're such an adorable TRAINER.\n"
	.string "Would you like to have tea?\l"
	.string "Or would you rather battle?$"

SSTidalRooms_Text_NaomiDefeat::
# 183 "data/maps/SSTidalRooms/scripts.pory"
	.string "I see.\n"
	.string "You're the active sort.$"

SSTidalRooms_Text_NaomiPostBattle::
# 188 "data/maps/SSTidalRooms/scripts.pory"
	.string "A world cruise on a luxury liner has its\n"
	.string "charms, I must say…\p"
	.string "But, I will admit there is an appealing\n"
	.string "side to touring HOENN by ferry.$"

SSTidalRooms_Text_NotSuspiciousTakeThis::
# 196 "data/maps/SSTidalRooms/scripts.pory"
	.string "Uh… Hi! I… I'm not acting suspicious!\n"
	.string "Uh… You can have this! For free!\p"
	.string "It… Honestly, I didn't SNATCH it from\n"
	.string "someone! I'd never do such a thing!\l"
	.string "It's clean! You can use it!$"

SSTidalRooms_Text_ExplainSnatch::
# 205 "data/maps/SSTidalRooms/scripts.pory"
	.string "SNATCH steals the beneficial effects\n"
	.string "of certain moves before they can be\l"
	.string "used by a foe or ally.$"
