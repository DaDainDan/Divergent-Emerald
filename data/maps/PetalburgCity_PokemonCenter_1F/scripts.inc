PetalburgCity_PokemonCenter_1F_MapScripts::
# 2 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PetalburgCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 4 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
	end


PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_PETALBURG_NURSE
# 12 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 14 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
	release_end


PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
# 19 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
	end


PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
# 24 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
	end


PetalburgCity_PokemonCenter_1F_EventScript_Woman::
# 29 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	lock_faceplayer
# 30 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
	specialvar VAR_RESULT, IsStarterInParty
# 0 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PetalburgCity_PokemonCenter_1F_EventScript_Woman_2
PetalburgCity_PokemonCenter_1F_EventScript_Woman_1:
	release_end

PetalburgCity_PokemonCenter_1F_EventScript_Woman_2:
# 32 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	switch VAR_STARTER_MON
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case PC_CHOSE_TREECKO, PetalburgCity_PokemonCenter_1F_EventScript_Woman_5
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case PC_CHOSE_TORCHIC, PetalburgCity_PokemonCenter_1F_EventScript_Woman_6
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	case PC_CHOSE_MUDKIP, PetalburgCity_PokemonCenter_1F_EventScript_Woman_7
	goto PetalburgCity_PokemonCenter_1F_EventScript_Woman_1

PetalburgCity_PokemonCenter_1F_EventScript_Woman_5:
# 33 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
	goto PetalburgCity_PokemonCenter_1F_EventScript_Woman_1

PetalburgCity_PokemonCenter_1F_EventScript_Woman_6:
# 34 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType, MSGBOX_DEFAULT
	goto PetalburgCity_PokemonCenter_1F_EventScript_Woman_1

PetalburgCity_PokemonCenter_1F_EventScript_Woman_7:
# 35 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType, MSGBOX_DEFAULT
	goto PetalburgCity_PokemonCenter_1F_EventScript_Woman_1


PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem::
# 41 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "That PC-based POKéMON Storage\n"
	.string "System…\p"
	.string "Whoever made it must be some kind\n"
	.string "of a scientific wizard!$"

PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP::
# 49 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "When my POKéMON ate an\n"
	.string "ORAN BERRY, it regained HP!$"

PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon::
# 54 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "There are many types of POKéMON.\p"
	.string "All types have their strengths and\n"
	.string "weaknesses against other types.\p"
	.string "Depending on the types of POKéMON,\n"
	.string "a battle could be easy or hard.$"

PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType::
# 64 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TREECKO\n"
	.string "is a GRASS type.\p"
	.string "It's strong against the WATER and\n"
	.string "GROUND types.\p"
	.string "But, it's weak against FIRE-type\n"
	.string "POKéMON.$"

PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType::
# 75 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your TORCHIC\n"
	.string "is a FIRE type.\p"
	.string "It's strong against the GRASS and\n"
	.string "BUG types.\p"
	.string "But, it's weak against WATER-type\n"
	.string "POKéMON.$"

PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType::
# 86 "data/maps/PetalburgCity_PokemonCenter_1F/scripts.pory"
	.string "For example, your MUDKIP\n"
	.string "is a WATER type.\p"
	.string "It's strong against the FIRE type.\p"
	.string "But, it's weak against GRASS-type\n"
	.string "and ELECTRIC-type POKéMON.$"
