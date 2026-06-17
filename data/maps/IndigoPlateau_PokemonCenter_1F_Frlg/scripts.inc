IndigoPlateau_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

IndigoPlateau_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_INDIGO_PLATEAU
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 0 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq IndigoPlateau_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
IndigoPlateau_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

IndigoPlateau_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectxyperm LOCALID_LEAGUE_DOOR_GUARD, 4, 2
	goto IndigoPlateau_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

IndigoPlateau_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 4 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, IndigoPlateau_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto IndigoPlateau_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard::
# 13 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 0 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard_2
# 22 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
	release_end

IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard_2:
# 15 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard_5
# 19 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing
	release_end

IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard_5:
# 16 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
	release_end


IndigoPlateau_PokemonCenter_1F_EventScript_GymGuy::
# 27 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice, MSGBOX_NPC
	end


IndigoPlateau_PokemonCenter_1F_EventScript_Clerk::
# 32 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 33 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 34 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 35 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	pokemart IndigoPlateau_PokemonCenter_1F_Items
# 36 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 40 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Items:
# 41 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 42 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 43 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 44 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte ITEM_MAX_POTION
# 45 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 46 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 47 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

IndigoPlateau_PokemonCenter_1F_EventScript_Nurse::
# 51 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 52 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice::
# 56 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Yo!\n"
	.string "Champ in the making!\p"
	.string "At the POKéMON LEAGUE, you will\n"
	.string "face the ELITE FOUR all in a row.\p"
	.string "If you lose, you have to start all\n"
	.string "over again!\p"
	.string "This is it!\n"
	.string "Go for it!$"

IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck::
# 70 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "From here on, you face the\n"
	.string "ELITE FOUR one by one.\p"
	.string "If you win, a door opens to the\n"
	.string "next TRAINER. Good luck!$"

IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing::
# 78 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I am so sorry, but you've wasted\n"
	.string "your time coming here.\p"
	.string "LORELEI of the ELITE FOUR is\n"
	.string "absent, you see.\p"
	.string "As a result, the POKéMON LEAGUE is\n"
	.string "closed for the time being.$"

IndigoPlateau_PokemonCenter_1F_Text_AgathaWhuppedUs::
# 89 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "AGATHA's GHOST-type POKéMON are\n"
	.string "horrifically terrifying in toughness.\p"
	.string "I took my FIGHTING-type POKéMON\n"
	.string "and raised them to the max.\p"
	.string "I went at AGATHA feeling pretty\n"
	.string "confident, but she whupped us.\p"
	.string "That old lady's also got a really\n"
	.string "short fuse, too.\p"
	.string "It doesn't take anything to get\n"
	.string "that scary lady hollering.$"

IndigoPlateau_PokemonCenter_1F_Text_LancesCousinGymLeaderFarAway::
# 106 "data/maps/IndigoPlateau_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Maybe becoming an ELITE FOUR\n"
	.string "member is in the blood.\p"
	.string "From what I've heard, LANCE has\n"
	.string "a cousin who's a GYM LEADER\l"
	.string "somewhere far away.$"
