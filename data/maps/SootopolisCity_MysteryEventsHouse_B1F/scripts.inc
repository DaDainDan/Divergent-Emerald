SootopolisCity_MysteryEventsHouse_B1F_MapScripts::
# 2 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_MysteryEventsHouse_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_MysteryEventsHouse_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SootopolisCity_MysteryEventsHouse_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special SetEReaderTrainerGfxId
	end

SootopolisCity_MysteryEventsHouse_B1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer
	.2byte 0


SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer::
# 12 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	lockall
# 13 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_Movement_0
# 14 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitmovement 0
# 15 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special CopyEReaderTrainerGreeting
# 16 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 17 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	closemessage
# 18 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_EREADER
# 19 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_0x8005, 0
# 20 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special DoSpecialTrainerBattle
# 21 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	switch VAR_RESULT
# 22 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	case B_OUTCOME_DREW, SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_3
# 25 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	case B_OUTCOME_WON, SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_4
# 30 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	case B_OUTCOME_LOST, SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_5
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_1:
# 36 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	closemessage
# 37 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special HealPlayerParty
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_Movement_1
# 39 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special LoadPlayerParty
# 41 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 42 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	warp MAP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F, 3, 1
# 43 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitstate
# 44 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	releaseall
	end

SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_3:
# 23 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 3
# 24 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	msgbox SootopolisCity_MysteryEventsHouse_B1F_Text_MatchEndedUpDraw, MSGBOX_DEFAULT
	goto SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_1

SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_4:
# 26 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 1
# 27 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special ShowFieldMessageStringVar4
# 28 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitmessage
# 29 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitbuttonpress
	goto SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_1

SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_5:
# 31 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_MYSTERY_EVENTS_STATE, 2
# 32 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	special ShowFieldMessageStringVar4
# 33 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitmessage
# 34 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	waitbuttonpress
	goto SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_1


# 13 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_Movement_0:
# 13 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_down
# 13 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_down
# 13 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_down
# 13 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_right
# 13 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_right
	step_end

# 38 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
SootopolisCity_MysteryEventsHouse_B1F_EventScript_BattleVisitingTrainer_Movement_1:
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_left
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_left
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	walk_up
# 38 "data/maps/SootopolisCity_MysteryEventsHouse_B1F/scripts.pory"
	delay_8
	step_end
