SeafoamIslands_B4F_Frlg_MapScripts::
# 4 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
# 25 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
# 33 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 40 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_ARTICUNO, SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_unset FLAG_STOPPED_SEAFOAM_B4F_CURRENT, SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_set FLAG_STOPPED_SEAFOAM_B4F_CURRENT, SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	end

SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_ARTICUNO
	goto SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 9 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_CheckBoulders
# 10 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
	goto SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 15 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setmaplayoutindex LAYOUT_SEAFOAM_ISLANDS_B4F_CURRENT_STOPPED
	goto SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 11 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setflag FLAG_STOPPED_SEAFOAM_B4F_CURRENT
	goto SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 20 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_3
SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 21 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 26 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_CheckBoulders
# 27 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 28 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setmetatile 12, 14, METATILE_GeneralFrlg_CalmWater, 0
# 29 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setmetatile 13, 14, METATILE_GeneralFrlg_CalmWater, 0
	goto SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 34 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1, SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 35 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 36 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	special ForcePlayerToStartSurfing
	end

SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 42 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1, SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 50 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, SeafoamIslands_B4F_EventScript_EnterByFalling
	.2byte 0

SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 43 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	lockall
# 44 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 45 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitmovement 0
# 46 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 0
# 47 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	releaseall
	end


SeafoamIslands_B4F_EventScript_CheckBoulders::
# 55 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setvar VAR_TEMP_2, 0
# 56 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_1, SeafoamIslands_B4F_EventScript_CheckBoulders_2
SeafoamIslands_B4F_EventScript_CheckBoulders_1:
# 59 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_2, SeafoamIslands_B4F_EventScript_CheckBoulders_5
SeafoamIslands_B4F_EventScript_CheckBoulders_4:
	return

SeafoamIslands_B4F_EventScript_CheckBoulders_2:
# 57 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto SeafoamIslands_B4F_EventScript_CheckBoulders_1

SeafoamIslands_B4F_EventScript_CheckBoulders_5:
# 60 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	addvar VAR_TEMP_2, 1
	goto SeafoamIslands_B4F_EventScript_CheckBoulders_4


SeafoamIslands_B4F_EventScript_EnterByFalling::
# 67 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	lockall
# 68 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	call SeafoamIslands_B4F_EventScript_CheckBoulders
# 69 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq SeafoamIslands_B4F_EventScript_EnterByFalling_2
# 74 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 75 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	compare VAR_0x8008, 9
	goto_if_lt SeafoamIslands_B4F_EventScript_EnterByFalling_5
# 78 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B4F_EventScript_EnterByFalling_Movement_1
SeafoamIslands_B4F_EventScript_EnterByFalling_4:
# 80 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitmovement 0
# 81 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	special SeafoamIslandsB4F_CurrentDumpsPlayerOnLand
# 82 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 83 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	releaseall
	end

SeafoamIslands_B4F_EventScript_EnterByFalling_2:
# 70 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 71 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	releaseall
	end

SeafoamIslands_B4F_EventScript_EnterByFalling_5:
# 76 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SeafoamIslands_B4F_EventScript_EnterByFalling_Movement_0
	goto SeafoamIslands_B4F_EventScript_EnterByFalling_4


SeafoamIslands_B4F_EventScript_UpwardCurrent::
# 89 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	lockall
# 90 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 91 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitmovement 0
# 92 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	releaseall
	end


SeafoamIslands_B4F_EventScript_Articuno::
# 97 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	lock_faceplayer
# 98 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setwildbattle SPECIES_ARTICUNO, 50
# 99 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitse
# 100 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 101 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	message Text_Gyaoo
# 102 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitmessage
# 103 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitmoncry
# 104 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	delay 10
# 105 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 106 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	waitbuttonpress
# 107 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 108 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 109 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 110 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 111 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	switch VAR_RESULT
# 112 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	case B_OUTCOME_WON, SeafoamIslands_B4F_EventScript_Articuno_3
# 115 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	case B_OUTCOME_RAN, SeafoamIslands_B4F_EventScript_Articuno_4
# 116 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, SeafoamIslands_B4F_EventScript_Articuno_4
SeafoamIslands_B4F_EventScript_Articuno_1:
# 120 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_ARTICUNO
	release_end

SeafoamIslands_B4F_EventScript_Articuno_3:
# 113 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_ARTICUNO
# 114 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
	goto SeafoamIslands_B4F_EventScript_Articuno_1

SeafoamIslands_B4F_EventScript_Articuno_4:
# 117 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARTICUNO
# 118 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
	goto SeafoamIslands_B4F_EventScript_Articuno_1


SeafoamIslands_B4F_EventScript_BoulderHintSign::
# 125 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	msgbox SeafoamIslands_B4F_Text_BouldersMightChangeWaterFlow, MSGBOX_SIGN
	end


SeafoamIslands_B4F_EventScript_FastCurrentSign::
# 130 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	msgbox SeafoamIslands_B4F_Text_DangerFastCurrent, MSGBOX_SIGN
	end


# 44 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 44 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	run_up
# 44 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	run_up
# 44 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	run_up
	step_end

# 76 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterByFalling_Movement_0:
# 76 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
# 76 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
# 76 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
# 76 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_right
# 76 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_right
# 76 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_right
# 76 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_right
# 76 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
	step_end

# 78 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterByFalling_Movement_1:
# 78 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
# 78 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
# 78 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
# 78 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_right
# 78 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_right
# 78 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_right
# 78 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	walk_up
	step_end

Text_RockSlideTeach::
# 134 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "When you're up on a rocky mountain\n"
	.string "like this, rockslides are a threat.\p"
	.string "Can you imagine?\n"
	.string "Boulders tumbling down on you?\p"
	.string "That'd be, like, waaaaaaaaaaah!\n"
	.string "Total terror!\p"
	.string "You don't seem to be scared.\n"
	.string "Want to try using ROCK SLIDE?$"

Text_RockSlideDeclined::
# 148 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "Oh, so you are scared after all.$"

Text_RockSlideWhichMon::
# 152 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "Which POKéMON should I teach\n"
	.string "ROCK SLIDE?$"

Text_RockSlideTaught::
# 157 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "It might be scary to use it in this\n"
	.string "tunnel…$"

SeafoamIslands_B4F_Text_BouldersMightChangeWaterFlow::
# 162 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "Hint: Boulders might change the\n"
	.string "flow of water.$"

SeafoamIslands_B4F_Text_DangerFastCurrent::
# 167 "data/maps/SeafoamIslands_B4F_Frlg/scripts.pory"
	.string "DANGER\n"
	.string "Fast current!$"
