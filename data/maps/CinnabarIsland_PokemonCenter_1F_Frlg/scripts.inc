CinnabarIsland_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CinnabarIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
	end


CinnabarIsland_PokemonCenter_1F_EventScript_Nurse::
# 10 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 11 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


CinnabarIsland_PokemonCenter_1F_EventScript_Gentleman::
# 16 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_VisitUnionRoom, MSGBOX_NPC
	end


CinnabarIsland_PokemonCenter_1F_EventScript_CooltrainerF::
# 21 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_CinnabarGymLocked, MSGBOX_NPC
	end


CinnabarIsland_PokemonCenter_1F_EventScript_Youngster::
# 26 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_EvolutionCanWaitForNewMoves, MSGBOX_NPC
	end


CinnabarIsland_PokemonCenter_1F_EventScript_Bill::
# 31 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 32 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_ReadyToSailToOneIsland, MSGBOX_YESNO
# 33 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CinnabarIsland_PokemonCenter_1F_EventScript_Bill_2
# 37 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_LetsGo
# 38 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 39 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 1
# 40 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 41 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 42 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
# 43 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 20
# 44 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	switch VAR_FACING
# 45 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	case DIR_SOUTH, CinnabarIsland_PokemonCenter_1F_EventScript_Bill_6
# 48 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	case DIR_EAST, CinnabarIsland_PokemonCenter_1F_EventScript_Bill_7
# 51 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	case DIR_WEST, CinnabarIsland_PokemonCenter_1F_EventScript_Bill_8
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_4:
# 55 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 56 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	removeobject LOCALID_CINNABAR_POKEMON_CENTER_BILL
# 57 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1
# 58 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 59 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	warp MAP_CINNABAR_ISLAND, 14, 11
# 60 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitstate
	release_end

CinnabarIsland_PokemonCenter_1F_EventScript_Bill_2:
# 34 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_OhNotDoneYet
	release_end

CinnabarIsland_PokemonCenter_1F_EventScript_Bill_6:
# 46 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_EventScript_Bill_Movement_0
# 47 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_EventScript_Bill_Movement_1
	goto CinnabarIsland_PokemonCenter_1F_EventScript_Bill_4

CinnabarIsland_PokemonCenter_1F_EventScript_Bill_7:
# 49 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExitEast
# 50 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitEast
	goto CinnabarIsland_PokemonCenter_1F_EventScript_Bill_4

CinnabarIsland_PokemonCenter_1F_EventScript_Bill_8:
# 52 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CINNABAR_POKEMON_CENTER_BILL, CinnabarIsland_PokemonCenter_1F_EventScript_Bill_Movement_0
# 53 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_PokemonCenter_1F_EventScript_Bill_Movement_2
	goto CinnabarIsland_PokemonCenter_1F_EventScript_Bill_4


# 64 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_BillExitEast:
# 66 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 67 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 67 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 68 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 69 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 69 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 70 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 70 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 70 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 71 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_8
# 72 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	set_invisible
	step_end

# 75 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitEast:
# 77 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 77 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 77 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 78 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	face_left
# 79 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 80 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 80 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 80 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 81 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 81 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 82 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_8
# 83 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 84 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_8
# 85 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	set_invisible
	step_end

# 46 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_Movement_0:
# 46 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 46 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 46 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 46 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 46 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 46 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 46 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 46 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_8
# 46 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	set_invisible
	step_end

# 47 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_Movement_1:
# 47 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 47 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 47 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 47 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 47 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 47 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 47 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 47 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 47 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
	step_end

# 53 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Bill_Movement_2:
# 53 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 53 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 53 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 53 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 53 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 53 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 53 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 53 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 53 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
	step_end

CinnabarIsland_PokemonCenter_1F_Text_CinnabarGymLocked::
# 88 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I came to visit the CINNABAR GYM,\n"
	.string "but the door is locked tight.\p"
	.string "There should be a key for it\n"
	.string "somewhere.\p"
	.string "Could it be in that burned-out\n"
	.string "mansion?\p"
	.string "The GYM LEADER's friend used to\n"
	.string "live there, they say.$"

CinnabarIsland_PokemonCenter_1F_Text_VisitUnionRoom::
# 102 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Do you have lots of friends?\p"
	.string "Linking up with the usual friends\n"
	.string "is fun, of course.\p"
	.string "But how about visiting the\n"
	.string "UNION ROOM every so often?\p"
	.string "Who knows, you may end up making\n"
	.string "new friends.\p"
	.string "I think it would be worth your time\n"
	.string "to check the UNION ROOM.$"

CinnabarIsland_PokemonCenter_1F_Text_EvolutionCanWaitForNewMoves::
# 118 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "POKéMON can still learn techniques\n"
	.string "after canceling evolution.\p"
	.string "Evolution can wait until new moves\n"
	.string "have been learned.$"

CinnabarIsland_PokemonCenter_1F_Text_ReadyToSailToOneIsland::
# 126 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Hey, you kept me waiting!\n"
	.string "Ready to set sail to ONE ISLAND?$"

CinnabarIsland_PokemonCenter_1F_Text_OhNotDoneYet::
# 131 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh, you're still not done yet?$"

CinnabarIsland_PokemonCenter_1F_Text_LetsGo::
# 135 "data/maps/CinnabarIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Well, that's it.\n"
	.string "Let's go!$"
