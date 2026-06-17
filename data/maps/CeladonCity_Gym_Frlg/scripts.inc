CeladonCity_Gym_Frlg_MapScripts::
	.byte 0


CeladonCity_Gym_EventScript_Erika::
# 4 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 5 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_ERIKA, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 6 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM19_FROM_ERIKA, CeladonCity_Gym_EventScript_Erika_2
CeladonCity_Gym_EventScript_Erika_1:
# 9 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 4
# 10 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_ErikaPostBattle
	release_end

CeladonCity_Gym_EventScript_Erika_2:
# 7 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto CeladonCity_Gym_EventScript_GiveTM19
	goto CeladonCity_Gym_EventScript_Erika_1


CeladonCity_Gym_EventScript_DefeatedErika::
# 15 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 1
# 16 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_ERIKA_JOURNALS
# 17 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_ERIKA
# 18 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE04_GET
# 19 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 4
# 20 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto CeladonCity_Gym_EventScript_GiveTM19
	end


CeladonCity_Gym_EventScript_GiveTM19::
# 25 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis
	checkitemspace ITEM_TM19
# 0 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_Gym_EventScript_GiveTM19_2
# 30 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	giveitem_msg CeladonCity_Gym_Text_ReceivedTM19FromErika, ITEM_TM19
# 31 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM19_FROM_ERIKA
# 32 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_ExplainTM19
	release_end

CeladonCity_Gym_EventScript_GiveTM19_2:
# 27 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_ShouldMakeRoomForThis
	release_end


CeladonCity_Gym_EventScript_Kay::
# 37 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_KAY, CeladonCity_Gym_Text_KayIntro, CeladonCity_Gym_Text_KayDefeat
# 38 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_KayPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_Gym_EventScript_Lisa::
# 43 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_LISA, CeladonCity_Gym_Text_LisaIntro, CeladonCity_Gym_Text_LisaDefeat
# 44 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 2
# 45 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_Gym_EventScript_Tina::
# 50 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_TINA, CeladonCity_Gym_Text_TinaIntro, CeladonCity_Gym_Text_TinaDefeat
# 51 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_TinaPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_Gym_EventScript_Bridget::
# 56 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_BRIDGET, CeladonCity_Gym_Text_BridgetIntro, CeladonCity_Gym_Text_BridgetDefeat
# 57 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_Gym_EventScript_Tamia::
# 62 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_TAMIA, CeladonCity_Gym_Text_TamiaIntro, CeladonCity_Gym_Text_TamiaDefeat
# 63 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 3
# 64 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_TamiaPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_Gym_EventScript_Lori::
# 69 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_LORI, CeladonCity_Gym_Text_LoriIntro, CeladonCity_Gym_Text_LoriDefeat
# 70 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_LoriPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_Gym_EventScript_Mary::
# 75 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_MARY, CeladonCity_Gym_Text_MaryIntro, CeladonCity_Gym_Text_MaryDefeat
# 76 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
	end


CeladonCity_Gym_EventScript_GymStatue::
# 81 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	lockall
# 82 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, CeladonCity_Gym_EventScript_GymStatue_2
# 85 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatue
CeladonCity_Gym_EventScript_GymStatue_1:
# 87 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	releaseall
	end

CeladonCity_Gym_EventScript_GymStatue_2:
# 83 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatuePlayerWon
	goto CeladonCity_Gym_EventScript_GymStatue_1


CeladonCity_Gym_Text_ErikaIntro::
# 91 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Hello…\n"
	.string "Lovely weather, isn't it?\l"
	.string "It's so pleasant…\p"
	.string "…Oh, dear…\n"
	.string "I must have dozed off. Welcome.\p"
	.string "My name is ERIKA.\n"
	.string "I am the LEADER of CELADON GYM.\p"
	.string "I am a student of the art of\n"
	.string "flower arranging.\p"
	.string "My POKéMON are solely of the\n"
	.string "GRASS type.\p"
	.string "…Oh, I'm sorry, I had no idea that\n"
	.string "you wished to challenge me.\p"
	.string "Very well, but I shall not lose.{PLAY_BGM MUS_RG_ENCOUNTER_GYM_LEADER}$"

CeladonCity_Gym_Text_ErikaDefeat::
# 114 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "I concede defeat.\l"
	.string "You are remarkably strong.\p"
	.string "I must confer on you the\n"
	.string "RAINBOWBADGE.$"

CeladonCity_Gym_Text_ErikaPostBattle::
# 123 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You are cataloging POKéMON?\n"
	.string "I must say I'm impressed.\p"
	.string "I would never collect POKéMON if\n"
	.string "they were unattractive.$"

CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis::
# 131 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "The RAINBOWBADGE will make\n"
	.string "POKéMON up to Lv. 50 obey.\p"
	.string "It also allows POKéMON to use\n"
	.string "STRENGTH in and out of battle.\p"
	.string "Please also take this with you.$"

CeladonCity_Gym_Text_ReceivedTM19FromErika::
# 141 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM19\n"
	.string "from ERIKA.$"

CeladonCity_Gym_Text_ExplainTM19::
# 146 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "TM19 contains GIGA DRAIN.\p"
	.string "Half the damage it inflicts is\n"
	.string "drained to heal your POKéMON.\p"
	.string "Wouldn't you agree that it's a\n"
	.string "wonderful move?$"

CeladonCity_Gym_Text_ShouldMakeRoomForThis::
# 156 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You should make room for this.$"

CeladonCity_Gym_Text_KayIntro::
# 160 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I should tell you about this GYM.\p"
	.string "Only real ladies are allowed in\n"
	.string "here!$"

CeladonCity_Gym_Text_KayDefeat::
# 167 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You're too rough!$"

CeladonCity_Gym_Text_KayPostBattle::
# 171 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Bleaah!\n"
	.string "I hope ERIKA wipes you out!$"

CeladonCity_Gym_Text_BridgetIntro::
# 176 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh, welcome.\n"
	.string "I was getting bored.$"

CeladonCity_Gym_Text_BridgetDefeat::
# 181 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "My makeup!$"

CeladonCity_Gym_Text_BridgetPostBattle::
# 185 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "GRASS-type POKéMON are tough\n"
	.string "against the WATER type.\p"
	.string "They also have an edge on ROCK-\n"
	.string "and GROUND-type POKéMON.$"

CeladonCity_Gym_Text_TinaIntro::
# 193 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "…Weren't you peeking in here\n"
	.string "earlier?$"

CeladonCity_Gym_Text_TinaDefeat::
# 198 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You're an eye-opener!$"

CeladonCity_Gym_Text_TinaPostBattle::
# 202 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh, you were looking at ERIKA…\n"
	.string "You weren't looking at me…$"

CeladonCity_Gym_Text_TamiaIntro::
# 207 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Look, look!\n"
	.string "See my POKéMON!\p"
	.string "I like the GRASS type.\n"
	.string "I like how they're easy to raise.$"

CeladonCity_Gym_Text_TamiaDefeat::
# 215 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "No!$"

CeladonCity_Gym_Text_TamiaPostBattle::
# 219 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "We only use GRASS-type POKéMON at\n"
	.string "our GYM.\p"
	.string "Why? We also use them for making\n"
	.string "flower arrangements!$"

CeladonCity_Gym_Text_LisaIntro::
# 227 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh, hey!\p"
	.string "We don't like BUG- or FIRE-type\n"
	.string "POKéMON in here!$"

CeladonCity_Gym_Text_LisaDefeat::
# 234 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "You!$"

CeladonCity_Gym_Text_LisaPostBattle::
# 239 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Our LEADER ERIKA might be quiet,\n"
	.string "but she's famous around here.$"

CeladonCity_Gym_Text_LoriIntro::
# 244 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Pleased to meet you.\n"
	.string "My hobby is POKéMON training.$"

CeladonCity_Gym_Text_LoriDefeat::
# 249 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "Splendid!$"

CeladonCity_Gym_Text_LoriPostBattle::
# 254 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I have a blind date coming up.\n"
	.string "I have to learn to be polite,\l"
	.string "especially if I have to battle.$"

CeladonCity_Gym_Text_MaryIntro::
# 260 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Welcome to CELADON GYM!\p"
	.string "You'd better not underestimate\n"
	.string "the nice ladies here.$"

CeladonCity_Gym_Text_MaryDefeat::
# 267 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "Beaten!$"

CeladonCity_Gym_Text_MaryPostBattle::
# 272 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I didn't bring my best POKéMON.\n"
	.string "Wait until next time!$"

CeladonCity_Gym_Text_GymStatue::
# 277 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "CELADON POKéMON GYM\n"
	.string "LEADER: ERIKA\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

CeladonCity_Gym_Text_GymStatuePlayerWon::
# 285 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "CELADON POKéMON GYM\n"
	.string "LEADER: ERIKA\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"
