FuchsiaCity_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FuchsiaCity_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_FUCHSIA_CITY
	end


FuchsiaCity_PokemonCenter_1F_EventScript_Nurse::
# 10 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 11 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


FuchsiaCity_PokemonCenter_1F_EventScript_Man::
# 16 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FuchsiaCity_PokemonCenter_1F_Text_CantBecomeGoodTrainerWithOneMon, MSGBOX_NPC
	end


FuchsiaCity_PokemonCenter_1F_EventScript_CooltrainerF::
# 21 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FuchsiaCity_PokemonCenter_1F_Text_PokemonLeagueWestOfViridian, MSGBOX_NPC
	end


FuchsiaCity_PokemonCenter_1F_EventScript_Youngster::
# 26 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FuchsiaCity_PokemonCenter_1F_Text_VisitSafariZoneForPokedex, MSGBOX_NPC
	end


FuchsiaCity_PokemonCenter_1F_Text_CantBecomeGoodTrainerWithOneMon::
# 30 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "You can't become a good TRAINER\n"
	.string "with just one strong POKéMON.\p"
	.string "But raising many POKéMON evenly\n"
	.string "is no easy task, either.$"

FuchsiaCity_PokemonCenter_1F_Text_PokemonLeagueWestOfViridian::
# 38 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's a narrow trail west of\n"
	.string "VIRIDIAN CITY.\p"
	.string "It goes to the POKéMON LEAGUE HQ.\n"
	.string "The HQ governs all TRAINERS.$"

FuchsiaCity_PokemonCenter_1F_Text_VisitSafariZoneForPokedex::
# 46 "data/maps/FuchsiaCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If you're working on a POKéDEX,\n"
	.string "visit the SAFARI ZONE.\p"
	.string "All sorts of rare POKéMON breed\n"
	.string "there.$"
