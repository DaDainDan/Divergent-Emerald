PokemonLeague_HallOfFame_Frlg_MapScripts::
# 2 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_HallOfFame_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_HallOfFame_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

PokemonLeague_HallOfFame_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_EventScript_EnterRoom
	.2byte 0

PokemonLeague_HallOfFame_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

PokemonLeague_HallOfFame_Frlg_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 7 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


PokemonLeague_HallOfFame_EventScript_EnterRoom::
# 14 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	lockall
# 15 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 16 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_HallOfFame_EventScript_EnterRoom_Movement_0
# 17 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitmovement 0
# 18 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_PROF_OAK, Common_Movement_StepFasterLeft
# 19 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 20 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitmovement 0
# 21 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	delay 18
# 22 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	msgbox PokemonLeague_HallOfFame_Text_OakCongratulations
# 23 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	closemessage
# 24 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_PROF_OAK, Common_Movement_StepFasterUp
# 25 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 26 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitmovement 0
# 27 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	delay 20
# 28 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD_FRLG
# 29 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD_FRLG
# 30 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	delay 40
# 31 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 32 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	call EventScript_SetDefeatedEliteFourFlagsVars
# 33 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_PALLET_TOWN
# 34 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 35 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	special EnterHallOfFame
# 36 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	waitstate
# 37 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	releaseall
	end


# 16 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
PokemonLeague_HallOfFame_EventScript_EnterRoom_Movement_0:
# 16 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 16 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 16 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 16 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 16 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 16 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 16 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
# 16 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	walk_up
	step_end

PokemonLeague_HallOfFame_Text_OakCongratulations::
# 41 "data/maps/PokemonLeague_HallOfFame_Frlg/scripts.pory"
	.string "OAK: Er-hem!\n"
	.string "Congratulations, {PLAYER}!\p"
	.string "This floor is the POKéMON HALL OF\n"
	.string "FAME.\p"
	.string "POKéMON LEAGUE CHAMPIONS are\n"
	.string "honored for their exploits here.\p"
	.string "Their POKéMON are also recorded in\n"
	.string "the HALL OF FAME.\p"
	.string "{PLAYER}!\p"
	.string "You have worked hard to become\n"
	.string "the new LEAGUE CHAMPION.\p"
	.string "Congratulations, {PLAYER}, you and\n"
	.string "your POKéMON are HALL OF FAMERS!$"
