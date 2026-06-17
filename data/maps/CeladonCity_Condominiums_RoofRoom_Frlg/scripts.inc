CeladonCity_Condominiums_RoofRoom_Frlg_MapScripts::
	.byte 0


CeladonCity_Condominiums_RoofRoom_EventScript_BlackBelt::
# 4 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_TheresNothingIDontKnow, MSGBOX_NPC
	end


CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall::
# 9 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	lock_faceplayer
# 10 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_EEVEE
	givemon SPECIES_EEVEE, 25
# 0 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_2
CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_1:
# 14 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 15 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	removeobject LOCALID_EEVEE_POKEBALL
# 16 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 17 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee
# 18 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitmessage
# 19 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitfanfare
# 20 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 21 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 22 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	switch VAR_0x8007
# 23 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case MON_GIVEN_TO_PARTY, CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_6
# 28 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case MON_GIVEN_TO_PC, CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_7
CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_4:
# 34 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	setflag FLAG_GOT_EEVEE
	release_end

CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_2:
# 12 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_1

CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_6:
# 24 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_8
	goto CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_4

CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_7:
# 29 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_11
CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_10:
# 32 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_4

CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_8:
# 25 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 26 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_4

CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_11:
# 30 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto CeladonCity_Condominiums_RoofRoom_EventScript_EeveeBall_10


CeladonCity_Condominiums_RoofRoom_EventScript_TMsPamphlet::
# 39 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_PamphletOnTMs, MSGBOX_SIGN
	end


CeladonCity_Condominiums_RoofRoom_EventScript_Blackboard::
# 44 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	lockall
# 45 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_WirelessAdapterLecture
# 46 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	setvar VAR_0x8004, 4
# 47 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
	end


CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading::
# 52 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	message CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading
# 53 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	waitmessage
# 54 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	multichoice 0, 0, MULTI_LINKED_DIRECT_UNION, FALSE
# 55 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	switch VAR_RESULT
# 56 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 0, CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_3
# 57 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 1, CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_4
# 58 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 2, CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_5
# 59 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case 3, CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_6
# 60 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	case MULTI_B_PRESSED, CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_6
CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1:
# 64 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading
	end

CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_3:
# 56 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainWirelessClub
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1

CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_4:
# 57 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainDirectCorner
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1

CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_5:
# 58 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_RoofRoom_Text_ExplainUnionRoom
	goto CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_1

CeladonCity_Condominiums_RoofRoom_EventScript_ReadAnotherHeading_6:
# 61 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	releaseall
	end


CeladonCity_Condominiums_RoofRoom_Text_TheresNothingIDontKnow::
# 68 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "There is nothing that I don't know,\n"
	.string "like I wrote on the blackboard.\p"
	.string "I know about the world of POKéMON\n"
	.string "in your GAME BOY ADVANCE!\p"
	.string "Get together with your friends and\n"
	.string "enjoy trading POKéMON!$"

CeladonCity_Condominiums_RoofRoom_Text_ObtainedAnEevee::
# 79 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "{PLAYER} obtained an EEVEE!$"

CeladonCity_Condominiums_RoofRoom_Text_BoxIsFull::
# 83 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "ポケモンが　いっぱいだ\n"
	.string "ボックスを　かえて　きなさい$"

CeladonCity_Condominiums_RoofRoom_Text_WirelessAdapterLecture::
# 88 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "POKéMON Lecture\p"
	.string "Playing with the Wireless Adapter$"

CeladonCity_Condominiums_RoofRoom_Text_ReadWhichHeading::
# 94 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "Which heading do you want to read?$"

CeladonCity_Condominiums_RoofRoom_Text_ExplainWirelessClub::
# 98 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "The POKéMON WIRELESS CLUB is\n"
	.string "upstairs at any POKéMON CENTER.\p"
	.string "Visit one to link up with friend(s)\n"
	.string "using your Wireless Adapter.$"

CeladonCity_Condominiums_RoofRoom_Text_ExplainDirectCorner::
# 106 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "To link only with a friend, go to\n"
	.string "the DIRECT CORNER.\p"
	.string "It is the right counter at the\n"
	.string "POKéMON WIRELESS CLUB.\p"
	.string "Go into the TRADE CORNER or the\n"
	.string "COLOSSEUM with your friend.$"

CeladonCity_Condominiums_RoofRoom_Text_ExplainUnionRoom::
# 117 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "To link and communicate with\n"
	.string "anyone, go to the UNION ROOM.\p"
	.string "It is the left counter at the\n"
	.string "POKéMON WIRELESS CLUB.\p"
	.string "Go to the UNION ROOM and enjoy\n"
	.string "meeting other TRAINERS.$"

CeladonCity_Condominiums_RoofRoom_Text_PamphletOnTMs::
# 128 "data/maps/CeladonCity_Condominiums_RoofRoom_Frlg/scripts.pory"
	.string "It's a pamphlet on TMs.\p"
	.string "… …\p"
	.string "There are fifty TMs in all.\p"
	.string "There are also seven HMs that\n"
	.string "can be used repeatedly.\p"
	.string "SILPH CO.$"
