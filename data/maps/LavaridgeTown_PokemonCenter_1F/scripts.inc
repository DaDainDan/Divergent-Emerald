LavaridgeTown_PokemonCenter_1F_MapScripts::
# 2 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LavaridgeTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
# 4 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
	end


LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_LAVARIDGE_NURSE
# 12 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 14 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
	release_end


LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
# 19 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
	end


LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
# 24 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
	end


LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
# 29 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
	end


LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether::
# 33 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I think POKéMON get closer to their\n"
	.string "TRAINERS if they spend time together.\p"
	.string "The longer the better.\n"
	.string "That's what I think.$"

LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate::
# 41 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "It's sort of magical how just sitting\n"
	.string "in a hot-spring pool can invigorate.\p"
	.string "I wish I could let my POKéMON\n"
	.string "soak, too.$"

LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo::
# 49 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Hohoho! Hey, kid, you can reach\n"
	.string "the hot springs from here.\p"
	.string "If POKéMON are getting rest, so too\n"
	.string "should their TRAINERS.$"
