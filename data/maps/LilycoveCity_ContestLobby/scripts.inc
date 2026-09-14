LilycoveCity_ContestLobby_MapScripts::
# 2 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_TryShowContestReporter
# 4 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	getpokenewsactive POKENEWS_BLENDMASTER
# 5 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 9 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
# 10 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
# 7 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
	goto LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script_2 VAR_LILYCOVE_CONTEST_LOBBY_STATE, 1, LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 22 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	map_script_2 VAR_LILYCOVE_CONTEST_LOBBY_STATE, 2, LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 16 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR, LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2
LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 19 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
	end

LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2:
# 17 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ContestArtist
	goto LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 23 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR, LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_2
LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_1:
# 26 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
	end

LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_2:
# 24 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestArtist
	goto LilycoveCity_ContestLobby_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1_1


LilycoveCity_ContestLobby_EventScript_ContestArtist::
# 35 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 36 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	addobject LOCALID_CONTEST_LOBBY_ARTIST
# 37 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_EventScript_ContestArtist_Movement_0
# 38 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement LOCALID_CONTEST_LOBBY_ARTIST
# 39 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 40 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 41 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint, MSGBOX_DEFAULT
# 42 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 43 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 44 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_ARTIST
# 45 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 46 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum, MSGBOX_YESNO
# 47 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ContestArtist_2
# 50 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting
LilycoveCity_ContestLobby_EventScript_ContestArtist_1:
# 52 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_ContestArtist_2:
# 48 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum
	goto LilycoveCity_ContestLobby_EventScript_ContestArtist_1


LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum::
# 57 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum, MSGBOX_DEFAULT
# 58 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 59 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SaveMuseumContestPainting
# 60 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
	specialvar VAR_RESULT, GiveMonArtistRibbon
# 0 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_2
LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_1:
# 64 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_Movement_0
# 65 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 66 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_ARTIST
# 67 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons
# 68 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetPaintingFlag
# 69 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_2:
# 62 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_1


LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting::
# 74 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum, MSGBOX_YESNO
# 75 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting_2
LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting_1:
# 78 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs, MSGBOX_DEFAULT
# 79 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 80 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_Movement_0
# 81 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 82 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 83 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_ARTIST
# 84 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting_2:
# 76 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum
	goto LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePainting_1


LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon::
# 89 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	incrementgamestat GAME_STAT_RECEIVED_RIBBONS
# 90 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special BufferContestWinnerMonName
# 91 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon_Movement_0
# 92 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 93 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_PIN
# 94 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, Common_Movement_ExclamationMark
# 95 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 96 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_ARTIST, LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon_Movement_1
# 97 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 98 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeMementoOfPainting, MSGBOX_DEFAULT
# 99 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 100 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ReceivedARibbon, MSGBOX_DEFAULT
# 101 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitfanfare
# 102 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon, MSGBOX_DEFAULT
# 103 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_OkaySeeYou, MSGBOX_DEFAULT
# 104 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
	return


LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons::
# 109 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 110 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_0x8004
# 111 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_3
# 112 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_4
# 113 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 3, LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_5
# 114 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 4, LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_6
# 115 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 5, LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_7
LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1:
	return

LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_3:
# 111 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
	goto LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1

LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_4:
# 112 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2
	goto LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1

LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_5:
# 113 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3
	goto LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1

LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_6:
# 114 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4
	goto LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1

LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_7:
# 115 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS
	goto LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons_1


LilycoveCity_ContestLobby_EventScript_SetPaintingFlag::
# 121 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_CATEGORY
# 122 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_COOL, LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_3
# 123 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_BEAUTY, LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_4
# 124 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_CUTE, LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_5
# 125 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_SMART, LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_6
# 126 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_TOUGH, LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_7
LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1:
	return

LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_3:
# 122 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_COOL_PAINTING_MADE
	goto LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1

LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_4:
# 123 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_BEAUTY_PAINTING_MADE
	goto LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1

LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_5:
# 124 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_CUTE_PAINTING_MADE
	goto LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1

LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_6:
# 125 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_SMART_PAINTING_MADE
	goto LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1

LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_7:
# 126 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_TOUGH_PAINTING_MADE
	goto LilycoveCity_ContestLobby_EventScript_SetPaintingFlag_1


LilycoveCity_ContestLobby_EventScript_LinkContestArtist::
# 132 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 133 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	addobject LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_EventScript_LinkContestArtist_Movement_0
# 135 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 136 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 137 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 138 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint, MSGBOX_DEFAULT
# 139 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 140 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 141 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_ARTIST
# 142 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum, MSGBOX_YESNO
# 143 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_ContestLobby_EventScript_LinkContestArtist_2
# 146 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink
LilycoveCity_ContestLobby_EventScript_LinkContestArtist_1:
	end

LilycoveCity_ContestLobby_EventScript_LinkContestArtist_2:
# 144 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink
	goto LilycoveCity_ContestLobby_EventScript_LinkContestArtist_1


LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink::
# 152 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum, MSGBOX_DEFAULT
# 153 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 154 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SaveMuseumContestPainting
# 155 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
	specialvar VAR_RESULT, GiveMonArtistRibbon
# 0 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink_2
LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink_1:
# 159 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_Movement_0
# 160 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 161 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 162 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_UpdateMuseumPatrons
# 163 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetPaintingFlag
# 164 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink_2:
# 157 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_ReceivedLinkArtistRibbon
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink_1


LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink::
# 169 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum, MSGBOX_YESNO
# 170 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink_2
LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink_1:
# 173 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs, MSGBOX_DEFAULT
# 174 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 175 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_Movement_0
# 176 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 177 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 0
# 178 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	removeobject LOCALID_CONTEST_LOBBY_LINK_ARTIST
# 179 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end

LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink_2:
# 171 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseumLink
	goto LilycoveCity_ContestLobby_EventScript_ConfirmDontTakePaintingLink_1


LilycoveCity_ContestLobby_EventScript_ReceivedLinkArtistRibbon::
# 184 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	incrementgamestat GAME_STAT_RECEIVED_RIBBONS
# 185 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_SYS_RIBBON_GET
# 186 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special BufferContestWinnerMonName
# 187 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon_Movement_0
# 188 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 189 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_PIN
# 190 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, Common_Movement_ExclamationMark
# 191 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_ARTIST, LilycoveCity_ContestLobby_EventScript_ReceivedLinkArtistRibbon_Movement_0
# 193 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 194 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TakeMementoOfPainting, MSGBOX_DEFAULT
# 195 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 196 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ReceivedARibbon, MSGBOX_DEFAULT
# 197 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitfanfare
# 198 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon, MSGBOX_DEFAULT
# 199 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_OkaySeeYou, MSGBOX_DEFAULT
# 200 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
	return


LilycoveCity_ContestLobby_EventScript_ContestReceptionist::
# 206 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special ClearLinkContestFlags
	specialvar VAR_RESULT, IsContestDebugActive
# 0 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ContestReceptionist_2
LilycoveCity_ContestLobby_EventScript_ContestReceptionist_1:
# 210 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SpeakToContestReceptionist
# 211 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_LeadToContestHall
# 212 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SetContestTrainerGfxIds
	checkplayergender
# 0 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ContestReceptionist_5
# 216 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
LilycoveCity_ContestLobby_EventScript_ContestReceptionist_4:
# 218 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_SetContestType
# 219 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_WarpToContestHall
# 220 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitstate
	end

LilycoveCity_ContestLobby_EventScript_ContestReceptionist_2:
# 208 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetDebug
	goto LilycoveCity_ContestLobby_EventScript_ContestReceptionist_1

LilycoveCity_ContestLobby_EventScript_ContestReceptionist_5:
# 214 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	goto LilycoveCity_ContestLobby_EventScript_ContestReceptionist_4


LilycoveCity_ContestLobby_EventScript_SetContestType::
# 225 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_RANK
# 226 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_NORMAL, LilycoveCity_ContestLobby_EventScript_SetContestType_3
# 227 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_SUPER, LilycoveCity_ContestLobby_EventScript_SetContestType_4
# 228 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_HYPER, LilycoveCity_ContestLobby_EventScript_SetContestType_5
# 229 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_RANK_MASTER, LilycoveCity_ContestLobby_EventScript_SetContestType_6
LilycoveCity_ContestLobby_EventScript_SetContestType_1:
	return

LilycoveCity_ContestLobby_EventScript_SetContestType_3:
# 226 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_NORMAL
	goto LilycoveCity_ContestLobby_EventScript_SetContestType_1

LilycoveCity_ContestLobby_EventScript_SetContestType_4:
# 227 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_SUPER
	goto LilycoveCity_ContestLobby_EventScript_SetContestType_1

LilycoveCity_ContestLobby_EventScript_SetContestType_5:
# 228 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_HYPER
	goto LilycoveCity_ContestLobby_EventScript_SetContestType_1

LilycoveCity_ContestLobby_EventScript_SetContestType_6:
# 229 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_NPC_MASTER
	goto LilycoveCity_ContestLobby_EventScript_SetContestType_1


# 235 "data/maps/LilycoveCity_ContestLobby/scripts.pory"

# 236 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_SetDebug::
# 237 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR
# 238 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
#ifdef UBFIX
# 239 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1
# 240 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
#else
# 241 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1, warn=FALSE
# 242 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
#endif
# 243 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	additem ITEM_CONTEST_PASS
# 244 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x800B, 8
# 245 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, CONTEST_RANK_MASTER
# 246 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_LILYCOVE_CONTEST_LOBBY_STATE, 1
# 247 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_SYS_RIBBON_GET
# 248 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	end

LilycoveCity_ContestLobby_EventScript_WarpToContestHall::
# 252 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_ENTERED_CONTEST
# 253 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_CATEGORY
# 254 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_COOL, LilycoveCity_ContestLobby_EventScript_WarpToContestHall_3
# 255 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_BEAUTY, LilycoveCity_ContestLobby_EventScript_WarpToContestHall_4
# 256 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_CUTE, LilycoveCity_ContestLobby_EventScript_WarpToContestHall_5
# 257 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_SMART, LilycoveCity_ContestLobby_EventScript_WarpToContestHall_6
# 258 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_TOUGH, LilycoveCity_ContestLobby_EventScript_WarpToContestHall_7
LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1:
# 260 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DoContestHallWarp
	return

LilycoveCity_ContestLobby_EventScript_WarpToContestHall_3:
# 254 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_COOL, 7, 5
	goto LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1

LilycoveCity_ContestLobby_EventScript_WarpToContestHall_4:
# 255 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_BEAUTY, 7, 5
	goto LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1

LilycoveCity_ContestLobby_EventScript_WarpToContestHall_5:
# 256 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_CUTE, 7, 5
	goto LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1

LilycoveCity_ContestLobby_EventScript_WarpToContestHall_6:
# 257 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_SMART, 7, 5
	goto LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1

LilycoveCity_ContestLobby_EventScript_WarpToContestHall_7:
# 258 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setwarp MAP_CONTEST_HALL_TOUGH, 7, 5
	goto LilycoveCity_ContestLobby_EventScript_WarpToContestHall_1


LilycoveCity_ContestLobby_EventScript_LeadToContestHall::
# 265 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 266 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_EventScript_LeadToContestHall_Movement_0
# 267 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 268 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 269 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 2, METATILE_Contest_WallShadow, TRUE
# 270 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 3, METATILE_Contest_FloorShadow, TRUE
# 271 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 272 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_EventScript_LeadToContestHall_Movement_1
# 273 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 274 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 275 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 2, METATILE_Contest_CounterFlap_Top, TRUE
# 276 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 12, 3, METATILE_Contest_CounterFlap_Bottom, TRUE
# 277 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 278 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 279 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, Common_Movement_StepFasterRight
# 280 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 281 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_EventScript_LeadToContestHall_Movement_2
# 282 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 283 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ComeThroughHere, MSGBOX_DEFAULT
# 284 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_RECEPTIONIST, LilycoveCity_ContestLobby_EventScript_LeadToContestHall_Movement_3
# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_EventScript_LeadToContestHall_Movement_4
# 287 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 288 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	return


LilycoveCity_ContestLobby_EventScript_BlackBelt::
# 293 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MasterRankHereICome, MSGBOX_NPC
	end


LilycoveCity_ContestLobby_EventScript_Girl::
# 298 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock_faceplayer
# 299 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_DAZZLING_GLEAM, LilycoveCity_ContestLobby_EventScript_Girl_2
# 303 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere, MSGBOX_DEFAULT
	giveitem ITEM_TM_DAZZLING_GLEAM
# 0 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_Girl_5
LilycoveCity_ContestLobby_EventScript_Girl_4:
# 307 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setflag FLAG_RECEIVED_TM_DAZZLING_GLEAM
	release_end

LilycoveCity_ContestLobby_EventScript_Girl_2:
# 300 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TooBusy, MSGBOX_DEFAULT
	release_end

LilycoveCity_ContestLobby_EventScript_Girl_5:
# 305 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto LilycoveCity_ContestLobby_EventScript_Girl_4


LilycoveCity_ContestLobby_EventScript_Artist::
# 312 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ContestFeastForEyes, MSGBOX_NPC
	end


LilycoveCity_ContestLobby_EventScript_FatMan::
# 317 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ToughContestIsExtreme, MSGBOX_NPC
	end


LilycoveCity_ContestLobby_EventScript_Fisherman::
# 322 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_LavishedCareOnMon, MSGBOX_NPC
	end


LilycoveCity_ContestLobby_EventScript_NinjaBoy::
# 327 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily, MSGBOX_NPC
	end


LilycoveCity_ContestLobby_EventScript_ContestWinner1::
# 332 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 333 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 334 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_1
# 335 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_ContestWinner2::
# 340 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 341 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 342 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_2
# 343 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_ContestWinner3::
# 348 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 349 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 350 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_3
# 351 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_ContestWinner4::
# 356 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 357 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 358 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_4
# 359 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_ContestWinner5::
# 364 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 365 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 366 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_5
# 367 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_ContestWinner6::
# 372 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 373 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 374 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	showcontestpainting CONTEST_WINNER_HALL_6
# 375 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_Blender3Boy::
# 380 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_LetsGetBlendingAlready, MSGBOX_NPC
	end


LilycoveCity_ContestLobby_EventScript_Blender3Girl::
# 385 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WhatKindOfPokeblockWillIGet, MSGBOX_NPC
	end


LilycoveCity_ContestLobby_EventScript_BerryBlenderSpeedRecords::
# 390 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 391 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special ShowBerryBlenderRecordWindow
# 392 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitbuttonpress
# 393 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special RemoveRecordsWindow
# 394 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_LinkContestResults::
# 399 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lockall
# 400 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	frontier_results FACILITY_LINK_CONTEST
# 401 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitbuttonpress
# 402 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special RemoveRecordsWindow
# 403 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	releaseall
	end


LilycoveCity_ContestLobby_EventScript_BlendMaster::
# 408 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock_faceplayer
# 409 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_BlendWithTheBlendMaster, MSGBOX_DEFAULT
# 410 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker1::
# 415 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 416 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WhoaAwesome, MSGBOX_DEFAULT
	release_end


LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker2::
# 421 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 422 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WickedlyFast, MSGBOX_DEFAULT
	release_end


LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker3::
# 427 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock
# 428 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_WhatAnExpert, MSGBOX_DEFAULT
	release_end


LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker4::
# 433 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock_faceplayer
# 434 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_MadeAmazingPokeblocksWithMaster, MSGBOX_DEFAULT
# 435 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker5::
# 440 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock_faceplayer
# 441 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_QualitiesOfBlendMaster, MSGBOX_DEFAULT
# 442 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


LilycoveCity_ContestLobby_EventScript_BlendMasterOnlooker6::
# 447 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock_faceplayer
# 448 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox BerryBlender_Text_MasterWorksOnSkillsInMountains, MSGBOX_DEFAULT
# 449 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
	end


LilycoveCity_ContestLobby_EventScript_LinkContestReceptionist::
# 454 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special ClearLinkContestFlags
# 455 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock_faceplayer
# 456 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_LinkContestReception, MSGBOX_DEFAULT
# 457 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest
	end


LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest::
# 462 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_EnterContest3
# 463 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 464 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_ENTERINFO, FALSE
# 465 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 466 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_3
# 467 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_4
# 468 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_5
# 469 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_5
LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_1:
	end

LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_3:
# 466 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_1

LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_4:
# 467 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_1

LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_5:
# 470 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest_1


LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest::
# 476 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ProgressWillBeSaved, MSGBOX_YESNO
# 477 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_2
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_1:
# 480 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 481 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_5
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_4:
# 484 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_WhichContestMode
# 485 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 486 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	specialvar VAR_TEMP_D, IsWirelessAdapterConnected
# 487 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_LINK_CONTEST_MODE, FALSE
# 488 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 489 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_9
# 491 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_10
# 498 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_11
# 499 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_11
LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_7:
# 503 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType
	end

LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_2:
# 478 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_1

LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_5:
# 482 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_4

LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_9:
# 490 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_TEMP_C, 0
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_7

LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_10:
# 492 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_TEMP_C, 1
# 493 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_12
	goto LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_7

LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_11:
# 500 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	end

LilycoveCity_ContestLobby_EventScript_TryEnterLinkContest_12:
# 494 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special CloseLink
# 495 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_NoWirelessAdapterInGMode, MSGBOX_DEFAULT
	release_end


LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType::
# 508 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_EnterWhichContest3
# 509 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 510 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_CONTEST_TYPE, FALSE
# 511 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, CONTEST_CATEGORIES_COUNT
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_2
# 511 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_2
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_1:
# 514 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_CONTEST_CATEGORY, VAR_RESULT
# 515 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
	end

LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_2:
# 512 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestType_1


LilycoveCity_ContestLobby_EventScript_LinkContestInfo::
# 520 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_WhichTopic2
# 521 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 522 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 0, 0, MULTI_LINK_CONTEST_INFO, FALSE
# 523 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 524 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_LinkContestInfo_3
# 525 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_LinkContestInfo_4
# 526 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_LinkContestInfo_5
# 527 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 3, LilycoveCity_ContestLobby_EventScript_LinkContestInfo_6
# 528 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_LinkContestInfo_6
LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1:
# 532 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo
	end

LilycoveCity_ContestLobby_EventScript_LinkContestInfo_3:
# 524 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ExplainLinkContest, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1

LilycoveCity_ContestLobby_EventScript_LinkContestInfo_4:
# 525 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ExplainEMode, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1

LilycoveCity_ContestLobby_EventScript_LinkContestInfo_5:
# 526 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ExplainGMode, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_LinkContestInfo_1

LilycoveCity_ContestLobby_EventScript_LinkContestInfo_6:
# 529 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_AskEnterLinkContest
	end


LilycoveCity_ContestLobby_EventScript_CancelLinkContest::
# 537 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special CloseLink
# 538 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_ParticipateAnotherTime, MSGBOX_DEFAULT
	release_end


LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon::
# 543 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_EnterWhichPokemon3, MSGBOX_DEFAULT
# 544 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, 0
	choosecontestmon
# 0 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_2
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_1:
# 548 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryEnterContestMon
# 549 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 550 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CAN_ENTER_CONTEST_EQUAL_RANK, LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_6
# 551 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CAN_ENTER_CONTEST_HIGH_RANK, LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_6
# 555 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CANT_ENTER_CONTEST, LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_7
# 556 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CANT_ENTER_CONTEST_EGG, LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_8
# 557 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CANT_ENTER_CONTEST_FAINTED, LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_9
LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_4:
# 559 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon
	end

LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_2:
# 546 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_1

LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_6:
# 552 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8004
# 553 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest
	end

LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_7:
# 555 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MonNotQualifiedForRank, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_4

LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_8:
# 556 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_EggCannotTakePart2, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_4

LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_9:
# 557 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MonInNoCondition2, MSGBOX_DEFAULT
	goto LilycoveCity_ContestLobby_EventScript_ChooseLinkContestMon_4


LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest::
# 564 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_TEMP_D, 1
	goto_if_eq LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_2
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_1:
# 567 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	compare VAR_TEMP_D, 2
	goto_if_ge LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_5
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_4:
# 570 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_PleaseWaitBButtonCancel
# 571 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 572 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 573 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_TEMP_C
# 574 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_9
# 575 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_10
# 576 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_7:
# 578 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 579 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case LINKUP_FAILED, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_14
# 580 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case LINKUP_WRONG_NUM_PLAYERS, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_15
# 581 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case LINKUP_DIFF_SELECTIONS, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_15
# 584 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case LINKUP_CONNECTION_ERROR, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_16
# 588 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case LINKUP_FAILED_CONTEST_GMODE, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_17
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_12:
# 592 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageinstant LilycoveCity_ContestLobby_Text_Transmitting
# 593 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	contestlinktransfer
# 594 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_0x8004
# 595 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_20
# 596 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_21
# 599 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_22
LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_18:
	end

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_2:
# 565 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_1

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_5:
# 568 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_4

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_9:
# 574 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryContestEModeLinkup
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_7

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_10:
# 575 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryContestGModeLinkup
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_7

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_14:
# 579 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_12

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_15:
# 582 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PlayersMadeDifferentChoice, MSGBOX_DEFAULT
# 583 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_12

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_16:
# 585 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special CloseLink
# 586 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox Text_LinkErrorPleaseReset, MSGBOX_DEFAULT
	release_end

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_17:
# 589 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PlayerAt4PCounterUseGMode, MSGBOX_DEFAULT
# 590 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_12

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_20:
# 595 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_StartLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_18

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_21:
# 597 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_PlayersChoseDifferentContest, MSGBOX_DEFAULT
# 598 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_18

LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_22:
# 600 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_TransmissionError, MSGBOX_DEFAULT
# 601 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_TrySetUpLinkContest_18


LilycoveCity_ContestLobby_EventScript_StartLinkContest::
# 607 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special GetContestPlayerId
# 608 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	addvar VAR_0x8004, 1
# 609 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8004
# 610 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageautoscroll LilycoveCity_ContestLobby_Text_YourMonIsEntryNumX
# 611 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 612 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	subvar VAR_0x8004, 1
# 613 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall
# 614 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 1
# 615 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special SetLinkContestPlayerGfx
# 616 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_TYPE, CONTEST_TYPE_LINK
# 617 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_CONTEST_RANK, CONTEST_RANK_MASTER
# 618 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_WarpToContestHall
	end


LilycoveCity_ContestLobby_EventScript_SetLinkGroupType::
# 623 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_CONTEST_CATEGORY
# 624 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_COOL, LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_3
# 625 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_BEAUTY, LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_4
# 626 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_CUTE, LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_5
# 627 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_SMART, LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_6
# 628 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case CONTEST_CATEGORY_TOUGH, LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_7
LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_1:
# 630 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader
	end

LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_3:
# 624 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_COOL_CONTEST
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_1

LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_4:
# 625 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_BEAUTY_CONTEST
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_1

LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_5:
# 626 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_CUTE_CONTEST
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_1

LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_6:
# 627 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_SMART_CONTEST
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_1

LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_7:
# 628 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setvar VAR_0x8004, LINK_GROUP_TOUGH_CONTEST
	goto LilycoveCity_ContestLobby_EventScript_SetLinkGroupType_1


LilycoveCity_ContestLobby_EventScript_DecideLinkLeader::
# 635 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	message LilycoveCity_ContestLobby_Text_PleaseDecideLinkLeader
# 636 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 637 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	multichoice 16, 6, MULTI_LINK_LEADER, FALSE
# 638 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 639 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 0, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_3
# 640 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 1, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_4
# 641 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case 2, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_5
# 642 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_5
LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_1:
	end

LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_3:
# 639 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryJoinGroup
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_1

LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_4:
# 640 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryLeadGroup
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_1

LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_5:
# 643 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_CancelLinkContest
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader_1


LilycoveCity_ContestLobby_EventScript_TryLeadGroup::
# 649 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryBecomeLinkLeader
# 650 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 651 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case LINKUP_SUCCESS, LilycoveCity_ContestLobby_EventScript_TryLeadGroup_3
# 652 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case LINKUP_FAILED, LilycoveCity_ContestLobby_EventScript_TryLeadGroup_4
# 653 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case LINKUP_RETRY_ROLE_ASSIGN, LilycoveCity_ContestLobby_EventScript_TryLeadGroup_5
LilycoveCity_ContestLobby_EventScript_TryLeadGroup_1:
	release_end

LilycoveCity_ContestLobby_EventScript_TryLeadGroup_3:
# 651 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkLeaderDecided
	goto LilycoveCity_ContestLobby_EventScript_TryLeadGroup_1

LilycoveCity_ContestLobby_EventScript_TryLeadGroup_4:
# 652 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader
	goto LilycoveCity_ContestLobby_EventScript_TryLeadGroup_1

LilycoveCity_ContestLobby_EventScript_TryLeadGroup_5:
# 653 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryLeadGroup
	goto LilycoveCity_ContestLobby_EventScript_TryLeadGroup_1


LilycoveCity_ContestLobby_EventScript_TryJoinGroup::
# 659 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special TryJoinLinkGroup
# 660 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	switch VAR_RESULT
# 661 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case LINKUP_SUCCESS, LilycoveCity_ContestLobby_EventScript_TryJoinGroup_3
# 662 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case LINKUP_FAILED, LilycoveCity_ContestLobby_EventScript_TryJoinGroup_4
# 663 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	case LINKUP_RETRY_ROLE_ASSIGN, LilycoveCity_ContestLobby_EventScript_TryJoinGroup_5
LilycoveCity_ContestLobby_EventScript_TryJoinGroup_1:
	release_end

LilycoveCity_ContestLobby_EventScript_TryJoinGroup_3:
# 661 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_LinkLeaderDecided
	goto LilycoveCity_ContestLobby_EventScript_TryJoinGroup_1

LilycoveCity_ContestLobby_EventScript_TryJoinGroup_4:
# 662 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_DecideLinkLeader
	goto LilycoveCity_ContestLobby_EventScript_TryJoinGroup_1

LilycoveCity_ContestLobby_EventScript_TryJoinGroup_5:
# 663 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_TryJoinGroup
	goto LilycoveCity_ContestLobby_EventScript_TryJoinGroup_1


LilycoveCity_ContestLobby_EventScript_LinkLeaderDecided::
# 669 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageinstant LilycoveCity_ContestLobby_Text_Transmitting
# 670 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	contestlinktransfer
# 671 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto LilycoveCity_ContestLobby_EventScript_StartLinkContest
	end


LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall::
# 676 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageautoscroll LilycoveCity_ContestLobby_Text_ContestBeginShortly
# 677 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 678 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 679 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 680 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall_Movement_0
# 681 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 682 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 683 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 2, METATILE_Contest_WallShadow, TRUE
# 684 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 3, METATILE_Contest_FloorShadow, TRUE
# 685 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 686 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall_Movement_1
# 687 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 688 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	playse SE_BRIDGE_WALK
# 689 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 2, METATILE_Contest_CounterFlap_Top, TRUE
# 690 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	setmetatile 17, 3, METATILE_Contest_CounterFlap_Bottom, TRUE
# 691 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	special DrawWholeMapView
# 692 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 693 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, Common_Movement_StepFasterLeft
# 694 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 695 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
# 696 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 697 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	messageautoscroll LilycoveCity_ContestLobby_Text_ComeThroughHere
# 698 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmessage
# 699 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay 20
# 700 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	closemessage
# 701 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	call LilycoveCity_ContestLobby_EventScript_DelayIfContestWithRSPlayer
# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_CONTEST_LOBBY_LINK_RECEPTIONIST, LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall_Movement_2
# 703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall_Movement_3
# 704 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	waitmovement 0
# 705 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	release
	return


LilycoveCity_ContestLobby_EventScript_LittleGirl::
# 710 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	lock_faceplayer
# 711 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEBLOCK_CASE, LilycoveCity_ContestLobby_EventScript_LittleGirl_2
# 715 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase, MSGBOX_DEFAULT
	release_end

LilycoveCity_ContestLobby_EventScript_LittleGirl_2:
# 712 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	msgbox LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries, MSGBOX_DEFAULT
	release_end


# 37 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ContestArtist_Movement_0:
# 37 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 37 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 37 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 37 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 37 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 37 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 37 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
	step_end

# 64 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_TakePaintingToMuseum_Movement_0:
# 64 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 64 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 64 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 64 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 64 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 64 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 64 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 64 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
	step_end

# 91 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon_Movement_0:
# 91 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 91 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 91 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
	step_end

# 96 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ReceivedArtistRibbon_Movement_1:
# 96 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 96 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 96 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 96 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 96 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	run_up
# 96 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	run_up
# 96 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	run_up
# 96 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_faster_right
	step_end

# 134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LinkContestArtist_Movement_0:
# 134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 134 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
	step_end

# 192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_ReceivedLinkArtistRibbon_Movement_0:
# 192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_16
# 192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	run_up
# 192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	run_up
# 192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	run_up
# 192 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_faster_left
	step_end

# 266 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LeadToContestHall_Movement_0:
# 266 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 266 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 266 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_faster_down
	step_end

# 272 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LeadToContestHall_Movement_1:
# 272 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 272 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 272 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_faster_up
	step_end

# 281 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LeadToContestHall_Movement_2:
# 281 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_faster_left
# 281 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
	step_end

# 285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LeadToContestHall_Movement_3:
# 285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 285 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
	step_end

# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LeadToContestHall_Movement_4:
# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_left
# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 286 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
	step_end

# 680 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall_Movement_0:
# 680 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 680 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_faster_down
	step_end

# 686 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall_Movement_1:
# 686 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 686 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_down
# 686 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	step_faster_down
	step_end

# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall_Movement_2:
# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 702 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
	step_end

# 703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
LilycoveCity_ContestLobby_EventScript_LeadToLinkContestHall_Movement_3:
# 703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_right
# 703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	walk_up
# 703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	delay_8
# 703 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	set_invisible
	step_end

LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase::
# 719 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Yippee!\p"
	.string "The lady at the reception counter\n"
	.string "gave me a case for {POKEBLOCK}S!$"

LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries::
# 726 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Make {POKEBLOCK}S and put them in there.\p"
	.string "When you make a {POKEBLOCK}, everyone\n"
	.string "has to put in a different BERRY.$"

LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint::
# 733 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Congratulations!\p"
	.string "I did a painting of your POKéMON to\n"
	.string "commemorate its victory…\p"
	.string "Well, your POKéMON's appeals were\n"
	.string "so fantastic, it spurred me into\l"
	.string "painting better than I usually do.\l"
	.string "Look, see?$"

LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum::
# 745 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "What do you think? I'm confident in\n"
	.string "what I've done, but do you like it?\p"
	.string "A work of this caliber, it wouldn't look\n"
	.string "out of place in an art museum.\p"
	.string "Huh? An art museum really is looking\n"
	.string "for paintings?\p"
	.string "Do you think I should take this there?$"

LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum::
# 758 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "What, really? Then, sure, I will take\n"
	.string "this painting there right now.\p"
	.string "I'll give it a proper title, too.\p"
	.string "I hope they'll like it and consider\n"
	.string "exhibiting this.\p"
	.string "Please check if they did accept this.\n"
	.string "Thank you!$"

LilycoveCity_ContestLobby_Text_TakeMementoOfPainting::
# 771 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Oh, that's right!\p"
	.string "As a memento of me painting your\n"
	.string "POKéMON, please take this.$"

LilycoveCity_ContestLobby_Text_ReceivedARibbon::
# 778 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{PLAYER} received a RIBBON.$"

LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon::
# 782 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "{PLAYER} put the RIBBON on\n"
	.string "{STR_VAR_1}.$"

LilycoveCity_ContestLobby_Text_OkaySeeYou::
# 787 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Okay, see you!$"

LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum::
# 791 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Oh… Then, I guess I'll just take\n"
	.string "this home with me…\p"
	.string "But, you know, I would like to take\n"
	.string "this to the art museum… Okay?$"

LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs::
# 799 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Oh, fine, that's the way it is.\n"
	.string "I will hang this in my own house.\p"
	.string "I'll just have to try harder next time.\n"
	.string "Well, be seeing you.$"

LilycoveCity_ContestLobby_Text_MasterRankHereICome::
# 807 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Hoo, boy… Master Rank CONTESTS,\n"
	.string "here I come.\p"
	.string "The world will know that my dearest\n"
	.string "POKéMON is the cutest being in all\l"
	.string "existence. The time has come!\l"
	.string "Uheheheh.$"

LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere::
# 817 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I always make sure my CINCCINO is\n"
	.string "sparkling and shiny during contests.\p"
	.string "Wanna know my secret?\n"
	.string "Try using this TM called Dazzling Gleam.$"

LilycoveCity_ContestLobby_Text_TooBusy::
# 825 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Sorry, I don't have time for chit-chat.\n"
	.string "We're about to be on in a few minutes.$"

LilycoveCity_ContestLobby_Text_ContestFeastForEyes::
# 830 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Wow, coming out to a CONTEST is\n"
	.string "a feast for these eyes!\p"
	.string "Would you look at all the POKéMON\n"
	.string "that just scream to be painted?$"

LilycoveCity_ContestLobby_Text_ToughContestIsExtreme::
# 838 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "The TOUGHNESS CONTEST is like\n"
	.string "extreme, man!\p"
	.string "Those muscular appeals…\n"
	.string "Cascading sweat… I swoon!$"

LilycoveCity_ContestLobby_Text_LavishedCareOnMon::
# 846 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "Day in and day out, I lavished my care\n"
	.string "on this POKéMON.\p"
	.string "Its condition is peaking.\n"
	.string "Today, victory is mine!$"

LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily::
# 854 "data/maps/LilycoveCity_ContestLobby/scripts.pory"
	.string "I made {POKEBLOCK}S with Mom, Dad, and\n"
	.string "Big Sister. They turned out great!\p"
	.string "I bet you can make smoother, better\n"
	.string "{POKEBLOCK}S if you have more people.$"
