Route4_PokemonCenter_1F_Frlg_MapScripts::
# 4 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Route4_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F
# 6 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE4
	end


Route4_PokemonCenter_1F_EventScript_Boy::
# 13 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_CanHaveSixMonsWithYou, MSGBOX_NPC
	end


Route4_PokemonCenter_1F_EventScript_Gentleman::
# 18 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 19 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_TeamRocketAttacksCerulean
	release_end


Route4_PokemonCenter_1F_EventScript_MagikarpSalesman::
# 24 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 25 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_BOUGHT_MAGIKARP, Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_2
# 29 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	showmoneybox 0, 0
	checkplayergender
# 0 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_5
# 33 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_SweetieBuyMagikarpForJust500, MSGBOX_YESNO
Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_4:
# 35 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp
	end

Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_2:
# 26 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_IDontGiveRefunds
	release_end

Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_5:
# 31 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_LaddieBuyMagikarpForJust500, MSGBOX_YESNO
	goto Route4_PokemonCenter_1F_EventScript_MagikarpSalesman_4


Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp::
# 40 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_2
	checkmoney 500
# 0 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_3
# 50 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 51 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MAGIKARP
	givemon SPECIES_MAGIKARP, 5
# 0 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_7
# 58 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 59 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	removemoney 500
# 60 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	updatemoneybox
# 61 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 62 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	message Route4_PokemonCenter_1F_Text_PaidOutrageouslyForMagikarp
# 63 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 64 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 65 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGIKARP
# 66 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 67 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	switch VAR_0x8007
# 68 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	case MON_GIVEN_TO_PARTY, Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_11
# 77 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	case MON_GIVEN_TO_PC, Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_12
Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_9:
# 89 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_BOUGHT_MAGIKARP
	release_end

Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_2:
# 41 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_OnlyDoingThisAsFavorToYou
# 42 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
	release_end

Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_3:
# 46 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_YoullNeedMoreMoney
# 47 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
	release_end

Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_7:
# 53 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 54 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_NoRoomForMorePokemon
# 55 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
	release_end

Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_11:
# 69 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_13
# 72 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 73 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 74 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
# 75 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	special ChangePokemonNickname
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_9

Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_12:
# 78 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_16
# 82 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 83 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
# 84 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	special ChangePokemonNickname
# 85 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 86 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_9

Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_13:
# 70 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_9

Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_16:
# 79 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 80 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	hidemoneybox
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp_9


Route4_PokemonCenter_1F_EventScript_Nurse::
# 94 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 95 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


Route4_PokemonCenter_1F_EventScript_Youngster::
# 100 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_ShouldStoreMonsUsingPC, MSGBOX_NPC
	end


Route4_PokemonCenter_1F_EventScript_Newspaper::
# 105 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 106 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_ItsANewspaper
	release_end


Route4_PokemonCenter_1F_Text_CanHaveSixMonsWithYou::
# 110 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Okay, set six POKé BALLS in my\n"
	.string "belt…\p"
	.string "Yeah, that'll do it. At most, you\n"
	.string "can have six POKéMON with you.$"

Route4_PokemonCenter_1F_Text_TeamRocketAttacksCerulean::
# 118 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TEAM ROCKET attacks CERULEAN\n"
	.string "citizens…\p"
	.string "Not a day goes by without TEAM\n"
	.string "ROCKET being in the news.$"

Route4_PokemonCenter_1F_Text_LaddieBuyMagikarpForJust500::
# 126 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "MAN: Hello there, laddie!\n"
	.string "Have I got a deal just for you!\p"
	.string "I'll let you have a secret POKéMON\n"
	.string "- a MAGIKARP - for just ¥500!\p"
	.string "So, you'll buy it, am I right?$"

Route4_PokemonCenter_1F_Text_SweetieBuyMagikarpForJust500::
# 136 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "MAN: Hello there, sweetie pie!\n"
	.string "Have I got a deal just for you!\p"
	.string "I'll let you have a secret POKéMON\n"
	.string "- a MAGIKARP - for just ¥500!\p"
	.string "So, you'll buy it, am I right?$"

Route4_PokemonCenter_1F_Text_PaidOutrageouslyForMagikarp::
# 146 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} paid an outrageous ¥500\n"
	.string "and bought the MAGIKARP…$"

Route4_PokemonCenter_1F_Text_OnlyDoingThisAsFavorToYou::
# 151 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "No? You say no? I'm only doing this\n"
	.string "as a favor to you!$"

Route4_PokemonCenter_1F_Text_NoRoomForMorePokemon::
# 156 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's no more room for any more\n"
	.string "POKéMON, it looks like.$"

Route4_PokemonCenter_1F_Text_YoullNeedMoreMoney::
# 161 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You'll need more money than that!$"

Route4_PokemonCenter_1F_Text_IDontGiveRefunds::
# 165 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "MAN: Well, I don't give refunds.\n"
	.string "You knew what you were getting!$"

Route4_PokemonCenter_1F_Text_ShouldStoreMonsUsingPC::
# 170 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Sometimes, you'll have too many\n"
	.string "POKéMON with you to add any more.\p"
	.string "In that case, you should just\n"
	.string "store some using any PC.$"

Route4_PokemonCenter_1F_Text_ItsANewspaper::
# 178 "data/maps/Route4_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's a newspaper.$"
