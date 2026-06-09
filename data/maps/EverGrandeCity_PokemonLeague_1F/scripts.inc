EverGrandeCity_PokemonLeague_1F_MapScripts::
# 2 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonLeague_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

EverGrandeCity_PokemonLeague_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE
# 4 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
# 5 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_unset FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
EverGrandeCity_PokemonLeague_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

EverGrandeCity_PokemonLeague_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_LEAGUE_GUARD_1, 9, 2
# 7 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_LEAGUE_GUARD_2, 10, 2
	goto EverGrandeCity_PokemonLeague_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


EverGrandeCity_PokemonLeague_1F_EventScript_Nurse::
# 15 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_LEAGUE_NURSE
# 16 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 18 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitbuttonpress
	release_end


EverGrandeCity_PokemonLeague_1F_EventScript_Clerk::
# 23 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock_faceplayer
# 24 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message gText_HowMayIServeYou
# 25 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 26 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart
# 27 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 31 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Pokemart:
# 32 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 33 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 34 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 35 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 36 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 37 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 38 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard::
# 42 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lockall
# 43 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_2
# 53 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 54 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	compare VAR_TEMP_0, 11
	goto_if_ge EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_5
# 57 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_le EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_6
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_4:
# 60 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
# 61 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 62 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 120
# 63 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_10
# 69 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 70 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_LEAGUE_GUARD_1, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_2
# 71 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_LEAGUE_GUARD_2, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_3
# 72 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 10
# 74 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 75 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
# 76 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 77 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitfanfare
# 78 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 79 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_LEAGUE_GUARD_1
# 80 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_LEAGUE_GUARD_2
# 81 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_ENTERED_ELITE_FOUR
# 82 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_2:
# 44 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 45 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 46 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
# 47 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 48 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 49 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_5:
# 55 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_0
	goto EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_4

EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_6:
# 58 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_1
	goto EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_4

EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_10:
# 64 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playse SE_FAILURE
# 65 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
# 66 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
	end


# 55 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_0:
# 55 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 55 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 55 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_faster_up
	step_end

# 58 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_1:
# 58 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 58 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 58 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_faster_up
	step_end

# 70 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_2:
# 70 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 70 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_faster_down
	step_end

# 71 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_3:
# 71 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 71 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_faster_down
	step_end

EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges::
# 86 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Beyond this point, only those TRAINERS\n"
	.string "who have collected all the GYM BADGES\l"
	.string "are permitted to enter.\p"
	.string "TRAINER, let us confirm that you have\n"
	.string "all the GYM BADGES.$"

EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges::
# 95 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "You haven't obtained all the BADGES.\p"
	.string "If you're bound for the POKéMON\n"
	.string "LEAGUE, you must return with them.$"

EverGrandeCity_PokemonLeague_1F_Text_GoForth::
# 102 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TRAINER! Believe in yourself and your\n"
	.string "POKéMON, and go forth!$"
