PokemonTower_1F_Frlg_MapScripts::
# 2 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonTower_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PokemonTower_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_TOWER_1F
	end


PokemonTower_1F_EventScript_Channeler::
# 9 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_SenseSpiritsUpToMischief, MSGBOX_NPC
	end


PokemonTower_1F_EventScript_Woman1::
# 14 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_GrowlitheWhyDidYouDie, MSGBOX_NPC
	end


PokemonTower_1F_EventScript_BaldingMan::
# 19 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_CameToPrayForDepartedClefairy, MSGBOX_NPC
	end


PokemonTower_1F_EventScript_Woman2::
# 24 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	lock_faceplayer
	checkplayergender
# 0 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PokemonTower_1F_EventScript_Woman2_2
# 29 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_ComeToPayRespectsGirl
	release_end

PokemonTower_1F_EventScript_Woman2_2:
# 26 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_ComeToPayRespectsSon
	release_end


PokemonTower_1F_EventScript_WorkerF::
# 34 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_ErectedInMemoryOfDeadMons, MSGBOX_NPC
	end


PokemonTower_1F_Text_ErectedInMemoryOfDeadMons::
# 38 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "POKéMON TOWER was erected in the\n"
	.string "memory of POKéMON that died.$"

PokemonTower_1F_Text_ComeToPayRespectsSon::
# 43 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Did you come to pay respects?\p"
	.string "Bless your POKéMON-loving heart,\n"
	.string "son.$"

PokemonTower_1F_Text_ComeToPayRespectsGirl::
# 50 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Did you come to pay respects?\p"
	.string "Bless your POKéMON-loving heart,\n"
	.string "girl.$"

PokemonTower_1F_Text_CameToPrayForDepartedClefairy::
# 57 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "I came to pray for my dearly\n"
	.string "departed CLEFAIRY.\p"
	.string "Sniff!\n"
	.string "I'm awash in tears…$"

PokemonTower_1F_Text_GrowlitheWhyDidYouDie::
# 65 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "My GROWLITHE…\n"
	.string "Why did you die?$"

PokemonTower_1F_Text_SenseSpiritsUpToMischief::
# 70 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "I am a CHANNELER.\p"
	.string "There are spirits up to mischief.\n"
	.string "I sense them high in the TOWER.$"
