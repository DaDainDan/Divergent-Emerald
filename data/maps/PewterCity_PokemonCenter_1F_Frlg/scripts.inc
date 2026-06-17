PewterCity_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PewterCity_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_PEWTER_CITY
	end


PewterCity_PokemonCenter_1F_EventScript_Nurse::
# 10 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 11 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


PewterCity_PokemonCenter_1F_EventScript_Gentleman::
# 16 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone, MSGBOX_NPC
	end


PewterCity_PokemonCenter_1F_EventScript_Jigglypuff::
# 21 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 22 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	fadeoutbgm 0
# 23 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, 0
# 24 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	message PewterCity_PokemonCenter_1F_Text_Jigglypuff
# 25 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 26 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	delay 455
# 27 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	playbgm MUS_POKE_CENTER, 1
	release_end


PewterCity_PokemonCenter_1F_EventScript_Youngster::
# 32 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy, MSGBOX_NPC
	end


PewterCity_PokemonCenter_1F_EventScript_GBAKid1::
# 37 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 38 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu
	release_end


PewterCity_PokemonCenter_1F_EventScript_GBAKid2::
# 43 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid, MSGBOX_NPC
	end


PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone::
# 47 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "What!?\p"
	.string "TEAM ROCKET is at MT. MOON?\n"
	.string "Huh?\p"
	.string "I'm on the phone!\n"
	.string "Scram!$"

PewterCity_PokemonCenter_1F_Text_Jigglypuff::
# 57 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "JIGGLYPUFF: Puu pupuu!$"

PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy::
# 61 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Yawn!\p"
	.string "When JIGGLYPUFF sings, POKéMON get\n"
	.string "drowsy…\p"
	.string "…Me, too…\n"
	.string "Snore…$"

PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu::
# 71 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I really want a PIKACHU, so I'm\n"
	.string "trading my CLEFAIRY for one.$"

PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid::
# 76 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm trading POKéMON with that kid\n"
	.string "there.\p"
	.string "I had two PIKACHU, so I figured\n"
	.string "I might as well trade one.$"
