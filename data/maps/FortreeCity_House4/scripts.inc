FortreeCity_House4_MapScripts::
	.byte 0


FortreeCity_House4_EventScript_Woman::
# 4 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_BringsWorldCloserTogether, MSGBOX_NPC
	end


FortreeCity_House4_EventScript_Boy::
# 9 "data/maps/FortreeCity_House4/scripts.pory"
	lockall
# 10 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_MENTAL_HERB, FortreeCity_House4_EventScript_Boy_2
# 10 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_WINGULL_DELIVERED_MAIL, FortreeCity_House4_EventScript_Boy_2
# 10 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_WINGULL_SENT_ON_ERRAND, FortreeCity_House4_EventScript_Boy_2
# 27 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_GoBirdPokemon, MSGBOX_DEFAULT
# 28 "data/maps/FortreeCity_House4/scripts.pory"
	closemessage
# 29 "data/maps/FortreeCity_House4/scripts.pory"
	setflag FLAG_WINGULL_SENT_ON_ERRAND
# 30 "data/maps/FortreeCity_House4/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL
# 31 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement LOCALID_FORTREE_HOUSE_WINGULL, FortreeCity_House4_EventScript_Boy_Movement_0
# 32 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 33 "data/maps/FortreeCity_House4/scripts.pory"
	removeobject LOCALID_FORTREE_HOUSE_WINGULL
FortreeCity_House4_EventScript_Boy_1:
# 35 "data/maps/FortreeCity_House4/scripts.pory"
	releaseall
	end

FortreeCity_House4_EventScript_Boy_2:
# 11 "data/maps/FortreeCity_House4/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 12 "data/maps/FortreeCity_House4/scripts.pory"
	waitmovement 0
# 13 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_RECEIVED_MENTAL_HERB, FortreeCity_House4_EventScript_Boy_9
# 16 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_WINGULL_DELIVERED_MAIL, FortreeCity_House4_EventScript_Boy_10
# 23 "data/maps/FortreeCity_House4/scripts.pory"
	goto_if_set FLAG_WINGULL_SENT_ON_ERRAND, FortreeCity_House4_EventScript_Boy_11
	goto FortreeCity_House4_EventScript_Boy_1

FortreeCity_House4_EventScript_Boy_9:
# 14 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_FriendsFarAwayThanksToWingull, MSGBOX_DEFAULT
	goto FortreeCity_House4_EventScript_Boy_1

FortreeCity_House4_EventScript_Boy_10:
# 17 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb, MSGBOX_DEFAULT
	giveitem ITEM_MENTAL_HERB
# 0 "data/maps/FortreeCity_House4/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_House4_EventScript_Boy_16
FortreeCity_House4_EventScript_Boy_15:
# 21 "data/maps/FortreeCity_House4/scripts.pory"
	setflag FLAG_RECEIVED_MENTAL_HERB
	goto FortreeCity_House4_EventScript_Boy_1

FortreeCity_House4_EventScript_Boy_11:
# 24 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_AskedWingullToRunErrand, MSGBOX_DEFAULT
	goto FortreeCity_House4_EventScript_Boy_1

FortreeCity_House4_EventScript_Boy_16:
# 19 "data/maps/FortreeCity_House4/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto FortreeCity_House4_EventScript_Boy_15


FortreeCity_House4_EventScript_Wingull::
# 40 "data/maps/FortreeCity_House4/scripts.pory"
	lock_faceplayer
# 41 "data/maps/FortreeCity_House4/scripts.pory"
	waitse
# 42 "data/maps/FortreeCity_House4/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 43 "data/maps/FortreeCity_House4/scripts.pory"
	msgbox FortreeCity_House4_Text_Wingull, MSGBOX_DEFAULT
# 44 "data/maps/FortreeCity_House4/scripts.pory"
	waitmoncry
	release_end


# 31 "data/maps/FortreeCity_House4/scripts.pory"
FortreeCity_House4_EventScript_Boy_Movement_0:
# 31 "data/maps/FortreeCity_House4/scripts.pory"
	run_down
# 31 "data/maps/FortreeCity_House4/scripts.pory"
	run_down
# 31 "data/maps/FortreeCity_House4/scripts.pory"
	run_right
# 31 "data/maps/FortreeCity_House4/scripts.pory"
	step_faster_down
# 31 "data/maps/FortreeCity_House4/scripts.pory"
	delay_8
	step_end

FortreeCity_House4_Text_BringsWorldCloserTogether::
# 48 "data/maps/FortreeCity_House4/scripts.pory"
	.string "By being together with POKéMON,\n"
	.string "people make more and more friends.\p"
	.string "And that brings the world closer\n"
	.string "together. I think it's wonderful!$"

FortreeCity_House4_Text_GoBirdPokemon::
# 56 "data/maps/FortreeCity_House4/scripts.pory"
	.string "There!\n"
	.string "Go, BIRD POKéMON!$"

FortreeCity_House4_Text_AskedWingullToRunErrand::
# 61 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Heheh, I asked my WINGULL to run\n"
	.string "an errand for me.$"

FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb::
# 66 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Good!\n"
	.string "Welcome back, WINGULL!\p"
	.string "Huh? What is this?\n"
	.string "What is it holding?\p"
	.string "A MENTAL HERB?\n"
	.string "It must have picked it up somewhere.\p"
	.string "But I'm not a TRAINER, so you can\n"
	.string "have it.$"

FortreeCity_House4_Text_FriendsFarAwayThanksToWingull::
# 80 "data/maps/FortreeCity_House4/scripts.pory"
	.string "Thanks to my WINGULL, I have friends\n"
	.string "who live far away.$"

FortreeCity_House4_Text_Wingull::
# 85 "data/maps/FortreeCity_House4/scripts.pory"
	.string "WINGULL: Pihyoh!$"
