LilycoveCity_LilycoveMuseum_1F_MapScripts::
	.byte 0


LilycoveCity_LilycoveMuseum_1F_EventScript_Greeter::
# 4 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum, MSGBOX_SIGN
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_Curator::
# 9 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 10 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_1F_CURATOR, Common_Movement_FacePlayer
# 11 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	message LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings
# 12 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmessage
# 13 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	multichoice 20, 8, MULTI_VIEWED_PAINTINGS, TRUE
# 14 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_2
# 35 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime, MSGBOX_NPC
LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_1:
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_2:
# 15 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings, MSGBOX_YESNO
# 16 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_5
# 20 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe, MSGBOX_SIGN
# 21 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_MUSEUM_1F_CURATOR, Common_Movement_WalkUp
# 22 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	removeobject LOCALID_MUSEUM_1F_CURATOR
# 24 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lockall
# 25 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	switch VAR_FACING
# 26 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	case DIR_NORTH, LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_10
# 27 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	case DIR_WEST, LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_11
# 28 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	case DIR_EAST, LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_12
LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_8:
# 30 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitmovement 0
# 31 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
# 32 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	waitstate
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_1

LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_5:
# 17 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat, MSGBOX_SIGN
# 18 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	releaseall
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_1

LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_10:
# 26 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_Movement_0
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_8

LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_11:
# 27 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_Movement_1
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_8

LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_12:
# 28 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_Movement_2
	goto LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_8


LilycoveCity_LilycoveMuseum_1F_EventScript_OldPainting::
# 41 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting, MSGBOX_SIGN
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_FantasyPainting::
# 46 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery, MSGBOX_SIGN
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_WomanPainting::
# 51 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman, MSGBOX_SIGN
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_LegendaryPokemonPainting::
# 56 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon, MSGBOX_SIGN
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_GrassPokemonPainting::
# 61 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon, MSGBOX_SIGN
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_BerryPainting::
# 66 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries, MSGBOX_SIGN
	end


LilycoveCity_LilycoveMuseum_EventScript_BirdSculpture::
# 71 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica, MSGBOX_SIGN
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_PokeBallSculpture::
# 76 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone, MSGBOX_SIGN
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_StoneTablet::
# 81 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText, MSGBOX_SIGN
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_SchoolKidM::
# 86 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts, MSGBOX_NPC
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_Artist1::
# 91 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration, MSGBOX_NPC
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_NinjaBoy::
# 96 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty, MSGBOX_SIGN
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_Woman1::
# 101 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable, MSGBOX_SIGN
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_Woman2::
# 106 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings, MSGBOX_NPC
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_PsychicM::
# 111 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful, MSGBOX_NPC
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_Artist2::
# 116 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	lock_faceplayer
# 117 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings, MSGBOX_DEFAULT
# 118 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


LilycoveCity_LilycoveMuseum_1F_EventScript_FatMan::
# 123 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination, MSGBOX_NPC
	end


# 26 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_Movement_0:
# 26 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
# 26 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
	step_end

# 27 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_Movement_1:
# 27 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_left
# 27 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
	step_end

# 28 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
LilycoveCity_LilycoveMuseum_1F_EventScript_Curator_Movement_2:
# 28 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_right
# 28 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum::
# 127 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Welcome to LILYCOVE MUSEUM.\p"
	.string "Please take the time to enjoy our\n"
	.string "collection of fantastic artwork\l"
	.string "featuring POKéMON.$"

LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings::
# 135 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I'm the CURATOR of this MUSEUM of\n"
	.string "fine arts.\p"
	.string "It's heartening to see someone so\n"
	.string "young as you in our MUSEUM.\p"
	.string "Have you viewed our collection of\n"
	.string "paintings already?$"

LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime::
# 146 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Ah, then let me not disturb you.\n"
	.string "Please, do take your time.$"

LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings::
# 151 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Oh? I do believe that you seem to\n"
	.string "be a POKéMON TRAINER.\p"
	.string "Have you an interest in paintings,\n"
	.string "too?$"

LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat::
# 159 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I see…\p"
	.string "I'm honored that you would visit\n"
	.string "us in spite of that.$"

LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe::
# 166 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Ah, excellent!\n"
	.string "You do like paintings!\p"
	.string "Then, may I ask you to come with me?$"

LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting::
# 173 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a very old painting.\n"
	.string "The paint is peeling here and there.$"

LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery::
# 178 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's an odd landscape with bizarre\n"
	.string "and fantastic scenery.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman::
# 183 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a painting of a beautiful, smiling\n"
	.string "woman with a POKéMON on her lap.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon::
# 188 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a painting of a legendary POKéMON\n"
	.string "from long ago.\p"
	.string "The artist painted this from\n"
	.string "imagination.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon::
# 196 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a painting of GRASS POKéMON\n"
	.string "swaying in a breeze.\p"
	.string "They appear to be enjoying the wind's\n"
	.string "gentle caress.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries::
# 204 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a delicious-looking painting\n"
	.string "of BERRIES.\p"
	.string "This painting could make you hungry!$"

LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica::
# 211 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a replica of a famous sculpture.\p"
	.string "It depicts an ancient BIRD POKéMON.$"

LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone::
# 217 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a big POKé BALL carved from\n"
	.string "a black stone.\p"
	.string "It was apparently used in festivals\n"
	.string "in the olden days.$"

LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText::
# 225 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "It's a huge stone tablet inscribed\n"
	.string "with POKéMON and dense text in the\l"
	.string "small characters of an ancient,\l"
	.string "unreadable language.$"

LilycoveCity_LilycoveMuseum_1F_Text_WorksOfMagnificence::
# 232 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Hmmm…\n"
	.string "What works of great magnificence…$"

LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts::
# 237 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Battling with POKéMON is fun,\n"
	.string "I'll grant you that.\p"
	.string "But one mustn't forget our love for\n"
	.string "the fine arts.$"

LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration::
# 245 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "This ART MUSEUM… Well, you could\n"
	.string "see many fantastic paintings.\p"
	.string "And the CURATOR is a wonderful person.\p"
	.string "Among artists like myself, this MUSEUM\n"
	.string "is an inspiration.$"

LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty::
# 255 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "This lady is pretty!\n"
	.string "She's like Mommy!$"

LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable::
# 260 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "This POKéMON is adorable!\n"
	.string "Just like our little boy!$"

LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings::
# 265 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I'd heard that this ART MUSEUM got\n"
	.string "in some new paintings.\p"
	.string "So, naturally I hurried over.\p"
	.string "Are the new paintings up on\n"
	.string "the second floor?$"

LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful::
# 275 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "Lately, the CURATOR has been\n"
	.string "unusually cheerful.\p"
	.string "I bet something good happened for him.\n"
	.string "Definitely.$"

LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings::
# 283 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "I aim to see many great paintings\n"
	.string "here and learn from them.\p"
	.string "I have this dream of one day having\n"
	.string "my artwork exhibited here.$"

LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination::
# 291 "data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.pory"
	.string "The ART MUSEUM has become a favorite\n"
	.string "tourist destination.\p"
	.string "It's great for LILYCOVE…\n"
	.string "No, great for the HOENN region!\p"
	.string "This is what I've heard--a lone TRAINER\n"
	.string "procured all the paintings upstairs.$"
