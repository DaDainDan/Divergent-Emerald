FortreeCity_House5_MapScripts::
	.byte 0


FortreeCity_House5_EventScript_PokefanF::
# 4 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_Text_TreeHousesAreGreat, MSGBOX_NPC
	end


FortreeCity_House5_EventScript_Man::
# 9 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_Text_AdaptedToNature, MSGBOX_NPC
	end


FortreeCity_House5_EventScript_Zigzagoon::
# 14 "data/maps/FortreeCity_House5/scripts.pory"
	lock_faceplayer
# 15 "data/maps/FortreeCity_House5/scripts.pory"
	waitse
# 16 "data/maps/FortreeCity_House5/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 17 "data/maps/FortreeCity_House5/scripts.pory"
	msgbox FortreeCity_House5_Text_Zigzagoon, MSGBOX_DEFAULT
# 18 "data/maps/FortreeCity_House5/scripts.pory"
	waitmoncry
	release_end


FortreeCity_House5_Text_TreeHousesAreGreat::
# 22 "data/maps/FortreeCity_House5/scripts.pory"
	.string "The tree houses of FORTREE are great!\p"
	.string "I think it's the number one town for\n"
	.string "living together with POKéMON.$"

FortreeCity_House5_Text_AdaptedToNature::
# 29 "data/maps/FortreeCity_House5/scripts.pory"
	.string "POKéMON and people have adapted to\n"
	.string "nature for survival.\p"
	.string "There's no need to make nature\n"
	.string "conform to the way we want to live.$"

FortreeCity_House5_Text_Zigzagoon::
# 37 "data/maps/FortreeCity_House5/scripts.pory"
	.string "Bufuu!$"
