BattleFrontier_PokemonCenter_1F_MapScripts::
# 2 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

BattleFrontier_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_BATTLE_FRONTIER_OUTSIDE_EAST
	end


BattleFrontier_PokemonCenter_1F_EventScript_Nurse::
# 10 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_FRONTIER_NURSE
# 11 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitmessage
# 13 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
	release_end


BattleFrontier_PokemonCenter_1F_EventScript_SchoolKid::
# 18 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon, MSGBOX_NPC
	end


BattleFrontier_PokemonCenter_1F_EventScript_Man::
# 23 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena, MSGBOX_NPC
	end


BattleFrontier_PokemonCenter_1F_EventScript_Picnicker::
# 28 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge, MSGBOX_NPC
	end


BattleFrontier_PokemonCenter_1F_EventScript_Skitty::
# 33 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	lock_faceplayer
# 34 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitse
# 35 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 36 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	msgbox BattleFrontier_PokemonCenter_1F_Text_Skitty, MSGBOX_DEFAULT
# 37 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	waitmoncry
	release_end


BattleFrontier_PokemonCenter_1F_Text_NeverSeenPokemon::
# 41 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "There was someone here using a \n"
	.string "POKéMON I've never seen before.\p"
	.string "I never learned about it at\n"
	.string "TRAINER'S SCHOOL at least.\p"
	.string "I wonder where you can catch POKéMON\n"
	.string "like that.$"

BattleFrontier_PokemonCenter_1F_Text_NextStopBattleArena::
# 52 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "Okay! Next stop, the BATTLE ARENA!\n"
	.string "I'd better get the right POKéMON from\l"
	.string "the PC Storage System.$"

BattleFrontier_PokemonCenter_1F_Text_GoingThroughEveryChallenge::
# 58 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "Giggle… I'm going to go through every\n"
	.string "challenge with just this baby!$"

BattleFrontier_PokemonCenter_1F_Text_Skitty::
# 63 "data/maps/BattleFrontier_PokemonCenter_1F/scripts.pory"
	.string "Mya myaaah!$"
