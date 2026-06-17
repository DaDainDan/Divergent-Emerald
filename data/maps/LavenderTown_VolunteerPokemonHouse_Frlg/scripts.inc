LavenderTown_VolunteerPokemonHouse_Frlg_MapScripts::
	.byte 0


LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji::
# 4 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POKE_FLUTE, LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_2
# 9 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis
	checkitemspace ITEM_POKE_FLUTE
# 0 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_5
# 14 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_POKE_FLUTE
# 15 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	giveitem_msg LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji, ITEM_POKE_FLUTE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 16 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute
	release_end

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_2:
# 6 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou
	release_end

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_5:
# 11 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis
	release_end


LavenderTown_VolunteerPokemonHouse_EventScript_LittleGirl::
# 21 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lock_faceplayer
# 22 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 0
# 23 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons
	release_end


LavenderTown_VolunteerPokemonHouse_EventScript_LittleBoy::
# 28 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug, MSGBOX_NPC
	end


LavenderTown_VolunteerPokemonHouse_EventScript_Youngster::
# 33 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lock_faceplayer
# 34 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_VolunteerPokemonHouse_EventScript_Youngster_2
# 38 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo
	release_end

LavenderTown_VolunteerPokemonHouse_EventScript_Youngster_2:
# 35 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother
	release_end


LavenderTown_VolunteerPokemonHouse_EventScript_Nidorino::
# 43 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lock_faceplayer
# 44 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	waitse
# 45 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	playmoncry SPECIES_NIDORINO, CRY_MODE_NORMAL
# 46 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Nidorino
# 47 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	waitmoncry
	release_end


LavenderTown_VolunteerPokemonHouse_EventScript_Psyduck::
# 52 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lock_faceplayer
# 53 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	waitse
# 54 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 55 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Psyduck
# 56 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	waitmoncry
	release_end


LavenderTown_VolunteerPokemonHouse_EventScript_PokemonFanMagazine::
# 61 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lockall
# 62 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 2
# 63 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped
# 64 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	releaseall
	end


LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf::
# 69 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf, MSGBOX_SIGN
	end


LavenderTown_PokemonCenter_1F_Text_HearMrFujiNotFromAroundHere::
# 73 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "I recently moved to this town.\p"
	.string "I hear that MR. FUJI's not from\n"
	.string "these parts originally, either.$"

LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo::
# 80 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "That's odd, MR. FUJI isn't here.\n"
	.string "Where'd he go?$"

LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother::
# 85 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "MR. FUJI had been praying alone\n"
	.string "for CUBONE's mother.$"

LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons::
# 90 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "This is really MR. FUJI's house.\p"
	.string "He's really kind.\p"
	.string "He looks after abandoned and\n"
	.string "orphaned POKéMON.$"

LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug::
# 99 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "It's so warm!\n"
	.string "POKéMON are so nice to hug.$"

LavenderTown_VolunteerPokemonHouse_Text_Nidorino::
# 104 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "NIDORINO: Gaoo!$"

LavenderTown_VolunteerPokemonHouse_Text_Psyduck::
# 108 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "PSYDUCK: Gwappa!$"

LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis::
# 112 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "MR. FUJI: {PLAYER}…\p"
	.string "Your POKéDEX quest is one that\n"
	.string "requires strong dedication.\p"
	.string "Without deep love for POKéMON,\n"
	.string "your quest may fail.\p"
	.string "I'm not sure if this will help you,\n"
	.string "but I'd like you to have it.$"

LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji::
# 125 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "{PLAYER} received a POKé FLUTE\n"
	.string "from MR. FUJI.$"

LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute::
# 130 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Upon hearing the POKé FLUTE,\n"
	.string "sleeping POKéMON will spring awake.\p"
	.string "Try using it on POKéMON that are\n"
	.string "sleeping obstacles.$"

LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis::
# 138 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "You must make room for this!$"

LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou::
# 142 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "MR. FUJI: Has my POKé FLUTE\n"
	.string "helped you?$"

LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped::
# 147 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "POKéMON FAN MAGAZINE\n"
	.string "Monthly Grand Prize Drawing!\p"
	.string "The application form is…\p"
	.string "Gone! It's been clipped out.\n"
	.string "Someone must have applied already.$"

LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf::
# 157 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "POKéMON magazines line the shelf.\p"
	.string "POKéMON INSIDER…\p"
	.string "POKéMON FAN…$"
