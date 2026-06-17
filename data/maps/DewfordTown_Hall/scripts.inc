DewfordTown_Hall_MapScripts::
	.byte 0


DewfordTown_Hall_EventScript_Girl::
# 4 "data/maps/DewfordTown_Hall/scripts.pory"
	lock_faceplayer
# 5 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 6 "data/maps/DewfordTown_Hall/scripts.pory"
	special IsTrendyPhraseBoring
# 7 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DewfordTown_Hall_EventScript_Girl_2
# 11 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_CantImagineLifeWithoutTrend, MSGBOX_DEFAULT
	release_end

DewfordTown_Hall_EventScript_Girl_2:
# 8 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_GettingBoredOfTrend, MSGBOX_DEFAULT
	release_end


DewfordTown_Hall_EventScript_Woman::
# 16 "data/maps/DewfordTown_Hall/scripts.pory"
	lock_faceplayer
# 17 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 18 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TeachingMonAboutTrend, MSGBOX_DEFAULT
	release_end


DewfordTown_Hall_EventScript_Man::
# 23 "data/maps/DewfordTown_Hall/scripts.pory"
	lock_faceplayer
# 24 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 25 "data/maps/DewfordTown_Hall/scripts.pory"
	special BufferDeepLinkPhrase
# 26 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_DeepLinkBetweenXAndY, MSGBOX_YESNO
# 27 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_Hall_EventScript_Man_2
# 30 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_NotEasyToKeepUp, MSGBOX_DEFAULT
DewfordTown_Hall_EventScript_Man_1:
	release_end

DewfordTown_Hall_EventScript_Man_2:
# 28 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_MyHunchWasRight, MSGBOX_DEFAULT
	goto DewfordTown_Hall_EventScript_Man_1


DewfordTown_Hall_EventScript_ExpertM::
# 36 "data/maps/DewfordTown_Hall/scripts.pory"
	lock_faceplayer
# 37 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 38 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TVShowAboutTrend, MSGBOX_DEFAULT
# 39 "data/maps/DewfordTown_Hall/scripts.pory"
	closemessage
# 40 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_EXPERT_M, Common_Movement_StepFasterUp
# 41 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
	release_end


DewfordTown_Hall_EventScript_Twin::
# 46 "data/maps/DewfordTown_Hall/scripts.pory"
	lock_faceplayer
# 47 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 48 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea, MSGBOX_DEFAULT
# 49 "data/maps/DewfordTown_Hall/scripts.pory"
	closemessage
# 50 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_TWIN, Common_Movement_StepFasterUp
# 51 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
	release_end


DewfordTown_Hall_EventScript_LittleBoy::
# 56 "data/maps/DewfordTown_Hall/scripts.pory"
	lock_faceplayer
# 57 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 58 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_CollectTrendMerchandise, MSGBOX_DEFAULT
	release_end


DewfordTown_Hall_EventScript_Bookshelf::
# 63 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 64 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 65 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BooksAboutTrend, MSGBOX_DEFAULT
# 66 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_Painting::
# 71 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 72 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 73 "data/maps/DewfordTown_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 74 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 75 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_Painting_3
# 76 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_Painting_3
# 77 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_Painting_3
# 78 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_Painting_4
# 79 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_Painting_5
# 80 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_Painting_6
# 81 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_Painting_6
# 82 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_Painting_6
DewfordTown_Hall_EventScript_Painting_1:
# 84 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end

DewfordTown_Hall_EventScript_Painting_3:
# 77 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendsScream, MSGBOX_DEFAULT
	goto DewfordTown_Hall_EventScript_Painting_1

DewfordTown_Hall_EventScript_Painting_4:
# 78 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendsSmile, MSGBOX_DEFAULT
	goto DewfordTown_Hall_EventScript_Painting_1

DewfordTown_Hall_EventScript_Painting_5:
# 79 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BirthOfTrend, MSGBOX_DEFAULT
	goto DewfordTown_Hall_EventScript_Painting_1

DewfordTown_Hall_EventScript_Painting_6:
# 82 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LastTrend, MSGBOX_DEFAULT
	goto DewfordTown_Hall_EventScript_Painting_1


DewfordTown_Hall_EventScript_SchoolKidM::
# 89 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 90 "data/maps/DewfordTown_Hall/scripts.pory"
	setvar VAR_0x8008, 0
# 91 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate
	end


DewfordTown_Hall_EventScript_PsychicM::
# 96 "data/maps/DewfordTown_Hall/scripts.pory"
	lockall
# 97 "data/maps/DewfordTown_Hall/scripts.pory"
	setvar VAR_0x8008, 1
# 98 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_DoTrendDebate
	end


DewfordTown_Hall_EventScript_DoTrendDebate::
# 103 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 104 "data/maps/DewfordTown_Hall/scripts.pory"
	special GetDewfordHallPaintingNameIndex
# 105 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_RESULT
# 106 "data/maps/DewfordTown_Hall/scripts.pory"
	case 0, DewfordTown_Hall_EventScript_DoTrendDebate_3
# 107 "data/maps/DewfordTown_Hall/scripts.pory"
	case 1, DewfordTown_Hall_EventScript_DoTrendDebate_3
# 108 "data/maps/DewfordTown_Hall/scripts.pory"
	case 2, DewfordTown_Hall_EventScript_DoTrendDebate_4
# 109 "data/maps/DewfordTown_Hall/scripts.pory"
	case 3, DewfordTown_Hall_EventScript_DoTrendDebate_4
# 110 "data/maps/DewfordTown_Hall/scripts.pory"
	case 4, DewfordTown_Hall_EventScript_DoTrendDebate_5
# 111 "data/maps/DewfordTown_Hall/scripts.pory"
	case 5, DewfordTown_Hall_EventScript_DoTrendDebate_5
# 112 "data/maps/DewfordTown_Hall/scripts.pory"
	case 6, DewfordTown_Hall_EventScript_DoTrendDebate_6
# 113 "data/maps/DewfordTown_Hall/scripts.pory"
	case 7, DewfordTown_Hall_EventScript_DoTrendDebate_7
DewfordTown_Hall_EventScript_DoTrendDebate_1:
	end

DewfordTown_Hall_EventScript_DoTrendDebate_3:
# 107 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate1
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1

DewfordTown_Hall_EventScript_DoTrendDebate_4:
# 109 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate2
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1

DewfordTown_Hall_EventScript_DoTrendDebate_5:
# 111 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate3
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1

DewfordTown_Hall_EventScript_DoTrendDebate_6:
# 112 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate4
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1

DewfordTown_Hall_EventScript_DoTrendDebate_7:
# 113 "data/maps/DewfordTown_Hall/scripts.pory"
	goto DewfordTown_Hall_EventScript_TrendDebate5
	goto DewfordTown_Hall_EventScript_DoTrendDebate_1


DewfordTown_Hall_EventScript_TrendDebate1::
# 119 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 120 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_SawTrendCoolestThing, MSGBOX_DEFAULT
# 121 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 122 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_AllegedTrendNotAuthentic, MSGBOX_DEFAULT
# 123 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_TrendDebate2::
# 128 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 129 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_ComposedTrendThemeSong, MSGBOX_DEFAULT
# 130 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 131 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_WorkOnYourSinging, MSGBOX_DEFAULT
# 132 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_TrendDebate3::
# 137 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 138 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_OrganizeTrendParty, MSGBOX_DEFAULT
# 139 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 140 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_BrilliantIndeed, MSGBOX_DEFAULT
# 141 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_TrendDebate4::
# 146 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 147 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendHasBecomePartOfLife, MSGBOX_DEFAULT
# 148 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 149 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind, MSGBOX_DEFAULT
# 150 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_TrendDebate5::
# 155 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact1
# 156 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible, MSGBOX_DEFAULT
# 157 "data/maps/DewfordTown_Hall/scripts.pory"
	call DewfordTown_Hall_EventScript_DebateReact2
# 158 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_WellBeTrendDuo, MSGBOX_DEFAULT
# 159 "data/maps/DewfordTown_Hall/scripts.pory"
	releaseall
	end


DewfordTown_Hall_EventScript_DebateReact1::
# 164 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_PSYCHIC_M, Common_Movement_StepLeft
# 165 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 166 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq DewfordTown_Hall_EventScript_DebateReact1_3
DewfordTown_Hall_EventScript_DebateReact1_1:
	end

DewfordTown_Hall_EventScript_DebateReact1_2:
# 167 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 168 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
	goto DewfordTown_Hall_EventScript_DebateReact1_1

DewfordTown_Hall_EventScript_DebateReact1_3:
# 166 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_ne DewfordTown_Hall_EventScript_DebateReact1_2
	goto DewfordTown_Hall_EventScript_DebateReact1_1


DewfordTown_Hall_EventScript_DebateReact2::
# 174 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_DEWFORD_HALL_SCHOOL_KID_M, Common_Movement_StepRight
# 175 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
# 176 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq DewfordTown_Hall_EventScript_DebateReact2_2
# 182 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_0x8008, 1
	goto_if_eq DewfordTown_Hall_EventScript_DebateReact2_4
DewfordTown_Hall_EventScript_DebateReact2_1:
# 185 "data/maps/DewfordTown_Hall/scripts.pory"
	waitmovement 0
	end

DewfordTown_Hall_EventScript_DebateReact2_2:
# 177 "data/maps/DewfordTown_Hall/scripts.pory"
	switch VAR_FACING
# 178 "data/maps/DewfordTown_Hall/scripts.pory"
	case DIR_NORTH, DewfordTown_Hall_EventScript_DebateReact2_9
# 179 "data/maps/DewfordTown_Hall/scripts.pory"
	case DIR_SOUTH, DewfordTown_Hall_EventScript_DebateReact2_10
	goto DewfordTown_Hall_EventScript_DebateReact2_1

DewfordTown_Hall_EventScript_DebateReact2_3:
# 183 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto DewfordTown_Hall_EventScript_DebateReact2_1

DewfordTown_Hall_EventScript_DebateReact2_4:
# 182 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_ne DewfordTown_Hall_EventScript_DebateReact2_3
	goto DewfordTown_Hall_EventScript_DebateReact2_1

DewfordTown_Hall_EventScript_DebateReact2_9:
# 178 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto DewfordTown_Hall_EventScript_DebateReact2_1

DewfordTown_Hall_EventScript_DebateReact2_10:
# 179 "data/maps/DewfordTown_Hall/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
	goto DewfordTown_Hall_EventScript_DebateReact2_1


DewfordTown_Hall_EventScript_SludgeBombMan::
# 190 "data/maps/DewfordTown_Hall/scripts.pory"
	lock_faceplayer
# 191 "data/maps/DewfordTown_Hall/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 192 "data/maps/DewfordTown_Hall/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_SLUDGE_BOMB, DewfordTown_Hall_EventScript_SludgeBombMan_2
# 196 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_GiveYouSludgeBomb, MSGBOX_DEFAULT
	giveitem ITEM_TM_SLUDGE_BOMB
# 0 "data/maps/DewfordTown_Hall/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Hall_EventScript_SludgeBombMan_5
DewfordTown_Hall_EventScript_SludgeBombMan_4:
# 200 "data/maps/DewfordTown_Hall/scripts.pory"
	setflag FLAG_RECEIVED_TM_SLUDGE_BOMB
	release_end

DewfordTown_Hall_EventScript_SludgeBombMan_2:
# 193 "data/maps/DewfordTown_Hall/scripts.pory"
	msgbox DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo, MSGBOX_DEFAULT
	release_end

DewfordTown_Hall_EventScript_SludgeBombMan_5:
# 198 "data/maps/DewfordTown_Hall/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto DewfordTown_Hall_EventScript_SludgeBombMan_4


DewfordTown_Hall_Text_CantImagineLifeWithoutTrend::
# 204 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "What's in vogue? Why, it has to be\n"
	.string "“{STR_VAR_1}”!\p"
	.string "I can't imagine what life would be like\n"
	.string "without “{STR_VAR_1}”!$"

DewfordTown_Hall_Text_GettingBoredOfTrend::
# 212 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "What's in vogue? Why, it has to be\n"
	.string "“{STR_VAR_1}”!\p"
	.string "But I'm getting kind of bored with it.\p"
	.string "I should look for the next big thing.$"

DewfordTown_Hall_Text_TeachingMonAboutTrend::
# 221 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm teaching my POKéMON about\n"
	.string "“{STR_VAR_1},”\l"
	.string "but it's not going well.\p"
	.string "It's a bit too much, I think.$"

DewfordTown_Hall_Text_DeepLinkBetweenXAndY::
# 229 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I'm studying up on the hip and trendy\n"
	.string "“{STR_VAR_1}” now.\p"
	.string "Is it true that there's a deep link\n"
	.string "between “{STR_VAR_1}”\l"
	.string "and “{STR_VAR_2}”?$"

DewfordTown_Hall_Text_MyHunchWasRight::
# 238 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh!\n"
	.string "So, my hunch was right!\p"
	.string "I'm one step closer to being hip and\n"
	.string "happening, yowza!$"

DewfordTown_Hall_Text_NotEasyToKeepUp::
# 246 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "What?!\n"
	.string "Is that so?!\p"
	.string "It's not easy for an older fellow like\n"
	.string "me to keep up with trends!$"

DewfordTown_Hall_Text_TVShowAboutTrend::
# 254 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "This whole business about\n"
	.string "“{STR_VAR_1}”…\l"
	.string "Isn't there a TV show on it?$"

DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea::
# 260 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Across the sea…\p"
	.string "Is “{STR_VAR_1}”\n"
	.string "even more popular?$"

DewfordTown_Hall_Text_CollectTrendMerchandise::
# 267 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I collect official\n"
	.string "“{STR_VAR_1}”\l"
	.string "licensed merchandise.\p"
	.string "I have official\n"
	.string "“{STR_VAR_1}” DOLLS…\p"
	.string "Official “{STR_VAR_1}”\n"
	.string "brand clothing…\p"
	.string "And officially licensed\n"
	.string "“{STR_VAR_1}”\l"
	.string "picture books.\p"
	.string "Heheh, I own!\n"
	.string "I'm not sharing anything with you!$"

DewfordTown_Hall_Text_BooksAboutTrend::
# 286 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "IDENTIFYING GOOD\n"
	.string "“{STR_VAR_1}” &\l"
	.string "BAD “{STR_VAR_1}”…\p"
	.string "THE LINK BETWEEN\n"
	.string "“{STR_VAR_1}” AND\l"
	.string "POKéMON…\p"
	.string "USEFUL\n"
	.string "“{STR_VAR_1}”…\p"
	.string "It's neatly jammed with books about\n"
	.string "“{STR_VAR_1}.”$"

DewfordTown_Hall_Text_TrendsScream::
# 302 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}'S\n"
	.string "SCREAM” is the title.$"

DewfordTown_Hall_Text_TrendsSmile::
# 307 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "“{STR_VAR_1}'S\n"
	.string "SMILE” is the title.$"

DewfordTown_Hall_Text_LastTrend::
# 312 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's titled “THE LAST\n"
	.string "{STR_VAR_1}”.$"

DewfordTown_Hall_Text_BirthOfTrend::
# 317 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "It's titled “THE BIRTH OF\n"
	.string "{STR_VAR_1}”.$"

DewfordTown_Hall_Text_SawTrendCoolestThing::
# 322 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I saw “{STR_VAR_1}”!\n"
	.string "Cool, huh?\p"
	.string "It's, like, the coolest thing going!\p"
	.string "It was awesome!\n"
	.string "It was the real thing, oh yeah!$"

DewfordTown_Hall_Text_AllegedTrendNotAuthentic::
# 332 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh, no, no, no.\p"
	.string "That alleged\n"
	.string "“{STR_VAR_1}”\l"
	.string "you claim to have seen--it's not.\p"
	.string "The authentic article is much…\n"
	.string "How should I say it?\l"
	.string "Sharper, yet more mellow!\p"
	.string "Ah, no matter. It's astonishing!$"

DewfordTown_Hall_Text_ComposedTrendThemeSong::
# 346 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Hey, listen, I composed a theme song\n"
	.string "for “{STR_VAR_1}.”\p"
	.string "“{STR_VAR_1}”\n"
	.string "is really popular right now.\p"
	.string "Okay, listen!\n"
	.string "… …\p"
	.string "Oh!\n"
	.string "{STR_VAR_1}!\p"
	.string "Wonderful\n"
	.string "{STR_VAR_1}!$"

DewfordTown_Hall_Text_WorkOnYourSinging::
# 363 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "… …\p"
	.string "I dare say, chap, it would pay for you\n"
	.string "to work on your singing before you\l"
	.string "trifle yourself with\l"
	.string "“{STR_VAR_1}.”$"

DewfordTown_Hall_Text_OrganizeTrendParty::
# 372 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Anyway, as I was saying earlier, we\n"
	.string "should get together and organize a\l"
	.string "“{STR_VAR_1}” party\l"
	.string "on the island.$"

DewfordTown_Hall_Text_BrilliantIndeed::
# 379 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Oh, a smashing good idea!\p"
	.string "It will settle once and for all\n"
	.string "who is the best at\l"
	.string "“{STR_VAR_1}.”\l"
	.string "Brilliant, indeed!\p"
	.string "Starting today, our lives will revolve\n"
	.string "around “{STR_VAR_1}”!$"

DewfordTown_Hall_Text_TrendHasBecomePartOfLife::
# 391 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I was thinking, though…\p"
	.string "Wouldn't you agree that\n"
	.string "“{STR_VAR_1}” has\l"
	.string "grown from being something trendy to\l"
	.string "being a part of our daily lives?$"

DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind::
# 400 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Beg pardon?\n"
	.string "That much, what?\p"
	.string "However, it's true that\n"
	.string "“{STR_VAR_1}”\l"
	.string "weighs heavily on your mind, whether\l"
	.string "you're awake or asleep.\p"
	.string "Absolutely, you're the\n"
	.string "“{STR_VAR_1}”\l"
	.string "PROFESSOR, old sport!$"

DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible::
# 414 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "If you and me team up as a combo,\n"
	.string "we'll be invincible when it comes to all\l"
	.string "things “{STR_VAR_1}”!$"

DewfordTown_Hall_Text_WellBeTrendDuo::
# 420 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "Spot on, my friend!\p"
	.string "We shall be the\n"
	.string "“{STR_VAR_1}” DUO!\p"
	.string "Isn't that a ripe image?\n"
	.string "Hahahah!$"

DewfordTown_Hall_Text_GiveYouSludgeBomb::
# 430 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "For me, SLUDGE BOMB is at the peak\n"
	.string "of popularity. It's the one.\p"
	.string "Hunh? You're telling me that you don't\n"
	.string "know about SLUDGE BOMB?\p"
	.string "That's outright pitiful.\n"
	.string "I'll give you one.$"

DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo::
# 441 "data/maps/DewfordTown_Hall/scripts.pory"
	.string "I love SLUDGE BOMB.\p"
	.string "But POKéMON with the move\n"
	.string "“{STR_VAR_1}”\l"
	.string "are in, too.$"
