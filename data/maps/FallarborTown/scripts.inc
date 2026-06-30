FallarborTown_MapScripts::
# 2 "data/maps/FallarborTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FallarborTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 4 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 5 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_CONTEST_SKETCH_CREATED
	end


FallarborTown_EventScript_ExpertM::
# 11 "data/maps/FallarborTown/scripts.pory"
	lock_faceplayer
# 12 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertM_2
# 16 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
	release_end

FallarborTown_EventScript_ExpertM_2:
# 13 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
	release_end


FallarborTown_EventScript_Girl::
# 21 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
	end


FallarborTown_EventScript_Gentleman::
# 26 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
	end


FallarborTown_EventScript_Azurill::
# 31 "data/maps/FallarborTown/scripts.pory"
	lock_faceplayer
# 32 "data/maps/FallarborTown/scripts.pory"
	waitse
# 33 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 34 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 35 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
	release_end


FallarborTown_EventScript_BattleTentSign::
# 40 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
	end


FallarborTown_EventScript_TownSign::
# 45 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
	end


FallarborTown_EventScript_MoveTutorSign::
# 50 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
	end


FallarborTown_Text_ShadyCharactersCozmosHome::
# 54 "data/maps/FallarborTown/scripts.pory"
	.string "Something's happening,\n"
	.string "and I don't like it!\p"
	.string "I've seen shady characters wandering\n"
	.string "in and out of PROF. COZMO's home…$"

FallarborTown_Text_RegionKnownForMeteors::
# 62 "data/maps/FallarborTown/scripts.pory"
	.string "This region's been known for meteors\n"
	.string "since the olden days.\p"
	.string "They say METEOR FALLS was gouged out\n"
	.string "by a falling meteorite long ago.$"

FallarborTown_Text_MyPreciousAzurill::
# 70 "data/maps/FallarborTown/scripts.pory"
	.string "See! Take a look!\n"
	.string "This is my precious AZURILL!\p"
	.string "It's slick and smooth and plushy, too!$"

FallarborTown_Text_Azurill::
# 77 "data/maps/FallarborTown/scripts.pory"
	.string "Rooreelooo.$"

FallarborTown_Text_HaveYouChallengedFlannery::
# 81 "data/maps/FallarborTown/scripts.pory"
	.string "Have you already challenged FLANNERY,\n"
	.string "the LEADER of LAVARIDGE GYM?\p"
	.string "The girl's grandfather was famous.\n"
	.string "He was one of the ELITE FOUR in the\l"
	.string "POKéMON LEAGUE at one point.\p"
	.string "It wouldn't surprise me to see FLANNERY\n"
	.string "become a great TRAINER in her own\l"
	.string "right.$"

FallarborTown_Text_BattleTentSign::
# 94 "data/maps/FallarborTown/scripts.pory"
	.string "BATTLE TENT FALLARBOR SITE\n"
	.string "“May the Greatest Teams Gather!”$"

FallarborTown_Text_TownSign::
# 99 "data/maps/FallarborTown/scripts.pory"
	.string "FALLARBOR TOWN\n"
	.string "“A farm community with small gardens.”$"

FallarborTown_Text_MoveTutorSign::
# 104 "data/maps/FallarborTown/scripts.pory"
	.string "MOVE TUTOR'S HOUSE\n"
	.string "“New moves taught to POKéMON.”$"
