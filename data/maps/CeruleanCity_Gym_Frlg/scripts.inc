CeruleanCity_Gym_Frlg_MapScripts::
	.byte 0


CeruleanCity_Gym_EventScript_Misty::
# 4 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 5 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MISTY, CeruleanCity_Gym_Text_MistyIntro, CeruleanCity_Gym_Text_MistyDefeat, CeruleanCity_Gym_EventScript_MistyDefeated, NO_MUSIC
# 6 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM03_FROM_MISTY, CeruleanCity_Gym_EventScript_Misty_2
CeruleanCity_Gym_EventScript_Misty_1:
# 9 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
	release_end

CeruleanCity_Gym_EventScript_Misty_2:
# 7 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GiveTM03
	goto CeruleanCity_Gym_EventScript_Misty_1


CeruleanCity_Gym_EventScript_MistyDefeated::
# 14 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, 1
# 15 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_MISTY
# 16 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE02_GET
# 17 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CERULEAN_CITY
# 18 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 2
# 19 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GiveTM03
	end


CeruleanCity_Gym_EventScript_GiveTM03::
# 24 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainCascadeBadge
	checkitemspace ITEM_TM03
# 0 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeruleanCity_Gym_EventScript_GiveTM03_2
# 29 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	giveitem_msg CeruleanCity_Gym_Text_ReceivedTM03FromMisty, ITEM_TM03
# 30 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM03_FROM_MISTY
# 31 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
	release_end

CeruleanCity_Gym_EventScript_GiveTM03_2:
# 26 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_BetterMakeRoomForThis
	release_end


CeruleanCity_Gym_EventScript_Diana::
# 36 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_DIANA, CeruleanCity_Gym_Text_DianaIntro, CeruleanCity_Gym_Text_DianaDefeat
# 37 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
	end


CeruleanCity_Gym_EventScript_Luis::
# 42 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_LUIS, CeruleanCity_Gym_Text_LuisIntro, CeruleanCity_Gym_Text_LuisDefeat
# 43 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, 2
# 44 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
	end


CeruleanCity_Gym_EventScript_GymGuy::
# 49 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	lock_faceplayer
# 50 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_MISTY, CeruleanCity_Gym_EventScript_GymGuy_2
# 54 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymGuyAdvice
	release_end

CeruleanCity_Gym_EventScript_GymGuy_2:
# 51 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_WeMakePrettyGoodTeam
	release_end


CeruleanCity_Gym_EventScript_GymStatue::
# 59 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	lockall
# 60 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeruleanCity_Gym_EventScript_GymStatue_2
# 63 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatue
CeruleanCity_Gym_EventScript_GymStatue_1:
# 65 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	releaseall
	end

CeruleanCity_Gym_EventScript_GymStatue_2:
# 61 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatuePlayerWon
	goto CeruleanCity_Gym_EventScript_GymStatue_1


CeruleanCity_Gym_Text_MistyIntro::
# 69 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Hi, you're a new face!\p"
	.string "Only those TRAINERS who have a\n"
	.string "policy about POKéMON can turn pro.\p"
	.string "What is your approach when you\n"
	.string "catch and train POKéMON?\p"
	.string "My policy is an all-out offensive\n"
	.string "with WATER-type POKéMON!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

CeruleanCity_Gym_Text_ExplainTM03::
# 82 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "TM03 teaches WATER PULSE.\p"
	.string "Use it on an aquatic POKéMON!$"

CeruleanCity_Gym_Text_ExplainCascadeBadge::
# 88 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "The CASCADEBADGE makes all\n"
	.string "POKéMON up to Lv. 30 obey.\p"
	.string "That includes even outsiders you\n"
	.string "got in trades.\p"
	.string "There's more. You can now use CUT\n"
	.string "anytime, even out of battle.\p"
	.string "You can CUT down small trees to\n"
	.string "open new pathways.\p"
	.string "You can also have my favorite TM.$"

CeruleanCity_Gym_Text_ReceivedTM03FromMisty::
# 104 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM03\n"
	.string "from MISTY.$"

CeruleanCity_Gym_Text_BetterMakeRoomForThis::
# 109 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You better make room for this!$"

CeruleanCity_Gym_Text_MistyDefeat::
# 113 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Wow!\n"
	.string "You're too much!\p"
	.string "All right!\p"
	.string "You can have the CASCADEBADGE to\n"
	.string "show you beat me.$"

CeruleanCity_Gym_Text_DianaIntro::
# 123 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "What? You?\n"
	.string "I'm more than good enough for you!\p"
	.string "MISTY won't have to be bothered.$"

CeruleanCity_Gym_Text_DianaDefeat::
# 130 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You overwhelmed me!$"

CeruleanCity_Gym_Text_DianaPostBattle::
# 134 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You have to face other TRAINERS\n"
	.string "to see how good you really are.$"

CeruleanCity_Gym_Text_LuisIntro::
# 139 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Splash!\p"
	.string "I'm first up!\n"
	.string "Let's do it!$"

CeruleanCity_Gym_Text_LuisDefeat::
# 146 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "That can't be!$"

CeruleanCity_Gym_Text_LuisPostBattle::
# 150 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "MISTY is a TRAINER who's going to\n"
	.string "keep improving.\p"
	.string "She won't lose to someone like you!$"

CeruleanCity_Gym_Text_GymGuyAdvice::
# 157 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
	.string "Champ in the making!\p"
	.string "Let me give you some advice!\p"
	.string "The LEADER, MISTY, is a pro who\n"
	.string "uses WATER-type POKéMON.\p"
	.string "You can drain all their water with\n"
	.string "GRASS-type POKéMON.\p"
	.string "Or, you might use ELECTRIC-type\n"
	.string "POKéMON and zap them!$"

CeruleanCity_Gym_Text_WeMakePrettyGoodTeam::
# 173 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You beat MISTY!\n"
	.string "See, what'd I tell ya?\p"
	.string "You and me, kid, we make a pretty\n"
	.string "darn-good team!$"

CeruleanCity_Gym_Text_GymStatue::
# 181 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "CERULEAN POKéMON GYM\n"
	.string "LEADER: MISTY\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

CeruleanCity_Gym_Text_GymStatuePlayerWon::
# 189 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "CERULEAN POKéMON GYM\n"
	.string "LEADER: MISTY\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"
