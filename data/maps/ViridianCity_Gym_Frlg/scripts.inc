ViridianCity_Gym_Frlg_MapScripts::
	.byte 0


ViridianCity_Gym_EventScript_Giovanni::
# 4 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 5 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_GIOVANNI, ViridianCity_Gym_Text_GiovanniIntro, ViridianCity_Gym_Text_GiovanniDefeat, ViridianCity_Gym_EventScript_DefeatedGiovanni, NO_MUSIC
# 6 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM26_FROM_GIOVANNI, ViridianCity_Gym_EventScript_Giovanni_2
ViridianCity_Gym_EventScript_Giovanni_1:
# 9 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_GiovanniPostBattle
# 10 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	closemessage
# 11 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 12 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	removeobject LOCALID_VIRIDIAN_GIOVANNI
# 13 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
	release_end

ViridianCity_Gym_EventScript_Giovanni_2:
# 7 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto ViridianCity_Gym_EventScript_GiveTM26
	goto ViridianCity_Gym_EventScript_Giovanni_1


ViridianCity_Gym_EventScript_DefeatedGiovanni::
# 18 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 3
# 19 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	setflag FLAG_HIDE_MISC_KANTO_ROCKETS
# 20 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_LEADER_GIOVANNI
# 21 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE08_GET
# 22 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 3
# 23 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 8
# 24 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto ViridianCity_Gym_EventScript_GiveTM26
	end


ViridianCity_Gym_EventScript_GiveTM26::
# 29 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis
	checkitemspace ITEM_TM26
# 0 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ViridianCity_Gym_EventScript_GiveTM26_2
# 34 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	giveitem_msg ViridianCity_Gym_Text_ReceivedTM26FromGiovanni, ITEM_TM26
# 35 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM26_FROM_GIOVANNI
# 36 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainTM26
	release_end

ViridianCity_Gym_EventScript_GiveTM26_2:
# 31 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_YouDoNotHaveSpace
	release_end


ViridianCity_Gym_EventScript_Jason::
# 41 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_JASON, ViridianCity_Gym_Text_JasonIntro, ViridianCity_Gym_Text_JasonDefeat
# 42 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_JasonPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Cole::
# 47 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_COLE, ViridianCity_Gym_Text_ColeIntro, ViridianCity_Gym_Text_ColeDefeat
# 48 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_ColePostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Atsushi::
# 53 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_ATSUSHI, ViridianCity_Gym_Text_AtsushiIntro, ViridianCity_Gym_Text_AtsushiDefeat
# 54 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Kiyo::
# 59 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KIYO, ViridianCity_Gym_Text_KiyoIntro, ViridianCity_Gym_Text_KiyoDefeat
# 60 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Takashi::
# 65 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_TAKASHI, ViridianCity_Gym_Text_TakashiIntro, ViridianCity_Gym_Text_TakashiDefeat
# 66 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Samuel::
# 71 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_SAMUEL, ViridianCity_Gym_Text_SamuelIntro, ViridianCity_Gym_Text_SamuelDefeat
# 72 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Yuji::
# 77 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_YUJI, ViridianCity_Gym_Text_YujiIntro, ViridianCity_Gym_Text_YujiDefeat
# 78 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_Warren::
# 83 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_WARREN, ViridianCity_Gym_Text_WarrenIntro, ViridianCity_Gym_Text_WarrenDefeat
# 84 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
	end


ViridianCity_Gym_EventScript_GymGuy::
# 89 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	lock_faceplayer
# 90 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LEADER_GIOVANNI, ViridianCity_Gym_EventScript_GymGuy_2
# 95 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyAdvice
	release_end

ViridianCity_Gym_EventScript_GymGuy_2:
# 91 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 4
# 92 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyPostVictory
	release_end


ViridianCity_Gym_EventScript_GymStatue::
# 100 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	lockall
# 101 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, ViridianCity_Gym_EventScript_GymStatue_2
# 104 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatue
ViridianCity_Gym_EventScript_GymStatue_1:
# 106 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	releaseall
	end

ViridianCity_Gym_EventScript_GymStatue_2:
# 102 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatuePlayerWon
	goto ViridianCity_Gym_EventScript_GymStatue_1


ViridianCity_Gym_Text_GiovanniIntro::
# 110 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Fwahahaha!\n"
	.string "Welcome to my hideout!\p"
	.string "It shall be so until I can restore\n"
	.string "TEAM ROCKET to its former glory.\p"
	.string "But, you have found me again.\n"
	.string "So be it.\l"
	.string "This time, I'm not holding back!\p"
	.string "Once more, you shall face\n"
	.string "GIOVANNI, the greatest TRAINER!{PLAY_BGM}{MUS_RG_ENCOUNTER_ROCKET}$"

ViridianCity_Gym_Text_GiovanniDefeat::
# 125 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Ha!\n"
	.string "That was a truly intense fight.\l"
	.string "You have won!\p"
	.string "As proof, here is the EARTHBADGE!\n"
	.string "{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"

ViridianCity_Gym_Text_GiovanniPostBattle::
# 134 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Having lost in this fashion, \n"
	.string "I can't face my followers.\l"
	.string "I have betrayed their trust.\p"
	.string "As of today, TEAM ROCKET is\n"
	.string "finished forever!\p"
	.string "As for myself, I shall dedicate\n"
	.string "my life to training again.\p"
	.string "Let us meet again someday!\n"
	.string "Farewell!$"

ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis::
# 149 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "The EARTHBADGE makes POKéMON of\n"
	.string "any level obey without question.\p"
	.string "It is evidence of your mastery as\n"
	.string "a POKéMON TRAINER.\p"
	.string "With it, you can challenge the\n"
	.string "POKéMON LEAGUE.\p"
	.string "Also, take this TM.\p"
	.string "Consider it a gift for your POKéMON\n"
	.string "LEAGUE challenge.$"

ViridianCity_Gym_Text_ReceivedTM26FromGiovanni::
# 165 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM26\n"
	.string "from GIOVANNI.$"

ViridianCity_Gym_Text_ExplainTM26::
# 170 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "TM26 contains EARTHQUAKE.\p"
	.string "It is a powerful attack that causes\n"
	.string "a massive tremor.\p"
	.string "I made it when I ran the GYM here,\n"
	.string "far too long ago… $"

ViridianCity_Gym_Text_YouDoNotHaveSpace::
# 180 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You do not have space for this!$"

ViridianCity_Gym_Text_YujiIntro::
# 184 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Heh!\n"
	.string "You must be running out of steam\l"
	.string "by now!$"

ViridianCity_Gym_Text_YujiDefeat::
# 190 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I ran out of gas!$"

ViridianCity_Gym_Text_YujiPostBattle::
# 194 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You'll need power to keep up with\n"
	.string "our GYM LEADER.$"

ViridianCity_Gym_Text_AtsushiIntro::
# 199 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Rrrroar!\n"
	.string "I'm working myself into a rage!$"

ViridianCity_Gym_Text_AtsushiDefeat::
# 204 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Wargh!$"

ViridianCity_Gym_Text_AtsushiPostBattle::
# 208 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I'm still not worthy!$"

ViridianCity_Gym_Text_JasonIntro::
# 212 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "POKéMON and I, we make wonderful\n"
	.string "music together!$"

ViridianCity_Gym_Text_JasonDefeat::
# 217 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You are in perfect harmony!$"

ViridianCity_Gym_Text_JasonPostBattle::
# 221 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Do you know the identity of our\n"
	.string "GYM LEADER?$"

ViridianCity_Gym_Text_KiyoIntro::
# 226 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Karate is the ultimate form of\n"
	.string "martial arts!$"

ViridianCity_Gym_Text_KiyoDefeat::
# 231 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Aiyah!$"

ViridianCity_Gym_Text_KiyoPostBattle::
# 235 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "If my POKéMON were as good at\n"
	.string "karate as I…$"

ViridianCity_Gym_Text_WarrenIntro::
# 240 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "The truly talented win with style.$"

ViridianCity_Gym_Text_WarrenDefeat::
# 244 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I lost my grip!$"

ViridianCity_Gym_Text_WarrenPostBattle::
# 248 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "The LEADER will scold me for\n"
	.string "losing this way…$"

ViridianCity_Gym_Text_TakashiIntro::
# 253 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I'm the KARATE KING!\n"
	.string "Your fate rests with me!$"

ViridianCity_Gym_Text_TakashiDefeat::
# 258 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Ayah!$"

ViridianCity_Gym_Text_TakashiPostBattle::
# 262 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "The POKéMON LEAGUE?\n"
	.string "You? Don't get cocky!$"

ViridianCity_Gym_Text_ColeIntro::
# 267 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Your POKéMON will cower at the\n"
	.string "crack of my whip!$"

ViridianCity_Gym_Text_ColeDefeat::
# 272 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Yowch!\n"
	.string "Whiplash!$"

ViridianCity_Gym_Text_ColePostBattle::
# 277 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Wait!\n"
	.string "I was just careless!$"

ViridianCity_Gym_Text_SamuelIntro::
# 282 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "VIRIDIAN GYM was closed for a\n"
	.string "long time.\p"
	.string "But now, our LEADER is back!$"

ViridianCity_Gym_Text_SamuelDefeat::
# 289 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I was beaten?$"

ViridianCity_Gym_Text_SamuelPostBattle::
# 293 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You can go on to the POKéMON\n"
	.string "LEAGUE only by defeating our GYM\l"
	.string "LEADER!$"

ViridianCity_Gym_Text_GymGuyAdvice::
# 299 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
	.string "Champ in the making!\p"
	.string "Even I don't know the VIRIDIAN\n"
	.string "LEADER's identity.\p"
	.string "But one thing's certain.\n"
	.string "This will be the toughest of all\l"
	.string "the GYM LEADERS.\p"
	.string "Also, I heard that the TRAINERS\n"
	.string "here like GROUND-type POKéMON.$"

ViridianCity_Gym_Text_GymGuyPostVictory::
# 314 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Blow me away! GIOVANNI was the\n"
	.string "GYM LEADER of VIRIDIAN?$"

ViridianCity_Gym_Text_GymStatue::
# 319 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "VIRIDIAN POKéMON GYM\n"
	.string "LEADER: ?\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

ViridianCity_Gym_Text_GymStatuePlayerWon::
# 327 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "VIRIDIAN POKéMON GYM\n"
	.string "LEADER: GIOVANNI\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"
