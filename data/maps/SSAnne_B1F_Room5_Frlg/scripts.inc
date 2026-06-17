SSAnne_B1F_Room5_Frlg_MapScripts::
	.byte 0


SSAnne_B1F_Room5_EventScript_Boy::
# 4 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	msgbox SSAnne_B1F_Room5_Text_MachokeHasStrengthToMoveRocks, MSGBOX_NPC
	end


SSAnne_B1F_Room5_EventScript_Machoke::
# 9 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	lock_faceplayer
# 10 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	waitse
# 11 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
# 12 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	msgbox SSAnne_B1F_Room5_Text_Machoke
# 13 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	waitmoncry
	release_end


SSAnne_B1F_Room5_Text_MachokeHasStrengthToMoveRocks::
# 17 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	.string "My buddy MACHOKE is super strong!\p"
	.string "He has enough STRENGTH to move\n"
	.string "big rocks!$"

SSAnne_B1F_Room5_Text_Machoke::
# 24 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	.string "MACHOKE: Gwoh! Goggoh!$"
