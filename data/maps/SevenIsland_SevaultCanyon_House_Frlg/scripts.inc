SevenIsland_SevaultCanyon_House_Frlg_MapScripts::
	.byte 0


SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan::
# 6 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	lock
# 7 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	goto_if_set FLAG_TEMP_2, SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_2
# 13 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	playbgm MUS_SCHOOL, 0
# 14 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	applymovement LOCALID_CHANSEY_DANCE_MAN, SevenIsland_SevaultCanyon_House_Movement_ChanseyDance
# 15 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmovement 0
# 16 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	fadedefaultbgm
# 17 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay 30
# 18 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	applymovement LOCALID_CHANSEY_DANCE_MAN, Common_Movement_FacePlayer
# 19 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmovement 0
# 20 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_ChanseyDanceJoinIn
# 21 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 22 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_WouldYouLikeToDance, MSGBOX_YESNO
# 23 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_5
# 28 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_DancedChanseyDance
# 29 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	closemessage
# 30 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 31 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_8
SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_7:
# 35 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay 30
# 36 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	playbgm MUS_SCHOOL, 0
# 37 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SevenIsland_SevaultCanyon_House_Movement_ChanseyDance
# 38 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmovement 0
# 39 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	fadedefaultbgm
# 40 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay 30
# 41 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 42 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_YoureAllChipperNow
# 43 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	setflag FLAG_TEMP_2
	release_end

SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_2:
# 8 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	applymovement LOCALID_CHANSEY_DANCE_MAN, Common_Movement_FacePlayer
# 9 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmovement 0
# 10 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_ChanseyDanceJoinIn
	release_end

SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_5:
# 24 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 25 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_ComeOnDance
	release_end

SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_8:
# 32 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 33 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmovement 0
	goto SevenIsland_SevaultCanyon_House_EventScript_ChanseyDanceMan_7


# 47 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
SevenIsland_SevaultCanyon_House_Movement_ChanseyDance:
# 49 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	step_down
# 50 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_16
# 51 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	step_down
# 52 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_16
# 53 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	step_down
# 54 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_16
# 55 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	step_down
# 56 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_16
# 57 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	step_faster_right
# 58 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_4
# 59 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	step_faster_up
# 60 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_4
# 61 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	step_faster_left
# 62 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_4
# 63 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	step_faster_down
# 64 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	delay_4
	step_end

SevenIsland_SevaultCanyon_House_EventScript_Chansey::
# 68 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	lock_faceplayer
# 69 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitse
# 70 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 71 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	msgbox SevenIsland_SevaultCanyon_House_Text_Chansey
# 72 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	waitmoncry
	release_end


SevenIsland_SevaultCanyon_House_Text_ChanseyDanceJoinIn::
# 76 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Dance, dance!\n"
	.string "CHANSEY Dance!\p"
	.string "You join in, too!\n"
	.string "Dance, dance!$"

SevenIsland_SevaultCanyon_House_Text_WouldYouLikeToDance::
# 84 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Would you like to dance?$"

SevenIsland_SevaultCanyon_House_Text_ComeOnDance::
# 88 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Come on, dance!$"

SevenIsland_SevaultCanyon_House_Text_DancedChanseyDance::
# 92 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "{PLAYER} danced the CHANSEY Dance!$"

SevenIsland_SevaultCanyon_House_Text_YoureAllChipperNow::
# 96 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "Ahahahaha!\p"
	.string "There, you're all chipper now!\n"
	.string "Lucky!$"

SevenIsland_SevaultCanyon_House_Text_Chansey::
# 103 "data/maps/SevenIsland_SevaultCanyon_House_Frlg/scripts.pory"
	.string "CHANSEY: Chansi! Chansi!$"
