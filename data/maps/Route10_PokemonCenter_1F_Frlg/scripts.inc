Route10_PokemonCenter_1F_Frlg_MapScripts::
# 4 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Route10_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
# 6 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE10
	end


Route10_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 14 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


Route10_PokemonCenter_1F_EventScript_FatMan::
# 19 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000, MSGBOX_NPC
	end


Route10_PokemonCenter_1F_EventScript_Gentleman::
# 24 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers, MSGBOX_NPC
	end


Route10_PokemonCenter_1F_EventScript_Youngster::
# 29 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender, MSGBOX_NPC
	end


Route10_PokemonCenter_1F_EventScript_Aide::
# 34 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 35 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
# 36 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE, Route10_PokemonCenter_1F_EventScript_Aide_2
Route10_PokemonCenter_1F_EventScript_Aide_1:
# 55 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_ExplainEverstone
	release_end

Route10_PokemonCenter_1F_EventScript_Aide_2:
# 37 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_GiveEverstoneIfCaught20Mons, MSGBOX_YESNO
# 38 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route10_PokemonCenter_1F_EventScript_Aide_5
Route10_PokemonCenter_1F_EventScript_Aide_4:
# 41 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 42 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 43 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 44 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
# 45 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_0x8006, 20
	goto_if_lt Route10_PokemonCenter_1F_EventScript_Aide_8
Route10_PokemonCenter_1F_EventScript_Aide_7:
# 48 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_GreatHereYouGo
	checkitemspace ITEM_EVERSTONE
# 0 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route10_PokemonCenter_1F_EventScript_Aide_11
Route10_PokemonCenter_1F_EventScript_Aide_10:
# 52 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	giveitem_msg Route10_PokemonCenter_1F_Text_ReceivedEverstoneFromAide, ITEM_EVERSTONE
# 53 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE
	goto Route10_PokemonCenter_1F_EventScript_Aide_1

Route10_PokemonCenter_1F_EventScript_Aide_5:
# 39 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto Aide_EventScript_DeclineCheckMons
	goto Route10_PokemonCenter_1F_EventScript_Aide_4

Route10_PokemonCenter_1F_EventScript_Aide_8:
# 46 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto Aide_EventScript_HaventCaughtEnough
	goto Route10_PokemonCenter_1F_EventScript_Aide_7

Route10_PokemonCenter_1F_EventScript_Aide_11:
# 50 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto Aide_EventScript_NoRoomForItem
	goto Route10_PokemonCenter_1F_EventScript_Aide_10


Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo::
# 60 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, 20
# 61 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_EVERSTONE
	return


Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers::
# 65 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The types of POKéMON match up\n"
	.string "differently with each other.\p"
	.string "Every type is stronger than some\n"
	.string "types and weaker than others.$"

Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000::
# 73 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "A NUGGET is totally useless.\n"
	.string "So I sold it for ¥5000.$"

Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender::
# 78 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I heard that ghosts haunt\n"
	.string "LAVENDER TOWN.$"

Route10_PokemonCenter_1F_Text_GiveEverstoneIfCaught20Mons::
# 83 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh… {PLAYER}!\n"
	.string "I've been looking for you!\p"
	.string "It's me, one of the ever-present\n"
	.string "AIDES to PROF. OAK.\p"
	.string "If your POKéDEX has complete data\n"
	.string "on twenty species, I'm supposed to\l"
	.string "give you a reward from PROF. OAK.\p"
	.string "He entrusted me with this\n"
	.string "EVERSTONE.\p"
	.string "So, {PLAYER}, let me ask you.\p"
	.string "Have you gathered data on at least\n"
	.string "twenty kinds of POKéMON?$"

Route10_PokemonCenter_1F_Text_GreatHereYouGo::
# 103 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Great! You have caught or owned\n"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
	.string "Congratulations!\n"
	.string "Here you go!$"

Route10_PokemonCenter_1F_Text_ReceivedEverstoneFromAide::
# 111 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} received the EVERSTONE\n"
	.string "from the AIDE.$"

Route10_PokemonCenter_1F_Text_ExplainEverstone::
# 116 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Making POKéMON evolve certainly\n"
	.string "can add to the POKéDEX.\p"
	.string "However, at times, you may not\n"
	.string "want a certain POKéMON to evolve.\p"
	.string "In that case, give the EVERSTONE\n"
	.string "to that POKéMON.\p"
	.string "It will prevent evolution according\n"
	.string "to the PROFESSOR.$"
