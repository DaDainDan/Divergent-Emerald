MossdeepCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

MossdeepCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MOSSDEEP_CITY
	end


MossdeepCity_PokemonCenter_1F_EventScript_Nurse::
# 10 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_MOSSDEEP_NURSE
# 11 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 13 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
	release_end


MossdeepCity_PokemonCenter_1F_EventScript_Woman::
# 18 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable, MSGBOX_NPC
	end


MossdeepCity_PokemonCenter_1F_EventScript_Girl::
# 23 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	msgbox MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves, MSGBOX_NPC
	end


MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable::
# 27 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "The GYM LEADERS in this town are\n"
	.string "a formidable duo.\p"
	.string "Their combination attacks are, like,\n"
	.string "excellent and wow!$"

MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves::
# 35 "data/maps/MossdeepCity_PokemonCenter_1F/scripts.pory"
	.string "Depending on the special abilities of\n"
	.string "POKéMON, some moves might change\l"
	.string "or not work at all.$"
