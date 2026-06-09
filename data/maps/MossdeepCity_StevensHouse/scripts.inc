MossdeepCity_StevensHouse_MapScripts::
# 2 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_LOAD
# 8 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_LOAD_2
MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setmetatile 6, 4, METATILE_GenericBuilding_TableEdge, TRUE
	goto MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_LOAD_1

MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_STEVENS_HOUSE_STATE, 2
	goto_if_eq MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectxyperm LOCALID_STEVENS_HOUSE_STEVEN, 6, 5
# 11 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectmovementtype LOCALID_STEVENS_HOUSE_STEVEN, MOVEMENT_TYPE_FACE_UP
	goto MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

MossdeepCity_StevensHouse_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script_2 VAR_STEVENS_HOUSE_STATE, 1, MossdeepCity_StevensHouse_EventScript_StevenGivesDive
	.2byte 0


MossdeepCity_StevensHouse_EventScript_StevenGivesDive::
# 21 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 22 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, Common_Movement_StepFasterLeft
# 23 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 24 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playse SE_PIN
# 25 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, Common_Movement_ExclamationMark
# 26 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 27 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, Common_Movement_Delay48
# 28 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, MossdeepCity_StevensHouse_EventScript_StevenGivesDive_Movement_0
# 30 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 31 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_YouveEarnedHMDive, MSGBOX_DEFAULT
# 32 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	giveitem ITEM_HM_DIVE
# 33 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 34 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_OMIT_DIVE_FROM_STEVEN_LETTER
# 35 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_ExplainDive, MSGBOX_DEFAULT
# 36 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	closemessage
# 37 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	delay 20
# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVENS_HOUSE_STEVEN, MossdeepCity_StevensHouse_EventScript_StevenGivesDive_Movement_1
# 39 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 40 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 41 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT
# 42 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 43 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
	end


MossdeepCity_StevensHouse_EventScript_BeldumPokeball::
# 48 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 49 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum, MSGBOX_YESNO
# 50 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MossdeepCity_StevensHouse_EventScript_BeldumPokeball_2
# 55 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BELDUM
# 56 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	givemon SPECIES_BELDUM, 5
# 57 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	switch VAR_RESULT
# 58 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	case MON_GIVEN_TO_PARTY, MossdeepCity_StevensHouse_EventScript_BeldumPokeball_6
# 65 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	case MON_GIVEN_TO_PC, MossdeepCity_StevensHouse_EventScript_BeldumPokeball_7
# 72 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	case MON_CANT_GIVE, MossdeepCity_StevensHouse_EventScript_BeldumPokeball_8
MossdeepCity_StevensHouse_EventScript_BeldumPokeball_4:
# 75 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL
# 76 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_BELDUM
# 77 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
	end

MossdeepCity_StevensHouse_EventScript_BeldumPokeball_2:
# 51 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
# 52 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
	end

MossdeepCity_StevensHouse_EventScript_BeldumPokeball_6:
# 59 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
# 60 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 61 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_StevensHouse_EventScript_BeldumPokeball_9
	goto MossdeepCity_StevensHouse_EventScript_BeldumPokeball_4

MossdeepCity_StevensHouse_EventScript_BeldumPokeball_7:
# 66 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
# 67 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 68 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_StevensHouse_EventScript_BeldumPokeball_12
MossdeepCity_StevensHouse_EventScript_BeldumPokeball_11:
# 71 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto MossdeepCity_StevensHouse_EventScript_BeldumPokeball_4

MossdeepCity_StevensHouse_EventScript_BeldumPokeball_8:
# 73 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto MossdeepCity_StevensHouse_EventScript_BeldumPokeball_4

MossdeepCity_StevensHouse_EventScript_BeldumPokeball_9:
# 62 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 63 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto MossdeepCity_StevensHouse_EventScript_BeldumPokeball_4

MossdeepCity_StevensHouse_EventScript_BeldumPokeball_12:
# 69 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto MossdeepCity_StevensHouse_EventScript_BeldumPokeball_11


MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare::
# 82 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BELDUM
# 83 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	removeobject LOCALID_STEVENS_HOUSE_BALL
# 84 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 85 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	message MossdeepCity_StevensHouse_Text_ObtainedBeldum
# 86 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmessage
# 87 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitfanfare
# 88 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BELDUM
	return


MossdeepCity_StevensHouse_EventScript_RockDisplay::
# 93 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_CollectionOfRareRocks, MSGBOX_SIGN
	end


MossdeepCity_StevensHouse_EventScript_Steven::
# 98 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis, MSGBOX_NPC
	end


MossdeepCity_StevensHouse_EventScript_Letter::
# 103 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 104 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LetterFromSteven, MSGBOX_DEFAULT
# 105 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
	end


MossdeepCity_StevensHouse_EventScript_DiveItemBall::
# 111 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	finditem ITEM_HM_DIVE
# 112 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
	end


# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_StevenGivesDive_Movement_0:
# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_faster_down
	step_end

# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_StevenGivesDive_Movement_1:
# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_up
# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_faster_up
	step_end

MossdeepCity_StevensHouse_Text_YouveEarnedHMDive::
# 116 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}…\p"
	.string "As you can see, there's not much here,\n"
	.string "but this is my home.\p"
	.string "Thank you for all that you've done.\p"
	.string "This is my token of appreciation.\n"
	.string "It's the HIDDEN MACHINE DIVE.\p"
	.string "No need to be shy--you've earned\n"
	.string "this HM.$"

MossdeepCity_StevensHouse_Text_ExplainDive::
# 131 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN: While you're using SURF, you\n"
	.string "should notice dark patches of water.\p"
	.string "Use DIVE if you come to deep water\n"
	.string "like it. You'll drop to the seafloor.\p"
	.string "When you want to come back up, use\n"
	.string "DIVE again.\p"
	.string "In some places, it won't be possible\n"
	.string "for you to surface, though.$"

MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis::
# 145 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN: Apparently, there's an\n"
	.string "underwater cavern between\l"
	.string "MOSSDEEP and SOOTOPOLIS.\p"
	.string "You know, the one that CAPT. STERN\n"
	.string "found in his submarine.$"

MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum::
# 154 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p"
	.string "It contained the POKéMON\n"
	.string "BELDUM.\p"
	.string "Take the POKé BALL?$"

MossdeepCity_StevensHouse_Text_ObtainedBeldum::
# 163 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} obtained a BELDUM.$"

MossdeepCity_StevensHouse_Text_NoSpaceForAnotherMon::
# 167 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "There is no space for another POKéMON.$"

MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas::
# 171 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} left the POKé BALL where\n"
	.string "it was.$"

MossdeepCity_StevensHouse_Text_LetterFromSteven::
# 176 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a letter.\p"
	.string "… … … … … …\p"
	.string "To {PLAYER}{KUN}…\p"
	.string "I've decided to do a little soul-\n"
	.string "searching and train on the road.\p"
	.string "I don't plan to return home for some\n"
	.string "time.\p"
	.string "I have a favor to ask of you.\p"
	.string "I want you to take the POKé BALL on\n"
	.string "the desk.\p"
	.string "Inside it is a BELDUM, my favorite\n"
	.string "POKéMON.\p"
	.string "I'm counting on you.\p"
	.string "May our paths cross someday.\p"
	.string "STEVEN STONE$"

MossdeepCity_StevensHouse_Text_CollectionOfRareRocks::
# 204 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a collection of rare rocks and\n"
	.string "stones assembled by STEVEN.$"
