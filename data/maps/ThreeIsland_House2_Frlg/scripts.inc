ThreeIsland_House2_Frlg_MapScripts::
	.byte 0


ThreeIsland_House2_EventScript_Man::
# 4 "data/maps/ThreeIsland_House2_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/ThreeIsland_House2_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 1
# 6 "data/maps/ThreeIsland_House2_Frlg/scripts.pory"
	msgbox ThreeIsland_House2_Text_IAdmireSabrina
	release_end


ThreeIsland_House2_EventScript_Rocker::
# 11 "data/maps/ThreeIsland_House2_Frlg/scripts.pory"
	msgbox ThreeIsland_House2_Text_CantMakeThisSpoonBend, MSGBOX_NPC
	end


ThreeIsland_House2_Text_CantMakeThisSpoonBend::
# 15 "data/maps/ThreeIsland_House2_Frlg/scripts.pory"
	.string "Urrrrrrrrgggghhhh…\n"
	.string "Kwaaaaah!\p"
	.string "…It's useless! I can't make this\n"
	.string "spoon bend with my mind.\p"
	.string "Maybe I really don't have any\n"
	.string "psychic powers.$"

ThreeIsland_House2_Text_IAdmireSabrina::
# 26 "data/maps/ThreeIsland_House2_Frlg/scripts.pory"
	.string "You know about a girl GYM LEADER\n"
	.string "in SAFFRON CITY?\p"
	.string "She uses PSYCHIC-type POKéMON,\n"
	.string "right?\p"
	.string "I admire her, I really do.\p"
	.string "I've heard that she's one cool\n"
	.string "customer and beautiful, too.$"
