SevenIsland_TrainerTower_Frlg_MapScripts::
# 2 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TrainerTower_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SevenIsland_TrainerTower_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 0
	end


SevenIsland_TrainerTower_EventScript_TrainerTowerSign::
# 9 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerSign, MSGBOX_SIGN
	end


SevenIsland_TrainerTower_EventScript_TrainerTowerAheadSign::
# 14 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerAhead, MSGBOX_SIGN
	end


SevenIsland_TrainerTower_Text_DarioIntro::
# 18 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "I sensed your approach.$"

SevenIsland_TrainerTower_Text_DarioDefeat::
# 22 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "Give up…$"

SevenIsland_TrainerTower_Text_DarioPostBattle::
# 26 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "In your future, I sense that you\n"
	.string "will meet many others.\p"
	.string "I think you will be linked to each\n"
	.string "other by a strange power.$"

SevenIsland_TrainerTower_Text_RodetteIntro::
# 34 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "Somewhere on this island, peculiar\n"
	.string "POKéMON are sleeping.$"

SevenIsland_TrainerTower_Text_RodetteDefeat::
# 39 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "What an amazing TRAINER!$"

SevenIsland_TrainerTower_Text_RodettePostBattle::
# 43 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "Somewhere on this island, peculiar\n"
	.string "POKéMON are sleeping.\p"
	.string "Could it be that they're waiting\n"
	.string "for you?$"

SevenIsland_TrainerTower_Text_TrainerTowerSign::
# 51 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "TRAINER TOWER ENTRANCE\n"
	.string "Rise to the Challenge, TRAINERS!$"

SevenIsland_TrainerTower_Text_TrainerTowerAhead::
# 56 "data/maps/SevenIsland_TrainerTower_Frlg/scripts.pory"
	.string "TRAINER TOWER AHEAD$"
