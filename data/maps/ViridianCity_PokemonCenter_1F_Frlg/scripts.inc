ViridianCity_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

ViridianCity_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY
	end


ViridianCity_PokemonCenter_1F_EventScript_Nurse::
# 10 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 11 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


ViridianCity_PokemonCenter_1F_EventScript_Boy::
# 16 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown, MSGBOX_NPC
	end


ViridianCity_PokemonCenter_1F_EventScript_Gentleman::
# 21 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC, MSGBOX_NPC
	end


ViridianCity_PokemonCenter_1F_EventScript_Youngster::
# 26 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons, MSGBOX_NPC
	end


ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC::
# 30 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Please feel free to use that PC in\n"
	.string "the corner.\p"
	.string "The receptionist told me so.\n"
	.string "It's so kind of her!$"

ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown::
# 38 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's a POKéMON CENTER in every\n"
	.string "town ahead.\p"
	.string "They charge no money, so don't\n"
	.string "be shy about healing POKéMON.$"

ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons::
# 46 "data/maps/ViridianCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON CENTERS heal your tired,\n"
	.string "hurt, or fainted POKéMON.\p"
	.string "They make all POKéMON completely\n"
	.string "healthy.$"
