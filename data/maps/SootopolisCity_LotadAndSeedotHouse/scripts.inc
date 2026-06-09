SootopolisCity_LotadAndSeedotHouse_MapScripts::
	.byte 0


SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother::
# 4 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetSeedotSizeRecordInfo
# 5 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock_faceplayer
# 6 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot, MSGBOX_DEFAULT
# 7 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	setvar VAR_0x8009, SPECIES_SEEDOT
# 8 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_TRADE
# 9 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 10 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_2
# 14 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special CompareSeedotSize
# 15 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	case COMPARE_SIZE_INCORRECT_SPECIES, SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_6
# 17 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	case COMPARE_SIZE_SMALLER, SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_7
# 18 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	case COMPARE_SIZE_LARGER, SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_8
SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_4:
	release_end

SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_2:
# 11 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot, MSGBOX_DEFAULT
	release_end

SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_6:
# 16 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot, MSGBOX_DEFAULT
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_4

SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_7:
# 17 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot, MSGBOX_DEFAULT
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_4

SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_8:
# 18 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_GiveElixir
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother_4


SootopolisCity_LotadAndSeedotHouse_EventScript_GiveElixir::
# 24 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad, MSGBOX_DEFAULT
	giveitem ITEM_ELIXIR
# 0 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_GiveElixir_2
# 29 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	closemessage
	release_end

SootopolisCity_LotadAndSeedotHouse_EventScript_GiveElixir_2:
# 26 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1, MSGBOX_DEFAULT
	release_end


SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother::
# 34 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetLotadSizeRecordInfo
# 35 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lock_faceplayer
# 36 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad, MSGBOX_DEFAULT
# 37 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	setvar VAR_0x8009, SPECIES_LOTAD
# 38 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_TRADE
# 39 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	waitstate
# 40 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_2
# 44 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special CompareLotadSize
# 45 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	switch VAR_RESULT
# 46 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	case COMPARE_SIZE_INCORRECT_SPECIES, SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_6
# 47 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	case COMPARE_SIZE_SMALLER, SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_7
# 48 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	case COMPARE_SIZE_LARGER, SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_8
SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_4:
	release_end

SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_2:
# 41 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad, MSGBOX_DEFAULT
	release_end

SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_6:
# 46 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad, MSGBOX_DEFAULT
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_4

SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_7:
# 47 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad, MSGBOX_DEFAULT
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_4

SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_8:
# 48 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_GiveElixir
	goto SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother_4


SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotSizeRecord::
# 54 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetSeedotSizeRecordInfo
# 55 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lockall
# 56 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory, MSGBOX_DEFAULT
# 57 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	releaseall
	end


SootopolisCity_LotadAndSeedotHouse_EventScript_LotadSizeRecord::
# 62 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	special GetLotadSizeRecordInfo
# 63 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	lockall
# 64 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory, MSGBOX_DEFAULT
# 65 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	releaseall
	end


SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot::
# 69 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Do you know the POKéMON SEEDOT?\n"
	.string "It's hardly ever seen in SOOTOPOLIS.\p"
	.string "Anyway, I love big SEEDOT.\n"
	.string "The bigger the better.\p"
	.string "But my younger brother, he says that\n"
	.string "LOTAD is bigger.\p"
	.string "That's silly.\n"
	.string "SEEDOT has to be bigger than that!\p"
	.string "Huh? Do you have a SEEDOT with you?\n"
	.string "P-p-please, show me!$"

SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad::
# 86 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}!\n"
	.string "Oh, my gosh, this is a big one!\p"
	.string "It might even beat the big LOTAD\n"
	.string "my younger brother saw!\p"
	.string "Thanks for showing me.\n"
	.string "This is my thanks!$"

SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion1::
# 97 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{PLAYER} received a POTION.$"

SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1::
# 101 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hunh?\n"
	.string "Your BAG is crammed full.$"

SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot::
# 106 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}, is it?\p"
	.string "Hmm… I've seen a bigger SEEDOT\n"
	.string "than this one.$"

SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot::
# 113 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Oh, now this is quite something…\n"
	.string "But it's not a SEEDOT!$"

SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot::
# 118 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "You don't have a big SEEDOT?\n"
	.string "That's too bad…\p"
	.string "If you get a big SEEDOT, please\n"
	.string "come show me.$"

SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory::
# 126 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "The biggest SEEDOT in history!\n"
	.string "{STR_VAR_2}'s {STR_VAR_3} giant!\p"
	.string "A SEEDOT bigger than a LOTAD\n"
	.string "always wanted!$"

SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad::
# 134 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Do you know the POKéMON LOTAD?\n"
	.string "It's rarely seen in SOOTOPOLIS.\p"
	.string "I love, I mean love, big LOTAD!\p"
	.string "My big brother says that SEEDOT is\n"
	.string "bigger.\p"
	.string "But that's wrong! Everyone knows that\n"
	.string "LOTAD is a lot bigger.\p"
	.string "Hunh? Do you have a LOTAD?\n"
	.string "P-p-please show me!$"

SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot::
# 150 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}!\n"
	.string "Wow, that is big!\p"
	.string "It might be even bigger than the huge\n"
	.string "SEEDOT my big brother saw.\p"
	.string "Thanks for showing me!\n"
	.string "This is my thanks!$"

SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion2::
# 161 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{PLAYER} received a POTION.$"

SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2::
# 165 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Hunh?\n"
	.string "Your BAG is crammed full.$"

SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad::
# 170 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "{STR_VAR_2}?\p"
	.string "Hmm… I've seen a bigger LOTAD\n"
	.string "than this one here.$"

SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad::
# 177 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Well, isn't this something!\n"
	.string "But it's no LOTAD!$"

SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad::
# 182 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "Don't you have a big LOTAD?\n"
	.string "How disappointing…\p"
	.string "If you get a big LOTAD, please\n"
	.string "come show me!$"

SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory::
# 190 "data/maps/SootopolisCity_LotadAndSeedotHouse/scripts.pory"
	.string "The biggest LOTAD in history!\n"
	.string "{STR_VAR_2}'s {STR_VAR_3} colossus!\p"
	.string "A LOTAD bigger than a SEEDOT\n"
	.string "always wanted!$"
