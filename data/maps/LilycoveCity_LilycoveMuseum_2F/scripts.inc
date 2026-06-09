LilycoveCity_LilycoveMuseum_2F_MapScripts::
# 2 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD
# 25 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_COOL_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_2
LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_BEAUTY_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_5
LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 11 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_CUTE_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_8
LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 15 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_SMART_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_11
LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 19 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_TOUGH_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_14
LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_13:
	end

LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 10, 6, METATILE_LilycoveMuseum_Painting2_Left, TRUE
# 5 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 11, 6, METATILE_LilycoveMuseum_Painting2_Right, TRUE
	goto LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_1

LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 8 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 18, 6, METATILE_LilycoveMuseum_Painting1_Left, TRUE
# 9 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 19, 6, METATILE_LilycoveMuseum_Painting1_Right, TRUE
	goto LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_4

LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 12 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 14, 10, METATILE_LilycoveMuseum_Painting3_Left, TRUE
# 13 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 15, 10, METATILE_LilycoveMuseum_Painting3_Right, TRUE
	goto LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_7

LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_11:
# 16 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 6, 10, METATILE_LilycoveMuseum_Painting0_Left, TRUE
# 17 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 7, 10, METATILE_LilycoveMuseum_Painting0_Right, TRUE
	goto LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_10

LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 20 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 2, 6, METATILE_LilycoveMuseum_Painting4_Left, TRUE
# 21 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setmetatile 3, 6, METATILE_LilycoveMuseum_Painting4_Right, TRUE
	goto LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_LOAD_13

LilycoveCity_LilycoveMuseum_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	map_script_2 VAR_LILYCOVE_MUSEUM_2F_STATE, 0, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall
	.2byte 0


LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall::
# 31 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 32 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 33 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 34 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 35 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall, MSGBOX_SIGN
# 36 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall_Movement_0
# 37 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 38 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall_Movement_0
# 39 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 40 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall, MSGBOX_SIGN
# 41 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 42 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 43 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 44 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 45 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit, MSGBOX_SIGN
# 46 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHallEnd
	end


# 50 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"

# 51 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHallEnd::
# 52 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
#ifdef UBFIX
# 53 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1
# 54 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
#else
# 55 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	copyvar VAR_LILYCOVE_MUSEUM_2F_STATE, 1, warn=FALSE
# 56 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
#endif
# 57 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
# 58 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_Curator::
# 62 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 63 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_GLASS_ORNAMENT, LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_2
# 68 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 69 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	switch VAR_0x8004
# 70 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 0, LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_6
# 71 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 1, LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_7
# 72 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 2, LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_7
# 73 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 3, LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_7
# 74 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 4, LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_7
# 75 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 5, LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_8
LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_4:
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_2:
# 64 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit, MSGBOX_NPC
# 65 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_6:
# 70 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit, MSGBOX_NPC
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_4

LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_7:
# 74 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting, MSGBOX_NPC
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_4

LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_8:
# 76 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 77 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	waitmovement 0
# 78 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer, MSGBOX_DEFAULT
# 79 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall_Movement_0
# 80 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests, MSGBOX_DEFAULT
# 81 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	applymovement LOCALID_MUSEUM_2F_CURATOR, Common_Movement_FacePlayer
# 82 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude, MSGBOX_DEFAULT
	givedecoration DECOR_GLASS_ORNAMENT
# 0 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_10
# 87 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setflag FLAG_RECEIVED_GLASS_ORNAMENT
LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_9:
# 89 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	closemessage
# 90 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_4

LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_10:
# 84 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 85 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou, MSGBOX_DEFAULT
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_Curator_9


LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting::
# 96 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 97 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_CUTE_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting_2
LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting_1:
# 101 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting_2:
# 98 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setvar VAR_0x8007, 2
# 99 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CutePainting_1


LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting::
# 106 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 107 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_TOUGH_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting_2
LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting_1:
# 111 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting_2:
# 108 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setvar VAR_0x8007, 4
# 109 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ToughPainting_1


LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting::
# 116 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 117 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_COOL_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting_2
LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting_1:
# 121 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting_2:
# 118 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setvar VAR_0x8007, 0
# 119 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_CoolPainting_1


LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting::
# 126 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 127 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_BEAUTY_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting_2
LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting_1:
# 131 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting_2:
# 128 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setvar VAR_0x8007, 1
# 129 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_BeautyPainting_1


LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting::
# 136 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	lockall
# 137 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto_if_set FLAG_SMART_PAINTING_MADE, LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting_2
LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting_1:
# 141 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting_2:
# 138 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	setvar VAR_0x8007, 3
# 139 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_SmartPainting_1


LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting::
# 146 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon, MSGBOX_SIGN
# 147 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 148 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	switch VAR_0x8007
# 149 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 0, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_3
# 150 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 1, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_4
# 151 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 2, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_5
# 152 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 3, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_6
# 153 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	case 4, LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_7
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_1:
# 155 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	releaseall
	end

LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_3:
# 149 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_COOL
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_1

LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_4:
# 150 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_BEAUTY
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_1

LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_5:
# 151 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_CUTE
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_1

LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_6:
# 152 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_SMART
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_1

LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_7:
# 153 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	showcontestpainting CONTEST_WINNER_MUSEUM_TOUGH
	goto LilycoveCity_LilycoveMuseum_2F_EventScript_ShowPainting_1


LilycoveCity_LilycoveMuseum_2F_EventScript_Girl::
# 160 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe, MSGBOX_NPC
	end


LilycoveCity_LilycoveMuseum_2F_EventScript_ExpertM::
# 165 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing, MSGBOX_NPC
	end


LilycoveCity_LilycoveMuseum_2F_EventScript_RichBoy::
# 170 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	msgbox LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon, MSGBOX_NPC
	end


# 36 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
LilycoveCity_LilycoveMuseum_2F_EventScript_ShowExhibitHall_Movement_0:
# 36 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	face_up
# 36 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	delay_16
	step_end

LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall::
# 174 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "This is our special exhibit hall.$"

LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall::
# 178 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "As you can plainly see, there is not\n"
	.string "a single painting on exhibit.\p"
	.string "Here, I don't wish to exhibit works of\n"
	.string "so-called classical art.\p"
	.string "Such classical works you can see on\n"
	.string "our ground floor.\p"
	.string "I wish to exhibit work that is far\n"
	.string "different from the classics.\p"
	.string "Art, after all, is not restricted to old,\n"
	.string "famous works!\p"
	.string "This exhibit hall, I wish to fill it with…\p"
	.string "Modern and vibrant artworks of\n"
	.string "POKéMON seemingly ready to spring\l"
	.string "forth into glorious life!$"

LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit::
# 201 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I beg your pardon. I didn't intend\n"
	.string "to monopolize the conversation.\p"
	.string "Now, as you are young, and yet\n"
	.string "obviously well traveled…\p"
	.string "You must encounter lively POKéMON\n"
	.string "and works of art depicting them.\p"
	.string "If you were to come across such\n"
	.string "a painting, may we ask you to obtain\l"
	.string "the artist's permission to exhibit\l"
	.string "it here?$"

LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit::
# 217 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I wish to fill this exhibit hall with\n"
	.string "modern and vibrant paintings of\l"
	.string "POKéMON.$"

LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting::
# 223 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Thanks to you, we've added a new\n"
	.string "painting to our collection!\p"
	.string "I've heard it depicts your POKéMON.\n"
	.string "Truly magnificent!\p"
	.string "Thank you so very, very much!$"

LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer::
# 233 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ah! It's you!\n"
	.string "{PLAYER}!$"

LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests::
# 238 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Isn't this marvelous?\n"
	.string "This collection of paintings!\p"
	.string "Each one of them flawless!\n"
	.string "None better than another!\p"
	.string "These paintings have attracted\n"
	.string "more guests to our ART MUSEUM.\p"
	.string "Sincerely, I thank you, {PLAYER}.\n"
	.string "This is my dream come true!$"

LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude::
# 252 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "This is merely a token of my gratitude.$"

LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou::
# 256 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I will keep this for you until we\n"
	.string "meet again.$"

LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit::
# 261 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Ah, so good to see you, {PLAYER}!\p"
	.string "It's an honor to have you visit us\n"
	.string "on your busy journeys.\p"
	.string "Please, relax and do enjoy your\n"
	.string "visit with us.$"

LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame::
# 271 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a picture frame with pink-colored\n"
	.string "adornments.$"

LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame::
# 276 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a picture frame with\n"
	.string "yellow-colored adornments.$"

LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame::
# 281 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a picture frame with\n"
	.string "blue-colored adornments.$"

LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame::
# 286 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a picture frame with\n"
	.string "red-colored adornments.$"

LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame::
# 291 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a picture frame with\n"
	.string "green-colored adornments.$"

LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon::
# 296 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "It's a painting of POKéMON.$"

LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe::
# 300 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "I've been away awhile, so the new\n"
	.string "paintings up here surprised me.\p"
	.string "I wish someone would paint my POKéMON\n"
	.string "this pretty.$"

LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing::
# 308 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Well… So this is where they show\n"
	.string "the topical POKéMON paintings.\p"
	.string "I see, these new paintings are indeed\n"
	.string "rather amusing.$"

LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon::
# 316 "data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.pory"
	.string "Wow, is that right?\n"
	.string "These paintings are of your POKéMON.\p"
	.string "Isn't that just the ultimate joy for\n"
	.string "a TRAINER?$"
