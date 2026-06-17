PalletTown_RivalsHouse_Frlg_MapScripts::
# 4 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_RivalsHouse_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PalletTown_RivalsHouse_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
	goto_if_lt PalletTown_RivalsHouse_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 9 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setvar VAR_TEMP_1, TRUE
PalletTown_RivalsHouse_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

PalletTown_RivalsHouse_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_DAISY, MOVEMENT_TYPE_FACE_RIGHT
# 7 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setobjectxyperm LOCALID_DAISY, 5, 4
	goto PalletTown_RivalsHouse_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


PalletTown_RivalsHouse_EventScript_Daisy::
# 16 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	lock_faceplayer
# 17 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 18 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_RivalsHouse_EventScript_Daisy_2
# 21 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_TEMP_1, TRUE
	goto_if_eq PalletTown_RivalsHouse_EventScript_Daisy_3
# 24 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
	goto_if_eq PalletTown_RivalsHouse_EventScript_Daisy_4
# 27 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
	goto_if_eq PalletTown_RivalsHouse_EventScript_Daisy_5
# 44 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
	goto_if_ge PalletTown_RivalsHouse_EventScript_Daisy_6
# 48 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HiBrothersAtLab
# 49 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	closemessage
# 50 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_FaceOriginalDirection
# 51 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitmovement 0
PalletTown_RivalsHouse_EventScript_Daisy_1:
	release_end

PalletTown_RivalsHouse_EventScript_Daisy_2:
# 19 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_GroomMon
	goto PalletTown_RivalsHouse_EventScript_Daisy_1

PalletTown_RivalsHouse_EventScript_Daisy_3:
# 22 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_PleaseGiveMonsRest
	goto PalletTown_RivalsHouse_EventScript_Daisy_1

PalletTown_RivalsHouse_EventScript_Daisy_4:
# 25 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ExplainTownMap
	goto PalletTown_RivalsHouse_EventScript_Daisy_1

PalletTown_RivalsHouse_EventScript_Daisy_5:
# 28 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp
# 29 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	closemessage
	checkitemspace ITEM_TOWN_MAP
# 0 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PalletTown_RivalsHouse_EventScript_Daisy_14
# 34 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_StepFasterRight
# 35 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitmovement 0
# 36 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	removeobject LOCALID_TOWN_MAP
# 37 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 38 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	delay 15
# 39 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_FacePlayer
# 40 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitmovement 0
# 41 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	delay 12
# 42 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	giveitem_msg PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy, ITEM_TOWN_MAP, 1, MUS_RG_OBTAIN_KEY_ITEM
	goto PalletTown_RivalsHouse_EventScript_Daisy_1

PalletTown_RivalsHouse_EventScript_Daisy_6:
# 45 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HeardYouBattledRival
	goto PalletTown_RivalsHouse_EventScript_Daisy_1

PalletTown_RivalsHouse_EventScript_Daisy_14:
# 31 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontHaveSpaceForThis
	release_end


PalletTown_RivalsHouse_EventScript_GroomMon::
# 57 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MASSAGE_COOLDOWN_STEP_COUNTER, 500
	goto_if_lt PalletTown_RivalsHouse_EventScript_GroomMon_2
# 71 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LikeMeToGroomMon, MSGBOX_YESNO
# 72 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PalletTown_RivalsHouse_EventScript_GroomMon_5
PalletTown_RivalsHouse_EventScript_GroomMon_4:
# 75 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_GroomWhichOne
# 76 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	special ChoosePartyMon
# 77 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	lock_faceplayer
# 78 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge PalletTown_RivalsHouse_EventScript_GroomMon_17
PalletTown_RivalsHouse_EventScript_GroomMon_16:
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 0 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq PalletTown_RivalsHouse_EventScript_GroomMon_20
# 85 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LookingNiceInNoTime
# 86 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	closemessage
# 87 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 88 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	playfanfare MUS_HEAL
# 89 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitfanfare
# 90 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	special DaisyMassageServices
# 91 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 92 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	special BufferMonNickname
# 93 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ThereYouGoAllDone
	release_end

PalletTown_RivalsHouse_EventScript_GroomMon_2:
# 58 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_MayISeeFirstMon
# 59 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 60 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	switch VAR_RESULT
# 61 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 0, PalletTown_RivalsHouse_EventScript_GroomMon_9
# 62 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 1, PalletTown_RivalsHouse_EventScript_GroomMon_10
# 63 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 2, PalletTown_RivalsHouse_EventScript_GroomMon_11
# 64 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 3, PalletTown_RivalsHouse_EventScript_GroomMon_12
# 65 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 4, PalletTown_RivalsHouse_EventScript_GroomMon_13
# 66 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 5, PalletTown_RivalsHouse_EventScript_GroomMon_14
# 67 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 6, PalletTown_RivalsHouse_EventScript_GroomMon_15
PalletTown_RivalsHouse_EventScript_GroomMon_7:
	release_end

PalletTown_RivalsHouse_EventScript_GroomMon_5:
# 73 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_DeclineGrooming
	goto PalletTown_RivalsHouse_EventScript_GroomMon_4

PalletTown_RivalsHouse_EventScript_GroomMon_9:
# 61 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch
	goto PalletTown_RivalsHouse_EventScript_GroomMon_7

PalletTown_RivalsHouse_EventScript_GroomMon_10:
# 62 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou
	goto PalletTown_RivalsHouse_EventScript_GroomMon_7

PalletTown_RivalsHouse_EventScript_GroomMon_11:
# 63 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet
	goto PalletTown_RivalsHouse_EventScript_GroomMon_7

PalletTown_RivalsHouse_EventScript_GroomMon_12:
# 64 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsWarmingUpToYou
	goto PalletTown_RivalsHouse_EventScript_GroomMon_7

PalletTown_RivalsHouse_EventScript_GroomMon_13:
# 65 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsQuiteFriendly
	goto PalletTown_RivalsHouse_EventScript_GroomMon_7

PalletTown_RivalsHouse_EventScript_GroomMon_14:
# 66 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItLooksVeryHappy
	goto PalletTown_RivalsHouse_EventScript_GroomMon_7

PalletTown_RivalsHouse_EventScript_GroomMon_15:
# 67 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CouldntLoveYouMore
	goto PalletTown_RivalsHouse_EventScript_GroomMon_7

PalletTown_RivalsHouse_EventScript_GroomMon_17:
# 79 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_DeclineGrooming
	goto PalletTown_RivalsHouse_EventScript_GroomMon_16

PalletTown_RivalsHouse_EventScript_GroomMon_20:
# 82 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CantGroomAnEgg
	release_end


PalletTown_RivalsHouse_EventScript_DeclineGrooming::
# 98 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontNeedAnyGrooming
	release_end


PalletTown_RivalsHouse_EventScript_TownMap::
# 103 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsBigMapOfKanto, MSGBOX_NPC
	end


PalletTown_RivalsHouse_EventScript_Bookshelf::
# 108 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks, MSGBOX_SIGN
	end


PalletTown_RivalsHouse_EventScript_Picture::
# 113 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy, MSGBOX_SIGN
	end


# 200 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 201 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ThereYouGoAllDone::
# 202 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
#ifdef BUGFIX @ The localizers missed what should be a textcolor change in the localizations.
# 203 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{COLOR DARK_GRAY}{STR_VAR_1} looks dreamily content…\p"
# 204 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{COLOR RED}DAISY: There you go! All done.\n"
# 205 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
#else @ In the JP games, gender-based text used a different font instead of different colors.
# 206 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{FONT_NORMAL}{STR_VAR_1} looks dreamily content…\p"
# 207 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{FONT_FEMALE}DAISY: There you go! All done.\n"
# 208 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
#endif
# 209 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "See? Doesn't it look nice?\p"
# 210 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Giggle…\n"
# 211 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's such a cute POKéMON.$"

PalletTown_RivalsHouse_Text_HiBrothersAtLab::
# 117 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Hi, {PLAYER}!\p"
	.string "My brother, {RIVAL}, is out at\n"
	.string "Grandpa's LAB.$"

PalletTown_RivalsHouse_Text_HeardYouBattledRival::
# 124 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: {PLAYER}, I heard you had\n"
	.string "a battle against {RIVAL}.\p"
	.string "I wish I'd seen that!$"

PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp::
# 131 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Grandpa asked you to run an\n"
	.string "errand?\p"
	.string "Gee, that's lazy of him.\n"
	.string "Here, this will help you.$"

PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy::
# 139 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{PLAYER} received a TOWN MAP\n"
	.string "from DAISY.$"

PalletTown_RivalsHouse_Text_DontHaveSpaceForThis::
# 144 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "You don't have space for this in\n"
	.string "your BAG.$"

PalletTown_RivalsHouse_Text_ExplainTownMap::
# 149 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "You can use the TOWN MAP to find\n"
	.string "out where you are, or check the\l"
	.string "names of places.$"

PalletTown_RivalsHouse_Text_PleaseGiveMonsRest::
# 155 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Just like people, POKéMON\n"
	.string "are living things.\p"
	.string "When they get tired, please give\n"
	.string "them a rest.$"

PalletTown_RivalsHouse_Text_ItsBigMapOfKanto::
# 163 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's a big map of the KANTO region.\n"
	.string "Now this would be useful!$"

PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks::
# 168 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "The shelves are crammed full of\n"
	.string "books on POKéMON.$"

PalletTown_RivalsHouse_Text_LikeMeToGroomMon::
# 173 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Hi, {PLAYER}!\n"
	.string "Good timing.\p"
	.string "I'm about to have some tea.\n"
	.string "Would you like to join me?\p"
	.string "Oh, but look.\n"
	.string "Your POKéMON are a little dirty.\p"
	.string "Would you like me to groom one?$"

PalletTown_RivalsHouse_Text_DontNeedAnyGrooming::
# 186 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "You don't need any grooming done?\n"
	.string "Okay, we'll just have tea.$"

PalletTown_RivalsHouse_Text_GroomWhichOne::
# 191 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Which one should I groom?$"

PalletTown_RivalsHouse_Text_LookingNiceInNoTime::
# 195 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Okay, I'll get it looking\n"
	.string "nice in no time.$"

PalletTown_RivalsHouse_Text_CantGroomAnEgg::
# 214 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Oh, sorry. I honestly can't\n"
	.string "groom an EGG.$"

PalletTown_RivalsHouse_Text_MayISeeFirstMon::
# 219 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Your POKéMON grow to love\n"
	.string "you if you raise them with love.\p"
	.string "For example, {PLAYER}, may I see\n"
	.string "your first POKéMON?$"

PalletTown_RivalsHouse_Text_CouldntLoveYouMore::
# 227 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It couldn't possibly love you\n"
	.string "any more than it does now.\p"
	.string "Your POKéMON is happy beyond\n"
	.string "words.$"

PalletTown_RivalsHouse_Text_ItLooksVeryHappy::
# 235 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It looks very happy.\p"
	.string "I wish {RIVAL} could see this and\n"
	.string "learn something from it.$"

PalletTown_RivalsHouse_Text_ItsQuiteFriendly::
# 242 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's quite friendly with you.\n"
	.string "Keep being good to it!$"

PalletTown_RivalsHouse_Text_ItsWarmingUpToYou::
# 247 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's warming up to you.\n"
	.string "Trust must be growing between you.$"

PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet::
# 252 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's not quite familiar with you\n"
	.string "yet.\p"
	.string "POKéMON are all quite wary when\n"
	.string "you first get them.$"

PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou::
# 260 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{PLAYER}, I don't like the way it\n"
	.string "glares at you.\p"
	.string "Could you try being a little nicer\n"
	.string "to it?$"

PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch::
# 268 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "…Um, it's not easy for me to say\n"
	.string "this, but…\p"
	.string "Is there some reason why your\n"
	.string "POKéMON would hate you so much?$"

PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy::
# 276 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "“The lovely and sweet\n"
	.string "CLEFAIRY”$"
