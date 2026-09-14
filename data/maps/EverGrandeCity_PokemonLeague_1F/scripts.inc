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
	.2byte ITEM_FAST_BALL
# 34 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 35 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 36 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 37 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_ELIXIR
# 38 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 39 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_LURE
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_EnhancementClerk::
# 43 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock_faceplayer
# 44 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message gText_HowMayIServeYou
# 45 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 46 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_1F_Pokemart_Enhancement
# 47 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 51 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Pokemart_Enhancement:
# 52 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 53 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HP_UP
# 54 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PROTEIN
# 55 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_IRON
# 56 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CARBOS
# 57 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_CALCIUM
# 58 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ZINC
# 59 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard::
# 63 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lockall
# 64 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_2
# 74 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 75 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	compare VAR_TEMP_0, 11
	goto_if_ge EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_5
# 78 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	compare VAR_TEMP_0, 8
	goto_if_le EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_6
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_4:
# 81 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
# 82 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 83 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 120
# 84 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_10
# 90 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 91 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_LEAGUE_GUARD_1, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_2
# 92 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_LEAGUE_GUARD_2, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_3
# 93 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 94 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 10
# 95 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 96 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
# 97 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 98 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitfanfare
# 99 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 100 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_LEAGUE_GUARD_1
# 101 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_LEAGUE_GUARD_2
# 102 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_ENTERED_ELITE_FOUR
# 103 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_2:
# 65 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 66 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 67 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
# 68 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 69 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 70 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 71 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
	end

EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_5:
# 76 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_0
	goto EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_4

EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_6:
# 79 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_PLAYER, EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_1
	goto EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_4

EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_10:
# 85 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playse SE_FAILURE
# 86 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
# 87 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
	end


# 76 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_0:
# 76 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 76 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 76 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_faster_up
	step_end

# 79 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_1:
# 79 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 79 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 79 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_faster_up
	step_end

# 91 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_2:
# 91 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 91 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_faster_down
	step_end

# 92 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard_Movement_3:
# 92 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 92 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_faster_down
	step_end

EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges::
# 107 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Beyond this point, only those TRAINERS\n"
	.string "who have collected all the GYM BADGES\l"
	.string "are permitted to enter.\p"
	.string "TRAINER, let us confirm that you have\n"
	.string "all the GYM BADGES.$"

EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges::
# 116 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "You haven't obtained all the BADGES.\p"
	.string "If you're bound for the POKéMON\n"
	.string "LEAGUE, you must return with them.$"

EverGrandeCity_PokemonLeague_1F_Text_GoForth::
# 123 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "TRAINER! Believe in yourself and your\n"
	.string "POKéMON, and go forth!$"
