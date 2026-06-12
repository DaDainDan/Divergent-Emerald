BattleFrontier_Lounge1_MapScripts::
	.byte 0


BattleFrontier_Lounge1_EventScript_Breeder::
# 4 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	lock_faceplayer
# 5 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto_if_unset FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_Breeder_2
# 9 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon, MSGBOX_DEFAULT
BattleFrontier_Lounge1_EventScript_Breeder_1:
# 11 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
	end

BattleFrontier_Lounge1_EventScript_Breeder_2:
# 6 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_PokemonBreederIntro, MSGBOX_DEFAULT
# 7 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_BREEDER
	goto BattleFrontier_Lounge1_EventScript_Breeder_1


BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder::
# 16 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	chooseboxmon
# 17 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	waitstate
# 18 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_2
# 22 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder
	end

BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_2:
# 19 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_NoTimeForMyAdvice, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge1_EventScript_ShowMonToBreeder::
# 32 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 33 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_2
# 38 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	special BufferVarsForIVRater
# 39 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8005, 90
	goto_if_le BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_5
# 42 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8005, 120
	goto_if_le BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_6
# 45 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8005, 150
	goto_if_le BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_7
# 48 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8005, 151
	goto_if_ge BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_8
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_4:
# 51 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end

BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_2:
# 34 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_EvenICantTell, MSGBOX_DEFAULT
# 35 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
	end

BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_5:
# 40 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_AverageAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_4

BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_6:
# 43 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BetterThanAverageAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_4

BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_7:
# 46 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_ImpressiveAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_4

BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_8:
# 49 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_OutstandingAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_4


BattleFrontier_Lounge1_EventScript_HighestIVStat::
# 57 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	switch VAR_0x8006
# 58 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	case STAT_HP, BattleFrontier_Lounge1_EventScript_HighestIVStat_3
# 59 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	case STAT_ATK, BattleFrontier_Lounge1_EventScript_HighestIVStat_4
# 60 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	case STAT_DEF, BattleFrontier_Lounge1_EventScript_HighestIVStat_5
# 61 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	case STAT_SPEED, BattleFrontier_Lounge1_EventScript_HighestIVStat_6
# 62 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	case STAT_SPATK, BattleFrontier_Lounge1_EventScript_HighestIVStat_7
# 63 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	case STAT_SPDEF, BattleFrontier_Lounge1_EventScript_HighestIVStat_8
BattleFrontier_Lounge1_EventScript_HighestIVStat_1:
# 65 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVStat_3:
# 58 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectHP, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_1

BattleFrontier_Lounge1_EventScript_HighestIVStat_4:
# 59 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectAtk, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_1

BattleFrontier_Lounge1_EventScript_HighestIVStat_5:
# 60 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectDef, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_1

BattleFrontier_Lounge1_EventScript_HighestIVStat_6:
# 61 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpeed, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_1

BattleFrontier_Lounge1_EventScript_HighestIVStat_7:
# 62 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpAtk, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_1

BattleFrontier_Lounge1_EventScript_HighestIVStat_8:
# 63 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpDef, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_1


BattleFrontier_Lounge1_EventScript_HighestIVValue::
# 71 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8007, 15
	goto_if_le BattleFrontier_Lounge1_EventScript_HighestIVValue_2
# 74 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8007, 25
	goto_if_le BattleFrontier_Lounge1_EventScript_HighestIVValue_3
# 77 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8007, 30
	goto_if_le BattleFrontier_Lounge1_EventScript_HighestIVValue_4
# 80 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	compare VAR_0x8007, 31
	goto_if_ge BattleFrontier_Lounge1_EventScript_HighestIVValue_5
BattleFrontier_Lounge1_EventScript_HighestIVValue_1:
	release_end

BattleFrontier_Lounge1_EventScript_HighestIVValue_2:
# 72 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatRelativelyGood, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_1

BattleFrontier_Lounge1_EventScript_HighestIVValue_3:
# 75 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatImpressive, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_1

BattleFrontier_Lounge1_EventScript_HighestIVValue_4:
# 78 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatOutstanding, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_1

BattleFrontier_Lounge1_EventScript_HighestIVValue_5:
# 81 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_StatFlawless, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_1


BattleFrontier_Lounge1_EventScript_Boy1::
# 87 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding, MSGBOX_NPC
	end


BattleFrontier_Lounge1_EventScript_Boy2::
# 92 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	msgbox BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt, MSGBOX_NPC
	end


BattleFrontier_Lounge1_Text_PokemonBreederIntro::
# 96 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "For 70 years I have raised POKéMON!\n"
	.string "I am the man they revere as\l"
	.string "the legendary top POKéMON BREEDER!\p"
	.string "If you ever become as seasoned as me,\n"
	.string "you'll see the abilities of POKéMON\l"
	.string "at a glance.\p"
	.string "You're a TRAINER. Doesn't it interest\n"
	.string "you to know your own POKéMON's\l"
	.string "abilities?\p"
	.string "Here!\n"
	.string "Let's have a look at your POKéMON!$"

BattleFrontier_Lounge1_Text_AverageAbility::
# 113 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
	.string "This one, overall, I would describe\n"
	.string "as being of average ability.$"

BattleFrontier_Lounge1_Text_BetterThanAverageAbility::
# 120 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
	.string "This one, overall, I would describe as\n"
	.string "having better-than-average ability.$"

BattleFrontier_Lounge1_Text_ImpressiveAbility::
# 127 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
	.string "This one, overall, I would say is\n"
	.string "quite impressive in ability!$"

BattleFrontier_Lounge1_Text_OutstandingAbility::
# 134 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "…Hmm…\p"
	.string "This one, overall, I would say is\n"
	.string "wonderfully outstanding in ability!$"

BattleFrontier_Lounge1_Text_BestAspectHP::
# 141 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its HP…$"

BattleFrontier_Lounge1_Text_BestAspectAtk::
# 146 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its ATTACK…$"

BattleFrontier_Lounge1_Text_BestAspectDef::
# 151 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its DEFENSE…$"

BattleFrontier_Lounge1_Text_BestAspectSpAtk::
# 156 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its SPECIAL ATTACK…$"

BattleFrontier_Lounge1_Text_BestAspectSpDef::
# 161 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its SPECIAL DEFENSE…$"

BattleFrontier_Lounge1_Text_BestAspectSpeed::
# 166 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Incidentally, the best aspect of it,\n"
	.string "I would say, is its SPEED…$"

BattleFrontier_Lounge1_Text_StatRelativelyGood::
# 171 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "That stat is relatively good.\n"
	.string "…Hm… That's how I call it.$"

BattleFrontier_Lounge1_Text_StatImpressive::
# 176 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "That stat is quite impressive.\n"
	.string "…Hm… That's how I call it.$"

BattleFrontier_Lounge1_Text_StatOutstanding::
# 181 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "That stat is outstanding!\n"
	.string "…Hm… That's how I call it.$"

BattleFrontier_Lounge1_Text_StatFlawless::
# 186 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "It's flawless! A thing of perfection!\n"
	.string "…Hm… That's how I call it.$"

BattleFrontier_Lounge1_Text_NoTimeForMyAdvice::
# 191 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "What?\n"
	.string "You have no time for my advice?\p"
	.string "You should always be eager to learn\n"
	.string "from the experiences of your elders!$"

BattleFrontier_Lounge1_Text_HaveBusinessNeedsTending::
# 199 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Yes, what is it now?\p"
	.string "I have business that needs tending!\n"
	.string "Save it for next time!$"

BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon::
# 206 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "Ah, youngster! Do your POKéMON's\n"
	.string "abilities intrigue you?\p"
	.string "Here, here!\n"
	.string "Let's have a look at your POKéMON!$"

BattleFrontier_Lounge1_Text_EvenICantTell::
# 214 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "An expert I am, but even I can't tell\n"
	.string "anything about an unhatched POKéMON!\p"
	.string "Show me a POKéMON!\n"
	.string "A POKéMON is what I need to see!$"

BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding::
# 222 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "He said my POKéMON is outstanding!\n"
	.string "I'm glad I raised it carefully!$"

BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt::
# 227 "data/maps/BattleFrontier_Lounge1/scripts.pory"
	.string "He said my POKéMON is outstanding!\n"
	.string "But I didn't do anything special\l"
	.string "raising it…$"
