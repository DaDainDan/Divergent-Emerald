LilycoveCity_ContestHall_MapScripts::
	.byte 0


LilycoveCity_ContestHall_EventScript_Boy1::
# 8 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_TodayWonSmartnessContest, MSGBOX_NPC
	end


LilycoveCity_ContestHall_EventScript_Boy2::
# 13 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EnteredBunchOfContests, MSGBOX_NPC
	end


LilycoveCity_ContestHall_EventScript_Girl::
# 18 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks, MSGBOX_NPC
	end


LilycoveCity_ContestHall_EventScript_Sailor::
# 23 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous, MSGBOX_NPC
	end


LilycoveCity_ContestHall_EventScript_SmartContestMC::
# 28 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 29 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal, MSGBOX_DEFAULT
# 30 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_SmartContestJudge::
# 34 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 35 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest, MSGBOX_DEFAULT
# 36 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_SmartContestant1::
# 40 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 41 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EnteredWrongContest, MSGBOX_DEFAULT
# 42 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_SmartContestant2::
# 46 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 47 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_RaisedMonToBeSmart, MSGBOX_DEFAULT
# 48 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_SmartContestant3::
# 52 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 53 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext, MSGBOX_DEFAULT
# 54 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_SmartContestant4::
# 58 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 59 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife, MSGBOX_DEFAULT
# 60 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_SmartContestAudience1::
# 64 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa, MSGBOX_SIGN
	end


LilycoveCity_ContestHall_EventScript_SmartContestAudience2::
# 69 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 70 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves, MSGBOX_DEFAULT
# 71 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_SmartContestAudience3::
# 75 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 76 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers, MSGBOX_DEFAULT
# 77 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_SmartContestAudience4::
# 81 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 82 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_StillLoveSmartnessContests, MSGBOX_DEFAULT
# 83 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_BeautyContestMC::
# 87 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 88 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest, MSGBOX_DEFAULT
# 89 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_BeautyContestJudge::
# 93 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 94 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty, MSGBOX_DEFAULT
# 95 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_BeautyContestant1::
# 99 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 100 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty, MSGBOX_DEFAULT
# 101 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_BeautyContestant2::
# 105 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 106 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_OverdidGrooming, MSGBOX_DEFAULT
# 107 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_BeautyContestant3::
# 111 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 112 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam, MSGBOX_DEFAULT
# 113 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_BeautyContestant4::
# 117 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 118 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe, MSGBOX_DEFAULT
# 119 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_BeautyContestAudience1::
# 123 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 124 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy, MSGBOX_DEFAULT
# 125 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_BeautyContestAudience2::
# 129 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 130 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon, MSGBOX_DEFAULT
# 131 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_BeautyContestAudience3::
# 135 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 136 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone, MSGBOX_DEFAULT
# 137 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_CuteContestMC::
# 141 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 142 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_InTheMiddleOfContest, MSGBOX_DEFAULT
# 143 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_CuteContestJudge::
# 147 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 148 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals, MSGBOX_DEFAULT
# 149 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_CuteContestant1::
# 153 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 154 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyAzurillWasDistracted, MSGBOX_DEFAULT
# 155 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_CuteContestant2::
# 159 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 160 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_NeverWonBattleButContest, MSGBOX_DEFAULT
# 161 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_CuteContestant3::
# 165 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 166 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_PetalDanceIsMarvel, MSGBOX_DEFAULT
# 167 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_CuteContestant4::
# 171 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 172 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter, MSGBOX_DEFAULT
# 173 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_CuteContestAudience1::
# 177 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lockall
# 178 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FacePlayer
# 179 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 180 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_MyChildIsInContest, MSGBOX_DEFAULT
# 181 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	closemessage
# 182 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	applymovement LOCALID_CUTE_AUDIENCE_1, Common_Movement_FaceOriginalDirection
# 183 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	waitmovement 0
# 184 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	delay 25
# 185 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ComeOnDear, MSGBOX_DEFAULT
# 186 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	releaseall
	end


LilycoveCity_ContestHall_EventScript_CuteContestAudience2::
# 191 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 192 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn, MSGBOX_DEFAULT
# 193 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_CuteContestAudience3::
# 197 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	lock_faceplayer
# 198 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest, MSGBOX_DEFAULT
# 199 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	return


LilycoveCity_ContestHall_EventScript_BeautyStageSign::
# 203 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_BeautyContestStage, MSGBOX_SIGN
	end


LilycoveCity_ContestHall_EventScript_CuteStageSign::
# 208 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_CuteContestStage, MSGBOX_SIGN
	end


LilycoveCity_ContestHall_EventScript_SmartStageSign::
# 213 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	msgbox LilycoveCity_ContestHall_Text_SmartContestStage, MSGBOX_SIGN
	end


LilycoveCity_ContestHall_Text_TodayWonSmartnessContest::
# 217 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "This POKéMON won the BEAUTY CONTEST\n"
	.string "here before.\p"
	.string "Well, guess what? Today, I made it\n"
	.string "win a SMARTNESS CONTEST!\p"
	.string "My abilities scare even me…$"

LilycoveCity_ContestHall_Text_EnteredBunchOfContests::
# 227 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I've entered a bunch of CONTESTS,\n"
	.string "so I'm seeing how things work.\p"
	.string "If you're in a COOLNESS CONTEST,\n"
	.string "cool moves go over as appeals.\p"
	.string "But smart moves and cute moves\n"
	.string "don't go over well, for instance.$"

LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks::
# 238 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "That young man who won earlier had\n"
	.string "a whole bunch of different {POKEBLOCK}S.\p"
	.string "Can you win if you had that many\n"
	.string "of those things?$"

LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous::
# 246 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Whoa, isn't this place humongous!\p"
	.string "The tension in the air… It's not\n"
	.string "like a CONTEST hall in the sticks.$"

LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal::
# 253 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "{SPEAKER NAME_MC}Okay, SMART POKéMON and their\n"
	.string "TRAINERS, are you ready?!\p"
	.string "Give it your best showing!\n"
	.string "Let's appeal!$"

LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest::
# 261 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "{SPEAKER NAME_JUDGE}Are you enjoying this CONTEST?\p"
	.string "Come back with three friends, and\n"
	.string "all of you may enter a CONTEST!$"

LilycoveCity_ContestHall_Text_EnteredWrongContest::
# 268 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ayayayay…\n"
	.string "I entered the wrong CONTEST.\p"
	.string "I entered this tough POKéMON in\n"
	.string "the SMARTNESS CONTEST…\p"
	.string "Come on, wow them with a smart-looking\n"
	.string "ROCK SMASH.$"

LilycoveCity_ContestHall_Text_RaisedMonToBeSmart::
# 279 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I've spent many a year, and all my\n"
	.string "wisdom besides, raising this POKéMON\l"
	.string "to be smart.\p"
	.string "It won't be easily bested by some\n"
	.string "young pup's POKéMON.\p"
	.string "My dear wife, are you seeing this?$"

LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext::
# 290 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "There it is!\p"
	.string "If my POKéMON pulls a smart move next,\n"
	.string "the audience's excitement will peak!$"

LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife::
# 297 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oh, dear, no!\p"
	.string "My darling ZUBAT's LEECH LIFE is so\n"
	.string "cute I kept using it over and over!\p"
	.string "But these mean people don't appreciate\n"
	.string "it at all!$"

LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa::
# 307 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Kiyaaah! You're beautiful, Grandpa!$"

LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves::
# 311 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Even when TRAINERS enter the same\n"
	.string "kind of POKéMON, they all seem to use\l"
	.string "different moves for appeals.\p"
	.string "It's just like the way people have\n"
	.string "different styles for battling.$"

LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers::
# 320 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I think the POKéMON look smarter\n"
	.string "than their TRAINERS. By a lot.$"

LilycoveCity_ContestHall_Text_StillLoveSmartnessContests::
# 325 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "When all's said and done, I still love\n"
	.string "SMARTNESS CONTESTS.\p"
	.string "That intellectual green color…\n"
	.string "It's so… So… Cool.$"

LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest::
# 333 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "{SPEAKER NAME_MC}Are you entering the BEAUTY\n"
	.string "CONTEST, too? Good luck!$"

LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty::
# 338 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "{SPEAKER NAME_JUDGE}Ah, every POKéMON here is\n"
	.string "a model of pristine beauty!\p"
	.string "Why, I almost forgot to score them!$"

LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty::
# 345 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "A POKéMON this beautiful…\n"
	.string "There isn't another one like it.\p"
	.string "Everyone's eyes will be glued to\n"
	.string "my beauty.$"

LilycoveCity_ContestHall_Text_OverdidGrooming::
# 353 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Waaaah!\p"
	.string "I brushed and groomed my POKéMON\n"
	.string "carefully for this CONTEST…\p"
	.string "But I overdid it…\n"
	.string "My POKéMON's coat turned all scraggly…\p"
	.string "What should I do?$"

LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam::
# 365 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "This AURORA BEAM is so dazzling,\n"
	.string "the JUDGE won't be able to see it.\p"
	.string "Uh, wait a second…\n"
	.string "That'll be meaningless, then!$"

LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe::
# 373 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "This pretty POKéMON looks just like\n"
	.string "me when I was younger.\p"
	.string "Right when I said that, my husband\n"
	.string "spewed the coffee he was drinking.\p"
	.string "Did I say something funny?$"

LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy::
# 383 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "You know, if I win at a BEAUTY\n"
	.string "CONTEST, sure it makes me\l"
	.string "happy. More than usual, anyway.$"

LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon::
# 389 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Wahahahah!\p"
	.string "Will you take a gander at all those\n"
	.string "pretty POKéMON!\l"
	.string "I just love this sort of glitz!$"

LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone::
# 397 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "You can't always win on just beauty\n"
	.string "alone.\p"
	.string "You have to groom your POKéMON so\n"
	.string "it's nice and glossy like mine.$"

LilycoveCity_ContestHall_Text_InTheMiddleOfContest::
# 405 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "{SPEAKER NAME_MC}Uh-oh! Hello!\n"
	.string "We're in the middle of a CONTEST!\p"
	.string "Please enter at our registration\n"
	.string "counter and come out, okay?$"

LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals::
# 413 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "{SPEAKER NAME_JUDGE}Oh, such charming and cute\n"
	.string "appeals!\p"
	.string "Oh, my goodness! What a perfectly\n"
	.string "adorable WATER SPORT appeal!$"

LilycoveCity_ContestHall_Text_MyAzurillWasDistracted::
# 421 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Oh, no… My sweet AZURILL was\n"
	.string "distracted by another POKéMON.$"

LilycoveCity_ContestHall_Text_NeverWonBattleButContest::
# 426 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My POKéMON has never won in a battle,\n"
	.string "but put it in a CONTEST and look out!$"

LilycoveCity_ContestHall_Text_PetalDanceIsMarvel::
# 431 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My POKéMON's PETAL DANCE is a marvel\n"
	.string "of elegance.\p"
	.string "I won't let anyone disturb its\n"
	.string "performance.$"

LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter::
# 439 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Everyone's POKéMON are very cute.\p"
	.string "However, if my POKéMON were to make\n"
	.string "a cute appeal…\p"
	.string "I'm sure that it would be so much \n"
	.string "cuter than the others.$"

LilycoveCity_ContestHall_Text_MyChildIsInContest::
# 449 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "My child is in this CONTEST.$"

LilycoveCity_ContestHall_Text_ComeOnDear::
# 453 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Come on, dear. Go for it!\n"
	.string "Your POKéMON is the best!$"

LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest::
# 458 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "I think that girl over there is\n"
	.string "the cutest of the lot.\p"
	.string "What's that? They're judging\n"
	.string "POKéMON by their looks?$"

LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn::
# 466 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "Ohh, seeing all these cute POKéMON,\n"
	.string "they make we want to get my own!\p"
	.string "I'm going to go catch some!$"

LilycoveCity_ContestHall_Text_BeautyContestStage::
# 473 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "BEAUTY CONTEST STAGE\n"
	.string "BE ALLURED BY BEAUTIFUL POKéMON!$"

LilycoveCity_ContestHall_Text_CuteContestStage::
# 478 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "CUTENESS CONTEST STAGE\n"
	.string "BE CHARMED BY CUTE POKéMON!$"

LilycoveCity_ContestHall_Text_SmartContestStage::
# 483 "data/maps/LilycoveCity_ContestHall/scripts.pory"
	.string "SMARTNESS CONTEST STAGE\n"
	.string "BE IMPRESSED BY SMART POKéMON!$"
