LavaridgeTown_PokemonCenter_2F_MapScripts::
# 2 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
# 3 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 4 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 5 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
	.byte 0


LavaridgeTown_PokemonCenter_2F_EventScript_Colosseum::
# 10 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
	end


LavaridgeTown_PokemonCenter_2F_EventScript_TradeCenter::
# 15 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
	end


LavaridgeTown_PokemonCenter_2F_EventScript_RecordCorner::
# 20 "data/maps/LavaridgeTown_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
	end

