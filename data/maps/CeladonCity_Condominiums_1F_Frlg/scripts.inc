CeladonCity_Condominiums_1F_Frlg_MapScripts::
	.byte 0


CeladonCity_Condominiums_1F_EventScript_TeaWoman::
# 4 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto_if_set FLAG_TALKED_TO_TEA_LADY_AFTER_HOF, CeladonCity_Condominiums_1F_EventScript_TeaWoman_2
# 5 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, CeladonCity_Condominiums_1F_EventScript_TeaWoman_8
CeladonCity_Condominiums_1F_EventScript_TeaWoman_5:
# 8 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, CeladonCity_Condominiums_1F_EventScript_TeaWoman_3
# 14 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead
# 15 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	setflag FLAG_GOT_TEA
	giveitem ITEM_TEA
# 0 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CeladonCity_Condominiums_1F_EventScript_TeaWoman_12
CeladonCity_Condominiums_1F_EventScript_TeaWoman_11:
# 19 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea
CeladonCity_Condominiums_1F_EventScript_TeaWoman_1:
	release_end

CeladonCity_Condominiums_1F_EventScript_TeaWoman_2:
# 6 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_MyDearMonsKeepMeCompany
	goto CeladonCity_Condominiums_1F_EventScript_TeaWoman_1

CeladonCity_Condominiums_1F_EventScript_TeaWoman_3:
# 9 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, 4
# 10 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	setflag FLAG_TALKED_TO_TEA_LADY_AFTER_HOF
# 11 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_DaisyComesToBuyTea
	goto CeladonCity_Condominiums_1F_EventScript_TeaWoman_1

CeladonCity_Condominiums_1F_EventScript_TeaWoman_8:
# 5 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TEA, CeladonCity_Condominiums_1F_EventScript_TeaWoman_2
	goto CeladonCity_Condominiums_1F_EventScript_TeaWoman_5

CeladonCity_Condominiums_1F_EventScript_TeaWoman_12:
# 17 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	goto EventScript_BagIsFull
	goto CeladonCity_Condominiums_1F_EventScript_TeaWoman_11


CeladonCity_Condominiums_1F_EventScript_Meowth::
# 25 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock_faceplayer
# 26 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitse
# 27 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 28 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Meowth
# 29 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitmoncry
	release_end


CeladonCity_Condominiums_1F_EventScript_Clefairy::
# 34 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock_faceplayer
# 35 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitse
# 36 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 37 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Clefairy
# 38 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitmoncry
	release_end


CeladonCity_Condominiums_1F_EventScript_Nidoran::
# 43 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	lock_faceplayer
# 44 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitse
# 45 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	playmoncry SPECIES_NIDORAN_F, CRY_MODE_NORMAL
# 46 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Nidoran
# 47 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	waitmoncry
	release_end


CeladonCity_Condominiums_1F_EventScript_SuiteSign::
# 52 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_ManagersSuite, MSGBOX_SIGN
	end


CeladonCity_Condominiums_1F_Text_Meowth::
# 56 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "MEOWTH: Meow!$"

CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead::
# 60 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "You shouldn't spend all your money\n"
	.string "on drinks.\p"
	.string "Try this instead.$"

CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea::
# 67 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "Nothing beats thirst like some hot\n"
	.string "TEA.\p"
	.string "It really is the best.$"

CeladonCity_Condominiums_1F_Text_MyDearMonsKeepMeCompany::
# 74 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "My dear POKéMON keep me company.\n"
	.string "MEOWTH even brings money home!$"

CeladonCity_Condominiums_1F_Text_DaisyComesToBuyTea::
# 79 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "Oh, hello, dearie.\n"
	.string "Did you enjoy my TEA?\p"
	.string "By the way, dear. Are you, by any\n"
	.string "chance, from PALLET TOWN?\p"
	.string "A girl from PALLET TOWN, DAISY,\n"
	.string "she enjoys TEA every day.\p"
	.string "She visits the CELADON DEPT. STORE\n"
	.string "to buy some TEA.$"

CeladonCity_Condominiums_1F_Text_Clefairy::
# 93 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "CLEFAIRY: Pi pippippi!$"

CeladonCity_Condominiums_1F_Text_Nidoran::
# 97 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "NIDORAN♀: Kya kyaoo!$"

CeladonCity_Condominiums_1F_Text_ManagersSuite::
# 101 "data/maps/CeladonCity_Condominiums_1F_Frlg/scripts.pory"
	.string "CELADON MANSION\n"
	.string "Manager's Suite$"
