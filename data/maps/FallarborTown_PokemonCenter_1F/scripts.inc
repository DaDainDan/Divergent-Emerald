FallarborTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FallarborTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
# 4 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
	end


FallarborTown_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_FALLARBOR_NURSE
# 12 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 14 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
	release_end


FallarborTown_PokemonCenter_1F_EventScript_Girl::
# 19 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown, MSGBOX_NPC
	end


FallarborTown_PokemonCenter_1F_EventScript_ExpertM::
# 24 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees, MSGBOX_NPC
	end


FallarborTown_PokemonCenter_1F_EventScript_Lanette::
# 29 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	lock_faceplayer
# 30 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	msgbox FallarborTown_PokemonCenter_1F_Text_LanetteGreeting, MSGBOX_DEFAULT
# 31 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 32 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	switch VAR_FACING
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case DIR_NORTH, FallarborTown_PokemonCenter_1F_EventScript_Lanette_3
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	case DIR_WEST, FallarborTown_PokemonCenter_1F_EventScript_Lanette_4
FallarborTown_PokemonCenter_1F_EventScript_Lanette_1:
# 36 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 37 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	playse SE_SLIDING_DOOR
# 38 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_FALLARBOR_LANETTE
# 39 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
	release_end

FallarborTown_PokemonCenter_1F_EventScript_Lanette_3:
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_FALLARBOR_LANETTE, FallarborTown_PokemonCenter_1F_EventScript_Lanette_Movement_0
	goto FallarborTown_PokemonCenter_1F_EventScript_Lanette_1

FallarborTown_PokemonCenter_1F_EventScript_Lanette_4:
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_FALLARBOR_LANETTE, FallarborTown_PokemonCenter_1F_EventScript_Lanette_Movement_1
	goto FallarborTown_PokemonCenter_1F_EventScript_Lanette_1


# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Lanette_Movement_0:
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_right
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 33 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	delay_8
	step_end

# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
FallarborTown_PokemonCenter_1F_EventScript_Lanette_Movement_1:
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_left
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	walk_down
# 34 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	delay_8
	step_end

FallarborTown_PokemonCenter_1F_Text_LanetteGreeting::
# 43 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, hello.\n"
	.string "You are?\p"
	.string "Okay, your name's {PLAYER}{KUN}.\n"
	.string "I can see that you're a TRAINER.\p"
	.string "So that means you use the POKéMON\n"
	.string "Storage System I developed.\p"
	.string "How I arrived at that conclusion is\n"
	.string "a simple deductive process.\p"
	.string "You spoke to me because you wanted\n"
	.string "to access something on this PC.\p"
	.string "Oh, I'm sorry. I'm LANETTE.\p"
	.string "Honestly, I'm glad to meet you--it's\n"
	.string "great you're using the Storage System.\p"
	.string "If you could, please visit me at home.\n"
	.string "My house is on ROUTE 114.$"

FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown::
# 68 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "I wonder what POKéMON looked like\n"
	.string "long, long ago?\p"
	.string "Maybe the FOSSIL MANIAC at the edge\n"
	.string "of town will know.$"

FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees::
# 76 "data/maps/FallarborTown_PokemonCenter_1F/scripts.pory"
	.string "In the fields of FALLARBOR, we plant\n"
	.string "seedlings of hardy trees that thrive\l"
	.string "even in volcanic ash.$"
