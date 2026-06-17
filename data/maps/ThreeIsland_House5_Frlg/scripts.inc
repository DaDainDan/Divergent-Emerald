ThreeIsland_House5_Frlg_MapScripts::
	.byte 0


ThreeIsland_House5_EventScript_LittleGirl::
# 4 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, ThreeIsland_House5_EventScript_LittleGirl_2
# 9 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	msgbox ThreeIsland_House5_Text_ImNotLostelle
	release_end

ThreeIsland_House5_EventScript_LittleGirl_2:
# 6 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	msgbox ThreeIsland_House5_Text_IllGoPlayWithLostelle
	release_end


ThreeIsland_House5_Text_ImNotLostelle::
# 13 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "Me?\n"
	.string "I'm not LOSTELLE.\p"
	.string "She's probably gone to the\n"
	.string "BERRY FOREST, I think.\p"
	.string "She picks BERRIES there for making\n"
	.string "lunch.$"

ThreeIsland_House5_Text_IllGoPlayWithLostelle::
# 24 "data/maps/ThreeIsland_House5_Frlg/scripts.pory"
	.string "I think I'll go play with LOSTELLE\n"
	.string "today.$"
