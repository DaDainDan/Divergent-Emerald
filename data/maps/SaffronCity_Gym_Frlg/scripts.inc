SaffronCity_Gym_Frlg_MapScripts::
	.byte 0


SaffronCity_Gym_EventScript_Sabrina::
# 4 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 5 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_SABRINA, SaffronCity_Gym_Text_SabrinaIntro, SaffronCity_Gym_Text_SabrinaDefeat, SaffronCity_Gym_EventScript_DefeatedSabrina, NO_MUSIC
# 6 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM04_FROM_SABRINA, SaffronCity_Gym_EventScript_Sabrina_2
SaffronCity_Gym_EventScript_Sabrina_1:
# 9 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainTM04
	release_end

SaffronCity_Gym_EventScript_Sabrina_2:
# 7 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto SaffronCity_Gym_EventScript_GiveTM04
	goto SaffronCity_Gym_EventScript_Sabrina_1


SaffronCity_Gym_EventScript_DefeatedSabrina::
# 14 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 2
# 15 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 3
# 16 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CITY_POKECENTER_SABRINA_JOURNALS
# 17 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_SABRINA
# 18 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE06_GET
# 19 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 6
# 20 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto SaffronCity_Gym_EventScript_GiveTM04
	end


SaffronCity_Gym_EventScript_GiveTM04::
# 25 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainMarshBadgeTakeThis
	checkitemspace ITEM_TM04
# 0 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_Gym_EventScript_GiveTM04_2
# 30 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	giveitem_msg SaffronCity_Gym_Text_ReceivedTM04FromSabrina, ITEM_TM04
# 31 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM04_FROM_SABRINA
# 32 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_SabrinaPostBattle
	release_end

SaffronCity_Gym_EventScript_GiveTM04_2:
# 27 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_BagFullOfOtherItems
	release_end


SaffronCity_Gym_EventScript_Johan::
# 37 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_JOHAN, SaffronCity_Gym_Text_JohanIntro, SaffronCity_Gym_Text_JohanDefeat
# 38 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_JohanPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Gym_EventScript_Tyron::
# 43 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_TYRON, SaffronCity_Gym_Text_TyronIntro, SaffronCity_Gym_Text_TyronDefeat
# 44 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 5
# 45 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Gym_EventScript_Cameron::
# 50 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_CAMERON, SaffronCity_Gym_Text_CameronIntro, SaffronCity_Gym_Text_CameronDefeat
# 51 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Gym_EventScript_Preston::
# 56 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_PRESTON, SaffronCity_Gym_Text_PrestonIntro, SaffronCity_Gym_Text_PrestonDefeat
# 57 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Gym_EventScript_Amanda::
# 62 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_AMANDA, SaffronCity_Gym_Text_AmandaIntro, SaffronCity_Gym_Text_AmandaDefeat
# 63 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_AmandaPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Gym_EventScript_Stacy::
# 68 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_STACY, SaffronCity_Gym_Text_StacyIntro, SaffronCity_Gym_Text_StacyDefeat
# 69 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_StacyPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Gym_EventScript_Tasha::
# 74 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_TASHA, SaffronCity_Gym_Text_TashaIntro, SaffronCity_Gym_Text_TashaDefeat
# 75 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
	end


SaffronCity_Gym_EventScript_GymGuy::
# 80 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	lock_faceplayer
# 81 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, SaffronCity_Gym_EventScript_GymGuy_2
# 85 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyAdvice
	release_end

SaffronCity_Gym_EventScript_GymGuy_2:
# 82 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyPostVictory
	release_end


SaffronCity_Gym_EventScript_GymStatue::
# 90 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	lockall
# 91 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, SaffronCity_Gym_EventScript_GymStatue_2
# 94 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatue
SaffronCity_Gym_EventScript_GymStatue_1:
# 96 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	releaseall
	end

SaffronCity_Gym_EventScript_GymStatue_2:
# 92 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatuePlayerWon
	goto SaffronCity_Gym_EventScript_GymStatue_1


SaffronCity_Gym_Text_SabrinaIntro::
# 100 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I had a vision of your arrival.\p"
	.string "I have had psychic powers since\n"
	.string "I was a child.\p"
	.string "It started when a spoon I\n"
	.string "carelessly tossed, bent.\p"
	.string "I dislike battling, but if you wish,\n"
	.string "I will show you my powers!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

SaffronCity_Gym_Text_SabrinaDefeat::
# 113 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "This loss shocks me!\n"
	.string "But, a loss is a loss.\p"
	.string "I admit, I didn't work hard enough\n"
	.string "to win.\p"
	.string "Your victory has earned you the\n"
	.string "MARSHBADGE.$"

SaffronCity_Gym_Text_SabrinaPostBattle::
# 124 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Psychic power isn't something that\n"
	.string "only a few people have.\p"
	.string "Everyone has psychic power.\n"
	.string "People just don't realize it.$"

SaffronCity_Gym_Text_ExplainMarshBadgeTakeThis::
# 132 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "The MARSHBADGE makes POKéMON up\n"
	.string "to Lv. 70 obey you.\p"
	.string "Stronger POKéMON will become wild,\n"
	.string "ignoring your orders in battle.\p"
	.string "Just don't raise your POKéMON too\n"
	.string "much to avoid that problem.\p"
	.string "Wait, please take this TM with you.$"

SaffronCity_Gym_Text_ReceivedTM04FromSabrina::
# 145 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM04 from\n"
	.string "SABRINA.$"

SaffronCity_Gym_Text_ExplainTM04::
# 150 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "TM04 is CALM MIND.\p"
	.string "It makes the POKéMON concentrate\n"
	.string "to raise both SP. ATK and SP. DEF.$"

SaffronCity_Gym_Text_BagFullOfOtherItems::
# 157 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Your BAG is full of other items.$"

SaffronCity_Gym_Text_AmandaIntro::
# 161 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SABRINA is far younger than I,\n"
	.string "but she has earned my respect.$"

SaffronCity_Gym_Text_AmandaDefeat::
# 166 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Not good enough!$"

SaffronCity_Gym_Text_AmandaPostBattle::
# 170 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "In a battle of equals, the one\n"
	.string "with the stronger will wins.\p"
	.string "If you wish to beat SABRINA, focus\n"
	.string "and will yourself to victory.$"

SaffronCity_Gym_Text_JohanIntro::
# 178 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Does our unseen power scare you?$"

SaffronCity_Gym_Text_JohanDefeat::
# 182 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I never foresaw this!$"

SaffronCity_Gym_Text_JohanPostBattle::
# 186 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "PSYCHIC POKéMON fear only ghosts\n"
	.string "and bugs!$"

SaffronCity_Gym_Text_StacyIntro::
# 191 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "POKéMON take on the appearance of\n"
	.string "their TRAINERS.\p"
	.string "Your POKéMON must be tough, then!$"

SaffronCity_Gym_Text_StacyDefeat::
# 198 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I knew it!$"

SaffronCity_Gym_Text_StacyPostBattle::
# 202 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I have much to learn still…\p"
	.string "I must master PSYCHIC and teach it\n"
	.string "to my POKéMON…$"

SaffronCity_Gym_Text_TyronIntro::
# 209 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "You understand, don't you?\p"
	.string "That power alone isn't enough to\n"
	.string "win in the world of POKéMON?$"

SaffronCity_Gym_Text_TyronDefeat::
# 216 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I don't believe this!$"

SaffronCity_Gym_Text_TyronPostBattle::
# 220 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SABRINA just wiped out the KARATE\n"
	.string "MASTER next door.$"

SaffronCity_Gym_Text_TashaIntro::
# 225 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "You and I, our POKéMON shall\n"
	.string "battle!$"

SaffronCity_Gym_Text_TashaDefeat::
# 230 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I lost after all!$"

SaffronCity_Gym_Text_TashaPostBattle::
# 234 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I knew that this was going to take\n"
	.string "place.$"

SaffronCity_Gym_Text_CameronIntro::
# 239 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SABRINA is young, but she's also\n"
	.string "our highly skilled LEADER.\p"
	.string "You won't reach her easily!$"

SaffronCity_Gym_Text_CameronDefeat::
# 246 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Ow!\n"
	.string "Down and out!$"

SaffronCity_Gym_Text_CameronPostBattle::
# 251 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "There used to be two POKéMON GYMS\n"
	.string "in SAFFRON.\p"
	.string "The FIGHTING DOJO next door lost\n"
	.string "its GYM status, though.\p"
	.string "We simply creamed them when we\n"
	.string "decided to have just one GYM.$"

SaffronCity_Gym_Text_PrestonIntro::
# 262 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SAFFRON POKéMON GYM is famous for\n"
	.string "training psychics.\p"
	.string "You want to see SABRINA, don't\n"
	.string "you? I can tell!$"

SaffronCity_Gym_Text_PrestonDefeat::
# 270 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Arrrgh!$"

SaffronCity_Gym_Text_PrestonPostBattle::
# 274 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "That's right! I used telepathy to\n"
	.string "read your mind!$"

SaffronCity_Gym_Text_GymGuyAdvice::
# 279 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
	.string "Champ in the making!\p"
	.string "SABRINA's POKéMON use psychic\n"
	.string "power instead of force.\p"
	.string "FIGHTING POKéMON are especially\n"
	.string "weak against PSYCHIC POKéMON.\p"
	.string "They'll get destroyed before they\n"
	.string "can even aim a punch!$"

SaffronCity_Gym_Text_GymGuyPostVictory::
# 293 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Psychic power, huh?\p"
	.string "If I had that, I'd make a bundle\n"
	.string "at the slots!$"

SaffronCity_Gym_Text_GymStatue::
# 300 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SAFFRON POKéMON GYM\n"
	.string "LEADER: SABRINA\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

SaffronCity_Gym_Text_GymStatuePlayerWon::
# 308 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SAFFRON POKéMON GYM\n"
	.string "LEADER: SABRINA\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"
