# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Gym/scripts.pory"

# 5 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_CUT, RustboroCity_Gym_EventScript_GiveCut
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Gym/scripts.pory"

# 14 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	call RustboroCity_Gym_EventScript_GiveCut
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 28 "data/maps/RustboroCity_Gym/scripts.pory"

# 29 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveCut::
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_HM_CUT
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainCut, MSGBOX_DEFAULT
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	return
# 34 "data/maps/RustboroCity_Gym/scripts.pory"

# 35 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 42 "data/maps/RustboroCity_Gym/scripts.pory"

# 43 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 47 "data/maps/RustboroCity_Gym/scripts.pory"

# 48 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Trinity::
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TRINITY, RustboroCity_Gym_Text_TrinityIntro, RustboroCity_Gym_Text_TrinityDefeat
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TrinityPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 52 "data/maps/RustboroCity_Gym/scripts.pory"

# 53 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 57 "data/maps/RustboroCity_Gym/scripts.pory"

# 58 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 62 "data/maps/RustboroCity_Gym/scripts.pory"

# 63 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GymGuideNextGym
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 71 "data/maps/RustboroCity_Gym/scripts.pory"

# 72 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 77 "data/maps/RustboroCity_Gym/scripts.pory"

# 78 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuideNextGym::
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideNextGym, MSGBOX_DEFAULT
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 82 "data/maps/RustboroCity_Gym/scripts.pory"

# 83 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 88 "data/maps/RustboroCity_Gym/scripts.pory"

# 89 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 94 "data/maps/RustboroCity_Gym/scripts.pory"

# 95 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 99 "data/maps/RustboroCity_Gym/scripts.pory"

# 100 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 104 "data/maps/RustboroCity_Gym/scripts.pory"

# 105 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 119 "data/maps/RustboroCity_Gym/scripts.pory"

# 120 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Welcome to Rustboro Gym, young trainer!\p"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This gym is helmed by the formidable \n"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne, known for her POKéMON's\l"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "strength and resilience!\p"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "She was a child prodigy born right here\n"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in Rustboro City.\p"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "After graduating at the top of her\n"
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "class at Rustboro Trainer's School,\l"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "she was quickly elevated to the rank of\l"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gym Leader.\p"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Her advancement was not only\n"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "unprecedented but also made her the\l"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "youngest Gym Leader in the history of\l"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the Pokemon League!\p"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Proceed forward and defeat Roxanne's\n"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "handpicked Gym Trainers!\p"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "These Trainers will give you useful\n"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "information about their Gym Leader,\l"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so you should listen carefully to what\l"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "they have to say.\p"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Once they are all defeated, you will be\n"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "able to challenge Roxanne herself!$"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"

# 144 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Outstanding!\n"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've defeated Roxanne!\p"
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Now that you've earned a badge,\n"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You're one step closer to completing\l"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the Gym Challenge!\p"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "As a badge holder, you are also entitled\n"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to our GYM's unique TECHNICAL MACHINE!$"
# 152 "data/maps/RustboroCity_Gym/scripts.pory"

# 153 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideNextGym:
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Your next challenge lies to the east in\n"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Mauville City.\p"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "There, you will be able to challenge\l"
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Watson, the Gregarious Engineer.$"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"

# 159 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TrinityIntro:
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You don't look like much!\n"
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You won't even make it to Roxanne!$"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"

# 163 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TrinityDefeat:
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hmph... not bad for a newbie.$"
# 165 "data/maps/RustboroCity_Gym/scripts.pory"

# 166 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TrinityPostBattle:
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have a lot in common with Roxanne.\n"
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm top of my class in Trainer's School,\l"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "and my Phanpy fights just like one of\l"
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "her POKéMON.\p"
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I know I'll be a Gym Leader too\n"
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "one day!$"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"

# 174 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne believed in me enough to make\n"
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "me one of her Gym Trainers!\p"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to win, so I won't let her down!$"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"

# 179 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sorry Roxanne...\n"
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost.$"
# 182 "data/maps/RustboroCity_Gym/scripts.pory"

# 183 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I chose Nacli as my POKéMON because\n"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it's the same type as Roxanne's ace.\p"
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Maybe I can't follow in her footsteps\n"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "like I thought I could.$"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"

# 189 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Not just anyone can battle my niece!\n"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Prove your metal to me or get lost!$"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"

# 193 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The way you battle...\p"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You almost remind me of Roxanne when\n"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "she was your age.$"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"

# 198 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I used to take Roxanne hiking around\n"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Meteor Falls when she was young.\p"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I think that's where she developed her\n"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "passion for POKéMON.\p"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "She even met one of her favorite\n"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON on Route 115!$"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"

# 206 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, challenger.\p"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I am ROXANNE, the GYM LEADER for\n"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY.\p"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm always glad to be challenged by\n"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "young trainers such as yourself.\p"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It takes courage and willpower for\n"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ANYONE to attempt the Gym Challenge,\l"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "let alone someone so young.\p"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please, show me what you've learned.\p"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Let this battle mark the next stage of\n"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "your development.$"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"

# 219 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Congratulations!\n"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've beaten me.\p"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I see that you've learned a lot despite\n"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "only being a trainer for a short time.\p"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept this badge as a\n"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "commemoration of your victory.$"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"

# 227 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ROXANNE.$"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"

# 231 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It is also my duty as Gym Leader to\n"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "reward you with this HM.$"
# 234 "data/maps/RustboroCity_Gym/scripts.pory"

# 235 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainCut:
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "HIDDEN MACHINES, or HMs, contain the\n"
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "instructions to teach any eligible\l"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON moves that can be helpful for\l"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "traversing terrain, but they do not\l"
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "have to be taught in order for a\l"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON to use them.\p"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In this case, HM01:CUT allows you to\n"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "chop down small trees that are blocking\l"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "your path.\p"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope this machine proves useful\n"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "throughout your journey.$"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"

# 248 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb:
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TM contains the instructions in\n"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "order to teach the move ROCK TOMB to\l"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "any eligible POKéMON.\p"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "As the name clearly indicates, it's a\n"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROCK-TYPE move, but in addition to\l"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "dealing damage, it also lowers the\l"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "opponent's SPEED.\p"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This can allow you to turn the tables on\n"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "your opponent if used effectively.$"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"

# 259 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Talent like yours is rare to come by.\p"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you continue to hone your skills,\n"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "and perhaps, we'll meet again one day.\p"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Until then, you have my best wishes!$"
# 264 "data/maps/RustboroCity_Gym/scripts.pory"

# 265 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"

# 268 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "NEWEST VICTOR:\n"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"

# 273 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 277 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 289 "data/maps/RustboroCity_Gym/scripts.pory"

# 290 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 291 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 292 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 293 "data/maps/RustboroCity_Gym/scripts.pory"

# 294 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 298 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 299 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 300 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 301 "data/maps/RustboroCity_Gym/scripts.pory"

# 302 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 303 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 304 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 305 "data/maps/RustboroCity_Gym/scripts.pory"

# 306 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 308 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 309 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 310 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 311 "data/maps/RustboroCity_Gym/scripts.pory"

# 312 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 313 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 314 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 315 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 316 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 317 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 318 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 319 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 320 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 321 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 322 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"
