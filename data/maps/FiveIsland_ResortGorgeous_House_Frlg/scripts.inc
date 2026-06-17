FiveIsland_ResortGorgeous_House_Frlg_MapScripts::
	.byte 0


FiveIsland_ResortGorgeous_House_EventScript_Selphy::
# 6 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	lock_faceplayer
# 7 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, FiveIsland_ResortGorgeous_House_EventScript_Selphy_2
# 11 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	compare VAR_RESORT_GORGEOUS_REQUESTED_MON, 0xFFFF
	goto_if_eq FiveIsland_ResortGorgeous_House_EventScript_Selphy_5
# 14 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	compare VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
	goto_if_ne FiveIsland_ResortGorgeous_House_EventScript_Selphy_6
# 21 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_PleaseHearMyWish
FiveIsland_ResortGorgeous_House_EventScript_Selphy_4:
# 23 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	special SampleResortGorgeousMonAndReward
# 24 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_WishToSeeMonPlease
	release_end

FiveIsland_ResortGorgeous_House_EventScript_Selphy_2:
# 8 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck
	release_end

FiveIsland_ResortGorgeous_House_EventScript_Selphy_5:
# 12 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_OhImTiredOfWaiting
	goto FiveIsland_ResortGorgeous_House_EventScript_Selphy_4

FiveIsland_ResortGorgeous_House_EventScript_Selphy_6:
# 15 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_RESORT_GORGEOUS_REQUESTED_MON
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 0 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FiveIsland_ResortGorgeous_House_EventScript_Selphy_10
	goto FiveIsland_ResortGorgeous_House_EventScript_Selphy_4

FiveIsland_ResortGorgeous_House_EventScript_Selphy_10:
# 17 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	goto FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon
	goto FiveIsland_ResortGorgeous_House_EventScript_Selphy_4


FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon::
# 29 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	special SampleResortGorgeousMonAndReward
# 30 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_MonYouCaughtForMeThankYou
# 31 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	addobject LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
# 32 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, Common_Movement_StepDown
# 33 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 34 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 35 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerYesMyLady
# 36 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_StepFasterUp
# 37 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 38 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 39 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_SelphyGiveTokenOfAppreciation
# 40 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 41 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerIShallDoAsYouBid
# 42 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	closemessage
# 43 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	switch VAR_FACING
# 46 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	case DIR_WEST, FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_3
# 47 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	case DIR_NORTH, FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_4
# 52 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	case DIR_SOUTH, FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_5
# 56 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	case DIR_EAST, FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_6
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_1:
# 62 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 63 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER
# 64 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerPleaseAcceptThisAsHerThanks
	giveitem VAR_RESORT_GORGEOUS_REWARD
# 0 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_8
# 74 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 75 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
	release_end

FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_3:
# 46 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, Common_Movement_WalkUp
	goto FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_1

FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_4:
# 48 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_StepFasterDown
# 49 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_Movement_0
# 50 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 51 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_1

FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_5:
# 53 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_Movement_1
# 54 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 55 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_1

FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_6:
# 57 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_SELPHY, Common_Movement_StepFasterLeft
# 58 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_HOUSE_BUTLER, FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_Movement_2
# 59 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	waitmovement 0
# 60 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_1

FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_8:
# 66 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 67 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_ButlerBagAppearsToBeFull
# 68 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 69 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing
# 70 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
# 71 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	setvar VAR_RESORT_GORGEOUS_REQUESTED_MON, SPECIES_NONE
	release_end


FiveIsland_ResortGorgeous_House_EventScript_Butler::
# 81 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun, MSGBOX_NPC
	end


# 49 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_Movement_0:
# 49 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 49 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 49 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 49 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_down
# 49 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_down
# 49 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_down
# 49 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	step_faster_right
	step_end

# 53 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_Movement_1:
# 53 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 53 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 53 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	step_faster_down
	step_end

# 58 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_House_EventScript_ShowRequestedMon_Movement_2:
# 58 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 58 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 58 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_left
# 58 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	walk_down
	step_end

FiveIsland_ResortGorgeous_House_Text_PleaseHearMyWish::
# 85 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SELPHY: Oh?\n"
	.string "Do I know you from somewhere?\p"
	.string "Oh, but that doesn't matter.\p"
	.string "I am exquisitely bored.\n"
	.string "Please, hear my wish.$"

FiveIsland_ResortGorgeous_House_Text_WishToSeeMonPlease::
# 95 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "I wish to see a POKéMON.\n"
	.string "A darling {STR_VAR_1}.\p"
	.string "I want to see one right away.\n"
	.string "Please, make my wish come true.$"

FiveIsland_ResortGorgeous_House_Text_OhImTiredOfWaiting::
# 103 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SELPHY: Oh, I'm tired of this.\n"
	.string "I'm tired of waiting for you.\p"
	.string "I'll forgive you this time, but\n"
	.string "please don't fail me next time.$"

FiveIsland_ResortGorgeous_House_Text_MonYouCaughtForMeThankYou::
# 111 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SELPHY: Oh, hello, there.\p"
	.string "Oh, my gracious. That must be the\n"
	.string "{STR_VAR_1} you caught for me.\p"
	.string "Giggle…\n"
	.string "I see a resemblance to you.\p"
	.string "Thank you so kindly.\p"
	.string "… …  … …  … …\n"
	.string "Is something the matter?\p"
	.string "You may leave.\p"
	.string "… …  … …  … …\n"
	.string "Oh, fine. I understand now.\p"
	.string "SEBASTIAN!\n"
	.string "I need you here this instant!$"

FiveIsland_ResortGorgeous_House_Text_ButlerYesMyLady::
# 134 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Butler: Yes, my lady.$"

FiveIsland_ResortGorgeous_House_Text_SelphyGiveTokenOfAppreciation::
# 138 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SELPHY: See to it that this person\n"
	.string "is given a token of appreciation.$"

FiveIsland_ResortGorgeous_House_Text_ButlerIShallDoAsYouBid::
# 143 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Butler: I shall do as you bid,\n"
	.string "my lady.$"

FiveIsland_ResortGorgeous_House_Text_ButlerPleaseAcceptThisAsHerThanks::
# 148 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Butler: I sincerely thank you for\n"
	.string "pleasing Lady SELPHY.\p"
	.string "Please accept this as her thanks…$"

FiveIsland_ResortGorgeous_House_Text_ButlerBagAppearsToBeFull::
# 155 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Butler: Your BAG appears to be\n"
	.string "unfortunately full.$"

FiveIsland_ResortGorgeous_House_Text_OhHowDisappointing::
# 160 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Oh…\n"
	.string "How disappointing.$"

FiveIsland_ResortGorgeous_House_Text_SelphyWishYouBestOfLuck::
# 165 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "SELPHY: I wish you the best of\n"
	.string "luck.$"

FiveIsland_ResortGorgeous_House_Text_LadySelphySmileHasBrillianceOfSun::
# 170 "data/maps/FiveIsland_ResortGorgeous_House_Frlg/scripts.pory"
	.string "Butler: The smile of Lady SELPHY\n"
	.string "has the brilliance of the sun.\p"
	.string "Please, I beg you to bring joy\n"
	.string "to Lady SELPHY.$"
