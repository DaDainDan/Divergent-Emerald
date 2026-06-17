FiveIsland_LostCave_Room10_Frlg_MapScripts::
# 2 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FiveIsland_LostCave_Room10_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_LostCave_Room10_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FiveIsland_LostCave_Room10_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	checktrainerflag TRAINER_LADY_SELPHY
	goto_if 1, FiveIsland_LostCave_Room10_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2
FiveIsland_LostCave_Room10_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

FiveIsland_LostCave_Room10_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10, 1
	goto FiveIsland_LostCave_Room10_Frlg_MapScripts_MAP_SCRIPT_ON_RESUME_1

FiveIsland_LostCave_Room10_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10, 0, FiveIsland_LostCave_Room10_EventScript_FindSelphyScene
	.2byte 0


FiveIsland_LostCave_Room10_EventScript_FindSelphyScene::
# 14 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	lockall
# 15 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 16 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	applymovement LOCALID_LOST_CAVE_SELPHY, FiveIsland_LostCave_Room10_Movement_SelphyWander
# 17 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	waitmovement 0
# 18 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay 100
# 19 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	applymovement LOCALID_LOST_CAVE_SELPHY, FiveIsland_LostCave_Room10_EventScript_FindSelphyScene_Movement_0
# 20 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	waitmovement 0
# 21 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	msgbox FiveIsland_LostCave_Room10_Text_SelphyIntro
# 22 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_LADY_SELPHY, FiveIsland_LostCave_Room10_Text_SelphyDefeat
# 23 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	msgbox FiveIsland_LostCave_Room10_Text_MayIAskYouToTakeMeHome
# 24 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	closemessage
# 25 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	call FiveIsland_LostCave_Room10_EventScript_SetSelphyFound
# 26 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	warp MAP_FIVE_ISLAND_RESORT_GORGEOUS, 39, 10
# 27 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	waitstate
# 28 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	releaseall
	end


FiveIsland_LostCave_Room10_EventScript_SetSelphyFound::
# 33 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setflag FLAG_HIDE_LOST_CAVE_SELPHY
# 34 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	clearflag FLAG_HIDE_RESORT_GORGEOUS_SELPHY
# 35 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_LOST_CAVE_ROOM10, 1
# 36 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1
	return


FiveIsland_LostCave_Room10_EventScript_SelphyQuestLog::
# 41 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	settrainerflag TRAINER_LADY_SELPHY
# 42 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	call FiveIsland_LostCave_Room10_EventScript_SetSelphyFound
# 43 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	releaseall
	end


# 47 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_Movement_SelphyWander:
# 49 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_left
# 50 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay_16
# 51 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_right
# 52 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay_16
# 53 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	step_faster_up
# 54 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	delay_16
# 55 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	step_faster_down
	step_end

# 19 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
FiveIsland_LostCave_Room10_EventScript_FindSelphyScene_Movement_0:
# 19 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_down
# 19 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	walk_down
	step_end

FiveIsland_LostCave_Room10_Text_SelphyIntro::
# 58 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "W-what do you intend to do with\n"
	.string "me?$"

FiveIsland_LostCave_Room10_Text_SelphyDefeat::
# 63 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "Oh… I was afraid that you meant to\n"
	.string "harm me.$"

FiveIsland_LostCave_Room10_Text_MayIAskYouToTakeMeHome::
# 68 "data/maps/FiveIsland_LostCave_Room10_Frlg/scripts.pory"
	.string "I am so glad that you happened\n"
	.string "here.\p"
	.string "I grew rather bored of walking,\n"
	.string "and I am feeling fatigued.\p"
	.string "May I ask you to take me home\n"
	.string "from here?$"
