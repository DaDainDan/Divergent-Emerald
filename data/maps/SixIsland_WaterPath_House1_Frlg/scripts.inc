SixIsland_WaterPath_House1_Frlg_MapScripts::
	.byte 0


SixIsland_WaterPath_House1_EventScript_Beauty::
# 4 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_HERACROSS
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 0 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SixIsland_WaterPath_House1_EventScript_Beauty_2
# 10 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special GetHeracrossSizeRecordInfo
# 11 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_MayIMeasureHeracross
# 12 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special ChoosePartyMon
# 13 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 14 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_lt SixIsland_WaterPath_House1_EventScript_Beauty_5
SixIsland_WaterPath_House1_EventScript_Beauty_4:
# 32 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	setflag FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1
# 33 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesDeserveReward
	giveitem ITEM_NEST_BALL
# 0 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SixIsland_WaterPath_House1_EventScript_Beauty_8
# 38 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_WantToSeeBiggerOne
	release_end

SixIsland_WaterPath_House1_EventScript_Beauty_2:
# 7 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_LoveItNeedItHeracross
	release_end

SixIsland_WaterPath_House1_EventScript_Beauty_5:
# 15 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special CompareHeracrossSize
# 16 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	case 1, SixIsland_WaterPath_House1_EventScript_Beauty_11
# 20 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	case 2, SixIsland_WaterPath_House1_EventScript_Beauty_12
# 25 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	case 4, SixIsland_WaterPath_House1_EventScript_Beauty_13
	goto SixIsland_WaterPath_House1_EventScript_Beauty_4

SixIsland_WaterPath_House1_EventScript_Beauty_8:
# 35 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_YourBagIsFull
	release_end

SixIsland_WaterPath_House1_EventScript_Beauty_11:
# 18 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ThisWontDo
	release_end

SixIsland_WaterPath_House1_EventScript_Beauty_12:
# 21 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_Beauty_14
	goto SixIsland_WaterPath_House1_EventScript_Beauty_4

SixIsland_WaterPath_House1_EventScript_Beauty_13:
# 26 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_Beauty_16
	goto SixIsland_WaterPath_House1_EventScript_Beauty_4

SixIsland_WaterPath_House1_EventScript_Beauty_14:
# 22 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesYInchesWasBiggest
	release_end

SixIsland_WaterPath_House1_EventScript_Beauty_16:
# 27 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_ItsXInchesSameAsBefore
	release_end


SixIsland_WaterPath_House1_EventScript_SizeRecord::
# 43 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	lockall
# 44 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_NEST_BALL_FROM_WATER_PATH_HOUSE_1, SixIsland_WaterPath_House1_EventScript_SizeRecord_2
# 48 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_BlankChartOfSomeSort
SixIsland_WaterPath_House1_EventScript_SizeRecord_1:
# 50 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	releaseall
	end

SixIsland_WaterPath_House1_EventScript_SizeRecord_2:
# 45 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	special GetHeracrossSizeRecordInfo
# 46 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	msgbox SixIsland_WaterPath_House1_Text_BiggestHeracrossIsXInches
	goto SixIsland_WaterPath_House1_EventScript_SizeRecord_1


SixIsland_WaterPath_House1_Text_LoveItNeedItHeracross::
# 54 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Hera, hera, HERACROSS!\n"
	.string "Big and shiny, it's the bug boss!\l"
	.string "Love it, need it, HERACROSS!$"

SixIsland_WaterPath_House1_Text_MayIMeasureHeracross::
# 60 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Eeeeek!\n"
	.string "That's a HERACROSS!\p"
	.string "Please, please, may I measure how\n"
	.string "big it is?$"

SixIsland_WaterPath_House1_Text_ItsXInchesDeserveReward::
# 68 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Eeeek, it's {STR_VAR_2} inches!\n"
	.string "I've never seen anything like this!\l"
	.string "You deserve a reward!$"

SixIsland_WaterPath_House1_Text_WantToSeeBiggerOne::
# 74 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "I want to see a much, much bigger\n"
	.string "HERACROSS than that one.\p"
	.string "Oh, how I adore them, big\n"
	.string "HERACROSS!$"

SixIsland_WaterPath_House1_Text_ItsXInchesSameAsBefore::
# 82 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Huh? This {STR_VAR_2}-inch measurement…\n"
	.string "Oh, boo! It's the same as before.$"

SixIsland_WaterPath_House1_Text_ItsXInchesYInchesWasBiggest::
# 87 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, it's just {STR_VAR_2} inches.\n"
	.string "The HERACROSS before was bigger.\p"
	.string "It was {STR_VAR_3} inches, the biggest\n"
	.string "HERACROSS you've brought me.$"

SixIsland_WaterPath_House1_Text_ThisWontDo::
# 95 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Oh, no! This won't do!\p"
	.string "HERACROSS looks much more macho\n"
	.string "and cool, and has a lovely horn!$"

SixIsland_WaterPath_House1_Text_YourBagIsFull::
# 102 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "Your BAG is full.\n"
	.string "My reward won't fit.$"

SixIsland_WaterPath_House1_Text_BiggestHeracrossIsXInches::
# 107 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "The biggest HERACROSS that I have\n"
	.string "ever seen measured so far is:\p"
	.string "{STR_VAR_3} inches!$"

SixIsland_WaterPath_House1_Text_BlankChartOfSomeSort::
# 114 "data/maps/SixIsland_WaterPath_House1_Frlg/scripts.pory"
	.string "It's a blank chart of some sort.\p"
	.string "It has spaces for writing in\n"
	.string "records of some kind.$"
