FuchsiaCity_Frlg_MapScripts::
# 4 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FuchsiaCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FUCHSIA_CITY
# 6 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_DOME_FOSSIL, FuchsiaCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 9 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_KABUTO
FuchsiaCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

FuchsiaCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OMANYTE
	goto FuchsiaCity_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


FuchsiaCity_EventScript_LittleBoy::
# 16 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_DidYouTrySafariGame, MSGBOX_NPC
	end


FuchsiaCity_EventScript_OldMan::
# 21 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_SafariZoneZooInFront, MSGBOX_NPC
	end


FuchsiaCity_EventScript_Erik::
# 26 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_WheresSara, MSGBOX_NPC
	end


FuchsiaCity_EventScript_Youngster::
# 31 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_ItemBallInThere, MSGBOX_NPC
	end


FuchsiaCity_EventScript_Lass::
# 36 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lock_faceplayer
# 37 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_KOGA, 3
# 38 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_MyFatherIsGymLeader
	release_end


FuchsiaCity_EventScript_CitySign::
# 43 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_CitySign, MSGBOX_SIGN
	end


FuchsiaCity_EventScript_SafariZoneSign::
# 48 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_SafariZoneSign, MSGBOX_SIGN
	end


FuchsiaCity_EventScript_SafariGameSign::
# 53 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_SafariGameSign, MSGBOX_SIGN
	end


FuchsiaCity_EventScript_WardensHomeSign::
# 58 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_WardensHomeSign, MSGBOX_SIGN
	end


FuchsiaCity_EventScript_SafariZoneOfficeSign::
# 64 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_SafariZoneOfficeSign, MSGBOX_SIGN
	end


FuchsiaCity_EventScript_GymSign::
# 69 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 70 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_KOGA, 0
# 71 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_GymSign
# 72 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
	end


FuchsiaCity_EventScript_ChanseySign::
# 77 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 78 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_CHANSEY
# 79 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto FuchsiaCity_EventScript_PokemonSign
	end


FuchsiaCity_EventScript_VoltorbSign::
# 84 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 85 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_VOLTORB
# 86 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto FuchsiaCity_EventScript_PokemonSign
	end


FuchsiaCity_EventScript_KangaskhanSign::
# 91 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 92 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_KANGASKHAN
# 93 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto FuchsiaCity_EventScript_PokemonSign
	end


FuchsiaCity_EventScript_SlowpokeSign::
# 98 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 99 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_SLOWPOKE
# 100 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto FuchsiaCity_EventScript_PokemonSign
	end


FuchsiaCity_EventScript_LaprasSign::
# 105 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 106 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_LAPRAS
# 107 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto FuchsiaCity_EventScript_PokemonSign
	end


FuchsiaCity_EventScript_FossilMonSign::
# 112 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 113 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_DOME_FOSSIL, FuchsiaCity_EventScript_FossilMonSign_2
# 116 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_KABUTO
FuchsiaCity_EventScript_FossilMonSign_1:
# 118 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto FuchsiaCity_EventScript_PokemonSign
	end

FuchsiaCity_EventScript_FossilMonSign_2:
# 114 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_OMANYTE
	goto FuchsiaCity_EventScript_FossilMonSign_1


FuchsiaCity_EventScript_PokemonSign::
# 123 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	special SetSeenMon
# 124 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	showmonpic VAR_0x8004, 10, 3
# 125 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	switch VAR_0x8004
# 126 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	case SPECIES_CHANSEY, FuchsiaCity_EventScript_PokemonSign_3
# 127 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	case SPECIES_VOLTORB, FuchsiaCity_EventScript_PokemonSign_4
# 128 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	case SPECIES_KANGASKHAN, FuchsiaCity_EventScript_PokemonSign_5
# 129 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	case SPECIES_SLOWPOKE, FuchsiaCity_EventScript_PokemonSign_6
# 130 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	case SPECIES_LAPRAS, FuchsiaCity_EventScript_PokemonSign_7
# 131 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	case SPECIES_OMANYTE, FuchsiaCity_EventScript_PokemonSign_8
# 132 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	case SPECIES_KABUTO, FuchsiaCity_EventScript_PokemonSign_9
FuchsiaCity_EventScript_PokemonSign_1:
# 134 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	hidemonpic
# 135 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
	end

FuchsiaCity_EventScript_PokemonSign_3:
# 126 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_ChanseySign
	goto FuchsiaCity_EventScript_PokemonSign_1

FuchsiaCity_EventScript_PokemonSign_4:
# 127 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_VoltorbSign
	goto FuchsiaCity_EventScript_PokemonSign_1

FuchsiaCity_EventScript_PokemonSign_5:
# 128 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_KangaskhanSign
	goto FuchsiaCity_EventScript_PokemonSign_1

FuchsiaCity_EventScript_PokemonSign_6:
# 129 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_SlowpokeSign
	goto FuchsiaCity_EventScript_PokemonSign_1

FuchsiaCity_EventScript_PokemonSign_7:
# 130 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_LaprasSign
	goto FuchsiaCity_EventScript_PokemonSign_1

FuchsiaCity_EventScript_PokemonSign_8:
# 131 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_OmanyteSign
	goto FuchsiaCity_EventScript_PokemonSign_1

FuchsiaCity_EventScript_PokemonSign_9:
# 132 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_KabutoSign
	goto FuchsiaCity_EventScript_PokemonSign_1


FuchsiaCity_Text_DidYouTrySafariGame::
# 139 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Did you try the SAFARI GAME?\p"
	.string "There are some rare POKéMON that\n"
	.string "can only be caught there.$"

FuchsiaCity_Text_SafariZoneZooInFront::
# 146 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "The SAFARI ZONE has a zoo in front\n"
	.string "of the entrance.\p"
	.string "Out back is the SAFARI GAME for\n"
	.string "catching POKéMON.$"

FuchsiaCity_Text_WheresSara::
# 154 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "ERIK: Where's SARA?\n"
	.string "I said I'd meet her here.$"

FuchsiaCity_Text_ItemBallInThere::
# 159 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "That item ball in there…\n"
	.string "Were you wanting that?\p"
	.string "Me, too!\n"
	.string "…Huh? That's a POKéMON?$"

FuchsiaCity_Text_CitySign::
# 167 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "FUCHSIA CITY\n"
	.string "Behold! It's Passion Pink!$"

FuchsiaCity_Text_SafariZoneSign::
# 172 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "POKéMON PARADISE\n"
	.string "SAFARI ZONE$"

FuchsiaCity_Text_SafariGameSign::
# 177 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "SAFARI GAME\n"
	.string "POKéMON-U-CATCH!$"

FuchsiaCity_Text_WardensHomeSign::
# 182 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "SAFARI ZONE\n"
	.string "WARDEN'S HOME$"

FuchsiaCity_Text_SafariZoneOfficeSign::
# 187 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "POKéMON PARADISE!\n"
	.string "Welcome to the SAFARI ZONE!\l"
	.string "SAFARI ZONE OFFICE$"

FuchsiaCity_Text_GymSign::
# 193 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "FUCHSIA CITY POKéMON GYM\n"
	.string "LEADER: KOGA\l"
	.string "The Poisonous Ninja Master$"

FuchsiaCity_Text_ChanseySign::
# 199 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: CHANSEY\n"
	.string "Catching one is all up to chance.$"

FuchsiaCity_Text_VoltorbSign::
# 204 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: VOLTORB\n"
	.string "The very image of a POKé BALL.$"

FuchsiaCity_Text_KangaskhanSign::
# 209 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: KANGASKHAN\p"
	.string "A maternal POKéMON that raises its\n"
	.string "young in a pouch on its belly.$"

FuchsiaCity_Text_SlowpokeSign::
# 216 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: SLOWPOKE\n"
	.string "Friendly and very slow moving.$"

FuchsiaCity_Text_LaprasSign::
# 221 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: LAPRAS\n"
	.string "AKA the king of the seas.$"

FuchsiaCity_Text_OmanyteSign::
# 226 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: OMANYTE\n"
	.string "An extremely rare POKéMON that was\l"
	.string "regenerated from a fossil.$"

FuchsiaCity_Text_KabutoSign::
# 232 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: KABUTO\n"
	.string "An extremely rare POKéMON that was\l"
	.string "regenerated from a fossil.$"

FuchsiaCity_Text_Ellipsis::
# 239 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "……$"

Text_SubstituteTeach::
# 243 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Aww, I wish I was a KANGASKHAN\n"
	.string "baby.\p"
	.string "I'd love to be a substitute for the\n"
	.string "baby…\p"
	.string "And snuggle in the mother\n"
	.string "KANGASKHAN's belly pouch.\p"
	.string "But only POKéMON can use the\n"
	.string "technique SUBSTITUTE…\p"
	.string "Want me to teach SUBSTITUTE to\n"
	.string "one of your POKéMON?$"

Text_SubstituteDeclined::
# 260 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Oh, really?\n"
	.string "SUBSTITUTE seems so fun…$"

Text_SubstituteWhichMon::
# 265 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Which POKéMON wants to learn\n"
	.string "SUBSTITUTE?$"

Text_SubstituteTaught::
# 270 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Boy, what I'd give to crawl inside\n"
	.string "a KANGASKHAN belly pouch…$"

FuchsiaCity_Text_MyFatherIsGymLeader::
# 275 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "My father is the GYM LEADER of\n"
	.string "this town.\p"
	.string "I'm training to use POISON POKéMON\n"
	.string "as well as my father.$"
