BattleFrontier_Lounge2_MapScripts::
	.byte 0


BattleFrontier_Lounge2_EventScript_FrontierManiac::
# 4 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock_faceplayer
# 5 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto_if_set FLAG_MET_BATTLE_FRONTIER_MANIAC, BattleFrontier_Lounge2_EventScript_FrontierManiac_2
# 8 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_MANIAC
# 9 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_FrontierManiacIntro, MSGBOX_DEFAULT
BattleFrontier_Lounge2_EventScript_FrontierManiac_1:
# 11 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
	end

BattleFrontier_Lounge2_EventScript_FrontierManiac_2:
# 6 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_SwingByForTheLatestWord, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_FrontierManiac_1


BattleFrontier_Lounge2_EventScript_GiveAdvice::
# 16 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	switch VAR_FRONTIER_MANIAC_FACILITY
# 17 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	case FRONTIER_MANIAC_TOWER_SINGLES, BattleFrontier_Lounge2_EventScript_GiveAdvice_3
# 18 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	case FRONTIER_MANIAC_TOWER_DOUBLES, BattleFrontier_Lounge2_EventScript_GiveAdvice_4
# 19 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	case FRONTIER_MANIAC_TOWER_MULTIS, BattleFrontier_Lounge2_EventScript_GiveAdvice_5
# 20 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	case FRONTIER_MANIAC_TOWER_LINK, BattleFrontier_Lounge2_EventScript_GiveAdvice_6
# 21 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	case FRONTIER_MANIAC_DOME, BattleFrontier_Lounge2_EventScript_GiveAdvice_7
# 22 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	case FRONTIER_MANIAC_FACTORY, BattleFrontier_Lounge2_EventScript_GiveAdvice_8
# 23 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	case FRONTIER_MANIAC_PALACE, BattleFrontier_Lounge2_EventScript_GiveAdvice_9
# 24 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	case FRONTIER_MANIAC_ARENA, BattleFrontier_Lounge2_EventScript_GiveAdvice_10
# 25 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	case FRONTIER_MANIAC_PIKE, BattleFrontier_Lounge2_EventScript_GiveAdvice_11
# 26 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	case FRONTIER_MANIAC_PYRAMID, BattleFrontier_Lounge2_EventScript_GiveAdvice_12
BattleFrontier_Lounge2_EventScript_GiveAdvice_1:
# 29 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	compare VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_TOWER_LINK
	goto_if_le BattleFrontier_Lounge2_EventScript_GiveAdvice_14
BattleFrontier_Lounge2_EventScript_GiveAdvice_13:
# 33 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	compare VAR_FRONTIER_MANIAC_FACILITY, FRONTIER_MANIAC_DOME
	goto_if_ge BattleFrontier_Lounge2_EventScript_GiveAdvice_17
BattleFrontier_Lounge2_EventScript_GiveAdvice_16:
# 36 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	special ShowFrontierManiacMessage
# 37 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	waitmessage
# 38 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	waitbuttonpress
	release_end

BattleFrontier_Lounge2_EventScript_GiveAdvice_3:
# 17 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SINGLE
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_1

BattleFrontier_Lounge2_EventScript_GiveAdvice_4:
# 18 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_DOUBLE
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_1

BattleFrontier_Lounge2_EventScript_GiveAdvice_5:
# 19 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_1

BattleFrontier_Lounge2_EventScript_GiveAdvice_6:
# 20 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MULTI_LINK
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_1

BattleFrontier_Lounge2_EventScript_GiveAdvice_7:
# 21 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_DOME
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_1

BattleFrontier_Lounge2_EventScript_GiveAdvice_8:
# 22 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_FACTORY
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_1

BattleFrontier_Lounge2_EventScript_GiveAdvice_9:
# 23 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PALACE
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_1

BattleFrontier_Lounge2_EventScript_GiveAdvice_10:
# 24 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_ARENA
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_1

BattleFrontier_Lounge2_EventScript_GiveAdvice_11:
# 25 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PIKE
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_1

BattleFrontier_Lounge2_EventScript_GiveAdvice_12:
# 26 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_BATTLE_PYRAMID
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_1

BattleFrontier_Lounge2_EventScript_GiveAdvice_14:
# 30 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_BattleTowerIsHottest, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_13

BattleFrontier_Lounge2_EventScript_GiveAdvice_17:
# 34 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_FacilityIsHottest, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice_16


BattleFrontier_Lounge2_EventScript_Maniac1::
# 43 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 44 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_NewsGatheringPower, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge2_EventScript_Maniac2::
# 49 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 50 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_AmazingPowersOfObservation, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge2_EventScript_Maniac3::
# 55 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	lock
# 56 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge2_EventScript_TriathleteF::
# 61 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	msgbox BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe, MSGBOX_NPC
	end


BattleFrontier_Lounge2_Text_FrontierManiacIntro::
# 65 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Howdy! When it comes to news about\n"
	.string "the BATTLE FRONTIER, I'm no. 1.\p"
	.string "You can think of me as\n"
	.string "the FRONTIER MANIAC.\p"
	.string "Just checking, but you are a TRAINER,\n"
	.string "isn't that right?\p"
	.string "I'll happily share the hottest news\n"
	.string "I gathered about the BATTLE FRONTIER.$"

BattleFrontier_Lounge2_Text_SwingByForTheLatestWord::
# 79 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Howdy! Did you swing by to grill me\n"
	.string "about the latest word? Oh, all right!$"

BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight::
# 84 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Well? Well? Well?\p"
	.string "I'm sure my information's been\n"
	.string "seriously useful to you, right?$"

BattleFrontier_Lounge2_Text_FacilityIsHottest::
# 91 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Let's see now…\p"
	.string "It sounds like the {STR_VAR_1}\n"
	.string "is the hottest place going.$"

BattleFrontier_Lounge2_Text_BattleTowerIsHottest::
# 98 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Let's see now…\p"
	.string "It sounds like BATTLE TOWER\n"
	.string "{STR_VAR_1} is the hottest.$"

BattleFrontier_Lounge2_Text_SalonMaidenIsThere::
# 105 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this mysterious TRAINER called\n"
	.string "the SALON MAIDEN that runs the place.$"

BattleFrontier_Lounge2_Text_SalonMaidenSilverMons::
# 115 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the SALON MAIDEN?\p"
	.string "When she's measuring up her opponent,\n"
	.string "she apparently uses these POKéMON:\p"
	.string "A PSYCHIC-type PSI POKéMON,\n"
	.string "a FIRE-type VOLCANO POKéMON,\l"
	.string "and a NORMAL-type SLEEPING POKéMON.$"

BattleFrontier_Lounge2_Text_SalonMaidenGoldMons::
# 126 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the SALON MAIDEN\n"
	.string "when she's serious?\p"
	.string "When she's battling flat out,\n"
	.string "she apparently uses these POKéMON:\p"
	.string "A DRAGON & PSYCHIC EON POKéMON,\n"
	.string "an ELECTRIC-type THUNDER POKéMON,\l"
	.string "and a NORMAL-type SLEEPING POKéMON.$"

BattleFrontier_Lounge2_Text_DomeAceIsThere::
# 138 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this flamboyant TRAINER called\n"
	.string "the DOME ACE that runs the place.$"

BattleFrontier_Lounge2_Text_DomeAceSilverMons::
# 148 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the DOME ACE?\p"
	.string "When he's treating the opponent\n"
	.string "lightly, he uses these three POKéMON:\p"
	.string "A DRAGON & FLYING DRAGON POKéMON,\n"
	.string "a WATER & GROUND MUD FISH POKéMON,\l"
	.string "and a FIRE & FLYING FLAME POKéMON.$"

BattleFrontier_Lounge2_Text_DomeAceGoldMons::
# 159 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the DOME ACE\n"
	.string "when he's serious?\p"
	.string "When he's demonstrating his strategy,\n"
	.string "he uses these three POKéMON:\p"
	.string "A DRAGON & FLYING EON POKéMON,\n"
	.string "a WATER & GROUND MUD FISH POKéMON,\l"
	.string "and a STEEL- & PSYCHIC-type IRON LEG\l"
	.string "POKéMON.$"

BattleFrontier_Lounge2_Text_FactoryHeadIsThere::
# 172 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this freaky TRAINER called\n"
	.string "the FACTORY HEAD that runs the place.$"

BattleFrontier_Lounge2_Text_FactoryHeadSilverMons::
# 182 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the FACTORY HEAD\n"
	.string "already?\p"
	.string "Let me think… When he goes to battle,\n"
	.string "he just gets three rental POKéMON.\p"
	.string "He battles under pretty much the same\n"
	.string "conditions as you.$"

BattleFrontier_Lounge2_Text_FactoryHeadGoldMons::
# 193 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the FACTORY HEAD\n"
	.string "when he's serious?\p"
	.string "When he goes seriously to battle,\n"
	.string "he still gets three rental POKéMON.\p"
	.string "He battles under virtually the same\n"
	.string "conditions as you.$"

BattleFrontier_Lounge2_Text_PikeQueenIsThere::
# 204 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this scary TRAINER called\n"
	.string "the PIKE QUEEN that runs the place.$"

BattleFrontier_Lounge2_Text_PikeQueenSilverMons::
# 214 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the PIKE QUEEN\n"
	.string "before?\p"
	.string "When she's in a good mood, they say\n"
	.string "she uses these three POKéMON:\p"
	.string "A POISON-type FANG SNAKE POKéMON,\n"
	.string "a BUG & ROCK MOLD POKéMON,\l"
	.string "and a WATER-type TENDER POKéMON.$"

BattleFrontier_Lounge2_Text_PikeQueenGoldMons::
# 226 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the PIKE QUEEN\n"
	.string "when she's serious?\p"
	.string "When she's seriously annoyed, they say\n"
	.string "she uses these three POKéMON:\p"
	.string "A POISON-type FANG SNAKE POKéMON,\n"
	.string "a STEEL & GROUND IRON SNAKE POKéMON,\l"
	.string "and a WATER- & FLYING-type ATROCIOUS\l"
	.string "POKéMON.$"

BattleFrontier_Lounge2_Text_ArenaTycoonIsThere::
# 239 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this cute TRAINER called\n"
	.string "the ARENA TYCOON that runs the place.$"

BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons::
# 249 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the ARENA TYCOON\n"
	.string "before?\p"
	.string "When she's assessing the foe's ability,\n"
	.string "she supposedly uses these POKéMON:\p"
	.string "A BUG & FIGHTING SINGLE HORN POKéMON,\n"
	.string "a DARK-type MOONLIGHT POKéMON,\l"
	.string "and a BUG & GHOST SHED POKéMON.$"

BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons::
# 261 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the ARENA TYCOON\n"
	.string "when she's serious?\p"
	.string "When she battles for keeps,\n"
	.string "she supposedly uses these POKéMON:\p"
	.string "A DARK-type MOONLIGHT POKéMON,\n"
	.string "a GHOST & POISON SHADOW POKéMON\l"
	.string "and a GRASS- & FIGHTING-type\l"
	.string "MUSHROOM POKéMON.$"

BattleFrontier_Lounge2_Text_PalaceMavenIsThere::
# 274 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this sinister TRAINER called\n"
	.string "the PALACE MAVEN that runs the place.$"

BattleFrontier_Lounge2_Text_PalaceMavenSilverMons::
# 284 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the PALACE MAVEN\n"
	.string "before?\p"
	.string "When he's testing the opponent's\n"
	.string "spirit, he's said to use these POKéMON:\p"
	.string "A POISON & FLYING-type BAT POKéMON,\n"
	.string "a NORMAL-type LAZY POKéMON, and a\l"
	.string "WATER- & ICE-type TRANSPORT POKéMON.$"

BattleFrontier_Lounge2_Text_PalaceMavenGoldMons::
# 296 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the PALACE MAVEN\n"
	.string "when he's serious?\p"
	.string "When he throws his entire might into\n"
	.string "battle, he's said to use these POKéMON:\p"
	.string "A FIRE-type LEGENDARY POKéMON,\n"
	.string "a NORMAL-type LAZY POKéMON,\l"
	.string "and a WATER-type AURORA POKéMON.$"

BattleFrontier_Lounge2_Text_PyramidKingIsThere::
# 308 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this fiery-hot TRAINER called\n"
	.string "the PYRAMID KING that runs the place.$"

BattleFrontier_Lounge2_Text_PyramidKingSilverMons::
# 318 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the PYRAMID KING\n"
	.string "before?\p"
	.string "When he's checking the foe's power,\n"
	.string "he apparently uses these POKéMON:\p"
	.string "A ROCK-type ROCK PEAK POKéMON,\n"
	.string "an ICE-type ICEBERG POKéMON,\l"
	.string "and a STEEL-type IRON POKéMON.$"

BattleFrontier_Lounge2_Text_PyramidKingGoldMons::
# 330 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Have you battled the PYRAMID KING\n"
	.string "when he's serious?\p"
	.string "When he's pumped with hot power,\n"
	.string "he apparently uses these POKéMON:\p"
	.string "An ICE & FLYING FREEZE POKéMON, an\n"
	.string "ELECTRIC & FLYING ELECTRIC POKéMON,\l"
	.string "and a FIRE- & FLYING-type FLAME\l"
	.string "POKéMON.$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice1::
# 343 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Sure, there are several places where\n"
	.string "you can enter DOUBLE BATTLES.\p"
	.string "But the DOUBLE BATTLE ROOMS of\n"
	.string "the BATTLE TOWER are, like, basic!\p"
	.string "They're where you should learn about\n"
	.string "how DOUBLE BATTLES are played here\l"
	.string "in the BATTLE FRONTIER.$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice2::
# 355 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Watch yourself in the battles here.\p"
	.string "I hear there are TRAINERS that have\n"
	.string "strategies they developed just for\l"
	.string "DOUBLE BATTLES.$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice3::
# 363 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "Once you're confident and comfortable\n"
	.string "with DOUBLE BATTLES here, you should\l"
	.string "think about challenging other places\l"
	.string "offering DOUBLE BATTLES.$"

BattleFrontier_Lounge2_Text_MultiBattleAdvice::
# 370 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "All sorts of TRAINERS gather in\n"
	.string "the BATTLE SALON.\p"
	.string "Just think--you may run into your\n"
	.string "friends or followers!\l"
	.string "You should look carefully!$"

BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice::
# 379 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "If you're with a friend, head for the\n"
	.string "LINK MULTI BATTLE ROOM.\p"
	.string "If you play with a strong friend,\n"
	.string "you can expect to see tough foes!$"

BattleFrontier_Lounge2_Text_NewsGatheringPower::
# 387 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "What amazing news-gathering power!\n"
	.string "My mentor's like none other!$"

BattleFrontier_Lounge2_Text_AmazingPowersOfObservation::
# 392 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "What amazing powers of observation!\n"
	.string "My mentor's like none other!$"

BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion::
# 397 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "What amazing power of persuasion!\n"
	.string "My mentor's like none other!$"

BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe::
# 402 "data/maps/BattleFrontier_Lounge2/scripts.pory"
	.string "…What is this place?\n"
	.string "It's scaring me…$"
