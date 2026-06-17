VermilionCity_PokemonFanClub_Frlg_MapScripts::
	.byte 0


VermilionCity_PokemonFanClub_EventScript_Chairman::
# 7 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock_faceplayer
# 8 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BIKE_VOUCHER, VermilionCity_PokemonFanClub_EventScript_Chairman_2
# 12 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_DidYouComeToHearAboutMyMons, MSGBOX_YESNO
# 13 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VermilionCity_PokemonFanClub_EventScript_Chairman_5
# 24 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ComeBackToHearStory
	release_end

VermilionCity_PokemonFanClub_EventScript_Chairman_2:
# 9 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_DidntComeToSeeAboutMonsAgain
	release_end

VermilionCity_PokemonFanClub_EventScript_Chairman_5:
# 14 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ChairmansStory
	checkitemspace ITEM_BIKE_VOUCHER
# 0 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VermilionCity_PokemonFanClub_EventScript_Chairman_8
# 19 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	setflag FLAG_GOT_BIKE_VOUCHER
# 20 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	giveitem_msg VermilionCity_PokemonFanClub_Text_ReceivedBikeVoucherFromChairman, ITEM_BIKE_VOUCHER, 1, MUS_RG_OBTAIN_KEY_ITEM
# 21 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ExplainBikeVoucher
	release_end

VermilionCity_PokemonFanClub_EventScript_Chairman_8:
# 16 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_MakeRoomForThis
	release_end


VermilionCity_PokemonFanClub_EventScript_WorkerF::
# 29 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock_faceplayer
# 30 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, VermilionCity_PokemonFanClub_EventScript_WorkerF_2
# 35 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ChairmanVeryVocalAboutPokemon
	release_end

VermilionCity_PokemonFanClub_EventScript_WorkerF_2:
# 31 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, 1
# 32 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ChairmanReallyAdoresHisMons
	release_end


VermilionCity_PokemonFanClub_EventScript_Woman::
# 40 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock_faceplayer
# 41 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_3, VermilionCity_PokemonFanClub_EventScript_Woman_2
# 49 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_AdoreMySeel
# 50 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	closemessage
# 51 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_WOMAN, Common_Movement_FaceOriginalDirection
# 52 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmovement 0
# 53 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
	release_end

VermilionCity_PokemonFanClub_EventScript_Woman_2:
# 42 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_SeelFarMoreAttractive
# 43 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	closemessage
# 44 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_WOMAN, Common_Movement_FaceOriginalDirection
# 45 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmovement 0
# 46 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	clearflag FLAG_TEMP_3
	release_end


VermilionCity_PokemonFanClub_EventScript_FatMan::
# 58 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock_faceplayer
# 59 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, VermilionCity_PokemonFanClub_EventScript_FatMan_2
# 67 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_AdmirePikachusTail
# 68 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	closemessage
# 69 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_FAT_MAN, Common_Movement_FaceOriginalDirection
# 70 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmovement 0
# 71 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	setflag FLAG_TEMP_3
	release_end

VermilionCity_PokemonFanClub_EventScript_FatMan_2:
# 60 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_PikachuTwiceAsCute
# 61 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	closemessage
# 62 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_FAT_MAN, Common_Movement_FaceOriginalDirection
# 63 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmovement 0
# 64 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	clearflag FLAG_TEMP_2
	release_end


VermilionCity_PokemonFanClub_EventScript_Pikachu::
# 76 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock_faceplayer
# 77 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitse
# 78 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 79 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_Pikachu
# 80 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmoncry
	release_end


VermilionCity_PokemonFanClub_EventScript_Seel::
# 85 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock_faceplayer
# 86 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitse
# 87 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	playmoncry SPECIES_SEEL, CRY_MODE_NORMAL
# 88 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_Seel
# 89 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmoncry
	release_end


VermilionCity_PokemonFanClub_EventScript_RulesSign1::
# 94 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ListenPolitelyToOtherTrainers, MSGBOX_SIGN
	end


VermilionCity_PokemonFanClub_EventScript_RulesSign2::
# 99 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_SomeoneBragsBragBack, MSGBOX_SIGN
	end


VermilionCity_PokemonFanClub_Text_AdmirePikachusTail::
# 103 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Won't you admire my PIKACHU's\n"
	.string "adorable tail?$"

VermilionCity_PokemonFanClub_Text_PikachuTwiceAsCute::
# 108 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Humph!\p"
	.string "My PIKACHU is twice as cute as\n"
	.string "that one!$"

VermilionCity_PokemonFanClub_Text_AdoreMySeel::
# 115 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I just adore my SEEL!\n"
	.string "It's so lovable!\p"
	.string "It squeals, “Kyuuuh,” when I\n"
	.string "hug it!$"

VermilionCity_PokemonFanClub_Text_SeelFarMoreAttractive::
# 123 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Oh, dear!\p"
	.string "My SEEL is far more attractive.\n"
	.string "By double, I would say.$"

VermilionCity_PokemonFanClub_Text_Pikachu::
# 130 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "PIKACHU: Chu! Pikachu!$"

VermilionCity_PokemonFanClub_Text_Seel::
# 134 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "SEEL: Kyuoo!$"

VermilionCity_PokemonFanClub_Text_DidYouComeToHearAboutMyMons::
# 138 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I chair the POKéMON Fan Club!\p"
	.string "I raise more than a hundred\n"
	.string "POKéMON!\p"
	.string "I'm very fussy when it comes to\n"
	.string "POKéMON! I surely am!\p"
	.string "So…\p"
	.string "Did you come visit to hear about\n"
	.string "my POKéMON?$"

VermilionCity_PokemonFanClub_Text_ChairmansStory::
# 153 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Good!\n"
	.string "Then listen up!\p"
	.string "My favorite RAPIDASH…\p"
	.string "It's…cute…lovely…smart… \n"
	.string "plus…amazing…you think so?…\l"
	.string "oh yes…it's…stunning…\l"
	.string "kindly…love it!\p"
	.string "Hug it…when…sleeping…warm\n"
	.string "and cuddly…spectacular…\l"
	.string "ravishing…\l"
	.string "…Oops! Look at the time!\l"
	.string "I kept you too long!\p"
	.string "Thanks for hearing me out!\n"
	.string "I want you to have this!$"

VermilionCity_PokemonFanClub_Text_ReceivedBikeVoucherFromChairman::
# 174 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "{PLAYER} received a BIKE VOUCHER\n"
	.string "from the CHAIRMAN.$"

VermilionCity_PokemonFanClub_Text_ExplainBikeVoucher::
# 179 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Take that BIKE VOUCHER to the\n"
	.string "BIKE SHOP in CERULEAN CITY.\p"
	.string "Exchange that for a BICYCLE\n"
	.string "free of charge!\p"
	.string "Don't worry, my favorite FEAROW\n"
	.string "will FLY me anywhere I need to go.\p"
	.string "So, I have no need for a BICYCLE.\p"
	.string "I hope you like cycling!$"

VermilionCity_PokemonFanClub_Text_ComeBackToHearStory::
# 194 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Oh. Come back when you want to\n"
	.string "hear my story!$"

VermilionCity_PokemonFanClub_Text_DidntComeToSeeAboutMonsAgain::
# 199 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Hello, {PLAYER}!\p"
	.string "Did you come see me about my\n"
	.string "POKéMON again?\p"
	.string "No?\n"
	.string "Too bad!$"

VermilionCity_PokemonFanClub_Text_MakeRoomForThis::
# 209 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Make room for this!$"

VermilionCity_PokemonFanClub_Text_ChairmanVeryVocalAboutPokemon::
# 213 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Our CHAIRMAN is very vocal about\n"
	.string "POKéMON.$"

VermilionCity_PokemonFanClub_Text_ListenPolitelyToOtherTrainers::
# 218 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Let's all listen politely to other\n"
	.string "TRAINERS!$"

VermilionCity_PokemonFanClub_Text_SomeoneBragsBragBack::
# 223 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "If someone brags, brag right back!$"

VermilionCity_PokemonFanClub_Text_ChairmanReallyAdoresHisMons::
# 227 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Our CHAIRMAN really does adore his\n"
	.string "POKéMON.\p"
	.string "But the person who is most liked by\n"
	.string "POKéMON is DAISY, I think.$"
