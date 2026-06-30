LilycoveCity_House1_MapScripts::
	.byte 0


LilycoveCity_House1_EventScript_ExpertM::
# 4 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_Text_PokemonPartnersNotTools, MSGBOX_NPC
	end


LilycoveCity_House1_EventScript_Kecleon::
# 9 "data/maps/LilycoveCity_House1/scripts.pory"
	lock_faceplayer
# 10 "data/maps/LilycoveCity_House1/scripts.pory"
	waitse
# 11 "data/maps/LilycoveCity_House1/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 12 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_Text_Kecleon, MSGBOX_DEFAULT
# 13 "data/maps/LilycoveCity_House1/scripts.pory"
	waitmoncry
	release_end


LilycoveCity_House1_Text_PokemonPartnersNotTools::
# 17 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "POKéMON are partners to people.\n"
	.string "They aren't our tools.\p"
	.string "Unfortunately, there are some people\n"
	.string "who fail to understand that…$"

LilycoveCity_House1_Text_Kecleon::
# 25 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "Ruroro?$"
