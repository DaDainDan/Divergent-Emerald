DewfordTown_House1_MapScripts::
	.byte 0


DewfordTown_House1_EventScript_Man::
# 4 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland, MSGBOX_NPC
	end


DewfordTown_House1_EventScript_Woman::
# 9 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_NPC
	end


DewfordTown_House1_EventScript_Zigzagoon::
# 14 "data/maps/DewfordTown_House1/scripts.pory"
	lock_faceplayer
# 15 "data/maps/DewfordTown_House1/scripts.pory"
	waitse
# 16 "data/maps/DewfordTown_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 17 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
# 18 "data/maps/DewfordTown_House1/scripts.pory"
	waitmoncry
	release_end


DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland::
# 22 "data/maps/DewfordTown_House1/scripts.pory"
	.string "There's a lot to be said for living on\n"
	.string "a small island like this in harmony with\l"
	.string "POKéMON and the family.$"

DewfordTown_House1_Text_LifeGoesSlowlyOnIsland::
# 28 "data/maps/DewfordTown_House1/scripts.pory"
	.string "I left the major port of SLATEPORT\n"
	.string "CITY when I married my husband here.\p"
	.string "Life goes by slowly on this little\n"
	.string "island. But being surrounded by the\l"
	.string "beautiful sea--that's happiness, too.$"

DewfordTown_House1_Text_Zigzagoon::
# 37 "data/maps/DewfordTown_House1/scripts.pory"
	.string "ZIGZAGOON: Guguuh!$"
