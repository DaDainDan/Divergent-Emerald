LavenderTown_House1_Frlg_MapScripts::
	.byte 0


LavenderTown_House1_EventScript_CooltrainerF::
# 4 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_House1_EventScript_CooltrainerF_2
# 9 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	msgbox LavenderTown_House1_Text_RocketsKilledCubonesMother
	release_end

LavenderTown_House1_EventScript_CooltrainerF_2:
# 6 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	msgbox LavenderTown_House1_Text_GhostOfPokemonTowerIsGone
	release_end


LavenderTown_House1_EventScript_Cubone::
# 14 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	lock_faceplayer
# 15 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	waitse
# 16 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	playmoncry SPECIES_CUBONE, CRY_MODE_NORMAL
# 17 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	msgbox LavenderTown_House1_Text_Cubone
# 18 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	waitmoncry
	release_end


LavenderTown_House1_Text_Cubone::
# 22 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "CUBONE: Kyarugoo!$"

LavenderTown_House1_Text_RocketsKilledCubonesMother::
# 26 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "Those horrible ROCKETS!\n"
	.string "They deserve no mercy!\p"
	.string "That poor CUBONE's mother…\p"
	.string "It was killed trying to escape from\n"
	.string "TEAM ROCKET.$"

LavenderTown_House1_Text_GhostOfPokemonTowerIsGone::
# 36 "data/maps/LavenderTown_House1_Frlg/scripts.pory"
	.string "The ghost of POKéMON TOWER is\n"
	.string "gone!\p"
	.string "Someone must have soothed its\n"
	.string "restless spirit!$"
