SevenIsland_House_Room2_Frlg_MapScripts::
# 2 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_House_Room2_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SevenIsland_House_Room2_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SevenIsland_House_Room2_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special SetEReaderTrainerGfxId
	end

SevenIsland_House_Room2_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SevenIsland_House_Room2_EventScript_BattleVisitingTrainer
	.2byte 0


SevenIsland_House_Room2_EventScript_BattleVisitingTrainer::
# 12 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	lockall
# 13 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_Movement_0
# 14 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitmovement 0
# 15 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special CopyEReaderTrainerGreeting
# 16 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	msgbox gStringVar4
# 17 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	closemessage
# 18 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_0x8004, 2
# 19 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_0x8005, 0
# 20 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special DoSpecialTrainerBattle
# 21 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	switch VAR_RESULT
# 22 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	case 1, SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_3
# 23 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	case 2, SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_4
# 24 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	case 3, SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_5
SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_1:
# 28 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_7
# 28 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_7
SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_6:
# 33 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	closemessage
# 34 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special HealPlayerParty
# 35 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_Movement_1
# 36 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitmovement 0
# 37 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special LoadPlayerParty
# 38 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 39 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	warp MAP_SEVEN_ISLAND_HOUSE_ROOM1, 4, 1
# 40 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitstate
# 41 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	releaseall
	end

SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_3:
# 22 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1
	goto SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_1

SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_4:
# 23 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2
	goto SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_1

SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_5:
# 25 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3
# 26 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_MatchEndedUpDraw
	goto SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_1

SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_7:
# 29 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	special ShowFieldMessageStringVar4
# 30 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitmessage
# 31 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	waitbuttonpress
	goto SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_6


# 13 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_Movement_0:
# 13 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_down
# 13 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_down
# 13 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_down
# 13 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_right
# 13 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_right
	step_end

# 35 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
SevenIsland_House_Room2_EventScript_BattleVisitingTrainer_Movement_1:
# 35 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_left
# 35 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_left
# 35 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_up
# 35 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_up
# 35 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_up
# 35 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	walk_up
# 35 "data/maps/SevenIsland_House_Room2_Frlg/scripts.pory"
	delay_8
	step_end
