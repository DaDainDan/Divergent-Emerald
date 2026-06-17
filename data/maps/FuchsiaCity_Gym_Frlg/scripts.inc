FuchsiaCity_Gym_Frlg_MapScripts::
	.byte 0


FuchsiaCity_Gym_EventScript_Koga::
# 4 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_KOGA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 5 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KOGA, FuchsiaCity_Gym_Text_KogaIntro, FuchsiaCity_Gym_Text_KogaDefeat, FuchsiaCity_Gym_EventScript_DefeatedKoga, NO_MUSIC
# 6 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM06_FROM_KOGA, FuchsiaCity_Gym_EventScript_Koga_2
FuchsiaCity_Gym_EventScript_Koga_1:
# 9 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaPostBattle
	release_end

FuchsiaCity_Gym_EventScript_Koga_2:
# 7 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_GiveTM06
	goto FuchsiaCity_Gym_EventScript_Koga_1


FuchsiaCity_Gym_EventScript_DefeatedKoga::
# 14 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_KOGA, 1
# 15 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_KOGA_JOURNAL
# 16 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_KOGA
# 17 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE05_GET
# 18 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 5
# 19 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_GiveTM06
	end


FuchsiaCity_Gym_EventScript_GiveTM06::
# 24 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainSoulBadge
	checkitemspace ITEM_TM06
# 0 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FuchsiaCity_Gym_EventScript_GiveTM06_2
# 29 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	giveitem_msg FuchsiaCity_Gym_Text_ReceivedTM06FromKoga, ITEM_TM06
# 30 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM06_FROM_KOGA
# 31 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainTM06
	release_end

FuchsiaCity_Gym_EventScript_GiveTM06_2:
# 26 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_MakeSpaceForThis
	release_end


FuchsiaCity_Gym_EventScript_Phil::
# 36 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_PHIL, FuchsiaCity_Gym_Text_PhilIntro, FuchsiaCity_Gym_Text_PhilDefeat
# 37 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
	end


FuchsiaCity_Gym_EventScript_Edgar::
# 42 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_EDGAR, FuchsiaCity_Gym_Text_EdgarIntro, FuchsiaCity_Gym_Text_EdgarDefeat
# 43 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
	end


FuchsiaCity_Gym_EventScript_Kirk::
# 48 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KIRK, FuchsiaCity_Gym_Text_KirkIntro, FuchsiaCity_Gym_Text_KirkDefeat
# 49 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_KOGA, 2
# 50 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
	end


FuchsiaCity_Gym_EventScript_Shawn::
# 55 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_SHAWN, FuchsiaCity_Gym_Text_ShawnIntro, FuchsiaCity_Gym_Text_ShawnDefeat
# 56 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
	end


FuchsiaCity_Gym_EventScript_Kayden::
# 61 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KAYDEN, FuchsiaCity_Gym_Text_KaydenIntro, FuchsiaCity_Gym_Text_KaydenDefeat
# 62 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KaydenPostBattle, MSGBOX_AUTOCLOSE
	end


FuchsiaCity_Gym_EventScript_Nate::
# 67 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NATE, FuchsiaCity_Gym_Text_NateIntro, FuchsiaCity_Gym_Text_NateDefeat
# 68 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end


FuchsiaCity_Gym_EventScript_GymGuy::
# 73 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	lock_faceplayer
# 74 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, FuchsiaCity_Gym_EventScript_GymGuy_2
# 78 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyAdvice
	release_end

FuchsiaCity_Gym_EventScript_GymGuy_2:
# 75 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyPostVictory
	release_end


FuchsiaCity_Gym_EventScript_GymStatue::
# 83 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	lockall
# 84 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, FuchsiaCity_Gym_EventScript_GymStatue_2
# 87 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatue
FuchsiaCity_Gym_EventScript_GymStatue_1:
# 89 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	releaseall
	end

FuchsiaCity_Gym_EventScript_GymStatue_2:
# 85 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatuePlayerWon
	goto FuchsiaCity_Gym_EventScript_GymStatue_1


FuchsiaCity_Gym_Text_KogaIntro::
# 93 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "KOGA: Fwahahaha!\p"
	.string "A mere child like you dares to\n"
	.string "challenge me?\p"
	.string "The very idea makes me shiver\n"
	.string "with mirth!\p"
	.string "Very well, I shall show you true\n"
	.string "terror as a ninja master.\p"
	.string "Poison brings steady doom.\n"
	.string "Sleep renders foes helpless.\p"
	.string "Despair to the creeping horror of\n"
	.string "POISON-type POKéMON!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

FuchsiaCity_Gym_Text_KogaDefeat::
# 112 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Humph!\n"
	.string "You have proven your worth!\p"
	.string "Here!\n"
	.string "Take the SOULBADGE!$"

FuchsiaCity_Gym_Text_KogaPostBattle::
# 120 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "When afflicted by TOXIC, a POKéMON\n"
	.string "suffers more and more.\p"
	.string "It suffers worsening damage as the\n"
	.string "battle wears on!\p"
	.string "It will surely terrorize foes!$"

FuchsiaCity_Gym_Text_KogaExplainSoulBadge::
# 130 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Now that you have the SOULBADGE,\n"
	.string "the DEFENSE of your POKéMON rises.\p"
	.string "It also lets you SURF outside of\n"
	.string "battle.\p"
	.string "Ah!\n"
	.string "Take this, too!$"

FuchsiaCity_Gym_Text_ReceivedTM06FromKoga::
# 141 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM06\n"
	.string "from KOGA.$"

FuchsiaCity_Gym_Text_KogaExplainTM06::
# 146 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Sealed within that TM06 lies\n"
	.string "TOXIC!\p"
	.string "It is a secret technique dating\n"
	.string "back some four hundred years.$"

FuchsiaCity_Gym_Text_MakeSpaceForThis::
# 154 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Make space for this, child!$"

FuchsiaCity_Gym_Text_KaydenIntro::
# 158 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Strength isn't the key for POKéMON.\n"
	.string "Do you understand this?\p"
	.string "POKéMON is about strategy!\p"
	.string "I'll show you how strategy can\n"
	.string "beat brute strength.$"

FuchsiaCity_Gym_Text_KaydenDefeat::
# 168 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "What?\n"
	.string "Extraordinary!$"

FuchsiaCity_Gym_Text_KaydenPostBattle::
# 173 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "So, you mix brawn with brains?\n"
	.string "Good strategy!\p"
	.string "That's remarkable for a child\n"
	.string "TRAINER.$"

FuchsiaCity_Gym_Text_KirkIntro::
# 181 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I was a magician once upon a time.\p"
	.string "But I dreamt of becoming a ninja,\n"
	.string "so I joined this GYM.$"

FuchsiaCity_Gym_Text_KirkDefeat::
# 188 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I'm done for!$"

FuchsiaCity_Gym_Text_KirkPostBattle::
# 192 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Even though I've lost, I will keep\n"
	.string "training according to the teachings\l"
	.string "of KOGA, my ninja master.$"

FuchsiaCity_Gym_Text_NateIntro::
# 198 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Let's see you beat my special\n"
	.string "techniques!$"

FuchsiaCity_Gym_Text_NateDefeat::
# 203 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "You had me fooled!$"

FuchsiaCity_Gym_Text_NatePostBattle::
# 207 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I like poison and sleep techniques,\n"
	.string "as they linger after battle!$"

FuchsiaCity_Gym_Text_PhilIntro::
# 212 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Stop right there!\p"
	.string "The famed invisible walls of\n"
	.string "FUCHSIA GYM have you frustrated?$"

FuchsiaCity_Gym_Text_PhilDefeat::
# 219 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Whoa!\n"
	.string "You've got it!$"

FuchsiaCity_Gym_Text_PhilPostBattle::
# 224 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "You impressed me!\n"
	.string "Here's a hint!\p"
	.string "Look very closely for gaps in the\n"
	.string "invisible walls!$"

FuchsiaCity_Gym_Text_EdgarIntro::
# 232 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I also study the way of the ninja\n"
	.string "with Master KOGA!\p"
	.string "Ninja have a long history of using\n"
	.string "animals!$"

FuchsiaCity_Gym_Text_EdgarDefeat::
# 240 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Awoo!$"

FuchsiaCity_Gym_Text_EdgarPostBattle::
# 244 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "I still have much to learn.$"

FuchsiaCity_Gym_Text_ShawnIntro::
# 248 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Master KOGA comes from a long line\n"
	.string "of ninjas.\p"
	.string "What did you descend from?$"

FuchsiaCity_Gym_Text_ShawnDefeat::
# 255 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "You're more skilled than I'd\n"
	.string "thought!$"

FuchsiaCity_Gym_Text_ShawnPostBattle::
# 260 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Where there is light, there is\n"
	.string "shadow!\p"
	.string "Light and shadow!\n"
	.string "Which do you choose?$"

FuchsiaCity_Gym_Text_GymGuyAdvice::
# 268 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
	.string "Champ in the making!\p"
	.string "FUCHSIA GYM is a tricked-up place.\n"
	.string "It's riddled with invisible walls!\p"
	.string "KOGA might appear close, but he's\n"
	.string "blocked off.\p"
	.string "You have to find gaps in the walls\n"
	.string "to reach him.$"

FuchsiaCity_Gym_Text_GymGuyPostVictory::
# 282 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "It's amazing how ninja can terrify,\n"
	.string "even now!$"

FuchsiaCity_Gym_Text_GymStatue::
# 287 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "FUCHSIA POKéMON GYM\n"
	.string "LEADER: KOGA\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

FuchsiaCity_Gym_Text_GymStatuePlayerWon::
# 295 "data/maps/FuchsiaCity_Gym_Frlg/scripts.pory"
	.string "FUCHSIA POKéMON GYM\n"
	.string "LEADER: KOGA\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"
