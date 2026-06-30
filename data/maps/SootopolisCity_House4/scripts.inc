SootopolisCity_House4_MapScripts::
	.byte 0


SootopolisCity_House4_EventScript_Man::
# 4 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_AncientTreasuresWaitingInSea, MSGBOX_NPC
	end


SootopolisCity_House4_EventScript_Woman::
# 9 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_StrollUnderwaterWithPokemon, MSGBOX_NPC
	end


SootopolisCity_House4_EventScript_Azumarill::
# 14 "data/maps/SootopolisCity_House4/scripts.pory"
	lock_faceplayer
# 15 "data/maps/SootopolisCity_House4/scripts.pory"
	waitse
# 16 "data/maps/SootopolisCity_House4/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 17 "data/maps/SootopolisCity_House4/scripts.pory"
	msgbox SootopolisCity_House4_Text_Azumarill, MSGBOX_DEFAULT
# 18 "data/maps/SootopolisCity_House4/scripts.pory"
	waitmoncry
	release_end


SootopolisCity_House4_Text_AncientTreasuresWaitingInSea::
# 22 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Listen up, and I'll tell you something\n"
	.string "good.\p"
	.string "There's supposed to be an ancient\n"
	.string "ruin in the sea around here.\p"
	.string "There could be treasures just waiting\n"
	.string "to be discovered down there.$"

SootopolisCity_House4_Text_StrollUnderwaterWithPokemon::
# 33 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Ancient treasures…\p"
	.string "It would be nice if they existed, but\n"
	.string "even if they didn't, it would be so\l"
	.string "beautiful to take an underwater\l"
	.string "stroll with my POKéMON.$"

SootopolisCity_House4_Text_Azumarill::
# 42 "data/maps/SootopolisCity_House4/scripts.pory"
	.string "Marurii.$"
