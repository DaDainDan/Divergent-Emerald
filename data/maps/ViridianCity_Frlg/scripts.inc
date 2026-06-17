ViridianCity_Frlg_MapScripts::
# 2 "data/maps/ViridianCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ViridianCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_CITY
# 4 "data/maps/ViridianCity_Frlg/scripts.pory"
	switch VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN
# 5 "data/maps/ViridianCity_Frlg/scripts.pory"
	case 0, ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 9 "data/maps/ViridianCity_Frlg/scripts.pory"
	case 1, ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 13 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 0
	goto_if_eq ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
	end

ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 6 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_LYING_DOWN
# 7 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 11
# 8 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_FACE_DOWN
	goto ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 10 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
# 11 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 8
# 12 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_LOOK_AROUND
	goto ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 16 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 16 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 16 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 17 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 17 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 17 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	goto ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 18 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
	goto ViridianCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_6


ViridianCity_EventScript_GymDoorLocked::
# 26 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 27 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 28 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 29 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 30 "data/maps/ViridianCity_Frlg/scripts.pory"
	delay 20
# 31 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked
# 32 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 33 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_EventScript_GymDoorLocked_Movement_0
# 34 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 35 "data/maps/ViridianCity_Frlg/scripts.pory"
	releaseall
	end


ViridianCity_EventScript_CitySign::
# 40 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_CitySign, MSGBOX_SIGN
	end


ViridianCity_EventScript_TrainerTips1::
# 45 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_CatchMonsForEasierBattles, MSGBOX_SIGN
	end


ViridianCity_EventScript_TrainerTips2::
# 50 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_MovesLimitedByPP, MSGBOX_SIGN
	end


ViridianCity_EventScript_GymSign::
# 55 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymSign, MSGBOX_SIGN
	end


ViridianCity_EventScript_GymDoor::
# 60 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked, MSGBOX_SIGN
	end


ViridianCity_EventScript_Boy::
# 65 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_CanCarryMonsAnywhere, MSGBOX_NPC
	end


ViridianCity_EventScript_OldMan::
# 71 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock_faceplayer
# 72 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
	goto_if_eq ViridianCity_EventScript_OldMan_2
# 76 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymClosedWonderWhoLeaderIs
# 77 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end

ViridianCity_EventScript_OldMan_2:
# 73 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ViridiansGymLeaderReturned
	release_end


ViridianCity_EventScript_TutorialOldMan::
# 82 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock_faceplayer
# 83 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ViridianCity_EventScript_TutorialOldMan_2
# 92 "data/maps/ViridianCity_Frlg/scripts.pory"
	switch VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN
# 93 "data/maps/ViridianCity_Frlg/scripts.pory"
	case 0, ViridianCity_EventScript_TutorialOldMan_6
# 96 "data/maps/ViridianCity_Frlg/scripts.pory"
	case 1, ViridianCity_EventScript_TutorialOldMan_7
# 97 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WeakenMonsFirstToCatch
ViridianCity_EventScript_TutorialOldMan_4:
	release_end

ViridianCity_EventScript_TutorialOldMan_2:
# 84 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_HowsTeachyTVHelping, MSGBOX_YESNO
# 85 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ViridianCity_EventScript_TutorialOldMan_10
# 89 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_MyGrandsonOnTheShow
	release_end

ViridianCity_EventScript_TutorialOldMan_6:
# 94 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 95 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
	goto ViridianCity_EventScript_TutorialOldMan_4

ViridianCity_EventScript_TutorialOldMan_7:
# 96 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
	goto ViridianCity_EventScript_TutorialOldMan_4

ViridianCity_EventScript_TutorialOldMan_10:
# 86 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_TooBusyForTeachyTV
	release_end


ViridianCity_EventScript_WatchToLearnBasics::
# 104 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
	release_end


ViridianCity_EventScript_TutorialUnused::
# 110 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 111 "data/maps/ViridianCity_Frlg/scripts.pory"
	special StartOldManTutorialBattle
# 112 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitstate
	release_end


ViridianCity_EventScript_Youngster::
# 117 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock_faceplayer
# 118 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WantToKnowAboutCaterpillarMons, MSGBOX_YESNO
# 119 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ViridianCity_EventScript_Youngster_2
# 123 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_OhOkayThen
	release_end

ViridianCity_EventScript_Youngster_2:
# 120 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ExplainCaterpieWeedle
	release_end


ViridianCity_EventScript_Woman::
# 128 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock_faceplayer
# 129 "data/maps/ViridianCity_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0
	goto_if_eq ViridianCity_EventScript_Woman_2
ViridianCity_EventScript_Woman_1:
# 133 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GoShoppingInPewterOccasionally
	release_end

ViridianCity_EventScript_Woman_2:
# 130 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GrandpaHasntHadCoffeeYet
# 131 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	goto ViridianCity_EventScript_Woman_1


ViridianCity_EventScript_DreamEaterTutor::
# 138 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto EventScript_DreamEaterTutor
	end


ViridianCity_EventScript_RoadBlocked::
# 143 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 144 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 145 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 146 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 147 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 148 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 149 "data/maps/ViridianCity_Frlg/scripts.pory"
	releaseall
	end


ViridianCity_EventScript_TutorialTriggerLeft::
# 154 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 155 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 156 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_StepFasterLeft
# 157 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 158 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 159 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 160 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
	release_end


ViridianCity_EventScript_TutorialTriggerRight::
# 165 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 166 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 167 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_StepFasterRight
# 168 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 169 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 170 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 171 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
	release_end


ViridianCity_EventScript_DoTutorialBattle::
# 176 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ShowYouHowToCatchMons
# 177 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 178 "data/maps/ViridianCity_Frlg/scripts.pory"
	special StartOldManTutorialBattle
# 179 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitstate
# 180 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock_faceplayer
# 181 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 182 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 183 "data/maps/ViridianCity_Frlg/scripts.pory"
	giveitem ITEM_TEACHY_TV
# 184 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
	return


# 33 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_GymDoorLocked_Movement_0:
# 33 "data/maps/ViridianCity_Frlg/scripts.pory"
	jump_2_down
	step_end

ViridianCity_Text_CanCarryMonsAnywhere::
# 188 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Those POKé BALLS at your waist!\n"
	.string "You have POKéMON, don't you?\p"
	.string "It's great that you can carry and\n"
	.string "use POKéMON anytime, anywhere.$"

ViridianCity_Text_GymClosedWonderWhoLeaderIs::
# 196 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "This POKéMON GYM is always closed.\p"
	.string "I wonder who the LEADER is?$"

ViridianCity_Text_ViridiansGymLeaderReturned::
# 202 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN GYM's LEADER returned!$"

ViridianCity_Text_WantToKnowAboutCaterpillarMons::
# 206 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "You want to know about the two\n"
	.string "kinds of caterpillar POKéMON?$"

ViridianCity_Text_OhOkayThen::
# 211 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Oh, okay then!$"

ViridianCity_Text_ExplainCaterpieWeedle::
# 215 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "CATERPIE has no poison,\n"
	.string "but WEEDLE does.\p"
	.string "Watch that your POKéMON aren't\n"
	.string "stabbed by WEEDLE's POISON STING.$"

ViridianCity_Text_GrandpaHasntHadCoffeeYet::
# 223 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Oh, Grandpa!\n"
	.string "Don't be so mean!\p"
	.string "I'm so sorry.\n"
	.string "He hasn't had his coffee yet.$"

ViridianCity_Text_GoShoppingInPewterOccasionally::
# 231 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I go shopping in PEWTER CITY\n"
	.string "occasionally.\p"
	.string "I have to take the winding trail in\n"
	.string "VIRIDIAN FOREST when I go.$"

ViridianCity_Text_ThisIsPrivateProperty::
# 239 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I absolutely forbid you from\n"
	.string "going through here!\p"
	.string "This is private property!$"

ViridianCity_Text_ShowYouHowToCatchMons::
# 246 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
	.string "that's what I need to get going!\p"
	.string "Hm?\n"
	.string "What is that red box you have?\p"
	.string "Ah, so you're working on your\n"
	.string "POKéDEX.\p"
	.string "Then let me give you a word of\n"
	.string "advice.\p"
	.string "Whenever you catch a POKéMON,\n"
	.string "the POKéDEX automatically updates\l"
	.string "its data.\p"
	.string "…You don't know how to catch\n"
	.string "a POKéMON?\p"
	.string "I suppose I had better show you\n"
	.string "then!$"

ViridianCity_Text_ThatWasEducationalTakeThis::
# 270 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "There! Now tell me, that was\n"
	.string "educational, was it not?\p"
	.string "And here, take this, too.$"

ViridianCity_Text_WatchThatToLearnBasics::
# 277 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "If there's something you don't\n"
	.string "understand, watch that.\p"
	.string "It will teach you about the basics\n"
	.string "of being a POKéMON TRAINER.$"

ViridianCity_Text_WeakenMonsFirstToCatch::
# 285 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
	.string "that's what I need to get going!\p"
	.string "But I made it too strong.\n"
	.string "It gave me a headache…\p"
	.string "Incidentally, are you filling your\n"
	.string "POKéDEX?\p"
	.string "At first, focus on weakening the\n"
	.string "POKéMON before trying to catch it.$"

ViridianCity_Text_HowsTeachyTVHelping::
# 299 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
	.string "that's what I need to get going!\p"
	.string "But I made it too strong.\n"
	.string "It gave me a headache…\p"
	.string "Incidentally, is my old TEACHY TV\n"
	.string "helping you?$"

ViridianCity_Text_MyGrandsonOnTheShow::
# 310 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Wahaha!\n"
	.string "It's my grandson on the show!\p"
	.string "Since he's the one doing the\n"
	.string "teaching, you're bound to learn.$"

ViridianCity_Text_TooBusyForTeachyTV::
# 318 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Hm… You're too busy to not even\n"
	.string "have the time for TEACHY TV…\p"
	.string "Time is money, and neither should\n"
	.string "be ill spent…$"

ViridianCity_Text_CitySign::
# 326 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN CITY \n"
	.string "The Eternally Green Paradise$"

ViridianCity_Text_CatchMonsForEasierBattles::
# 331 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Catch POKéMON and expand your\n"
	.string "collection.\p"
	.string "The more you have, the easier it\n"
	.string "is to battle.$"

ViridianCity_Text_MovesLimitedByPP::
# 341 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "The battle moves of POKéMON are\n"
	.string "limited by their POWER POINTS, PP.\p"
	.string "To replenish PP, rest your tired\n"
	.string "POKéMON at a POKéMON CENTER.$"

ViridianCity_Text_GymSign::
# 351 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN CITY POKéMON GYM$"

ViridianCity_Text_GymDoorsAreLocked::
# 355 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN GYM's doors are locked…$"
