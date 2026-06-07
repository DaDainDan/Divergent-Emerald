VerdanturfTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

VerdanturfTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
# 4 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
	end


VerdanturfTown_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_VERDANTURF_NURSE
# 12 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 14 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
	release_end


VerdanturfTown_PokemonCenter_1F_EventScript_Gentleman::
# 19 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	msgbox VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon, MSGBOX_NPC
	end


VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM::
# 24 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	msgbox VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent, MSGBOX_NPC
	end


VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon::
# 28 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "You can't consider yourself a real\n"
	.string "TRAINER if you don't have faith\l"
	.string "in your POKéMON.\p"
	.string "Only those people who can believe\n"
	.string "in their battling POKéMON can win\l"
	.string "through to the very end.$"

VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent::
# 38 "data/maps/VerdanturfTown_PokemonCenter_1F/scripts.pory"
	.string "The reason why anyone would visit\n"
	.string "VERDANTURF…\p"
	.string "It's the BATTLE TENT. It goes without\n"
	.string "saying.\p"
	.string "Or is there somebody here that you\n"
	.string "came to see?$"
