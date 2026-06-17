PalletTown_PlayersHouse_1F_Frlg_MapScripts::
	.byte 0


PalletTown_PlayersHouse_1F_EventScript_Mom::
# 4 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_1F_EventScript_Mom_2
	checkplayergender
# 0 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PalletTown_PlayersHouse_1F_EventScript_Mom_5
# 15 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
PalletTown_PlayersHouse_1F_EventScript_Mom_4:
# 17 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end

PalletTown_PlayersHouse_1F_EventScript_Mom_2:
# 6 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest
# 7 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	closemessage
# 8 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 9 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare
	release_end

PalletTown_PlayersHouse_1F_EventScript_Mom_5:
# 13 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
	goto PalletTown_PlayersHouse_1F_EventScript_Mom_4


PalletTown_PlayersHouse_1F_EventScript_TV::
# 23 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	lockall
# 24 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq PalletTown_PlayersHouse_1F_EventScript_TV_2
# 31 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
PalletTown_PlayersHouse_1F_EventScript_TV_1:
# 33 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_1F_EventScript_TV_2:
	checkplayergender
# 0 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PalletTown_PlayersHouse_1F_EventScript_TV_5
# 28 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
	goto PalletTown_PlayersHouse_1F_EventScript_TV_1

PalletTown_PlayersHouse_1F_EventScript_TV_5:
# 26 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
	goto PalletTown_PlayersHouse_1F_EventScript_TV_1


PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou::
# 37 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: …Right.\n"
	.string "All boys leave home someday.\l"
	.string "It said so on TV.\p"
	.string "Oh, yes. PROF. OAK, next door, was\n"
	.string "looking for you.$"

PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou::
# 46 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: …Right.\n"
	.string "All girls dream of traveling.\l"
	.string "It said so on TV.\p"
	.string "Oh, yes. PROF. OAK, next door, was\n"
	.string "looking for you.$"

PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest::
# 55 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: {PLAYER}!\n"
	.string "You should take a quick rest.$"

PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare::
# 60 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "MOM: Oh, good! You and your\n"
	.string "POKéMON are looking great.\l"
	.string "Take care now!$"

PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad::
# 66 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "There's a movie on TV.\n"
	.string "Four boys are walking on railroad\l"
	.string "tracks.\p"
	.string "…I better go, too.$"

PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad::
# 74 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "There's a movie on TV.\n"
	.string "A girl with her hair in pigtails is\l"
	.string "walking up a brick road.\p"
	.string "…I better go, too.$"

PalletTown_PlayersHouse_1F_Text_OopsWrongSide::
# 82 "data/maps/PalletTown_PlayersHouse_1F_Frlg/scripts.pory"
	.string "Oops, wrong side…$"
