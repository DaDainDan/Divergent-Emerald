ThreeIsland_Mart_Frlg_MapScripts::
	.byte 0


ThreeIsland_Mart_EventScript_Clerk::
# 4 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 7 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	pokemart ThreeIsland_Mart_Items
# 8 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 12 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_Items:
# 13 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 14 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 15 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 16 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 17 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 18 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

ThreeIsland_Mart_EventScript_Picnicker::
# 22 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	msgbox ThreeIsland_Mart_Text_TrueThatCeldadonDeptStoreBigger, MSGBOX_NPC
	end


ThreeIsland_Mart_EventScript_BugCatcher::
# 27 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	msgbox ThreeIsland_Mart_Text_PeopleHealWithBerriesFromForest, MSGBOX_NPC
	end


ThreeIsland_Mart_EventScript_Youngster::
# 32 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	msgbox ThreeIsland_Mart_Text_BikersWereAboutToTrashMart, MSGBOX_NPC
	end


ThreeIsland_Mart_Text_TrueThatCeldadonDeptStoreBigger::
# 36 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "Is it true?\p"
	.string "CELADON DEPT. STORE is several\n"
	.string "times bigger than this shop?$"

ThreeIsland_Mart_Text_PeopleHealWithBerriesFromForest::
# 43 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "I sometimes buy medicine here.\p"
	.string "But a lot of people heal POKéMON\n"
	.string "with BERRIES from BERRY FOREST.\p"
	.string "After all, BERRIES are free and\n"
	.string "they never run out.$"

ThreeIsland_Mart_Text_BikersWereAboutToTrashMart::
# 53 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "Those BIKERS were about to trash\n"
	.string "this POKéMON MART.\p"
	.string "Am I glad they decided to leave!$"
